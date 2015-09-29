#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash configuration field
    namespace NvBackkey0{    ///<Backdoor Comparison Key 0
        using Addr = Register::Address<0x00000400,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace NvBackkey1{    ///<Backdoor Comparison Key 1
        using Addr = Register::Address<0x00000401,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace NvBackkey2{    ///<Backdoor Comparison Key 2
        using Addr = Register::Address<0x00000402,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace NvBackkey3{    ///<Backdoor Comparison Key 3
        using Addr = Register::Address<0x00000403,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace NvBackkey4{    ///<Backdoor Comparison Key 4
        using Addr = Register::Address<0x00000404,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace NvBackkey5{    ///<Backdoor Comparison Key 5
        using Addr = Register::Address<0x00000405,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace NvBackkey6{    ///<Backdoor Comparison Key 6
        using Addr = Register::Address<0x00000406,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace NvBackkey7{    ///<Backdoor Comparison Key 7
        using Addr = Register::Address<0x00000407,0xffffff00,0,unsigned char>;
        ///Backdoor Comparison Key.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace NvFprot{    ///<Non-volatile P-Flash Protection Register
        using Addr = Register::Address<0x0000040d,0xffffff40,0,unsigned char>;
        ///no description available
        enum class fplsVal {
            v00=0x00000000,     ///<Address range: 0x00_0000-0x00_07FF; protected size: 2 KB
            v01=0x00000001,     ///<Address range: 0x00_0000-0x00_0FFF; protected size: 4 KB
            v10=0x00000002,     ///<Address range: 0x00_0000-0x00_1FFF; protected size: 8 KB
            v11=0x00000003,     ///<Address range: 0x00_0000-0x00_3FFF; protected size: 16 KB
        };
        namespace fplsValC{
            constexpr MPL::Value<fplsVal,fplsVal::v00> v00{};
            constexpr MPL::Value<fplsVal,fplsVal::v01> v01{};
            constexpr MPL::Value<fplsVal,fplsVal::v10> v10{};
            constexpr MPL::Value<fplsVal,fplsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,fplsVal> fpls{}; 
        ///no description available
        enum class fpldisVal {
            v00=0x00000000,     ///<Protection/Unprotection enabled
            v01=0x00000001,     ///<Protection/Unprotection disabled
        };
        namespace fpldisValC{
            constexpr MPL::Value<fpldisVal,fpldisVal::v00> v00{};
            constexpr MPL::Value<fpldisVal,fpldisVal::v01> v01{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,fpldisVal> fpldis{}; 
        ///no description available
        enum class fphsVal {
            v00=0x00000000,     ///<Address range: 0x00_7C00-0x00_7FFF; protected size: 1 KB
            v01=0x00000001,     ///<Address range: 0x00_7800-0x00_7FFF; protected size: 2 KB
            v10=0x00000002,     ///<Address range: 0x00_7000-0x00_7FFF; protected size: 4 KB
            v11=0x00000003,     ///<Address range: 0x00_6000-0x00_7FFF; protected size: 8 KB
        };
        namespace fphsValC{
            constexpr MPL::Value<fphsVal,fphsVal::v00> v00{};
            constexpr MPL::Value<fphsVal,fphsVal::v01> v01{};
            constexpr MPL::Value<fphsVal,fphsVal::v10> v10{};
            constexpr MPL::Value<fphsVal,fphsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,fphsVal> fphs{}; 
        ///no description available
        enum class fphdisVal {
            v00=0x00000000,     ///<Protection/Unprotection enabled
            v01=0x00000001,     ///<Protection/Unprotection disabled
        };
        namespace fphdisValC{
            constexpr MPL::Value<fphdisVal,fphdisVal::v00> v00{};
            constexpr MPL::Value<fphdisVal,fphdisVal::v01> v01{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,fphdisVal> fphdis{}; 
        ///no description available
        enum class fpopenVal {
            v00=0x00000000,     ///<FPHDIS and FPLDIS bits define unprotected address ranges as specified by the corresponding FPHS and FPLS bits FPROT1.1
            v01=0x00000001,     ///<FPHDIS and FPLDIS bits enable protection for the address range specified by the corresponding FPHS and FPLS bits
        };
        namespace fpopenValC{
            constexpr MPL::Value<fpopenVal,fpopenVal::v00> v00{};
            constexpr MPL::Value<fpopenVal,fpopenVal::v01> v01{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,fpopenVal> fpopen{}; 
    }
    namespace NvFsec{    ///<Non-volatile Flash Security Register
        using Addr = Register::Address<0x0000040e,0xffffff3c,0,unsigned char>;
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
        using Addr = Register::Address<0x0000040f,0xffffffff,0,unsigned char>;
    }
}
