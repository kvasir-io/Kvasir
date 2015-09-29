#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Crossbar Switch
    namespace XbaraSel0{    ///<Crossbar A Select Register 0
        using Addr = Register::Address<0x40059000,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel0{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel1{}; 
    }
    namespace XbaraSel1{    ///<Crossbar A Select Register 1
        using Addr = Register::Address<0x40059002,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel2{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel3{}; 
    }
    namespace XbaraSel2{    ///<Crossbar A Select Register 2
        using Addr = Register::Address<0x40059004,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel4{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel5{}; 
    }
    namespace XbaraSel3{    ///<Crossbar A Select Register 3
        using Addr = Register::Address<0x40059006,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel6{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel7{}; 
    }
    namespace XbaraSel4{    ///<Crossbar A Select Register 4
        using Addr = Register::Address<0x40059008,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel8{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel9{}; 
    }
    namespace XbaraSel5{    ///<Crossbar A Select Register 5
        using Addr = Register::Address<0x4005900a,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel10{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel11{}; 
    }
    namespace XbaraSel6{    ///<Crossbar A Select Register 6
        using Addr = Register::Address<0x4005900c,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel12{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel13{}; 
    }
    namespace XbaraSel7{    ///<Crossbar A Select Register 7
        using Addr = Register::Address<0x4005900e,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel14{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel15{}; 
    }
    namespace XbaraSel8{    ///<Crossbar A Select Register 8
        using Addr = Register::Address<0x40059010,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel16{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel17{}; 
    }
    namespace XbaraSel9{    ///<Crossbar A Select Register 9
        using Addr = Register::Address<0x40059012,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel18{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel19{}; 
    }
    namespace XbaraSel10{    ///<Crossbar A Select Register 10
        using Addr = Register::Address<0x40059014,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel20{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel21{}; 
    }
    namespace XbaraSel11{    ///<Crossbar A Select Register 11
        using Addr = Register::Address<0x40059016,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel22{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel23{}; 
    }
    namespace XbaraSel12{    ///<Crossbar A Select Register 12
        using Addr = Register::Address<0x40059018,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel24{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel25{}; 
    }
    namespace XbaraSel13{    ///<Crossbar A Select Register 13
        using Addr = Register::Address<0x4005901a,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel26{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel27{}; 
    }
    namespace XbaraSel14{    ///<Crossbar A Select Register 14
        using Addr = Register::Address<0x4005901c,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel28{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel29{}; 
    }
    namespace XbaraSel15{    ///<Crossbar A Select Register 15
        using Addr = Register::Address<0x4005901e,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel30{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel31{}; 
    }
    namespace XbaraSel16{    ///<Crossbar A Select Register 16
        using Addr = Register::Address<0x40059020,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel32{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel33{}; 
    }
    namespace XbaraSel17{    ///<Crossbar A Select Register 17
        using Addr = Register::Address<0x40059022,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel34{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel35{}; 
    }
    namespace XbaraSel18{    ///<Crossbar A Select Register 18
        using Addr = Register::Address<0x40059024,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel36{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel37{}; 
    }
    namespace XbaraSel19{    ///<Crossbar A Select Register 19
        using Addr = Register::Address<0x40059026,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel38{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel39{}; 
    }
    namespace XbaraSel20{    ///<Crossbar A Select Register 20
        using Addr = Register::Address<0x40059028,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel40{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel41{}; 
    }
    namespace XbaraSel21{    ///<Crossbar A Select Register 21
        using Addr = Register::Address<0x4005902a,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel42{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel43{}; 
    }
    namespace XbaraSel22{    ///<Crossbar A Select Register 22
        using Addr = Register::Address<0x4005902c,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel44{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel45{}; 
    }
    namespace XbaraSel23{    ///<Crossbar A Select Register 23
        using Addr = Register::Address<0x4005902e,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel46{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel47{}; 
    }
    namespace XbaraSel24{    ///<Crossbar A Select Register 24
        using Addr = Register::Address<0x40059030,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel48{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel49{}; 
    }
    namespace XbaraSel25{    ///<Crossbar A Select Register 25
        using Addr = Register::Address<0x40059032,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel50{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel51{}; 
    }
    namespace XbaraSel26{    ///<Crossbar A Select Register 26
        using Addr = Register::Address<0x40059034,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel52{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel53{}; 
    }
    namespace XbaraSel27{    ///<Crossbar A Select Register 27
        using Addr = Register::Address<0x40059036,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel54{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel55{}; 
    }
    namespace XbaraSel28{    ///<Crossbar A Select Register 28
        using Addr = Register::Address<0x40059038,0xffffc0c0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel56{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> sel57{}; 
    }
    namespace XbaraSel29{    ///<Crossbar A Select Register 29
        using Addr = Register::Address<0x4005903a,0xffffffc0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> sel58{}; 
    }
    namespace XbaraCtrl0{    ///<Crossbar A Control Register 0
        using Addr = Register::Address<0x4005903c,0xffffe0e0,0,unsigned>;
        ///DMA Enable for XBAR_OUT0
        enum class den0Val {
            v0=0x00000000,     ///<DMA disabled
            v1=0x00000001,     ///<DMA enabled
        };
        namespace den0ValC{
            constexpr MPL::Value<den0Val,den0Val::v0> v0{};
            constexpr MPL::Value<den0Val,den0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,den0Val> den0{}; 
        ///Interrupt Enable for XBAR_OUT0
        enum class ien0Val {
            v0=0x00000000,     ///<Interrupt disabled
            v1=0x00000001,     ///<Interrupt enabled
        };
        namespace ien0ValC{
            constexpr MPL::Value<ien0Val,ien0Val::v0> v0{};
            constexpr MPL::Value<ien0Val,ien0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ien0Val> ien0{}; 
        ///Active edge for edge detection on XBAR_OUT0
        enum class edge0Val {
            v00=0x00000000,     ///<STS0 never asserts
            v01=0x00000001,     ///<STS0 asserts on rising edges of XBAR_OUT0
            v10=0x00000002,     ///<STS0 asserts on falling edges of XBAR_OUT0
            v11=0x00000003,     ///<STS0 asserts on rising and falling edges of XBAR_OUT0
        };
        namespace edge0ValC{
            constexpr MPL::Value<edge0Val,edge0Val::v00> v00{};
            constexpr MPL::Value<edge0Val,edge0Val::v01> v01{};
            constexpr MPL::Value<edge0Val,edge0Val::v10> v10{};
            constexpr MPL::Value<edge0Val,edge0Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,edge0Val> edge0{}; 
        ///Edge detection status for XBAR_OUT0
        enum class sts0Val {
            v0=0x00000000,     ///<Active edge not yet detected on XBAR_OUT0
            v1=0x00000001,     ///<Active edge detected on XBAR_OUT0
        };
        namespace sts0ValC{
            constexpr MPL::Value<sts0Val,sts0Val::v0> v0{};
            constexpr MPL::Value<sts0Val,sts0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,sts0Val> sts0{}; 
        ///DMA Enable for XBAR_OUT1
        enum class den1Val {
            v0=0x00000000,     ///<DMA disabled
            v1=0x00000001,     ///<DMA enabled
        };
        namespace den1ValC{
            constexpr MPL::Value<den1Val,den1Val::v0> v0{};
            constexpr MPL::Value<den1Val,den1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,den1Val> den1{}; 
        ///Interrupt Enable for XBAR_OUT1
        enum class ien1Val {
            v0=0x00000000,     ///<Interrupt disabled
            v1=0x00000001,     ///<Interrupt enabled
        };
        namespace ien1ValC{
            constexpr MPL::Value<ien1Val,ien1Val::v0> v0{};
            constexpr MPL::Value<ien1Val,ien1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ien1Val> ien1{}; 
        ///Active edge for edge detection on XBAR_OUT1
        enum class edge1Val {
            v00=0x00000000,     ///<STS1 never asserts
            v01=0x00000001,     ///<STS1 asserts on rising edges of XBAR_OUT1
            v10=0x00000002,     ///<STS1 asserts on falling edges of XBAR_OUT1
            v11=0x00000003,     ///<STS1 asserts on rising and falling edges of XBAR_OUT1
        };
        namespace edge1ValC{
            constexpr MPL::Value<edge1Val,edge1Val::v00> v00{};
            constexpr MPL::Value<edge1Val,edge1Val::v01> v01{};
            constexpr MPL::Value<edge1Val,edge1Val::v10> v10{};
            constexpr MPL::Value<edge1Val,edge1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,edge1Val> edge1{}; 
        ///Edge detection status for XBAR_OUT1
        enum class sts1Val {
            v0=0x00000000,     ///<Active edge not yet detected on XBAR_OUT1
            v1=0x00000001,     ///<Active edge detected on XBAR_OUT1
        };
        namespace sts1ValC{
            constexpr MPL::Value<sts1Val,sts1Val::v0> v0{};
            constexpr MPL::Value<sts1Val,sts1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,sts1Val> sts1{}; 
    }
    namespace XbaraCtrl1{    ///<Crossbar A Control Register 1
        using Addr = Register::Address<0x4005903e,0xffffe0e0,0,unsigned>;
        ///DMA Enable for XBAR_OUT2
        enum class den2Val {
            v0=0x00000000,     ///<DMA disabled
            v1=0x00000001,     ///<DMA enabled
        };
        namespace den2ValC{
            constexpr MPL::Value<den2Val,den2Val::v0> v0{};
            constexpr MPL::Value<den2Val,den2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,den2Val> den2{}; 
        ///Interrupt Enable for XBAR_OUT2
        enum class ien2Val {
            v0=0x00000000,     ///<Interrupt disabled
            v1=0x00000001,     ///<Interrupt enabled
        };
        namespace ien2ValC{
            constexpr MPL::Value<ien2Val,ien2Val::v0> v0{};
            constexpr MPL::Value<ien2Val,ien2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ien2Val> ien2{}; 
        ///Active edge for edge detection on XBAR_OUT2
        enum class edge2Val {
            v00=0x00000000,     ///<STS2 never asserts
            v01=0x00000001,     ///<STS2 asserts on rising edges of XBAR_OUT2
            v10=0x00000002,     ///<STS2 asserts on falling edges of XBAR_OUT2
            v11=0x00000003,     ///<STS2 asserts on rising and falling edges of XBAR_OUT2
        };
        namespace edge2ValC{
            constexpr MPL::Value<edge2Val,edge2Val::v00> v00{};
            constexpr MPL::Value<edge2Val,edge2Val::v01> v01{};
            constexpr MPL::Value<edge2Val,edge2Val::v10> v10{};
            constexpr MPL::Value<edge2Val,edge2Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,edge2Val> edge2{}; 
        ///Edge detection status for XBAR_OUT2
        enum class sts2Val {
            v0=0x00000000,     ///<Active edge not yet detected on XBAR_OUT2
            v1=0x00000001,     ///<Active edge detected on XBAR_OUT2
        };
        namespace sts2ValC{
            constexpr MPL::Value<sts2Val,sts2Val::v0> v0{};
            constexpr MPL::Value<sts2Val,sts2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,sts2Val> sts2{}; 
        ///DMA Enable for XBAR_OUT3
        enum class den3Val {
            v0=0x00000000,     ///<DMA disabled
            v1=0x00000001,     ///<DMA enabled
        };
        namespace den3ValC{
            constexpr MPL::Value<den3Val,den3Val::v0> v0{};
            constexpr MPL::Value<den3Val,den3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,den3Val> den3{}; 
        ///Interrupt Enable for XBAR_OUT3
        enum class ien3Val {
            v0=0x00000000,     ///<Interrupt disabled
            v1=0x00000001,     ///<Interrupt enabled
        };
        namespace ien3ValC{
            constexpr MPL::Value<ien3Val,ien3Val::v0> v0{};
            constexpr MPL::Value<ien3Val,ien3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ien3Val> ien3{}; 
        ///Active edge for edge detection on XBAR_OUT3
        enum class edge3Val {
            v00=0x00000000,     ///<STS3 never asserts
            v01=0x00000001,     ///<STS3 asserts on rising edges of XBAR_OUT3
            v10=0x00000002,     ///<STS3 asserts on falling edges of XBAR_OUT3
            v11=0x00000003,     ///<STS3 asserts on rising and falling edges of XBAR_OUT3
        };
        namespace edge3ValC{
            constexpr MPL::Value<edge3Val,edge3Val::v00> v00{};
            constexpr MPL::Value<edge3Val,edge3Val::v01> v01{};
            constexpr MPL::Value<edge3Val,edge3Val::v10> v10{};
            constexpr MPL::Value<edge3Val,edge3Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,edge3Val> edge3{}; 
        ///Edge detection status for XBAR_OUT3
        enum class sts3Val {
            v0=0x00000000,     ///<Active edge not yet detected on XBAR_OUT3
            v1=0x00000001,     ///<Active edge detected on XBAR_OUT3
        };
        namespace sts3ValC{
            constexpr MPL::Value<sts3Val,sts3Val::v0> v0{};
            constexpr MPL::Value<sts3Val,sts3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,sts3Val> sts3{}; 
    }
}
