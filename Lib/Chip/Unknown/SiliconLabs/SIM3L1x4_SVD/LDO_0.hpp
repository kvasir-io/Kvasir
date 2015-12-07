#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Control
        using Addr = Register::Address<0x40039000,0xff808080,0,unsigned>;
        ///Analog LDO Output Value Select. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> aldooval{}; 
        namespace AldoovalValC{
        }
        ///Analog LDO Bias Select. 
        enum class AldobselVal {
            low=0x00000000,     ///<Select a low bias for the analog LDO.
            high=0x00000001,     ///<Select a high bias for the analog LDO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,AldobselVal> aldobsel{}; 
        namespace AldobselValC{
            constexpr Register::FieldValue<decltype(aldobsel),AldobselVal::low> low{};
            constexpr Register::FieldValue<decltype(aldobsel),AldobselVal::high> high{};
        }
        ///Analog LDO Source Select. 
        enum class AldosselVal {
            vbat=0x00000000,     ///<Select the VBAT pin as the input voltage to the analog LDO.
            dcdc=0x00000001,     ///<Select the output of the DC-DC converter as the input voltage to the analog LDO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,AldosselVal> aldossel{}; 
        namespace AldosselValC{
            constexpr Register::FieldValue<decltype(aldossel),AldosselVal::vbat> vbat{};
            constexpr Register::FieldValue<decltype(aldossel),AldosselVal::dcdc> dcdc{};
        }
        ///Memory LDO Output Value Select. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> mldooval{}; 
        namespace MldoovalValC{
        }
        ///Memory LDO Bias Select. 
        enum class MldobselVal {
            low=0x00000000,     ///<Select a low bias for the memory LDO.
            high=0x00000001,     ///<Select a high bias for the memory LDO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,MldobselVal> mldobsel{}; 
        namespace MldobselValC{
            constexpr Register::FieldValue<decltype(mldobsel),MldobselVal::low> low{};
            constexpr Register::FieldValue<decltype(mldobsel),MldobselVal::high> high{};
        }
        ///Memory LDO Source Select. 
        enum class MldosselVal {
            vbat=0x00000000,     ///<Select the VBAT pin as the input voltage to the memory LDO.
            dcdc=0x00000001,     ///<Select the output of the DC-DC converter as the input voltage to the memory LDO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,MldosselVal> mldossel{}; 
        namespace MldosselValC{
            constexpr Register::FieldValue<decltype(mldossel),MldosselVal::vbat> vbat{};
            constexpr Register::FieldValue<decltype(mldossel),MldosselVal::dcdc> dcdc{};
        }
        ///Digital LDO Output Value Select. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> dldooval{}; 
        namespace DldoovalValC{
        }
        ///Digital LDO Bias Select. 
        enum class DldobselVal {
            low=0x00000000,     ///<Select a low bias for the digital LDO.
            high=0x00000001,     ///<Select a high bias for the digital LDO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,DldobselVal> dldobsel{}; 
        namespace DldobselValC{
            constexpr Register::FieldValue<decltype(dldobsel),DldobselVal::low> low{};
            constexpr Register::FieldValue<decltype(dldobsel),DldobselVal::high> high{};
        }
        ///Digital LDO Source Select. 
        enum class DldosselVal {
            vbat=0x00000000,     ///<Select the VBAT pin as the input voltage to the digital LDO.
            dcdc=0x00000001,     ///<Select the output of the DC-DC converter as the input voltage to the digital LDO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,DldosselVal> dldossel{}; 
        namespace DldosselValC{
            constexpr Register::FieldValue<decltype(dldossel),DldosselVal::vbat> vbat{};
            constexpr Register::FieldValue<decltype(dldossel),DldosselVal::dcdc> dcdc{};
        }
    }
}
