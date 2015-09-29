#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Random Number Generator Accelerator
    namespace RngCr{    ///<RNGA Control Register
        using Addr = Register::Address<0x400a0000,0xffffffe0,0,unsigned>;
        ///no description available
        enum class goVal {
            v0=0x00000000,     ///<RNGA Output Register is not loaded with random data.
            v1=0x00000001,     ///<RNGA Output Register is loaded with random data.
        };
        namespace goValC{
            constexpr MPL::Value<goVal,goVal::v0> v0{};
            constexpr MPL::Value<goVal,goVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,goVal> go{}; 
        ///High Assurance
        enum class haVal {
            v0=0x00000000,     ///<Notification of security violations is enabled.
            v1=0x00000001,     ///<Notification of security violations is masked.
        };
        namespace haValC{
            constexpr MPL::Value<haVal,haVal::v0> v0{};
            constexpr MPL::Value<haVal,haVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,haVal> ha{}; 
        ///Interrupt Mask
        enum class intmVal {
            v0=0x00000000,     ///<Interrupt is enabled.
            v1=0x00000001,     ///<Interrupt is masked.
        };
        namespace intmValC{
            constexpr MPL::Value<intmVal,intmVal::v0> v0{};
            constexpr MPL::Value<intmVal,intmVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,intmVal> intm{}; 
        ///Clear Interrupt
        enum class clriVal {
            v0=0x00000000,     ///<Do not clear the interrupt.
            v1=0x00000001,     ///<Clear the interrupt.
        };
        namespace clriValC{
            constexpr MPL::Value<clriVal,clriVal::v0> v0{};
            constexpr MPL::Value<clriVal,clriVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,clriVal> clri{}; 
        ///Sleep
        enum class slpVal {
            v0=0x00000000,     ///<RNGA is not in Sleep mode.
            v1=0x00000001,     ///<RNGA is in Sleep mode.
        };
        namespace slpValC{
            constexpr MPL::Value<slpVal,slpVal::v0> v0{};
            constexpr MPL::Value<slpVal,slpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,slpVal> slp{}; 
    }
    namespace RngSr{    ///<RNGA Status Register
        using Addr = Register::Address<0x400a0004,0xff0000e0,0,unsigned>;
        ///Security Violation
        enum class secvVal {
            v0=0x00000000,     ///<No security violations have occured or the High Assurance bit (HA) in the RNGA Control Register is not set.
            v1=0x00000001,     ///<A security violation has occurred.
        };
        namespace secvValC{
            constexpr MPL::Value<secvVal,secvVal::v0> v0{};
            constexpr MPL::Value<secvVal,secvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,secvVal> secv{}; 
        ///Last Read Status
        enum class lrsVal {
            v0=0x00000000,     ///<Last read was performed while the RNGA Output Register was not empty.
            v1=0x00000001,     ///<Last read was performed while the RNGA Output Register was empty (underflow condition).
        };
        namespace lrsValC{
            constexpr MPL::Value<lrsVal,lrsVal::v0> v0{};
            constexpr MPL::Value<lrsVal,lrsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,lrsVal> lrs{}; 
        ///Output Register Underflow
        enum class oruVal {
            v0=0x00000000,     ///<The RNGA Output Register has not been read while empty since last read of the RNGA Status Register.
            v1=0x00000001,     ///<The RNGA Output Register has been read while empty since last read of the RNGA Status Register.
        };
        namespace oruValC{
            constexpr MPL::Value<oruVal,oruVal::v0> v0{};
            constexpr MPL::Value<oruVal,oruVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,oruVal> oru{}; 
        ///Error Interrupt
        enum class erriVal {
            v0=0x00000000,     ///<The RNGA Output Register has not been read while empty.
            v1=0x00000001,     ///<The RNGA Output Register has been read while empty.
        };
        namespace erriValC{
            constexpr MPL::Value<erriVal,erriVal::v0> v0{};
            constexpr MPL::Value<erriVal,erriVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,erriVal> erri{}; 
        ///Sleep
        enum class slpVal {
            v0=0x00000000,     ///<The RNGA is not in Sleep mode.
            v1=0x00000001,     ///<The RNGA is in Sleep mode.
        };
        namespace slpValC{
            constexpr MPL::Value<slpVal,slpVal::v0> v0{};
            constexpr MPL::Value<slpVal,slpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,slpVal> slp{}; 
        ///Output Register Level
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> oregLvl{}; 
        ///Output Register Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> oregSize{}; 
    }
    namespace RngEr{    ///<RNGA Entropy Register
        using Addr = Register::Address<0x400a0008,0x00000000,0,unsigned>;
        ///External Entropy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> extEnt{}; 
    }
    namespace RngOr{    ///<RNGA Output Register
        using Addr = Register::Address<0x400a000c,0x00000000,0,unsigned>;
        ///Random Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> randout{}; 
    }
}
