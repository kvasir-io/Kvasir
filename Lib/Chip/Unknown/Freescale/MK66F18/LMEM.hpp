#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Local Memory Controller
    namespace LmemPcccr{    ///<Cache control register
        using Addr = Register::Address<0xe0082000,0x70fffff0,0,unsigned>;
        ///Cache enable
        enum class encacheVal {
            v0=0x00000000,     ///<Cache disabled
            v1=0x00000001,     ///<Cache enabled
        };
        namespace encacheValC{
            constexpr MPL::Value<encacheVal,encacheVal::v0> v0{};
            constexpr MPL::Value<encacheVal,encacheVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,encacheVal> encache{}; 
        ///Enable Write Buffer
        enum class enwrbufVal {
            v0=0x00000000,     ///<Write buffer disabled
            v1=0x00000001,     ///<Write buffer enabled
        };
        namespace enwrbufValC{
            constexpr MPL::Value<enwrbufVal,enwrbufVal::v0> v0{};
            constexpr MPL::Value<enwrbufVal,enwrbufVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,enwrbufVal> enwrbuf{}; 
        ///Forces all cacheable spaces to write through
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pccr2{}; 
        ///Forces no allocation on cache misses (must also have ACCR2 asserted)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pccr3{}; 
        ///Invalidate Way 0
        enum class invw0Val {
            v0=0x00000000,     ///<No operation
            v1=0x00000001,     ///<When setting the GO bit, invalidate all lines in way 0.
        };
        namespace invw0ValC{
            constexpr MPL::Value<invw0Val,invw0Val::v0> v0{};
            constexpr MPL::Value<invw0Val,invw0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,invw0Val> invw0{}; 
        ///Push Way 0
        enum class pushw0Val {
            v0=0x00000000,     ///<No operation
            v1=0x00000001,     ///<When setting the GO bit, push all modified lines in way 0
        };
        namespace pushw0ValC{
            constexpr MPL::Value<pushw0Val,pushw0Val::v0> v0{};
            constexpr MPL::Value<pushw0Val,pushw0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,pushw0Val> pushw0{}; 
        ///Invalidate Way 1
        enum class invw1Val {
            v0=0x00000000,     ///<No operation
            v1=0x00000001,     ///<When setting the GO bit, invalidate all lines in way 1
        };
        namespace invw1ValC{
            constexpr MPL::Value<invw1Val,invw1Val::v0> v0{};
            constexpr MPL::Value<invw1Val,invw1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,invw1Val> invw1{}; 
        ///Push Way 1
        enum class pushw1Val {
            v0=0x00000000,     ///<No operation
            v1=0x00000001,     ///<When setting the GO bit, push all modified lines in way 1
        };
        namespace pushw1ValC{
            constexpr MPL::Value<pushw1Val,pushw1Val::v0> v0{};
            constexpr MPL::Value<pushw1Val,pushw1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,pushw1Val> pushw1{}; 
        ///Initiate Cache Command
        enum class goVal {
            v0=0x00000000,     ///<Write: no effect. Read: no cache command active.
            v1=0x00000001,     ///<Write: initiate command indicated by bits 27-24. Read: cache command active.
        };
        namespace goValC{
            constexpr MPL::Value<goVal,goVal::v0> v0{};
            constexpr MPL::Value<goVal,goVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,goVal> go{}; 
    }
    namespace LmemPcclcr{    ///<Cache line control register
        using Addr = Register::Address<0xe0082004,0xf08eb002,0,unsigned>;
        ///Initiate Cache Line Command
        enum class lgoVal {
            v0=0x00000000,     ///<Write: no effect. Read: no line command active.
            v1=0x00000001,     ///<Write: initiate line command indicated by bits 27-24. Read: line command active.
        };
        namespace lgoValC{
            constexpr MPL::Value<lgoVal,lgoVal::v0> v0{};
            constexpr MPL::Value<lgoVal,lgoVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,lgoVal> lgo{}; 
        ///Cache address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,2),Register::ReadWriteAccess,unsigned> cacheaddr{}; 
        ///Way select
        enum class wselVal {
            v0=0x00000000,     ///<Way 0
            v1=0x00000001,     ///<Way 1
        };
        namespace wselValC{
            constexpr MPL::Value<wselVal,wselVal::v0> v0{};
            constexpr MPL::Value<wselVal,wselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,wselVal> wsel{}; 
        ///Tag/Data Select
        enum class tdselVal {
            v0=0x00000000,     ///<Data
            v1=0x00000001,     ///<Tag
        };
        namespace tdselValC{
            constexpr MPL::Value<tdselVal,tdselVal::v0> v0{};
            constexpr MPL::Value<tdselVal,tdselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,tdselVal> tdsel{}; 
        ///Line Command Initial Valid Bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lcivb{}; 
        ///Line Command Initial Modified Bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lcimb{}; 
        ///Line Command Way
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lcway{}; 
        ///Line Command
        enum class lcmdVal {
            v00=0x00000000,     ///<Search and read or write
            v01=0x00000001,     ///<Invalidate
            v10=0x00000002,     ///<Push
            v11=0x00000003,     ///<Clear
        };
        namespace lcmdValC{
            constexpr MPL::Value<lcmdVal,lcmdVal::v00> v00{};
            constexpr MPL::Value<lcmdVal,lcmdVal::v01> v01{};
            constexpr MPL::Value<lcmdVal,lcmdVal::v10> v10{};
            constexpr MPL::Value<lcmdVal,lcmdVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,lcmdVal> lcmd{}; 
        ///Line Address Select
        enum class ladselVal {
            v0=0x00000000,     ///<Cache address
            v1=0x00000001,     ///<Physical address
        };
        namespace ladselValC{
            constexpr MPL::Value<ladselVal,ladselVal::v0> v0{};
            constexpr MPL::Value<ladselVal,ladselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ladselVal> ladsel{}; 
        ///Line access type
        enum class laccVal {
            v0=0x00000000,     ///<Read
            v1=0x00000001,     ///<Write
        };
        namespace laccValC{
            constexpr MPL::Value<laccVal,laccVal::v0> v0{};
            constexpr MPL::Value<laccVal,laccVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,laccVal> lacc{}; 
    }
    namespace LmemPccsar{    ///<Cache search address register
        using Addr = Register::Address<0xe0082008,0x00000002,0,unsigned>;
        ///Initiate Cache Line Command
        enum class lgoVal {
            v0=0x00000000,     ///<Write: no effect. Read: no line command active.
            v1=0x00000001,     ///<Write: initiate line command indicated by bits CLCR[27:24]. Read: line command active.
        };
        namespace lgoValC{
            constexpr MPL::Value<lgoVal,lgoVal::v0> v0{};
            constexpr MPL::Value<lgoVal,lgoVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,lgoVal> lgo{}; 
        ///Physical Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> phyaddr{}; 
    }
    namespace LmemPcccvr{    ///<Cache read/write value register
        using Addr = Register::Address<0xe008200c,0x00000000,0,unsigned>;
        ///Cache read/write Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace LmemPccrmr{    ///<Cache regions mode register
        using Addr = Register::Address<0xe0082020,0x00000000,0,unsigned>;
        ///Region 15 mode
        enum class r15Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        namespace r15ValC{
            constexpr MPL::Value<r15Val,r15Val::v00> v00{};
            constexpr MPL::Value<r15Val,r15Val::v01> v01{};
            constexpr MPL::Value<r15Val,r15Val::v10> v10{};
            constexpr MPL::Value<r15Val,r15Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,r15Val> r15{}; 
        ///Region 14 mode
        enum class r14Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        namespace r14ValC{
            constexpr MPL::Value<r14Val,r14Val::v00> v00{};
            constexpr MPL::Value<r14Val,r14Val::v01> v01{};
            constexpr MPL::Value<r14Val,r14Val::v10> v10{};
            constexpr MPL::Value<r14Val,r14Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,r14Val> r14{}; 
        ///Region 13 mode
        enum class r13Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        namespace r13ValC{
            constexpr MPL::Value<r13Val,r13Val::v00> v00{};
            constexpr MPL::Value<r13Val,r13Val::v01> v01{};
            constexpr MPL::Value<r13Val,r13Val::v10> v10{};
            constexpr MPL::Value<r13Val,r13Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,r13Val> r13{}; 
        ///Region 12 mode
        enum class r12Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        namespace r12ValC{
            constexpr MPL::Value<r12Val,r12Val::v00> v00{};
            constexpr MPL::Value<r12Val,r12Val::v01> v01{};
            constexpr MPL::Value<r12Val,r12Val::v10> v10{};
            constexpr MPL::Value<r12Val,r12Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,r12Val> r12{}; 
        ///Region 11 mode
        enum class r11Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        namespace r11ValC{
            constexpr MPL::Value<r11Val,r11Val::v00> v00{};
            constexpr MPL::Value<r11Val,r11Val::v01> v01{};
            constexpr MPL::Value<r11Val,r11Val::v10> v10{};
            constexpr MPL::Value<r11Val,r11Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,r11Val> r11{}; 
        ///Region 10 mode
        enum class r10Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        namespace r10ValC{
            constexpr MPL::Value<r10Val,r10Val::v00> v00{};
            constexpr MPL::Value<r10Val,r10Val::v01> v01{};
            constexpr MPL::Value<r10Val,r10Val::v10> v10{};
            constexpr MPL::Value<r10Val,r10Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,r10Val> r10{}; 
        ///Region 9 mode
        enum class r9Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        namespace r9ValC{
            constexpr MPL::Value<r9Val,r9Val::v00> v00{};
            constexpr MPL::Value<r9Val,r9Val::v01> v01{};
            constexpr MPL::Value<r9Val,r9Val::v10> v10{};
            constexpr MPL::Value<r9Val,r9Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,r9Val> r9{}; 
        ///Region 8 mode
        enum class r8Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        namespace r8ValC{
            constexpr MPL::Value<r8Val,r8Val::v00> v00{};
            constexpr MPL::Value<r8Val,r8Val::v01> v01{};
            constexpr MPL::Value<r8Val,r8Val::v10> v10{};
            constexpr MPL::Value<r8Val,r8Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,r8Val> r8{}; 
        ///Region 7 mode
        enum class r7Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        namespace r7ValC{
            constexpr MPL::Value<r7Val,r7Val::v00> v00{};
            constexpr MPL::Value<r7Val,r7Val::v01> v01{};
            constexpr MPL::Value<r7Val,r7Val::v10> v10{};
            constexpr MPL::Value<r7Val,r7Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,r7Val> r7{}; 
        ///Region 6 mode
        enum class r6Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        namespace r6ValC{
            constexpr MPL::Value<r6Val,r6Val::v00> v00{};
            constexpr MPL::Value<r6Val,r6Val::v01> v01{};
            constexpr MPL::Value<r6Val,r6Val::v10> v10{};
            constexpr MPL::Value<r6Val,r6Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,r6Val> r6{}; 
        ///Region 5 mode
        enum class r5Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        namespace r5ValC{
            constexpr MPL::Value<r5Val,r5Val::v00> v00{};
            constexpr MPL::Value<r5Val,r5Val::v01> v01{};
            constexpr MPL::Value<r5Val,r5Val::v10> v10{};
            constexpr MPL::Value<r5Val,r5Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,r5Val> r5{}; 
        ///Region 4 mode
        enum class r4Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        namespace r4ValC{
            constexpr MPL::Value<r4Val,r4Val::v00> v00{};
            constexpr MPL::Value<r4Val,r4Val::v01> v01{};
            constexpr MPL::Value<r4Val,r4Val::v10> v10{};
            constexpr MPL::Value<r4Val,r4Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,r4Val> r4{}; 
        ///Region 3 mode
        enum class r3Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        namespace r3ValC{
            constexpr MPL::Value<r3Val,r3Val::v00> v00{};
            constexpr MPL::Value<r3Val,r3Val::v01> v01{};
            constexpr MPL::Value<r3Val,r3Val::v10> v10{};
            constexpr MPL::Value<r3Val,r3Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,r3Val> r3{}; 
        ///Region 2 mode
        enum class r2Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        namespace r2ValC{
            constexpr MPL::Value<r2Val,r2Val::v00> v00{};
            constexpr MPL::Value<r2Val,r2Val::v01> v01{};
            constexpr MPL::Value<r2Val,r2Val::v10> v10{};
            constexpr MPL::Value<r2Val,r2Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,r2Val> r2{}; 
        ///Region 1 mode
        enum class r1Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        namespace r1ValC{
            constexpr MPL::Value<r1Val,r1Val::v00> v00{};
            constexpr MPL::Value<r1Val,r1Val::v01> v01{};
            constexpr MPL::Value<r1Val,r1Val::v10> v10{};
            constexpr MPL::Value<r1Val,r1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,r1Val> r1{}; 
        ///Region 0 mode
        enum class r0Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        namespace r0ValC{
            constexpr MPL::Value<r0Val,r0Val::v00> v00{};
            constexpr MPL::Value<r0Val,r0Val::v01> v01{};
            constexpr MPL::Value<r0Val,r0Val::v10> v10{};
            constexpr MPL::Value<r0Val,r0Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,r0Val> r0{}; 
    }
}
