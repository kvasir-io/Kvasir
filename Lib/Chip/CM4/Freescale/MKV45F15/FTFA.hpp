#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash Memory Interface
    namespace FtfaFstat{    ///<Flash Status Register
        using Addr = Register::Address<0x40020000,0xffffff0e,0,unsigned char>;
        ///Memory Controller Command Completion Status Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mgstat0{}; 
        ///Flash Protection Violation Flag
        enum class fpviolVal {
            v0=0x00000000,     ///<No protection violation detected
            v1=0x00000001,     ///<Protection violation detected
        };
        namespace fpviolValC{
            constexpr MPL::Value<fpviolVal,fpviolVal::v0> v0{};
            constexpr MPL::Value<fpviolVal,fpviolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,fpviolVal> fpviol{}; 
        ///Flash Access Error Flag
        enum class accerrVal {
            v0=0x00000000,     ///<No access error detected
            v1=0x00000001,     ///<Access error detected
        };
        namespace accerrValC{
            constexpr MPL::Value<accerrVal,accerrVal::v0> v0{};
            constexpr MPL::Value<accerrVal,accerrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,accerrVal> accerr{}; 
        ///Flash Read Collision Error Flag
        enum class rdcolerrVal {
            v0=0x00000000,     ///<No collision error detected
            v1=0x00000001,     ///<Collision error detected
        };
        namespace rdcolerrValC{
            constexpr MPL::Value<rdcolerrVal,rdcolerrVal::v0> v0{};
            constexpr MPL::Value<rdcolerrVal,rdcolerrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rdcolerrVal> rdcolerr{}; 
        ///Command Complete Interrupt Flag
        enum class ccifVal {
            v0=0x00000000,     ///<Flash command in progress
            v1=0x00000001,     ///<Flash command has completed
        };
        namespace ccifValC{
            constexpr MPL::Value<ccifVal,ccifVal::v0> v0{};
            constexpr MPL::Value<ccifVal,ccifVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ccifVal> ccif{}; 
    }
    namespace FtfaFcnfg{    ///<Flash Configuration Register
        using Addr = Register::Address<0x40020001,0xffffff0f,0,unsigned char>;
        ///Erase Suspend
        enum class erssuspVal {
            v0=0x00000000,     ///<No suspend requested
            v1=0x00000001,     ///<Suspend the current Erase Flash Sector command execution.
        };
        namespace erssuspValC{
            constexpr MPL::Value<erssuspVal,erssuspVal::v0> v0{};
            constexpr MPL::Value<erssuspVal,erssuspVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,erssuspVal> erssusp{}; 
        ///Erase All Request
        enum class ersareqVal {
            v0=0x00000000,     ///<No request or request complete
            v1=0x00000001,     ///<Request to: run the Erase All Blocks command, verify the erased state, program the security byte in the Flash Configuration Field to the unsecure state, and release MCU security by setting the FSEC[SEC] field to the unsecure state.
        };
        namespace ersareqValC{
            constexpr MPL::Value<ersareqVal,ersareqVal::v0> v0{};
            constexpr MPL::Value<ersareqVal,ersareqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ersareqVal> ersareq{}; 
        ///Read Collision Error Interrupt Enable
        enum class rdcollieVal {
            v0=0x00000000,     ///<Read collision error interrupt disabled
            v1=0x00000001,     ///<Read collision error interrupt enabled. An interrupt request is generated whenever a flash memory read collision error is detected (see the description of FSTAT[RDCOLERR]).
        };
        namespace rdcollieValC{
            constexpr MPL::Value<rdcollieVal,rdcollieVal::v0> v0{};
            constexpr MPL::Value<rdcollieVal,rdcollieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rdcollieVal> rdcollie{}; 
        ///Command Complete Interrupt Enable
        enum class ccieVal {
            v0=0x00000000,     ///<Command complete interrupt disabled
            v1=0x00000001,     ///<Command complete interrupt enabled. An interrupt request is generated whenever the FSTAT[CCIF] flag is set.
        };
        namespace ccieValC{
            constexpr MPL::Value<ccieVal,ccieVal::v0> v0{};
            constexpr MPL::Value<ccieVal,ccieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ccieVal> ccie{}; 
    }
    namespace FtfaFsec{    ///<Flash Security Register
        using Addr = Register::Address<0x40020002,0xffffff00,0,unsigned char>;
        ///Flash Security
        enum class secVal {
            v00=0x00000000,     ///<MCU security status is secure.
            v01=0x00000001,     ///<MCU security status is secure.
            v10=0x00000002,     ///<MCU security status is unsecure. (The standard shipping condition of the flash memory module is unsecure.)
            v11=0x00000003,     ///<MCU security status is secure.
        };
        namespace secValC{
            constexpr MPL::Value<secVal,secVal::v00> v00{};
            constexpr MPL::Value<secVal,secVal::v01> v01{};
            constexpr MPL::Value<secVal,secVal::v10> v10{};
            constexpr MPL::Value<secVal,secVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,secVal> sec{}; 
        ///Freescale Failure Analysis Access Code
        enum class fslaccVal {
            v00=0x00000000,     ///<Freescale factory access granted
            v01=0x00000001,     ///<Freescale factory access denied
            v10=0x00000002,     ///<Freescale factory access denied
            v11=0x00000003,     ///<Freescale factory access granted
        };
        namespace fslaccValC{
            constexpr MPL::Value<fslaccVal,fslaccVal::v00> v00{};
            constexpr MPL::Value<fslaccVal,fslaccVal::v01> v01{};
            constexpr MPL::Value<fslaccVal,fslaccVal::v10> v10{};
            constexpr MPL::Value<fslaccVal,fslaccVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,fslaccVal> fslacc{}; 
        ///Mass Erase Enable Bits
        enum class meenVal {
            v00=0x00000000,     ///<Mass erase is enabled
            v01=0x00000001,     ///<Mass erase is enabled
            v10=0x00000002,     ///<Mass erase is disabled
            v11=0x00000003,     ///<Mass erase is enabled
        };
        namespace meenValC{
            constexpr MPL::Value<meenVal,meenVal::v00> v00{};
            constexpr MPL::Value<meenVal,meenVal::v01> v01{};
            constexpr MPL::Value<meenVal,meenVal::v10> v10{};
            constexpr MPL::Value<meenVal,meenVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,meenVal> meen{}; 
        ///Backdoor Key Security Enable
        enum class keyenVal {
            v00=0x00000000,     ///<Backdoor key access disabled
            v01=0x00000001,     ///<Backdoor key access disabled (preferred KEYEN state to disable backdoor key access)
            v10=0x00000002,     ///<Backdoor key access enabled
            v11=0x00000003,     ///<Backdoor key access disabled
        };
        namespace keyenValC{
            constexpr MPL::Value<keyenVal,keyenVal::v00> v00{};
            constexpr MPL::Value<keyenVal,keyenVal::v01> v01{};
            constexpr MPL::Value<keyenVal,keyenVal::v10> v10{};
            constexpr MPL::Value<keyenVal,keyenVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,keyenVal> keyen{}; 
    }
    namespace FtfaFopt{    ///<Flash Option Register
        using Addr = Register::Address<0x40020003,0xffffff00,0,unsigned char>;
        ///Nonvolatile Option
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> opt{}; 
    }
    namespace FtfaFccob3{    ///<Flash Common Command Object Registers
        using Addr = Register::Address<0x40020004,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccobn{}; 
    }
    namespace FtfaFccob2{    ///<Flash Common Command Object Registers
        using Addr = Register::Address<0x40020005,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccobn{}; 
    }
    namespace FtfaFccob1{    ///<Flash Common Command Object Registers
        using Addr = Register::Address<0x40020006,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccobn{}; 
    }
    namespace FtfaFccob0{    ///<Flash Common Command Object Registers
        using Addr = Register::Address<0x40020007,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccobn{}; 
    }
    namespace FtfaFccob7{    ///<Flash Common Command Object Registers
        using Addr = Register::Address<0x40020008,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccobn{}; 
    }
    namespace FtfaFccob6{    ///<Flash Common Command Object Registers
        using Addr = Register::Address<0x40020009,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccobn{}; 
    }
    namespace FtfaFccob5{    ///<Flash Common Command Object Registers
        using Addr = Register::Address<0x4002000a,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccobn{}; 
    }
    namespace FtfaFccob4{    ///<Flash Common Command Object Registers
        using Addr = Register::Address<0x4002000b,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccobn{}; 
    }
    namespace FtfaFccobb{    ///<Flash Common Command Object Registers
        using Addr = Register::Address<0x4002000c,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccobn{}; 
    }
    namespace FtfaFccoba{    ///<Flash Common Command Object Registers
        using Addr = Register::Address<0x4002000d,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccobn{}; 
    }
    namespace FtfaFccob9{    ///<Flash Common Command Object Registers
        using Addr = Register::Address<0x4002000e,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccobn{}; 
    }
    namespace FtfaFccob8{    ///<Flash Common Command Object Registers
        using Addr = Register::Address<0x4002000f,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccobn{}; 
    }
    namespace FtfaFprot3{    ///<Program Flash Protection Registers
        using Addr = Register::Address<0x40020010,0xffffff00,0,unsigned char>;
        ///Program Flash Region Protect
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prot{}; 
    }
    namespace FtfaFprot2{    ///<Program Flash Protection Registers
        using Addr = Register::Address<0x40020011,0xffffff00,0,unsigned char>;
        ///Program Flash Region Protect
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prot{}; 
    }
    namespace FtfaFprot1{    ///<Program Flash Protection Registers
        using Addr = Register::Address<0x40020012,0xffffff00,0,unsigned char>;
        ///Program Flash Region Protect
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prot{}; 
    }
    namespace FtfaFprot0{    ///<Program Flash Protection Registers
        using Addr = Register::Address<0x40020013,0xffffff00,0,unsigned char>;
        ///Program Flash Region Protect
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prot{}; 
    }
    namespace FtfaXacch3{    ///<Execute-only Access Registers
        using Addr = Register::Address<0x40020018,0xffffff00,0,unsigned char>;
        ///Execute-only access control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> xa{}; 
    }
    namespace FtfaXacch2{    ///<Execute-only Access Registers
        using Addr = Register::Address<0x40020019,0xffffff00,0,unsigned char>;
        ///Execute-only access control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> xa{}; 
    }
    namespace FtfaXacch1{    ///<Execute-only Access Registers
        using Addr = Register::Address<0x4002001a,0xffffff00,0,unsigned char>;
        ///Execute-only access control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> xa{}; 
    }
    namespace FtfaXacch0{    ///<Execute-only Access Registers
        using Addr = Register::Address<0x4002001b,0xffffff00,0,unsigned char>;
        ///Execute-only access control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> xa{}; 
    }
    namespace FtfaXaccl3{    ///<Execute-only Access Registers
        using Addr = Register::Address<0x4002001c,0xffffff00,0,unsigned char>;
        ///Execute-only access control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> xa{}; 
    }
    namespace FtfaXaccl2{    ///<Execute-only Access Registers
        using Addr = Register::Address<0x4002001d,0xffffff00,0,unsigned char>;
        ///Execute-only access control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> xa{}; 
    }
    namespace FtfaXaccl1{    ///<Execute-only Access Registers
        using Addr = Register::Address<0x4002001e,0xffffff00,0,unsigned char>;
        ///Execute-only access control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> xa{}; 
    }
    namespace FtfaXaccl0{    ///<Execute-only Access Registers
        using Addr = Register::Address<0x4002001f,0xffffff00,0,unsigned char>;
        ///Execute-only access control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> xa{}; 
    }
    namespace FtfaSacch3{    ///<Supervisor-only Access Registers
        using Addr = Register::Address<0x40020020,0xffffff00,0,unsigned char>;
        ///Supervisor-only access control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sa{}; 
    }
    namespace FtfaSacch2{    ///<Supervisor-only Access Registers
        using Addr = Register::Address<0x40020021,0xffffff00,0,unsigned char>;
        ///Supervisor-only access control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sa{}; 
    }
    namespace FtfaSacch1{    ///<Supervisor-only Access Registers
        using Addr = Register::Address<0x40020022,0xffffff00,0,unsigned char>;
        ///Supervisor-only access control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sa{}; 
    }
    namespace FtfaSacch0{    ///<Supervisor-only Access Registers
        using Addr = Register::Address<0x40020023,0xffffff00,0,unsigned char>;
        ///Supervisor-only access control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sa{}; 
    }
    namespace FtfaSaccl3{    ///<Supervisor-only Access Registers
        using Addr = Register::Address<0x40020024,0xffffff00,0,unsigned char>;
        ///Supervisor-only access control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sa{}; 
    }
    namespace FtfaSaccl2{    ///<Supervisor-only Access Registers
        using Addr = Register::Address<0x40020025,0xffffff00,0,unsigned char>;
        ///Supervisor-only access control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sa{}; 
    }
    namespace FtfaSaccl1{    ///<Supervisor-only Access Registers
        using Addr = Register::Address<0x40020026,0xffffff00,0,unsigned char>;
        ///Supervisor-only access control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sa{}; 
    }
    namespace FtfaSaccl0{    ///<Supervisor-only Access Registers
        using Addr = Register::Address<0x40020027,0xffffff00,0,unsigned char>;
        ///Supervisor-only access control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sa{}; 
    }
    namespace FtfaFacss{    ///<Flash Access Segment Size Register
        using Addr = Register::Address<0x40020028,0xffffff00,0,unsigned char>;
        ///Segment Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sgsize{}; 
    }
    namespace FtfaFacsn{    ///<Flash Access Segment Number Register
        using Addr = Register::Address<0x4002002b,0xffffff00,0,unsigned char>;
        ///Number of Segments Indicator
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> numsg{}; 
    }
}
