#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Crossbar Switch
    namespace XbaraSel0{    ///<Crossbar A Select Register 0
        using Addr = Register::Address<0x40059000,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel0{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel1{}; 
    }
    namespace XbaraSel1{    ///<Crossbar A Select Register 1
        using Addr = Register::Address<0x40059002,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel2{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel3{}; 
    }
    namespace XbaraSel2{    ///<Crossbar A Select Register 2
        using Addr = Register::Address<0x40059004,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel4{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel5{}; 
    }
    namespace XbaraSel3{    ///<Crossbar A Select Register 3
        using Addr = Register::Address<0x40059006,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel6{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel7{}; 
    }
    namespace XbaraSel4{    ///<Crossbar A Select Register 4
        using Addr = Register::Address<0x40059008,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel8{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel9{}; 
    }
    namespace XbaraSel5{    ///<Crossbar A Select Register 5
        using Addr = Register::Address<0x4005900a,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel10{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel11{}; 
    }
    namespace XbaraSel6{    ///<Crossbar A Select Register 6
        using Addr = Register::Address<0x4005900c,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel12{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel13{}; 
    }
    namespace XbaraSel7{    ///<Crossbar A Select Register 7
        using Addr = Register::Address<0x4005900e,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel14{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel15{}; 
    }
    namespace XbaraSel8{    ///<Crossbar A Select Register 8
        using Addr = Register::Address<0x40059010,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel16{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel17{}; 
    }
    namespace XbaraSel9{    ///<Crossbar A Select Register 9
        using Addr = Register::Address<0x40059012,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel18{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel19{}; 
    }
    namespace XbaraSel10{    ///<Crossbar A Select Register 10
        using Addr = Register::Address<0x40059014,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel20{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel21{}; 
    }
    namespace XbaraSel11{    ///<Crossbar A Select Register 11
        using Addr = Register::Address<0x40059016,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel22{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel23{}; 
    }
    namespace XbaraSel12{    ///<Crossbar A Select Register 12
        using Addr = Register::Address<0x40059018,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel24{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel25{}; 
    }
    namespace XbaraSel13{    ///<Crossbar A Select Register 13
        using Addr = Register::Address<0x4005901a,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel26{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel27{}; 
    }
    namespace XbaraSel14{    ///<Crossbar A Select Register 14
        using Addr = Register::Address<0x4005901c,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel28{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel29{}; 
    }
    namespace XbaraSel15{    ///<Crossbar A Select Register 15
        using Addr = Register::Address<0x4005901e,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel30{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel31{}; 
    }
    namespace XbaraSel16{    ///<Crossbar A Select Register 16
        using Addr = Register::Address<0x40059020,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel32{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel33{}; 
    }
    namespace XbaraSel17{    ///<Crossbar A Select Register 17
        using Addr = Register::Address<0x40059022,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel34{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel35{}; 
    }
    namespace XbaraSel18{    ///<Crossbar A Select Register 18
        using Addr = Register::Address<0x40059024,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel36{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel37{}; 
    }
    namespace XbaraSel19{    ///<Crossbar A Select Register 19
        using Addr = Register::Address<0x40059026,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel38{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel39{}; 
    }
    namespace XbaraSel20{    ///<Crossbar A Select Register 20
        using Addr = Register::Address<0x40059028,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel40{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel41{}; 
    }
    namespace XbaraSel21{    ///<Crossbar A Select Register 21
        using Addr = Register::Address<0x4005902a,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel42{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel43{}; 
    }
    namespace XbaraSel22{    ///<Crossbar A Select Register 22
        using Addr = Register::Address<0x4005902c,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel44{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel45{}; 
    }
    namespace XbaraSel23{    ///<Crossbar A Select Register 23
        using Addr = Register::Address<0x4005902e,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel46{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel47{}; 
    }
    namespace XbaraSel24{    ///<Crossbar A Select Register 24
        using Addr = Register::Address<0x40059030,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel48{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel49{}; 
    }
    namespace XbaraSel25{    ///<Crossbar A Select Register 25
        using Addr = Register::Address<0x40059032,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel50{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel51{}; 
    }
    namespace XbaraSel26{    ///<Crossbar A Select Register 26
        using Addr = Register::Address<0x40059034,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel52{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel53{}; 
    }
    namespace XbaraSel27{    ///<Crossbar A Select Register 27
        using Addr = Register::Address<0x40059036,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel54{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel55{}; 
    }
    namespace XbaraSel28{    ///<Crossbar A Select Register 28
        using Addr = Register::Address<0x40059038,0xffffc0c0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel56{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel57{}; 
    }
    namespace XbaraSel29{    ///<Crossbar A Select Register 29
        using Addr = Register::Address<0x4005903a,0xffffffc0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel58{}; 
    }
    namespace XbaraCtrl0{    ///<Crossbar A Control Register 0
        using Addr = Register::Address<0x4005903c,0xffffe0e0,0x00000000,unsigned>;
        ///DMA Enable for XBAR_OUT0
        enum class Den0Val {
            v0=0x00000000,     ///<DMA disabled
            v1=0x00000001,     ///<DMA enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Den0Val> den0{}; 
        namespace Den0ValC{
            constexpr Register::FieldValue<decltype(den0)::Type,Den0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(den0)::Type,Den0Val::v1> v1{};
        }
        ///Interrupt Enable for XBAR_OUT0
        enum class Ien0Val {
            v0=0x00000000,     ///<Interrupt disabled
            v1=0x00000001,     ///<Interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ien0Val> ien0{}; 
        namespace Ien0ValC{
            constexpr Register::FieldValue<decltype(ien0)::Type,Ien0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ien0)::Type,Ien0Val::v1> v1{};
        }
        ///Active edge for edge detection on XBAR_OUT0
        enum class Edge0Val {
            v00=0x00000000,     ///<STS0 never asserts
            v01=0x00000001,     ///<STS0 asserts on rising edges of XBAR_OUT0
            v10=0x00000002,     ///<STS0 asserts on falling edges of XBAR_OUT0
            v11=0x00000003,     ///<STS0 asserts on rising and falling edges of XBAR_OUT0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Edge0Val> edge0{}; 
        namespace Edge0ValC{
            constexpr Register::FieldValue<decltype(edge0)::Type,Edge0Val::v00> v00{};
            constexpr Register::FieldValue<decltype(edge0)::Type,Edge0Val::v01> v01{};
            constexpr Register::FieldValue<decltype(edge0)::Type,Edge0Val::v10> v10{};
            constexpr Register::FieldValue<decltype(edge0)::Type,Edge0Val::v11> v11{};
        }
        ///Edge detection status for XBAR_OUT0
        enum class Sts0Val {
            v0=0x00000000,     ///<Active edge not yet detected on XBAR_OUT0
            v1=0x00000001,     ///<Active edge detected on XBAR_OUT0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Sts0Val> sts0{}; 
        namespace Sts0ValC{
            constexpr Register::FieldValue<decltype(sts0)::Type,Sts0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sts0)::Type,Sts0Val::v1> v1{};
        }
        ///DMA Enable for XBAR_OUT1
        enum class Den1Val {
            v0=0x00000000,     ///<DMA disabled
            v1=0x00000001,     ///<DMA enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Den1Val> den1{}; 
        namespace Den1ValC{
            constexpr Register::FieldValue<decltype(den1)::Type,Den1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(den1)::Type,Den1Val::v1> v1{};
        }
        ///Interrupt Enable for XBAR_OUT1
        enum class Ien1Val {
            v0=0x00000000,     ///<Interrupt disabled
            v1=0x00000001,     ///<Interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ien1Val> ien1{}; 
        namespace Ien1ValC{
            constexpr Register::FieldValue<decltype(ien1)::Type,Ien1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ien1)::Type,Ien1Val::v1> v1{};
        }
        ///Active edge for edge detection on XBAR_OUT1
        enum class Edge1Val {
            v00=0x00000000,     ///<STS1 never asserts
            v01=0x00000001,     ///<STS1 asserts on rising edges of XBAR_OUT1
            v10=0x00000002,     ///<STS1 asserts on falling edges of XBAR_OUT1
            v11=0x00000003,     ///<STS1 asserts on rising and falling edges of XBAR_OUT1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Edge1Val> edge1{}; 
        namespace Edge1ValC{
            constexpr Register::FieldValue<decltype(edge1)::Type,Edge1Val::v00> v00{};
            constexpr Register::FieldValue<decltype(edge1)::Type,Edge1Val::v01> v01{};
            constexpr Register::FieldValue<decltype(edge1)::Type,Edge1Val::v10> v10{};
            constexpr Register::FieldValue<decltype(edge1)::Type,Edge1Val::v11> v11{};
        }
        ///Edge detection status for XBAR_OUT1
        enum class Sts1Val {
            v0=0x00000000,     ///<Active edge not yet detected on XBAR_OUT1
            v1=0x00000001,     ///<Active edge detected on XBAR_OUT1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Sts1Val> sts1{}; 
        namespace Sts1ValC{
            constexpr Register::FieldValue<decltype(sts1)::Type,Sts1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sts1)::Type,Sts1Val::v1> v1{};
        }
    }
    namespace XbaraCtrl1{    ///<Crossbar A Control Register 1
        using Addr = Register::Address<0x4005903e,0xffffe0e0,0x00000000,unsigned>;
        ///DMA Enable for XBAR_OUT2
        enum class Den2Val {
            v0=0x00000000,     ///<DMA disabled
            v1=0x00000001,     ///<DMA enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Den2Val> den2{}; 
        namespace Den2ValC{
            constexpr Register::FieldValue<decltype(den2)::Type,Den2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(den2)::Type,Den2Val::v1> v1{};
        }
        ///Interrupt Enable for XBAR_OUT2
        enum class Ien2Val {
            v0=0x00000000,     ///<Interrupt disabled
            v1=0x00000001,     ///<Interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ien2Val> ien2{}; 
        namespace Ien2ValC{
            constexpr Register::FieldValue<decltype(ien2)::Type,Ien2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ien2)::Type,Ien2Val::v1> v1{};
        }
        ///Active edge for edge detection on XBAR_OUT2
        enum class Edge2Val {
            v00=0x00000000,     ///<STS2 never asserts
            v01=0x00000001,     ///<STS2 asserts on rising edges of XBAR_OUT2
            v10=0x00000002,     ///<STS2 asserts on falling edges of XBAR_OUT2
            v11=0x00000003,     ///<STS2 asserts on rising and falling edges of XBAR_OUT2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Edge2Val> edge2{}; 
        namespace Edge2ValC{
            constexpr Register::FieldValue<decltype(edge2)::Type,Edge2Val::v00> v00{};
            constexpr Register::FieldValue<decltype(edge2)::Type,Edge2Val::v01> v01{};
            constexpr Register::FieldValue<decltype(edge2)::Type,Edge2Val::v10> v10{};
            constexpr Register::FieldValue<decltype(edge2)::Type,Edge2Val::v11> v11{};
        }
        ///Edge detection status for XBAR_OUT2
        enum class Sts2Val {
            v0=0x00000000,     ///<Active edge not yet detected on XBAR_OUT2
            v1=0x00000001,     ///<Active edge detected on XBAR_OUT2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Sts2Val> sts2{}; 
        namespace Sts2ValC{
            constexpr Register::FieldValue<decltype(sts2)::Type,Sts2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sts2)::Type,Sts2Val::v1> v1{};
        }
        ///DMA Enable for XBAR_OUT3
        enum class Den3Val {
            v0=0x00000000,     ///<DMA disabled
            v1=0x00000001,     ///<DMA enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Den3Val> den3{}; 
        namespace Den3ValC{
            constexpr Register::FieldValue<decltype(den3)::Type,Den3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(den3)::Type,Den3Val::v1> v1{};
        }
        ///Interrupt Enable for XBAR_OUT3
        enum class Ien3Val {
            v0=0x00000000,     ///<Interrupt disabled
            v1=0x00000001,     ///<Interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ien3Val> ien3{}; 
        namespace Ien3ValC{
            constexpr Register::FieldValue<decltype(ien3)::Type,Ien3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ien3)::Type,Ien3Val::v1> v1{};
        }
        ///Active edge for edge detection on XBAR_OUT3
        enum class Edge3Val {
            v00=0x00000000,     ///<STS3 never asserts
            v01=0x00000001,     ///<STS3 asserts on rising edges of XBAR_OUT3
            v10=0x00000002,     ///<STS3 asserts on falling edges of XBAR_OUT3
            v11=0x00000003,     ///<STS3 asserts on rising and falling edges of XBAR_OUT3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Edge3Val> edge3{}; 
        namespace Edge3ValC{
            constexpr Register::FieldValue<decltype(edge3)::Type,Edge3Val::v00> v00{};
            constexpr Register::FieldValue<decltype(edge3)::Type,Edge3Val::v01> v01{};
            constexpr Register::FieldValue<decltype(edge3)::Type,Edge3Val::v10> v10{};
            constexpr Register::FieldValue<decltype(edge3)::Type,Edge3Val::v11> v11{};
        }
        ///Edge detection status for XBAR_OUT3
        enum class Sts3Val {
            v0=0x00000000,     ///<Active edge not yet detected on XBAR_OUT3
            v1=0x00000001,     ///<Active edge detected on XBAR_OUT3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Sts3Val> sts3{}; 
        namespace Sts3ValC{
            constexpr Register::FieldValue<decltype(sts3)::Type,Sts3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sts3)::Type,Sts3Val::v1> v1{};
        }
    }
}
