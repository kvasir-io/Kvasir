#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Mode Controller
    namespace McSrsh{    ///<System Reset Status Register High
        using Addr = Register::Address<0x4007e000,0xfffffff8,0,unsigned char>;
        ///JTAG generated reset
        enum class jtagVal {
            v0=0x00000000,     ///<Reset not caused by JTAG
            v1=0x00000001,     ///<Reset caused by JTAG
        };
        namespace jtagValC{
            constexpr MPL::Value<jtagVal,jtagVal::v0> v0{};
            constexpr MPL::Value<jtagVal,jtagVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,jtagVal> jtag{}; 
        ///Core Lock-up
        enum class lockupVal {
            v0=0x00000000,     ///<Reset not caused by core LOCKUP event
            v1=0x00000001,     ///<Reset caused by core LOCKUP event
        };
        namespace lockupValC{
            constexpr MPL::Value<lockupVal,lockupVal::v0> v0{};
            constexpr MPL::Value<lockupVal,lockupVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,lockupVal> lockup{}; 
        ///Software
        enum class swVal {
            v0=0x00000000,     ///<Reset not caused by software setting of SYSRESETREQ bit
            v1=0x00000001,     ///<Reset caused by software setting of SYSRESETREQ bit
        };
        namespace swValC{
            constexpr MPL::Value<swVal,swVal::v0> v0{};
            constexpr MPL::Value<swVal,swVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,swVal> sw{}; 
    }
    namespace McSrsl{    ///<System Reset Status Register Low
        using Addr = Register::Address<0x4007e001,0xffffff18,0,unsigned char>;
        ///Low-leakage wakeup reset
        enum class wakeupVal {
            v0=0x00000000,     ///<Reset not caused by LLWU module wakeup source
            v1=0x00000001,     ///<Reset caused by LLWU module wakeup source
        };
        namespace wakeupValC{
            constexpr MPL::Value<wakeupVal,wakeupVal::v0> v0{};
            constexpr MPL::Value<wakeupVal,wakeupVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,wakeupVal> wakeup{}; 
        ///Low-voltage detect reset
        enum class lvdVal {
            v0=0x00000000,     ///<Reset not caused by LVD trip or POR
            v1=0x00000001,     ///<Reset caused by LVD trip or POR
        };
        namespace lvdValC{
            constexpr MPL::Value<lvdVal,lvdVal::v0> v0{};
            constexpr MPL::Value<lvdVal,lvdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,lvdVal> lvd{}; 
        ///Loss-of-clock reset
        enum class locVal {
            v0=0x00000000,     ///<Reset not caused by a loss of external clock.
            v1=0x00000001,     ///<Reset caused by a loss of external clock.
        };
        namespace locValC{
            constexpr MPL::Value<locVal,locVal::v0> v0{};
            constexpr MPL::Value<locVal,locVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,locVal> loc{}; 
        ///Computer Operating Properly (COP) Watchdog
        enum class copVal {
            v0=0x00000000,     ///<Reset not caused by COP timeout
            v1=0x00000001,     ///<Reset caused by COP timeout
        };
        namespace copValC{
            constexpr MPL::Value<copVal,copVal::v0> v0{};
            constexpr MPL::Value<copVal,copVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,copVal> cop{}; 
        ///External reset pin
        enum class pinVal {
            v0=0x00000000,     ///<Reset not caused by external reset pin
            v1=0x00000001,     ///<Reset caused by external reset pin
        };
        namespace pinValC{
            constexpr MPL::Value<pinVal,pinVal::v0> v0{};
            constexpr MPL::Value<pinVal,pinVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pinVal> pin{}; 
        ///Power-on reset
        enum class porVal {
            v0=0x00000000,     ///<Reset not caused by POR
            v1=0x00000001,     ///<Reset caused by POR
        };
        namespace porValC{
            constexpr MPL::Value<porVal,porVal::v0> v0{};
            constexpr MPL::Value<porVal,porVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,porVal> por{}; 
    }
    namespace McPmprot{    ///<Power Mode Protection Register
        using Addr = Register::Address<0x4007e002,0xffffffc8,0,unsigned char>;
        ///Allow very low leakage stop 1 mode
        enum class avlls1Val {
            v0=0x00000000,     ///<VLLS1 is not allowed
            v1=0x00000001,     ///<VLLS1 is allowed
        };
        namespace avlls1ValC{
            constexpr MPL::Value<avlls1Val,avlls1Val::v0> v0{};
            constexpr MPL::Value<avlls1Val,avlls1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,avlls1Val> avlls1{}; 
        ///Allow very low leakage stop 2 mode
        enum class avlls2Val {
            v0=0x00000000,     ///<VLLS2 is not allowed
            v1=0x00000001,     ///<VLLS2 is allowed
        };
        namespace avlls2ValC{
            constexpr MPL::Value<avlls2Val,avlls2Val::v0> v0{};
            constexpr MPL::Value<avlls2Val,avlls2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,avlls2Val> avlls2{}; 
        ///Allow Very Low Leakage Stop 3 Mode
        enum class avlls3Val {
            v0=0x00000000,     ///<VLLS3 is not allowed
            v1=0x00000001,     ///<VLLS3 is allowed
        };
        namespace avlls3ValC{
            constexpr MPL::Value<avlls3Val,avlls3Val::v0> v0{};
            constexpr MPL::Value<avlls3Val,avlls3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,avlls3Val> avlls3{}; 
        ///Allow low leakage stop mode
        enum class allsVal {
            v0=0x00000000,     ///<LLS is not allowed
            v1=0x00000001,     ///<LLS is allowed
        };
        namespace allsValC{
            constexpr MPL::Value<allsVal,allsVal::v0> v0{};
            constexpr MPL::Value<allsVal,allsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,allsVal> alls{}; 
        ///Allow very low power modes
        enum class avlpVal {
            v0=0x00000000,     ///<VLPR, VLPW, and VLPS are not allowed
            v1=0x00000001,     ///<VLPR, VLPW, and VLPS are allowed
        };
        namespace avlpValC{
            constexpr MPL::Value<avlpVal,avlpVal::v0> v0{};
            constexpr MPL::Value<avlpVal,avlpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,avlpVal> avlp{}; 
    }
    namespace McPmctrl{    ///<Power Mode Control Register
        using Addr = Register::Address<0x4007e003,0xffffff18,0,unsigned char>;
        ///Low Power, Low Leakage Stop Mode
        enum class lpllsmVal {
            v000=0x00000000,     ///<Normal stop
            v010=0x00000002,     ///<Very low power stop (VLPS)
            v011=0x00000003,     ///<Low leakage stop (LLS)
            v101=0x00000005,     ///<Very low leakage stop 3 (VLLS3)
            v110=0x00000006,     ///<Very low leakage stop 2 (VLLS2)
            v111=0x00000007,     ///<Very low leakage stop 1 (VLLS1)
        };
        namespace lpllsmValC{
            constexpr MPL::Value<lpllsmVal,lpllsmVal::v000> v000{};
            constexpr MPL::Value<lpllsmVal,lpllsmVal::v010> v010{};
            constexpr MPL::Value<lpllsmVal,lpllsmVal::v011> v011{};
            constexpr MPL::Value<lpllsmVal,lpllsmVal::v101> v101{};
            constexpr MPL::Value<lpllsmVal,lpllsmVal::v110> v110{};
            constexpr MPL::Value<lpllsmVal,lpllsmVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,lpllsmVal> lpllsm{}; 
        ///Run Mode Enable
        enum class runmVal {
            v00=0x00000000,     ///<Normal run mode
            v10=0x00000002,     ///<Very low power run mode
        };
        namespace runmValC{
            constexpr MPL::Value<runmVal,runmVal::v00> v00{};
            constexpr MPL::Value<runmVal,runmVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,runmVal> runm{}; 
        ///Low Power Wake Up on Interrupt
        enum class lpwuiVal {
            v0=0x00000000,     ///<The voltage regulator remains in stop regulation on an interrupt
            v1=0x00000001,     ///<The voltage regulator exits stop regulation on an interrupt
        };
        namespace lpwuiValC{
            constexpr MPL::Value<lpwuiVal,lpwuiVal::v0> v0{};
            constexpr MPL::Value<lpwuiVal,lpwuiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,lpwuiVal> lpwui{}; 
    }
}
