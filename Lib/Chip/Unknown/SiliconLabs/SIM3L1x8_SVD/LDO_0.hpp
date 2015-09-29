#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Control
        using Addr = Register::Address<0x40039000,0xff809f9f,0,unsigned>;
        ///Analog LDO Bias Select. 
        enum class aldobselVal {
            low=0x00000000,     ///<Select a low bias for the analog LDO.
            high=0x00000001,     ///<Select a high bias for the analog LDO.
        };
        namespace aldobselValC{
            constexpr MPL::Value<aldobselVal,aldobselVal::low> low{};
            constexpr MPL::Value<aldobselVal,aldobselVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,aldobselVal> aldobsel{}; 
        ///Analog LDO Source Select. 
        enum class aldosselVal {
            vbat=0x00000000,     ///<Select the VBAT pin as the input voltage to the analog LDO.
            dcdc=0x00000001,     ///<Select the output of the DC-DC converter as the input voltage to the analog LDO.
        };
        namespace aldosselValC{
            constexpr MPL::Value<aldosselVal,aldosselVal::vbat> vbat{};
            constexpr MPL::Value<aldosselVal,aldosselVal::dcdc> dcdc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,aldosselVal> aldossel{}; 
        ///Memory LDO Bias Select. 
        enum class mldobselVal {
            low=0x00000000,     ///<Select a low bias for the memory LDO.
            high=0x00000001,     ///<Select a high bias for the memory LDO.
        };
        namespace mldobselValC{
            constexpr MPL::Value<mldobselVal,mldobselVal::low> low{};
            constexpr MPL::Value<mldobselVal,mldobselVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,mldobselVal> mldobsel{}; 
        ///Memory LDO Source Select. 
        enum class mldosselVal {
            vbat=0x00000000,     ///<Select the VBAT pin as the input voltage to the memory LDO.
            dcdc=0x00000001,     ///<Select the output of the DC-DC converter as the input voltage to the memory LDO.
        };
        namespace mldosselValC{
            constexpr MPL::Value<mldosselVal,mldosselVal::vbat> vbat{};
            constexpr MPL::Value<mldosselVal,mldosselVal::dcdc> dcdc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,mldosselVal> mldossel{}; 
        ///Digital LDO Output Value Select. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> dldooval{}; 
        ///Digital LDO Bias Select. 
        enum class dldobselVal {
            low=0x00000000,     ///<Select a low bias for the digital LDO.
            high=0x00000001,     ///<Select a high bias for the digital LDO.
        };
        namespace dldobselValC{
            constexpr MPL::Value<dldobselVal,dldobselVal::low> low{};
            constexpr MPL::Value<dldobselVal,dldobselVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,dldobselVal> dldobsel{}; 
        ///Digital LDO Source Select. 
        enum class dldosselVal {
            vbat=0x00000000,     ///<Select the VBAT pin as the input voltage to the digital LDO.
            dcdc=0x00000001,     ///<Select the output of the DC-DC converter as the input voltage to the digital LDO.
        };
        namespace dldosselValC{
            constexpr MPL::Value<dldosselVal,dldosselVal::vbat> vbat{};
            constexpr MPL::Value<dldosselVal,dldosselVal::dcdc> dcdc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,dldosselVal> dldossel{}; 
    }
}
