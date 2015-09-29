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
        using Addr = Register::Address<0x0000040d,0xffffff00,0,unsigned char>;
        ///no description available
        enum class lpboot0Val {
            v00=0x00000000,     ///<Core and system clock divider (OUTDIV1) is 0x7 (divide by 8) when LPBOOT1=0 or 0x1 (divide by 2) when LPBOOT1=1.
            v01=0x00000001,     ///<Core and system clock divider (OUTDIV1) is 0x3 (divide by 4) when LPBOOT1=0 or 0x0 (divide by 1) when LPBOOT1=1.
        };
        namespace lpboot0ValC{
            constexpr MPL::Value<lpboot0Val,lpboot0Val::v00> v00{};
            constexpr MPL::Value<lpboot0Val,lpboot0Val::v01> v01{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,lpboot0Val> lpboot0{}; 
        ///no description available
        enum class bootpinOptVal {
            v00=0x00000000,     ///<Force Boot from ROM if BOOTCFG0 asserted, where BOOTCFG0 is the boot config function which is muxed with NMI pin
            v01=0x00000001,     ///<Boot source configured by FOPT (BOOTSRC_SEL) bits
        };
        namespace bootpinOptValC{
            constexpr MPL::Value<bootpinOptVal,bootpinOptVal::v00> v00{};
            constexpr MPL::Value<bootpinOptVal,bootpinOptVal::v01> v01{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bootpinOptVal> bootpinOpt{}; 
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
        enum class resetPinCfgVal {
            v00=0x00000000,     ///<RESET pin is disabled following a POR and cannot be enabled as reset function
            v01=0x00000001,     ///<RESET_b pin is dedicated
        };
        namespace resetPinCfgValC{
            constexpr MPL::Value<resetPinCfgVal,resetPinCfgVal::v00> v00{};
            constexpr MPL::Value<resetPinCfgVal,resetPinCfgVal::v01> v01{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,resetPinCfgVal> resetPinCfg{}; 
        ///no description available
        enum class lpboot1Val {
            v00=0x00000000,     ///<Core and system clock divider (OUTDIV1) is 0x7 (divide by 8) when LPBOOT0=0 or 0x3 (divide by 4) when LPBOOT0=1.
            v01=0x00000001,     ///<Core and system clock divider (OUTDIV1) is 0x1 (divide by 2) when LPBOOT0=0 or 0x0 (divide by 1) when LPBOOT0=1.
        };
        namespace lpboot1ValC{
            constexpr MPL::Value<lpboot1Val,lpboot1Val::v00> v00{};
            constexpr MPL::Value<lpboot1Val,lpboot1Val::v01> v01{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,lpboot1Val> lpboot1{}; 
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
        ///Boot source selection
        enum class bootsrcSelVal {
            v00=0x00000000,     ///<Boot from Flash
            v10=0x00000002,     ///<Boot from ROM
            v11=0x00000003,     ///<Boot from ROM
        };
        namespace bootsrcSelValC{
            constexpr MPL::Value<bootsrcSelVal,bootsrcSelVal::v00> v00{};
            constexpr MPL::Value<bootsrcSelVal,bootsrcSelVal::v10> v10{};
            constexpr MPL::Value<bootsrcSelVal,bootsrcSelVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,bootsrcSelVal> bootsrcSel{}; 
    }
}
