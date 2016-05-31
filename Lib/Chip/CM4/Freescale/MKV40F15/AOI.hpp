#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//AND/OR/INVERT module
    namespace AoiBfcrt010{    ///<Boolean Function Term 0 and 1 Configuration Register for EVENTn
        using Addr = Register::Address<0x4005b000,0xffff0000,0x00000000,unsigned>;
        ///Product term 1, D input configuration
        enum class Pt1dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Pt1dcVal> pt1Dc{}; 
        namespace Pt1dcValC{
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v11> v11{};
        }
        ///Product term 1, C input configuration
        enum class Pt1ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Pt1ccVal> pt1Cc{}; 
        namespace Pt1ccValC{
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v11> v11{};
        }
        ///Product term 1, B input configuration
        enum class Pt1bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Pt1bcVal> pt1Bc{}; 
        namespace Pt1bcValC{
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v11> v11{};
        }
        ///Product term 1, A input configuration
        enum class Pt1acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Pt1acVal> pt1Ac{}; 
        namespace Pt1acValC{
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v11> v11{};
        }
        ///Product term 0, D input configuration
        enum class Pt0dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Pt0dcVal> pt0Dc{}; 
        namespace Pt0dcValC{
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v11> v11{};
        }
        ///Product term 0, C input configuration
        enum class Pt0ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Pt0ccVal> pt0Cc{}; 
        namespace Pt0ccValC{
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v11> v11{};
        }
        ///Product term 0, B input configuration
        enum class Pt0bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,Pt0bcVal> pt0Bc{}; 
        namespace Pt0bcValC{
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v11> v11{};
        }
        ///Product term 0, A input configuration
        enum class Pt0acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,Pt0acVal> pt0Ac{}; 
        namespace Pt0acValC{
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v11> v11{};
        }
    }
    namespace AoiBfcrt011{    ///<Boolean Function Term 0 and 1 Configuration Register for EVENTn
        using Addr = Register::Address<0x4005b004,0xffff0000,0x00000000,unsigned>;
        ///Product term 1, D input configuration
        enum class Pt1dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Pt1dcVal> pt1Dc{}; 
        namespace Pt1dcValC{
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v11> v11{};
        }
        ///Product term 1, C input configuration
        enum class Pt1ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Pt1ccVal> pt1Cc{}; 
        namespace Pt1ccValC{
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v11> v11{};
        }
        ///Product term 1, B input configuration
        enum class Pt1bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Pt1bcVal> pt1Bc{}; 
        namespace Pt1bcValC{
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v11> v11{};
        }
        ///Product term 1, A input configuration
        enum class Pt1acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Pt1acVal> pt1Ac{}; 
        namespace Pt1acValC{
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v11> v11{};
        }
        ///Product term 0, D input configuration
        enum class Pt0dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Pt0dcVal> pt0Dc{}; 
        namespace Pt0dcValC{
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v11> v11{};
        }
        ///Product term 0, C input configuration
        enum class Pt0ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Pt0ccVal> pt0Cc{}; 
        namespace Pt0ccValC{
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v11> v11{};
        }
        ///Product term 0, B input configuration
        enum class Pt0bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,Pt0bcVal> pt0Bc{}; 
        namespace Pt0bcValC{
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v11> v11{};
        }
        ///Product term 0, A input configuration
        enum class Pt0acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,Pt0acVal> pt0Ac{}; 
        namespace Pt0acValC{
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v11> v11{};
        }
    }
    namespace AoiBfcrt012{    ///<Boolean Function Term 0 and 1 Configuration Register for EVENTn
        using Addr = Register::Address<0x4005b008,0xffff0000,0x00000000,unsigned>;
        ///Product term 1, D input configuration
        enum class Pt1dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Pt1dcVal> pt1Dc{}; 
        namespace Pt1dcValC{
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v11> v11{};
        }
        ///Product term 1, C input configuration
        enum class Pt1ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Pt1ccVal> pt1Cc{}; 
        namespace Pt1ccValC{
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v11> v11{};
        }
        ///Product term 1, B input configuration
        enum class Pt1bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Pt1bcVal> pt1Bc{}; 
        namespace Pt1bcValC{
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v11> v11{};
        }
        ///Product term 1, A input configuration
        enum class Pt1acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Pt1acVal> pt1Ac{}; 
        namespace Pt1acValC{
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v11> v11{};
        }
        ///Product term 0, D input configuration
        enum class Pt0dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Pt0dcVal> pt0Dc{}; 
        namespace Pt0dcValC{
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v11> v11{};
        }
        ///Product term 0, C input configuration
        enum class Pt0ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Pt0ccVal> pt0Cc{}; 
        namespace Pt0ccValC{
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v11> v11{};
        }
        ///Product term 0, B input configuration
        enum class Pt0bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,Pt0bcVal> pt0Bc{}; 
        namespace Pt0bcValC{
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v11> v11{};
        }
        ///Product term 0, A input configuration
        enum class Pt0acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,Pt0acVal> pt0Ac{}; 
        namespace Pt0acValC{
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v11> v11{};
        }
    }
    namespace AoiBfcrt013{    ///<Boolean Function Term 0 and 1 Configuration Register for EVENTn
        using Addr = Register::Address<0x4005b00c,0xffff0000,0x00000000,unsigned>;
        ///Product term 1, D input configuration
        enum class Pt1dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Pt1dcVal> pt1Dc{}; 
        namespace Pt1dcValC{
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v11> v11{};
        }
        ///Product term 1, C input configuration
        enum class Pt1ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Pt1ccVal> pt1Cc{}; 
        namespace Pt1ccValC{
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v11> v11{};
        }
        ///Product term 1, B input configuration
        enum class Pt1bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Pt1bcVal> pt1Bc{}; 
        namespace Pt1bcValC{
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v11> v11{};
        }
        ///Product term 1, A input configuration
        enum class Pt1acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Pt1acVal> pt1Ac{}; 
        namespace Pt1acValC{
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v11> v11{};
        }
        ///Product term 0, D input configuration
        enum class Pt0dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Pt0dcVal> pt0Dc{}; 
        namespace Pt0dcValC{
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v11> v11{};
        }
        ///Product term 0, C input configuration
        enum class Pt0ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Pt0ccVal> pt0Cc{}; 
        namespace Pt0ccValC{
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v11> v11{};
        }
        ///Product term 0, B input configuration
        enum class Pt0bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,Pt0bcVal> pt0Bc{}; 
        namespace Pt0bcValC{
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v11> v11{};
        }
        ///Product term 0, A input configuration
        enum class Pt0acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,Pt0acVal> pt0Ac{}; 
        namespace Pt0acValC{
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v11> v11{};
        }
    }
    namespace AoiBfcrt230{    ///<Boolean Function Term 2 and 3 Configuration Register for EVENTn
        using Addr = Register::Address<0x4005b002,0xffff0000,0x00000000,unsigned>;
        ///Product term 3, D input configuration
        enum class Pt3dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Pt3dcVal> pt3Dc{}; 
        namespace Pt3dcValC{
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v11> v11{};
        }
        ///Product term 3, C input configuration
        enum class Pt3ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Pt3ccVal> pt3Cc{}; 
        namespace Pt3ccValC{
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v11> v11{};
        }
        ///Product term 3, B input configuration
        enum class Pt3bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Pt3bcVal> pt3Bc{}; 
        namespace Pt3bcValC{
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v11> v11{};
        }
        ///Product term 3, A input configuration
        enum class Pt3acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Pt3acVal> pt3Ac{}; 
        namespace Pt3acValC{
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v11> v11{};
        }
        ///Product term 2, D input configuration
        enum class Pt2dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Pt2dcVal> pt2Dc{}; 
        namespace Pt2dcValC{
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v11> v11{};
        }
        ///Product term 2, C input configuration
        enum class Pt2ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Pt2ccVal> pt2Cc{}; 
        namespace Pt2ccValC{
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v11> v11{};
        }
        ///Product term 2, B input configuration
        enum class Pt2bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,Pt2bcVal> pt2Bc{}; 
        namespace Pt2bcValC{
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v11> v11{};
        }
        ///Product term 2, A input configuration
        enum class Pt2acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,Pt2acVal> pt2Ac{}; 
        namespace Pt2acValC{
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v11> v11{};
        }
    }
    namespace AoiBfcrt231{    ///<Boolean Function Term 2 and 3 Configuration Register for EVENTn
        using Addr = Register::Address<0x4005b006,0xffff0000,0x00000000,unsigned>;
        ///Product term 3, D input configuration
        enum class Pt3dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Pt3dcVal> pt3Dc{}; 
        namespace Pt3dcValC{
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v11> v11{};
        }
        ///Product term 3, C input configuration
        enum class Pt3ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Pt3ccVal> pt3Cc{}; 
        namespace Pt3ccValC{
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v11> v11{};
        }
        ///Product term 3, B input configuration
        enum class Pt3bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Pt3bcVal> pt3Bc{}; 
        namespace Pt3bcValC{
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v11> v11{};
        }
        ///Product term 3, A input configuration
        enum class Pt3acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Pt3acVal> pt3Ac{}; 
        namespace Pt3acValC{
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v11> v11{};
        }
        ///Product term 2, D input configuration
        enum class Pt2dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Pt2dcVal> pt2Dc{}; 
        namespace Pt2dcValC{
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v11> v11{};
        }
        ///Product term 2, C input configuration
        enum class Pt2ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Pt2ccVal> pt2Cc{}; 
        namespace Pt2ccValC{
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v11> v11{};
        }
        ///Product term 2, B input configuration
        enum class Pt2bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,Pt2bcVal> pt2Bc{}; 
        namespace Pt2bcValC{
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v11> v11{};
        }
        ///Product term 2, A input configuration
        enum class Pt2acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,Pt2acVal> pt2Ac{}; 
        namespace Pt2acValC{
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v11> v11{};
        }
    }
    namespace AoiBfcrt232{    ///<Boolean Function Term 2 and 3 Configuration Register for EVENTn
        using Addr = Register::Address<0x4005b00a,0xffff0000,0x00000000,unsigned>;
        ///Product term 3, D input configuration
        enum class Pt3dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Pt3dcVal> pt3Dc{}; 
        namespace Pt3dcValC{
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v11> v11{};
        }
        ///Product term 3, C input configuration
        enum class Pt3ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Pt3ccVal> pt3Cc{}; 
        namespace Pt3ccValC{
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v11> v11{};
        }
        ///Product term 3, B input configuration
        enum class Pt3bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Pt3bcVal> pt3Bc{}; 
        namespace Pt3bcValC{
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v11> v11{};
        }
        ///Product term 3, A input configuration
        enum class Pt3acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Pt3acVal> pt3Ac{}; 
        namespace Pt3acValC{
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v11> v11{};
        }
        ///Product term 2, D input configuration
        enum class Pt2dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Pt2dcVal> pt2Dc{}; 
        namespace Pt2dcValC{
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v11> v11{};
        }
        ///Product term 2, C input configuration
        enum class Pt2ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Pt2ccVal> pt2Cc{}; 
        namespace Pt2ccValC{
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v11> v11{};
        }
        ///Product term 2, B input configuration
        enum class Pt2bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,Pt2bcVal> pt2Bc{}; 
        namespace Pt2bcValC{
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v11> v11{};
        }
        ///Product term 2, A input configuration
        enum class Pt2acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,Pt2acVal> pt2Ac{}; 
        namespace Pt2acValC{
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v11> v11{};
        }
    }
    namespace AoiBfcrt233{    ///<Boolean Function Term 2 and 3 Configuration Register for EVENTn
        using Addr = Register::Address<0x4005b00e,0xffff0000,0x00000000,unsigned>;
        ///Product term 3, D input configuration
        enum class Pt3dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Pt3dcVal> pt3Dc{}; 
        namespace Pt3dcValC{
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v11> v11{};
        }
        ///Product term 3, C input configuration
        enum class Pt3ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Pt3ccVal> pt3Cc{}; 
        namespace Pt3ccValC{
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v11> v11{};
        }
        ///Product term 3, B input configuration
        enum class Pt3bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Pt3bcVal> pt3Bc{}; 
        namespace Pt3bcValC{
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v11> v11{};
        }
        ///Product term 3, A input configuration
        enum class Pt3acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Pt3acVal> pt3Ac{}; 
        namespace Pt3acValC{
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v11> v11{};
        }
        ///Product term 2, D input configuration
        enum class Pt2dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Pt2dcVal> pt2Dc{}; 
        namespace Pt2dcValC{
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v11> v11{};
        }
        ///Product term 2, C input configuration
        enum class Pt2ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Pt2ccVal> pt2Cc{}; 
        namespace Pt2ccValC{
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v11> v11{};
        }
        ///Product term 2, B input configuration
        enum class Pt2bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,Pt2bcVal> pt2Bc{}; 
        namespace Pt2bcValC{
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v11> v11{};
        }
        ///Product term 2, A input configuration
        enum class Pt2acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,Pt2acVal> pt2Ac{}; 
        namespace Pt2acValC{
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v11> v11{};
        }
    }
}
