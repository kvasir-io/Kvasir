#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Port Module
    namespace PortCtrl0{    ///<Control
        using Addr = Register::Address<0x41004424,0x00000000,0x00000000,unsigned>;
        ///Input Sampling Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sampling{}; 
    }
    namespace PortCtrl1{    ///<Control
        using Addr = Register::Address<0x410044a4,0x00000000,0x00000000,unsigned>;
        ///Input Sampling Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sampling{}; 
    }
    namespace PortCtrl2{    ///<Control
        using Addr = Register::Address<0x41004524,0x00000000,0x00000000,unsigned>;
        ///Input Sampling Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sampling{}; 
    }
    namespace PortDir0{    ///<Data Direction
        using Addr = Register::Address<0x41004400,0x00000000,0x00000000,unsigned>;
        ///Port Data Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dir{}; 
    }
    namespace PortDir1{    ///<Data Direction
        using Addr = Register::Address<0x41004480,0x00000000,0x00000000,unsigned>;
        ///Port Data Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dir{}; 
    }
    namespace PortDir2{    ///<Data Direction
        using Addr = Register::Address<0x41004500,0x00000000,0x00000000,unsigned>;
        ///Port Data Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dir{}; 
    }
    namespace PortDirclr0{    ///<Data Direction Clear
        using Addr = Register::Address<0x41004404,0x00000000,0x00000000,unsigned>;
        ///Port Data Direction Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dirclr{}; 
    }
    namespace PortDirclr1{    ///<Data Direction Clear
        using Addr = Register::Address<0x41004484,0x00000000,0x00000000,unsigned>;
        ///Port Data Direction Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dirclr{}; 
    }
    namespace PortDirclr2{    ///<Data Direction Clear
        using Addr = Register::Address<0x41004504,0x00000000,0x00000000,unsigned>;
        ///Port Data Direction Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dirclr{}; 
    }
    namespace PortDirset0{    ///<Data Direction Set
        using Addr = Register::Address<0x41004408,0x00000000,0x00000000,unsigned>;
        ///Port Data Direction Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dirset{}; 
    }
    namespace PortDirset1{    ///<Data Direction Set
        using Addr = Register::Address<0x41004488,0x00000000,0x00000000,unsigned>;
        ///Port Data Direction Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dirset{}; 
    }
    namespace PortDirset2{    ///<Data Direction Set
        using Addr = Register::Address<0x41004508,0x00000000,0x00000000,unsigned>;
        ///Port Data Direction Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dirset{}; 
    }
    namespace PortDirtgl0{    ///<Data Direction Toggle
        using Addr = Register::Address<0x4100440c,0x00000000,0x00000000,unsigned>;
        ///Port Data Direction Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dirtgl{}; 
    }
    namespace PortDirtgl1{    ///<Data Direction Toggle
        using Addr = Register::Address<0x4100448c,0x00000000,0x00000000,unsigned>;
        ///Port Data Direction Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dirtgl{}; 
    }
    namespace PortDirtgl2{    ///<Data Direction Toggle
        using Addr = Register::Address<0x4100450c,0x00000000,0x00000000,unsigned>;
        ///Port Data Direction Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dirtgl{}; 
    }
    namespace PortIn0{    ///<Data Input Value
        using Addr = Register::Address<0x41004420,0x00000000,0x00000000,unsigned>;
        ///Port Data Input Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> in{}; 
    }
    namespace PortIn1{    ///<Data Input Value
        using Addr = Register::Address<0x410044a0,0x00000000,0x00000000,unsigned>;
        ///Port Data Input Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> in{}; 
    }
    namespace PortIn2{    ///<Data Input Value
        using Addr = Register::Address<0x41004520,0x00000000,0x00000000,unsigned>;
        ///Port Data Input Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> in{}; 
    }
    namespace PortOut0{    ///<Data Output Value
        using Addr = Register::Address<0x41004410,0x00000000,0x00000000,unsigned>;
        ///Port Data Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> out{}; 
    }
    namespace PortOut1{    ///<Data Output Value
        using Addr = Register::Address<0x41004490,0x00000000,0x00000000,unsigned>;
        ///Port Data Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> out{}; 
    }
    namespace PortOut2{    ///<Data Output Value
        using Addr = Register::Address<0x41004510,0x00000000,0x00000000,unsigned>;
        ///Port Data Output Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> out{}; 
    }
    namespace PortOutclr0{    ///<Data Output Value Clear
        using Addr = Register::Address<0x41004414,0x00000000,0x00000000,unsigned>;
        ///Port Data Output Value Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> outclr{}; 
    }
    namespace PortOutclr1{    ///<Data Output Value Clear
        using Addr = Register::Address<0x41004494,0x00000000,0x00000000,unsigned>;
        ///Port Data Output Value Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> outclr{}; 
    }
    namespace PortOutclr2{    ///<Data Output Value Clear
        using Addr = Register::Address<0x41004514,0x00000000,0x00000000,unsigned>;
        ///Port Data Output Value Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> outclr{}; 
    }
    namespace PortOutset0{    ///<Data Output Value Set
        using Addr = Register::Address<0x41004418,0x00000000,0x00000000,unsigned>;
        ///Port Data Output Value Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> outset{}; 
    }
    namespace PortOutset1{    ///<Data Output Value Set
        using Addr = Register::Address<0x41004498,0x00000000,0x00000000,unsigned>;
        ///Port Data Output Value Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> outset{}; 
    }
    namespace PortOutset2{    ///<Data Output Value Set
        using Addr = Register::Address<0x41004518,0x00000000,0x00000000,unsigned>;
        ///Port Data Output Value Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> outset{}; 
    }
    namespace PortOuttgl0{    ///<Data Output Value Toggle
        using Addr = Register::Address<0x4100441c,0x00000000,0x00000000,unsigned>;
        ///Port Data Output Value Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> outtgl{}; 
    }
    namespace PortOuttgl1{    ///<Data Output Value Toggle
        using Addr = Register::Address<0x4100449c,0x00000000,0x00000000,unsigned>;
        ///Port Data Output Value Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> outtgl{}; 
    }
    namespace PortOuttgl2{    ///<Data Output Value Toggle
        using Addr = Register::Address<0x4100451c,0x00000000,0x00000000,unsigned>;
        ///Port Data Output Value Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> outtgl{}; 
    }
    namespace PortPincfg00{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x41004440,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg01{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x41004441,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg02{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x41004442,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg03{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x41004443,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg04{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x41004444,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg05{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x41004445,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg06{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x41004446,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg07{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x41004447,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg08{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x41004448,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg09{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x41004449,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg010{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x4100444a,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg011{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x4100444b,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg012{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x4100444c,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg013{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x4100444d,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg014{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x4100444e,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg015{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x4100444f,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg016{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x41004450,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg017{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x41004451,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg018{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x41004452,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg019{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x41004453,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg020{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x41004454,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg021{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x41004455,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg022{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x41004456,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg023{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x41004457,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg024{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x41004458,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg025{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x41004459,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg026{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x4100445a,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg027{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x4100445b,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg028{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x4100445c,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg029{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x4100445d,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg030{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x4100445e,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg031{    ///<Pin Configuration n - Group 0
        using Addr = Register::Address<0x4100445f,0xffffffb8,0x00000000,unsigned char>;
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drvstr{}; 
    }
    namespace PortPincfg10{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044c0,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg11{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044c1,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg12{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044c2,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg13{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044c3,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg14{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044c4,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg15{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044c5,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg16{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044c6,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg17{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044c7,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg18{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044c8,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg19{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044c9,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg110{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044ca,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg111{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044cb,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg112{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044cc,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg113{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044cd,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg114{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044ce,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg115{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044cf,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg116{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044d0,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg117{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044d1,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg118{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044d2,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg119{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044d3,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg120{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044d4,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg121{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044d5,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg122{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044d6,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg123{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044d7,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg124{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044d8,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg125{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044d9,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg126{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044da,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg127{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044db,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg128{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044dc,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg129{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044dd,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg130{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044de,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg131{    ///<Pin Configuration n - Group 1
        using Addr = Register::Address<0x410044df,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg20{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x41004540,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg21{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x41004541,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg22{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x41004542,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg23{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x41004543,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg24{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x41004544,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg25{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x41004545,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg26{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x41004546,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg27{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x41004547,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg28{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x41004548,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg29{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x41004549,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg210{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x4100454a,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg211{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x4100454b,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg212{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x4100454c,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg213{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x4100454d,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg214{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x4100454e,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg215{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x4100454f,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg216{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x41004550,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg217{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x41004551,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg218{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x41004552,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg219{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x41004553,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg220{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x41004554,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg221{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x41004555,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg222{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x41004556,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg223{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x41004557,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg224{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x41004558,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg225{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x41004559,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg226{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x4100455a,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg227{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x4100455b,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg228{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x4100455c,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg229{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x4100455d,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg230{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x4100455e,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPincfg231{    ///<Pin Configuration n - Group 2
        using Addr = Register::Address<0x4100455f,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux00{    ///<Peripheral Multiplexing n - Group 0
        using Addr = Register::Address<0x41004430,0xffffff00,0x00000000,unsigned char>;
        ///Peripheral Multiplexing Even
        enum class PmuxeVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PmuxeVal> pmuxe{}; 
        namespace PmuxeValC{
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::h> h{};
        }
        ///Peripheral Multiplexing Odd
        enum class PmuxoVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,PmuxoVal> pmuxo{}; 
        namespace PmuxoValC{
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::h> h{};
        }
    }
    namespace PortPmux01{    ///<Peripheral Multiplexing n - Group 0
        using Addr = Register::Address<0x41004431,0xffffff00,0x00000000,unsigned char>;
        ///Peripheral Multiplexing Even
        enum class PmuxeVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PmuxeVal> pmuxe{}; 
        namespace PmuxeValC{
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::h> h{};
        }
        ///Peripheral Multiplexing Odd
        enum class PmuxoVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,PmuxoVal> pmuxo{}; 
        namespace PmuxoValC{
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::h> h{};
        }
    }
    namespace PortPmux02{    ///<Peripheral Multiplexing n - Group 0
        using Addr = Register::Address<0x41004432,0xffffff00,0x00000000,unsigned char>;
        ///Peripheral Multiplexing Even
        enum class PmuxeVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PmuxeVal> pmuxe{}; 
        namespace PmuxeValC{
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::h> h{};
        }
        ///Peripheral Multiplexing Odd
        enum class PmuxoVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,PmuxoVal> pmuxo{}; 
        namespace PmuxoValC{
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::h> h{};
        }
    }
    namespace PortPmux03{    ///<Peripheral Multiplexing n - Group 0
        using Addr = Register::Address<0x41004433,0xffffff00,0x00000000,unsigned char>;
        ///Peripheral Multiplexing Even
        enum class PmuxeVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PmuxeVal> pmuxe{}; 
        namespace PmuxeValC{
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::h> h{};
        }
        ///Peripheral Multiplexing Odd
        enum class PmuxoVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,PmuxoVal> pmuxo{}; 
        namespace PmuxoValC{
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::h> h{};
        }
    }
    namespace PortPmux04{    ///<Peripheral Multiplexing n - Group 0
        using Addr = Register::Address<0x41004434,0xffffff00,0x00000000,unsigned char>;
        ///Peripheral Multiplexing Even
        enum class PmuxeVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PmuxeVal> pmuxe{}; 
        namespace PmuxeValC{
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::h> h{};
        }
        ///Peripheral Multiplexing Odd
        enum class PmuxoVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,PmuxoVal> pmuxo{}; 
        namespace PmuxoValC{
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::h> h{};
        }
    }
    namespace PortPmux05{    ///<Peripheral Multiplexing n - Group 0
        using Addr = Register::Address<0x41004435,0xffffff00,0x00000000,unsigned char>;
        ///Peripheral Multiplexing Even
        enum class PmuxeVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PmuxeVal> pmuxe{}; 
        namespace PmuxeValC{
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::h> h{};
        }
        ///Peripheral Multiplexing Odd
        enum class PmuxoVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,PmuxoVal> pmuxo{}; 
        namespace PmuxoValC{
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::h> h{};
        }
    }
    namespace PortPmux06{    ///<Peripheral Multiplexing n - Group 0
        using Addr = Register::Address<0x41004436,0xffffff00,0x00000000,unsigned char>;
        ///Peripheral Multiplexing Even
        enum class PmuxeVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PmuxeVal> pmuxe{}; 
        namespace PmuxeValC{
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::h> h{};
        }
        ///Peripheral Multiplexing Odd
        enum class PmuxoVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,PmuxoVal> pmuxo{}; 
        namespace PmuxoValC{
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::h> h{};
        }
    }
    namespace PortPmux07{    ///<Peripheral Multiplexing n - Group 0
        using Addr = Register::Address<0x41004437,0xffffff00,0x00000000,unsigned char>;
        ///Peripheral Multiplexing Even
        enum class PmuxeVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PmuxeVal> pmuxe{}; 
        namespace PmuxeValC{
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::h> h{};
        }
        ///Peripheral Multiplexing Odd
        enum class PmuxoVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,PmuxoVal> pmuxo{}; 
        namespace PmuxoValC{
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::h> h{};
        }
    }
    namespace PortPmux08{    ///<Peripheral Multiplexing n - Group 0
        using Addr = Register::Address<0x41004438,0xffffff00,0x00000000,unsigned char>;
        ///Peripheral Multiplexing Even
        enum class PmuxeVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PmuxeVal> pmuxe{}; 
        namespace PmuxeValC{
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::h> h{};
        }
        ///Peripheral Multiplexing Odd
        enum class PmuxoVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,PmuxoVal> pmuxo{}; 
        namespace PmuxoValC{
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::h> h{};
        }
    }
    namespace PortPmux09{    ///<Peripheral Multiplexing n - Group 0
        using Addr = Register::Address<0x41004439,0xffffff00,0x00000000,unsigned char>;
        ///Peripheral Multiplexing Even
        enum class PmuxeVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PmuxeVal> pmuxe{}; 
        namespace PmuxeValC{
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::h> h{};
        }
        ///Peripheral Multiplexing Odd
        enum class PmuxoVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,PmuxoVal> pmuxo{}; 
        namespace PmuxoValC{
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::h> h{};
        }
    }
    namespace PortPmux010{    ///<Peripheral Multiplexing n - Group 0
        using Addr = Register::Address<0x4100443a,0xffffff00,0x00000000,unsigned char>;
        ///Peripheral Multiplexing Even
        enum class PmuxeVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PmuxeVal> pmuxe{}; 
        namespace PmuxeValC{
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::h> h{};
        }
        ///Peripheral Multiplexing Odd
        enum class PmuxoVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,PmuxoVal> pmuxo{}; 
        namespace PmuxoValC{
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::h> h{};
        }
    }
    namespace PortPmux011{    ///<Peripheral Multiplexing n - Group 0
        using Addr = Register::Address<0x4100443b,0xffffff00,0x00000000,unsigned char>;
        ///Peripheral Multiplexing Even
        enum class PmuxeVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PmuxeVal> pmuxe{}; 
        namespace PmuxeValC{
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::h> h{};
        }
        ///Peripheral Multiplexing Odd
        enum class PmuxoVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,PmuxoVal> pmuxo{}; 
        namespace PmuxoValC{
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::h> h{};
        }
    }
    namespace PortPmux012{    ///<Peripheral Multiplexing n - Group 0
        using Addr = Register::Address<0x4100443c,0xffffff00,0x00000000,unsigned char>;
        ///Peripheral Multiplexing Even
        enum class PmuxeVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PmuxeVal> pmuxe{}; 
        namespace PmuxeValC{
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::h> h{};
        }
        ///Peripheral Multiplexing Odd
        enum class PmuxoVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,PmuxoVal> pmuxo{}; 
        namespace PmuxoValC{
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::h> h{};
        }
    }
    namespace PortPmux013{    ///<Peripheral Multiplexing n - Group 0
        using Addr = Register::Address<0x4100443d,0xffffff00,0x00000000,unsigned char>;
        ///Peripheral Multiplexing Even
        enum class PmuxeVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PmuxeVal> pmuxe{}; 
        namespace PmuxeValC{
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::h> h{};
        }
        ///Peripheral Multiplexing Odd
        enum class PmuxoVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,PmuxoVal> pmuxo{}; 
        namespace PmuxoValC{
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::h> h{};
        }
    }
    namespace PortPmux014{    ///<Peripheral Multiplexing n - Group 0
        using Addr = Register::Address<0x4100443e,0xffffff00,0x00000000,unsigned char>;
        ///Peripheral Multiplexing Even
        enum class PmuxeVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PmuxeVal> pmuxe{}; 
        namespace PmuxeValC{
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::h> h{};
        }
        ///Peripheral Multiplexing Odd
        enum class PmuxoVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,PmuxoVal> pmuxo{}; 
        namespace PmuxoValC{
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::h> h{};
        }
    }
    namespace PortPmux015{    ///<Peripheral Multiplexing n - Group 0
        using Addr = Register::Address<0x4100443f,0xffffff00,0x00000000,unsigned char>;
        ///Peripheral Multiplexing Even
        enum class PmuxeVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PmuxeVal> pmuxe{}; 
        namespace PmuxeValC{
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxe)::Type,PmuxeVal::h> h{};
        }
        ///Peripheral Multiplexing Odd
        enum class PmuxoVal {
            a=0x00000000,     ///<Peripheral function A selected
            b=0x00000001,     ///<Peripheral function B selected
            c=0x00000002,     ///<Peripheral function C selected
            d=0x00000003,     ///<Peripheral function D selected
            e=0x00000004,     ///<Peripheral function E selected
            f=0x00000005,     ///<Peripheral function F selected
            g=0x00000006,     ///<Peripheral function G selected
            h=0x00000007,     ///<Peripheral function H selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,PmuxoVal> pmuxo{}; 
        namespace PmuxoValC{
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::a> a{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::b> b{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::c> c{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::d> d{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::e> e{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::f> f{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::g> g{};
            constexpr Register::FieldValue<decltype(pmuxo)::Type,PmuxoVal::h> h{};
        }
    }
    namespace PortPmux10{    ///<Peripheral Multiplexing n - Group 1
        using Addr = Register::Address<0x410044b0,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux11{    ///<Peripheral Multiplexing n - Group 1
        using Addr = Register::Address<0x410044b1,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux12{    ///<Peripheral Multiplexing n - Group 1
        using Addr = Register::Address<0x410044b2,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux13{    ///<Peripheral Multiplexing n - Group 1
        using Addr = Register::Address<0x410044b3,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux14{    ///<Peripheral Multiplexing n - Group 1
        using Addr = Register::Address<0x410044b4,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux15{    ///<Peripheral Multiplexing n - Group 1
        using Addr = Register::Address<0x410044b5,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux16{    ///<Peripheral Multiplexing n - Group 1
        using Addr = Register::Address<0x410044b6,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux17{    ///<Peripheral Multiplexing n - Group 1
        using Addr = Register::Address<0x410044b7,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux18{    ///<Peripheral Multiplexing n - Group 1
        using Addr = Register::Address<0x410044b8,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux19{    ///<Peripheral Multiplexing n - Group 1
        using Addr = Register::Address<0x410044b9,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux110{    ///<Peripheral Multiplexing n - Group 1
        using Addr = Register::Address<0x410044ba,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux111{    ///<Peripheral Multiplexing n - Group 1
        using Addr = Register::Address<0x410044bb,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux112{    ///<Peripheral Multiplexing n - Group 1
        using Addr = Register::Address<0x410044bc,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux113{    ///<Peripheral Multiplexing n - Group 1
        using Addr = Register::Address<0x410044bd,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux114{    ///<Peripheral Multiplexing n - Group 1
        using Addr = Register::Address<0x410044be,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux115{    ///<Peripheral Multiplexing n - Group 1
        using Addr = Register::Address<0x410044bf,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux20{    ///<Peripheral Multiplexing n - Group 2
        using Addr = Register::Address<0x41004530,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux21{    ///<Peripheral Multiplexing n - Group 2
        using Addr = Register::Address<0x41004531,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux22{    ///<Peripheral Multiplexing n - Group 2
        using Addr = Register::Address<0x41004532,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux23{    ///<Peripheral Multiplexing n - Group 2
        using Addr = Register::Address<0x41004533,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux24{    ///<Peripheral Multiplexing n - Group 2
        using Addr = Register::Address<0x41004534,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux25{    ///<Peripheral Multiplexing n - Group 2
        using Addr = Register::Address<0x41004535,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux26{    ///<Peripheral Multiplexing n - Group 2
        using Addr = Register::Address<0x41004536,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux27{    ///<Peripheral Multiplexing n - Group 2
        using Addr = Register::Address<0x41004537,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux28{    ///<Peripheral Multiplexing n - Group 2
        using Addr = Register::Address<0x41004538,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux29{    ///<Peripheral Multiplexing n - Group 2
        using Addr = Register::Address<0x41004539,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux210{    ///<Peripheral Multiplexing n - Group 2
        using Addr = Register::Address<0x4100453a,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux211{    ///<Peripheral Multiplexing n - Group 2
        using Addr = Register::Address<0x4100453b,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux212{    ///<Peripheral Multiplexing n - Group 2
        using Addr = Register::Address<0x4100453c,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux213{    ///<Peripheral Multiplexing n - Group 2
        using Addr = Register::Address<0x4100453d,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux214{    ///<Peripheral Multiplexing n - Group 2
        using Addr = Register::Address<0x4100453e,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortPmux215{    ///<Peripheral Multiplexing n - Group 2
        using Addr = Register::Address<0x4100453f,0xffffffff,0x00000000,unsigned>;
    }
    namespace PortWrconfig0{    ///<Write Configuration
        using Addr = Register::Address<0x41004428,0x20b80000,0x00000000,unsigned>;
        ///Pin Mask for Multiple Pin Configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pinmask{}; 
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> drvstr{}; 
        ///Peripheral Multiplexing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> pmux{}; 
        ///Write PMUX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> wrpmux{}; 
        ///Write PINCFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> wrpincfg{}; 
        ///Half-Word Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> hwsel{}; 
    }
    namespace PortWrconfig1{    ///<Write Configuration
        using Addr = Register::Address<0x410044a8,0x20b80000,0x00000000,unsigned>;
        ///Pin Mask for Multiple Pin Configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pinmask{}; 
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> drvstr{}; 
        ///Peripheral Multiplexing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> pmux{}; 
        ///Write PMUX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> wrpmux{}; 
        ///Write PINCFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> wrpincfg{}; 
        ///Half-Word Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> hwsel{}; 
    }
    namespace PortWrconfig2{    ///<Write Configuration
        using Addr = Register::Address<0x41004528,0x20b80000,0x00000000,unsigned>;
        ///Pin Mask for Multiple Pin Configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pinmask{}; 
        ///Peripheral Multiplexer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pmuxen{}; 
        ///Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Pull Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pullen{}; 
        ///Output Driver Strength Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> drvstr{}; 
        ///Peripheral Multiplexing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> pmux{}; 
        ///Write PMUX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> wrpmux{}; 
        ///Write PINCFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> wrpincfg{}; 
        ///Half-Word Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> hwsel{}; 
    }
}
