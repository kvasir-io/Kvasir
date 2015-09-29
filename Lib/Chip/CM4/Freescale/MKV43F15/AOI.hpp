#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//AND/OR/INVERT module
    namespace AoiBfcrt010{    ///<Boolean Function Term 0 and 1 Configuration Register for EVENTn
        using Addr = Register::Address<0x4005b000,0xffff0000,0,unsigned>;
        ///Product term 1, D input configuration
        enum class pt1DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        namespace pt1DcValC{
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v00> v00{};
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v01> v01{};
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v10> v10{};
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,pt1DcVal> pt1Dc{}; 
        ///Product term 1, C input configuration
        enum class pt1CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        namespace pt1CcValC{
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v00> v00{};
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v01> v01{};
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v10> v10{};
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pt1CcVal> pt1Cc{}; 
        ///Product term 1, B input configuration
        enum class pt1BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        namespace pt1BcValC{
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v00> v00{};
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v01> v01{};
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v10> v10{};
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,pt1BcVal> pt1Bc{}; 
        ///Product term 1, A input configuration
        enum class pt1AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        namespace pt1AcValC{
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v00> v00{};
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v01> v01{};
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v10> v10{};
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,pt1AcVal> pt1Ac{}; 
        ///Product term 0, D input configuration
        enum class pt0DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        namespace pt0DcValC{
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v00> v00{};
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v01> v01{};
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v10> v10{};
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,pt0DcVal> pt0Dc{}; 
        ///Product term 0, C input configuration
        enum class pt0CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        namespace pt0CcValC{
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v00> v00{};
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v01> v01{};
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v10> v10{};
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,pt0CcVal> pt0Cc{}; 
        ///Product term 0, B input configuration
        enum class pt0BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        namespace pt0BcValC{
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v00> v00{};
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v01> v01{};
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v10> v10{};
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,pt0BcVal> pt0Bc{}; 
        ///Product term 0, A input configuration
        enum class pt0AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        namespace pt0AcValC{
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v00> v00{};
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v01> v01{};
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v10> v10{};
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,pt0AcVal> pt0Ac{}; 
    }
    namespace AoiBfcrt011{    ///<Boolean Function Term 0 and 1 Configuration Register for EVENTn
        using Addr = Register::Address<0x4005b004,0xffff0000,0,unsigned>;
        ///Product term 1, D input configuration
        enum class pt1DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        namespace pt1DcValC{
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v00> v00{};
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v01> v01{};
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v10> v10{};
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,pt1DcVal> pt1Dc{}; 
        ///Product term 1, C input configuration
        enum class pt1CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        namespace pt1CcValC{
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v00> v00{};
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v01> v01{};
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v10> v10{};
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pt1CcVal> pt1Cc{}; 
        ///Product term 1, B input configuration
        enum class pt1BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        namespace pt1BcValC{
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v00> v00{};
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v01> v01{};
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v10> v10{};
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,pt1BcVal> pt1Bc{}; 
        ///Product term 1, A input configuration
        enum class pt1AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        namespace pt1AcValC{
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v00> v00{};
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v01> v01{};
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v10> v10{};
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,pt1AcVal> pt1Ac{}; 
        ///Product term 0, D input configuration
        enum class pt0DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        namespace pt0DcValC{
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v00> v00{};
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v01> v01{};
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v10> v10{};
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,pt0DcVal> pt0Dc{}; 
        ///Product term 0, C input configuration
        enum class pt0CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        namespace pt0CcValC{
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v00> v00{};
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v01> v01{};
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v10> v10{};
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,pt0CcVal> pt0Cc{}; 
        ///Product term 0, B input configuration
        enum class pt0BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        namespace pt0BcValC{
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v00> v00{};
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v01> v01{};
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v10> v10{};
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,pt0BcVal> pt0Bc{}; 
        ///Product term 0, A input configuration
        enum class pt0AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        namespace pt0AcValC{
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v00> v00{};
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v01> v01{};
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v10> v10{};
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,pt0AcVal> pt0Ac{}; 
    }
    namespace AoiBfcrt012{    ///<Boolean Function Term 0 and 1 Configuration Register for EVENTn
        using Addr = Register::Address<0x4005b008,0xffff0000,0,unsigned>;
        ///Product term 1, D input configuration
        enum class pt1DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        namespace pt1DcValC{
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v00> v00{};
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v01> v01{};
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v10> v10{};
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,pt1DcVal> pt1Dc{}; 
        ///Product term 1, C input configuration
        enum class pt1CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        namespace pt1CcValC{
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v00> v00{};
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v01> v01{};
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v10> v10{};
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pt1CcVal> pt1Cc{}; 
        ///Product term 1, B input configuration
        enum class pt1BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        namespace pt1BcValC{
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v00> v00{};
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v01> v01{};
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v10> v10{};
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,pt1BcVal> pt1Bc{}; 
        ///Product term 1, A input configuration
        enum class pt1AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        namespace pt1AcValC{
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v00> v00{};
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v01> v01{};
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v10> v10{};
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,pt1AcVal> pt1Ac{}; 
        ///Product term 0, D input configuration
        enum class pt0DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        namespace pt0DcValC{
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v00> v00{};
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v01> v01{};
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v10> v10{};
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,pt0DcVal> pt0Dc{}; 
        ///Product term 0, C input configuration
        enum class pt0CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        namespace pt0CcValC{
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v00> v00{};
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v01> v01{};
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v10> v10{};
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,pt0CcVal> pt0Cc{}; 
        ///Product term 0, B input configuration
        enum class pt0BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        namespace pt0BcValC{
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v00> v00{};
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v01> v01{};
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v10> v10{};
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,pt0BcVal> pt0Bc{}; 
        ///Product term 0, A input configuration
        enum class pt0AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        namespace pt0AcValC{
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v00> v00{};
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v01> v01{};
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v10> v10{};
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,pt0AcVal> pt0Ac{}; 
    }
    namespace AoiBfcrt013{    ///<Boolean Function Term 0 and 1 Configuration Register for EVENTn
        using Addr = Register::Address<0x4005b00c,0xffff0000,0,unsigned>;
        ///Product term 1, D input configuration
        enum class pt1DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        namespace pt1DcValC{
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v00> v00{};
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v01> v01{};
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v10> v10{};
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,pt1DcVal> pt1Dc{}; 
        ///Product term 1, C input configuration
        enum class pt1CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        namespace pt1CcValC{
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v00> v00{};
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v01> v01{};
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v10> v10{};
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pt1CcVal> pt1Cc{}; 
        ///Product term 1, B input configuration
        enum class pt1BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        namespace pt1BcValC{
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v00> v00{};
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v01> v01{};
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v10> v10{};
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,pt1BcVal> pt1Bc{}; 
        ///Product term 1, A input configuration
        enum class pt1AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        namespace pt1AcValC{
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v00> v00{};
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v01> v01{};
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v10> v10{};
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,pt1AcVal> pt1Ac{}; 
        ///Product term 0, D input configuration
        enum class pt0DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        namespace pt0DcValC{
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v00> v00{};
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v01> v01{};
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v10> v10{};
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,pt0DcVal> pt0Dc{}; 
        ///Product term 0, C input configuration
        enum class pt0CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        namespace pt0CcValC{
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v00> v00{};
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v01> v01{};
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v10> v10{};
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,pt0CcVal> pt0Cc{}; 
        ///Product term 0, B input configuration
        enum class pt0BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        namespace pt0BcValC{
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v00> v00{};
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v01> v01{};
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v10> v10{};
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,pt0BcVal> pt0Bc{}; 
        ///Product term 0, A input configuration
        enum class pt0AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        namespace pt0AcValC{
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v00> v00{};
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v01> v01{};
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v10> v10{};
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,pt0AcVal> pt0Ac{}; 
    }
    namespace AoiBfcrt230{    ///<Boolean Function Term 2 and 3 Configuration Register for EVENTn
        using Addr = Register::Address<0x4005b002,0xffff0000,0,unsigned>;
        ///Product term 3, D input configuration
        enum class pt3DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        namespace pt3DcValC{
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v00> v00{};
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v01> v01{};
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v10> v10{};
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,pt3DcVal> pt3Dc{}; 
        ///Product term 3, C input configuration
        enum class pt3CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        namespace pt3CcValC{
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v00> v00{};
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v01> v01{};
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v10> v10{};
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pt3CcVal> pt3Cc{}; 
        ///Product term 3, B input configuration
        enum class pt3BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        namespace pt3BcValC{
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v00> v00{};
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v01> v01{};
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v10> v10{};
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,pt3BcVal> pt3Bc{}; 
        ///Product term 3, A input configuration
        enum class pt3AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        namespace pt3AcValC{
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v00> v00{};
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v01> v01{};
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v10> v10{};
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,pt3AcVal> pt3Ac{}; 
        ///Product term 2, D input configuration
        enum class pt2DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        namespace pt2DcValC{
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v00> v00{};
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v01> v01{};
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v10> v10{};
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,pt2DcVal> pt2Dc{}; 
        ///Product term 2, C input configuration
        enum class pt2CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        namespace pt2CcValC{
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v00> v00{};
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v01> v01{};
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v10> v10{};
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,pt2CcVal> pt2Cc{}; 
        ///Product term 2, B input configuration
        enum class pt2BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        namespace pt2BcValC{
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v00> v00{};
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v01> v01{};
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v10> v10{};
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,pt2BcVal> pt2Bc{}; 
        ///Product term 2, A input configuration
        enum class pt2AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        namespace pt2AcValC{
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v00> v00{};
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v01> v01{};
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v10> v10{};
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,pt2AcVal> pt2Ac{}; 
    }
    namespace AoiBfcrt231{    ///<Boolean Function Term 2 and 3 Configuration Register for EVENTn
        using Addr = Register::Address<0x4005b006,0xffff0000,0,unsigned>;
        ///Product term 3, D input configuration
        enum class pt3DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        namespace pt3DcValC{
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v00> v00{};
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v01> v01{};
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v10> v10{};
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,pt3DcVal> pt3Dc{}; 
        ///Product term 3, C input configuration
        enum class pt3CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        namespace pt3CcValC{
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v00> v00{};
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v01> v01{};
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v10> v10{};
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pt3CcVal> pt3Cc{}; 
        ///Product term 3, B input configuration
        enum class pt3BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        namespace pt3BcValC{
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v00> v00{};
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v01> v01{};
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v10> v10{};
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,pt3BcVal> pt3Bc{}; 
        ///Product term 3, A input configuration
        enum class pt3AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        namespace pt3AcValC{
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v00> v00{};
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v01> v01{};
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v10> v10{};
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,pt3AcVal> pt3Ac{}; 
        ///Product term 2, D input configuration
        enum class pt2DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        namespace pt2DcValC{
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v00> v00{};
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v01> v01{};
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v10> v10{};
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,pt2DcVal> pt2Dc{}; 
        ///Product term 2, C input configuration
        enum class pt2CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        namespace pt2CcValC{
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v00> v00{};
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v01> v01{};
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v10> v10{};
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,pt2CcVal> pt2Cc{}; 
        ///Product term 2, B input configuration
        enum class pt2BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        namespace pt2BcValC{
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v00> v00{};
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v01> v01{};
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v10> v10{};
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,pt2BcVal> pt2Bc{}; 
        ///Product term 2, A input configuration
        enum class pt2AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        namespace pt2AcValC{
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v00> v00{};
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v01> v01{};
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v10> v10{};
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,pt2AcVal> pt2Ac{}; 
    }
    namespace AoiBfcrt232{    ///<Boolean Function Term 2 and 3 Configuration Register for EVENTn
        using Addr = Register::Address<0x4005b00a,0xffff0000,0,unsigned>;
        ///Product term 3, D input configuration
        enum class pt3DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        namespace pt3DcValC{
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v00> v00{};
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v01> v01{};
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v10> v10{};
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,pt3DcVal> pt3Dc{}; 
        ///Product term 3, C input configuration
        enum class pt3CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        namespace pt3CcValC{
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v00> v00{};
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v01> v01{};
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v10> v10{};
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pt3CcVal> pt3Cc{}; 
        ///Product term 3, B input configuration
        enum class pt3BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        namespace pt3BcValC{
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v00> v00{};
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v01> v01{};
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v10> v10{};
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,pt3BcVal> pt3Bc{}; 
        ///Product term 3, A input configuration
        enum class pt3AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        namespace pt3AcValC{
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v00> v00{};
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v01> v01{};
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v10> v10{};
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,pt3AcVal> pt3Ac{}; 
        ///Product term 2, D input configuration
        enum class pt2DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        namespace pt2DcValC{
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v00> v00{};
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v01> v01{};
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v10> v10{};
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,pt2DcVal> pt2Dc{}; 
        ///Product term 2, C input configuration
        enum class pt2CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        namespace pt2CcValC{
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v00> v00{};
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v01> v01{};
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v10> v10{};
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,pt2CcVal> pt2Cc{}; 
        ///Product term 2, B input configuration
        enum class pt2BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        namespace pt2BcValC{
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v00> v00{};
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v01> v01{};
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v10> v10{};
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,pt2BcVal> pt2Bc{}; 
        ///Product term 2, A input configuration
        enum class pt2AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        namespace pt2AcValC{
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v00> v00{};
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v01> v01{};
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v10> v10{};
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,pt2AcVal> pt2Ac{}; 
    }
    namespace AoiBfcrt233{    ///<Boolean Function Term 2 and 3 Configuration Register for EVENTn
        using Addr = Register::Address<0x4005b00e,0xffff0000,0,unsigned>;
        ///Product term 3, D input configuration
        enum class pt3DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        namespace pt3DcValC{
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v00> v00{};
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v01> v01{};
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v10> v10{};
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,pt3DcVal> pt3Dc{}; 
        ///Product term 3, C input configuration
        enum class pt3CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        namespace pt3CcValC{
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v00> v00{};
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v01> v01{};
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v10> v10{};
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pt3CcVal> pt3Cc{}; 
        ///Product term 3, B input configuration
        enum class pt3BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        namespace pt3BcValC{
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v00> v00{};
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v01> v01{};
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v10> v10{};
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,pt3BcVal> pt3Bc{}; 
        ///Product term 3, A input configuration
        enum class pt3AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        namespace pt3AcValC{
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v00> v00{};
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v01> v01{};
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v10> v10{};
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,pt3AcVal> pt3Ac{}; 
        ///Product term 2, D input configuration
        enum class pt2DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the D input in this product term
            v10=0x00000002,     ///<Complement the D input in this product term
            v11=0x00000003,     ///<Force the D input in this product term to a logical one
        };
        namespace pt2DcValC{
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v00> v00{};
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v01> v01{};
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v10> v10{};
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,pt2DcVal> pt2Dc{}; 
        ///Product term 2, C input configuration
        enum class pt2CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the C input in this product term
            v10=0x00000002,     ///<Complement the C input in this product term
            v11=0x00000003,     ///<Force the C input in this product term to a logical one
        };
        namespace pt2CcValC{
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v00> v00{};
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v01> v01{};
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v10> v10{};
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,pt2CcVal> pt2Cc{}; 
        ///Product term 2, B input configuration
        enum class pt2BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the B input in this product term
            v10=0x00000002,     ///<Complement the B input in this product term
            v11=0x00000003,     ///<Force the B input in this product term to a logical one
        };
        namespace pt2BcValC{
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v00> v00{};
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v01> v01{};
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v10> v10{};
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,pt2BcVal> pt2Bc{}; 
        ///Product term 2, A input configuration
        enum class pt2AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero
            v01=0x00000001,     ///<Pass the A input in this product term
            v10=0x00000002,     ///<Complement the A input in this product term
            v11=0x00000003,     ///<Force the A input in this product term to a logical one
        };
        namespace pt2AcValC{
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v00> v00{};
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v01> v01{};
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v10> v10{};
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,pt2AcVal> pt2Ac{}; 
    }
}
