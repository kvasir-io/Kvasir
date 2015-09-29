#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Multipurpose Clock Generator Lite
    namespace McgC1{    ///<MCG Control Register 1
        using Addr = Register::Address<0x40064000,0xffffff3c,0,unsigned char>;
        ///Internal Reference Stop Enable
        enum class irefstenVal {
            v0=0x00000000,     ///<LIRC is disabled in Stop mode.
            v1=0x00000001,     ///<LIRC is enabled in Stop mode, if IRCLKEN is set.
        };
        namespace irefstenValC{
            constexpr MPL::Value<irefstenVal,irefstenVal::v0> v0{};
            constexpr MPL::Value<irefstenVal,irefstenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,irefstenVal> irefsten{}; 
        ///Internal Reference Clock Enable
        enum class irclkenVal {
            v0=0x00000000,     ///<LIRC is disabled.
            v1=0x00000001,     ///<LIRC is enabled.
        };
        namespace irclkenValC{
            constexpr MPL::Value<irclkenVal,irclkenVal::v0> v0{};
            constexpr MPL::Value<irclkenVal,irclkenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,irclkenVal> irclken{}; 
        ///Clock Source Select
        enum class clksVal {
            v00=0x00000000,     ///<Selects HIRC clock as the main clock source. This is HIRC mode.
            v01=0x00000001,     ///<Selects LIRC clock as the main clock source. This is LIRC2M or LIRC8M mode.
            v10=0x00000002,     ///<Selects external clock as the main clock source. This is EXT mode.
            v11=0x00000003,     ///<Reserved. Writing 11 takes no effect.
        };
        namespace clksValC{
            constexpr MPL::Value<clksVal,clksVal::v00> v00{};
            constexpr MPL::Value<clksVal,clksVal::v01> v01{};
            constexpr MPL::Value<clksVal,clksVal::v10> v10{};
            constexpr MPL::Value<clksVal,clksVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,clksVal> clks{}; 
    }
    namespace McgC2{    ///<MCG Control Register 2
        using Addr = Register::Address<0x40064001,0xffffffc2,0,unsigned char>;
        ///Low-frequency Internal Reference Clock Select
        enum class ircsVal {
            v0=0x00000000,     ///<LIRC is in 2 MHz mode.
            v1=0x00000001,     ///<LIRC is in 8 MHz mode.
        };
        namespace ircsValC{
            constexpr MPL::Value<ircsVal,ircsVal::v0> v0{};
            constexpr MPL::Value<ircsVal,ircsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ircsVal> ircs{}; 
        ///External Clock Source Select
        enum class erefs0Val {
            v0=0x00000000,     ///<External clock requested.
            v1=0x00000001,     ///<Oscillator requested.
        };
        namespace erefs0ValC{
            constexpr MPL::Value<erefs0Val,erefs0Val::v0> v0{};
            constexpr MPL::Value<erefs0Val,erefs0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,erefs0Val> erefs0{}; 
        ///Crystal Oscillator Operation Mode Select
        enum class hgo0Val {
            v0=0x00000000,     ///<Configure crystal oscillator for low-power operation.
            v1=0x00000001,     ///<Configure crystal oscillator for high-gain operation.
        };
        namespace hgo0ValC{
            constexpr MPL::Value<hgo0Val,hgo0Val::v0> v0{};
            constexpr MPL::Value<hgo0Val,hgo0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,hgo0Val> hgo0{}; 
        ///External Clock Source Frequency Range Select
        enum class range0Val {
            v00=0x00000000,     ///<Low frequency range selected for the crystal oscillator or the external clock source.
            v01=0x00000001,     ///<High frequency range selected for the crystal oscillator or the external clock source.
            v10=0x00000002,     ///<Very high frequency range selected for the crystal oscillator or the external clock source.
            v11=0x00000003,     ///<Very high frequency range selected for the crystal oscillator or the external clock source. Same effect as 10.
        };
        namespace range0ValC{
            constexpr MPL::Value<range0Val,range0Val::v00> v00{};
            constexpr MPL::Value<range0Val,range0Val::v01> v01{};
            constexpr MPL::Value<range0Val,range0Val::v10> v10{};
            constexpr MPL::Value<range0Val,range0Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,range0Val> range0{}; 
    }
    namespace McgS{    ///<MCG Status Register
        using Addr = Register::Address<0x40064006,0xfffffff1,0,unsigned char>;
        ///OSC Initialization Status
        enum class oscinit0Val {
            v0=0x00000000,     ///<OSC is not ready.
            v1=0x00000001,     ///<OSC clock is ready.
        };
        namespace oscinit0ValC{
            constexpr MPL::Value<oscinit0Val,oscinit0Val::v0> v0{};
            constexpr MPL::Value<oscinit0Val,oscinit0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,oscinit0Val> oscinit0{}; 
        ///Clock Mode Status
        enum class clkstVal {
            v00=0x00000000,     ///<HIRC clock is selected as the main clock source, and MCG_Lite works at HIRC mode.
            v01=0x00000001,     ///<LIRC clock is selected as the main clock source, and MCG_Lite works at LIRC2M or LIRC8M mode.
            v10=0x00000002,     ///<External clock is selected as the main clock source, and MCG_Lite works at EXT mode.
        };
        namespace clkstValC{
            constexpr MPL::Value<clkstVal,clkstVal::v00> v00{};
            constexpr MPL::Value<clkstVal,clkstVal::v01> v01{};
            constexpr MPL::Value<clkstVal,clkstVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,clkstVal> clkst{}; 
    }
    namespace McgSc{    ///<MCG Status and Control Register
        using Addr = Register::Address<0x40064008,0xfffffff1,0,unsigned char>;
        ///Low-frequency Internal Reference Clock Divider
        enum class fcrdivVal {
            v000=0x00000000,     ///<Division factor is 1.
            v001=0x00000001,     ///<Division factor is 2.
            v010=0x00000002,     ///<Division factor is 4.
            v011=0x00000003,     ///<Division factor is 8.
            v100=0x00000004,     ///<Division factor is 16.
            v101=0x00000005,     ///<Division factor is 32.
            v110=0x00000006,     ///<Division factor is 64.
            v111=0x00000007,     ///<Division factor is 128.
        };
        namespace fcrdivValC{
            constexpr MPL::Value<fcrdivVal,fcrdivVal::v000> v000{};
            constexpr MPL::Value<fcrdivVal,fcrdivVal::v001> v001{};
            constexpr MPL::Value<fcrdivVal,fcrdivVal::v010> v010{};
            constexpr MPL::Value<fcrdivVal,fcrdivVal::v011> v011{};
            constexpr MPL::Value<fcrdivVal,fcrdivVal::v100> v100{};
            constexpr MPL::Value<fcrdivVal,fcrdivVal::v101> v101{};
            constexpr MPL::Value<fcrdivVal,fcrdivVal::v110> v110{};
            constexpr MPL::Value<fcrdivVal,fcrdivVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,fcrdivVal> fcrdiv{}; 
    }
    namespace McgMc{    ///<MCG Miscellaneous Control Register
        using Addr = Register::Address<0x40064018,0xffffff38,0,unsigned char>;
        ///Second Low-frequency Internal Reference Clock Divider
        enum class lircDiv2Val {
            v000=0x00000000,     ///<Division factor is 1.
            v001=0x00000001,     ///<Division factor is 2.
            v010=0x00000002,     ///<Division factor is 4.
            v011=0x00000003,     ///<Division factor is 8.
            v100=0x00000004,     ///<Division factor is 16.
            v101=0x00000005,     ///<Division factor is 32.
            v110=0x00000006,     ///<Division factor is 64.
            v111=0x00000007,     ///<Division factor is 128.
        };
        namespace lircDiv2ValC{
            constexpr MPL::Value<lircDiv2Val,lircDiv2Val::v000> v000{};
            constexpr MPL::Value<lircDiv2Val,lircDiv2Val::v001> v001{};
            constexpr MPL::Value<lircDiv2Val,lircDiv2Val::v010> v010{};
            constexpr MPL::Value<lircDiv2Val,lircDiv2Val::v011> v011{};
            constexpr MPL::Value<lircDiv2Val,lircDiv2Val::v100> v100{};
            constexpr MPL::Value<lircDiv2Val,lircDiv2Val::v101> v101{};
            constexpr MPL::Value<lircDiv2Val,lircDiv2Val::v110> v110{};
            constexpr MPL::Value<lircDiv2Val,lircDiv2Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,lircDiv2Val> lircDiv2{}; 
        ///High-frequency IRC Low-power Mode Enable
        enum class hirclpenVal {
            v0=0x00000000,     ///<HIRC is disabled in Low-power mode, such as Stop/VLPR/VLPW/VLPS mode.
            v1=0x00000001,     ///<HIRC is enabled in Low-power mode, such as Stop/VLPR/VLPW/VLPS mode.
        };
        namespace hirclpenValC{
            constexpr MPL::Value<hirclpenVal,hirclpenVal::v0> v0{};
            constexpr MPL::Value<hirclpenVal,hirclpenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,hirclpenVal> hirclpen{}; 
        ///High-frequency IRC Enable
        enum class hircenVal {
            v0=0x00000000,     ///<HIRC source is not enabled.
            v1=0x00000001,     ///<HIRC source is enabled.
        };
        namespace hircenValC{
            constexpr MPL::Value<hircenVal,hircenVal::v0> v0{};
            constexpr MPL::Value<hircenVal,hircenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,hircenVal> hircen{}; 
    }
}
