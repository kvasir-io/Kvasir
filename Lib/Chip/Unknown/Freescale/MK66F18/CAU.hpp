#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Memory Mapped Cryptographic Acceleration Unit (MMCAU)
    namespace NonecauDirect0{    ///<Direct access register 0
        using Addr = Register::Address<0xe0081000,0x00000000,0,unsigned>;
        ///Direct register 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cauDirect0{}; 
    }
    namespace NonecauDirect1{    ///<Direct access register 1
        using Addr = Register::Address<0xe0081004,0x00000000,0,unsigned>;
        ///Direct register 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cauDirect1{}; 
    }
    namespace NonecauDirect2{    ///<Direct access register 2
        using Addr = Register::Address<0xe0081008,0x00000000,0,unsigned>;
        ///Direct register 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cauDirect2{}; 
    }
    namespace NonecauDirect3{    ///<Direct access register 3
        using Addr = Register::Address<0xe008100c,0x00000000,0,unsigned>;
        ///Direct register 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cauDirect3{}; 
    }
    namespace NonecauDirect4{    ///<Direct access register 4
        using Addr = Register::Address<0xe0081010,0x00000000,0,unsigned>;
        ///Direct register 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cauDirect4{}; 
    }
    namespace NonecauDirect5{    ///<Direct access register 5
        using Addr = Register::Address<0xe0081014,0x00000000,0,unsigned>;
        ///Direct register 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cauDirect5{}; 
    }
    namespace NonecauDirect6{    ///<Direct access register 6
        using Addr = Register::Address<0xe0081018,0x00000000,0,unsigned>;
        ///Direct register 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cauDirect6{}; 
    }
    namespace NonecauDirect7{    ///<Direct access register 7
        using Addr = Register::Address<0xe008101c,0x00000000,0,unsigned>;
        ///Direct register 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cauDirect7{}; 
    }
    namespace NonecauDirect8{    ///<Direct access register 8
        using Addr = Register::Address<0xe0081020,0x00000000,0,unsigned>;
        ///Direct register 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cauDirect8{}; 
    }
    namespace NonecauDirect9{    ///<Direct access register 9
        using Addr = Register::Address<0xe0081024,0x00000000,0,unsigned>;
        ///Direct register 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cauDirect9{}; 
    }
    namespace NonecauDirect10{    ///<Direct access register 10
        using Addr = Register::Address<0xe0081028,0x00000000,0,unsigned>;
        ///Direct register 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cauDirect10{}; 
    }
    namespace NonecauDirect11{    ///<Direct access register 11
        using Addr = Register::Address<0xe008102c,0x00000000,0,unsigned>;
        ///Direct register 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cauDirect11{}; 
    }
    namespace NonecauDirect12{    ///<Direct access register 12
        using Addr = Register::Address<0xe0081030,0x00000000,0,unsigned>;
        ///Direct register 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cauDirect12{}; 
    }
    namespace NonecauDirect13{    ///<Direct access register 13
        using Addr = Register::Address<0xe0081034,0x00000000,0,unsigned>;
        ///Direct register 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cauDirect13{}; 
    }
    namespace NonecauDirect14{    ///<Direct access register 14
        using Addr = Register::Address<0xe0081038,0x00000000,0,unsigned>;
        ///Direct register 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cauDirect14{}; 
    }
    namespace NonecauDirect15{    ///<Direct access register 15
        using Addr = Register::Address<0xe008103c,0x00000000,0,unsigned>;
        ///Direct register 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cauDirect15{}; 
    }
    namespace NonecauLdrCasr{    ///<Status register  - Load Register command
        using Addr = Register::Address<0xe0081840,0x0ffffffc,0,unsigned>;
        ///no description available
        enum class IcVal {
            v0=0x00000000,     ///<No illegal commands issued
            v1=0x00000001,     ///<Illegal command issued
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IcVal> ic{}; 
        namespace IcValC{
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v1> v1{};
        }
        ///no description available
        enum class DpeVal {
            v0=0x00000000,     ///<No error detected
            v1=0x00000001,     ///<DES key parity error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DpeVal> dpe{}; 
        namespace DpeValC{
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v1> v1{};
        }
        ///CAU version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> ver{}; 
    }
    namespace NonecauLdrCaa{    ///<Accumulator register - Load Register command
        using Addr = Register::Address<0xe0081844,0x00000000,0,unsigned>;
        ///ACC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> acc{}; 
    }
    namespace NonecauLdrCa0{    ///<General Purpose Register 0 - Load Register command
        using Addr = Register::Address<0xe0081848,0x00000000,0,unsigned>;
        ///CA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca0{}; 
    }
    namespace NonecauLdrCa1{    ///<General Purpose Register 1 - Load Register command
        using Addr = Register::Address<0xe008184c,0x00000000,0,unsigned>;
        ///CA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca1{}; 
    }
    namespace NonecauLdrCa2{    ///<General Purpose Register 2 - Load Register command
        using Addr = Register::Address<0xe0081850,0x00000000,0,unsigned>;
        ///CA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca2{}; 
    }
    namespace NonecauLdrCa3{    ///<General Purpose Register 3 - Load Register command
        using Addr = Register::Address<0xe0081854,0x00000000,0,unsigned>;
        ///CA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca3{}; 
    }
    namespace NonecauLdrCa4{    ///<General Purpose Register 4 - Load Register command
        using Addr = Register::Address<0xe0081858,0x00000000,0,unsigned>;
        ///CA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca4{}; 
    }
    namespace NonecauLdrCa5{    ///<General Purpose Register 5 - Load Register command
        using Addr = Register::Address<0xe008185c,0x00000000,0,unsigned>;
        ///CA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca5{}; 
    }
    namespace NonecauLdrCa6{    ///<General Purpose Register 6 - Load Register command
        using Addr = Register::Address<0xe0081860,0x00000000,0,unsigned>;
        ///CA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca6{}; 
    }
    namespace NonecauLdrCa7{    ///<General Purpose Register 7 - Load Register command
        using Addr = Register::Address<0xe0081864,0x00000000,0,unsigned>;
        ///CA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca7{}; 
    }
    namespace NonecauLdrCa8{    ///<General Purpose Register 8 - Load Register command
        using Addr = Register::Address<0xe0081868,0x00000000,0,unsigned>;
        ///CA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca8{}; 
    }
    namespace NonecauStrCasr{    ///<Status register  - Store Register command
        using Addr = Register::Address<0xe0081880,0x0ffffffc,0,unsigned>;
        ///no description available
        enum class IcVal {
            v0=0x00000000,     ///<No illegal commands issued
            v1=0x00000001,     ///<Illegal command issued
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IcVal> ic{}; 
        namespace IcValC{
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v1> v1{};
        }
        ///no description available
        enum class DpeVal {
            v0=0x00000000,     ///<No error detected
            v1=0x00000001,     ///<DES key parity error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DpeVal> dpe{}; 
        namespace DpeValC{
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v1> v1{};
        }
        ///CAU version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> ver{}; 
    }
    namespace NonecauStrCaa{    ///<Accumulator register - Store Register command
        using Addr = Register::Address<0xe0081884,0x00000000,0,unsigned>;
        ///ACC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> acc{}; 
    }
    namespace NonecauStrCa0{    ///<General Purpose Register 0 - Store Register command
        using Addr = Register::Address<0xe0081888,0x00000000,0,unsigned>;
        ///CA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca0{}; 
    }
    namespace NonecauStrCa1{    ///<General Purpose Register 1 - Store Register command
        using Addr = Register::Address<0xe008188c,0x00000000,0,unsigned>;
        ///CA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca1{}; 
    }
    namespace NonecauStrCa2{    ///<General Purpose Register 2 - Store Register command
        using Addr = Register::Address<0xe0081890,0x00000000,0,unsigned>;
        ///CA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca2{}; 
    }
    namespace NonecauStrCa3{    ///<General Purpose Register 3 - Store Register command
        using Addr = Register::Address<0xe0081894,0x00000000,0,unsigned>;
        ///CA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca3{}; 
    }
    namespace NonecauStrCa4{    ///<General Purpose Register 4 - Store Register command
        using Addr = Register::Address<0xe0081898,0x00000000,0,unsigned>;
        ///CA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca4{}; 
    }
    namespace NonecauStrCa5{    ///<General Purpose Register 5 - Store Register command
        using Addr = Register::Address<0xe008189c,0x00000000,0,unsigned>;
        ///CA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca5{}; 
    }
    namespace NonecauStrCa6{    ///<General Purpose Register 6 - Store Register command
        using Addr = Register::Address<0xe00818a0,0x00000000,0,unsigned>;
        ///CA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca6{}; 
    }
    namespace NonecauStrCa7{    ///<General Purpose Register 7 - Store Register command
        using Addr = Register::Address<0xe00818a4,0x00000000,0,unsigned>;
        ///CA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca7{}; 
    }
    namespace NonecauStrCa8{    ///<General Purpose Register 8 - Store Register command
        using Addr = Register::Address<0xe00818a8,0x00000000,0,unsigned>;
        ///CA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca8{}; 
    }
    namespace NonecauAdrCasr{    ///<Status register  - Add Register command
        using Addr = Register::Address<0xe00818c0,0x0ffffffc,0,unsigned>;
        ///no description available
        enum class IcVal {
            v0=0x00000000,     ///<No illegal commands issued
            v1=0x00000001,     ///<Illegal command issued
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IcVal> ic{}; 
        namespace IcValC{
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v1> v1{};
        }
        ///no description available
        enum class DpeVal {
            v0=0x00000000,     ///<No error detected
            v1=0x00000001,     ///<DES key parity error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DpeVal> dpe{}; 
        namespace DpeValC{
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v1> v1{};
        }
        ///CAU version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> ver{}; 
    }
    namespace NonecauAdrCaa{    ///<Accumulator register - Add to register command
        using Addr = Register::Address<0xe00818c4,0x00000000,0,unsigned>;
        ///ACC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> acc{}; 
    }
    namespace NonecauAdrCa0{    ///<General Purpose Register 0 - Add to register command
        using Addr = Register::Address<0xe00818c8,0x00000000,0,unsigned>;
        ///CA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca0{}; 
    }
    namespace NonecauAdrCa1{    ///<General Purpose Register 1 - Add to register command
        using Addr = Register::Address<0xe00818cc,0x00000000,0,unsigned>;
        ///CA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca1{}; 
    }
    namespace NonecauAdrCa2{    ///<General Purpose Register 2 - Add to register command
        using Addr = Register::Address<0xe00818d0,0x00000000,0,unsigned>;
        ///CA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca2{}; 
    }
    namespace NonecauAdrCa3{    ///<General Purpose Register 3 - Add to register command
        using Addr = Register::Address<0xe00818d4,0x00000000,0,unsigned>;
        ///CA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca3{}; 
    }
    namespace NonecauAdrCa4{    ///<General Purpose Register 4 - Add to register command
        using Addr = Register::Address<0xe00818d8,0x00000000,0,unsigned>;
        ///CA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca4{}; 
    }
    namespace NonecauAdrCa5{    ///<General Purpose Register 5 - Add to register command
        using Addr = Register::Address<0xe00818dc,0x00000000,0,unsigned>;
        ///CA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca5{}; 
    }
    namespace NonecauAdrCa6{    ///<General Purpose Register 6 - Add to register command
        using Addr = Register::Address<0xe00818e0,0x00000000,0,unsigned>;
        ///CA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca6{}; 
    }
    namespace NonecauAdrCa7{    ///<General Purpose Register 7 - Add to register command
        using Addr = Register::Address<0xe00818e4,0x00000000,0,unsigned>;
        ///CA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca7{}; 
    }
    namespace NonecauAdrCa8{    ///<General Purpose Register 8 - Add to register command
        using Addr = Register::Address<0xe00818e8,0x00000000,0,unsigned>;
        ///CA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca8{}; 
    }
    namespace NonecauRadrCasr{    ///<Status register  - Reverse and Add to Register command
        using Addr = Register::Address<0xe0081900,0x0ffffffc,0,unsigned>;
        ///no description available
        enum class IcVal {
            v0=0x00000000,     ///<No illegal commands issued
            v1=0x00000001,     ///<Illegal command issued
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IcVal> ic{}; 
        namespace IcValC{
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v1> v1{};
        }
        ///no description available
        enum class DpeVal {
            v0=0x00000000,     ///<No error detected
            v1=0x00000001,     ///<DES key parity error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DpeVal> dpe{}; 
        namespace DpeValC{
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v1> v1{};
        }
        ///CAU version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> ver{}; 
    }
    namespace NonecauRadrCaa{    ///<Accumulator register - Reverse and Add to Register command
        using Addr = Register::Address<0xe0081904,0x00000000,0,unsigned>;
        ///ACC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> acc{}; 
    }
    namespace NonecauRadrCa0{    ///<General Purpose Register 0 - Reverse and Add to Register command
        using Addr = Register::Address<0xe0081908,0x00000000,0,unsigned>;
        ///CA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca0{}; 
    }
    namespace NonecauRadrCa1{    ///<General Purpose Register 1 - Reverse and Add to Register command
        using Addr = Register::Address<0xe008190c,0x00000000,0,unsigned>;
        ///CA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca1{}; 
    }
    namespace NonecauRadrCa2{    ///<General Purpose Register 2 - Reverse and Add to Register command
        using Addr = Register::Address<0xe0081910,0x00000000,0,unsigned>;
        ///CA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca2{}; 
    }
    namespace NonecauRadrCa3{    ///<General Purpose Register 3 - Reverse and Add to Register command
        using Addr = Register::Address<0xe0081914,0x00000000,0,unsigned>;
        ///CA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca3{}; 
    }
    namespace NonecauRadrCa4{    ///<General Purpose Register 4 - Reverse and Add to Register command
        using Addr = Register::Address<0xe0081918,0x00000000,0,unsigned>;
        ///CA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca4{}; 
    }
    namespace NonecauRadrCa5{    ///<General Purpose Register 5 - Reverse and Add to Register command
        using Addr = Register::Address<0xe008191c,0x00000000,0,unsigned>;
        ///CA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca5{}; 
    }
    namespace NonecauRadrCa6{    ///<General Purpose Register 6 - Reverse and Add to Register command
        using Addr = Register::Address<0xe0081920,0x00000000,0,unsigned>;
        ///CA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca6{}; 
    }
    namespace NonecauRadrCa7{    ///<General Purpose Register 7 - Reverse and Add to Register command
        using Addr = Register::Address<0xe0081924,0x00000000,0,unsigned>;
        ///CA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca7{}; 
    }
    namespace NonecauRadrCa8{    ///<General Purpose Register 8 - Reverse and Add to Register command
        using Addr = Register::Address<0xe0081928,0x00000000,0,unsigned>;
        ///CA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca8{}; 
    }
    namespace NonecauXorCasr{    ///<Status register  - Exclusive Or command
        using Addr = Register::Address<0xe0081980,0x0ffffffc,0,unsigned>;
        ///no description available
        enum class IcVal {
            v0=0x00000000,     ///<No illegal commands issued
            v1=0x00000001,     ///<Illegal command issued
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IcVal> ic{}; 
        namespace IcValC{
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v1> v1{};
        }
        ///no description available
        enum class DpeVal {
            v0=0x00000000,     ///<No error detected
            v1=0x00000001,     ///<DES key parity error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DpeVal> dpe{}; 
        namespace DpeValC{
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v1> v1{};
        }
        ///CAU version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> ver{}; 
    }
    namespace NonecauXorCaa{    ///<Accumulator register - Exclusive Or command
        using Addr = Register::Address<0xe0081984,0x00000000,0,unsigned>;
        ///ACC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> acc{}; 
    }
    namespace NonecauXorCa0{    ///<General Purpose Register 0 - Exclusive Or command
        using Addr = Register::Address<0xe0081988,0x00000000,0,unsigned>;
        ///CA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca0{}; 
    }
    namespace NonecauXorCa1{    ///<General Purpose Register 1 - Exclusive Or command
        using Addr = Register::Address<0xe008198c,0x00000000,0,unsigned>;
        ///CA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca1{}; 
    }
    namespace NonecauXorCa2{    ///<General Purpose Register 2 - Exclusive Or command
        using Addr = Register::Address<0xe0081990,0x00000000,0,unsigned>;
        ///CA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca2{}; 
    }
    namespace NonecauXorCa3{    ///<General Purpose Register 3 - Exclusive Or command
        using Addr = Register::Address<0xe0081994,0x00000000,0,unsigned>;
        ///CA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca3{}; 
    }
    namespace NonecauXorCa4{    ///<General Purpose Register 4 - Exclusive Or command
        using Addr = Register::Address<0xe0081998,0x00000000,0,unsigned>;
        ///CA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca4{}; 
    }
    namespace NonecauXorCa5{    ///<General Purpose Register 5 - Exclusive Or command
        using Addr = Register::Address<0xe008199c,0x00000000,0,unsigned>;
        ///CA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca5{}; 
    }
    namespace NonecauXorCa6{    ///<General Purpose Register 6 - Exclusive Or command
        using Addr = Register::Address<0xe00819a0,0x00000000,0,unsigned>;
        ///CA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca6{}; 
    }
    namespace NonecauXorCa7{    ///<General Purpose Register 7 - Exclusive Or command
        using Addr = Register::Address<0xe00819a4,0x00000000,0,unsigned>;
        ///CA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca7{}; 
    }
    namespace NonecauXorCa8{    ///<General Purpose Register 8 - Exclusive Or command
        using Addr = Register::Address<0xe00819a8,0x00000000,0,unsigned>;
        ///CA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca8{}; 
    }
    namespace NonecauRotlCasr{    ///<Status register  - Rotate Left command
        using Addr = Register::Address<0xe00819c0,0x0ffffffc,0,unsigned>;
        ///no description available
        enum class IcVal {
            v0=0x00000000,     ///<No illegal commands issued
            v1=0x00000001,     ///<Illegal command issued
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IcVal> ic{}; 
        namespace IcValC{
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v1> v1{};
        }
        ///no description available
        enum class DpeVal {
            v0=0x00000000,     ///<No error detected
            v1=0x00000001,     ///<DES key parity error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DpeVal> dpe{}; 
        namespace DpeValC{
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v1> v1{};
        }
        ///CAU version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> ver{}; 
    }
    namespace NonecauRotlCaa{    ///<Accumulator register - Rotate Left command
        using Addr = Register::Address<0xe00819c4,0x00000000,0,unsigned>;
        ///ACC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> acc{}; 
    }
    namespace NonecauRotlCa0{    ///<General Purpose Register 0 - Rotate Left command
        using Addr = Register::Address<0xe00819c8,0x00000000,0,unsigned>;
        ///CA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca0{}; 
    }
    namespace NonecauRotlCa1{    ///<General Purpose Register 1 - Rotate Left command
        using Addr = Register::Address<0xe00819cc,0x00000000,0,unsigned>;
        ///CA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca1{}; 
    }
    namespace NonecauRotlCa2{    ///<General Purpose Register 2 - Rotate Left command
        using Addr = Register::Address<0xe00819d0,0x00000000,0,unsigned>;
        ///CA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca2{}; 
    }
    namespace NonecauRotlCa3{    ///<General Purpose Register 3 - Rotate Left command
        using Addr = Register::Address<0xe00819d4,0x00000000,0,unsigned>;
        ///CA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca3{}; 
    }
    namespace NonecauRotlCa4{    ///<General Purpose Register 4 - Rotate Left command
        using Addr = Register::Address<0xe00819d8,0x00000000,0,unsigned>;
        ///CA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca4{}; 
    }
    namespace NonecauRotlCa5{    ///<General Purpose Register 5 - Rotate Left command
        using Addr = Register::Address<0xe00819dc,0x00000000,0,unsigned>;
        ///CA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca5{}; 
    }
    namespace NonecauRotlCa6{    ///<General Purpose Register 6 - Rotate Left command
        using Addr = Register::Address<0xe00819e0,0x00000000,0,unsigned>;
        ///CA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca6{}; 
    }
    namespace NonecauRotlCa7{    ///<General Purpose Register 7 - Rotate Left command
        using Addr = Register::Address<0xe00819e4,0x00000000,0,unsigned>;
        ///CA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca7{}; 
    }
    namespace NonecauRotlCa8{    ///<General Purpose Register 8 - Rotate Left command
        using Addr = Register::Address<0xe00819e8,0x00000000,0,unsigned>;
        ///CA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca8{}; 
    }
    namespace NonecauAescCasr{    ///<Status register  - AES Column Operation command
        using Addr = Register::Address<0xe0081b00,0x0ffffffc,0,unsigned>;
        ///no description available
        enum class IcVal {
            v0=0x00000000,     ///<No illegal commands issued
            v1=0x00000001,     ///<Illegal command issued
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IcVal> ic{}; 
        namespace IcValC{
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v1> v1{};
        }
        ///no description available
        enum class DpeVal {
            v0=0x00000000,     ///<No error detected
            v1=0x00000001,     ///<DES key parity error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DpeVal> dpe{}; 
        namespace DpeValC{
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v1> v1{};
        }
        ///CAU version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> ver{}; 
    }
    namespace NonecauAescCaa{    ///<Accumulator register - AES Column Operation command
        using Addr = Register::Address<0xe0081b04,0x00000000,0,unsigned>;
        ///ACC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> acc{}; 
    }
    namespace NonecauAescCa0{    ///<General Purpose Register 0 - AES Column Operation command
        using Addr = Register::Address<0xe0081b08,0x00000000,0,unsigned>;
        ///CA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca0{}; 
    }
    namespace NonecauAescCa1{    ///<General Purpose Register 1 - AES Column Operation command
        using Addr = Register::Address<0xe0081b0c,0x00000000,0,unsigned>;
        ///CA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca1{}; 
    }
    namespace NonecauAescCa2{    ///<General Purpose Register 2 - AES Column Operation command
        using Addr = Register::Address<0xe0081b10,0x00000000,0,unsigned>;
        ///CA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca2{}; 
    }
    namespace NonecauAescCa3{    ///<General Purpose Register 3 - AES Column Operation command
        using Addr = Register::Address<0xe0081b14,0x00000000,0,unsigned>;
        ///CA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca3{}; 
    }
    namespace NonecauAescCa4{    ///<General Purpose Register 4 - AES Column Operation command
        using Addr = Register::Address<0xe0081b18,0x00000000,0,unsigned>;
        ///CA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca4{}; 
    }
    namespace NonecauAescCa5{    ///<General Purpose Register 5 - AES Column Operation command
        using Addr = Register::Address<0xe0081b1c,0x00000000,0,unsigned>;
        ///CA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca5{}; 
    }
    namespace NonecauAescCa6{    ///<General Purpose Register 6 - AES Column Operation command
        using Addr = Register::Address<0xe0081b20,0x00000000,0,unsigned>;
        ///CA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca6{}; 
    }
    namespace NonecauAescCa7{    ///<General Purpose Register 7 - AES Column Operation command
        using Addr = Register::Address<0xe0081b24,0x00000000,0,unsigned>;
        ///CA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca7{}; 
    }
    namespace NonecauAescCa8{    ///<General Purpose Register 8 - AES Column Operation command
        using Addr = Register::Address<0xe0081b28,0x00000000,0,unsigned>;
        ///CA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca8{}; 
    }
    namespace NonecauAesicCasr{    ///<Status register  - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b40,0x0ffffffc,0,unsigned>;
        ///no description available
        enum class IcVal {
            v0=0x00000000,     ///<No illegal commands issued
            v1=0x00000001,     ///<Illegal command issued
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IcVal> ic{}; 
        namespace IcValC{
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v1> v1{};
        }
        ///no description available
        enum class DpeVal {
            v0=0x00000000,     ///<No error detected
            v1=0x00000001,     ///<DES key parity error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DpeVal> dpe{}; 
        namespace DpeValC{
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v1> v1{};
        }
        ///CAU version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> ver{}; 
    }
    namespace NonecauAesicCaa{    ///<Accumulator register - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b44,0x00000000,0,unsigned>;
        ///ACC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> acc{}; 
    }
    namespace NonecauAesicCa0{    ///<General Purpose Register 0 - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b48,0x00000000,0,unsigned>;
        ///CA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca0{}; 
    }
    namespace NonecauAesicCa1{    ///<General Purpose Register 1 - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b4c,0x00000000,0,unsigned>;
        ///CA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca1{}; 
    }
    namespace NonecauAesicCa2{    ///<General Purpose Register 2 - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b50,0x00000000,0,unsigned>;
        ///CA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca2{}; 
    }
    namespace NonecauAesicCa3{    ///<General Purpose Register 3 - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b54,0x00000000,0,unsigned>;
        ///CA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca3{}; 
    }
    namespace NonecauAesicCa4{    ///<General Purpose Register 4 - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b58,0x00000000,0,unsigned>;
        ///CA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca4{}; 
    }
    namespace NonecauAesicCa5{    ///<General Purpose Register 5 - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b5c,0x00000000,0,unsigned>;
        ///CA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca5{}; 
    }
    namespace NonecauAesicCa6{    ///<General Purpose Register 6 - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b60,0x00000000,0,unsigned>;
        ///CA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca6{}; 
    }
    namespace NonecauAesicCa7{    ///<General Purpose Register 7 - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b64,0x00000000,0,unsigned>;
        ///CA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca7{}; 
    }
    namespace NonecauAesicCa8{    ///<General Purpose Register 8 - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b68,0x00000000,0,unsigned>;
        ///CA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ca8{}; 
    }
}
