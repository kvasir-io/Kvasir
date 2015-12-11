#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Non Volatile Memory Controller.
    namespace Noneready{    ///<Ready flag.
        using Addr = Register::Address<0x4001e400,0xfffffffe,0,unsigned>;
        ///NVMC ready.
        enum class ReadyVal {
            busy=0x00000000,     ///<NVMC is busy (on-going write or erase operation).
            ready=0x00000001,     ///<NVMC is ready.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ReadyVal> ready{}; 
        namespace ReadyValC{
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::busy> busy{};
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::ready> ready{};
        }
    }
    namespace Noneconfig{    ///<Configuration register.
        using Addr = Register::Address<0x4001e504,0xfffffffc,0,unsigned>;
        ///Program write enable.
        enum class WenVal {
            ren=0x00000000,     ///<Read only access.
            wen=0x00000001,     ///<Write enabled.
            een=0x00000002,     ///<Erase enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,WenVal> wen{}; 
        namespace WenValC{
            constexpr Register::FieldValue<decltype(wen)::Type,WenVal::ren> ren{};
            constexpr Register::FieldValue<decltype(wen)::Type,WenVal::wen> wen{};
            constexpr Register::FieldValue<decltype(wen)::Type,WenVal::een> een{};
        }
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
        enum class EraseallVal {
            nooperation=0x00000000,     ///<No operation.
            erase=0x00000001,     ///<Start chip erase.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EraseallVal> eraseall{}; 
        namespace EraseallValC{
            constexpr Register::FieldValue<decltype(eraseall)::Type,EraseallVal::nooperation> nooperation{};
            constexpr Register::FieldValue<decltype(eraseall)::Type,EraseallVal::erase> erase{};
        }
    }
    namespace Noneerasepcr0{    ///<Register for erasing a protected non-volatile memory page.
        using Addr = Register::Address<0x4001e510,0xffffffff,0,unsigned>;
    }
    namespace Noneeraseuicr{    ///<Register for start erasing User Information Congfiguration Registers.
        using Addr = Register::Address<0x4001e514,0xfffffffe,0,unsigned>;
        ///It can only be used when all contents of code region 1 are erased.
        enum class EraseuicrVal {
            nooperation=0x00000000,     ///<No operation.
            erase=0x00000001,     ///<Start UICR erase.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EraseuicrVal> eraseuicr{}; 
        namespace EraseuicrValC{
            constexpr Register::FieldValue<decltype(eraseuicr)::Type,EraseuicrVal::nooperation> nooperation{};
            constexpr Register::FieldValue<decltype(eraseuicr)::Type,EraseuicrVal::erase> erase{};
        }
    }
}
