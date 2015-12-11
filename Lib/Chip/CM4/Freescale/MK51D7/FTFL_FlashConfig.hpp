#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash configuration field
    namespace NvBackkey3{    ///<Backdoor Comparison Key 3.
        using Addr = Register::Address<0x00000400,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace NvBackkey2{    ///<Backdoor Comparison Key 2.
        using Addr = Register::Address<0x00000401,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace NvBackkey1{    ///<Backdoor Comparison Key 1.
        using Addr = Register::Address<0x00000402,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace NvBackkey0{    ///<Backdoor Comparison Key 0.
        using Addr = Register::Address<0x00000403,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace NvBackkey7{    ///<Backdoor Comparison Key 7.
        using Addr = Register::Address<0x00000404,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace NvBackkey6{    ///<Backdoor Comparison Key 6.
        using Addr = Register::Address<0x00000405,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace NvBackkey5{    ///<Backdoor Comparison Key 5.
        using Addr = Register::Address<0x00000406,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace NvBackkey4{    ///<Backdoor Comparison Key 4.
        using Addr = Register::Address<0x00000407,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace NvFprot3{    ///<Non-volatile P-Flash Protection 1 - Low Register
        using Addr = Register::Address<0x00000408,0xffffff00,0,unsigned char>;
        ///P-Flash Region Protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prot{}; 
    }
    namespace NvFprot2{    ///<Non-volatile P-Flash Protection 1 - High Register
        using Addr = Register::Address<0x00000409,0xffffff00,0,unsigned char>;
        ///P-Flash Region Protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prot{}; 
    }
    namespace NvFprot1{    ///<Non-volatile P-Flash Protection 0 - Low Register
        using Addr = Register::Address<0x0000040a,0xffffff00,0,unsigned char>;
        ///P-Flash Region Protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prot{}; 
    }
    namespace NvFprot0{    ///<Non-volatile P-Flash Protection 0 - High Register
        using Addr = Register::Address<0x0000040b,0xffffff00,0,unsigned char>;
        ///P-Flash Region Protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prot{}; 
    }
    namespace NvFsec{    ///<Non-volatile Flash Security Register
        using Addr = Register::Address<0x0000040c,0xffffff00,0,unsigned char>;
        ///Flash Security
        enum class SecVal {
            v10=0x00000002,     ///<MCU security status is unsecure
            v11=0x00000003,     ///<MCU security status is secure
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SecVal> sec{}; 
        namespace SecValC{
            constexpr Register::FieldValue<decltype(sec)::Type,SecVal::v10> v10{};
            constexpr Register::FieldValue<decltype(sec)::Type,SecVal::v11> v11{};
        }
        ///Freescale Failure Analysis Access Code
        enum class FslaccVal {
            v10=0x00000002,     ///<Freescale factory access denied
            v11=0x00000003,     ///<Freescale factory access granted
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,FslaccVal> fslacc{}; 
        namespace FslaccValC{
            constexpr Register::FieldValue<decltype(fslacc)::Type,FslaccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(fslacc)::Type,FslaccVal::v11> v11{};
        }
        ///no description available
        enum class MeenVal {
            v10=0x00000002,     ///<Mass erase is disabled
            v11=0x00000003,     ///<Mass erase is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,MeenVal> meen{}; 
        namespace MeenValC{
            constexpr Register::FieldValue<decltype(meen)::Type,MeenVal::v10> v10{};
            constexpr Register::FieldValue<decltype(meen)::Type,MeenVal::v11> v11{};
        }
        ///Backdoor Key Security Enable
        enum class KeyenVal {
            v10=0x00000002,     ///<Backdoor key access enabled
            v11=0x00000003,     ///<Backdoor key access disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,KeyenVal> keyen{}; 
        namespace KeyenValC{
            constexpr Register::FieldValue<decltype(keyen)::Type,KeyenVal::v10> v10{};
            constexpr Register::FieldValue<decltype(keyen)::Type,KeyenVal::v11> v11{};
        }
    }
    namespace NvFopt{    ///<Non-volatile Flash Option Register
        using Addr = Register::Address<0x0000040d,0xfffffff8,0,unsigned char>;
        ///no description available
        enum class LpbootVal {
            v00=0x00000000,     ///<Low-power boot
            v01=0x00000001,     ///<Normal boot
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,LpbootVal> lpboot{}; 
        namespace LpbootValC{
            constexpr Register::FieldValue<decltype(lpboot)::Type,LpbootVal::v00> v00{};
            constexpr Register::FieldValue<decltype(lpboot)::Type,LpbootVal::v01> v01{};
        }
        ///no description available
        enum class EzportdisVal {
            v00=0x00000000,     ///<EzPort operation is disabled
            v01=0x00000001,     ///<EzPort operation is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EzportdisVal> ezportDis{}; 
        namespace EzportdisValC{
            constexpr Register::FieldValue<decltype(ezportDis)::Type,EzportdisVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ezportDis)::Type,EzportdisVal::v01> v01{};
        }
        ///no description available
        enum class NmidisVal {
            v00=0x00000000,     ///<NMI interrupts are always blocked
            v01=0x00000001,     ///<NMI_b pin/interrupts reset default to enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,NmidisVal> nmiDis{}; 
        namespace NmidisValC{
            constexpr Register::FieldValue<decltype(nmiDis)::Type,NmidisVal::v00> v00{};
            constexpr Register::FieldValue<decltype(nmiDis)::Type,NmidisVal::v01> v01{};
        }
    }
    namespace NvFeprot{    ///<Non-volatile EERAM Protection Register
        using Addr = Register::Address<0x0000040e,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> eprot{}; 
    }
    namespace NvFdprot{    ///<Non-volatile D-Flash Protection Register
        using Addr = Register::Address<0x0000040f,0xffffff00,0,unsigned char>;
        ///D-Flash Region Protect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dprot{}; 
    }
}
