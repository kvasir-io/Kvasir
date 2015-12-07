#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash Memory Interface
    namespace FtfaFstat{    ///<Flash Status Register
        using Addr = Register::Address<0x40020000,0xffffff0e,0,unsigned char>;
        ///Memory Controller Command Completion Status Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mgstat0{}; 
        namespace Mgstat0ValC{
        }
        ///Flash Protection Violation Flag
        enum class FpviolVal {
            v0=0x00000000,     ///<No protection violation detected
            v1=0x00000001,     ///<Protection violation detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,FpviolVal> fpviol{}; 
        namespace FpviolValC{
            constexpr Register::FieldValue<decltype(fpviol),FpviolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fpviol),FpviolVal::v1> v1{};
        }
        ///Flash Access Error Flag
        enum class AccerrVal {
            v0=0x00000000,     ///<No access error detected
            v1=0x00000001,     ///<Access error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,AccerrVal> accerr{}; 
        namespace AccerrValC{
            constexpr Register::FieldValue<decltype(accerr),AccerrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(accerr),AccerrVal::v1> v1{};
        }
        ///Flash Read Collision Error Flag
        enum class RdcolerrVal {
            v0=0x00000000,     ///<No collision error detected
            v1=0x00000001,     ///<Collision error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RdcolerrVal> rdcolerr{}; 
        namespace RdcolerrValC{
            constexpr Register::FieldValue<decltype(rdcolerr),RdcolerrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rdcolerr),RdcolerrVal::v1> v1{};
        }
        ///Command Complete Interrupt Flag
        enum class CcifVal {
            v0=0x00000000,     ///<Flash command in progress
            v1=0x00000001,     ///<Flash command has completed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CcifVal> ccif{}; 
        namespace CcifValC{
            constexpr Register::FieldValue<decltype(ccif),CcifVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ccif),CcifVal::v1> v1{};
        }
    }
    namespace FtfaFcnfg{    ///<Flash Configuration Register
        using Addr = Register::Address<0x40020001,0xffffff0f,0,unsigned char>;
        ///Erase Suspend
        enum class ErssuspVal {
            v0=0x00000000,     ///<No suspend requested
            v1=0x00000001,     ///<Suspend the current Erase Flash Sector command execution.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ErssuspVal> erssusp{}; 
        namespace ErssuspValC{
            constexpr Register::FieldValue<decltype(erssusp),ErssuspVal::v0> v0{};
            constexpr Register::FieldValue<decltype(erssusp),ErssuspVal::v1> v1{};
        }
        ///Erase All Request
        enum class ErsareqVal {
            v0=0x00000000,     ///<No request or request complete
            v1=0x00000001,     ///<Request to: run the Erase All Blocks command, verify the erased state, program the security byte in the Flash Configuration Field to the unsecure state, and release MCU security by setting the FSEC[SEC] field to the unsecure state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ErsareqVal> ersareq{}; 
        namespace ErsareqValC{
            constexpr Register::FieldValue<decltype(ersareq),ErsareqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ersareq),ErsareqVal::v1> v1{};
        }
        ///Read Collision Error Interrupt Enable
        enum class RdcollieVal {
            v0=0x00000000,     ///<Read collision error interrupt disabled
            v1=0x00000001,     ///<Read collision error interrupt enabled. An interrupt request is generated whenever a flash memory read collision error is detected (see the description of FSTAT[RDCOLERR]).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RdcollieVal> rdcollie{}; 
        namespace RdcollieValC{
            constexpr Register::FieldValue<decltype(rdcollie),RdcollieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rdcollie),RdcollieVal::v1> v1{};
        }
        ///Command Complete Interrupt Enable
        enum class CcieVal {
            v0=0x00000000,     ///<Command complete interrupt disabled
            v1=0x00000001,     ///<Command complete interrupt enabled. An interrupt request is generated whenever the FSTAT[CCIF] flag is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CcieVal> ccie{}; 
        namespace CcieValC{
            constexpr Register::FieldValue<decltype(ccie),CcieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ccie),CcieVal::v1> v1{};
        }
    }
    namespace FtfaFsec{    ///<Flash Security Register
        using Addr = Register::Address<0x40020002,0xffffff00,0,unsigned char>;
        ///Flash Security
        enum class SecVal {
            v00=0x00000000,     ///<MCU security status is secure.
            v01=0x00000001,     ///<MCU security status is secure.
            v10=0x00000002,     ///<MCU security status is unsecure. (The standard shipping condition of the flash memory module is unsecure.)
            v11=0x00000003,     ///<MCU security status is secure.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SecVal> sec{}; 
        namespace SecValC{
            constexpr Register::FieldValue<decltype(sec),SecVal::v00> v00{};
            constexpr Register::FieldValue<decltype(sec),SecVal::v01> v01{};
            constexpr Register::FieldValue<decltype(sec),SecVal::v10> v10{};
            constexpr Register::FieldValue<decltype(sec),SecVal::v11> v11{};
        }
        ///Freescale Failure Analysis Access Code
        enum class FslaccVal {
            v00=0x00000000,     ///<Freescale factory access granted
            v01=0x00000001,     ///<Freescale factory access denied
            v10=0x00000002,     ///<Freescale factory access denied
            v11=0x00000003,     ///<Freescale factory access granted
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,FslaccVal> fslacc{}; 
        namespace FslaccValC{
            constexpr Register::FieldValue<decltype(fslacc),FslaccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(fslacc),FslaccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(fslacc),FslaccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(fslacc),FslaccVal::v11> v11{};
        }
        ///Mass Erase Enable Bits
        enum class MeenVal {
            v00=0x00000000,     ///<Mass erase is enabled
            v01=0x00000001,     ///<Mass erase is enabled
            v10=0x00000002,     ///<Mass erase is disabled
            v11=0x00000003,     ///<Mass erase is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,MeenVal> meen{}; 
        namespace MeenValC{
            constexpr Register::FieldValue<decltype(meen),MeenVal::v00> v00{};
            constexpr Register::FieldValue<decltype(meen),MeenVal::v01> v01{};
            constexpr Register::FieldValue<decltype(meen),MeenVal::v10> v10{};
            constexpr Register::FieldValue<decltype(meen),MeenVal::v11> v11{};
        }
        ///Backdoor Key Security Enable
        enum class KeyenVal {
            v00=0x00000000,     ///<Backdoor key access disabled
            v01=0x00000001,     ///<Backdoor key access disabled (preferred KEYEN state to disable backdoor key access)
            v10=0x00000002,     ///<Backdoor key access enabled
            v11=0x00000003,     ///<Backdoor key access disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,KeyenVal> keyen{}; 
        namespace KeyenValC{
            constexpr Register::FieldValue<decltype(keyen),KeyenVal::v00> v00{};
            constexpr Register::FieldValue<decltype(keyen),KeyenVal::v01> v01{};
            constexpr Register::FieldValue<decltype(keyen),KeyenVal::v10> v10{};
            constexpr Register::FieldValue<decltype(keyen),KeyenVal::v11> v11{};
        }
    }
    namespace FtfaFopt{    ///<Flash Option Register
        using Addr = Register::Address<0x40020003,0xffffff00,0,unsigned char>;
        ///Nonvolatile Option
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> opt{}; 
        namespace OptValC{
        }
    }
    namespace FtfaFccob3{    ///<Flash Common Command Object Registers
        using Addr = Register::Address<0x40020004,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccobn{}; 
        namespace CcobnValC{
        }
    }
    namespace FtfaFccob2{    ///<Flash Common Command Object Registers
        using Addr = Register::Address<0x40020005,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccobn{}; 
        namespace CcobnValC{
        }
    }
    namespace FtfaFccob1{    ///<Flash Common Command Object Registers
        using Addr = Register::Address<0x40020006,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccobn{}; 
        namespace CcobnValC{
        }
    }
    namespace FtfaFccob0{    ///<Flash Common Command Object Registers
        using Addr = Register::Address<0x40020007,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccobn{}; 
        namespace CcobnValC{
        }
    }
    namespace FtfaFccob7{    ///<Flash Common Command Object Registers
        using Addr = Register::Address<0x40020008,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccobn{}; 
        namespace CcobnValC{
        }
    }
    namespace FtfaFccob6{    ///<Flash Common Command Object Registers
        using Addr = Register::Address<0x40020009,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccobn{}; 
        namespace CcobnValC{
        }
    }
    namespace FtfaFccob5{    ///<Flash Common Command Object Registers
        using Addr = Register::Address<0x4002000a,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccobn{}; 
        namespace CcobnValC{
        }
    }
    namespace FtfaFccob4{    ///<Flash Common Command Object Registers
        using Addr = Register::Address<0x4002000b,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccobn{}; 
        namespace CcobnValC{
        }
    }
    namespace FtfaFccobb{    ///<Flash Common Command Object Registers
        using Addr = Register::Address<0x4002000c,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccobn{}; 
        namespace CcobnValC{
        }
    }
    namespace FtfaFccoba{    ///<Flash Common Command Object Registers
        using Addr = Register::Address<0x4002000d,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccobn{}; 
        namespace CcobnValC{
        }
    }
    namespace FtfaFccob9{    ///<Flash Common Command Object Registers
        using Addr = Register::Address<0x4002000e,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccobn{}; 
        namespace CcobnValC{
        }
    }
    namespace FtfaFccob8{    ///<Flash Common Command Object Registers
        using Addr = Register::Address<0x4002000f,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccobn{}; 
        namespace CcobnValC{
        }
    }
    namespace FtfaFprot3{    ///<Program Flash Protection Registers
        using Addr = Register::Address<0x40020010,0xffffff00,0,unsigned char>;
        ///Program Flash Region Protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prot{}; 
        namespace ProtValC{
        }
    }
    namespace FtfaFprot2{    ///<Program Flash Protection Registers
        using Addr = Register::Address<0x40020011,0xffffff00,0,unsigned char>;
        ///Program Flash Region Protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prot{}; 
        namespace ProtValC{
        }
    }
    namespace FtfaFprot1{    ///<Program Flash Protection Registers
        using Addr = Register::Address<0x40020012,0xffffff00,0,unsigned char>;
        ///Program Flash Region Protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prot{}; 
        namespace ProtValC{
        }
    }
    namespace FtfaFprot0{    ///<Program Flash Protection Registers
        using Addr = Register::Address<0x40020013,0xffffff00,0,unsigned char>;
        ///Program Flash Region Protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prot{}; 
        namespace ProtValC{
        }
    }
    namespace FtfaXacch3{    ///<Execute-only Access Registers
        using Addr = Register::Address<0x40020018,0xffffff00,0,unsigned char>;
        ///Execute-only access control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> xa{}; 
        namespace XaValC{
        }
    }
    namespace FtfaXacch2{    ///<Execute-only Access Registers
        using Addr = Register::Address<0x40020019,0xffffff00,0,unsigned char>;
        ///Execute-only access control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> xa{}; 
        namespace XaValC{
        }
    }
    namespace FtfaXacch1{    ///<Execute-only Access Registers
        using Addr = Register::Address<0x4002001a,0xffffff00,0,unsigned char>;
        ///Execute-only access control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> xa{}; 
        namespace XaValC{
        }
    }
    namespace FtfaXacch0{    ///<Execute-only Access Registers
        using Addr = Register::Address<0x4002001b,0xffffff00,0,unsigned char>;
        ///Execute-only access control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> xa{}; 
        namespace XaValC{
        }
    }
    namespace FtfaXaccl3{    ///<Execute-only Access Registers
        using Addr = Register::Address<0x4002001c,0xffffff00,0,unsigned char>;
        ///Execute-only access control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> xa{}; 
        namespace XaValC{
        }
    }
    namespace FtfaXaccl2{    ///<Execute-only Access Registers
        using Addr = Register::Address<0x4002001d,0xffffff00,0,unsigned char>;
        ///Execute-only access control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> xa{}; 
        namespace XaValC{
        }
    }
    namespace FtfaXaccl1{    ///<Execute-only Access Registers
        using Addr = Register::Address<0x4002001e,0xffffff00,0,unsigned char>;
        ///Execute-only access control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> xa{}; 
        namespace XaValC{
        }
    }
    namespace FtfaXaccl0{    ///<Execute-only Access Registers
        using Addr = Register::Address<0x4002001f,0xffffff00,0,unsigned char>;
        ///Execute-only access control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> xa{}; 
        namespace XaValC{
        }
    }
    namespace FtfaSacch3{    ///<Supervisor-only Access Registers
        using Addr = Register::Address<0x40020020,0xffffff00,0,unsigned char>;
        ///Supervisor-only access control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sa{}; 
        namespace SaValC{
        }
    }
    namespace FtfaSacch2{    ///<Supervisor-only Access Registers
        using Addr = Register::Address<0x40020021,0xffffff00,0,unsigned char>;
        ///Supervisor-only access control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sa{}; 
        namespace SaValC{
        }
    }
    namespace FtfaSacch1{    ///<Supervisor-only Access Registers
        using Addr = Register::Address<0x40020022,0xffffff00,0,unsigned char>;
        ///Supervisor-only access control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sa{}; 
        namespace SaValC{
        }
    }
    namespace FtfaSacch0{    ///<Supervisor-only Access Registers
        using Addr = Register::Address<0x40020023,0xffffff00,0,unsigned char>;
        ///Supervisor-only access control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sa{}; 
        namespace SaValC{
        }
    }
    namespace FtfaSaccl3{    ///<Supervisor-only Access Registers
        using Addr = Register::Address<0x40020024,0xffffff00,0,unsigned char>;
        ///Supervisor-only access control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sa{}; 
        namespace SaValC{
        }
    }
    namespace FtfaSaccl2{    ///<Supervisor-only Access Registers
        using Addr = Register::Address<0x40020025,0xffffff00,0,unsigned char>;
        ///Supervisor-only access control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sa{}; 
        namespace SaValC{
        }
    }
    namespace FtfaSaccl1{    ///<Supervisor-only Access Registers
        using Addr = Register::Address<0x40020026,0xffffff00,0,unsigned char>;
        ///Supervisor-only access control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sa{}; 
        namespace SaValC{
        }
    }
    namespace FtfaSaccl0{    ///<Supervisor-only Access Registers
        using Addr = Register::Address<0x40020027,0xffffff00,0,unsigned char>;
        ///Supervisor-only access control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sa{}; 
        namespace SaValC{
        }
    }
    namespace FtfaFacss{    ///<Flash Access Segment Size Register
        using Addr = Register::Address<0x40020028,0xffffff00,0,unsigned char>;
        ///Segment Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sgsize{}; 
        namespace SgsizeValC{
        }
    }
    namespace FtfaFacsn{    ///<Flash Access Segment Number Register
        using Addr = Register::Address<0x4002002b,0xffffff00,0,unsigned char>;
        ///Number of Segments Indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> numsg{}; 
        namespace NumsgValC{
        }
    }
}
