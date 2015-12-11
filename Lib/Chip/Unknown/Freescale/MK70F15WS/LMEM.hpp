#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Local Memory Controller
    namespace LmemPcccr{    ///<Cache control register
        using Addr = Register::Address<0xe0082000,0x70fffffc,0,unsigned>;
        ///Cache enable
        enum class EncacheVal {
            v0=0x00000000,     ///<Cache disabled
            v1=0x00000001,     ///<Cache enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EncacheVal> encache{}; 
        namespace EncacheValC{
            constexpr Register::FieldValue<decltype(encache)::Type,EncacheVal::v0> v0{};
            constexpr Register::FieldValue<decltype(encache)::Type,EncacheVal::v1> v1{};
        }
        ///Enable Write Buffer
        enum class EnwrbufVal {
            v0=0x00000000,     ///<Write buffer disabled
            v1=0x00000001,     ///<Write buffer enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EnwrbufVal> enwrbuf{}; 
        namespace EnwrbufValC{
            constexpr Register::FieldValue<decltype(enwrbuf)::Type,EnwrbufVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enwrbuf)::Type,EnwrbufVal::v1> v1{};
        }
        ///Invalidate Way 0
        enum class Invw0Val {
            v0=0x00000000,     ///<No operation
            v1=0x00000001,     ///<When setting the GO bit, invalidate all lines in way 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Invw0Val> invw0{}; 
        namespace Invw0ValC{
            constexpr Register::FieldValue<decltype(invw0)::Type,Invw0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(invw0)::Type,Invw0Val::v1> v1{};
        }
        ///Push Way 0
        enum class Pushw0Val {
            v0=0x00000000,     ///<No operation
            v1=0x00000001,     ///<When setting the GO bit, push all modified lines in way 0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Pushw0Val> pushw0{}; 
        namespace Pushw0ValC{
            constexpr Register::FieldValue<decltype(pushw0)::Type,Pushw0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pushw0)::Type,Pushw0Val::v1> v1{};
        }
        ///Invalidate Way 1
        enum class Invw1Val {
            v0=0x00000000,     ///<No operation
            v1=0x00000001,     ///<When setting the GO bit, invalidate all lines in way 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Invw1Val> invw1{}; 
        namespace Invw1ValC{
            constexpr Register::FieldValue<decltype(invw1)::Type,Invw1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(invw1)::Type,Invw1Val::v1> v1{};
        }
        ///Push Way 1
        enum class Pushw1Val {
            v0=0x00000000,     ///<No operation
            v1=0x00000001,     ///<When setting the GO bit, push all modified lines in way 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Pushw1Val> pushw1{}; 
        namespace Pushw1ValC{
            constexpr Register::FieldValue<decltype(pushw1)::Type,Pushw1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pushw1)::Type,Pushw1Val::v1> v1{};
        }
        ///Initiate Cache Command
        enum class GoVal {
            v0=0x00000000,     ///<Write: no effect. Read: no cache command active.
            v1=0x00000001,     ///<Write: initiate command indicated by bits 27-24. Read: cache command active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,GoVal> go{}; 
        namespace GoValC{
            constexpr Register::FieldValue<decltype(go)::Type,GoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(go)::Type,GoVal::v1> v1{};
        }
    }
    namespace LmemPcclcr{    ///<Cache line control register
        using Addr = Register::Address<0xe0082004,0xf08eb002,0,unsigned>;
        ///Initiate Cache Line Command
        enum class LgoVal {
            v0=0x00000000,     ///<Write: no effect. Read: no line command active.
            v1=0x00000001,     ///<Write: initiate line command indicated by bits 27-24. Read: line command active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,LgoVal> lgo{}; 
        namespace LgoValC{
            constexpr Register::FieldValue<decltype(lgo)::Type,LgoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lgo)::Type,LgoVal::v1> v1{};
        }
        ///Cache address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,2),Register::ReadWriteAccess,unsigned> cacheaddr{}; 
        ///Way select
        enum class WselVal {
            v0=0x00000000,     ///<Way 0
            v1=0x00000001,     ///<Way 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,WselVal> wsel{}; 
        namespace WselValC{
            constexpr Register::FieldValue<decltype(wsel)::Type,WselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wsel)::Type,WselVal::v1> v1{};
        }
        ///Tag/Data Select
        enum class TdselVal {
            v0=0x00000000,     ///<Data
            v1=0x00000001,     ///<Tag
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,TdselVal> tdsel{}; 
        namespace TdselValC{
            constexpr Register::FieldValue<decltype(tdsel)::Type,TdselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tdsel)::Type,TdselVal::v1> v1{};
        }
        ///Line Command Initial Valid Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lcivb{}; 
        ///Line Command Initial Modified Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lcimb{}; 
        ///Line Command Way
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lcway{}; 
        ///Line Command
        enum class LcmdVal {
            v00=0x00000000,     ///<Search and read or write
            v01=0x00000001,     ///<Invalidate
            v10=0x00000002,     ///<Push
            v11=0x00000003,     ///<Clear
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,LcmdVal> lcmd{}; 
        namespace LcmdValC{
            constexpr Register::FieldValue<decltype(lcmd)::Type,LcmdVal::v00> v00{};
            constexpr Register::FieldValue<decltype(lcmd)::Type,LcmdVal::v01> v01{};
            constexpr Register::FieldValue<decltype(lcmd)::Type,LcmdVal::v10> v10{};
            constexpr Register::FieldValue<decltype(lcmd)::Type,LcmdVal::v11> v11{};
        }
        ///Line Address Select
        enum class LadselVal {
            v0=0x00000000,     ///<Cache address
            v1=0x00000001,     ///<Physical address
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,LadselVal> ladsel{}; 
        namespace LadselValC{
            constexpr Register::FieldValue<decltype(ladsel)::Type,LadselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ladsel)::Type,LadselVal::v1> v1{};
        }
        ///Line access type
        enum class LaccVal {
            v0=0x00000000,     ///<Read
            v1=0x00000001,     ///<Write
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,LaccVal> lacc{}; 
        namespace LaccValC{
            constexpr Register::FieldValue<decltype(lacc)::Type,LaccVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lacc)::Type,LaccVal::v1> v1{};
        }
    }
    namespace LmemPccsar{    ///<Cache search address register
        using Addr = Register::Address<0xe0082008,0x00000002,0,unsigned>;
        ///Initiate Cache Line Command
        enum class LgoVal {
            v0=0x00000000,     ///<Write: no effect. Read: no line command active.
            v1=0x00000001,     ///<Write: initiate line command indicated by bits CLCR[27:24]. Read: line command active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,LgoVal> lgo{}; 
        namespace LgoValC{
            constexpr Register::FieldValue<decltype(lgo)::Type,LgoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lgo)::Type,LgoVal::v1> v1{};
        }
        ///Physical Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> phyaddr{}; 
    }
    namespace LmemPcccvr{    ///<Cache read/write value register
        using Addr = Register::Address<0xe008200c,0x00000000,0,unsigned>;
        ///Cache read/write Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace LmemPccrmr{    ///<Cache regions mode register
        using Addr = Register::Address<0xe0082020,0x00000000,0,unsigned>;
        ///Region 15 mode
        enum class R15Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,R15Val> r15{}; 
        namespace R15ValC{
            constexpr Register::FieldValue<decltype(r15)::Type,R15Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r15)::Type,R15Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r15)::Type,R15Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r15)::Type,R15Val::v11> v11{};
        }
        ///Region 14 mode
        enum class R14Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,R14Val> r14{}; 
        namespace R14ValC{
            constexpr Register::FieldValue<decltype(r14)::Type,R14Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r14)::Type,R14Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r14)::Type,R14Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r14)::Type,R14Val::v11> v11{};
        }
        ///Region 13 mode
        enum class R13Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,R13Val> r13{}; 
        namespace R13ValC{
            constexpr Register::FieldValue<decltype(r13)::Type,R13Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r13)::Type,R13Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r13)::Type,R13Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r13)::Type,R13Val::v11> v11{};
        }
        ///Region 12 mode
        enum class R12Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,R12Val> r12{}; 
        namespace R12ValC{
            constexpr Register::FieldValue<decltype(r12)::Type,R12Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r12)::Type,R12Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r12)::Type,R12Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r12)::Type,R12Val::v11> v11{};
        }
        ///Region 11 mode
        enum class R11Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,R11Val> r11{}; 
        namespace R11ValC{
            constexpr Register::FieldValue<decltype(r11)::Type,R11Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r11)::Type,R11Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r11)::Type,R11Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r11)::Type,R11Val::v11> v11{};
        }
        ///Region 10 mode
        enum class R10Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,R10Val> r10{}; 
        namespace R10ValC{
            constexpr Register::FieldValue<decltype(r10)::Type,R10Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r10)::Type,R10Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r10)::Type,R10Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r10)::Type,R10Val::v11> v11{};
        }
        ///Region 9 mode
        enum class R9Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,R9Val> r9{}; 
        namespace R9ValC{
            constexpr Register::FieldValue<decltype(r9)::Type,R9Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r9)::Type,R9Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r9)::Type,R9Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r9)::Type,R9Val::v11> v11{};
        }
        ///Region 8 mode
        enum class R8Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,R8Val> r8{}; 
        namespace R8ValC{
            constexpr Register::FieldValue<decltype(r8)::Type,R8Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r8)::Type,R8Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r8)::Type,R8Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r8)::Type,R8Val::v11> v11{};
        }
        ///Region 7 mode
        enum class R7Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,R7Val> r7{}; 
        namespace R7ValC{
            constexpr Register::FieldValue<decltype(r7)::Type,R7Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r7)::Type,R7Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r7)::Type,R7Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r7)::Type,R7Val::v11> v11{};
        }
        ///Region 6 mode
        enum class R6Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,R6Val> r6{}; 
        namespace R6ValC{
            constexpr Register::FieldValue<decltype(r6)::Type,R6Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r6)::Type,R6Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r6)::Type,R6Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r6)::Type,R6Val::v11> v11{};
        }
        ///Region 5 mode
        enum class R5Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,R5Val> r5{}; 
        namespace R5ValC{
            constexpr Register::FieldValue<decltype(r5)::Type,R5Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r5)::Type,R5Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r5)::Type,R5Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r5)::Type,R5Val::v11> v11{};
        }
        ///Region 4 mode
        enum class R4Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,R4Val> r4{}; 
        namespace R4ValC{
            constexpr Register::FieldValue<decltype(r4)::Type,R4Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r4)::Type,R4Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r4)::Type,R4Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r4)::Type,R4Val::v11> v11{};
        }
        ///Region 3 mode
        enum class R3Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,R3Val> r3{}; 
        namespace R3ValC{
            constexpr Register::FieldValue<decltype(r3)::Type,R3Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r3)::Type,R3Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r3)::Type,R3Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r3)::Type,R3Val::v11> v11{};
        }
        ///Region 2 mode
        enum class R2Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,R2Val> r2{}; 
        namespace R2ValC{
            constexpr Register::FieldValue<decltype(r2)::Type,R2Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r2)::Type,R2Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r2)::Type,R2Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r2)::Type,R2Val::v11> v11{};
        }
        ///Region 1 mode
        enum class R1Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,R1Val> r1{}; 
        namespace R1ValC{
            constexpr Register::FieldValue<decltype(r1)::Type,R1Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r1)::Type,R1Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r1)::Type,R1Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r1)::Type,R1Val::v11> v11{};
        }
        ///Region 0 mode
        enum class R0Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,R0Val> r0{}; 
        namespace R0ValC{
            constexpr Register::FieldValue<decltype(r0)::Type,R0Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r0)::Type,R0Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r0)::Type,R0Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r0)::Type,R0Val::v11> v11{};
        }
    }
    namespace LmemPsccr{    ///<Cache control register
        using Addr = Register::Address<0xe0082800,0x70fffffc,0,unsigned>;
        ///Cache enable
        enum class EncacheVal {
            v0=0x00000000,     ///<Cache disabled
            v1=0x00000001,     ///<Cache enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EncacheVal> encache{}; 
        namespace EncacheValC{
            constexpr Register::FieldValue<decltype(encache)::Type,EncacheVal::v0> v0{};
            constexpr Register::FieldValue<decltype(encache)::Type,EncacheVal::v1> v1{};
        }
        ///Enable Write Buffer
        enum class EnwrbufVal {
            v0=0x00000000,     ///<Write buffer disabled
            v1=0x00000001,     ///<Write buffer enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EnwrbufVal> enwrbuf{}; 
        namespace EnwrbufValC{
            constexpr Register::FieldValue<decltype(enwrbuf)::Type,EnwrbufVal::v0> v0{};
            constexpr Register::FieldValue<decltype(enwrbuf)::Type,EnwrbufVal::v1> v1{};
        }
        ///Invalidate Way 0
        enum class Invw0Val {
            v0=0x00000000,     ///<No operation
            v1=0x00000001,     ///<When setting the GO bit, invalidate all lines in way 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Invw0Val> invw0{}; 
        namespace Invw0ValC{
            constexpr Register::FieldValue<decltype(invw0)::Type,Invw0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(invw0)::Type,Invw0Val::v1> v1{};
        }
        ///Push Way 0
        enum class Pushw0Val {
            v0=0x00000000,     ///<No operation
            v1=0x00000001,     ///<When setting the GO bit, push all modified lines in way 0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Pushw0Val> pushw0{}; 
        namespace Pushw0ValC{
            constexpr Register::FieldValue<decltype(pushw0)::Type,Pushw0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pushw0)::Type,Pushw0Val::v1> v1{};
        }
        ///Invalidate Way 1
        enum class Invw1Val {
            v0=0x00000000,     ///<No operation
            v1=0x00000001,     ///<When setting the GO bit, invalidate all lines in way 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Invw1Val> invw1{}; 
        namespace Invw1ValC{
            constexpr Register::FieldValue<decltype(invw1)::Type,Invw1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(invw1)::Type,Invw1Val::v1> v1{};
        }
        ///Push Way 1
        enum class Pushw1Val {
            v0=0x00000000,     ///<No operation
            v1=0x00000001,     ///<When setting the GO bit, push all modified lines in way 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Pushw1Val> pushw1{}; 
        namespace Pushw1ValC{
            constexpr Register::FieldValue<decltype(pushw1)::Type,Pushw1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pushw1)::Type,Pushw1Val::v1> v1{};
        }
        ///Initiate Cache Command
        enum class GoVal {
            v0=0x00000000,     ///<Write: no effect. Read: no cache command active.
            v1=0x00000001,     ///<Write: initiate command indicated by bits 27-24. Read: cache command active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,GoVal> go{}; 
        namespace GoValC{
            constexpr Register::FieldValue<decltype(go)::Type,GoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(go)::Type,GoVal::v1> v1{};
        }
    }
    namespace LmemPsclcr{    ///<Cache line control register
        using Addr = Register::Address<0xe0082804,0xf08eb002,0,unsigned>;
        ///Initiate Cache Line Command
        enum class LgoVal {
            v0=0x00000000,     ///<Write: no effect. Read: no line command active.
            v1=0x00000001,     ///<Write: initiate line command indicated by bits 27-24. Read: line command active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,LgoVal> lgo{}; 
        namespace LgoValC{
            constexpr Register::FieldValue<decltype(lgo)::Type,LgoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lgo)::Type,LgoVal::v1> v1{};
        }
        ///Cache address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,2),Register::ReadWriteAccess,unsigned> cacheaddr{}; 
        ///Way select
        enum class WselVal {
            v0=0x00000000,     ///<Way 0
            v1=0x00000001,     ///<Way 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,WselVal> wsel{}; 
        namespace WselValC{
            constexpr Register::FieldValue<decltype(wsel)::Type,WselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wsel)::Type,WselVal::v1> v1{};
        }
        ///Tag/Data Select
        enum class TdselVal {
            v0=0x00000000,     ///<Data
            v1=0x00000001,     ///<Tag
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,TdselVal> tdsel{}; 
        namespace TdselValC{
            constexpr Register::FieldValue<decltype(tdsel)::Type,TdselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tdsel)::Type,TdselVal::v1> v1{};
        }
        ///Line Command Initial Valid Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lcivb{}; 
        ///Line Command Initial Modified Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lcimb{}; 
        ///Line Command Way
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> lcway{}; 
        ///Line Command
        enum class LcmdVal {
            v00=0x00000000,     ///<Search and read or write
            v01=0x00000001,     ///<Invalidate
            v10=0x00000002,     ///<Push
            v11=0x00000003,     ///<Clear
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,LcmdVal> lcmd{}; 
        namespace LcmdValC{
            constexpr Register::FieldValue<decltype(lcmd)::Type,LcmdVal::v00> v00{};
            constexpr Register::FieldValue<decltype(lcmd)::Type,LcmdVal::v01> v01{};
            constexpr Register::FieldValue<decltype(lcmd)::Type,LcmdVal::v10> v10{};
            constexpr Register::FieldValue<decltype(lcmd)::Type,LcmdVal::v11> v11{};
        }
        ///Line Address Select
        enum class LadselVal {
            v0=0x00000000,     ///<Cache address
            v1=0x00000001,     ///<Physical address
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,LadselVal> ladsel{}; 
        namespace LadselValC{
            constexpr Register::FieldValue<decltype(ladsel)::Type,LadselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ladsel)::Type,LadselVal::v1> v1{};
        }
        ///Line access type
        enum class LaccVal {
            v0=0x00000000,     ///<Read
            v1=0x00000001,     ///<Write
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,LaccVal> lacc{}; 
        namespace LaccValC{
            constexpr Register::FieldValue<decltype(lacc)::Type,LaccVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lacc)::Type,LaccVal::v1> v1{};
        }
    }
    namespace LmemPscsar{    ///<Cache search address register
        using Addr = Register::Address<0xe0082808,0x00000002,0,unsigned>;
        ///Initiate Cache Line Command
        enum class LgoVal {
            v0=0x00000000,     ///<Write: no effect. Read: no line command active.
            v1=0x00000001,     ///<Write: initiate line command indicated by bits CLCR[27:24]. Read: line command active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,LgoVal> lgo{}; 
        namespace LgoValC{
            constexpr Register::FieldValue<decltype(lgo)::Type,LgoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lgo)::Type,LgoVal::v1> v1{};
        }
        ///Physical Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> phyaddr{}; 
    }
    namespace LmemPsccvr{    ///<Cache read/write value register
        using Addr = Register::Address<0xe008280c,0x00000000,0,unsigned>;
        ///Cache read/write Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace LmemPscrmr{    ///<Cache regions mode register
        using Addr = Register::Address<0xe0082820,0x00000000,0,unsigned>;
        ///Region 15 mode
        enum class R15Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,R15Val> r15{}; 
        namespace R15ValC{
            constexpr Register::FieldValue<decltype(r15)::Type,R15Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r15)::Type,R15Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r15)::Type,R15Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r15)::Type,R15Val::v11> v11{};
        }
        ///Region 14 mode
        enum class R14Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,R14Val> r14{}; 
        namespace R14ValC{
            constexpr Register::FieldValue<decltype(r14)::Type,R14Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r14)::Type,R14Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r14)::Type,R14Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r14)::Type,R14Val::v11> v11{};
        }
        ///Region 13 mode
        enum class R13Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,R13Val> r13{}; 
        namespace R13ValC{
            constexpr Register::FieldValue<decltype(r13)::Type,R13Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r13)::Type,R13Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r13)::Type,R13Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r13)::Type,R13Val::v11> v11{};
        }
        ///Region 12 mode
        enum class R12Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,R12Val> r12{}; 
        namespace R12ValC{
            constexpr Register::FieldValue<decltype(r12)::Type,R12Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r12)::Type,R12Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r12)::Type,R12Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r12)::Type,R12Val::v11> v11{};
        }
        ///Region 11 mode
        enum class R11Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,R11Val> r11{}; 
        namespace R11ValC{
            constexpr Register::FieldValue<decltype(r11)::Type,R11Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r11)::Type,R11Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r11)::Type,R11Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r11)::Type,R11Val::v11> v11{};
        }
        ///Region 10 mode
        enum class R10Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,R10Val> r10{}; 
        namespace R10ValC{
            constexpr Register::FieldValue<decltype(r10)::Type,R10Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r10)::Type,R10Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r10)::Type,R10Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r10)::Type,R10Val::v11> v11{};
        }
        ///Region 9 mode
        enum class R9Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,R9Val> r9{}; 
        namespace R9ValC{
            constexpr Register::FieldValue<decltype(r9)::Type,R9Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r9)::Type,R9Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r9)::Type,R9Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r9)::Type,R9Val::v11> v11{};
        }
        ///Region 8 mode
        enum class R8Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,R8Val> r8{}; 
        namespace R8ValC{
            constexpr Register::FieldValue<decltype(r8)::Type,R8Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r8)::Type,R8Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r8)::Type,R8Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r8)::Type,R8Val::v11> v11{};
        }
        ///Region 7 mode
        enum class R7Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,R7Val> r7{}; 
        namespace R7ValC{
            constexpr Register::FieldValue<decltype(r7)::Type,R7Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r7)::Type,R7Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r7)::Type,R7Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r7)::Type,R7Val::v11> v11{};
        }
        ///Region 6 mode
        enum class R6Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,R6Val> r6{}; 
        namespace R6ValC{
            constexpr Register::FieldValue<decltype(r6)::Type,R6Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r6)::Type,R6Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r6)::Type,R6Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r6)::Type,R6Val::v11> v11{};
        }
        ///Region 5 mode
        enum class R5Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,R5Val> r5{}; 
        namespace R5ValC{
            constexpr Register::FieldValue<decltype(r5)::Type,R5Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r5)::Type,R5Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r5)::Type,R5Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r5)::Type,R5Val::v11> v11{};
        }
        ///Region 4 mode
        enum class R4Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,R4Val> r4{}; 
        namespace R4ValC{
            constexpr Register::FieldValue<decltype(r4)::Type,R4Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r4)::Type,R4Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r4)::Type,R4Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r4)::Type,R4Val::v11> v11{};
        }
        ///Region 3 mode
        enum class R3Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,R3Val> r3{}; 
        namespace R3ValC{
            constexpr Register::FieldValue<decltype(r3)::Type,R3Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r3)::Type,R3Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r3)::Type,R3Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r3)::Type,R3Val::v11> v11{};
        }
        ///Region 2 mode
        enum class R2Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,R2Val> r2{}; 
        namespace R2ValC{
            constexpr Register::FieldValue<decltype(r2)::Type,R2Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r2)::Type,R2Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r2)::Type,R2Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r2)::Type,R2Val::v11> v11{};
        }
        ///Region 1 mode
        enum class R1Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,R1Val> r1{}; 
        namespace R1ValC{
            constexpr Register::FieldValue<decltype(r1)::Type,R1Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r1)::Type,R1Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r1)::Type,R1Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r1)::Type,R1Val::v11> v11{};
        }
        ///Region 0 mode
        enum class R0Val {
            v00=0x00000000,     ///<Non-cacheable
            v01=0x00000001,     ///<Non-cacheable
            v10=0x00000002,     ///<Write-through
            v11=0x00000003,     ///<Write-back
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,R0Val> r0{}; 
        namespace R0ValC{
            constexpr Register::FieldValue<decltype(r0)::Type,R0Val::v00> v00{};
            constexpr Register::FieldValue<decltype(r0)::Type,R0Val::v01> v01{};
            constexpr Register::FieldValue<decltype(r0)::Type,R0Val::v10> v10{};
            constexpr Register::FieldValue<decltype(r0)::Type,R0Val::v11> v11{};
        }
    }
}
