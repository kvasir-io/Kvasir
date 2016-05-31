#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Memory Mapped Cryptographic Acceleration Unit (MMCAU)
    namespace CauCauDirect0{    ///<Direct access register 0
        using Addr = Register::Address<0xe0081000,0x00000000,0x00000000,unsigned>;
        ///Direct register 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cauDirect0{}; 
    }
    namespace CauCauDirect1{    ///<Direct access register 1
        using Addr = Register::Address<0xe0081004,0x00000000,0x00000000,unsigned>;
        ///Direct register 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cauDirect1{}; 
    }
    namespace CauCauDirect2{    ///<Direct access register 2
        using Addr = Register::Address<0xe0081008,0x00000000,0x00000000,unsigned>;
        ///Direct register 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cauDirect2{}; 
    }
    namespace CauCauDirect3{    ///<Direct access register 3
        using Addr = Register::Address<0xe008100c,0x00000000,0x00000000,unsigned>;
        ///Direct register 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cauDirect3{}; 
    }
    namespace CauCauDirect4{    ///<Direct access register 4
        using Addr = Register::Address<0xe0081010,0x00000000,0x00000000,unsigned>;
        ///Direct register 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cauDirect4{}; 
    }
    namespace CauCauDirect5{    ///<Direct access register 5
        using Addr = Register::Address<0xe0081014,0x00000000,0x00000000,unsigned>;
        ///Direct register 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cauDirect5{}; 
    }
    namespace CauCauDirect6{    ///<Direct access register 6
        using Addr = Register::Address<0xe0081018,0x00000000,0x00000000,unsigned>;
        ///Direct register 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cauDirect6{}; 
    }
    namespace CauCauDirect7{    ///<Direct access register 7
        using Addr = Register::Address<0xe008101c,0x00000000,0x00000000,unsigned>;
        ///Direct register 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cauDirect7{}; 
    }
    namespace CauCauDirect8{    ///<Direct access register 8
        using Addr = Register::Address<0xe0081020,0x00000000,0x00000000,unsigned>;
        ///Direct register 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cauDirect8{}; 
    }
    namespace CauCauDirect9{    ///<Direct access register 9
        using Addr = Register::Address<0xe0081024,0x00000000,0x00000000,unsigned>;
        ///Direct register 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cauDirect9{}; 
    }
    namespace CauCauDirect10{    ///<Direct access register 10
        using Addr = Register::Address<0xe0081028,0x00000000,0x00000000,unsigned>;
        ///Direct register 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cauDirect10{}; 
    }
    namespace CauCauDirect11{    ///<Direct access register 11
        using Addr = Register::Address<0xe008102c,0x00000000,0x00000000,unsigned>;
        ///Direct register 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cauDirect11{}; 
    }
    namespace CauCauDirect12{    ///<Direct access register 12
        using Addr = Register::Address<0xe0081030,0x00000000,0x00000000,unsigned>;
        ///Direct register 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cauDirect12{}; 
    }
    namespace CauCauDirect13{    ///<Direct access register 13
        using Addr = Register::Address<0xe0081034,0x00000000,0x00000000,unsigned>;
        ///Direct register 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cauDirect13{}; 
    }
    namespace CauCauDirect14{    ///<Direct access register 14
        using Addr = Register::Address<0xe0081038,0x00000000,0x00000000,unsigned>;
        ///Direct register 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cauDirect14{}; 
    }
    namespace CauCauDirect15{    ///<Direct access register 15
        using Addr = Register::Address<0xe008103c,0x00000000,0x00000000,unsigned>;
        ///Direct register 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cauDirect15{}; 
    }
    namespace CauCauLdrCasr{    ///<Status register - Load Register command
        using Addr = Register::Address<0xe0081840,0x0ffffffc,0x00000000,unsigned>;
        ///no description available
        enum class IcVal {
            v0=0x00000000,     ///<No illegal commands issued
            v1=0x00000001,     ///<Illegal command issued
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,IcVal> ic{}; 
        namespace IcValC{
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v1> v1{};
        }
        ///no description available
        enum class DpeVal {
            v0=0x00000000,     ///<No error detected
            v1=0x00000001,     ///<DES key parity error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DpeVal> dpe{}; 
        namespace DpeValC{
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v1> v1{};
        }
        ///CAU version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ver{}; 
    }
    namespace CauCauLdrCaa{    ///<Accumulator register - Load Register command
        using Addr = Register::Address<0xe0081844,0x00000000,0x00000000,unsigned>;
        ///ACC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> acc{}; 
    }
    namespace CauCauLdrCa0{    ///<General Purpose Register 0 - Load Register command
        using Addr = Register::Address<0xe0081848,0x00000000,0x00000000,unsigned>;
        ///CA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca0{}; 
    }
    namespace CauCauLdrCa1{    ///<General Purpose Register 1 - Load Register command
        using Addr = Register::Address<0xe008184c,0x00000000,0x00000000,unsigned>;
        ///CA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca1{}; 
    }
    namespace CauCauLdrCa2{    ///<General Purpose Register 2 - Load Register command
        using Addr = Register::Address<0xe0081850,0x00000000,0x00000000,unsigned>;
        ///CA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca2{}; 
    }
    namespace CauCauLdrCa3{    ///<General Purpose Register 3 - Load Register command
        using Addr = Register::Address<0xe0081854,0x00000000,0x00000000,unsigned>;
        ///CA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca3{}; 
    }
    namespace CauCauLdrCa4{    ///<General Purpose Register 4 - Load Register command
        using Addr = Register::Address<0xe0081858,0x00000000,0x00000000,unsigned>;
        ///CA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca4{}; 
    }
    namespace CauCauLdrCa5{    ///<General Purpose Register 5 - Load Register command
        using Addr = Register::Address<0xe008185c,0x00000000,0x00000000,unsigned>;
        ///CA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca5{}; 
    }
    namespace CauCauLdrCa6{    ///<General Purpose Register 6 - Load Register command
        using Addr = Register::Address<0xe0081860,0x00000000,0x00000000,unsigned>;
        ///CA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca6{}; 
    }
    namespace CauCauLdrCa7{    ///<General Purpose Register 7 - Load Register command
        using Addr = Register::Address<0xe0081864,0x00000000,0x00000000,unsigned>;
        ///CA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca7{}; 
    }
    namespace CauCauLdrCa8{    ///<General Purpose Register 8 - Load Register command
        using Addr = Register::Address<0xe0081868,0x00000000,0x00000000,unsigned>;
        ///CA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca8{}; 
    }
    namespace CauCauStrCasr{    ///<Status register - Store Register command
        using Addr = Register::Address<0xe0081880,0x0ffffffc,0x00000000,unsigned>;
        ///no description available
        enum class IcVal {
            v0=0x00000000,     ///<No illegal commands issued
            v1=0x00000001,     ///<Illegal command issued
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,IcVal> ic{}; 
        namespace IcValC{
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v1> v1{};
        }
        ///no description available
        enum class DpeVal {
            v0=0x00000000,     ///<No error detected
            v1=0x00000001,     ///<DES key parity error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DpeVal> dpe{}; 
        namespace DpeValC{
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v1> v1{};
        }
        ///CAU version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ver{}; 
    }
    namespace CauCauStrCaa{    ///<Accumulator register - Store Register command
        using Addr = Register::Address<0xe0081884,0x00000000,0x00000000,unsigned>;
        ///ACC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> acc{}; 
    }
    namespace CauCauStrCa0{    ///<General Purpose Register 0 - Store Register command
        using Addr = Register::Address<0xe0081888,0x00000000,0x00000000,unsigned>;
        ///CA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca0{}; 
    }
    namespace CauCauStrCa1{    ///<General Purpose Register 1 - Store Register command
        using Addr = Register::Address<0xe008188c,0x00000000,0x00000000,unsigned>;
        ///CA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca1{}; 
    }
    namespace CauCauStrCa2{    ///<General Purpose Register 2 - Store Register command
        using Addr = Register::Address<0xe0081890,0x00000000,0x00000000,unsigned>;
        ///CA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca2{}; 
    }
    namespace CauCauStrCa3{    ///<General Purpose Register 3 - Store Register command
        using Addr = Register::Address<0xe0081894,0x00000000,0x00000000,unsigned>;
        ///CA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca3{}; 
    }
    namespace CauCauStrCa4{    ///<General Purpose Register 4 - Store Register command
        using Addr = Register::Address<0xe0081898,0x00000000,0x00000000,unsigned>;
        ///CA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca4{}; 
    }
    namespace CauCauStrCa5{    ///<General Purpose Register 5 - Store Register command
        using Addr = Register::Address<0xe008189c,0x00000000,0x00000000,unsigned>;
        ///CA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca5{}; 
    }
    namespace CauCauStrCa6{    ///<General Purpose Register 6 - Store Register command
        using Addr = Register::Address<0xe00818a0,0x00000000,0x00000000,unsigned>;
        ///CA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca6{}; 
    }
    namespace CauCauStrCa7{    ///<General Purpose Register 7 - Store Register command
        using Addr = Register::Address<0xe00818a4,0x00000000,0x00000000,unsigned>;
        ///CA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca7{}; 
    }
    namespace CauCauStrCa8{    ///<General Purpose Register 8 - Store Register command
        using Addr = Register::Address<0xe00818a8,0x00000000,0x00000000,unsigned>;
        ///CA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca8{}; 
    }
    namespace CauCauAdrCasr{    ///<Status register - Add Register command
        using Addr = Register::Address<0xe00818c0,0x0ffffffc,0x00000000,unsigned>;
        ///no description available
        enum class IcVal {
            v0=0x00000000,     ///<No illegal commands issued
            v1=0x00000001,     ///<Illegal command issued
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,IcVal> ic{}; 
        namespace IcValC{
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v1> v1{};
        }
        ///no description available
        enum class DpeVal {
            v0=0x00000000,     ///<No error detected
            v1=0x00000001,     ///<DES key parity error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DpeVal> dpe{}; 
        namespace DpeValC{
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v1> v1{};
        }
        ///CAU version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ver{}; 
    }
    namespace CauCauAdrCaa{    ///<Accumulator register - Add to register command
        using Addr = Register::Address<0xe00818c4,0x00000000,0x00000000,unsigned>;
        ///ACC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> acc{}; 
    }
    namespace CauCauAdrCa0{    ///<General Purpose Register 0 - Add to register command
        using Addr = Register::Address<0xe00818c8,0x00000000,0x00000000,unsigned>;
        ///CA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca0{}; 
    }
    namespace CauCauAdrCa1{    ///<General Purpose Register 1 - Add to register command
        using Addr = Register::Address<0xe00818cc,0x00000000,0x00000000,unsigned>;
        ///CA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca1{}; 
    }
    namespace CauCauAdrCa2{    ///<General Purpose Register 2 - Add to register command
        using Addr = Register::Address<0xe00818d0,0x00000000,0x00000000,unsigned>;
        ///CA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca2{}; 
    }
    namespace CauCauAdrCa3{    ///<General Purpose Register 3 - Add to register command
        using Addr = Register::Address<0xe00818d4,0x00000000,0x00000000,unsigned>;
        ///CA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca3{}; 
    }
    namespace CauCauAdrCa4{    ///<General Purpose Register 4 - Add to register command
        using Addr = Register::Address<0xe00818d8,0x00000000,0x00000000,unsigned>;
        ///CA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca4{}; 
    }
    namespace CauCauAdrCa5{    ///<General Purpose Register 5 - Add to register command
        using Addr = Register::Address<0xe00818dc,0x00000000,0x00000000,unsigned>;
        ///CA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca5{}; 
    }
    namespace CauCauAdrCa6{    ///<General Purpose Register 6 - Add to register command
        using Addr = Register::Address<0xe00818e0,0x00000000,0x00000000,unsigned>;
        ///CA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca6{}; 
    }
    namespace CauCauAdrCa7{    ///<General Purpose Register 7 - Add to register command
        using Addr = Register::Address<0xe00818e4,0x00000000,0x00000000,unsigned>;
        ///CA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca7{}; 
    }
    namespace CauCauAdrCa8{    ///<General Purpose Register 8 - Add to register command
        using Addr = Register::Address<0xe00818e8,0x00000000,0x00000000,unsigned>;
        ///CA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca8{}; 
    }
    namespace CauCauRadrCasr{    ///<Status register - Reverse and Add to Register command
        using Addr = Register::Address<0xe0081900,0x0ffffffc,0x00000000,unsigned>;
        ///no description available
        enum class IcVal {
            v0=0x00000000,     ///<No illegal commands issued
            v1=0x00000001,     ///<Illegal command issued
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,IcVal> ic{}; 
        namespace IcValC{
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v1> v1{};
        }
        ///no description available
        enum class DpeVal {
            v0=0x00000000,     ///<No error detected
            v1=0x00000001,     ///<DES key parity error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DpeVal> dpe{}; 
        namespace DpeValC{
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v1> v1{};
        }
        ///CAU version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ver{}; 
    }
    namespace CauCauRadrCaa{    ///<Accumulator register - Reverse and Add to Register command
        using Addr = Register::Address<0xe0081904,0x00000000,0x00000000,unsigned>;
        ///ACC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> acc{}; 
    }
    namespace CauCauRadrCa0{    ///<General Purpose Register 0 - Reverse and Add to Register command
        using Addr = Register::Address<0xe0081908,0x00000000,0x00000000,unsigned>;
        ///CA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca0{}; 
    }
    namespace CauCauRadrCa1{    ///<General Purpose Register 1 - Reverse and Add to Register command
        using Addr = Register::Address<0xe008190c,0x00000000,0x00000000,unsigned>;
        ///CA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca1{}; 
    }
    namespace CauCauRadrCa2{    ///<General Purpose Register 2 - Reverse and Add to Register command
        using Addr = Register::Address<0xe0081910,0x00000000,0x00000000,unsigned>;
        ///CA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca2{}; 
    }
    namespace CauCauRadrCa3{    ///<General Purpose Register 3 - Reverse and Add to Register command
        using Addr = Register::Address<0xe0081914,0x00000000,0x00000000,unsigned>;
        ///CA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca3{}; 
    }
    namespace CauCauRadrCa4{    ///<General Purpose Register 4 - Reverse and Add to Register command
        using Addr = Register::Address<0xe0081918,0x00000000,0x00000000,unsigned>;
        ///CA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca4{}; 
    }
    namespace CauCauRadrCa5{    ///<General Purpose Register 5 - Reverse and Add to Register command
        using Addr = Register::Address<0xe008191c,0x00000000,0x00000000,unsigned>;
        ///CA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca5{}; 
    }
    namespace CauCauRadrCa6{    ///<General Purpose Register 6 - Reverse and Add to Register command
        using Addr = Register::Address<0xe0081920,0x00000000,0x00000000,unsigned>;
        ///CA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca6{}; 
    }
    namespace CauCauRadrCa7{    ///<General Purpose Register 7 - Reverse and Add to Register command
        using Addr = Register::Address<0xe0081924,0x00000000,0x00000000,unsigned>;
        ///CA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca7{}; 
    }
    namespace CauCauRadrCa8{    ///<General Purpose Register 8 - Reverse and Add to Register command
        using Addr = Register::Address<0xe0081928,0x00000000,0x00000000,unsigned>;
        ///CA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca8{}; 
    }
    namespace CauCauXorCasr{    ///<Status register - Exclusive Or command
        using Addr = Register::Address<0xe0081980,0x0ffffffc,0x00000000,unsigned>;
        ///no description available
        enum class IcVal {
            v0=0x00000000,     ///<No illegal commands issued
            v1=0x00000001,     ///<Illegal command issued
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,IcVal> ic{}; 
        namespace IcValC{
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v1> v1{};
        }
        ///no description available
        enum class DpeVal {
            v0=0x00000000,     ///<No error detected
            v1=0x00000001,     ///<DES key parity error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DpeVal> dpe{}; 
        namespace DpeValC{
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v1> v1{};
        }
        ///CAU version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ver{}; 
    }
    namespace CauCauXorCaa{    ///<Accumulator register - Exclusive Or command
        using Addr = Register::Address<0xe0081984,0x00000000,0x00000000,unsigned>;
        ///ACC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> acc{}; 
    }
    namespace CauCauXorCa0{    ///<General Purpose Register 0 - Exclusive Or command
        using Addr = Register::Address<0xe0081988,0x00000000,0x00000000,unsigned>;
        ///CA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca0{}; 
    }
    namespace CauCauXorCa1{    ///<General Purpose Register 1 - Exclusive Or command
        using Addr = Register::Address<0xe008198c,0x00000000,0x00000000,unsigned>;
        ///CA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca1{}; 
    }
    namespace CauCauXorCa2{    ///<General Purpose Register 2 - Exclusive Or command
        using Addr = Register::Address<0xe0081990,0x00000000,0x00000000,unsigned>;
        ///CA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca2{}; 
    }
    namespace CauCauXorCa3{    ///<General Purpose Register 3 - Exclusive Or command
        using Addr = Register::Address<0xe0081994,0x00000000,0x00000000,unsigned>;
        ///CA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca3{}; 
    }
    namespace CauCauXorCa4{    ///<General Purpose Register 4 - Exclusive Or command
        using Addr = Register::Address<0xe0081998,0x00000000,0x00000000,unsigned>;
        ///CA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca4{}; 
    }
    namespace CauCauXorCa5{    ///<General Purpose Register 5 - Exclusive Or command
        using Addr = Register::Address<0xe008199c,0x00000000,0x00000000,unsigned>;
        ///CA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca5{}; 
    }
    namespace CauCauXorCa6{    ///<General Purpose Register 6 - Exclusive Or command
        using Addr = Register::Address<0xe00819a0,0x00000000,0x00000000,unsigned>;
        ///CA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca6{}; 
    }
    namespace CauCauXorCa7{    ///<General Purpose Register 7 - Exclusive Or command
        using Addr = Register::Address<0xe00819a4,0x00000000,0x00000000,unsigned>;
        ///CA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca7{}; 
    }
    namespace CauCauXorCa8{    ///<General Purpose Register 8 - Exclusive Or command
        using Addr = Register::Address<0xe00819a8,0x00000000,0x00000000,unsigned>;
        ///CA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca8{}; 
    }
    namespace CauCauRotlCasr{    ///<Status register - Rotate Left command
        using Addr = Register::Address<0xe00819c0,0x0ffffffc,0x00000000,unsigned>;
        ///no description available
        enum class IcVal {
            v0=0x00000000,     ///<No illegal commands issued
            v1=0x00000001,     ///<Illegal command issued
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,IcVal> ic{}; 
        namespace IcValC{
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v1> v1{};
        }
        ///no description available
        enum class DpeVal {
            v0=0x00000000,     ///<No error detected
            v1=0x00000001,     ///<DES key parity error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DpeVal> dpe{}; 
        namespace DpeValC{
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v1> v1{};
        }
        ///CAU version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ver{}; 
    }
    namespace CauCauRotlCaa{    ///<Accumulator register - Rotate Left command
        using Addr = Register::Address<0xe00819c4,0x00000000,0x00000000,unsigned>;
        ///ACC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> acc{}; 
    }
    namespace CauCauRotlCa0{    ///<General Purpose Register 0 - Rotate Left command
        using Addr = Register::Address<0xe00819c8,0x00000000,0x00000000,unsigned>;
        ///CA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca0{}; 
    }
    namespace CauCauRotlCa1{    ///<General Purpose Register 1 - Rotate Left command
        using Addr = Register::Address<0xe00819cc,0x00000000,0x00000000,unsigned>;
        ///CA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca1{}; 
    }
    namespace CauCauRotlCa2{    ///<General Purpose Register 2 - Rotate Left command
        using Addr = Register::Address<0xe00819d0,0x00000000,0x00000000,unsigned>;
        ///CA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca2{}; 
    }
    namespace CauCauRotlCa3{    ///<General Purpose Register 3 - Rotate Left command
        using Addr = Register::Address<0xe00819d4,0x00000000,0x00000000,unsigned>;
        ///CA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca3{}; 
    }
    namespace CauCauRotlCa4{    ///<General Purpose Register 4 - Rotate Left command
        using Addr = Register::Address<0xe00819d8,0x00000000,0x00000000,unsigned>;
        ///CA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca4{}; 
    }
    namespace CauCauRotlCa5{    ///<General Purpose Register 5 - Rotate Left command
        using Addr = Register::Address<0xe00819dc,0x00000000,0x00000000,unsigned>;
        ///CA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca5{}; 
    }
    namespace CauCauRotlCa6{    ///<General Purpose Register 6 - Rotate Left command
        using Addr = Register::Address<0xe00819e0,0x00000000,0x00000000,unsigned>;
        ///CA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca6{}; 
    }
    namespace CauCauRotlCa7{    ///<General Purpose Register 7 - Rotate Left command
        using Addr = Register::Address<0xe00819e4,0x00000000,0x00000000,unsigned>;
        ///CA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca7{}; 
    }
    namespace CauCauRotlCa8{    ///<General Purpose Register 8 - Rotate Left command
        using Addr = Register::Address<0xe00819e8,0x00000000,0x00000000,unsigned>;
        ///CA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca8{}; 
    }
    namespace CauCauAescCasr{    ///<Status register - AES Column Operation command
        using Addr = Register::Address<0xe0081b00,0x0ffffffc,0x00000000,unsigned>;
        ///no description available
        enum class IcVal {
            v0=0x00000000,     ///<No illegal commands issued
            v1=0x00000001,     ///<Illegal command issued
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,IcVal> ic{}; 
        namespace IcValC{
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v1> v1{};
        }
        ///no description available
        enum class DpeVal {
            v0=0x00000000,     ///<No error detected
            v1=0x00000001,     ///<DES key parity error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DpeVal> dpe{}; 
        namespace DpeValC{
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v1> v1{};
        }
        ///CAU version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ver{}; 
    }
    namespace CauCauAescCaa{    ///<Accumulator register - AES Column Operation command
        using Addr = Register::Address<0xe0081b04,0x00000000,0x00000000,unsigned>;
        ///ACC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> acc{}; 
    }
    namespace CauCauAescCa0{    ///<General Purpose Register 0 - AES Column Operation command
        using Addr = Register::Address<0xe0081b08,0x00000000,0x00000000,unsigned>;
        ///CA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca0{}; 
    }
    namespace CauCauAescCa1{    ///<General Purpose Register 1 - AES Column Operation command
        using Addr = Register::Address<0xe0081b0c,0x00000000,0x00000000,unsigned>;
        ///CA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca1{}; 
    }
    namespace CauCauAescCa2{    ///<General Purpose Register 2 - AES Column Operation command
        using Addr = Register::Address<0xe0081b10,0x00000000,0x00000000,unsigned>;
        ///CA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca2{}; 
    }
    namespace CauCauAescCa3{    ///<General Purpose Register 3 - AES Column Operation command
        using Addr = Register::Address<0xe0081b14,0x00000000,0x00000000,unsigned>;
        ///CA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca3{}; 
    }
    namespace CauCauAescCa4{    ///<General Purpose Register 4 - AES Column Operation command
        using Addr = Register::Address<0xe0081b18,0x00000000,0x00000000,unsigned>;
        ///CA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca4{}; 
    }
    namespace CauCauAescCa5{    ///<General Purpose Register 5 - AES Column Operation command
        using Addr = Register::Address<0xe0081b1c,0x00000000,0x00000000,unsigned>;
        ///CA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca5{}; 
    }
    namespace CauCauAescCa6{    ///<General Purpose Register 6 - AES Column Operation command
        using Addr = Register::Address<0xe0081b20,0x00000000,0x00000000,unsigned>;
        ///CA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca6{}; 
    }
    namespace CauCauAescCa7{    ///<General Purpose Register 7 - AES Column Operation command
        using Addr = Register::Address<0xe0081b24,0x00000000,0x00000000,unsigned>;
        ///CA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca7{}; 
    }
    namespace CauCauAescCa8{    ///<General Purpose Register 8 - AES Column Operation command
        using Addr = Register::Address<0xe0081b28,0x00000000,0x00000000,unsigned>;
        ///CA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca8{}; 
    }
    namespace CauCauAesicCasr{    ///<Status register - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b40,0x0ffffffc,0x00000000,unsigned>;
        ///no description available
        enum class IcVal {
            v0=0x00000000,     ///<No illegal commands issued
            v1=0x00000001,     ///<Illegal command issued
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,IcVal> ic{}; 
        namespace IcValC{
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ic)::Type,IcVal::v1> v1{};
        }
        ///no description available
        enum class DpeVal {
            v0=0x00000000,     ///<No error detected
            v1=0x00000001,     ///<DES key parity error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DpeVal> dpe{}; 
        namespace DpeValC{
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpe)::Type,DpeVal::v1> v1{};
        }
        ///CAU version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ver{}; 
    }
    namespace CauCauAesicCaa{    ///<Accumulator register - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b44,0x00000000,0x00000000,unsigned>;
        ///ACC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> acc{}; 
    }
    namespace CauCauAesicCa0{    ///<General Purpose Register 0 - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b48,0x00000000,0x00000000,unsigned>;
        ///CA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca0{}; 
    }
    namespace CauCauAesicCa1{    ///<General Purpose Register 1 - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b4c,0x00000000,0x00000000,unsigned>;
        ///CA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca1{}; 
    }
    namespace CauCauAesicCa2{    ///<General Purpose Register 2 - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b50,0x00000000,0x00000000,unsigned>;
        ///CA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca2{}; 
    }
    namespace CauCauAesicCa3{    ///<General Purpose Register 3 - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b54,0x00000000,0x00000000,unsigned>;
        ///CA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca3{}; 
    }
    namespace CauCauAesicCa4{    ///<General Purpose Register 4 - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b58,0x00000000,0x00000000,unsigned>;
        ///CA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca4{}; 
    }
    namespace CauCauAesicCa5{    ///<General Purpose Register 5 - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b5c,0x00000000,0x00000000,unsigned>;
        ///CA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca5{}; 
    }
    namespace CauCauAesicCa6{    ///<General Purpose Register 6 - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b60,0x00000000,0x00000000,unsigned>;
        ///CA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca6{}; 
    }
    namespace CauCauAesicCa7{    ///<General Purpose Register 7 - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b64,0x00000000,0x00000000,unsigned>;
        ///CA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca7{}; 
    }
    namespace CauCauAesicCa8{    ///<General Purpose Register 8 - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b68,0x00000000,0x00000000,unsigned>;
        ///CA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ca8{}; 
    }
}
