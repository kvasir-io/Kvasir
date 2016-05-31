#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Micro Trace Buffer Data Watchpoint and Trace Registers
    namespace MtbDwtCmpAddrStart{    ///<MTB_DWT Address Compare Start trace Register
        using Addr = Register::Address<0xf0001000,0x00000000,0x00000000,unsigned>;
        ///MTB_DWT address comparison start trace bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> adcmpSta{}; 
    }
    namespace MtbDwtCmpDataStart{    ///<MTB_DWT Data Compare Start trace Register
        using Addr = Register::Address<0xf0001004,0x00000000,0x00000000,unsigned>;
        ///MTB_DWT data comparison start trace bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dtcmpSta{}; 
    }
    namespace MtbDwtCmpMaskStart{    ///<MTB_DWT Mask Data Compare Start Trace Register
        using Addr = Register::Address<0xf0001008,0x00000000,0x00000000,unsigned>;
        ///MTB_DWT data compare start trace register mask bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mskSta{}; 
    }
    namespace MtbDwtCmpAddrStop{    ///<MTB_DWT Address Compare Stop trace Register
        using Addr = Register::Address<0xf0001010,0x00000000,0x00000000,unsigned>;
        ///MTB_DWT address comparison stop trace bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> adcmpSto{}; 
    }
    namespace MtbDwtCmpDataStop{    ///<MTB_DWT Data Compare Stop trace Register
        using Addr = Register::Address<0xf0001014,0x00000000,0x00000000,unsigned>;
        ///MTB_DWT data comparison stop trace bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dtcmpSto{}; 
    }
    namespace MtbDwtCmpMaskStop{    ///<MTB_DWT Mask Data Compare Stop Trace Register
        using Addr = Register::Address<0xf0001018,0x00000000,0x00000000,unsigned>;
        ///MTB_DWT data compare stop trace register mask bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mskSto{}; 
    }
    namespace MtbDwtFct{    ///<MTB_DWT Function Register
        using Addr = Register::Address<0xf0001020,0xffffff00,0x00000000,unsigned char>;
        ///Data size stop bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dstp{}; 
        ///Data size start bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> dsta{}; 
        ///Enable MTB_DWT stop MTB function bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> stpen{}; 
        ///Enable MTB_DWT start MTB function bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> staen{}; 
    }
    namespace MtbDwtPid4{    ///<Peripheral ID4 Register
        using Addr = Register::Address<0xf0001fd0,0x00000000,0x00000000,unsigned>;
        ///Peripheral ID bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perid{}; 
    }
    namespace MtbDwtPid5{    ///<Peripheral ID5 Register
        using Addr = Register::Address<0xf0001fd4,0x00000000,0x00000000,unsigned>;
        ///Peripheral ID bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perid{}; 
    }
    namespace MtbDwtPid6{    ///<Peripheral ID6 Register
        using Addr = Register::Address<0xf0001fd8,0x00000000,0x00000000,unsigned>;
        ///Peripheral ID bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perid{}; 
    }
    namespace MtbDwtPid7{    ///<Peripheral ID7 Register
        using Addr = Register::Address<0xf0001fdc,0x00000000,0x00000000,unsigned>;
        ///Peripheral ID bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perid{}; 
    }
    namespace MtbDwtPid0{    ///<Peripheral ID0 Register
        using Addr = Register::Address<0xf0001fe0,0x00000000,0x00000000,unsigned>;
        ///Peripheral ID bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perid{}; 
    }
    namespace MtbDwtPid1{    ///<Peripheral ID1 Register
        using Addr = Register::Address<0xf0001fe4,0x00000000,0x00000000,unsigned>;
        ///Peripheral ID bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perid{}; 
    }
    namespace MtbDwtPid2{    ///<Peripheral ID2 Register
        using Addr = Register::Address<0xf0001fe8,0x00000000,0x00000000,unsigned>;
        ///Peripheral ID bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perid{}; 
    }
    namespace MtbDwtPid3{    ///<Peripheral ID3 Register
        using Addr = Register::Address<0xf0001fec,0x00000000,0x00000000,unsigned>;
        ///Peripheral ID bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> perid{}; 
    }
    namespace MtbDwtCid0{    ///<Component ID0 Register
        using Addr = Register::Address<0xf0001ff0,0x00000000,0x00000000,unsigned>;
        ///Component ID bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpntid{}; 
    }
    namespace MtbDwtCid1{    ///<Component ID1 Register
        using Addr = Register::Address<0xf0001ff4,0x00000000,0x00000000,unsigned>;
        ///Component ID bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpntid{}; 
    }
    namespace MtbDwtCid2{    ///<Component ID2 Register
        using Addr = Register::Address<0xf0001ff8,0x00000000,0x00000000,unsigned>;
        ///Component ID bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpntid{}; 
    }
    namespace MtbDwtCid3{    ///<Component ID3 Register
        using Addr = Register::Address<0xf0001ffc,0x00000000,0x00000000,unsigned>;
        ///Component ID bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cpntid{}; 
    }
}
