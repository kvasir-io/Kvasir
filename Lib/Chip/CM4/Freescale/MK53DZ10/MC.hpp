#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Mode Controller
    namespace McSrsh{    ///<System Reset Status Register High
        using Addr = Register::Address<0x4007e000,0xfffffff8,0,unsigned char>;
        ///JTAG generated reset
        enum class JtagVal {
            v0=0x00000000,     ///<Reset not caused by JTAG
            v1=0x00000001,     ///<Reset caused by JTAG
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,JtagVal> jtag{}; 
        namespace JtagValC{
            constexpr Register::FieldValue<decltype(jtag)::Type,JtagVal::v0> v0{};
            constexpr Register::FieldValue<decltype(jtag)::Type,JtagVal::v1> v1{};
        }
        ///Core Lock-up
        enum class LockupVal {
            v0=0x00000000,     ///<Reset not caused by core LOCKUP event
            v1=0x00000001,     ///<Reset caused by core LOCKUP event
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,LockupVal> lockup{}; 
        namespace LockupValC{
            constexpr Register::FieldValue<decltype(lockup)::Type,LockupVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lockup)::Type,LockupVal::v1> v1{};
        }
        ///Software
        enum class SwVal {
            v0=0x00000000,     ///<Reset not caused by software setting of SYSRESETREQ bit
            v1=0x00000001,     ///<Reset caused by software setting of SYSRESETREQ bit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwVal> sw{}; 
        namespace SwValC{
            constexpr Register::FieldValue<decltype(sw)::Type,SwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sw)::Type,SwVal::v1> v1{};
        }
    }
    namespace McSrsl{    ///<System Reset Status Register Low
        using Addr = Register::Address<0x4007e001,0xffffff18,0,unsigned char>;
        ///Low-leakage wakeup reset
        enum class WakeupVal {
            v0=0x00000000,     ///<Reset not caused by LLWU module wakeup source
            v1=0x00000001,     ///<Reset caused by LLWU module wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,WakeupVal> wakeup{}; 
        namespace WakeupValC{
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wakeup)::Type,WakeupVal::v1> v1{};
        }
        ///Low-voltage detect reset
        enum class LvdVal {
            v0=0x00000000,     ///<Reset not caused by LVD trip or POR
            v1=0x00000001,     ///<Reset caused by LVD trip or POR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,LvdVal> lvd{}; 
        namespace LvdValC{
            constexpr Register::FieldValue<decltype(lvd)::Type,LvdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lvd)::Type,LvdVal::v1> v1{};
        }
        ///Loss-of-clock reset
        enum class LocVal {
            v0=0x00000000,     ///<Reset not caused by a loss of external clock.
            v1=0x00000001,     ///<Reset caused by a loss of external clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,LocVal> loc{}; 
        namespace LocValC{
            constexpr Register::FieldValue<decltype(loc)::Type,LocVal::v0> v0{};
            constexpr Register::FieldValue<decltype(loc)::Type,LocVal::v1> v1{};
        }
        ///Computer Operating Properly (COP) Watchdog
        enum class CopVal {
            v0=0x00000000,     ///<Reset not caused by COP timeout
            v1=0x00000001,     ///<Reset caused by COP timeout
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,CopVal> cop{}; 
        namespace CopValC{
            constexpr Register::FieldValue<decltype(cop)::Type,CopVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cop)::Type,CopVal::v1> v1{};
        }
        ///External reset pin
        enum class PinVal {
            v0=0x00000000,     ///<Reset not caused by external reset pin
            v1=0x00000001,     ///<Reset caused by external reset pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,PinVal> pin{}; 
        namespace PinValC{
            constexpr Register::FieldValue<decltype(pin)::Type,PinVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pin)::Type,PinVal::v1> v1{};
        }
        ///Power-on reset
        enum class PorVal {
            v0=0x00000000,     ///<Reset not caused by POR
            v1=0x00000001,     ///<Reset caused by POR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,PorVal> por{}; 
        namespace PorValC{
            constexpr Register::FieldValue<decltype(por)::Type,PorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(por)::Type,PorVal::v1> v1{};
        }
    }
    namespace McPmprot{    ///<Power Mode Protection Register
        using Addr = Register::Address<0x4007e002,0xffffffc8,0,unsigned char>;
        ///Allow very low leakage stop 1 mode
        enum class Avlls1Val {
            v0=0x00000000,     ///<VLLS1 is not allowed
            v1=0x00000001,     ///<VLLS1 is allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Avlls1Val> avlls1{}; 
        namespace Avlls1ValC{
            constexpr Register::FieldValue<decltype(avlls1)::Type,Avlls1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(avlls1)::Type,Avlls1Val::v1> v1{};
        }
        ///Allow very low leakage stop 2 mode
        enum class Avlls2Val {
            v0=0x00000000,     ///<VLLS2 is not allowed
            v1=0x00000001,     ///<VLLS2 is allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Avlls2Val> avlls2{}; 
        namespace Avlls2ValC{
            constexpr Register::FieldValue<decltype(avlls2)::Type,Avlls2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(avlls2)::Type,Avlls2Val::v1> v1{};
        }
        ///Allow Very Low Leakage Stop 3 Mode
        enum class Avlls3Val {
            v0=0x00000000,     ///<VLLS3 is not allowed
            v1=0x00000001,     ///<VLLS3 is allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Avlls3Val> avlls3{}; 
        namespace Avlls3ValC{
            constexpr Register::FieldValue<decltype(avlls3)::Type,Avlls3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(avlls3)::Type,Avlls3Val::v1> v1{};
        }
        ///Allow low leakage stop mode
        enum class AllsVal {
            v0=0x00000000,     ///<LLS is not allowed
            v1=0x00000001,     ///<LLS is allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,AllsVal> alls{}; 
        namespace AllsValC{
            constexpr Register::FieldValue<decltype(alls)::Type,AllsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(alls)::Type,AllsVal::v1> v1{};
        }
        ///Allow very low power modes
        enum class AvlpVal {
            v0=0x00000000,     ///<VLPR, VLPW, and VLPS are not allowed
            v1=0x00000001,     ///<VLPR, VLPW, and VLPS are allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,AvlpVal> avlp{}; 
        namespace AvlpValC{
            constexpr Register::FieldValue<decltype(avlp)::Type,AvlpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(avlp)::Type,AvlpVal::v1> v1{};
        }
    }
    namespace McPmctrl{    ///<Power Mode Control Register
        using Addr = Register::Address<0x4007e003,0xffffff18,0,unsigned char>;
        ///Low Power, Low Leakage Stop Mode
        enum class LpllsmVal {
            v000=0x00000000,     ///<Normal stop
            v010=0x00000002,     ///<Very low power stop (VLPS)
            v011=0x00000003,     ///<Low leakage stop (LLS)
            v101=0x00000005,     ///<Very low leakage stop 3 (VLLS3)
            v110=0x00000006,     ///<Very low leakage stop 2 (VLLS2)
            v111=0x00000007,     ///<Very low leakage stop 1 (VLLS1)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,LpllsmVal> lpllsm{}; 
        namespace LpllsmValC{
            constexpr Register::FieldValue<decltype(lpllsm)::Type,LpllsmVal::v000> v000{};
            constexpr Register::FieldValue<decltype(lpllsm)::Type,LpllsmVal::v010> v010{};
            constexpr Register::FieldValue<decltype(lpllsm)::Type,LpllsmVal::v011> v011{};
            constexpr Register::FieldValue<decltype(lpllsm)::Type,LpllsmVal::v101> v101{};
            constexpr Register::FieldValue<decltype(lpllsm)::Type,LpllsmVal::v110> v110{};
            constexpr Register::FieldValue<decltype(lpllsm)::Type,LpllsmVal::v111> v111{};
        }
        ///Run Mode Enable
        enum class RunmVal {
            v00=0x00000000,     ///<Normal run mode
            v10=0x00000002,     ///<Very low power run mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,RunmVal> runm{}; 
        namespace RunmValC{
            constexpr Register::FieldValue<decltype(runm)::Type,RunmVal::v00> v00{};
            constexpr Register::FieldValue<decltype(runm)::Type,RunmVal::v10> v10{};
        }
        ///Low Power Wake Up on Interrupt
        enum class LpwuiVal {
            v0=0x00000000,     ///<The voltage regulator remains in stop regulation on an interrupt
            v1=0x00000001,     ///<The voltage regulator exits stop regulation on an interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LpwuiVal> lpwui{}; 
        namespace LpwuiValC{
            constexpr Register::FieldValue<decltype(lpwui)::Type,LpwuiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lpwui)::Type,LpwuiVal::v1> v1{};
        }
    }
}
