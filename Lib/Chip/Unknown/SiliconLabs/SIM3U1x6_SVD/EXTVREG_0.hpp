#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x40042000,0x70fffffe,0,unsigned>;
        ///Stand-Alone Mode Enable. 
        enum class SaenVal {
            disabled=0x00000000,     ///<Use the external regulator in normal mode.
            enabled=0x00000001,     ///<Use the external regulator in stand-alone mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SaenVal> saen{}; 
        namespace SaenValC{
            constexpr Register::FieldValue<decltype(saen)::Type,SaenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(saen)::Type,SaenVal::enabled> enabled{};
        }
        }
        ///Weak Pull Up/Down Enable. 
        enum class WpullenVal {
            disabled=0x00000000,     ///<Disable the external regulator weak pull-up/down resistor on the EXREGBD pin and weak pull-down resistor on the EXREGOUT pin.
            enabled=0x00000001,     ///<Enable the external regulator weak pull-up/down resistor on the EXREGBD pin and weak pull-down resistor on the EXREGOUT pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,WpullenVal> wpullen{}; 
        namespace WpullenValC{
            constexpr Register::FieldValue<decltype(wpullen)::Type,WpullenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(wpullen)::Type,WpullenVal::enabled> enabled{};
        }
        }
        ///Foldback Limiting Enable. 
        enum class FblenVal {
            disabled=0x00000000,     ///<Disable foldback limiting.
            enabled=0x00000001,     ///<Enable foldback limiting.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,FblenVal> fblen{}; 
        namespace FblenValC{
            constexpr Register::FieldValue<decltype(fblen)::Type,FblenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(fblen)::Type,FblenVal::enabled> enabled{};
        }
        }
        ///NPN/PNP Type Select. 
        enum class PnselVal {
            npn=0x00000000,     ///<Select NPN Mode.
            pnp=0x00000001,     ///<Select PNP Mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,PnselVal> pnsel{}; 
        namespace PnselValC{
            constexpr Register::FieldValue<decltype(pnsel)::Type,PnselVal::npn> npn{};
            constexpr Register::FieldValue<decltype(pnsel)::Type,PnselVal::pnp> pnp{};
        }
        }
        ///Foldback Sensing Pin Select. 
        enum class FbpinselVal {
            exregsn=0x00000000,     ///<Use the input to the EXREGSN pin for foldback limiting.
            vregin=0x00000001,     ///<Use the input to the VREGIN pin for foldback limiting.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,FbpinselVal> fbpinsel{}; 
        namespace FbpinselValC{
            constexpr Register::FieldValue<decltype(fbpinsel)::Type,FbpinselVal::exregsn> exregsn{};
            constexpr Register::FieldValue<decltype(fbpinsel)::Type,FbpinselVal::vregin> vregin{};
        }
        }
        ///External Regulator Enable. 
        enum class EvregenVal {
            disabled=0x00000000,     ///<Disable the external regulator.
            enabled=0x00000001,     ///<Enable the external regulator.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,EvregenVal> evregen{}; 
        namespace EvregenValC{
            constexpr Register::FieldValue<decltype(evregen)::Type,EvregenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(evregen)::Type,EvregenVal::enabled> enabled{};
        }
        }
    }
    namespace Noneconfig{    ///<Module Configuration
        using Addr = Register::Address<0x40042010,0xc0f888e0,0,unsigned>;
        ///Minimum Current Fine Select. 
        enum class IminfineVal {
            v0Ua=0x00000000,     ///<Minimum current limit is IMIN current + 0 uA. 
            v0p25Ua=0x00000001,     ///<Minimum current limit is IMIN current + 0.25 uA.
            v0p5Ua=0x00000002,     ///<Minimum current limit is IMIN current + 0.50 uA.
            v0p75Ua=0x00000003,     ///<Minimum current limit is IMIN current + 0.75 uA.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,IminfineVal> iminfine{}; 
        namespace IminfineValC{
            constexpr Register::FieldValue<decltype(iminfine)::Type,IminfineVal::v0Ua> v0Ua{};
            constexpr Register::FieldValue<decltype(iminfine)::Type,IminfineVal::v0p25Ua> v0p25Ua{};
            constexpr Register::FieldValue<decltype(iminfine)::Type,IminfineVal::v0p5Ua> v0p5Ua{};
            constexpr Register::FieldValue<decltype(iminfine)::Type,IminfineVal::v0p75Ua> v0p75Ua{};
        }
        }
        ///Minimum Current Select. 
        enum class IminVal {
            v1Ua=0x00000000,     ///<Minimum current limit is 1 uA + IMINFINE current.
            v2Ua=0x00000001,     ///<Minimum current limit is 2 uA + IMINFINE current.
            v3Ua=0x00000002,     ///<Minimum current limit is 3 uA + IMINFINE current.
            v4Ua=0x00000003,     ///<Minimum current limit is 4 uA + IMINFINE current.
            v5Ua=0x00000004,     ///<Minimum current limit is 5 uA + IMINFINE current.
            v6Ua=0x00000005,     ///<Minimum current limit is 6 uA + IMINFINE current.
            v7Ua=0x00000006,     ///<Minimum current limit is 7 uA + IMINFINE current.
            v8Ua=0x00000007,     ///<Minimum current limit is 8 uA + IMINFINE current.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,IminVal> imin{}; 
        namespace IminValC{
            constexpr Register::FieldValue<decltype(imin)::Type,IminVal::v1Ua> v1Ua{};
            constexpr Register::FieldValue<decltype(imin)::Type,IminVal::v2Ua> v2Ua{};
            constexpr Register::FieldValue<decltype(imin)::Type,IminVal::v3Ua> v3Ua{};
            constexpr Register::FieldValue<decltype(imin)::Type,IminVal::v4Ua> v4Ua{};
            constexpr Register::FieldValue<decltype(imin)::Type,IminVal::v5Ua> v5Ua{};
            constexpr Register::FieldValue<decltype(imin)::Type,IminVal::v6Ua> v6Ua{};
            constexpr Register::FieldValue<decltype(imin)::Type,IminVal::v7Ua> v7Ua{};
            constexpr Register::FieldValue<decltype(imin)::Type,IminVal::v8Ua> v8Ua{};
        }
        }
        ///Foldback Voltage Offset Select. 
        enum class FbvoselVal {
            v0V=0x00000000,     ///<Foldback voltage offset is 0 V.
            v0p5V=0x00000001,     ///<Foldback voltage offset is 0.5 V.
            v1V=0x00000002,     ///<Foldback voltage offset is 1 V.
            v1p5V=0x00000003,     ///<Foldback voltage offset is 1.5 V.
            v2V=0x00000004,     ///<Foldback voltage offset is 2 V.
            v2p5V=0x00000005,     ///<Foldback voltage offset is 2.5 V.
            v3V=0x00000006,     ///<Foldback voltage offset is 3 V.
            v3p5V=0x00000007,     ///<Foldback voltage offset is 3.5 V.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,FbvoselVal> fbvosel{}; 
        namespace FbvoselValC{
            constexpr Register::FieldValue<decltype(fbvosel)::Type,FbvoselVal::v0V> v0V{};
            constexpr Register::FieldValue<decltype(fbvosel)::Type,FbvoselVal::v0p5V> v0p5V{};
            constexpr Register::FieldValue<decltype(fbvosel)::Type,FbvoselVal::v1V> v1V{};
            constexpr Register::FieldValue<decltype(fbvosel)::Type,FbvoselVal::v1p5V> v1p5V{};
            constexpr Register::FieldValue<decltype(fbvosel)::Type,FbvoselVal::v2V> v2V{};
            constexpr Register::FieldValue<decltype(fbvosel)::Type,FbvoselVal::v2p5V> v2p5V{};
            constexpr Register::FieldValue<decltype(fbvosel)::Type,FbvoselVal::v3V> v3V{};
            constexpr Register::FieldValue<decltype(fbvosel)::Type,FbvoselVal::v3p5V> v3p5V{};
        }
        }
        ///Voltage Sense Gain Multiplier. 
        enum class FbrateVal {
            v4UaPerV=0x00000000,     ///<Set the foldback rate to 4 uA/V.
            v2UaPerV=0x00000001,     ///<Set the foldback rate to 2 uA/V.
            v1UaPerV=0x00000002,     ///<Set the foldback rate to 1 uA/V.
            v0p5UaPerV=0x00000003,     ///<Set the foldback rate to 0.5 uA/V.
            v8UaPerV=0x00000005,     ///<Set the foldback rate to 8 uA/V.
            v16UaPerV=0x00000006,     ///<Set the foldback rate to 16 uA/V.
            v32UaPerV=0x00000007,     ///<Set the foldback rate to 32 uA/V.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,FbrateVal> fbrate{}; 
        namespace FbrateValC{
            constexpr Register::FieldValue<decltype(fbrate)::Type,FbrateVal::v4UaPerV> v4UaPerV{};
            constexpr Register::FieldValue<decltype(fbrate)::Type,FbrateVal::v2UaPerV> v2UaPerV{};
            constexpr Register::FieldValue<decltype(fbrate)::Type,FbrateVal::v1UaPerV> v1UaPerV{};
            constexpr Register::FieldValue<decltype(fbrate)::Type,FbrateVal::v0p5UaPerV> v0p5UaPerV{};
            constexpr Register::FieldValue<decltype(fbrate)::Type,FbrateVal::v8UaPerV> v8UaPerV{};
            constexpr Register::FieldValue<decltype(fbrate)::Type,FbrateVal::v16UaPerV> v16UaPerV{};
            constexpr Register::FieldValue<decltype(fbrate)::Type,FbrateVal::v32UaPerV> v32UaPerV{};
        }
        }
        ///Maximum Current Select. 
        enum class ImaxVal {
            v2Ua=0x00000000,     ///<Maximum current limit is 2 uA.
            v3Ua=0x00000001,     ///<Maximum current limit is 3 uA.
            v4Ua=0x00000002,     ///<Maximum current limit is 4 uA.
            v5Ua=0x00000003,     ///<Maximum current limit is 5 uA.
            v6Ua=0x00000004,     ///<Maximum current limit is 6 uA.
            v7Ua=0x00000005,     ///<Maximum current limit is 7 uA.
            v8Ua=0x00000006,     ///<Maximum current limit is 8 uA.
            v9Ua=0x00000007,     ///<Maximum current limit is 9 uA.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,ImaxVal> imax{}; 
        namespace ImaxValC{
            constexpr Register::FieldValue<decltype(imax)::Type,ImaxVal::v2Ua> v2Ua{};
            constexpr Register::FieldValue<decltype(imax)::Type,ImaxVal::v3Ua> v3Ua{};
            constexpr Register::FieldValue<decltype(imax)::Type,ImaxVal::v4Ua> v4Ua{};
            constexpr Register::FieldValue<decltype(imax)::Type,ImaxVal::v5Ua> v5Ua{};
            constexpr Register::FieldValue<decltype(imax)::Type,ImaxVal::v6Ua> v6Ua{};
            constexpr Register::FieldValue<decltype(imax)::Type,ImaxVal::v7Ua> v7Ua{};
            constexpr Register::FieldValue<decltype(imax)::Type,ImaxVal::v8Ua> v8Ua{};
            constexpr Register::FieldValue<decltype(imax)::Type,ImaxVal::v9Ua> v9Ua{};
        }
        }
        ///Regulator Output Voltage Select. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> voutsel{}; 
    }
    namespace Nonestatus{    ///<Module Status
        using Addr = Register::Address<0x40042020,0xfffffffe,0,unsigned>;
        ///Maximum Foldback Flag. 
        enum class FbmaxfVal {
            notSet=0x00000000,     ///<Maximum foldback has not been reached.
            set=0x00000001,     ///<Maximum foldback has been reached.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FbmaxfVal> fbmaxf{}; 
        namespace FbmaxfValC{
            constexpr Register::FieldValue<decltype(fbmaxf)::Type,FbmaxfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(fbmaxf)::Type,FbmaxfVal::set> set{};
        }
        }
    }
    namespace Nonecscontrol{    ///<Current Sense Control
        using Addr = Register::Address<0x40042040,0x3fffffff,0,unsigned>;
        ///External Regulator Current Sense Enable. 
        enum class IsnsenVal {
            disabled=0x00000000,     ///<Disable external regulator current sensing.
            enabled=0x00000001,     ///<Enable external regulator current sensing.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,IsnsenVal> isnsen{}; 
        namespace IsnsenValC{
            constexpr Register::FieldValue<decltype(isnsen)::Type,IsnsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(isnsen)::Type,IsnsenVal::enabled> enabled{};
        }
        }
        ///ADC Current Sense Enable. 
        enum class AdcisnsenVal {
            disabled=0x00000000,     ///<Disable ADC current sensing.
            enabled=0x00000001,     ///<Enable ADC current sensing.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,AdcisnsenVal> adcisnsen{}; 
        namespace AdcisnsenValC{
            constexpr Register::FieldValue<decltype(adcisnsen)::Type,AdcisnsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adcisnsen)::Type,AdcisnsenVal::enabled> enabled{};
        }
        }
    }
    namespace Nonecsconfig{    ///<Current Sense Configuration
        using Addr = Register::Address<0x40042050,0xffffff00,0,unsigned>;
        ///ADC Current Sense Gain. 
        enum class IsadcgainVal {
            v16x=0x00000000,     ///<ADC current sensing input gain is 16.
            v8x=0x00000001,     ///<ADC current sensing input gain is 8.
            v4x=0x00000002,     ///<ADC current sensing input gain is 4.
            v2x=0x00000003,     ///<ADC current sensing input gain is 2.
            v1x=0x00000004,     ///<ADC current sensing input gain is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,IsadcgainVal> isadcgain{}; 
        namespace IsadcgainValC{
            constexpr Register::FieldValue<decltype(isadcgain)::Type,IsadcgainVal::v16x> v16x{};
            constexpr Register::FieldValue<decltype(isadcgain)::Type,IsadcgainVal::v8x> v8x{};
            constexpr Register::FieldValue<decltype(isadcgain)::Type,IsadcgainVal::v4x> v4x{};
            constexpr Register::FieldValue<decltype(isadcgain)::Type,IsadcgainVal::v2x> v2x{};
            constexpr Register::FieldValue<decltype(isadcgain)::Type,IsadcgainVal::v1x> v1x{};
        }
        }
        ///External Regulator Current Sense Gain. 
        enum class IsogainVal {
            v16x=0x00000000,     ///<External regulator current sensing gain is 16.
            v8x=0x00000001,     ///<External regulator current sensing gain is 8.
            v4x=0x00000002,     ///<External regulator current sensing gain is 4.
            v2x=0x00000003,     ///<External regulator current sensing gain is 2.
            v1x=0x00000004,     ///<External regulator current sensing gain is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,IsogainVal> isogain{}; 
        namespace IsogainValC{
            constexpr Register::FieldValue<decltype(isogain)::Type,IsogainVal::v16x> v16x{};
            constexpr Register::FieldValue<decltype(isogain)::Type,IsogainVal::v8x> v8x{};
            constexpr Register::FieldValue<decltype(isogain)::Type,IsogainVal::v4x> v4x{};
            constexpr Register::FieldValue<decltype(isogain)::Type,IsogainVal::v2x> v2x{};
            constexpr Register::FieldValue<decltype(isogain)::Type,IsogainVal::v1x> v1x{};
        }
        }
        ///External Regulator Current Sense Input Select. 
        enum class IsinselVal {
            mode0=0x00000000,     ///<Select external regulator current sensing mode 0.
            mode1=0x00000001,     ///<Select external regulator current sensing mode 1.
            mode2=0x00000002,     ///<Select external regulator current sensing mode 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,IsinselVal> isinsel{}; 
        namespace IsinselValC{
            constexpr Register::FieldValue<decltype(isinsel)::Type,IsinselVal::mode0> mode0{};
            constexpr Register::FieldValue<decltype(isinsel)::Type,IsinselVal::mode1> mode1{};
            constexpr Register::FieldValue<decltype(isinsel)::Type,IsinselVal::mode2> mode2{};
        }
        }
    }
}
