#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Multipurpose Clock Generator module
    namespace McgC1{    ///<MCG Control 1 Register
        using Addr = Register::Address<0x40064000,0xffffff00,0,unsigned char>;
        ///Internal Reference Stop Enable
        enum class irefstenVal {
            v0=0x00000000,     ///<Internal reference clock is disabled in Stop mode.
            v1=0x00000001,     ///<Internal reference clock is enabled in Stop mode if IRCLKEN is set or if MCG is in FEI, FBI, or BLPI modes before entering Stop mode.
        };
        namespace irefstenValC{
            constexpr MPL::Value<irefstenVal,irefstenVal::v0> v0{};
            constexpr MPL::Value<irefstenVal,irefstenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,irefstenVal> irefsten{}; 
        ///Internal Reference Clock Enable
        enum class irclkenVal {
            v0=0x00000000,     ///<MCGIRCLK inactive.
            v1=0x00000001,     ///<MCGIRCLK active.
        };
        namespace irclkenValC{
            constexpr MPL::Value<irclkenVal,irclkenVal::v0> v0{};
            constexpr MPL::Value<irclkenVal,irclkenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,irclkenVal> irclken{}; 
        ///Internal Reference Select
        enum class irefsVal {
            v0=0x00000000,     ///<External reference clock is selected.
            v1=0x00000001,     ///<The slow internal reference clock is selected.
        };
        namespace irefsValC{
            constexpr MPL::Value<irefsVal,irefsVal::v0> v0{};
            constexpr MPL::Value<irefsVal,irefsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,irefsVal> irefs{}; 
        ///FLL External Reference Divider
        enum class frdivVal {
            v000=0x00000000,     ///<If RANGE 0 = 0 , Divide Factor is 1; for all other RANGE 0 values, Divide Factor is 32.
            v001=0x00000001,     ///<If RANGE 0 = 0 , Divide Factor is 2; for all other RANGE 0 values, Divide Factor is 64.
            v010=0x00000002,     ///<If RANGE 0 = 0 , Divide Factor is 4; for all other RANGE 0 values, Divide Factor is 128.
            v011=0x00000003,     ///<If RANGE 0 = 0 , Divide Factor is 8; for all other RANGE 0 values, Divide Factor is 256.
            v100=0x00000004,     ///<If RANGE 0 = 0 , Divide Factor is 16; for all other RANGE 0 values, Divide Factor is 512.
            v101=0x00000005,     ///<If RANGE 0 = 0 , Divide Factor is 32; for all other RANGE 0 values, Divide Factor is 1024.
            v110=0x00000006,     ///<If RANGE 0 = 0 , Divide Factor is 64; for all other RANGE 0 values, Divide Factor is 1280 .
            v111=0x00000007,     ///<If RANGE 0 = 0 , Divide Factor is 128; for all other RANGE 0 values, Divide Factor is 1536 .
        };
        namespace frdivValC{
            constexpr MPL::Value<frdivVal,frdivVal::v000> v000{};
            constexpr MPL::Value<frdivVal,frdivVal::v001> v001{};
            constexpr MPL::Value<frdivVal,frdivVal::v010> v010{};
            constexpr MPL::Value<frdivVal,frdivVal::v011> v011{};
            constexpr MPL::Value<frdivVal,frdivVal::v100> v100{};
            constexpr MPL::Value<frdivVal,frdivVal::v101> v101{};
            constexpr MPL::Value<frdivVal,frdivVal::v110> v110{};
            constexpr MPL::Value<frdivVal,frdivVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,frdivVal> frdiv{}; 
        ///Clock Source Select
        enum class clksVal {
            v00=0x00000000,     ///<Encoding 0 - Output of FLL is selected.
            v01=0x00000001,     ///<Encoding 1 - Internal reference clock is selected.
            v10=0x00000002,     ///<Encoding 2 - External reference clock is selected.
            v11=0x00000003,     ///<Encoding 3 - Reserved.
        };
        namespace clksValC{
            constexpr MPL::Value<clksVal,clksVal::v00> v00{};
            constexpr MPL::Value<clksVal,clksVal::v01> v01{};
            constexpr MPL::Value<clksVal,clksVal::v10> v10{};
            constexpr MPL::Value<clksVal,clksVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,clksVal> clks{}; 
    }
    namespace McgC2{    ///<MCG Control 2 Register
        using Addr = Register::Address<0x40064001,0xffffff40,0,unsigned char>;
        ///Internal Reference Clock Select
        enum class ircsVal {
            v0=0x00000000,     ///<Slow internal reference clock selected.
            v1=0x00000001,     ///<Fast internal reference clock selected.
        };
        namespace ircsValC{
            constexpr MPL::Value<ircsVal,ircsVal::v0> v0{};
            constexpr MPL::Value<ircsVal,ircsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ircsVal> ircs{}; 
        ///Low Power Select
        enum class lpVal {
            v0=0x00000000,     ///<FLL is not disabled in bypass modes.
            v1=0x00000001,     ///<FLL is disabled in bypass modes (lower power)
        };
        namespace lpValC{
            constexpr MPL::Value<lpVal,lpVal::v0> v0{};
            constexpr MPL::Value<lpVal,lpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,lpVal> lp{}; 
        ///External Reference Select
        enum class erefs0Val {
            v0=0x00000000,     ///<External reference clock requested.
            v1=0x00000001,     ///<Oscillator requested.
        };
        namespace erefs0ValC{
            constexpr MPL::Value<erefs0Val,erefs0Val::v0> v0{};
            constexpr MPL::Value<erefs0Val,erefs0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,erefs0Val> erefs0{}; 
        ///High Gain Oscillator Select
        enum class hgo0Val {
            v0=0x00000000,     ///<Configure crystal oscillator for low-power operation.
            v1=0x00000001,     ///<Configure crystal oscillator for high-gain operation.
        };
        namespace hgo0ValC{
            constexpr MPL::Value<hgo0Val,hgo0Val::v0> v0{};
            constexpr MPL::Value<hgo0Val,hgo0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,hgo0Val> hgo0{}; 
        ///Frequency Range Select
        enum class range0Val {
            v00=0x00000000,     ///<Encoding 0 - Low frequency range selected for the crystal oscillator .
            v01=0x00000001,     ///<Encoding 1 - High frequency range selected for the crystal oscillator .
        };
        namespace range0ValC{
            constexpr MPL::Value<range0Val,range0Val::v00> v00{};
            constexpr MPL::Value<range0Val,range0Val::v01> v01{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,range0Val> range0{}; 
        ///Loss of Clock Reset Enable
        enum class locre0Val {
            v0=0x00000000,     ///<Interrupt request is generated on a loss of OSC0 external reference clock.
            v1=0x00000001,     ///<Generate a reset request on a loss of OSC0 external reference clock.
        };
        namespace locre0ValC{
            constexpr MPL::Value<locre0Val,locre0Val::v0> v0{};
            constexpr MPL::Value<locre0Val,locre0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,locre0Val> locre0{}; 
    }
    namespace McgC3{    ///<MCG Control 3 Register
        using Addr = Register::Address<0x40064002,0xffffff00,0,unsigned char>;
        ///Slow Internal Reference Clock Trim Setting
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sctrim{}; 
    }
    namespace McgC4{    ///<MCG Control 4 Register
        using Addr = Register::Address<0x40064003,0xffffff00,0,unsigned char>;
        ///Slow Internal Reference Clock Fine Trim
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> scftrim{}; 
        ///Fast Internal Reference Clock Trim Setting
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> fctrim{}; 
        ///DCO Range Select
        enum class drstDrsVal {
            v00=0x00000000,     ///<Encoding 0 - Low range (reset default).
            v01=0x00000001,     ///<Encoding 1 - Mid range.
            v10=0x00000002,     ///<Encoding 2 - Mid-high range.
            v11=0x00000003,     ///<Encoding 3 - High range.
        };
        namespace drstDrsValC{
            constexpr MPL::Value<drstDrsVal,drstDrsVal::v00> v00{};
            constexpr MPL::Value<drstDrsVal,drstDrsVal::v01> v01{};
            constexpr MPL::Value<drstDrsVal,drstDrsVal::v10> v10{};
            constexpr MPL::Value<drstDrsVal,drstDrsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,drstDrsVal> drstDrs{}; 
        ///DCO Maximum Frequency with 32.768 kHz Reference
        enum class dmx32Val {
            v0=0x00000000,     ///<DCO has a default range of 25%.
            v1=0x00000001,     ///<DCO is fine-tuned for maximum frequency with 32.768 kHz reference.
        };
        namespace dmx32ValC{
            constexpr MPL::Value<dmx32Val,dmx32Val::v0> v0{};
            constexpr MPL::Value<dmx32Val,dmx32Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,dmx32Val> dmx32{}; 
    }
    namespace McgC5{    ///<MCG Control 5 Register
        using Addr = Register::Address<0x40064004,0xffffffff,0,unsigned char>;
    }
    namespace McgC6{    ///<MCG Control 6 Register
        using Addr = Register::Address<0x40064005,0xffffffdf,0,unsigned char>;
        ///Clock Monitor Enable
        enum class cmeVal {
            v0=0x00000000,     ///<External clock monitor is disabled.
            v1=0x00000001,     ///<Generate a reset request on loss of external clock.
        };
        namespace cmeValC{
            constexpr MPL::Value<cmeVal,cmeVal::v0> v0{};
            constexpr MPL::Value<cmeVal,cmeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,cmeVal> cme{}; 
    }
    namespace McgS{    ///<MCG Status Register
        using Addr = Register::Address<0x40064006,0xffffffe0,0,unsigned char>;
        ///Internal Reference Clock Status
        enum class ircstVal {
            v0=0x00000000,     ///<Source of internal reference clock is the slow clock (32 kHz IRC).
            v1=0x00000001,     ///<Source of internal reference clock is the fast clock (4 MHz IRC).
        };
        namespace ircstValC{
            constexpr MPL::Value<ircstVal,ircstVal::v0> v0{};
            constexpr MPL::Value<ircstVal,ircstVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ircstVal> ircst{}; 
        ///OSC Initialization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> oscinit0{}; 
        ///Clock Mode Status
        enum class clkstVal {
            v00=0x00000000,     ///<Encoding 0 - Output of the FLL is selected (reset default).
            v01=0x00000001,     ///<Encoding 1 - Internal reference clock is selected.
            v10=0x00000002,     ///<Encoding 2 - External reference clock is selected.
        };
        namespace clkstValC{
            constexpr MPL::Value<clkstVal,clkstVal::v00> v00{};
            constexpr MPL::Value<clkstVal,clkstVal::v01> v01{};
            constexpr MPL::Value<clkstVal,clkstVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,clkstVal> clkst{}; 
        ///Internal Reference Status
        enum class irefstVal {
            v0=0x00000000,     ///<Source of FLL reference clock is the external reference clock.
            v1=0x00000001,     ///<Source of FLL reference clock is the internal reference clock.
        };
        namespace irefstValC{
            constexpr MPL::Value<irefstVal,irefstVal::v0> v0{};
            constexpr MPL::Value<irefstVal,irefstVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,irefstVal> irefst{}; 
    }
    namespace McgSc{    ///<MCG Status and Control Register
        using Addr = Register::Address<0x40064008,0xffffff00,0,unsigned char>;
        ///OSC0 Loss of Clock Status
        enum class locs0Val {
            v0=0x00000000,     ///<Loss of OSC0 has not occurred.
            v1=0x00000001,     ///<Loss of OSC0 has occurred.
        };
        namespace locs0ValC{
            constexpr MPL::Value<locs0Val,locs0Val::v0> v0{};
            constexpr MPL::Value<locs0Val,locs0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,locs0Val> locs0{}; 
        ///Fast Clock Internal Reference Divider
        enum class fcrdivVal {
            v000=0x00000000,     ///<Divide Factor is 1
            v001=0x00000001,     ///<Divide Factor is 2.
            v010=0x00000002,     ///<Divide Factor is 4.
            v011=0x00000003,     ///<Divide Factor is 8.
            v100=0x00000004,     ///<Divide Factor is 16
            v101=0x00000005,     ///<Divide Factor is 32
            v110=0x00000006,     ///<Divide Factor is 64
            v111=0x00000007,     ///<Divide Factor is 128.
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
        ///FLL Filter Preserve Enable
        enum class fltprsrvVal {
            v0=0x00000000,     ///<FLL filter and FLL frequency will reset on changes to currect clock mode.
            v1=0x00000001,     ///<Fll filter and FLL frequency retain their previous values during new clock mode change.
        };
        namespace fltprsrvValC{
            constexpr MPL::Value<fltprsrvVal,fltprsrvVal::v0> v0{};
            constexpr MPL::Value<fltprsrvVal,fltprsrvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,fltprsrvVal> fltprsrv{}; 
        ///Automatic Trim Machine Fail Flag
        enum class atmfVal {
            v0=0x00000000,     ///<Automatic Trim Machine completed normally.
            v1=0x00000001,     ///<Automatic Trim Machine failed.
        };
        namespace atmfValC{
            constexpr MPL::Value<atmfVal,atmfVal::v0> v0{};
            constexpr MPL::Value<atmfVal,atmfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,atmfVal> atmf{}; 
        ///Automatic Trim Machine Select
        enum class atmsVal {
            v0=0x00000000,     ///<32 kHz Internal Reference Clock selected.
            v1=0x00000001,     ///<4 MHz Internal Reference Clock selected.
        };
        namespace atmsValC{
            constexpr MPL::Value<atmsVal,atmsVal::v0> v0{};
            constexpr MPL::Value<atmsVal,atmsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,atmsVal> atms{}; 
        ///Automatic Trim Machine Enable
        enum class atmeVal {
            v0=0x00000000,     ///<Auto Trim Machine disabled.
            v1=0x00000001,     ///<Auto Trim Machine enabled.
        };
        namespace atmeValC{
            constexpr MPL::Value<atmeVal,atmeVal::v0> v0{};
            constexpr MPL::Value<atmeVal,atmeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,atmeVal> atme{}; 
    }
    namespace McgAtcvh{    ///<MCG Auto Trim Compare Value High Register
        using Addr = Register::Address<0x4006400a,0xffffff00,0,unsigned char>;
        ///ATM Compare Value High
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> atcvh{}; 
    }
    namespace McgAtcvl{    ///<MCG Auto Trim Compare Value Low Register
        using Addr = Register::Address<0x4006400b,0xffffff00,0,unsigned char>;
        ///ATM Compare Value Low
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> atcvl{}; 
    }
}
