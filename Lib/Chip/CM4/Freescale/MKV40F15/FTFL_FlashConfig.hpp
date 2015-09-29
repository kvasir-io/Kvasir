#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash configuration field
    namespace NvBackkey3{    ///<Backdoor Comparison Key 3.
        using Addr = Register::Address<0x00000400,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace NvBackkey2{    ///<Backdoor Comparison Key 2.
        using Addr = Register::Address<0x00000401,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace NvBackkey1{    ///<Backdoor Comparison Key 1.
        using Addr = Register::Address<0x00000402,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace NvBackkey0{    ///<Backdoor Comparison Key 0.
        using Addr = Register::Address<0x00000403,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace NvBackkey7{    ///<Backdoor Comparison Key 7.
        using Addr = Register::Address<0x00000404,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace NvBackkey6{    ///<Backdoor Comparison Key 6.
        using Addr = Register::Address<0x00000405,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace NvBackkey5{    ///<Backdoor Comparison Key 5.
        using Addr = Register::Address<0x00000406,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace NvBackkey4{    ///<Backdoor Comparison Key 4.
        using Addr = Register::Address<0x00000407,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace NvFprot3{    ///<Non-volatile P-Flash Protection 1 - Low Register
        using Addr = Register::Address<0x00000408,0xffffff00,0,unsigned char>;
        ///P-Flash Region Protect
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prot{}; 
    }
    namespace NvFprot2{    ///<Non-volatile P-Flash Protection 1 - High Register
        using Addr = Register::Address<0x00000409,0xffffff00,0,unsigned char>;
        ///P-Flash Region Protect
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prot{}; 
    }
    namespace NvFprot1{    ///<Non-volatile P-Flash Protection 0 - Low Register
        using Addr = Register::Address<0x0000040a,0xffffff00,0,unsigned char>;
        ///P-Flash Region Protect
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prot{}; 
    }
    namespace NvFprot0{    ///<Non-volatile P-Flash Protection 0 - High Register
        using Addr = Register::Address<0x0000040b,0xffffff00,0,unsigned char>;
        ///P-Flash Region Protect
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prot{}; 
    }
    namespace NvFsec{    ///<Non-volatile Flash Security Register
        using Addr = Register::Address<0x0000040c,0xffffff00,0,unsigned char>;
        ///Flash Security
        enum class secVal {
            v10=0x00000002,     ///<MCU security status is unsecure
            v11=0x00000003,     ///<MCU security status is secure
        };
        namespace secValC{
            constexpr MPL::Value<secVal,secVal::v10> v10{};
            constexpr MPL::Value<secVal,secVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,secVal> sec{}; 
        ///Freescale Failure Analysis Access Code
        enum class fslaccVal {
            v10=0x00000002,     ///<Freescale factory access denied
            v11=0x00000003,     ///<Freescale factory access granted
        };
        namespace fslaccValC{
            constexpr MPL::Value<fslaccVal,fslaccVal::v10> v10{};
            constexpr MPL::Value<fslaccVal,fslaccVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,fslaccVal> fslacc{}; 
        ///no description available
        enum class meenVal {
            v10=0x00000002,     ///<Mass erase is disabled
            v11=0x00000003,     ///<Mass erase is enabled
        };
        namespace meenValC{
            constexpr MPL::Value<meenVal,meenVal::v10> v10{};
            constexpr MPL::Value<meenVal,meenVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,meenVal> meen{}; 
        ///Backdoor Key Security Enable
        enum class keyenVal {
            v10=0x00000002,     ///<Backdoor key access enabled
            v11=0x00000003,     ///<Backdoor key access disabled
        };
        namespace keyenValC{
            constexpr MPL::Value<keyenVal,keyenVal::v10> v10{};
            constexpr MPL::Value<keyenVal,keyenVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,keyenVal> keyen{}; 
    }
    namespace NvFopt{    ///<Non-volatile Flash Option Register
        using Addr = Register::Address<0x0000040d,0xffffffda,0,unsigned char>;
        ///no description available
        enum class lpbootVal {
            v00=0x00000000,     ///<Low-power boot
            v01=0x00000001,     ///<Normal boot
        };
        namespace lpbootValC{
            constexpr MPL::Value<lpbootVal,lpbootVal::v00> v00{};
            constexpr MPL::Value<lpbootVal,lpbootVal::v01> v01{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,lpbootVal> lpboot{}; 
        ///no description available
        enum class nmiDisVal {
            v00=0x00000000,     ///<NMI interrupts are always blocked
            v01=0x00000001,     ///<NMI_b pin/interrupts reset default to enabled
        };
        namespace nmiDisValC{
            constexpr MPL::Value<nmiDisVal,nmiDisVal::v00> v00{};
            constexpr MPL::Value<nmiDisVal,nmiDisVal::v01> v01{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,nmiDisVal> nmiDis{}; 
        ///no description available
        enum class fastInitVal {
            v00=0x00000000,     ///<Slower initialization
            v01=0x00000001,     ///<Fast Initialization
        };
        namespace fastInitValC{
            constexpr MPL::Value<fastInitVal,fastInitVal::v00> v00{};
            constexpr MPL::Value<fastInitVal,fastInitVal::v01> v01{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,fastInitVal> fastInit{}; 
    }
    namespace NvFeprot{    ///<Non-volatile EERAM Protection Register
        using Addr = Register::Address<0x0000040e,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> eprot{}; 
    }
    namespace NvFdprot{    ///<Non-volatile D-Flash Protection Register
        using Addr = Register::Address<0x0000040f,0xffffff00,0,unsigned char>;
        ///D-Flash Region Protect
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dprot{}; 
    }
}
