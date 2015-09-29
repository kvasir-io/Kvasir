#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash Memory
    namespace FtmrhFclkdiv{    ///<Flash Clock Divider Register
        using Addr = Register::Address<0x40020000,0xffffff00,0,unsigned char>;
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
    namespace FtmrhFsec{    ///<Flash Security Register
        using Addr = Register::Address<0x40020001,0xffffff3c,0,unsigned char>;
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
    namespace FtmrhFccobix{    ///<Flash CCOB Index Register
        using Addr = Register::Address<0x40020002,0xfffffff8,0,unsigned char>;
        ///Common Command Register Index
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ccobix{}; 
    }
    namespace FtmrhFcnfg{    ///<Flash Configuration Register
        using Addr = Register::Address<0x40020004,0xffffff6c,0,unsigned char>;
        ///Force Single Bit Fault Detect
        enum class fsfdVal {
            v0=0x00000000,     ///<Flash array read operations will set the SFDIF flag in the FERSTAT register only if a single bit fault is detected.
            v1=0x00000001,     ///<Flash array read operation will force the SFDIF flag in the FERSTAT register to be set and an interrupt will be generated as long as FERCNFG[SFDIE] is set.
        };
        namespace fsfdValC{
            constexpr MPL::Value<fsfdVal,fsfdVal::v0> v0{};
            constexpr MPL::Value<fsfdVal,fsfdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,fsfdVal> fsfd{}; 
        ///Force Double Bit Fault Detect
        enum class fdfdVal {
            v0=0x00000000,     ///<Flash array read operations will set the FERSTAT[DFDIF] flag only if a double bit fault is detected.
            v1=0x00000001,     ///<Any flash array read operation will force the FERSTAT[DFDIF] flag to be set and an interrupt will be generated as long as FERCNFG[DFDIE] is set.
        };
        namespace fdfdValC{
            constexpr MPL::Value<fdfdVal,fdfdVal::v0> v0{};
            constexpr MPL::Value<fdfdVal,fdfdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,fdfdVal> fdfd{}; 
        ///Ignore Single Bit Fault
        enum class ignsfVal {
            v0=0x00000000,     ///<All single-bit faults detected during array reads are reported.
            v1=0x00000001,     ///<Single-bit faults detected during array reads are not reported and the single bit fault interrupt will not be generated.
        };
        namespace ignsfValC{
            constexpr MPL::Value<ignsfVal,ignsfVal::v0> v0{};
            constexpr MPL::Value<ignsfVal,ignsfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ignsfVal> ignsf{}; 
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
    namespace FtmrhFercnfg{    ///<Flash Error Configuration Register
        using Addr = Register::Address<0x40020005,0xfffffffc,0,unsigned char>;
        ///Single Bit Fault Detect Interrupt Enable
        enum class sfdieVal {
            v0=0x00000000,     ///<SFDIF interrupt is disabled whenever the SFDIF flag is set.
            v1=0x00000001,     ///<An interrupt will be requested whenever the SFDIF flag is set.
        };
        namespace sfdieValC{
            constexpr MPL::Value<sfdieVal,sfdieVal::v0> v0{};
            constexpr MPL::Value<sfdieVal,sfdieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,sfdieVal> sfdie{}; 
        ///Double Bit Fault Detect Interrupt Enable
        enum class dfdieVal {
            v0=0x00000000,     ///<DFDIF interrupt is disabled.
            v1=0x00000001,     ///<An interrupt will be requested whenever the DFDIF flag is set.
        };
        namespace dfdieValC{
            constexpr MPL::Value<dfdieVal,dfdieVal::v0> v0{};
            constexpr MPL::Value<dfdieVal,dfdieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dfdieVal> dfdie{}; 
    }
    namespace FtmrhFstat{    ///<Flash Status Register
        using Addr = Register::Address<0x40020006,0xffffff44,0,unsigned char>;
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
    namespace FtmrhFerstat{    ///<Flash Error Status Register
        using Addr = Register::Address<0x40020007,0xfffffffc,0,unsigned char>;
        ///Single Bit Fault Detect Interrupt Flag
        enum class sfdifVal {
            v0=0x00000000,     ///<No single bit fault detected.
            v1=0x00000001,     ///<Single bit fault detected and corrected or a flash array read operation returning invalid data was attempted while command running.
        };
        namespace sfdifValC{
            constexpr MPL::Value<sfdifVal,sfdifVal::v0> v0{};
            constexpr MPL::Value<sfdifVal,sfdifVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,sfdifVal> sfdif{}; 
        ///Double Bit Fault Detect Interrupt Flag
        enum class dfdifVal {
            v0=0x00000000,     ///<No double bit fault detected.
            v1=0x00000001,     ///<Double bit fault detected or a flash array read operation returning invalid data was attempted while command running.
        };
        namespace dfdifValC{
            constexpr MPL::Value<dfdifVal,dfdifVal::v0> v0{};
            constexpr MPL::Value<dfdifVal,dfdifVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dfdifVal> dfdif{}; 
    }
    namespace FtmrhFprot{    ///<Flash Protection Register
        using Addr = Register::Address<0x40020008,0xffffff00,0,unsigned char>;
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
        ///Flash Protection Higher Address Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> fphs{}; 
        ///Flash Protection Higher Address Range Disable
        enum class fphdisVal {
            v0=0x00000000,     ///<Protection/Unprotection enabled.
            v1=0x00000001,     ///<Protection/Unprotection disabled.
        };
        namespace fphdisValC{
            constexpr MPL::Value<fphdisVal,fphdisVal::v0> v0{};
            constexpr MPL::Value<fphdisVal,fphdisVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,fphdisVal> fphdis{}; 
        ///Reserved Nonvolatile Bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rnv6{}; 
        ///Flash Protection Operation Enable
        enum class fpopenVal {
            v0=0x00000000,     ///<When FPOPEN is clear, the FPHDIS and FPLDIS fields define unprotected address ranges as specified by the corresponding FPHS and FPLS fields.
            v1=0x00000001,     ///<When FPOPEN is set, the FPHDIS and FPLDIS fields enable protection for the address range specified by the corresponding FPHS and FPLS fields.
        };
        namespace fpopenValC{
            constexpr MPL::Value<fpopenVal,fpopenVal::v0> v0{};
            constexpr MPL::Value<fpopenVal,fpopenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,fpopenVal> fpopen{}; 
    }
    namespace FtmrhEeprot{    ///<EEPROM Protection Register
        using Addr = Register::Address<0x40020009,0xffffff78,0,unsigned char>;
        ///EEPROM Protection Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dps{}; 
        ///EEPROM Protection Control
        enum class dpopenVal {
            v0=0x00000000,     ///<Enables EEPROM memory protection from program and erase with protected address range defined by DPS bits.
            v1=0x00000001,     ///<Disables EEPROM memory protection from program and erase.
        };
        namespace dpopenValC{
            constexpr MPL::Value<dpopenVal,dpopenVal::v0> v0{};
            constexpr MPL::Value<dpopenVal,dpopenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,dpopenVal> dpopen{}; 
    }
    namespace FtmrhFccobhi{    ///<Flash Common Command Object Register:High
        using Addr = Register::Address<0x4002000a,0xffffff00,0,unsigned char>;
        ///Common Command Object Bit 15:8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccob{}; 
    }
    namespace FtmrhFccoblo{    ///<Flash Common Command Object Register: Low
        using Addr = Register::Address<0x4002000b,0xffffff00,0,unsigned char>;
        ///Common Command Object Bit 7:0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccob{}; 
    }
    namespace FtmrhFopt{    ///<Flash Option Register
        using Addr = Register::Address<0x4002000c,0xffffff00,0,unsigned char>;
        ///Nonvolatile Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> nv{}; 
    }
}
