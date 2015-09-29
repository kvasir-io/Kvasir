#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash Memory
    namespace FtmreFccobix{    ///<Flash CCOB Index Register
        using Addr = Register::Address<0x40020001,0xfffffff8,0,unsigned char>;
        ///Common Command Register Index
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ccobix{}; 
    }
    namespace FtmreFsec{    ///<Flash Security Register
        using Addr = Register::Address<0x40020002,0xffffff3c,0,unsigned char>;
        ///Flash Security Bits
        enum class secVal {
            v00=0x00000000,     ///<Secured
            v01=0x00000001,     ///<Secured
            v10=0x00000002,     ///<Unsecured
            v11=0x00000003,     ///<Secured
        };
        namespace secValC{
            constexpr MPL::Value<secVal,secVal::v00> v00{};
            constexpr MPL::Value<secVal,secVal::v01> v01{};
            constexpr MPL::Value<secVal,secVal::v10> v10{};
            constexpr MPL::Value<secVal,secVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,secVal> sec{}; 
        ///Backdoor Key Security Enable Bits
        enum class keyenVal {
            v00=0x00000000,     ///<Disabled
            v01=0x00000001,     ///<Disabled
            v10=0x00000002,     ///<Enabled
            v11=0x00000003,     ///<Disabled
        };
        namespace keyenValC{
            constexpr MPL::Value<keyenVal,keyenVal::v00> v00{};
            constexpr MPL::Value<keyenVal,keyenVal::v01> v01{};
            constexpr MPL::Value<keyenVal,keyenVal::v10> v10{};
            constexpr MPL::Value<keyenVal,keyenVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,keyenVal> keyen{}; 
    }
    namespace FtmreFclkdiv{    ///<Flash Clock Divider Register
        using Addr = Register::Address<0x40020003,0xffffff00,0,unsigned char>;
        ///Clock Divider Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> fdiv{}; 
        ///Clock Divider Locked
        enum class fdivlckVal {
            v0=0x00000000,     ///<FDIV field is open for writing.
            v1=0x00000001,     ///<FDIV value is locked and cannot be changed. After the lock bit is set high, only reset can clear this bit and restore writability to the FDIV field in user mode.
        };
        namespace fdivlckValC{
            constexpr MPL::Value<fdivlckVal,fdivlckVal::v0> v0{};
            constexpr MPL::Value<fdivlckVal,fdivlckVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,fdivlckVal> fdivlck{}; 
        ///Clock Divider Loaded
        enum class fdivldVal {
            v0=0x00000000,     ///<FCLKDIV register has not been written since the last reset.
            v1=0x00000001,     ///<FCLKDIV register has been written since the last reset.
        };
        namespace fdivldValC{
            constexpr MPL::Value<fdivldVal,fdivldVal::v0> v0{};
            constexpr MPL::Value<fdivldVal,fdivldVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,fdivldVal> fdivld{}; 
    }
    namespace FtmreFstat{    ///<Flash Status Register
        using Addr = Register::Address<0x40020005,0xffffff44,0,unsigned char>;
        ///Memory Controller Command Completion Status Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mgstat{}; 
        ///Memory Controller Busy Flag
        enum class mgbusyVal {
            v0=0x00000000,     ///<Memory controller is idle.
            v1=0x00000001,     ///<Memory controller is busy executing a flash command (CCIF = 0).
        };
        namespace mgbusyValC{
            constexpr MPL::Value<mgbusyVal,mgbusyVal::v0> v0{};
            constexpr MPL::Value<mgbusyVal,mgbusyVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,mgbusyVal> mgbusy{}; 
        ///Flash Protection Violation Flag
        enum class fpviolVal {
            v0=0x00000000,     ///<No protection violation is detected.
            v1=0x00000001,     ///<Protection violation is detected.
        };
        namespace fpviolValC{
            constexpr MPL::Value<fpviolVal,fpviolVal::v0> v0{};
            constexpr MPL::Value<fpviolVal,fpviolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,fpviolVal> fpviol{}; 
        ///Flash Access Error Flag
        enum class accerrVal {
            v0=0x00000000,     ///<No access error is detected.
            v1=0x00000001,     ///<Access error is detected.
        };
        namespace accerrValC{
            constexpr MPL::Value<accerrVal,accerrVal::v0> v0{};
            constexpr MPL::Value<accerrVal,accerrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,accerrVal> accerr{}; 
        ///Command Complete Interrupt Flag
        enum class ccifVal {
            v0=0x00000000,     ///<Flash command is in progress.
            v1=0x00000001,     ///<Flash command has completed.
        };
        namespace ccifValC{
            constexpr MPL::Value<ccifVal,ccifVal::v0> v0{};
            constexpr MPL::Value<ccifVal,ccifVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ccifVal> ccif{}; 
    }
    namespace FtmreFcnfg{    ///<Flash Configuration Register
        using Addr = Register::Address<0x40020007,0xffffff5f,0,unsigned char>;
        ///Debugger Mass Erase Request
        enum class ersareqVal {
            v0=0x00000000,     ///<No request or request complete
            v1=0x00000001,     ///<Request to run the Erase All Blocks command verify the erased state program the security byte in the Flash Configuration Field to the unsecure state release MCU security by setting FSEC[SEC] to the unsecure state
        };
        namespace ersareqValC{
            constexpr MPL::Value<ersareqVal,ersareqVal::v0> v0{};
            constexpr MPL::Value<ersareqVal,ersareqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ersareqVal> ersareq{}; 
        ///Command Complete Interrupt Enable
        enum class ccieVal {
            v0=0x00000000,     ///<Command complete interrupt is disabled.
            v1=0x00000001,     ///<An interrupt will be requested whenever the CCIF flag in the FSTAT register is set.
        };
        namespace ccieValC{
            constexpr MPL::Value<ccieVal,ccieVal::v0> v0{};
            constexpr MPL::Value<ccieVal,ccieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ccieVal> ccie{}; 
    }
    namespace FtmreFccoblo{    ///<Flash Common Command Object Register: Low
        using Addr = Register::Address<0x40020008,0xffffff00,0,unsigned char>;
        ///Common Command Object Bit 7:0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccob{}; 
    }
    namespace FtmreFccobhi{    ///<Flash Common Command Object Register:High
        using Addr = Register::Address<0x40020009,0xffffff00,0,unsigned char>;
        ///Common Command Object Bit 15:8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccob{}; 
    }
    namespace FtmreFprot{    ///<Flash Protection Register
        using Addr = Register::Address<0x4002000b,0xffffff00,0,unsigned char>;
        ///Flash Protection Lower Address Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fpls{}; 
        ///Flash Protection Lower Address Range Disable
        enum class fpldisVal {
            v0=0x00000000,     ///<Protection/Unprotection enabled.
            v1=0x00000001,     ///<Protection/Unprotection disabled.
        };
        namespace fpldisValC{
            constexpr MPL::Value<fpldisVal,fpldisVal::v0> v0{};
            constexpr MPL::Value<fpldisVal,fpldisVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,fpldisVal> fpldis{}; 
        ///Reserved Nonvolatile Bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> rnv{}; 
        ///Reserved Nonvolatile Bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rnv6{}; 
        ///Flash Protection Operation Enable
        enum class fpopenVal {
            v0=0x00000000,     ///<When FPOPEN is clear, the FPLDIS field defines unprotected address ranges as specified by the corresponding FPLS field.
            v1=0x00000001,     ///<When FPOPEN is set, the FPLDIS field enables protection for the address range specified by the corresponding FPLS field.
        };
        namespace fpopenValC{
            constexpr MPL::Value<fpopenVal,fpopenVal::v0> v0{};
            constexpr MPL::Value<fpopenVal,fpopenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,fpopenVal> fpopen{}; 
    }
    namespace FtmreFopt{    ///<Flash Option Register
        using Addr = Register::Address<0x4002000f,0xffffff00,0,unsigned char>;
        ///Nonvolatile Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> nv{}; 
    }
}
