#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Memory Mapped Cryptographic Acceleration Unit (MMCAU)
    namespace NonecauDirect0{    ///<Direct access register 0
        using Addr = Register::Address<0xe0081000,0xffffffff,0,unsigned>;
    }
    namespace NonecauDirect1{    ///<Direct access register 1
        using Addr = Register::Address<0xe0081004,0xffffffff,0,unsigned>;
    }
    namespace NonecauDirect2{    ///<Direct access register 2
        using Addr = Register::Address<0xe0081008,0xffffffff,0,unsigned>;
    }
    namespace NonecauDirect3{    ///<Direct access register 3
        using Addr = Register::Address<0xe008100c,0xffffffff,0,unsigned>;
    }
    namespace NonecauDirect4{    ///<Direct access register 4
        using Addr = Register::Address<0xe0081010,0xffffffff,0,unsigned>;
    }
    namespace NonecauDirect5{    ///<Direct access register 5
        using Addr = Register::Address<0xe0081014,0xffffffff,0,unsigned>;
    }
    namespace NonecauDirect6{    ///<Direct access register 6
        using Addr = Register::Address<0xe0081018,0xffffffff,0,unsigned>;
    }
    namespace NonecauDirect7{    ///<Direct access register 7
        using Addr = Register::Address<0xe008101c,0xffffffff,0,unsigned>;
    }
    namespace NonecauDirect8{    ///<Direct access register 8
        using Addr = Register::Address<0xe0081020,0xffffffff,0,unsigned>;
    }
    namespace NonecauDirect9{    ///<Direct access register 9
        using Addr = Register::Address<0xe0081024,0xffffffff,0,unsigned>;
    }
    namespace NonecauDirect10{    ///<Direct access register 10
        using Addr = Register::Address<0xe0081028,0xffffffff,0,unsigned>;
    }
    namespace NonecauDirect11{    ///<Direct access register 11
        using Addr = Register::Address<0xe008102c,0xffffffff,0,unsigned>;
    }
    namespace NonecauDirect12{    ///<Direct access register 12
        using Addr = Register::Address<0xe0081030,0xffffffff,0,unsigned>;
    }
    namespace NonecauDirect13{    ///<Direct access register 13
        using Addr = Register::Address<0xe0081034,0xffffffff,0,unsigned>;
    }
    namespace NonecauDirect14{    ///<Direct access register 14
        using Addr = Register::Address<0xe0081038,0xffffffff,0,unsigned>;
    }
    namespace NonecauDirect15{    ///<Direct access register 15
        using Addr = Register::Address<0xe008103c,0xffffffff,0,unsigned>;
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
            constexpr Register::FieldValue<decltype(ic),IcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ic),IcVal::v1> v1{};
        }
        ///no description available
        enum class DpeVal {
            v0=0x00000000,     ///<No error detected
            v1=0x00000001,     ///<DES key parity error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DpeVal> dpe{}; 
        namespace DpeValC{
            constexpr Register::FieldValue<decltype(dpe),DpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpe),DpeVal::v1> v1{};
        }
        ///CAU version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> ver{}; 
        namespace VerValC{
        }
    }
    namespace NonecauLdrCaa{    ///<Accumulator register - Load Register command
        using Addr = Register::Address<0xe0081844,0xffffffff,0,unsigned>;
    }
    namespace NonecauLdrCa0{    ///<General Purpose Register 0 - Load Register command
        using Addr = Register::Address<0xe0081848,0xffffffff,0,unsigned>;
    }
    namespace NonecauLdrCa1{    ///<General Purpose Register 1 - Load Register command
        using Addr = Register::Address<0xe008184c,0xffffffff,0,unsigned>;
    }
    namespace NonecauLdrCa2{    ///<General Purpose Register 2 - Load Register command
        using Addr = Register::Address<0xe0081850,0xffffffff,0,unsigned>;
    }
    namespace NonecauLdrCa3{    ///<General Purpose Register 3 - Load Register command
        using Addr = Register::Address<0xe0081854,0xffffffff,0,unsigned>;
    }
    namespace NonecauLdrCa4{    ///<General Purpose Register 4 - Load Register command
        using Addr = Register::Address<0xe0081858,0xffffffff,0,unsigned>;
    }
    namespace NonecauLdrCa5{    ///<General Purpose Register 5 - Load Register command
        using Addr = Register::Address<0xe008185c,0xffffffff,0,unsigned>;
    }
    namespace NonecauLdrCa6{    ///<General Purpose Register 6 - Load Register command
        using Addr = Register::Address<0xe0081860,0xffffffff,0,unsigned>;
    }
    namespace NonecauLdrCa7{    ///<General Purpose Register 7 - Load Register command
        using Addr = Register::Address<0xe0081864,0xffffffff,0,unsigned>;
    }
    namespace NonecauLdrCa8{    ///<General Purpose Register 8 - Load Register command
        using Addr = Register::Address<0xe0081868,0xffffffff,0,unsigned>;
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
            constexpr Register::FieldValue<decltype(ic),IcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ic),IcVal::v1> v1{};
        }
        ///no description available
        enum class DpeVal {
            v0=0x00000000,     ///<No error detected
            v1=0x00000001,     ///<DES key parity error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DpeVal> dpe{}; 
        namespace DpeValC{
            constexpr Register::FieldValue<decltype(dpe),DpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpe),DpeVal::v1> v1{};
        }
        ///CAU version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> ver{}; 
        namespace VerValC{
        }
    }
    namespace NonecauStrCaa{    ///<Accumulator register - Store Register command
        using Addr = Register::Address<0xe0081884,0xffffffff,0,unsigned>;
    }
    namespace NonecauStrCa0{    ///<General Purpose Register 0 - Store Register command
        using Addr = Register::Address<0xe0081888,0xffffffff,0,unsigned>;
    }
    namespace NonecauStrCa1{    ///<General Purpose Register 1 - Store Register command
        using Addr = Register::Address<0xe008188c,0xffffffff,0,unsigned>;
    }
    namespace NonecauStrCa2{    ///<General Purpose Register 2 - Store Register command
        using Addr = Register::Address<0xe0081890,0xffffffff,0,unsigned>;
    }
    namespace NonecauStrCa3{    ///<General Purpose Register 3 - Store Register command
        using Addr = Register::Address<0xe0081894,0xffffffff,0,unsigned>;
    }
    namespace NonecauStrCa4{    ///<General Purpose Register 4 - Store Register command
        using Addr = Register::Address<0xe0081898,0xffffffff,0,unsigned>;
    }
    namespace NonecauStrCa5{    ///<General Purpose Register 5 - Store Register command
        using Addr = Register::Address<0xe008189c,0xffffffff,0,unsigned>;
    }
    namespace NonecauStrCa6{    ///<General Purpose Register 6 - Store Register command
        using Addr = Register::Address<0xe00818a0,0xffffffff,0,unsigned>;
    }
    namespace NonecauStrCa7{    ///<General Purpose Register 7 - Store Register command
        using Addr = Register::Address<0xe00818a4,0xffffffff,0,unsigned>;
    }
    namespace NonecauStrCa8{    ///<General Purpose Register 8 - Store Register command
        using Addr = Register::Address<0xe00818a8,0xffffffff,0,unsigned>;
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
            constexpr Register::FieldValue<decltype(ic),IcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ic),IcVal::v1> v1{};
        }
        ///no description available
        enum class DpeVal {
            v0=0x00000000,     ///<No error detected
            v1=0x00000001,     ///<DES key parity error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DpeVal> dpe{}; 
        namespace DpeValC{
            constexpr Register::FieldValue<decltype(dpe),DpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpe),DpeVal::v1> v1{};
        }
        ///CAU version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> ver{}; 
        namespace VerValC{
        }
    }
    namespace NonecauAdrCaa{    ///<Accumulator register - Add to register command
        using Addr = Register::Address<0xe00818c4,0xffffffff,0,unsigned>;
    }
    namespace NonecauAdrCa0{    ///<General Purpose Register 0 - Add to register command
        using Addr = Register::Address<0xe00818c8,0xffffffff,0,unsigned>;
    }
    namespace NonecauAdrCa1{    ///<General Purpose Register 1 - Add to register command
        using Addr = Register::Address<0xe00818cc,0xffffffff,0,unsigned>;
    }
    namespace NonecauAdrCa2{    ///<General Purpose Register 2 - Add to register command
        using Addr = Register::Address<0xe00818d0,0xffffffff,0,unsigned>;
    }
    namespace NonecauAdrCa3{    ///<General Purpose Register 3 - Add to register command
        using Addr = Register::Address<0xe00818d4,0xffffffff,0,unsigned>;
    }
    namespace NonecauAdrCa4{    ///<General Purpose Register 4 - Add to register command
        using Addr = Register::Address<0xe00818d8,0xffffffff,0,unsigned>;
    }
    namespace NonecauAdrCa5{    ///<General Purpose Register 5 - Add to register command
        using Addr = Register::Address<0xe00818dc,0xffffffff,0,unsigned>;
    }
    namespace NonecauAdrCa6{    ///<General Purpose Register 6 - Add to register command
        using Addr = Register::Address<0xe00818e0,0xffffffff,0,unsigned>;
    }
    namespace NonecauAdrCa7{    ///<General Purpose Register 7 - Add to register command
        using Addr = Register::Address<0xe00818e4,0xffffffff,0,unsigned>;
    }
    namespace NonecauAdrCa8{    ///<General Purpose Register 8 - Add to register command
        using Addr = Register::Address<0xe00818e8,0xffffffff,0,unsigned>;
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
            constexpr Register::FieldValue<decltype(ic),IcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ic),IcVal::v1> v1{};
        }
        ///no description available
        enum class DpeVal {
            v0=0x00000000,     ///<No error detected
            v1=0x00000001,     ///<DES key parity error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DpeVal> dpe{}; 
        namespace DpeValC{
            constexpr Register::FieldValue<decltype(dpe),DpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpe),DpeVal::v1> v1{};
        }
        ///CAU version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> ver{}; 
        namespace VerValC{
        }
    }
    namespace NonecauRadrCaa{    ///<Accumulator register - Reverse and Add to Register command
        using Addr = Register::Address<0xe0081904,0xffffffff,0,unsigned>;
    }
    namespace NonecauRadrCa0{    ///<General Purpose Register 0 - Reverse and Add to Register command
        using Addr = Register::Address<0xe0081908,0xffffffff,0,unsigned>;
    }
    namespace NonecauRadrCa1{    ///<General Purpose Register 1 - Reverse and Add to Register command
        using Addr = Register::Address<0xe008190c,0xffffffff,0,unsigned>;
    }
    namespace NonecauRadrCa2{    ///<General Purpose Register 2 - Reverse and Add to Register command
        using Addr = Register::Address<0xe0081910,0xffffffff,0,unsigned>;
    }
    namespace NonecauRadrCa3{    ///<General Purpose Register 3 - Reverse and Add to Register command
        using Addr = Register::Address<0xe0081914,0xffffffff,0,unsigned>;
    }
    namespace NonecauRadrCa4{    ///<General Purpose Register 4 - Reverse and Add to Register command
        using Addr = Register::Address<0xe0081918,0xffffffff,0,unsigned>;
    }
    namespace NonecauRadrCa5{    ///<General Purpose Register 5 - Reverse and Add to Register command
        using Addr = Register::Address<0xe008191c,0xffffffff,0,unsigned>;
    }
    namespace NonecauRadrCa6{    ///<General Purpose Register 6 - Reverse and Add to Register command
        using Addr = Register::Address<0xe0081920,0xffffffff,0,unsigned>;
    }
    namespace NonecauRadrCa7{    ///<General Purpose Register 7 - Reverse and Add to Register command
        using Addr = Register::Address<0xe0081924,0xffffffff,0,unsigned>;
    }
    namespace NonecauRadrCa8{    ///<General Purpose Register 8 - Reverse and Add to Register command
        using Addr = Register::Address<0xe0081928,0xffffffff,0,unsigned>;
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
            constexpr Register::FieldValue<decltype(ic),IcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ic),IcVal::v1> v1{};
        }
        ///no description available
        enum class DpeVal {
            v0=0x00000000,     ///<No error detected
            v1=0x00000001,     ///<DES key parity error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DpeVal> dpe{}; 
        namespace DpeValC{
            constexpr Register::FieldValue<decltype(dpe),DpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpe),DpeVal::v1> v1{};
        }
        ///CAU version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> ver{}; 
        namespace VerValC{
        }
    }
    namespace NonecauXorCaa{    ///<Accumulator register - Exclusive Or command
        using Addr = Register::Address<0xe0081984,0xffffffff,0,unsigned>;
    }
    namespace NonecauXorCa0{    ///<General Purpose Register 0 - Exclusive Or command
        using Addr = Register::Address<0xe0081988,0xffffffff,0,unsigned>;
    }
    namespace NonecauXorCa1{    ///<General Purpose Register 1 - Exclusive Or command
        using Addr = Register::Address<0xe008198c,0xffffffff,0,unsigned>;
    }
    namespace NonecauXorCa2{    ///<General Purpose Register 2 - Exclusive Or command
        using Addr = Register::Address<0xe0081990,0xffffffff,0,unsigned>;
    }
    namespace NonecauXorCa3{    ///<General Purpose Register 3 - Exclusive Or command
        using Addr = Register::Address<0xe0081994,0xffffffff,0,unsigned>;
    }
    namespace NonecauXorCa4{    ///<General Purpose Register 4 - Exclusive Or command
        using Addr = Register::Address<0xe0081998,0xffffffff,0,unsigned>;
    }
    namespace NonecauXorCa5{    ///<General Purpose Register 5 - Exclusive Or command
        using Addr = Register::Address<0xe008199c,0xffffffff,0,unsigned>;
    }
    namespace NonecauXorCa6{    ///<General Purpose Register 6 - Exclusive Or command
        using Addr = Register::Address<0xe00819a0,0xffffffff,0,unsigned>;
    }
    namespace NonecauXorCa7{    ///<General Purpose Register 7 - Exclusive Or command
        using Addr = Register::Address<0xe00819a4,0xffffffff,0,unsigned>;
    }
    namespace NonecauXorCa8{    ///<General Purpose Register 8 - Exclusive Or command
        using Addr = Register::Address<0xe00819a8,0xffffffff,0,unsigned>;
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
            constexpr Register::FieldValue<decltype(ic),IcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ic),IcVal::v1> v1{};
        }
        ///no description available
        enum class DpeVal {
            v0=0x00000000,     ///<No error detected
            v1=0x00000001,     ///<DES key parity error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DpeVal> dpe{}; 
        namespace DpeValC{
            constexpr Register::FieldValue<decltype(dpe),DpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpe),DpeVal::v1> v1{};
        }
        ///CAU version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> ver{}; 
        namespace VerValC{
        }
    }
    namespace NonecauRotlCaa{    ///<Accumulator register - Rotate Left command
        using Addr = Register::Address<0xe00819c4,0xffffffff,0,unsigned>;
    }
    namespace NonecauRotlCa0{    ///<General Purpose Register 0 - Rotate Left command
        using Addr = Register::Address<0xe00819c8,0xffffffff,0,unsigned>;
    }
    namespace NonecauRotlCa1{    ///<General Purpose Register 1 - Rotate Left command
        using Addr = Register::Address<0xe00819cc,0xffffffff,0,unsigned>;
    }
    namespace NonecauRotlCa2{    ///<General Purpose Register 2 - Rotate Left command
        using Addr = Register::Address<0xe00819d0,0xffffffff,0,unsigned>;
    }
    namespace NonecauRotlCa3{    ///<General Purpose Register 3 - Rotate Left command
        using Addr = Register::Address<0xe00819d4,0xffffffff,0,unsigned>;
    }
    namespace NonecauRotlCa4{    ///<General Purpose Register 4 - Rotate Left command
        using Addr = Register::Address<0xe00819d8,0xffffffff,0,unsigned>;
    }
    namespace NonecauRotlCa5{    ///<General Purpose Register 5 - Rotate Left command
        using Addr = Register::Address<0xe00819dc,0xffffffff,0,unsigned>;
    }
    namespace NonecauRotlCa6{    ///<General Purpose Register 6 - Rotate Left command
        using Addr = Register::Address<0xe00819e0,0xffffffff,0,unsigned>;
    }
    namespace NonecauRotlCa7{    ///<General Purpose Register 7 - Rotate Left command
        using Addr = Register::Address<0xe00819e4,0xffffffff,0,unsigned>;
    }
    namespace NonecauRotlCa8{    ///<General Purpose Register 8 - Rotate Left command
        using Addr = Register::Address<0xe00819e8,0xffffffff,0,unsigned>;
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
            constexpr Register::FieldValue<decltype(ic),IcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ic),IcVal::v1> v1{};
        }
        ///no description available
        enum class DpeVal {
            v0=0x00000000,     ///<No error detected
            v1=0x00000001,     ///<DES key parity error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DpeVal> dpe{}; 
        namespace DpeValC{
            constexpr Register::FieldValue<decltype(dpe),DpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpe),DpeVal::v1> v1{};
        }
        ///CAU version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> ver{}; 
        namespace VerValC{
        }
    }
    namespace NonecauAescCaa{    ///<Accumulator register - AES Column Operation command
        using Addr = Register::Address<0xe0081b04,0xffffffff,0,unsigned>;
    }
    namespace NonecauAescCa0{    ///<General Purpose Register 0 - AES Column Operation command
        using Addr = Register::Address<0xe0081b08,0xffffffff,0,unsigned>;
    }
    namespace NonecauAescCa1{    ///<General Purpose Register 1 - AES Column Operation command
        using Addr = Register::Address<0xe0081b0c,0xffffffff,0,unsigned>;
    }
    namespace NonecauAescCa2{    ///<General Purpose Register 2 - AES Column Operation command
        using Addr = Register::Address<0xe0081b10,0xffffffff,0,unsigned>;
    }
    namespace NonecauAescCa3{    ///<General Purpose Register 3 - AES Column Operation command
        using Addr = Register::Address<0xe0081b14,0xffffffff,0,unsigned>;
    }
    namespace NonecauAescCa4{    ///<General Purpose Register 4 - AES Column Operation command
        using Addr = Register::Address<0xe0081b18,0xffffffff,0,unsigned>;
    }
    namespace NonecauAescCa5{    ///<General Purpose Register 5 - AES Column Operation command
        using Addr = Register::Address<0xe0081b1c,0xffffffff,0,unsigned>;
    }
    namespace NonecauAescCa6{    ///<General Purpose Register 6 - AES Column Operation command
        using Addr = Register::Address<0xe0081b20,0xffffffff,0,unsigned>;
    }
    namespace NonecauAescCa7{    ///<General Purpose Register 7 - AES Column Operation command
        using Addr = Register::Address<0xe0081b24,0xffffffff,0,unsigned>;
    }
    namespace NonecauAescCa8{    ///<General Purpose Register 8 - AES Column Operation command
        using Addr = Register::Address<0xe0081b28,0xffffffff,0,unsigned>;
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
            constexpr Register::FieldValue<decltype(ic),IcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ic),IcVal::v1> v1{};
        }
        ///no description available
        enum class DpeVal {
            v0=0x00000000,     ///<No error detected
            v1=0x00000001,     ///<DES key parity error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DpeVal> dpe{}; 
        namespace DpeValC{
            constexpr Register::FieldValue<decltype(dpe),DpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpe),DpeVal::v1> v1{};
        }
        ///CAU version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> ver{}; 
        namespace VerValC{
        }
    }
    namespace NonecauAesicCaa{    ///<Accumulator register - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b44,0xffffffff,0,unsigned>;
    }
    namespace NonecauAesicCa0{    ///<General Purpose Register 0 - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b48,0xffffffff,0,unsigned>;
    }
    namespace NonecauAesicCa1{    ///<General Purpose Register 1 - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b4c,0xffffffff,0,unsigned>;
    }
    namespace NonecauAesicCa2{    ///<General Purpose Register 2 - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b50,0xffffffff,0,unsigned>;
    }
    namespace NonecauAesicCa3{    ///<General Purpose Register 3 - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b54,0xffffffff,0,unsigned>;
    }
    namespace NonecauAesicCa4{    ///<General Purpose Register 4 - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b58,0xffffffff,0,unsigned>;
    }
    namespace NonecauAesicCa5{    ///<General Purpose Register 5 - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b5c,0xffffffff,0,unsigned>;
    }
    namespace NonecauAesicCa6{    ///<General Purpose Register 6 - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b60,0xffffffff,0,unsigned>;
    }
    namespace NonecauAesicCa7{    ///<General Purpose Register 7 - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b64,0xffffffff,0,unsigned>;
    }
    namespace NonecauAesicCa8{    ///<General Purpose Register 8 - AES Inverse Column Operation command
        using Addr = Register::Address<0xe0081b68,0xffffffff,0,unsigned>;
    }
}
