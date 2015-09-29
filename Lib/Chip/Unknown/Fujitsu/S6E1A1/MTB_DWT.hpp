#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Micro Trace Buffer Data Watchpoint and Trace Registers
    namespace NonecmpAddrStart{    ///<MTB_DWT Address Compare Start trace Register
        using Addr = Register::Address<0xf0001000,0x00000000,0,unsigned>;
        ///MTB_DWT address comparison start trace bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> adcmpSta{}; 
    }
    namespace NonecmpDataStart{    ///<MTB_DWT Data Compare Start trace Register
        using Addr = Register::Address<0xf0001004,0x00000000,0,unsigned>;
        ///MTB_DWT data comparison start trace bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dtcmpSta{}; 
    }
    namespace NonecmpMaskStart{    ///<MTB_DWT Mask Data Compare Start Trace Register
        using Addr = Register::Address<0xf0001008,0x00000000,0,unsigned>;
        ///MTB_DWT data compare start trace register mask bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mskSta{}; 
    }
    namespace NonecmpAddrStop{    ///<MTB_DWT Address Compare Stop trace Register
        using Addr = Register::Address<0xf0001010,0x00000000,0,unsigned>;
        ///MTB_DWT address comparison stop trace bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> adcmpSto{}; 
    }
    namespace NonecmpDataStop{    ///<MTB_DWT Data Compare Stop trace Register
        using Addr = Register::Address<0xf0001014,0x00000000,0,unsigned>;
        ///MTB_DWT data comparison stop trace bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dtcmpSto{}; 
    }
    namespace NonecmpMaskStop{    ///<MTB_DWT Mask Data Compare Stop Trace Register
        using Addr = Register::Address<0xf0001018,0x00000000,0,unsigned>;
        ///MTB_DWT data compare stop trace register mask bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mskSto{}; 
    }
    namespace Nonefct{    ///<MTB_DWT Function Register
        using Addr = Register::Address<0xf0001020,0xffffff00,0,unsigned char>;
        ///Data size stop bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dstp{}; 
        ///Data size start bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> dsta{}; 
        ///Enable MTB_DWT stop MTB function bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> stpen{}; 
        ///Enable MTB_DWT start MTB function bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> staen{}; 
    }
    namespace Nonepid4{    ///<Peripheral ID4 Register
        using Addr = Register::Address<0xf0001fd0,0x00000000,0,unsigned>;
        ///Peripheral ID bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> perid{}; 
    }
    namespace Nonepid5{    ///<Peripheral ID5 Register
        using Addr = Register::Address<0xf0001fd4,0x00000000,0,unsigned>;
        ///Peripheral ID bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> perid{}; 
    }
    namespace Nonepid6{    ///<Peripheral ID6 Register
        using Addr = Register::Address<0xf0001fd8,0x00000000,0,unsigned>;
        ///Peripheral ID bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> perid{}; 
    }
    namespace Nonepid7{    ///<Peripheral ID7 Register
        using Addr = Register::Address<0xf0001fdc,0x00000000,0,unsigned>;
        ///Peripheral ID bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> perid{}; 
    }
    namespace Nonepid0{    ///<Peripheral ID0 Register
        using Addr = Register::Address<0xf0001fe0,0x00000000,0,unsigned>;
        ///Peripheral ID bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> perid{}; 
    }
    namespace Nonepid1{    ///<Peripheral ID1 Register
        using Addr = Register::Address<0xf0001fe4,0x00000000,0,unsigned>;
        ///Peripheral ID bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> perid{}; 
    }
    namespace Nonepid2{    ///<Peripheral ID2 Register
        using Addr = Register::Address<0xf0001fe8,0x00000000,0,unsigned>;
        ///Peripheral ID bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> perid{}; 
    }
    namespace Nonepid3{    ///<Peripheral ID3 Register
        using Addr = Register::Address<0xf0001fec,0x00000000,0,unsigned>;
        ///Peripheral ID bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> perid{}; 
    }
    namespace Nonecid0{    ///<Component ID0 Register
        using Addr = Register::Address<0xf0001ff0,0x00000000,0,unsigned>;
        ///Component ID bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cpntid{}; 
    }
    namespace Nonecid1{    ///<Component ID1 Register
        using Addr = Register::Address<0xf0001ff4,0x00000000,0,unsigned>;
        ///Component ID bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cpntid{}; 
    }
    namespace Nonecid2{    ///<Component ID2 Register
        using Addr = Register::Address<0xf0001ff8,0x00000000,0,unsigned>;
        ///Component ID bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cpntid{}; 
    }
    namespace Nonecid3{    ///<Component ID3 Register
        using Addr = Register::Address<0xf0001ffc,0x00000000,0,unsigned>;
        ///Component ID bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cpntid{}; 
    }
}
