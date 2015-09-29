#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Internal clock source
    namespace IcsC1{    ///<ICS Control Register 1
        using Addr = Register::Address<0x40044000,0xffffff00,0,unsigned char>;
        ///Internal Reference Stop Enable
        enum class irefstenVal {
            v0=0x00000000,     ///<Internal reference clock is disabled in stop.
            v1=0x00000001,     ///<Internal reference clock stays enabled in stop if IRCLKEN is set before entering stop.
        };
        namespace irefstenValC{
            constexpr MPL::Value<irefstenVal,irefstenVal::v0> v0{};
            constexpr MPL::Value<irefstenVal,irefstenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,irefstenVal> irefsten{}; 
        ///Internal Reference Clock Enable
        enum class irclkenVal {
            v0=0x00000000,     ///<ICSIRCLK inactive.
            v1=0x00000001,     ///<ICSIRCLK active.
        };
        namespace irclkenValC{
            constexpr MPL::Value<irclkenVal,irclkenVal::v0> v0{};
            constexpr MPL::Value<irclkenVal,irclkenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,irclkenVal> irclken{}; 
        ///Internal Reference Select
        enum class irefsVal {
            v0=0x00000000,     ///<External reference clock selected.
            v1=0x00000001,     ///<Internal reference clock selected.
        };
        namespace irefsValC{
            constexpr MPL::Value<irefsVal,irefsVal::v0> v0{};
            constexpr MPL::Value<irefsVal,irefsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,irefsVal> irefs{}; 
        ///Reference Divider
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> rdiv{}; 
        ///Clock Source Select
        enum class clksVal {
            v00=0x00000000,     ///<Output of FLL is selected.
            v01=0x00000001,     ///<Internal reference clock is selected.
            v10=0x00000002,     ///<External reference clock is selected.
            v11=0x00000003,     ///<Reserved, defaults to 00.
        };
        namespace clksValC{
            constexpr MPL::Value<clksVal,clksVal::v00> v00{};
            constexpr MPL::Value<clksVal,clksVal::v01> v01{};
            constexpr MPL::Value<clksVal,clksVal::v10> v10{};
            constexpr MPL::Value<clksVal,clksVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,clksVal> clks{}; 
    }
    namespace IcsC2{    ///<ICS Control Register 2
        using Addr = Register::Address<0x40044001,0xffffff03,0,unsigned char>;
        ///Fine Reference Divider
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> frdiv{}; 
        ///Low Power Select
        enum class lpVal {
            v0=0x00000000,     ///<FLL is not disabled in bypass mode.
            v1=0x00000001,     ///<FLL is disabled in bypass modes unless BDM is active.
        };
        namespace lpValC{
            constexpr MPL::Value<lpVal,lpVal::v0> v0{};
            constexpr MPL::Value<lpVal,lpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,lpVal> lp{}; 
        ///Bus Frequency Divider
        enum class bdivVal {
            v000=0x00000000,     ///<Encoding 0 - Divides selected clock by 1. This value can not be written or readback in some devices.
            v001=0x00000001,     ///<Encoding 1 - Divides selected clock by 2.
            v010=0x00000002,     ///<Encoding 2 - Divides selected clock by 4 (reset default).
            v011=0x00000003,     ///<Encoding 3 - Divides selected clock by 8.
            v100=0x00000004,     ///<Encoding 4 - Divides selected clock by 16.
            v101=0x00000005,     ///<Encoding 5 - Divides selected clock by 32.
            v110=0x00000006,     ///<Encoding 6 - Divides selected clock by 64.
            v111=0x00000007,     ///<Encoding 7 - Divides selected clock by 128.
        };
        namespace bdivValC{
            constexpr MPL::Value<bdivVal,bdivVal::v000> v000{};
            constexpr MPL::Value<bdivVal,bdivVal::v001> v001{};
            constexpr MPL::Value<bdivVal,bdivVal::v010> v010{};
            constexpr MPL::Value<bdivVal,bdivVal::v011> v011{};
            constexpr MPL::Value<bdivVal,bdivVal::v100> v100{};
            constexpr MPL::Value<bdivVal,bdivVal::v101> v101{};
            constexpr MPL::Value<bdivVal,bdivVal::v110> v110{};
            constexpr MPL::Value<bdivVal,bdivVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,bdivVal> bdiv{}; 
    }
    namespace IcsC3{    ///<ICS Control Register 3
        using Addr = Register::Address<0x40044002,0xffffff00,0,unsigned char>;
        ///Slow Internal Reference Clock Trim Setting
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sctrim{}; 
    }
    namespace IcsC4{    ///<ICS Control Register 4
        using Addr = Register::Address<0x40044003,0xffffff1e,0,unsigned char>;
        ///Slow Internal Reference Clock Fine Trim
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> scftrim{}; 
        ///Clock Monitor Enable
        enum class cmeVal {
            v0=0x00000000,     ///<Clock monitor is disabled.
            v1=0x00000001,     ///<Clock monitor enable.
        };
        namespace cmeValC{
            constexpr MPL::Value<cmeVal,cmeVal::v0> v0{};
            constexpr MPL::Value<cmeVal,cmeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,cmeVal> cme{}; 
        ///Loss of Rough Lock Interrupt Enable
        enum class rlolieVal {
            v0=0x00000000,     ///<Lose of Rough Lock Interrupt disable.
            v1=0x00000001,     ///<Lose of Rough Lock Interrupt enable.
        };
        namespace rlolieValC{
            constexpr MPL::Value<rlolieVal,rlolieVal::v0> v0{};
            constexpr MPL::Value<rlolieVal,rlolieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rlolieVal> rlolie{}; 
        ///Loss of Fine Lock Interrupt Enable
        enum class flolieVal {
            v0=0x00000000,     ///<Lose of fine Lock Interrupt disable.
            v1=0x00000001,     ///<Lose of fine Lock Interrupt enable.
        };
        namespace flolieValC{
            constexpr MPL::Value<flolieVal,flolieVal::v0> v0{};
            constexpr MPL::Value<flolieVal,flolieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,flolieVal> flolie{}; 
    }
    namespace IcsS{    ///<ICS Status Register
        using Addr = Register::Address<0x40044004,0xffffff03,0,unsigned char>;
        ///Clock Mode Status
        enum class clkstVal {
            v00=0x00000000,     ///<Output of FLL is selected.
            v01=0x00000001,     ///<FLL Bypassed, internal reference clock is selected.
            v10=0x00000002,     ///<FLL Bypassed, external reference clock is selected.
            v11=0x00000003,     ///<Reserved.
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
            v0=0x00000000,     ///<Source of reference clock is external clock.
            v1=0x00000001,     ///<Source of reference clock is internal clock.
        };
        namespace irefstValC{
            constexpr MPL::Value<irefstVal,irefstVal::v0> v0{};
            constexpr MPL::Value<irefstVal,irefstVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,irefstVal> irefst{}; 
        ///Rough Lock Status
        enum class rlockVal {
            v0=0x00000000,     ///<FLL is currently Roughly unlocked or FLL is disabled.
            v1=0x00000001,     ///<FLL is currently Roughly locked.
        };
        namespace rlockValC{
            constexpr MPL::Value<rlockVal,rlockVal::v0> v0{};
            constexpr MPL::Value<rlockVal,rlockVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rlockVal> rlock{}; 
        ///Fine Lock Status
        enum class flockVal {
            v0=0x00000000,     ///<FLL is currently unlocked.
            v1=0x00000001,     ///<FLL is currently locked.
        };
        namespace flockValC{
            constexpr MPL::Value<flockVal,flockVal::v0> v0{};
            constexpr MPL::Value<flockVal,flockVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,flockVal> flock{}; 
        ///Loss of Lock Status
        enum class lolsVal {
            v0=0x00000000,     ///<FLL has not lost lock since LOLS was last cleared.
            v1=0x00000001,     ///<FLL has lost lock since LOLS was last cleared.
        };
        namespace lolsValC{
            constexpr MPL::Value<lolsVal,lolsVal::v0> v0{};
            constexpr MPL::Value<lolsVal,lolsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,lolsVal> lols{}; 
    }
}
