#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x40042000,0x70fffffe,0,unsigned>;
        ///Stand-Alone Mode Enable. 
        enum class saenVal {
            disabled=0x00000000,     ///<Use the external regulator in normal mode.
            enabled=0x00000001,     ///<Use the external regulator in stand-alone mode.
        };
        namespace saenValC{
            constexpr MPL::Value<saenVal,saenVal::disabled> disabled{};
            constexpr MPL::Value<saenVal,saenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,saenVal> saen{}; 
        ///Weak Pull Up/Down Enable. 
        enum class wpullenVal {
            disabled=0x00000000,     ///<Disable the external regulator weak pull-up/down resistor on the EXREGBD pin and weak pull-down resistor on the EXREGOUT pin.
            enabled=0x00000001,     ///<Enable the external regulator weak pull-up/down resistor on the EXREGBD pin and weak pull-down resistor on the EXREGOUT pin.
        };
        namespace wpullenValC{
            constexpr MPL::Value<wpullenVal,wpullenVal::disabled> disabled{};
            constexpr MPL::Value<wpullenVal,wpullenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,wpullenVal> wpullen{}; 
        ///Foldback Limiting Enable. 
        enum class fblenVal {
            disabled=0x00000000,     ///<Disable foldback limiting.
            enabled=0x00000001,     ///<Enable foldback limiting.
        };
        namespace fblenValC{
            constexpr MPL::Value<fblenVal,fblenVal::disabled> disabled{};
            constexpr MPL::Value<fblenVal,fblenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,fblenVal> fblen{}; 
        ///NPN/PNP Type Select. 
        enum class pnselVal {
            npn=0x00000000,     ///<Select NPN Mode.
            pnp=0x00000001,     ///<Select PNP Mode.
        };
        namespace pnselValC{
            constexpr MPL::Value<pnselVal,pnselVal::npn> npn{};
            constexpr MPL::Value<pnselVal,pnselVal::pnp> pnp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,pnselVal> pnsel{}; 
        ///Foldback Sensing Pin Select. 
        enum class fbpinselVal {
            exregsn=0x00000000,     ///<Use the input to the EXREGSN pin for foldback limiting.
            vregin=0x00000001,     ///<Use the input to the VREGIN pin for foldback limiting.
        };
        namespace fbpinselValC{
            constexpr MPL::Value<fbpinselVal,fbpinselVal::exregsn> exregsn{};
            constexpr MPL::Value<fbpinselVal,fbpinselVal::vregin> vregin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,fbpinselVal> fbpinsel{}; 
        ///External Regulator Enable. 
        enum class evregenVal {
            disabled=0x00000000,     ///<Disable the external regulator.
            enabled=0x00000001,     ///<Enable the external regulator.
        };
        namespace evregenValC{
            constexpr MPL::Value<evregenVal,evregenVal::disabled> disabled{};
            constexpr MPL::Value<evregenVal,evregenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,evregenVal> evregen{}; 
    }
    namespace Noneconfig{    ///<Module Configuration
        using Addr = Register::Address<0x40042010,0xc0f888e0,0,unsigned>;
        ///Minimum Current Fine Select. 
        enum class iminfineVal {
            v0Ua=0x00000000,     ///<Minimum current limit is IMIN current + 0 uA. 
            v0p25Ua=0x00000001,     ///<Minimum current limit is IMIN current + 0.25 uA.
            v0p5Ua=0x00000002,     ///<Minimum current limit is IMIN current + 0.50 uA.
            v0p75Ua=0x00000003,     ///<Minimum current limit is IMIN current + 0.75 uA.
        };
        namespace iminfineValC{
            constexpr MPL::Value<iminfineVal,iminfineVal::v0Ua> v0Ua{};
            constexpr MPL::Value<iminfineVal,iminfineVal::v0p25Ua> v0p25Ua{};
            constexpr MPL::Value<iminfineVal,iminfineVal::v0p5Ua> v0p5Ua{};
            constexpr MPL::Value<iminfineVal,iminfineVal::v0p75Ua> v0p75Ua{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,iminfineVal> iminfine{}; 
        ///Minimum Current Select. 
        enum class iminVal {
            v1Ua=0x00000000,     ///<Minimum current limit is 1 uA + IMINFINE current.
            v2Ua=0x00000001,     ///<Minimum current limit is 2 uA + IMINFINE current.
            v3Ua=0x00000002,     ///<Minimum current limit is 3 uA + IMINFINE current.
            v4Ua=0x00000003,     ///<Minimum current limit is 4 uA + IMINFINE current.
            v5Ua=0x00000004,     ///<Minimum current limit is 5 uA + IMINFINE current.
            v6Ua=0x00000005,     ///<Minimum current limit is 6 uA + IMINFINE current.
            v7Ua=0x00000006,     ///<Minimum current limit is 7 uA + IMINFINE current.
            v8Ua=0x00000007,     ///<Minimum current limit is 8 uA + IMINFINE current.
        };
        namespace iminValC{
            constexpr MPL::Value<iminVal,iminVal::v1Ua> v1Ua{};
            constexpr MPL::Value<iminVal,iminVal::v2Ua> v2Ua{};
            constexpr MPL::Value<iminVal,iminVal::v3Ua> v3Ua{};
            constexpr MPL::Value<iminVal,iminVal::v4Ua> v4Ua{};
            constexpr MPL::Value<iminVal,iminVal::v5Ua> v5Ua{};
            constexpr MPL::Value<iminVal,iminVal::v6Ua> v6Ua{};
            constexpr MPL::Value<iminVal,iminVal::v7Ua> v7Ua{};
            constexpr MPL::Value<iminVal,iminVal::v8Ua> v8Ua{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,iminVal> imin{}; 
        ///Foldback Voltage Offset Select. 
        enum class fbvoselVal {
            v0V=0x00000000,     ///<Foldback voltage offset is 0 V.
            v0p5V=0x00000001,     ///<Foldback voltage offset is 0.5 V.
            v1V=0x00000002,     ///<Foldback voltage offset is 1 V.
            v1p5V=0x00000003,     ///<Foldback voltage offset is 1.5 V.
            v2V=0x00000004,     ///<Foldback voltage offset is 2 V.
            v2p5V=0x00000005,     ///<Foldback voltage offset is 2.5 V.
            v3V=0x00000006,     ///<Foldback voltage offset is 3 V.
            v3p5V=0x00000007,     ///<Foldback voltage offset is 3.5 V.
        };
        namespace fbvoselValC{
            constexpr MPL::Value<fbvoselVal,fbvoselVal::v0V> v0V{};
            constexpr MPL::Value<fbvoselVal,fbvoselVal::v0p5V> v0p5V{};
            constexpr MPL::Value<fbvoselVal,fbvoselVal::v1V> v1V{};
            constexpr MPL::Value<fbvoselVal,fbvoselVal::v1p5V> v1p5V{};
            constexpr MPL::Value<fbvoselVal,fbvoselVal::v2V> v2V{};
            constexpr MPL::Value<fbvoselVal,fbvoselVal::v2p5V> v2p5V{};
            constexpr MPL::Value<fbvoselVal,fbvoselVal::v3V> v3V{};
            constexpr MPL::Value<fbvoselVal,fbvoselVal::v3p5V> v3p5V{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,fbvoselVal> fbvosel{}; 
        ///Voltage Sense Gain Multiplier. 
        enum class fbrateVal {
            v4UaPerV=0x00000000,     ///<Set the foldback rate to 4 uA/V.
            v2UaPerV=0x00000001,     ///<Set the foldback rate to 2 uA/V.
            v1UaPerV=0x00000002,     ///<Set the foldback rate to 1 uA/V.
            v0p5UaPerV=0x00000003,     ///<Set the foldback rate to 0.5 uA/V.
            v8UaPerV=0x00000005,     ///<Set the foldback rate to 8 uA/V.
            v16UaPerV=0x00000006,     ///<Set the foldback rate to 16 uA/V.
            v32UaPerV=0x00000007,     ///<Set the foldback rate to 32 uA/V.
        };
        namespace fbrateValC{
            constexpr MPL::Value<fbrateVal,fbrateVal::v4UaPerV> v4UaPerV{};
            constexpr MPL::Value<fbrateVal,fbrateVal::v2UaPerV> v2UaPerV{};
            constexpr MPL::Value<fbrateVal,fbrateVal::v1UaPerV> v1UaPerV{};
            constexpr MPL::Value<fbrateVal,fbrateVal::v0p5UaPerV> v0p5UaPerV{};
            constexpr MPL::Value<fbrateVal,fbrateVal::v8UaPerV> v8UaPerV{};
            constexpr MPL::Value<fbrateVal,fbrateVal::v16UaPerV> v16UaPerV{};
            constexpr MPL::Value<fbrateVal,fbrateVal::v32UaPerV> v32UaPerV{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,fbrateVal> fbrate{}; 
        ///Maximum Current Select. 
        enum class imaxVal {
            v2Ua=0x00000000,     ///<Maximum current limit is 2 uA.
            v3Ua=0x00000001,     ///<Maximum current limit is 3 uA.
            v4Ua=0x00000002,     ///<Maximum current limit is 4 uA.
            v5Ua=0x00000003,     ///<Maximum current limit is 5 uA.
            v6Ua=0x00000004,     ///<Maximum current limit is 6 uA.
            v7Ua=0x00000005,     ///<Maximum current limit is 7 uA.
            v8Ua=0x00000006,     ///<Maximum current limit is 8 uA.
            v9Ua=0x00000007,     ///<Maximum current limit is 9 uA.
        };
        namespace imaxValC{
            constexpr MPL::Value<imaxVal,imaxVal::v2Ua> v2Ua{};
            constexpr MPL::Value<imaxVal,imaxVal::v3Ua> v3Ua{};
            constexpr MPL::Value<imaxVal,imaxVal::v4Ua> v4Ua{};
            constexpr MPL::Value<imaxVal,imaxVal::v5Ua> v5Ua{};
            constexpr MPL::Value<imaxVal,imaxVal::v6Ua> v6Ua{};
            constexpr MPL::Value<imaxVal,imaxVal::v7Ua> v7Ua{};
            constexpr MPL::Value<imaxVal,imaxVal::v8Ua> v8Ua{};
            constexpr MPL::Value<imaxVal,imaxVal::v9Ua> v9Ua{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,imaxVal> imax{}; 
        ///Regulator Output Voltage Select. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> voutsel{}; 
    }
    namespace Nonestatus{    ///<Module Status
        using Addr = Register::Address<0x40042020,0xfffffffe,0,unsigned>;
        ///Maximum Foldback Flag. 
        enum class fbmaxfVal {
            notSet=0x00000000,     ///<Maximum foldback has not been reached.
            set=0x00000001,     ///<Maximum foldback has been reached.
        };
        namespace fbmaxfValC{
            constexpr MPL::Value<fbmaxfVal,fbmaxfVal::notSet> notSet{};
            constexpr MPL::Value<fbmaxfVal,fbmaxfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,fbmaxfVal> fbmaxf{}; 
    }
    namespace Nonecscontrol{    ///<Current Sense Control
        using Addr = Register::Address<0x40042040,0x3fffffff,0,unsigned>;
        ///External Regulator Current Sense Enable. 
        enum class isnsenVal {
            disabled=0x00000000,     ///<Disable external regulator current sensing.
            enabled=0x00000001,     ///<Enable external regulator current sensing.
        };
        namespace isnsenValC{
            constexpr MPL::Value<isnsenVal,isnsenVal::disabled> disabled{};
            constexpr MPL::Value<isnsenVal,isnsenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,isnsenVal> isnsen{}; 
        ///ADC Current Sense Enable. 
        enum class adcisnsenVal {
            disabled=0x00000000,     ///<Disable ADC current sensing.
            enabled=0x00000001,     ///<Enable ADC current sensing.
        };
        namespace adcisnsenValC{
            constexpr MPL::Value<adcisnsenVal,adcisnsenVal::disabled> disabled{};
            constexpr MPL::Value<adcisnsenVal,adcisnsenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,adcisnsenVal> adcisnsen{}; 
    }
    namespace Nonecsconfig{    ///<Current Sense Configuration
        using Addr = Register::Address<0x40042050,0xffffff00,0,unsigned>;
        ///ADC Current Sense Gain. 
        enum class isadcgainVal {
            v16x=0x00000000,     ///<ADC current sensing input gain is 16.
            v8x=0x00000001,     ///<ADC current sensing input gain is 8.
            v4x=0x00000002,     ///<ADC current sensing input gain is 4.
            v2x=0x00000003,     ///<ADC current sensing input gain is 2.
            v1x=0x00000004,     ///<ADC current sensing input gain is 1.
        };
        namespace isadcgainValC{
            constexpr MPL::Value<isadcgainVal,isadcgainVal::v16x> v16x{};
            constexpr MPL::Value<isadcgainVal,isadcgainVal::v8x> v8x{};
            constexpr MPL::Value<isadcgainVal,isadcgainVal::v4x> v4x{};
            constexpr MPL::Value<isadcgainVal,isadcgainVal::v2x> v2x{};
            constexpr MPL::Value<isadcgainVal,isadcgainVal::v1x> v1x{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,isadcgainVal> isadcgain{}; 
        ///External Regulator Current Sense Gain. 
        enum class isogainVal {
            v16x=0x00000000,     ///<External regulator current sensing gain is 16.
            v8x=0x00000001,     ///<External regulator current sensing gain is 8.
            v4x=0x00000002,     ///<External regulator current sensing gain is 4.
            v2x=0x00000003,     ///<External regulator current sensing gain is 2.
            v1x=0x00000004,     ///<External regulator current sensing gain is 1.
        };
        namespace isogainValC{
            constexpr MPL::Value<isogainVal,isogainVal::v16x> v16x{};
            constexpr MPL::Value<isogainVal,isogainVal::v8x> v8x{};
            constexpr MPL::Value<isogainVal,isogainVal::v4x> v4x{};
            constexpr MPL::Value<isogainVal,isogainVal::v2x> v2x{};
            constexpr MPL::Value<isogainVal,isogainVal::v1x> v1x{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,isogainVal> isogain{}; 
        ///External Regulator Current Sense Input Select. 
        enum class isinselVal {
            mode0=0x00000000,     ///<Select external regulator current sensing mode 0.
            mode1=0x00000001,     ///<Select external regulator current sensing mode 1.
            mode2=0x00000002,     ///<Select external regulator current sensing mode 2.
        };
        namespace isinselValC{
            constexpr MPL::Value<isinselVal,isinselVal::mode0> mode0{};
            constexpr MPL::Value<isinselVal,isinselVal::mode1> mode1{};
            constexpr MPL::Value<isinselVal,isinselVal::mode2> mode2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,isinselVal> isinsel{}; 
    }
}
