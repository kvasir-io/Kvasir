#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Non Volatile Memory Controller.
    namespace Noneready{    ///<Ready flag.
        using Addr = Register::Address<0x4001e400,0xfffffffe,0,unsigned>;
        ///NVMC ready.
        enum class readyVal {
            busy=0x00000000,     ///<NVMC is busy (on-going write or erase operation).
            ready=0x00000001,     ///<NVMC is ready.
        };
        namespace readyValC{
            constexpr MPL::Value<readyVal,readyVal::busy> busy{};
            constexpr MPL::Value<readyVal,readyVal::ready> ready{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,readyVal> ready{}; 
    }
    namespace Noneconfig{    ///<Configuration register.
        using Addr = Register::Address<0x4001e504,0xfffffffc,0,unsigned>;
        ///Program write enable.
        enum class wenVal {
            ren=0x00000000,     ///<Read only access.
            wen=0x00000001,     ///<Write enabled.
            een=0x00000002,     ///<Erase enabled.
        };
        namespace wenValC{
            constexpr MPL::Value<wenVal,wenVal::ren> ren{};
            constexpr MPL::Value<wenVal,wenVal::wen> wen{};
            constexpr MPL::Value<wenVal,wenVal::een> een{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,wenVal> wen{}; 
    }
    namespace Noneerasepage{    ///<Register for erasing a non-protected non-volatile memory page.
        using Addr = Register::Address<0x4001e508,0xffffffff,0,unsigned>;
    }
    namespace Noneerasepcr1{    ///<Register for erasing a non-protected non-volatile memory page.
        using Addr = Register::Address<0x4001e508,0xffffffff,0,unsigned>;
    }
    namespace Noneeraseall{    ///<Register for erasing all non-volatile user memory.
        using Addr = Register::Address<0x4001e50c,0xfffffffe,0,unsigned>;
        ///Starts the erasing of all user NVM (code region 0/1 and UICR registers).
        enum class eraseallVal {
            nooperation=0x00000000,     ///<No operation.
            erase=0x00000001,     ///<Start chip erase.
        };
        namespace eraseallValC{
            constexpr MPL::Value<eraseallVal,eraseallVal::nooperation> nooperation{};
            constexpr MPL::Value<eraseallVal,eraseallVal::erase> erase{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,eraseallVal> eraseall{}; 
    }
    namespace Noneerasepcr0{    ///<Register for erasing a protected non-volatile memory page.
        using Addr = Register::Address<0x4001e510,0xffffffff,0,unsigned>;
    }
    namespace Noneeraseuicr{    ///<Register for start erasing User Information Congfiguration Registers.
        using Addr = Register::Address<0x4001e514,0xfffffffe,0,unsigned>;
        ///It can only be used when all contents of code region 1 are erased.
        enum class eraseuicrVal {
            nooperation=0x00000000,     ///<No operation.
            erase=0x00000001,     ///<Start UICR erase.
        };
        namespace eraseuicrValC{
            constexpr MPL::Value<eraseuicrVal,eraseuicrVal::nooperation> nooperation{};
            constexpr MPL::Value<eraseuicrVal,eraseuicrVal::erase> erase{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,eraseuicrVal> eraseuicr{}; 
    }
}
