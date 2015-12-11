#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash Memory
    namespace FtmrhFclkdiv{    ///<Flash Clock Divider Register
        using Addr = Register::Address<0x40020000,0xffffff00,0,unsigned char>;
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
    namespace FtmrhFsec{    ///<Flash Security Register
        using Addr = Register::Address<0x40020001,0xffffff3c,0,unsigned char>;
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
    namespace FtmrhFccobix{    ///<Flash CCOB Index Register
        using Addr = Register::Address<0x40020002,0xfffffff8,0,unsigned char>;
        ///Common Command Register Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ccobix{}; 
    }
    namespace FtmrhFcnfg{    ///<Flash Configuration Register
        using Addr = Register::Address<0x40020004,0xffffff6c,0,unsigned char>;
        ///Force Single Bit Fault Detect
        enum class FsfdVal {
            v0=0x00000000,     ///<Flash array read operations will set the SFDIF flag in the FERSTAT register only if a single bit fault is detected.
            v1=0x00000001,     ///<Flash array read operation will force the SFDIF flag in the FERSTAT register to be set and an interrupt will be generated as long as FERCNFG[SFDIE] is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FsfdVal> fsfd{}; 
        namespace FsfdValC{
            constexpr Register::FieldValue<decltype(fsfd)::Type,FsfdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fsfd)::Type,FsfdVal::v1> v1{};
        }
        ///Force Double Bit Fault Detect
        enum class FdfdVal {
            v0=0x00000000,     ///<Flash array read operations will set the FERSTAT[DFDIF] flag only if a double bit fault is detected.
            v1=0x00000001,     ///<Any flash array read operation will force the FERSTAT[DFDIF] flag to be set and an interrupt will be generated as long as FERCNFG[DFDIE] is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FdfdVal> fdfd{}; 
        namespace FdfdValC{
            constexpr Register::FieldValue<decltype(fdfd)::Type,FdfdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fdfd)::Type,FdfdVal::v1> v1{};
        }
        ///Ignore Single Bit Fault
        enum class IgnsfVal {
            v0=0x00000000,     ///<All single-bit faults detected during array reads are reported.
            v1=0x00000001,     ///<Single-bit faults detected during array reads are not reported and the single bit fault interrupt will not be generated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,IgnsfVal> ignsf{}; 
        namespace IgnsfValC{
            constexpr Register::FieldValue<decltype(ignsf)::Type,IgnsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ignsf)::Type,IgnsfVal::v1> v1{};
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
    namespace FtmrhFercnfg{    ///<Flash Error Configuration Register
        using Addr = Register::Address<0x40020005,0xfffffffc,0,unsigned char>;
        ///Single Bit Fault Detect Interrupt Enable
        enum class SfdieVal {
            v0=0x00000000,     ///<SFDIF interrupt is disabled whenever the SFDIF flag is set.
            v1=0x00000001,     ///<An interrupt will be requested whenever the SFDIF flag is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SfdieVal> sfdie{}; 
        namespace SfdieValC{
            constexpr Register::FieldValue<decltype(sfdie)::Type,SfdieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sfdie)::Type,SfdieVal::v1> v1{};
        }
        ///Double Bit Fault Detect Interrupt Enable
        enum class DfdieVal {
            v0=0x00000000,     ///<DFDIF interrupt is disabled.
            v1=0x00000001,     ///<An interrupt will be requested whenever the DFDIF flag is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DfdieVal> dfdie{}; 
        namespace DfdieValC{
            constexpr Register::FieldValue<decltype(dfdie)::Type,DfdieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dfdie)::Type,DfdieVal::v1> v1{};
        }
    }
    namespace FtmrhFstat{    ///<Flash Status Register
        using Addr = Register::Address<0x40020006,0xffffff44,0,unsigned char>;
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
    namespace FtmrhFerstat{    ///<Flash Error Status Register
        using Addr = Register::Address<0x40020007,0xfffffffc,0,unsigned char>;
        ///Single Bit Fault Detect Interrupt Flag
        enum class SfdifVal {
            v0=0x00000000,     ///<No single bit fault detected.
            v1=0x00000001,     ///<Single bit fault detected and corrected or a flash array read operation returning invalid data was attempted while command running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SfdifVal> sfdif{}; 
        namespace SfdifValC{
            constexpr Register::FieldValue<decltype(sfdif)::Type,SfdifVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sfdif)::Type,SfdifVal::v1> v1{};
        }
        ///Double Bit Fault Detect Interrupt Flag
        enum class DfdifVal {
            v0=0x00000000,     ///<No double bit fault detected.
            v1=0x00000001,     ///<Double bit fault detected or a flash array read operation returning invalid data was attempted while command running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DfdifVal> dfdif{}; 
        namespace DfdifValC{
            constexpr Register::FieldValue<decltype(dfdif)::Type,DfdifVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dfdif)::Type,DfdifVal::v1> v1{};
        }
    }
    namespace FtmrhFprot{    ///<Flash Protection Register
        using Addr = Register::Address<0x40020008,0xffffff00,0,unsigned char>;
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
        ///Flash Protection Higher Address Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> fphs{}; 
        ///Flash Protection Higher Address Range Disable
        enum class FphdisVal {
            v0=0x00000000,     ///<Protection/Unprotection enabled.
            v1=0x00000001,     ///<Protection/Unprotection disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,FphdisVal> fphdis{}; 
        namespace FphdisValC{
            constexpr Register::FieldValue<decltype(fphdis)::Type,FphdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fphdis)::Type,FphdisVal::v1> v1{};
        }
        ///Reserved Nonvolatile Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rnv6{}; 
        ///Flash Protection Operation Enable
        enum class FpopenVal {
            v0=0x00000000,     ///<When FPOPEN is clear, the FPHDIS and FPLDIS fields define unprotected address ranges as specified by the corresponding FPHS and FPLS fields.
            v1=0x00000001,     ///<When FPOPEN is set, the FPHDIS and FPLDIS fields enable protection for the address range specified by the corresponding FPHS and FPLS fields.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,FpopenVal> fpopen{}; 
        namespace FpopenValC{
            constexpr Register::FieldValue<decltype(fpopen)::Type,FpopenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fpopen)::Type,FpopenVal::v1> v1{};
        }
    }
    namespace FtmrhEeprot{    ///<EEPROM Protection Register
        using Addr = Register::Address<0x40020009,0xffffff78,0,unsigned char>;
        ///EEPROM Protection Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dps{}; 
        ///EEPROM Protection Control
        enum class DpopenVal {
            v0=0x00000000,     ///<Enables EEPROM memory protection from program and erase with protected address range defined by DPS bits.
            v1=0x00000001,     ///<Disables EEPROM memory protection from program and erase.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DpopenVal> dpopen{}; 
        namespace DpopenValC{
            constexpr Register::FieldValue<decltype(dpopen)::Type,DpopenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpopen)::Type,DpopenVal::v1> v1{};
        }
    }
    namespace FtmrhFccobhi{    ///<Flash Common Command Object Register:High
        using Addr = Register::Address<0x4002000a,0xffffff00,0,unsigned char>;
        ///Common Command Object Bit 15:8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccob{}; 
    }
    namespace FtmrhFccoblo{    ///<Flash Common Command Object Register: Low
        using Addr = Register::Address<0x4002000b,0xffffff00,0,unsigned char>;
        ///Common Command Object Bit 7:0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccob{}; 
    }
    namespace FtmrhFopt{    ///<Flash Option Register
        using Addr = Register::Address<0x4002000c,0xffffff00,0,unsigned char>;
        ///Nonvolatile Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> nv{}; 
    }
}
