#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//FlexBus external bus interface
    namespace FbCsar0{    ///<Chip select address register
        using Addr = Register::Address<0x4000c000,0x0000ffff,0,unsigned>;
        ///Base address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace FbCsar1{    ///<Chip select address register
        using Addr = Register::Address<0x4000c00c,0x0000ffff,0,unsigned>;
        ///Base address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace FbCsar2{    ///<Chip select address register
        using Addr = Register::Address<0x4000c018,0x0000ffff,0,unsigned>;
        ///Base address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace FbCsar3{    ///<Chip select address register
        using Addr = Register::Address<0x4000c024,0x0000ffff,0,unsigned>;
        ///Base address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace FbCsar4{    ///<Chip select address register
        using Addr = Register::Address<0x4000c030,0x0000ffff,0,unsigned>;
        ///Base address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace FbCsar5{    ///<Chip select address register
        using Addr = Register::Address<0x4000c03c,0x0000ffff,0,unsigned>;
        ///Base address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace FbCsmr0{    ///<Chip select mask register
        using Addr = Register::Address<0x4000c004,0x0000fefe,0,unsigned>;
        ///Valid
        enum class vVal {
            v0=0x00000000,     ///<Chip select invalid
            v1=0x00000001,     ///<Chip select valid
        };
        namespace vValC{
            constexpr MPL::Value<vVal,vVal::v0> v0{};
            constexpr MPL::Value<vVal,vVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,vVal> v{}; 
        ///Write protect
        enum class wpVal {
            v0=0x00000000,     ///<Read and write accesses are allowed
            v1=0x00000001,     ///<Only read accesses are allowed
        };
        namespace wpValC{
            constexpr MPL::Value<wpVal,wpVal::v0> v0{};
            constexpr MPL::Value<wpVal,wpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,wpVal> wp{}; 
        ///Base address mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bam{}; 
    }
    namespace FbCsmr1{    ///<Chip select mask register
        using Addr = Register::Address<0x4000c010,0x0000fefe,0,unsigned>;
        ///Valid
        enum class vVal {
            v0=0x00000000,     ///<Chip select invalid
            v1=0x00000001,     ///<Chip select valid
        };
        namespace vValC{
            constexpr MPL::Value<vVal,vVal::v0> v0{};
            constexpr MPL::Value<vVal,vVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,vVal> v{}; 
        ///Write protect
        enum class wpVal {
            v0=0x00000000,     ///<Read and write accesses are allowed
            v1=0x00000001,     ///<Only read accesses are allowed
        };
        namespace wpValC{
            constexpr MPL::Value<wpVal,wpVal::v0> v0{};
            constexpr MPL::Value<wpVal,wpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,wpVal> wp{}; 
        ///Base address mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bam{}; 
    }
    namespace FbCsmr2{    ///<Chip select mask register
        using Addr = Register::Address<0x4000c01c,0x0000fefe,0,unsigned>;
        ///Valid
        enum class vVal {
            v0=0x00000000,     ///<Chip select invalid
            v1=0x00000001,     ///<Chip select valid
        };
        namespace vValC{
            constexpr MPL::Value<vVal,vVal::v0> v0{};
            constexpr MPL::Value<vVal,vVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,vVal> v{}; 
        ///Write protect
        enum class wpVal {
            v0=0x00000000,     ///<Read and write accesses are allowed
            v1=0x00000001,     ///<Only read accesses are allowed
        };
        namespace wpValC{
            constexpr MPL::Value<wpVal,wpVal::v0> v0{};
            constexpr MPL::Value<wpVal,wpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,wpVal> wp{}; 
        ///Base address mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bam{}; 
    }
    namespace FbCsmr3{    ///<Chip select mask register
        using Addr = Register::Address<0x4000c028,0x0000fefe,0,unsigned>;
        ///Valid
        enum class vVal {
            v0=0x00000000,     ///<Chip select invalid
            v1=0x00000001,     ///<Chip select valid
        };
        namespace vValC{
            constexpr MPL::Value<vVal,vVal::v0> v0{};
            constexpr MPL::Value<vVal,vVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,vVal> v{}; 
        ///Write protect
        enum class wpVal {
            v0=0x00000000,     ///<Read and write accesses are allowed
            v1=0x00000001,     ///<Only read accesses are allowed
        };
        namespace wpValC{
            constexpr MPL::Value<wpVal,wpVal::v0> v0{};
            constexpr MPL::Value<wpVal,wpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,wpVal> wp{}; 
        ///Base address mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bam{}; 
    }
    namespace FbCsmr4{    ///<Chip select mask register
        using Addr = Register::Address<0x4000c034,0x0000fefe,0,unsigned>;
        ///Valid
        enum class vVal {
            v0=0x00000000,     ///<Chip select invalid
            v1=0x00000001,     ///<Chip select valid
        };
        namespace vValC{
            constexpr MPL::Value<vVal,vVal::v0> v0{};
            constexpr MPL::Value<vVal,vVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,vVal> v{}; 
        ///Write protect
        enum class wpVal {
            v0=0x00000000,     ///<Read and write accesses are allowed
            v1=0x00000001,     ///<Only read accesses are allowed
        };
        namespace wpValC{
            constexpr MPL::Value<wpVal,wpVal::v0> v0{};
            constexpr MPL::Value<wpVal,wpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,wpVal> wp{}; 
        ///Base address mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bam{}; 
    }
    namespace FbCsmr5{    ///<Chip select mask register
        using Addr = Register::Address<0x4000c040,0x0000fefe,0,unsigned>;
        ///Valid
        enum class vVal {
            v0=0x00000000,     ///<Chip select invalid
            v1=0x00000001,     ///<Chip select valid
        };
        namespace vValC{
            constexpr MPL::Value<vVal,vVal::v0> v0{};
            constexpr MPL::Value<vVal,vVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,vVal> v{}; 
        ///Write protect
        enum class wpVal {
            v0=0x00000000,     ///<Read and write accesses are allowed
            v1=0x00000001,     ///<Only read accesses are allowed
        };
        namespace wpValC{
            constexpr MPL::Value<wpVal,wpVal::v0> v0{};
            constexpr MPL::Value<wpVal,wpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,wpVal> wp{}; 
        ///Base address mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bam{}; 
    }
    namespace FbCscr0{    ///<Chip select control register
        using Addr = Register::Address<0x4000c008,0x03000007,0,unsigned>;
        ///Burst-write enable
        enum class bstwVal {
            v0=0x00000000,     ///<Break data larger than the specified port size into individual, port-sized, non-burst writes. For example, a longword write to an 8-bit port takes four byte writes.
            v1=0x00000001,     ///<Enables burst write of data larger than the specified port size, including longword writes to 8 and 16-bit ports, word writes to 8-bit ports, and line writes to 8-, 16-, and 32-bit ports.
        };
        namespace bstwValC{
            constexpr MPL::Value<bstwVal,bstwVal::v0> v0{};
            constexpr MPL::Value<bstwVal,bstwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bstwVal> bstw{}; 
        ///Burst-read enable
        enum class bstrVal {
            v0=0x00000000,     ///<Data exceeding the specified port size is broken into individual, port-sized, non-burst reads. For example, a longword read from an 8-bit port is broken into four 8-bit reads.
            v1=0x00000001,     ///<Enables data burst reads larger than the specified port size, including longword reads from 8- and 16-bit ports, word reads from 8-bit ports, and line reads from 8, 16-, and 32-bit ports.
        };
        namespace bstrValC{
            constexpr MPL::Value<bstrVal,bstrVal::v0> v0{};
            constexpr MPL::Value<bstrVal,bstrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bstrVal> bstr{}; 
        ///Byte-enable mode
        enum class bemVal {
            v0=0x00000000,     ///<The FB_BE n signals are not asserted for reads. The FB_BE n signals are asserted for data write only.
            v1=0x00000001,     ///<The FB_BE n signals are asserted for read and write accesses
        };
        namespace bemValC{
            constexpr MPL::Value<bemVal,bemVal::v0> v0{};
            constexpr MPL::Value<bemVal,bemVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bemVal> bem{}; 
        ///Port size
        enum class psVal {
            v00=0x00000000,     ///<32-bit port size. Valid data sampled and driven on FB_D[31:0]
            v01=0x00000001,     ///<8-bit port size. Valid data sampled and driven on FB_D[31:24] if BLS = 0 or FB_D[7:0] if BLS = 1
            v10=0x00000002,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] if BLS = 0 or FB_D[15:0] if BLS = 1
            v11=0x00000003,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] if BLS = 0 or FB_D[15:0] if BLS = 1
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v00> v00{};
            constexpr MPL::Value<psVal,psVal::v01> v01{};
            constexpr MPL::Value<psVal,psVal::v10> v10{};
            constexpr MPL::Value<psVal,psVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,psVal> ps{}; 
        ///Auto-acknowledge enable
        enum class aaVal {
            v0=0x00000000,     ///<No internal FB_TA is asserted. Cycle is terminated externally
            v1=0x00000001,     ///<Internal transfer acknowledge is asserted as specified by WS
        };
        namespace aaValC{
            constexpr MPL::Value<aaVal,aaVal::v0> v0{};
            constexpr MPL::Value<aaVal,aaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,aaVal> aa{}; 
        ///Byte-lane shift
        enum class blsVal {
            v0=0x00000000,     ///<Not shifted. Data is left-justfied on FB_AD.
            v1=0x00000001,     ///<Shifted. Data is right justified on FB_AD.
        };
        namespace blsValC{
            constexpr MPL::Value<blsVal,blsVal::v0> v0{};
            constexpr MPL::Value<blsVal,blsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,blsVal> bls{}; 
        ///Wait states
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> ws{}; 
        ///Write address hold or deselect
        enum class wrahVal {
            v00=0x00000000,     ///<Hold address and attributes one cycle after FB_CSn negates on writes. (Default FB_CSn)
            v01=0x00000001,     ///<Hold address and attributes two cycles after FB_CSn negates on writes.
            v10=0x00000002,     ///<Hold address and attributes three cycles after FB_CSn negates on writes.
            v11=0x00000003,     ///<Hold address and attributes four cycles after FB_CSn negates on writes. (Default FB_CS0)
        };
        namespace wrahValC{
            constexpr MPL::Value<wrahVal,wrahVal::v00> v00{};
            constexpr MPL::Value<wrahVal,wrahVal::v01> v01{};
            constexpr MPL::Value<wrahVal,wrahVal::v10> v10{};
            constexpr MPL::Value<wrahVal,wrahVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,wrahVal> wrah{}; 
        ///Read address hold or deselect
        enum class rdahVal {
            v00=0x00000000,     ///<If AA is cleared, 1 cycle. If AA is set, 0 cycles.
            v01=0x00000001,     ///<If AA is cleared, 2 cycles. If AA is set, 1 cycle.
            v10=0x00000002,     ///<If AA is cleared, 3 cycles. If AA is set, 2 cycles.
            v11=0x00000003,     ///<If AA is cleared, 4 cycles. If AA is set, 3 cycles.
        };
        namespace rdahValC{
            constexpr MPL::Value<rdahVal,rdahVal::v00> v00{};
            constexpr MPL::Value<rdahVal,rdahVal::v01> v01{};
            constexpr MPL::Value<rdahVal,rdahVal::v10> v10{};
            constexpr MPL::Value<rdahVal,rdahVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,rdahVal> rdah{}; 
        ///Address setup
        enum class asetVal {
            v00=0x00000000,     ///<Assert FB_CSn on first rising clock edge after address is asserted. (Default FB_CSn)
            v01=0x00000001,     ///<Assert FB_CSn on second rising clock edge after address is asserted.
            v10=0x00000002,     ///<Assert FB_CSn on third rising clock edge after address is asserted.
            v11=0x00000003,     ///<Assert FB_CSn on fourth rising clock edge after address is asserted. (Default FB_CS0)
        };
        namespace asetValC{
            constexpr MPL::Value<asetVal,asetVal::v00> v00{};
            constexpr MPL::Value<asetVal,asetVal::v01> v01{};
            constexpr MPL::Value<asetVal,asetVal::v10> v10{};
            constexpr MPL::Value<asetVal,asetVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,asetVal> aset{}; 
        ///no description available
        enum class extsVal {
            v0=0x00000000,     ///<FB_TS /FB_ALE asserts for one bus clock cycle
            v1=0x00000001,     ///<FB_TS /FB_ALE remains asserted until the first positive clock edge after FB_CSn asserts
        };
        namespace extsValC{
            constexpr MPL::Value<extsVal,extsVal::v0> v0{};
            constexpr MPL::Value<extsVal,extsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,extsVal> exts{}; 
        ///Secondary wait state enable
        enum class swsenVal {
            v0=0x00000000,     ///<The WS value inserts wait states before an internal transfer acknowledge is generated for all transfers
            v1=0x00000001,     ///<The SWS value inserts wait states before an internal transfer acknowledge is generated for burst transfer secondary terminations
        };
        namespace swsenValC{
            constexpr MPL::Value<swsenVal,swsenVal::v0> v0{};
            constexpr MPL::Value<swsenVal,swsenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,swsenVal> swsen{}; 
        ///Secondary wait states
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> sws{}; 
    }
    namespace FbCscr1{    ///<Chip select control register
        using Addr = Register::Address<0x4000c014,0x03000007,0,unsigned>;
        ///Burst-write enable
        enum class bstwVal {
            v0=0x00000000,     ///<Break data larger than the specified port size into individual, port-sized, non-burst writes. For example, a longword write to an 8-bit port takes four byte writes.
            v1=0x00000001,     ///<Enables burst write of data larger than the specified port size, including longword writes to 8 and 16-bit ports, word writes to 8-bit ports, and line writes to 8-, 16-, and 32-bit ports.
        };
        namespace bstwValC{
            constexpr MPL::Value<bstwVal,bstwVal::v0> v0{};
            constexpr MPL::Value<bstwVal,bstwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bstwVal> bstw{}; 
        ///Burst-read enable
        enum class bstrVal {
            v0=0x00000000,     ///<Data exceeding the specified port size is broken into individual, port-sized, non-burst reads. For example, a longword read from an 8-bit port is broken into four 8-bit reads.
            v1=0x00000001,     ///<Enables data burst reads larger than the specified port size, including longword reads from 8- and 16-bit ports, word reads from 8-bit ports, and line reads from 8, 16-, and 32-bit ports.
        };
        namespace bstrValC{
            constexpr MPL::Value<bstrVal,bstrVal::v0> v0{};
            constexpr MPL::Value<bstrVal,bstrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bstrVal> bstr{}; 
        ///Byte-enable mode
        enum class bemVal {
            v0=0x00000000,     ///<The FB_BE n signals are not asserted for reads. The FB_BE n signals are asserted for data write only.
            v1=0x00000001,     ///<The FB_BE n signals are asserted for read and write accesses
        };
        namespace bemValC{
            constexpr MPL::Value<bemVal,bemVal::v0> v0{};
            constexpr MPL::Value<bemVal,bemVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bemVal> bem{}; 
        ///Port size
        enum class psVal {
            v00=0x00000000,     ///<32-bit port size. Valid data sampled and driven on FB_D[31:0]
            v01=0x00000001,     ///<8-bit port size. Valid data sampled and driven on FB_D[31:24] if BLS = 0 or FB_D[7:0] if BLS = 1
            v10=0x00000002,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] if BLS = 0 or FB_D[15:0] if BLS = 1
            v11=0x00000003,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] if BLS = 0 or FB_D[15:0] if BLS = 1
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v00> v00{};
            constexpr MPL::Value<psVal,psVal::v01> v01{};
            constexpr MPL::Value<psVal,psVal::v10> v10{};
            constexpr MPL::Value<psVal,psVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,psVal> ps{}; 
        ///Auto-acknowledge enable
        enum class aaVal {
            v0=0x00000000,     ///<No internal FB_TA is asserted. Cycle is terminated externally
            v1=0x00000001,     ///<Internal transfer acknowledge is asserted as specified by WS
        };
        namespace aaValC{
            constexpr MPL::Value<aaVal,aaVal::v0> v0{};
            constexpr MPL::Value<aaVal,aaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,aaVal> aa{}; 
        ///Byte-lane shift
        enum class blsVal {
            v0=0x00000000,     ///<Not shifted. Data is left-justfied on FB_AD.
            v1=0x00000001,     ///<Shifted. Data is right justified on FB_AD.
        };
        namespace blsValC{
            constexpr MPL::Value<blsVal,blsVal::v0> v0{};
            constexpr MPL::Value<blsVal,blsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,blsVal> bls{}; 
        ///Wait states
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> ws{}; 
        ///Write address hold or deselect
        enum class wrahVal {
            v00=0x00000000,     ///<Hold address and attributes one cycle after FB_CSn negates on writes. (Default FB_CSn)
            v01=0x00000001,     ///<Hold address and attributes two cycles after FB_CSn negates on writes.
            v10=0x00000002,     ///<Hold address and attributes three cycles after FB_CSn negates on writes.
            v11=0x00000003,     ///<Hold address and attributes four cycles after FB_CSn negates on writes. (Default FB_CS0)
        };
        namespace wrahValC{
            constexpr MPL::Value<wrahVal,wrahVal::v00> v00{};
            constexpr MPL::Value<wrahVal,wrahVal::v01> v01{};
            constexpr MPL::Value<wrahVal,wrahVal::v10> v10{};
            constexpr MPL::Value<wrahVal,wrahVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,wrahVal> wrah{}; 
        ///Read address hold or deselect
        enum class rdahVal {
            v00=0x00000000,     ///<If AA is cleared, 1 cycle. If AA is set, 0 cycles.
            v01=0x00000001,     ///<If AA is cleared, 2 cycles. If AA is set, 1 cycle.
            v10=0x00000002,     ///<If AA is cleared, 3 cycles. If AA is set, 2 cycles.
            v11=0x00000003,     ///<If AA is cleared, 4 cycles. If AA is set, 3 cycles.
        };
        namespace rdahValC{
            constexpr MPL::Value<rdahVal,rdahVal::v00> v00{};
            constexpr MPL::Value<rdahVal,rdahVal::v01> v01{};
            constexpr MPL::Value<rdahVal,rdahVal::v10> v10{};
            constexpr MPL::Value<rdahVal,rdahVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,rdahVal> rdah{}; 
        ///Address setup
        enum class asetVal {
            v00=0x00000000,     ///<Assert FB_CSn on first rising clock edge after address is asserted. (Default FB_CSn)
            v01=0x00000001,     ///<Assert FB_CSn on second rising clock edge after address is asserted.
            v10=0x00000002,     ///<Assert FB_CSn on third rising clock edge after address is asserted.
            v11=0x00000003,     ///<Assert FB_CSn on fourth rising clock edge after address is asserted. (Default FB_CS0)
        };
        namespace asetValC{
            constexpr MPL::Value<asetVal,asetVal::v00> v00{};
            constexpr MPL::Value<asetVal,asetVal::v01> v01{};
            constexpr MPL::Value<asetVal,asetVal::v10> v10{};
            constexpr MPL::Value<asetVal,asetVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,asetVal> aset{}; 
        ///no description available
        enum class extsVal {
            v0=0x00000000,     ///<FB_TS /FB_ALE asserts for one bus clock cycle
            v1=0x00000001,     ///<FB_TS /FB_ALE remains asserted until the first positive clock edge after FB_CSn asserts
        };
        namespace extsValC{
            constexpr MPL::Value<extsVal,extsVal::v0> v0{};
            constexpr MPL::Value<extsVal,extsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,extsVal> exts{}; 
        ///Secondary wait state enable
        enum class swsenVal {
            v0=0x00000000,     ///<The WS value inserts wait states before an internal transfer acknowledge is generated for all transfers
            v1=0x00000001,     ///<The SWS value inserts wait states before an internal transfer acknowledge is generated for burst transfer secondary terminations
        };
        namespace swsenValC{
            constexpr MPL::Value<swsenVal,swsenVal::v0> v0{};
            constexpr MPL::Value<swsenVal,swsenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,swsenVal> swsen{}; 
        ///Secondary wait states
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> sws{}; 
    }
    namespace FbCscr2{    ///<Chip select control register
        using Addr = Register::Address<0x4000c020,0x03000007,0,unsigned>;
        ///Burst-write enable
        enum class bstwVal {
            v0=0x00000000,     ///<Break data larger than the specified port size into individual, port-sized, non-burst writes. For example, a longword write to an 8-bit port takes four byte writes.
            v1=0x00000001,     ///<Enables burst write of data larger than the specified port size, including longword writes to 8 and 16-bit ports, word writes to 8-bit ports, and line writes to 8-, 16-, and 32-bit ports.
        };
        namespace bstwValC{
            constexpr MPL::Value<bstwVal,bstwVal::v0> v0{};
            constexpr MPL::Value<bstwVal,bstwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bstwVal> bstw{}; 
        ///Burst-read enable
        enum class bstrVal {
            v0=0x00000000,     ///<Data exceeding the specified port size is broken into individual, port-sized, non-burst reads. For example, a longword read from an 8-bit port is broken into four 8-bit reads.
            v1=0x00000001,     ///<Enables data burst reads larger than the specified port size, including longword reads from 8- and 16-bit ports, word reads from 8-bit ports, and line reads from 8, 16-, and 32-bit ports.
        };
        namespace bstrValC{
            constexpr MPL::Value<bstrVal,bstrVal::v0> v0{};
            constexpr MPL::Value<bstrVal,bstrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bstrVal> bstr{}; 
        ///Byte-enable mode
        enum class bemVal {
            v0=0x00000000,     ///<The FB_BE n signals are not asserted for reads. The FB_BE n signals are asserted for data write only.
            v1=0x00000001,     ///<The FB_BE n signals are asserted for read and write accesses
        };
        namespace bemValC{
            constexpr MPL::Value<bemVal,bemVal::v0> v0{};
            constexpr MPL::Value<bemVal,bemVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bemVal> bem{}; 
        ///Port size
        enum class psVal {
            v00=0x00000000,     ///<32-bit port size. Valid data sampled and driven on FB_D[31:0]
            v01=0x00000001,     ///<8-bit port size. Valid data sampled and driven on FB_D[31:24] if BLS = 0 or FB_D[7:0] if BLS = 1
            v10=0x00000002,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] if BLS = 0 or FB_D[15:0] if BLS = 1
            v11=0x00000003,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] if BLS = 0 or FB_D[15:0] if BLS = 1
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v00> v00{};
            constexpr MPL::Value<psVal,psVal::v01> v01{};
            constexpr MPL::Value<psVal,psVal::v10> v10{};
            constexpr MPL::Value<psVal,psVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,psVal> ps{}; 
        ///Auto-acknowledge enable
        enum class aaVal {
            v0=0x00000000,     ///<No internal FB_TA is asserted. Cycle is terminated externally
            v1=0x00000001,     ///<Internal transfer acknowledge is asserted as specified by WS
        };
        namespace aaValC{
            constexpr MPL::Value<aaVal,aaVal::v0> v0{};
            constexpr MPL::Value<aaVal,aaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,aaVal> aa{}; 
        ///Byte-lane shift
        enum class blsVal {
            v0=0x00000000,     ///<Not shifted. Data is left-justfied on FB_AD.
            v1=0x00000001,     ///<Shifted. Data is right justified on FB_AD.
        };
        namespace blsValC{
            constexpr MPL::Value<blsVal,blsVal::v0> v0{};
            constexpr MPL::Value<blsVal,blsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,blsVal> bls{}; 
        ///Wait states
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> ws{}; 
        ///Write address hold or deselect
        enum class wrahVal {
            v00=0x00000000,     ///<Hold address and attributes one cycle after FB_CSn negates on writes. (Default FB_CSn)
            v01=0x00000001,     ///<Hold address and attributes two cycles after FB_CSn negates on writes.
            v10=0x00000002,     ///<Hold address and attributes three cycles after FB_CSn negates on writes.
            v11=0x00000003,     ///<Hold address and attributes four cycles after FB_CSn negates on writes. (Default FB_CS0)
        };
        namespace wrahValC{
            constexpr MPL::Value<wrahVal,wrahVal::v00> v00{};
            constexpr MPL::Value<wrahVal,wrahVal::v01> v01{};
            constexpr MPL::Value<wrahVal,wrahVal::v10> v10{};
            constexpr MPL::Value<wrahVal,wrahVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,wrahVal> wrah{}; 
        ///Read address hold or deselect
        enum class rdahVal {
            v00=0x00000000,     ///<If AA is cleared, 1 cycle. If AA is set, 0 cycles.
            v01=0x00000001,     ///<If AA is cleared, 2 cycles. If AA is set, 1 cycle.
            v10=0x00000002,     ///<If AA is cleared, 3 cycles. If AA is set, 2 cycles.
            v11=0x00000003,     ///<If AA is cleared, 4 cycles. If AA is set, 3 cycles.
        };
        namespace rdahValC{
            constexpr MPL::Value<rdahVal,rdahVal::v00> v00{};
            constexpr MPL::Value<rdahVal,rdahVal::v01> v01{};
            constexpr MPL::Value<rdahVal,rdahVal::v10> v10{};
            constexpr MPL::Value<rdahVal,rdahVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,rdahVal> rdah{}; 
        ///Address setup
        enum class asetVal {
            v00=0x00000000,     ///<Assert FB_CSn on first rising clock edge after address is asserted. (Default FB_CSn)
            v01=0x00000001,     ///<Assert FB_CSn on second rising clock edge after address is asserted.
            v10=0x00000002,     ///<Assert FB_CSn on third rising clock edge after address is asserted.
            v11=0x00000003,     ///<Assert FB_CSn on fourth rising clock edge after address is asserted. (Default FB_CS0)
        };
        namespace asetValC{
            constexpr MPL::Value<asetVal,asetVal::v00> v00{};
            constexpr MPL::Value<asetVal,asetVal::v01> v01{};
            constexpr MPL::Value<asetVal,asetVal::v10> v10{};
            constexpr MPL::Value<asetVal,asetVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,asetVal> aset{}; 
        ///no description available
        enum class extsVal {
            v0=0x00000000,     ///<FB_TS /FB_ALE asserts for one bus clock cycle
            v1=0x00000001,     ///<FB_TS /FB_ALE remains asserted until the first positive clock edge after FB_CSn asserts
        };
        namespace extsValC{
            constexpr MPL::Value<extsVal,extsVal::v0> v0{};
            constexpr MPL::Value<extsVal,extsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,extsVal> exts{}; 
        ///Secondary wait state enable
        enum class swsenVal {
            v0=0x00000000,     ///<The WS value inserts wait states before an internal transfer acknowledge is generated for all transfers
            v1=0x00000001,     ///<The SWS value inserts wait states before an internal transfer acknowledge is generated for burst transfer secondary terminations
        };
        namespace swsenValC{
            constexpr MPL::Value<swsenVal,swsenVal::v0> v0{};
            constexpr MPL::Value<swsenVal,swsenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,swsenVal> swsen{}; 
        ///Secondary wait states
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> sws{}; 
    }
    namespace FbCscr3{    ///<Chip select control register
        using Addr = Register::Address<0x4000c02c,0x03000007,0,unsigned>;
        ///Burst-write enable
        enum class bstwVal {
            v0=0x00000000,     ///<Break data larger than the specified port size into individual, port-sized, non-burst writes. For example, a longword write to an 8-bit port takes four byte writes.
            v1=0x00000001,     ///<Enables burst write of data larger than the specified port size, including longword writes to 8 and 16-bit ports, word writes to 8-bit ports, and line writes to 8-, 16-, and 32-bit ports.
        };
        namespace bstwValC{
            constexpr MPL::Value<bstwVal,bstwVal::v0> v0{};
            constexpr MPL::Value<bstwVal,bstwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bstwVal> bstw{}; 
        ///Burst-read enable
        enum class bstrVal {
            v0=0x00000000,     ///<Data exceeding the specified port size is broken into individual, port-sized, non-burst reads. For example, a longword read from an 8-bit port is broken into four 8-bit reads.
            v1=0x00000001,     ///<Enables data burst reads larger than the specified port size, including longword reads from 8- and 16-bit ports, word reads from 8-bit ports, and line reads from 8, 16-, and 32-bit ports.
        };
        namespace bstrValC{
            constexpr MPL::Value<bstrVal,bstrVal::v0> v0{};
            constexpr MPL::Value<bstrVal,bstrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bstrVal> bstr{}; 
        ///Byte-enable mode
        enum class bemVal {
            v0=0x00000000,     ///<The FB_BE n signals are not asserted for reads. The FB_BE n signals are asserted for data write only.
            v1=0x00000001,     ///<The FB_BE n signals are asserted for read and write accesses
        };
        namespace bemValC{
            constexpr MPL::Value<bemVal,bemVal::v0> v0{};
            constexpr MPL::Value<bemVal,bemVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bemVal> bem{}; 
        ///Port size
        enum class psVal {
            v00=0x00000000,     ///<32-bit port size. Valid data sampled and driven on FB_D[31:0]
            v01=0x00000001,     ///<8-bit port size. Valid data sampled and driven on FB_D[31:24] if BLS = 0 or FB_D[7:0] if BLS = 1
            v10=0x00000002,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] if BLS = 0 or FB_D[15:0] if BLS = 1
            v11=0x00000003,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] if BLS = 0 or FB_D[15:0] if BLS = 1
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v00> v00{};
            constexpr MPL::Value<psVal,psVal::v01> v01{};
            constexpr MPL::Value<psVal,psVal::v10> v10{};
            constexpr MPL::Value<psVal,psVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,psVal> ps{}; 
        ///Auto-acknowledge enable
        enum class aaVal {
            v0=0x00000000,     ///<No internal FB_TA is asserted. Cycle is terminated externally
            v1=0x00000001,     ///<Internal transfer acknowledge is asserted as specified by WS
        };
        namespace aaValC{
            constexpr MPL::Value<aaVal,aaVal::v0> v0{};
            constexpr MPL::Value<aaVal,aaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,aaVal> aa{}; 
        ///Byte-lane shift
        enum class blsVal {
            v0=0x00000000,     ///<Not shifted. Data is left-justfied on FB_AD.
            v1=0x00000001,     ///<Shifted. Data is right justified on FB_AD.
        };
        namespace blsValC{
            constexpr MPL::Value<blsVal,blsVal::v0> v0{};
            constexpr MPL::Value<blsVal,blsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,blsVal> bls{}; 
        ///Wait states
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> ws{}; 
        ///Write address hold or deselect
        enum class wrahVal {
            v00=0x00000000,     ///<Hold address and attributes one cycle after FB_CSn negates on writes. (Default FB_CSn)
            v01=0x00000001,     ///<Hold address and attributes two cycles after FB_CSn negates on writes.
            v10=0x00000002,     ///<Hold address and attributes three cycles after FB_CSn negates on writes.
            v11=0x00000003,     ///<Hold address and attributes four cycles after FB_CSn negates on writes. (Default FB_CS0)
        };
        namespace wrahValC{
            constexpr MPL::Value<wrahVal,wrahVal::v00> v00{};
            constexpr MPL::Value<wrahVal,wrahVal::v01> v01{};
            constexpr MPL::Value<wrahVal,wrahVal::v10> v10{};
            constexpr MPL::Value<wrahVal,wrahVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,wrahVal> wrah{}; 
        ///Read address hold or deselect
        enum class rdahVal {
            v00=0x00000000,     ///<If AA is cleared, 1 cycle. If AA is set, 0 cycles.
            v01=0x00000001,     ///<If AA is cleared, 2 cycles. If AA is set, 1 cycle.
            v10=0x00000002,     ///<If AA is cleared, 3 cycles. If AA is set, 2 cycles.
            v11=0x00000003,     ///<If AA is cleared, 4 cycles. If AA is set, 3 cycles.
        };
        namespace rdahValC{
            constexpr MPL::Value<rdahVal,rdahVal::v00> v00{};
            constexpr MPL::Value<rdahVal,rdahVal::v01> v01{};
            constexpr MPL::Value<rdahVal,rdahVal::v10> v10{};
            constexpr MPL::Value<rdahVal,rdahVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,rdahVal> rdah{}; 
        ///Address setup
        enum class asetVal {
            v00=0x00000000,     ///<Assert FB_CSn on first rising clock edge after address is asserted. (Default FB_CSn)
            v01=0x00000001,     ///<Assert FB_CSn on second rising clock edge after address is asserted.
            v10=0x00000002,     ///<Assert FB_CSn on third rising clock edge after address is asserted.
            v11=0x00000003,     ///<Assert FB_CSn on fourth rising clock edge after address is asserted. (Default FB_CS0)
        };
        namespace asetValC{
            constexpr MPL::Value<asetVal,asetVal::v00> v00{};
            constexpr MPL::Value<asetVal,asetVal::v01> v01{};
            constexpr MPL::Value<asetVal,asetVal::v10> v10{};
            constexpr MPL::Value<asetVal,asetVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,asetVal> aset{}; 
        ///no description available
        enum class extsVal {
            v0=0x00000000,     ///<FB_TS /FB_ALE asserts for one bus clock cycle
            v1=0x00000001,     ///<FB_TS /FB_ALE remains asserted until the first positive clock edge after FB_CSn asserts
        };
        namespace extsValC{
            constexpr MPL::Value<extsVal,extsVal::v0> v0{};
            constexpr MPL::Value<extsVal,extsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,extsVal> exts{}; 
        ///Secondary wait state enable
        enum class swsenVal {
            v0=0x00000000,     ///<The WS value inserts wait states before an internal transfer acknowledge is generated for all transfers
            v1=0x00000001,     ///<The SWS value inserts wait states before an internal transfer acknowledge is generated for burst transfer secondary terminations
        };
        namespace swsenValC{
            constexpr MPL::Value<swsenVal,swsenVal::v0> v0{};
            constexpr MPL::Value<swsenVal,swsenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,swsenVal> swsen{}; 
        ///Secondary wait states
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> sws{}; 
    }
    namespace FbCscr4{    ///<Chip select control register
        using Addr = Register::Address<0x4000c038,0x03000007,0,unsigned>;
        ///Burst-write enable
        enum class bstwVal {
            v0=0x00000000,     ///<Break data larger than the specified port size into individual, port-sized, non-burst writes. For example, a longword write to an 8-bit port takes four byte writes.
            v1=0x00000001,     ///<Enables burst write of data larger than the specified port size, including longword writes to 8 and 16-bit ports, word writes to 8-bit ports, and line writes to 8-, 16-, and 32-bit ports.
        };
        namespace bstwValC{
            constexpr MPL::Value<bstwVal,bstwVal::v0> v0{};
            constexpr MPL::Value<bstwVal,bstwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bstwVal> bstw{}; 
        ///Burst-read enable
        enum class bstrVal {
            v0=0x00000000,     ///<Data exceeding the specified port size is broken into individual, port-sized, non-burst reads. For example, a longword read from an 8-bit port is broken into four 8-bit reads.
            v1=0x00000001,     ///<Enables data burst reads larger than the specified port size, including longword reads from 8- and 16-bit ports, word reads from 8-bit ports, and line reads from 8, 16-, and 32-bit ports.
        };
        namespace bstrValC{
            constexpr MPL::Value<bstrVal,bstrVal::v0> v0{};
            constexpr MPL::Value<bstrVal,bstrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bstrVal> bstr{}; 
        ///Byte-enable mode
        enum class bemVal {
            v0=0x00000000,     ///<The FB_BE n signals are not asserted for reads. The FB_BE n signals are asserted for data write only.
            v1=0x00000001,     ///<The FB_BE n signals are asserted for read and write accesses
        };
        namespace bemValC{
            constexpr MPL::Value<bemVal,bemVal::v0> v0{};
            constexpr MPL::Value<bemVal,bemVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bemVal> bem{}; 
        ///Port size
        enum class psVal {
            v00=0x00000000,     ///<32-bit port size. Valid data sampled and driven on FB_D[31:0]
            v01=0x00000001,     ///<8-bit port size. Valid data sampled and driven on FB_D[31:24] if BLS = 0 or FB_D[7:0] if BLS = 1
            v10=0x00000002,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] if BLS = 0 or FB_D[15:0] if BLS = 1
            v11=0x00000003,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] if BLS = 0 or FB_D[15:0] if BLS = 1
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v00> v00{};
            constexpr MPL::Value<psVal,psVal::v01> v01{};
            constexpr MPL::Value<psVal,psVal::v10> v10{};
            constexpr MPL::Value<psVal,psVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,psVal> ps{}; 
        ///Auto-acknowledge enable
        enum class aaVal {
            v0=0x00000000,     ///<No internal FB_TA is asserted. Cycle is terminated externally
            v1=0x00000001,     ///<Internal transfer acknowledge is asserted as specified by WS
        };
        namespace aaValC{
            constexpr MPL::Value<aaVal,aaVal::v0> v0{};
            constexpr MPL::Value<aaVal,aaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,aaVal> aa{}; 
        ///Byte-lane shift
        enum class blsVal {
            v0=0x00000000,     ///<Not shifted. Data is left-justfied on FB_AD.
            v1=0x00000001,     ///<Shifted. Data is right justified on FB_AD.
        };
        namespace blsValC{
            constexpr MPL::Value<blsVal,blsVal::v0> v0{};
            constexpr MPL::Value<blsVal,blsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,blsVal> bls{}; 
        ///Wait states
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> ws{}; 
        ///Write address hold or deselect
        enum class wrahVal {
            v00=0x00000000,     ///<Hold address and attributes one cycle after FB_CSn negates on writes. (Default FB_CSn)
            v01=0x00000001,     ///<Hold address and attributes two cycles after FB_CSn negates on writes.
            v10=0x00000002,     ///<Hold address and attributes three cycles after FB_CSn negates on writes.
            v11=0x00000003,     ///<Hold address and attributes four cycles after FB_CSn negates on writes. (Default FB_CS0)
        };
        namespace wrahValC{
            constexpr MPL::Value<wrahVal,wrahVal::v00> v00{};
            constexpr MPL::Value<wrahVal,wrahVal::v01> v01{};
            constexpr MPL::Value<wrahVal,wrahVal::v10> v10{};
            constexpr MPL::Value<wrahVal,wrahVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,wrahVal> wrah{}; 
        ///Read address hold or deselect
        enum class rdahVal {
            v00=0x00000000,     ///<If AA is cleared, 1 cycle. If AA is set, 0 cycles.
            v01=0x00000001,     ///<If AA is cleared, 2 cycles. If AA is set, 1 cycle.
            v10=0x00000002,     ///<If AA is cleared, 3 cycles. If AA is set, 2 cycles.
            v11=0x00000003,     ///<If AA is cleared, 4 cycles. If AA is set, 3 cycles.
        };
        namespace rdahValC{
            constexpr MPL::Value<rdahVal,rdahVal::v00> v00{};
            constexpr MPL::Value<rdahVal,rdahVal::v01> v01{};
            constexpr MPL::Value<rdahVal,rdahVal::v10> v10{};
            constexpr MPL::Value<rdahVal,rdahVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,rdahVal> rdah{}; 
        ///Address setup
        enum class asetVal {
            v00=0x00000000,     ///<Assert FB_CSn on first rising clock edge after address is asserted. (Default FB_CSn)
            v01=0x00000001,     ///<Assert FB_CSn on second rising clock edge after address is asserted.
            v10=0x00000002,     ///<Assert FB_CSn on third rising clock edge after address is asserted.
            v11=0x00000003,     ///<Assert FB_CSn on fourth rising clock edge after address is asserted. (Default FB_CS0)
        };
        namespace asetValC{
            constexpr MPL::Value<asetVal,asetVal::v00> v00{};
            constexpr MPL::Value<asetVal,asetVal::v01> v01{};
            constexpr MPL::Value<asetVal,asetVal::v10> v10{};
            constexpr MPL::Value<asetVal,asetVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,asetVal> aset{}; 
        ///no description available
        enum class extsVal {
            v0=0x00000000,     ///<FB_TS /FB_ALE asserts for one bus clock cycle
            v1=0x00000001,     ///<FB_TS /FB_ALE remains asserted until the first positive clock edge after FB_CSn asserts
        };
        namespace extsValC{
            constexpr MPL::Value<extsVal,extsVal::v0> v0{};
            constexpr MPL::Value<extsVal,extsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,extsVal> exts{}; 
        ///Secondary wait state enable
        enum class swsenVal {
            v0=0x00000000,     ///<The WS value inserts wait states before an internal transfer acknowledge is generated for all transfers
            v1=0x00000001,     ///<The SWS value inserts wait states before an internal transfer acknowledge is generated for burst transfer secondary terminations
        };
        namespace swsenValC{
            constexpr MPL::Value<swsenVal,swsenVal::v0> v0{};
            constexpr MPL::Value<swsenVal,swsenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,swsenVal> swsen{}; 
        ///Secondary wait states
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> sws{}; 
    }
    namespace FbCscr5{    ///<Chip select control register
        using Addr = Register::Address<0x4000c044,0x03000007,0,unsigned>;
        ///Burst-write enable
        enum class bstwVal {
            v0=0x00000000,     ///<Break data larger than the specified port size into individual, port-sized, non-burst writes. For example, a longword write to an 8-bit port takes four byte writes.
            v1=0x00000001,     ///<Enables burst write of data larger than the specified port size, including longword writes to 8 and 16-bit ports, word writes to 8-bit ports, and line writes to 8-, 16-, and 32-bit ports.
        };
        namespace bstwValC{
            constexpr MPL::Value<bstwVal,bstwVal::v0> v0{};
            constexpr MPL::Value<bstwVal,bstwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bstwVal> bstw{}; 
        ///Burst-read enable
        enum class bstrVal {
            v0=0x00000000,     ///<Data exceeding the specified port size is broken into individual, port-sized, non-burst reads. For example, a longword read from an 8-bit port is broken into four 8-bit reads.
            v1=0x00000001,     ///<Enables data burst reads larger than the specified port size, including longword reads from 8- and 16-bit ports, word reads from 8-bit ports, and line reads from 8, 16-, and 32-bit ports.
        };
        namespace bstrValC{
            constexpr MPL::Value<bstrVal,bstrVal::v0> v0{};
            constexpr MPL::Value<bstrVal,bstrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bstrVal> bstr{}; 
        ///Byte-enable mode
        enum class bemVal {
            v0=0x00000000,     ///<The FB_BE n signals are not asserted for reads. The FB_BE n signals are asserted for data write only.
            v1=0x00000001,     ///<The FB_BE n signals are asserted for read and write accesses
        };
        namespace bemValC{
            constexpr MPL::Value<bemVal,bemVal::v0> v0{};
            constexpr MPL::Value<bemVal,bemVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bemVal> bem{}; 
        ///Port size
        enum class psVal {
            v00=0x00000000,     ///<32-bit port size. Valid data sampled and driven on FB_D[31:0]
            v01=0x00000001,     ///<8-bit port size. Valid data sampled and driven on FB_D[31:24] if BLS = 0 or FB_D[7:0] if BLS = 1
            v10=0x00000002,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] if BLS = 0 or FB_D[15:0] if BLS = 1
            v11=0x00000003,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] if BLS = 0 or FB_D[15:0] if BLS = 1
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v00> v00{};
            constexpr MPL::Value<psVal,psVal::v01> v01{};
            constexpr MPL::Value<psVal,psVal::v10> v10{};
            constexpr MPL::Value<psVal,psVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,psVal> ps{}; 
        ///Auto-acknowledge enable
        enum class aaVal {
            v0=0x00000000,     ///<No internal FB_TA is asserted. Cycle is terminated externally
            v1=0x00000001,     ///<Internal transfer acknowledge is asserted as specified by WS
        };
        namespace aaValC{
            constexpr MPL::Value<aaVal,aaVal::v0> v0{};
            constexpr MPL::Value<aaVal,aaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,aaVal> aa{}; 
        ///Byte-lane shift
        enum class blsVal {
            v0=0x00000000,     ///<Not shifted. Data is left-justfied on FB_AD.
            v1=0x00000001,     ///<Shifted. Data is right justified on FB_AD.
        };
        namespace blsValC{
            constexpr MPL::Value<blsVal,blsVal::v0> v0{};
            constexpr MPL::Value<blsVal,blsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,blsVal> bls{}; 
        ///Wait states
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> ws{}; 
        ///Write address hold or deselect
        enum class wrahVal {
            v00=0x00000000,     ///<Hold address and attributes one cycle after FB_CSn negates on writes. (Default FB_CSn)
            v01=0x00000001,     ///<Hold address and attributes two cycles after FB_CSn negates on writes.
            v10=0x00000002,     ///<Hold address and attributes three cycles after FB_CSn negates on writes.
            v11=0x00000003,     ///<Hold address and attributes four cycles after FB_CSn negates on writes. (Default FB_CS0)
        };
        namespace wrahValC{
            constexpr MPL::Value<wrahVal,wrahVal::v00> v00{};
            constexpr MPL::Value<wrahVal,wrahVal::v01> v01{};
            constexpr MPL::Value<wrahVal,wrahVal::v10> v10{};
            constexpr MPL::Value<wrahVal,wrahVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,wrahVal> wrah{}; 
        ///Read address hold or deselect
        enum class rdahVal {
            v00=0x00000000,     ///<If AA is cleared, 1 cycle. If AA is set, 0 cycles.
            v01=0x00000001,     ///<If AA is cleared, 2 cycles. If AA is set, 1 cycle.
            v10=0x00000002,     ///<If AA is cleared, 3 cycles. If AA is set, 2 cycles.
            v11=0x00000003,     ///<If AA is cleared, 4 cycles. If AA is set, 3 cycles.
        };
        namespace rdahValC{
            constexpr MPL::Value<rdahVal,rdahVal::v00> v00{};
            constexpr MPL::Value<rdahVal,rdahVal::v01> v01{};
            constexpr MPL::Value<rdahVal,rdahVal::v10> v10{};
            constexpr MPL::Value<rdahVal,rdahVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,rdahVal> rdah{}; 
        ///Address setup
        enum class asetVal {
            v00=0x00000000,     ///<Assert FB_CSn on first rising clock edge after address is asserted. (Default FB_CSn)
            v01=0x00000001,     ///<Assert FB_CSn on second rising clock edge after address is asserted.
            v10=0x00000002,     ///<Assert FB_CSn on third rising clock edge after address is asserted.
            v11=0x00000003,     ///<Assert FB_CSn on fourth rising clock edge after address is asserted. (Default FB_CS0)
        };
        namespace asetValC{
            constexpr MPL::Value<asetVal,asetVal::v00> v00{};
            constexpr MPL::Value<asetVal,asetVal::v01> v01{};
            constexpr MPL::Value<asetVal,asetVal::v10> v10{};
            constexpr MPL::Value<asetVal,asetVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,asetVal> aset{}; 
        ///no description available
        enum class extsVal {
            v0=0x00000000,     ///<FB_TS /FB_ALE asserts for one bus clock cycle
            v1=0x00000001,     ///<FB_TS /FB_ALE remains asserted until the first positive clock edge after FB_CSn asserts
        };
        namespace extsValC{
            constexpr MPL::Value<extsVal,extsVal::v0> v0{};
            constexpr MPL::Value<extsVal,extsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,extsVal> exts{}; 
        ///Secondary wait state enable
        enum class swsenVal {
            v0=0x00000000,     ///<The WS value inserts wait states before an internal transfer acknowledge is generated for all transfers
            v1=0x00000001,     ///<The SWS value inserts wait states before an internal transfer acknowledge is generated for burst transfer secondary terminations
        };
        namespace swsenValC{
            constexpr MPL::Value<swsenVal,swsenVal::v0> v0{};
            constexpr MPL::Value<swsenVal,swsenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,swsenVal> swsen{}; 
        ///Secondary wait states
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> sws{}; 
    }
    namespace FbCspmcr{    ///<Chip select port multiplexing control register
        using Addr = Register::Address<0x4000c060,0x00000fff,0,unsigned>;
        ///FlexBus signal group 5 multiplex control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> group5{}; 
        ///FlexBus signal group 4 multiplex control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> group4{}; 
        ///FlexBus signal group 3 multiplex control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> group3{}; 
        ///FlexBus signal group 2 multiplex control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> group2{}; 
        ///FlexBus signal group 1 multiplex control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> group1{}; 
    }
}
