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
            v000=0x00000000,     ///<If RANGE = 0 or OSCSEL=1 , Divide Factor is 1; for all other RANGE values, Divide Factor is 32.
            v001=0x00000001,     ///<If RANGE = 0 or OSCSEL=1 , Divide Factor is 2; for all other RANGE values, Divide Factor is 64.
            v010=0x00000002,     ///<If RANGE = 0 or OSCSEL=1 , Divide Factor is 4; for all other RANGE values, Divide Factor is 128.
            v011=0x00000003,     ///<If RANGE = 0 or OSCSEL=1 , Divide Factor is 8; for all other RANGE values, Divide Factor is 256.
            v100=0x00000004,     ///<If RANGE = 0 or OSCSEL=1 , Divide Factor is 16; for all other RANGE values, Divide Factor is 512.
            v101=0x00000005,     ///<If RANGE = 0 or OSCSEL=1 , Divide Factor is 32; for all other RANGE values, Divide Factor is 1024.
            v110=0x00000006,     ///<If RANGE = 0 or OSCSEL=1 , Divide Factor is 64; for all other RANGE values, Divide Factor is 1280 .
            v111=0x00000007,     ///<If RANGE = 0 or OSCSEL=1 , Divide Factor is 128; for all other RANGE values, Divide Factor is 1536 .
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
            v00=0x00000000,     ///<Encoding 0 - Output of FLL or PLLCS is selected (depends on PLLS control bit).
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
        using Addr = Register::Address<0x40064001,0xffffff00,0,unsigned char>;
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
            v0=0x00000000,     ///<FLL or PLL is not disabled in bypass modes.
            v1=0x00000001,     ///<FLL or PLL is disabled in bypass modes (lower power)
        };
        namespace lpValC{
            constexpr MPL::Value<lpVal,lpVal::v0> v0{};
            constexpr MPL::Value<lpVal,lpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,lpVal> lp{}; 
        ///External Reference Select
        enum class erefsVal {
            v0=0x00000000,     ///<External reference clock requested.
            v1=0x00000001,     ///<Oscillator requested.
        };
        namespace erefsValC{
            constexpr MPL::Value<erefsVal,erefsVal::v0> v0{};
            constexpr MPL::Value<erefsVal,erefsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,erefsVal> erefs{}; 
        ///High Gain Oscillator Select
        enum class hgoVal {
            v0=0x00000000,     ///<Configure crystal oscillator for low-power operation.
            v1=0x00000001,     ///<Configure crystal oscillator for high-gain operation.
        };
        namespace hgoValC{
            constexpr MPL::Value<hgoVal,hgoVal::v0> v0{};
            constexpr MPL::Value<hgoVal,hgoVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,hgoVal> hgo{}; 
        ///Frequency Range Select
        enum class rangeVal {
            v00=0x00000000,     ///<Encoding 0 - Low frequency range selected for the crystal oscillator .
            v01=0x00000001,     ///<Encoding 1 - High frequency range selected for the crystal oscillator .
        };
        namespace rangeValC{
            constexpr MPL::Value<rangeVal,rangeVal::v00> v00{};
            constexpr MPL::Value<rangeVal,rangeVal::v01> v01{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,rangeVal> range{}; 
        ///Fast Internal Reference Clock Fine Trim
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fcftrim{}; 
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
        using Addr = Register::Address<0x40064004,0xffffff98,0,unsigned char>;
        ///PLL External Reference Divider
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> prdiv{}; 
        ///PLL Stop Enable
        enum class pllstenVal {
            v0=0x00000000,     ///<MCGPLLCLK and MCGPLLCLK2X are disabled in any of the Stop modes.
            v1=0x00000001,     ///<MCGPLLCLK and MCGPLLCLK2X are enabled if system is in Normal Stop mode.
        };
        namespace pllstenValC{
            constexpr MPL::Value<pllstenVal,pllstenVal::v0> v0{};
            constexpr MPL::Value<pllstenVal,pllstenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,pllstenVal> pllsten{}; 
        ///PLL Clock Enable
        enum class pllclkenVal {
            v0=0x00000000,     ///<MCGPLLCLK is inactive.
            v1=0x00000001,     ///<MCGPLLCLK is active.
        };
        namespace pllclkenValC{
            constexpr MPL::Value<pllclkenVal,pllclkenVal::v0> v0{};
            constexpr MPL::Value<pllclkenVal,pllclkenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pllclkenVal> pllclken{}; 
    }
    namespace McgC6{    ///<MCG Control 6 Register
        using Addr = Register::Address<0x40064005,0xffffff00,0,unsigned char>;
        ///VCO Divider
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> vdiv{}; 
        ///Clock Monitor Enable
        enum class cme0Val {
            v0=0x00000000,     ///<External clock monitor is disabled for OSC0.
            v1=0x00000001,     ///<External clock monitor is enabled for OSC0.
        };
        namespace cme0ValC{
            constexpr MPL::Value<cme0Val,cme0Val::v0> v0{};
            constexpr MPL::Value<cme0Val,cme0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,cme0Val> cme0{}; 
        ///PLL Select
        enum class pllsVal {
            v0=0x00000000,     ///<FLL is selected.
            v1=0x00000001,     ///<PLLCS output clock is selected (PRDIV0 bits of PLL in the C5 register need to be programmed to the correct divider to generate a PLL reference clock in the range specified in the data sheet (fpll_ref) prior to setting the PLLS bit).
        };
        namespace pllsValC{
            constexpr MPL::Value<pllsVal,pllsVal::v0> v0{};
            constexpr MPL::Value<pllsVal,pllsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pllsVal> plls{}; 
        ///Loss of Lock Interrrupt Enable
        enum class lolie0Val {
            v0=0x00000000,     ///<No interrupt request is generated on loss of lock.
            v1=0x00000001,     ///<Generate an interrupt request on loss of lock.
        };
        namespace lolie0ValC{
            constexpr MPL::Value<lolie0Val,lolie0Val::v0> v0{};
            constexpr MPL::Value<lolie0Val,lolie0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,lolie0Val> lolie0{}; 
    }
    namespace McgS{    ///<MCG Status Register
        using Addr = Register::Address<0x40064006,0xffffff00,0,unsigned char>;
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
            v11=0x00000003,     ///<Encoding 3 - Output of the PLL is selected.
        };
        namespace clkstValC{
            constexpr MPL::Value<clkstVal,clkstVal::v00> v00{};
            constexpr MPL::Value<clkstVal,clkstVal::v01> v01{};
            constexpr MPL::Value<clkstVal,clkstVal::v10> v10{};
            constexpr MPL::Value<clkstVal,clkstVal::v11> v11{};
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
        ///PLL Select Status
        enum class pllstVal {
            v0=0x00000000,     ///<Source of PLLS clock is FLL clock.
            v1=0x00000001,     ///<Source of PLLS clock is PLLCS output clock.
        };
        namespace pllstValC{
            constexpr MPL::Value<pllstVal,pllstVal::v0> v0{};
            constexpr MPL::Value<pllstVal,pllstVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,pllstVal> pllst{}; 
        ///Lock Status
        enum class lock0Val {
            v0=0x00000000,     ///<PLL is currently unlocked.
            v1=0x00000001,     ///<PLL is currently locked.
        };
        namespace lock0ValC{
            constexpr MPL::Value<lock0Val,lock0Val::v0> v0{};
            constexpr MPL::Value<lock0Val,lock0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,lock0Val> lock0{}; 
        ///Loss of Lock Status
        enum class lols0Val {
            v0=0x00000000,     ///<PLL has not lost lock since LOLS 0 was last cleared.
            v1=0x00000001,     ///<PLL has lost lock since LOLS 0 was last cleared.
        };
        namespace lols0ValC{
            constexpr MPL::Value<lols0Val,lols0Val::v0> v0{};
            constexpr MPL::Value<lols0Val,lols0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,lols0Val> lols0{}; 
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
    namespace McgC7{    ///<MCG Control 7 Register
        using Addr = Register::Address<0x4006400c,0xfffffffc,0,unsigned char>;
        ///MCG OSC Clock Select
        enum class oscselVal {
            v00=0x00000000,     ///<Selects Oscillator (OSCCLK0).
            v01=0x00000001,     ///<Selects 32 kHz RTC Oscillator.
            v10=0x00000002,     ///<Selects Oscillator (OSCCLK1).
            v11=0x00000003,     ///<RESERVED
        };
        namespace oscselValC{
            constexpr MPL::Value<oscselVal,oscselVal::v00> v00{};
            constexpr MPL::Value<oscselVal,oscselVal::v01> v01{};
            constexpr MPL::Value<oscselVal,oscselVal::v10> v10{};
            constexpr MPL::Value<oscselVal,oscselVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,oscselVal> oscsel{}; 
    }
    namespace McgC8{    ///<MCG Control 8 Register
        using Addr = Register::Address<0x4006400d,0xffffff1e,0,unsigned char>;
        ///RTC Loss of Clock Status
        enum class locs1Val {
            v0=0x00000000,     ///<Loss of RTC has not occur.
            v1=0x00000001,     ///<Loss of RTC has occur
        };
        namespace locs1ValC{
            constexpr MPL::Value<locs1Val,locs1Val::v0> v0{};
            constexpr MPL::Value<locs1Val,locs1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,locs1Val> locs1{}; 
        ///Clock Monitor Enable1
        enum class cme1Val {
            v0=0x00000000,     ///<External clock monitor is disabled for RTC clock.
            v1=0x00000001,     ///<External clock monitor is enabled for RTC clock.
        };
        namespace cme1ValC{
            constexpr MPL::Value<cme1Val,cme1Val::v0> v0{};
            constexpr MPL::Value<cme1Val,cme1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,cme1Val> cme1{}; 
        ///PLL Loss of Lock Reset Enable
        enum class lolreVal {
            v0=0x00000000,     ///<Interrupt request is generated on a PLL loss of lock indication. The PLL loss of lock interrupt enable bit must also be set to generate the interrupt request.
            v1=0x00000001,     ///<Generate a reset request on a PLL loss of lock indication.
        };
        namespace lolreValC{
            constexpr MPL::Value<lolreVal,lolreVal::v0> v0{};
            constexpr MPL::Value<lolreVal,lolreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,lolreVal> lolre{}; 
        ///Loss of Clock Reset Enable
        enum class locre1Val {
            v0=0x00000000,     ///<Interrupt request is generated on a loss of RTC external reference clock.
            v1=0x00000001,     ///<Generate a reset request on a loss of RTC external reference clock
        };
        namespace locre1ValC{
            constexpr MPL::Value<locre1Val,locre1Val::v0> v0{};
            constexpr MPL::Value<locre1Val,locre1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,locre1Val> locre1{}; 
    }
    namespace McgC9{    ///<MCG Control 9 Register
        using Addr = Register::Address<0x4006400e,0xffffffce,0,unsigned char>;
        ///External PLL Loss of Clock Status
        enum class extPllLocsVal {
            v0=0x00000000,     ///<Loss of MCG EXT_PLL has not occurred.
            v1=0x00000001,     ///<Loss of MCG EXT_PLL has occurred.
        };
        namespace extPllLocsValC{
            constexpr MPL::Value<extPllLocsVal,extPllLocsVal::v0> v0{};
            constexpr MPL::Value<extPllLocsVal,extPllLocsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,extPllLocsVal> extPllLocs{}; 
        ///MCG External PLL Loss of Clock Reset Enable
        enum class pllLocreVal {
            v0=0x00000000,     ///<Interrupt request is generated on a invalid or loss of the MCG external PLL clock.
            v1=0x00000001,     ///<Generates a system reset request on a invalid or loss of the MCG external PLL clock.
        };
        namespace pllLocreValC{
            constexpr MPL::Value<pllLocreVal,pllLocreVal::v0> v0{};
            constexpr MPL::Value<pllLocreVal,pllLocreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pllLocreVal> pllLocre{}; 
        ///MCG External PLL Clock Monitor Enable
        enum class pllCmeVal {
            v0=0x00000000,     ///<External clock monitor is disabled for EXT_PLL clock.
            v1=0x00000001,     ///<External clock monitor is enabled for EXT_PLL clock.
        };
        namespace pllCmeValC{
            constexpr MPL::Value<pllCmeVal,pllCmeVal::v0> v0{};
            constexpr MPL::Value<pllCmeVal,pllCmeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,pllCmeVal> pllCme{}; 
    }
    namespace McgC11{    ///<MCG Control 11 Register
        using Addr = Register::Address<0x40064010,0xffffffef,0,unsigned char>;
        ///PLL Clock Select
        enum class pllcsVal {
            v0=0x00000000,     ///<PLL0 output clock is selected.
            v1=0x00000001,     ///<External PLL clock is selected.
        };
        namespace pllcsValC{
            constexpr MPL::Value<pllcsVal,pllcsVal::v0> v0{};
            constexpr MPL::Value<pllcsVal,pllcsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pllcsVal> pllcs{}; 
    }
    namespace McgS2{    ///<MCG Status 2 Register
        using Addr = Register::Address<0x40064012,0xffffffef,0,unsigned char>;
        ///PLL Clock Select Status
        enum class pllcstVal {
            v0=0x00000000,     ///<Source of PLLCS is PLL clock.
            v1=0x00000001,     ///<Source of PLLCS is EXT_PLL clock.
        };
        namespace pllcstValC{
            constexpr MPL::Value<pllcstVal,pllcstVal::v0> v0{};
            constexpr MPL::Value<pllcstVal,pllcstVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pllcstVal> pllcst{}; 
    }
}
