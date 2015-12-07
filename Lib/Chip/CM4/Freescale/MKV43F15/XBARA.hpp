#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Crossbar Switch
    namespace XbaraSel0{    ///<Crossbar A Select Register 0
        using Addr = Register::Address<0x40059000,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel0{}; 
        namespace Sel0ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel1{}; 
        namespace Sel1ValC{
        }
    }
    namespace XbaraSel1{    ///<Crossbar A Select Register 1
        using Addr = Register::Address<0x40059002,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel2{}; 
        namespace Sel2ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel3{}; 
        namespace Sel3ValC{
        }
    }
    namespace XbaraSel2{    ///<Crossbar A Select Register 2
        using Addr = Register::Address<0x40059004,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel4{}; 
        namespace Sel4ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel5{}; 
        namespace Sel5ValC{
        }
    }
    namespace XbaraSel3{    ///<Crossbar A Select Register 3
        using Addr = Register::Address<0x40059006,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel6{}; 
        namespace Sel6ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel7{}; 
        namespace Sel7ValC{
        }
    }
    namespace XbaraSel4{    ///<Crossbar A Select Register 4
        using Addr = Register::Address<0x40059008,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel8{}; 
        namespace Sel8ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel9{}; 
        namespace Sel9ValC{
        }
    }
    namespace XbaraSel5{    ///<Crossbar A Select Register 5
        using Addr = Register::Address<0x4005900a,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel10{}; 
        namespace Sel10ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel11{}; 
        namespace Sel11ValC{
        }
    }
    namespace XbaraSel6{    ///<Crossbar A Select Register 6
        using Addr = Register::Address<0x4005900c,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel12{}; 
        namespace Sel12ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel13{}; 
        namespace Sel13ValC{
        }
    }
    namespace XbaraSel7{    ///<Crossbar A Select Register 7
        using Addr = Register::Address<0x4005900e,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel14{}; 
        namespace Sel14ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel15{}; 
        namespace Sel15ValC{
        }
    }
    namespace XbaraSel8{    ///<Crossbar A Select Register 8
        using Addr = Register::Address<0x40059010,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel16{}; 
        namespace Sel16ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel17{}; 
        namespace Sel17ValC{
        }
    }
    namespace XbaraSel9{    ///<Crossbar A Select Register 9
        using Addr = Register::Address<0x40059012,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel18{}; 
        namespace Sel18ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel19{}; 
        namespace Sel19ValC{
        }
    }
    namespace XbaraSel10{    ///<Crossbar A Select Register 10
        using Addr = Register::Address<0x40059014,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel20{}; 
        namespace Sel20ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel21{}; 
        namespace Sel21ValC{
        }
    }
    namespace XbaraSel11{    ///<Crossbar A Select Register 11
        using Addr = Register::Address<0x40059016,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel22{}; 
        namespace Sel22ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel23{}; 
        namespace Sel23ValC{
        }
    }
    namespace XbaraSel12{    ///<Crossbar A Select Register 12
        using Addr = Register::Address<0x40059018,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel24{}; 
        namespace Sel24ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel25{}; 
        namespace Sel25ValC{
        }
    }
    namespace XbaraSel13{    ///<Crossbar A Select Register 13
        using Addr = Register::Address<0x4005901a,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel26{}; 
        namespace Sel26ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel27{}; 
        namespace Sel27ValC{
        }
    }
    namespace XbaraSel14{    ///<Crossbar A Select Register 14
        using Addr = Register::Address<0x4005901c,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel28{}; 
        namespace Sel28ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel29{}; 
        namespace Sel29ValC{
        }
    }
    namespace XbaraSel15{    ///<Crossbar A Select Register 15
        using Addr = Register::Address<0x4005901e,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel30{}; 
        namespace Sel30ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel31{}; 
        namespace Sel31ValC{
        }
    }
    namespace XbaraSel16{    ///<Crossbar A Select Register 16
        using Addr = Register::Address<0x40059020,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel32{}; 
        namespace Sel32ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel33{}; 
        namespace Sel33ValC{
        }
    }
    namespace XbaraSel17{    ///<Crossbar A Select Register 17
        using Addr = Register::Address<0x40059022,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel34{}; 
        namespace Sel34ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel35{}; 
        namespace Sel35ValC{
        }
    }
    namespace XbaraSel18{    ///<Crossbar A Select Register 18
        using Addr = Register::Address<0x40059024,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel36{}; 
        namespace Sel36ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel37{}; 
        namespace Sel37ValC{
        }
    }
    namespace XbaraSel19{    ///<Crossbar A Select Register 19
        using Addr = Register::Address<0x40059026,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel38{}; 
        namespace Sel38ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel39{}; 
        namespace Sel39ValC{
        }
    }
    namespace XbaraSel20{    ///<Crossbar A Select Register 20
        using Addr = Register::Address<0x40059028,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel40{}; 
        namespace Sel40ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel41{}; 
        namespace Sel41ValC{
        }
    }
    namespace XbaraSel21{    ///<Crossbar A Select Register 21
        using Addr = Register::Address<0x4005902a,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel42{}; 
        namespace Sel42ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel43{}; 
        namespace Sel43ValC{
        }
    }
    namespace XbaraSel22{    ///<Crossbar A Select Register 22
        using Addr = Register::Address<0x4005902c,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel44{}; 
        namespace Sel44ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel45{}; 
        namespace Sel45ValC{
        }
    }
    namespace XbaraSel23{    ///<Crossbar A Select Register 23
        using Addr = Register::Address<0x4005902e,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel46{}; 
        namespace Sel46ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel47{}; 
        namespace Sel47ValC{
        }
    }
    namespace XbaraSel24{    ///<Crossbar A Select Register 24
        using Addr = Register::Address<0x40059030,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel48{}; 
        namespace Sel48ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel49{}; 
        namespace Sel49ValC{
        }
    }
    namespace XbaraSel25{    ///<Crossbar A Select Register 25
        using Addr = Register::Address<0x40059032,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel50{}; 
        namespace Sel50ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel51{}; 
        namespace Sel51ValC{
        }
    }
    namespace XbaraSel26{    ///<Crossbar A Select Register 26
        using Addr = Register::Address<0x40059034,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel52{}; 
        namespace Sel52ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel53{}; 
        namespace Sel53ValC{
        }
    }
    namespace XbaraSel27{    ///<Crossbar A Select Register 27
        using Addr = Register::Address<0x40059036,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel54{}; 
        namespace Sel54ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel55{}; 
        namespace Sel55ValC{
        }
    }
    namespace XbaraSel28{    ///<Crossbar A Select Register 28
        using Addr = Register::Address<0x40059038,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel56{}; 
        namespace Sel56ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel57{}; 
        namespace Sel57ValC{
        }
    }
    namespace XbaraSel29{    ///<Crossbar A Select Register 29
        using Addr = Register::Address<0x4005903a,0xffffffc0,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel58{}; 
        namespace Sel58ValC{
        }
    }
    namespace XbaraCtrl0{    ///<Crossbar A Control Register 0
        using Addr = Register::Address<0x4005903c,0xffffe0e0,0,unsigned>;
        ///DMA Enable for XBAR_OUT0
        enum class Den0Val {
            v0=0x00000000,     ///<DMA disabled
            v1=0x00000001,     ///<DMA enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Den0Val> den0{}; 
        namespace Den0ValC{
            constexpr Register::FieldValue<decltype(den0),Den0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(den0),Den0Val::v1> v1{};
        }
        ///Interrupt Enable for XBAR_OUT0
        enum class Ien0Val {
            v0=0x00000000,     ///<Interrupt disabled
            v1=0x00000001,     ///<Interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ien0Val> ien0{}; 
        namespace Ien0ValC{
            constexpr Register::FieldValue<decltype(ien0),Ien0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ien0),Ien0Val::v1> v1{};
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
            constexpr Register::FieldValue<decltype(edge0),Edge0Val::v00> v00{};
            constexpr Register::FieldValue<decltype(edge0),Edge0Val::v01> v01{};
            constexpr Register::FieldValue<decltype(edge0),Edge0Val::v10> v10{};
            constexpr Register::FieldValue<decltype(edge0),Edge0Val::v11> v11{};
        }
        ///Edge detection status for XBAR_OUT0
        enum class Sts0Val {
            v0=0x00000000,     ///<Active edge not yet detected on XBAR_OUT0
            v1=0x00000001,     ///<Active edge detected on XBAR_OUT0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Sts0Val> sts0{}; 
        namespace Sts0ValC{
            constexpr Register::FieldValue<decltype(sts0),Sts0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sts0),Sts0Val::v1> v1{};
        }
        ///DMA Enable for XBAR_OUT1
        enum class Den1Val {
            v0=0x00000000,     ///<DMA disabled
            v1=0x00000001,     ///<DMA enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Den1Val> den1{}; 
        namespace Den1ValC{
            constexpr Register::FieldValue<decltype(den1),Den1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(den1),Den1Val::v1> v1{};
        }
        ///Interrupt Enable for XBAR_OUT1
        enum class Ien1Val {
            v0=0x00000000,     ///<Interrupt disabled
            v1=0x00000001,     ///<Interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ien1Val> ien1{}; 
        namespace Ien1ValC{
            constexpr Register::FieldValue<decltype(ien1),Ien1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ien1),Ien1Val::v1> v1{};
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
            constexpr Register::FieldValue<decltype(edge1),Edge1Val::v00> v00{};
            constexpr Register::FieldValue<decltype(edge1),Edge1Val::v01> v01{};
            constexpr Register::FieldValue<decltype(edge1),Edge1Val::v10> v10{};
            constexpr Register::FieldValue<decltype(edge1),Edge1Val::v11> v11{};
        }
        ///Edge detection status for XBAR_OUT1
        enum class Sts1Val {
            v0=0x00000000,     ///<Active edge not yet detected on XBAR_OUT1
            v1=0x00000001,     ///<Active edge detected on XBAR_OUT1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Sts1Val> sts1{}; 
        namespace Sts1ValC{
            constexpr Register::FieldValue<decltype(sts1),Sts1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sts1),Sts1Val::v1> v1{};
        }
    }
    namespace XbaraCtrl1{    ///<Crossbar A Control Register 1
        using Addr = Register::Address<0x4005903e,0xffffe0e0,0,unsigned>;
        ///DMA Enable for XBAR_OUT2
        enum class Den2Val {
            v0=0x00000000,     ///<DMA disabled
            v1=0x00000001,     ///<DMA enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Den2Val> den2{}; 
        namespace Den2ValC{
            constexpr Register::FieldValue<decltype(den2),Den2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(den2),Den2Val::v1> v1{};
        }
        ///Interrupt Enable for XBAR_OUT2
        enum class Ien2Val {
            v0=0x00000000,     ///<Interrupt disabled
            v1=0x00000001,     ///<Interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ien2Val> ien2{}; 
        namespace Ien2ValC{
            constexpr Register::FieldValue<decltype(ien2),Ien2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ien2),Ien2Val::v1> v1{};
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
            constexpr Register::FieldValue<decltype(edge2),Edge2Val::v00> v00{};
            constexpr Register::FieldValue<decltype(edge2),Edge2Val::v01> v01{};
            constexpr Register::FieldValue<decltype(edge2),Edge2Val::v10> v10{};
            constexpr Register::FieldValue<decltype(edge2),Edge2Val::v11> v11{};
        }
        ///Edge detection status for XBAR_OUT2
        enum class Sts2Val {
            v0=0x00000000,     ///<Active edge not yet detected on XBAR_OUT2
            v1=0x00000001,     ///<Active edge detected on XBAR_OUT2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Sts2Val> sts2{}; 
        namespace Sts2ValC{
            constexpr Register::FieldValue<decltype(sts2),Sts2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sts2),Sts2Val::v1> v1{};
        }
        ///DMA Enable for XBAR_OUT3
        enum class Den3Val {
            v0=0x00000000,     ///<DMA disabled
            v1=0x00000001,     ///<DMA enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Den3Val> den3{}; 
        namespace Den3ValC{
            constexpr Register::FieldValue<decltype(den3),Den3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(den3),Den3Val::v1> v1{};
        }
        ///Interrupt Enable for XBAR_OUT3
        enum class Ien3Val {
            v0=0x00000000,     ///<Interrupt disabled
            v1=0x00000001,     ///<Interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ien3Val> ien3{}; 
        namespace Ien3ValC{
            constexpr Register::FieldValue<decltype(ien3),Ien3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ien3),Ien3Val::v1> v1{};
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
            constexpr Register::FieldValue<decltype(edge3),Edge3Val::v00> v00{};
            constexpr Register::FieldValue<decltype(edge3),Edge3Val::v01> v01{};
            constexpr Register::FieldValue<decltype(edge3),Edge3Val::v10> v10{};
            constexpr Register::FieldValue<decltype(edge3),Edge3Val::v11> v11{};
        }
        ///Edge detection status for XBAR_OUT3
        enum class Sts3Val {
            v0=0x00000000,     ///<Active edge not yet detected on XBAR_OUT3
            v1=0x00000001,     ///<Active edge detected on XBAR_OUT3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Sts3Val> sts3{}; 
        namespace Sts3ValC{
            constexpr Register::FieldValue<decltype(sts3),Sts3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sts3),Sts3Val::v1> v1{};
        }
    }
}
