#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash Memory
    namespace FtmreFccobix{    ///<Flash CCOB Index Register
        using Addr = Register::Address<0x40020001,0xfffffff8,0,unsigned char>;
        ///Common Command Register Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ccobix{}; 
    }
    namespace FtmreFsec{    ///<Flash Security Register
        using Addr = Register::Address<0x40020002,0xffffff3c,0,unsigned char>;
        ///Flash Security Bits
        enum class SecVal {
            v00=0x00000000,     ///<Secured
            v01=0x00000001,     ///<Secured
            v10=0x00000002,     ///<Unsecured
            v11=0x00000003,     ///<Secured
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SecVal> sec{}; 
        namespace SecValC{
            constexpr Register::FieldValue<decltype(sec)::Type,SecVal::v00> v00{};
            constexpr Register::FieldValue<decltype(sec)::Type,SecVal::v01> v01{};
            constexpr Register::FieldValue<decltype(sec)::Type,SecVal::v10> v10{};
            constexpr Register::FieldValue<decltype(sec)::Type,SecVal::v11> v11{};
        }
        }
        ///Backdoor Key Security Enable Bits
        enum class KeyenVal {
            v00=0x00000000,     ///<Disabled
            v01=0x00000001,     ///<Disabled
            v10=0x00000002,     ///<Enabled
            v11=0x00000003,     ///<Disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,KeyenVal> keyen{}; 
        namespace KeyenValC{
            constexpr Register::FieldValue<decltype(keyen)::Type,KeyenVal::v00> v00{};
            constexpr Register::FieldValue<decltype(keyen)::Type,KeyenVal::v01> v01{};
            constexpr Register::FieldValue<decltype(keyen)::Type,KeyenVal::v10> v10{};
            constexpr Register::FieldValue<decltype(keyen)::Type,KeyenVal::v11> v11{};
        }
        }
    }
    namespace FtmreFclkdiv{    ///<Flash Clock Divider Register
        using Addr = Register::Address<0x40020003,0xffffff00,0,unsigned char>;
        ///Clock Divider Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> fdiv{}; 
        ///Clock Divider Locked
        enum class FdivlckVal {
            v0=0x00000000,     ///<FDIV field is open for writing.
            v1=0x00000001,     ///<FDIV value is locked and cannot be changed. After the lock bit is set high, only reset can clear this bit and restore writability to the FDIV field in user mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,FdivlckVal> fdivlck{}; 
        namespace FdivlckValC{
            constexpr Register::FieldValue<decltype(fdivlck)::Type,FdivlckVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fdivlck)::Type,FdivlckVal::v1> v1{};
        }
        }
        ///Clock Divider Loaded
        enum class FdivldVal {
            v0=0x00000000,     ///<FCLKDIV register has not been written since the last reset.
            v1=0x00000001,     ///<FCLKDIV register has been written since the last reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,FdivldVal> fdivld{}; 
        namespace FdivldValC{
            constexpr Register::FieldValue<decltype(fdivld)::Type,FdivldVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fdivld)::Type,FdivldVal::v1> v1{};
        }
        }
    }
    namespace FtmreFstat{    ///<Flash Status Register
        using Addr = Register::Address<0x40020005,0xffffff44,0,unsigned char>;
        ///Memory Controller Command Completion Status Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mgstat{}; 
        ///Memory Controller Busy Flag
        enum class MgbusyVal {
            v0=0x00000000,     ///<Memory controller is idle.
            v1=0x00000001,     ///<Memory controller is busy executing a flash command (CCIF = 0).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,MgbusyVal> mgbusy{}; 
        namespace MgbusyValC{
            constexpr Register::FieldValue<decltype(mgbusy)::Type,MgbusyVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mgbusy)::Type,MgbusyVal::v1> v1{};
        }
        }
        ///Flash Protection Violation Flag
        enum class FpviolVal {
            v0=0x00000000,     ///<No protection violation is detected.
            v1=0x00000001,     ///<Protection violation is detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,FpviolVal> fpviol{}; 
        namespace FpviolValC{
            constexpr Register::FieldValue<decltype(fpviol)::Type,FpviolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fpviol)::Type,FpviolVal::v1> v1{};
        }
        }
        ///Flash Access Error Flag
        enum class AccerrVal {
            v0=0x00000000,     ///<No access error is detected.
            v1=0x00000001,     ///<Access error is detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,AccerrVal> accerr{}; 
        namespace AccerrValC{
            constexpr Register::FieldValue<decltype(accerr)::Type,AccerrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(accerr)::Type,AccerrVal::v1> v1{};
        }
        }
        ///Command Complete Interrupt Flag
        enum class CcifVal {
            v0=0x00000000,     ///<Flash command is in progress.
            v1=0x00000001,     ///<Flash command has completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CcifVal> ccif{}; 
        namespace CcifValC{
            constexpr Register::FieldValue<decltype(ccif)::Type,CcifVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ccif)::Type,CcifVal::v1> v1{};
        }
        }
    }
    namespace FtmreFcnfg{    ///<Flash Configuration Register
        using Addr = Register::Address<0x40020007,0xffffff5f,0,unsigned char>;
        ///Debugger Mass Erase Request
        enum class ErsareqVal {
            v0=0x00000000,     ///<No request or request complete
            v1=0x00000001,     ///<Request to run the Erase All Blocks command verify the erased state program the security byte in the Flash Configuration Field to the unsecure state release MCU security by setting FSEC[SEC] to the unsecure state
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ErsareqVal> ersareq{}; 
        namespace ErsareqValC{
            constexpr Register::FieldValue<decltype(ersareq)::Type,ErsareqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ersareq)::Type,ErsareqVal::v1> v1{};
        }
        }
        ///Command Complete Interrupt Enable
        enum class CcieVal {
            v0=0x00000000,     ///<Command complete interrupt is disabled.
            v1=0x00000001,     ///<An interrupt will be requested whenever the CCIF flag in the FSTAT register is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CcieVal> ccie{}; 
        namespace CcieValC{
            constexpr Register::FieldValue<decltype(ccie)::Type,CcieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ccie)::Type,CcieVal::v1> v1{};
        }
        }
    }
    namespace FtmreFccoblo{    ///<Flash Common Command Object Register: Low
        using Addr = Register::Address<0x40020008,0xffffff00,0,unsigned char>;
        ///Common Command Object Bit 7:0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccob{}; 
    }
    namespace FtmreFccobhi{    ///<Flash Common Command Object Register:High
        using Addr = Register::Address<0x40020009,0xffffff00,0,unsigned char>;
        ///Common Command Object Bit 15:8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccob{}; 
    }
    namespace FtmreFprot{    ///<Flash Protection Register
        using Addr = Register::Address<0x4002000b,0xffffff00,0,unsigned char>;
        ///Flash Protection Lower Address Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fpls{}; 
        ///Flash Protection Lower Address Range Disable
        enum class FpldisVal {
            v0=0x00000000,     ///<Protection/Unprotection enabled.
            v1=0x00000001,     ///<Protection/Unprotection disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,FpldisVal> fpldis{}; 
        namespace FpldisValC{
            constexpr Register::FieldValue<decltype(fpldis)::Type,FpldisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fpldis)::Type,FpldisVal::v1> v1{};
        }
        }
        ///Reserved Nonvolatile Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> rnv{}; 
        ///Reserved Nonvolatile Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rnv6{}; 
        ///Flash Protection Operation Enable
        enum class FpopenVal {
            v0=0x00000000,     ///<When FPOPEN is clear, the FPLDIS field defines unprotected address ranges as specified by the corresponding FPLS field.
            v1=0x00000001,     ///<When FPOPEN is set, the FPLDIS field enables protection for the address range specified by the corresponding FPLS field.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,FpopenVal> fpopen{}; 
        namespace FpopenValC{
            constexpr Register::FieldValue<decltype(fpopen)::Type,FpopenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fpopen)::Type,FpopenVal::v1> v1{};
        }
        }
    }
    namespace FtmreFopt{    ///<Flash Option Register
        using Addr = Register::Address<0x4002000f,0xffffff00,0,unsigned char>;
        ///Nonvolatile Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> nv{}; 
    }
}
