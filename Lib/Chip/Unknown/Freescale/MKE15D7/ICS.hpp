#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Internal clock source
    namespace IcsC1{    ///<ICS Control Register 1
        using Addr = Register::Address<0x40044000,0xffffff00,0,unsigned char>;
        ///Internal Reference Stop Enable
        enum class IrefstenVal {
            v0=0x00000000,     ///<Internal reference clock is disabled in stop.
            v1=0x00000001,     ///<Internal reference clock stays enabled in stop if IRCLKEN is set before entering stop.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IrefstenVal> irefsten{}; 
        namespace IrefstenValC{
            constexpr Register::FieldValue<decltype(irefsten),IrefstenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irefsten),IrefstenVal::v1> v1{};
        }
        ///Internal Reference Clock Enable
        enum class IrclkenVal {
            v0=0x00000000,     ///<ICSIRCLK inactive.
            v1=0x00000001,     ///<ICSIRCLK active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IrclkenVal> irclken{}; 
        namespace IrclkenValC{
            constexpr Register::FieldValue<decltype(irclken),IrclkenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irclken),IrclkenVal::v1> v1{};
        }
        ///Internal Reference Select
        enum class IrefsVal {
            v0=0x00000000,     ///<External reference clock selected.
            v1=0x00000001,     ///<Internal reference clock selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,IrefsVal> irefs{}; 
        namespace IrefsValC{
            constexpr Register::FieldValue<decltype(irefs),IrefsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irefs),IrefsVal::v1> v1{};
        }
        ///Reference Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> rdiv{}; 
        namespace RdivValC{
        }
        ///Clock Source Select
        enum class ClksVal {
            v00=0x00000000,     ///<Output of FLL is selected.
            v01=0x00000001,     ///<Internal reference clock is selected.
            v10=0x00000002,     ///<External reference clock is selected.
            v11=0x00000003,     ///<Reserved, defaults to 00.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ClksVal> clks{}; 
        namespace ClksValC{
            constexpr Register::FieldValue<decltype(clks),ClksVal::v00> v00{};
            constexpr Register::FieldValue<decltype(clks),ClksVal::v01> v01{};
            constexpr Register::FieldValue<decltype(clks),ClksVal::v10> v10{};
            constexpr Register::FieldValue<decltype(clks),ClksVal::v11> v11{};
        }
    }
    namespace IcsC2{    ///<ICS Control Register 2
        using Addr = Register::Address<0x40044001,0xffffff03,0,unsigned char>;
        ///Fine Reference Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> frdiv{}; 
        namespace FrdivValC{
        }
        ///Low Power Select
        enum class LpVal {
            v0=0x00000000,     ///<FLL is not disabled in bypass mode.
            v1=0x00000001,     ///<FLL is disabled in bypass modes unless BDM is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,LpVal> lp{}; 
        namespace LpValC{
            constexpr Register::FieldValue<decltype(lp),LpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lp),LpVal::v1> v1{};
        }
        ///Bus Frequency Divider
        enum class BdivVal {
            v000=0x00000000,     ///<Encoding 0 - Divides selected clock by 1. This value can not be written or readback in some devices.
            v001=0x00000001,     ///<Encoding 1 - Divides selected clock by 2.
            v010=0x00000002,     ///<Encoding 2 - Divides selected clock by 4 (reset default).
            v011=0x00000003,     ///<Encoding 3 - Divides selected clock by 8.
            v100=0x00000004,     ///<Encoding 4 - Divides selected clock by 16.
            v101=0x00000005,     ///<Encoding 5 - Divides selected clock by 32.
            v110=0x00000006,     ///<Encoding 6 - Divides selected clock by 64.
            v111=0x00000007,     ///<Encoding 7 - Divides selected clock by 128.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,BdivVal> bdiv{}; 
        namespace BdivValC{
            constexpr Register::FieldValue<decltype(bdiv),BdivVal::v000> v000{};
            constexpr Register::FieldValue<decltype(bdiv),BdivVal::v001> v001{};
            constexpr Register::FieldValue<decltype(bdiv),BdivVal::v010> v010{};
            constexpr Register::FieldValue<decltype(bdiv),BdivVal::v011> v011{};
            constexpr Register::FieldValue<decltype(bdiv),BdivVal::v100> v100{};
            constexpr Register::FieldValue<decltype(bdiv),BdivVal::v101> v101{};
            constexpr Register::FieldValue<decltype(bdiv),BdivVal::v110> v110{};
            constexpr Register::FieldValue<decltype(bdiv),BdivVal::v111> v111{};
        }
    }
    namespace IcsC3{    ///<ICS Control Register 3
        using Addr = Register::Address<0x40044002,0xffffff00,0,unsigned char>;
        ///Slow Internal Reference Clock Trim Setting
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sctrim{}; 
        namespace SctrimValC{
        }
    }
    namespace IcsC4{    ///<ICS Control Register 4
        using Addr = Register::Address<0x40044003,0xffffff1e,0,unsigned char>;
        ///Slow Internal Reference Clock Fine Trim
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> scftrim{}; 
        namespace ScftrimValC{
        }
        ///Clock Monitor Enable
        enum class CmeVal {
            v0=0x00000000,     ///<Clock monitor is disabled.
            v1=0x00000001,     ///<Clock monitor enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,CmeVal> cme{}; 
        namespace CmeValC{
            constexpr Register::FieldValue<decltype(cme),CmeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cme),CmeVal::v1> v1{};
        }
        ///Loss of Rough Lock Interrupt Enable
        enum class RlolieVal {
            v0=0x00000000,     ///<Lose of Rough Lock Interrupt disable.
            v1=0x00000001,     ///<Lose of Rough Lock Interrupt enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RlolieVal> rlolie{}; 
        namespace RlolieValC{
            constexpr Register::FieldValue<decltype(rlolie),RlolieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rlolie),RlolieVal::v1> v1{};
        }
        ///Loss of Fine Lock Interrupt Enable
        enum class FlolieVal {
            v0=0x00000000,     ///<Lose of fine Lock Interrupt disable.
            v1=0x00000001,     ///<Lose of fine Lock Interrupt enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,FlolieVal> flolie{}; 
        namespace FlolieValC{
            constexpr Register::FieldValue<decltype(flolie),FlolieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(flolie),FlolieVal::v1> v1{};
        }
    }
    namespace IcsS{    ///<ICS Status Register
        using Addr = Register::Address<0x40044004,0xffffff03,0,unsigned char>;
        ///Clock Mode Status
        enum class ClkstVal {
            v00=0x00000000,     ///<Output of FLL is selected.
            v01=0x00000001,     ///<FLL Bypassed, internal reference clock is selected.
            v10=0x00000002,     ///<FLL Bypassed, external reference clock is selected.
            v11=0x00000003,     ///<Reserved.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,ClkstVal> clkst{}; 
        namespace ClkstValC{
            constexpr Register::FieldValue<decltype(clkst),ClkstVal::v00> v00{};
            constexpr Register::FieldValue<decltype(clkst),ClkstVal::v01> v01{};
            constexpr Register::FieldValue<decltype(clkst),ClkstVal::v10> v10{};
            constexpr Register::FieldValue<decltype(clkst),ClkstVal::v11> v11{};
        }
        ///Internal Reference Status
        enum class IrefstVal {
            v0=0x00000000,     ///<Source of reference clock is external clock.
            v1=0x00000001,     ///<Source of reference clock is internal clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,IrefstVal> irefst{}; 
        namespace IrefstValC{
            constexpr Register::FieldValue<decltype(irefst),IrefstVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irefst),IrefstVal::v1> v1{};
        }
        ///Rough Lock Status
        enum class RlockVal {
            v0=0x00000000,     ///<FLL is currently Roughly unlocked or FLL is disabled.
            v1=0x00000001,     ///<FLL is currently Roughly locked.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RlockVal> rlock{}; 
        namespace RlockValC{
            constexpr Register::FieldValue<decltype(rlock),RlockVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rlock),RlockVal::v1> v1{};
        }
        ///Fine Lock Status
        enum class FlockVal {
            v0=0x00000000,     ///<FLL is currently unlocked.
            v1=0x00000001,     ///<FLL is currently locked.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,FlockVal> flock{}; 
        namespace FlockValC{
            constexpr Register::FieldValue<decltype(flock),FlockVal::v0> v0{};
            constexpr Register::FieldValue<decltype(flock),FlockVal::v1> v1{};
        }
        ///Loss of Lock Status
        enum class LolsVal {
            v0=0x00000000,     ///<FLL has not lost lock since LOLS was last cleared.
            v1=0x00000001,     ///<FLL has lost lock since LOLS was last cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LolsVal> lols{}; 
        namespace LolsValC{
            constexpr Register::FieldValue<decltype(lols),LolsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lols),LolsVal::v1> v1{};
        }
    }
}
