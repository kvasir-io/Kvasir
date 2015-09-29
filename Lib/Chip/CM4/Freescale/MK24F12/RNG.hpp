#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Random Number Generator Accelerator
    namespace RngCr{    ///<RNGA Control Register
        using Addr = Register::Address<0x40029000,0xffffffe0,0,unsigned>;
        ///Go
        enum class goVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace goValC{
            constexpr MPL::Value<goVal,goVal::v0> v0{};
            constexpr MPL::Value<goVal,goVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,goVal> go{}; 
        ///High Assurance
        enum class haVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace haValC{
            constexpr MPL::Value<haVal,haVal::v0> v0{};
            constexpr MPL::Value<haVal,haVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,haVal> ha{}; 
        ///Interrupt Mask
        enum class intmVal {
            v0=0x00000000,     ///<Not masked
            v1=0x00000001,     ///<Masked
        };
        namespace intmValC{
            constexpr MPL::Value<intmVal,intmVal::v0> v0{};
            constexpr MPL::Value<intmVal,intmVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,intmVal> intm{}; 
        ///Clear Interrupt
        enum class clriVal {
            v0=0x00000000,     ///<Do not clear the interrupt.
            v1=0x00000001,     ///<Clear the interrupt. When you write 1 to this field, RNGA then resets the error-interrupt indicator (SR[ERRI]). This bit always reads as 0.
        };
        namespace clriValC{
            constexpr MPL::Value<clriVal,clriVal::v0> v0{};
            constexpr MPL::Value<clriVal,clriVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,clriVal> clri{}; 
        ///Sleep
        enum class slpVal {
            v0=0x00000000,     ///<Normal mode
            v1=0x00000001,     ///<Sleep (low-power) mode
        };
        namespace slpValC{
            constexpr MPL::Value<slpVal,slpVal::v0> v0{};
            constexpr MPL::Value<slpVal,slpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,slpVal> slp{}; 
    }
    namespace RngSr{    ///<RNGA Status Register
        using Addr = Register::Address<0x40029004,0xff0000e0,0,unsigned>;
        ///Security Violation
        enum class secvVal {
            v0=0x00000000,     ///<No security violation
            v1=0x00000001,     ///<Security violation
        };
        namespace secvValC{
            constexpr MPL::Value<secvVal,secvVal::v0> v0{};
            constexpr MPL::Value<secvVal,secvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,secvVal> secv{}; 
        ///Last Read Status
        enum class lrsVal {
            v0=0x00000000,     ///<No underflow
            v1=0x00000001,     ///<Underflow
        };
        namespace lrsValC{
            constexpr MPL::Value<lrsVal,lrsVal::v0> v0{};
            constexpr MPL::Value<lrsVal,lrsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,lrsVal> lrs{}; 
        ///Output Register Underflow
        enum class oruVal {
            v0=0x00000000,     ///<No underflow
            v1=0x00000001,     ///<Underflow
        };
        namespace oruValC{
            constexpr MPL::Value<oruVal,oruVal::v0> v0{};
            constexpr MPL::Value<oruVal,oruVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,oruVal> oru{}; 
        ///Error Interrupt
        enum class erriVal {
            v0=0x00000000,     ///<No underflow
            v1=0x00000001,     ///<Underflow
        };
        namespace erriValC{
            constexpr MPL::Value<erriVal,erriVal::v0> v0{};
            constexpr MPL::Value<erriVal,erriVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,erriVal> erri{}; 
        ///Sleep
        enum class slpVal {
            v0=0x00000000,     ///<Normal mode
            v1=0x00000001,     ///<Sleep (low-power) mode
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
        using Addr = Register::Address<0x40029008,0x00000000,0,unsigned>;
        ///External Entropy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> extEnt{}; 
    }
    namespace RngOr{    ///<RNGA Output Register
        using Addr = Register::Address<0x4002900c,0x00000000,0,unsigned>;
        ///Random Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> randout{}; 
    }
}
