#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Flash configuration field
    namespace FtfaFlashconfigBackkey3{    ///<Backdoor Comparison Key 3.
        using Addr = Register::Address<0x00000400,0xffffff00,0x00000000,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> key{}; 
    }
    namespace FtfaFlashconfigBackkey2{    ///<Backdoor Comparison Key 2.
        using Addr = Register::Address<0x00000401,0xffffff00,0x00000000,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> key{}; 
    }
    namespace FtfaFlashconfigBackkey1{    ///<Backdoor Comparison Key 1.
        using Addr = Register::Address<0x00000402,0xffffff00,0x00000000,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> key{}; 
    }
    namespace FtfaFlashconfigBackkey0{    ///<Backdoor Comparison Key 0.
        using Addr = Register::Address<0x00000403,0xffffff00,0x00000000,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> key{}; 
    }
    namespace FtfaFlashconfigBackkey7{    ///<Backdoor Comparison Key 7.
        using Addr = Register::Address<0x00000404,0xffffff00,0x00000000,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> key{}; 
    }
    namespace FtfaFlashconfigBackkey6{    ///<Backdoor Comparison Key 6.
        using Addr = Register::Address<0x00000405,0xffffff00,0x00000000,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> key{}; 
    }
    namespace FtfaFlashconfigBackkey5{    ///<Backdoor Comparison Key 5.
        using Addr = Register::Address<0x00000406,0xffffff00,0x00000000,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> key{}; 
    }
    namespace FtfaFlashconfigBackkey4{    ///<Backdoor Comparison Key 4.
        using Addr = Register::Address<0x00000407,0xffffff00,0x00000000,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> key{}; 
    }
    namespace FtfaFlashconfigFprot3{    ///<Non-volatile P-Flash Protection 1 - Low Register
        using Addr = Register::Address<0x00000408,0xffffff00,0x00000000,unsigned char>;
        ///P-Flash Region Protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> prot{}; 
    }
    namespace FtfaFlashconfigFprot2{    ///<Non-volatile P-Flash Protection 1 - High Register
        using Addr = Register::Address<0x00000409,0xffffff00,0x00000000,unsigned char>;
        ///P-Flash Region Protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> prot{}; 
    }
    namespace FtfaFlashconfigFprot1{    ///<Non-volatile P-Flash Protection 0 - Low Register
        using Addr = Register::Address<0x0000040a,0xffffff00,0x00000000,unsigned char>;
        ///P-Flash Region Protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> prot{}; 
    }
    namespace FtfaFlashconfigFprot0{    ///<Non-volatile P-Flash Protection 0 - High Register
        using Addr = Register::Address<0x0000040b,0xffffff00,0x00000000,unsigned char>;
        ///P-Flash Region Protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> prot{}; 
    }
    namespace FtfaFlashconfigFsec{    ///<Non-volatile Flash Security Register
        using Addr = Register::Address<0x0000040c,0xffffff00,0x00000000,unsigned char>;
        ///Flash Security
        enum class SecVal {
            v10=0x00000002,     ///<MCU security status is unsecure
            v11=0x00000003,     ///<MCU security status is secure
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SecVal> sec{}; 
        namespace SecValC{
            constexpr Register::FieldValue<decltype(sec)::Type,SecVal::v10> v10{};
            constexpr Register::FieldValue<decltype(sec)::Type,SecVal::v11> v11{};
        }
        ///Freescale Failure Analysis Access Code
        enum class FslaccVal {
            v10=0x00000002,     ///<Freescale factory access denied
            v11=0x00000003,     ///<Freescale factory access granted
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,FslaccVal> fslacc{}; 
        namespace FslaccValC{
            constexpr Register::FieldValue<decltype(fslacc)::Type,FslaccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(fslacc)::Type,FslaccVal::v11> v11{};
        }
        ///no description available
        enum class MeenVal {
            v10=0x00000002,     ///<Mass erase is disabled
            v11=0x00000003,     ///<Mass erase is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,MeenVal> meen{}; 
        namespace MeenValC{
            constexpr Register::FieldValue<decltype(meen)::Type,MeenVal::v10> v10{};
            constexpr Register::FieldValue<decltype(meen)::Type,MeenVal::v11> v11{};
        }
        ///Backdoor Key Security Enable
        enum class KeyenVal {
            v10=0x00000002,     ///<Backdoor key access enabled
            v11=0x00000003,     ///<Backdoor key access disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,KeyenVal> keyen{}; 
        namespace KeyenValC{
            constexpr Register::FieldValue<decltype(keyen)::Type,KeyenVal::v10> v10{};
            constexpr Register::FieldValue<decltype(keyen)::Type,KeyenVal::v11> v11{};
        }
    }
    namespace FtfaFlashconfigFopt{    ///<Non-volatile Flash Option Register
        using Addr = Register::Address<0x0000040d,0xffffff00,0x00000000,unsigned char>;
        ///no description available
        enum class Lpboot0Val {
            v00=0x00000000,     ///<Core and system clock divider (OUTDIV1) is 0x7 (divide by 8) when LPBOOT1=0 or 0x1 (divide by 2) when LPBOOT1=1.
            v01=0x00000001,     ///<Core and system clock divider (OUTDIV1) is 0x3 (divide by 4) when LPBOOT1=0 or 0x0 (divide by 1) when LPBOOT1=1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Lpboot0Val> lpboot0{}; 
        namespace Lpboot0ValC{
            constexpr Register::FieldValue<decltype(lpboot0)::Type,Lpboot0Val::v00> v00{};
            constexpr Register::FieldValue<decltype(lpboot0)::Type,Lpboot0Val::v01> v01{};
        }
        ///no description available
        enum class BootpinoptVal {
            v00=0x00000000,     ///<Force Boot from ROM if BOOTCFG0 asserted, where BOOTCFG0 is the boot config function which is muxed with NMI pin
            v01=0x00000001,     ///<Boot source configured by FOPT (BOOTSRC_SEL) bits
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BootpinoptVal> bootpinOpt{}; 
        namespace BootpinoptValC{
            constexpr Register::FieldValue<decltype(bootpinOpt)::Type,BootpinoptVal::v00> v00{};
            constexpr Register::FieldValue<decltype(bootpinOpt)::Type,BootpinoptVal::v01> v01{};
        }
        ///no description available
        enum class NmidisVal {
            v00=0x00000000,     ///<NMI interrupts are always blocked
            v01=0x00000001,     ///<NMI_b pin/interrupts reset default to enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,NmidisVal> nmiDis{}; 
        namespace NmidisValC{
            constexpr Register::FieldValue<decltype(nmiDis)::Type,NmidisVal::v00> v00{};
            constexpr Register::FieldValue<decltype(nmiDis)::Type,NmidisVal::v01> v01{};
        }
        ///no description available
        enum class ResetpincfgVal {
            v00=0x00000000,     ///<RESET pin is disabled following a POR and cannot be enabled as reset function
            v01=0x00000001,     ///<RESET_b pin is dedicated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,ResetpincfgVal> resetPinCfg{}; 
        namespace ResetpincfgValC{
            constexpr Register::FieldValue<decltype(resetPinCfg)::Type,ResetpincfgVal::v00> v00{};
            constexpr Register::FieldValue<decltype(resetPinCfg)::Type,ResetpincfgVal::v01> v01{};
        }
        ///no description available
        enum class Lpboot1Val {
            v00=0x00000000,     ///<Core and system clock divider (OUTDIV1) is 0x7 (divide by 8) when LPBOOT0=0 or 0x3 (divide by 4) when LPBOOT0=1.
            v01=0x00000001,     ///<Core and system clock divider (OUTDIV1) is 0x1 (divide by 2) when LPBOOT0=0 or 0x0 (divide by 1) when LPBOOT0=1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,Lpboot1Val> lpboot1{}; 
        namespace Lpboot1ValC{
            constexpr Register::FieldValue<decltype(lpboot1)::Type,Lpboot1Val::v00> v00{};
            constexpr Register::FieldValue<decltype(lpboot1)::Type,Lpboot1Val::v01> v01{};
        }
        ///no description available
        enum class FastinitVal {
            v00=0x00000000,     ///<Slower initialization
            v01=0x00000001,     ///<Fast Initialization
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,FastinitVal> fastInit{}; 
        namespace FastinitValC{
            constexpr Register::FieldValue<decltype(fastInit)::Type,FastinitVal::v00> v00{};
            constexpr Register::FieldValue<decltype(fastInit)::Type,FastinitVal::v01> v01{};
        }
        ///Boot source selection
        enum class BootsrcselVal {
            v00=0x00000000,     ///<Boot from Flash
            v10=0x00000002,     ///<Boot from ROM
            v11=0x00000003,     ///<Boot from ROM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BootsrcselVal> bootsrcSel{}; 
        namespace BootsrcselValC{
            constexpr Register::FieldValue<decltype(bootsrcSel)::Type,BootsrcselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(bootsrcSel)::Type,BootsrcselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(bootsrcSel)::Type,BootsrcselVal::v11> v11{};
        }
    }
}
