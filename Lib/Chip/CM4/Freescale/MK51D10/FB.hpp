#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//FlexBus external bus interface
    namespace FbCsar0{    ///<Chip Select Address Register
        using Addr = Register::Address<0x4000c000,0x0000ffff,0,unsigned>;
        ///Base Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace FbCsar1{    ///<Chip Select Address Register
        using Addr = Register::Address<0x4000c00c,0x0000ffff,0,unsigned>;
        ///Base Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace FbCsar2{    ///<Chip Select Address Register
        using Addr = Register::Address<0x4000c018,0x0000ffff,0,unsigned>;
        ///Base Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace FbCsar3{    ///<Chip Select Address Register
        using Addr = Register::Address<0x4000c024,0x0000ffff,0,unsigned>;
        ///Base Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace FbCsar4{    ///<Chip Select Address Register
        using Addr = Register::Address<0x4000c030,0x0000ffff,0,unsigned>;
        ///Base Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace FbCsar5{    ///<Chip Select Address Register
        using Addr = Register::Address<0x4000c03c,0x0000ffff,0,unsigned>;
        ///Base Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace FbCsmr0{    ///<Chip Select Mask Register
        using Addr = Register::Address<0x4000c004,0x0000fefe,0,unsigned>;
        ///Valid
        enum class vVal {
            v0=0x00000000,     ///<Chip-select is invalid.
            v1=0x00000001,     ///<Chip-select is valid.
        };
        namespace vValC{
            constexpr MPL::Value<vVal,vVal::v0> v0{};
            constexpr MPL::Value<vVal,vVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,vVal> v{}; 
        ///Write Protect
        enum class wpVal {
            v0=0x00000000,     ///<Write accesses are allowed.
            v1=0x00000001,     ///<Write accesses are not allowed. Attempting to write to the range of addresses for which the WP bit is set results in a bus error termination of the internal cycle and no external cycle.
        };
        namespace wpValC{
            constexpr MPL::Value<wpVal,wpVal::v0> v0{};
            constexpr MPL::Value<wpVal,wpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,wpVal> wp{}; 
        ///Base Address Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bam{}; 
    }
    namespace FbCsmr1{    ///<Chip Select Mask Register
        using Addr = Register::Address<0x4000c010,0x0000fefe,0,unsigned>;
        ///Valid
        enum class vVal {
            v0=0x00000000,     ///<Chip-select is invalid.
            v1=0x00000001,     ///<Chip-select is valid.
        };
        namespace vValC{
            constexpr MPL::Value<vVal,vVal::v0> v0{};
            constexpr MPL::Value<vVal,vVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,vVal> v{}; 
        ///Write Protect
        enum class wpVal {
            v0=0x00000000,     ///<Write accesses are allowed.
            v1=0x00000001,     ///<Write accesses are not allowed. Attempting to write to the range of addresses for which the WP bit is set results in a bus error termination of the internal cycle and no external cycle.
        };
        namespace wpValC{
            constexpr MPL::Value<wpVal,wpVal::v0> v0{};
            constexpr MPL::Value<wpVal,wpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,wpVal> wp{}; 
        ///Base Address Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bam{}; 
    }
    namespace FbCsmr2{    ///<Chip Select Mask Register
        using Addr = Register::Address<0x4000c01c,0x0000fefe,0,unsigned>;
        ///Valid
        enum class vVal {
            v0=0x00000000,     ///<Chip-select is invalid.
            v1=0x00000001,     ///<Chip-select is valid.
        };
        namespace vValC{
            constexpr MPL::Value<vVal,vVal::v0> v0{};
            constexpr MPL::Value<vVal,vVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,vVal> v{}; 
        ///Write Protect
        enum class wpVal {
            v0=0x00000000,     ///<Write accesses are allowed.
            v1=0x00000001,     ///<Write accesses are not allowed. Attempting to write to the range of addresses for which the WP bit is set results in a bus error termination of the internal cycle and no external cycle.
        };
        namespace wpValC{
            constexpr MPL::Value<wpVal,wpVal::v0> v0{};
            constexpr MPL::Value<wpVal,wpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,wpVal> wp{}; 
        ///Base Address Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bam{}; 
    }
    namespace FbCsmr3{    ///<Chip Select Mask Register
        using Addr = Register::Address<0x4000c028,0x0000fefe,0,unsigned>;
        ///Valid
        enum class vVal {
            v0=0x00000000,     ///<Chip-select is invalid.
            v1=0x00000001,     ///<Chip-select is valid.
        };
        namespace vValC{
            constexpr MPL::Value<vVal,vVal::v0> v0{};
            constexpr MPL::Value<vVal,vVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,vVal> v{}; 
        ///Write Protect
        enum class wpVal {
            v0=0x00000000,     ///<Write accesses are allowed.
            v1=0x00000001,     ///<Write accesses are not allowed. Attempting to write to the range of addresses for which the WP bit is set results in a bus error termination of the internal cycle and no external cycle.
        };
        namespace wpValC{
            constexpr MPL::Value<wpVal,wpVal::v0> v0{};
            constexpr MPL::Value<wpVal,wpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,wpVal> wp{}; 
        ///Base Address Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bam{}; 
    }
    namespace FbCsmr4{    ///<Chip Select Mask Register
        using Addr = Register::Address<0x4000c034,0x0000fefe,0,unsigned>;
        ///Valid
        enum class vVal {
            v0=0x00000000,     ///<Chip-select is invalid.
            v1=0x00000001,     ///<Chip-select is valid.
        };
        namespace vValC{
            constexpr MPL::Value<vVal,vVal::v0> v0{};
            constexpr MPL::Value<vVal,vVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,vVal> v{}; 
        ///Write Protect
        enum class wpVal {
            v0=0x00000000,     ///<Write accesses are allowed.
            v1=0x00000001,     ///<Write accesses are not allowed. Attempting to write to the range of addresses for which the WP bit is set results in a bus error termination of the internal cycle and no external cycle.
        };
        namespace wpValC{
            constexpr MPL::Value<wpVal,wpVal::v0> v0{};
            constexpr MPL::Value<wpVal,wpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,wpVal> wp{}; 
        ///Base Address Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bam{}; 
    }
    namespace FbCsmr5{    ///<Chip Select Mask Register
        using Addr = Register::Address<0x4000c040,0x0000fefe,0,unsigned>;
        ///Valid
        enum class vVal {
            v0=0x00000000,     ///<Chip-select is invalid.
            v1=0x00000001,     ///<Chip-select is valid.
        };
        namespace vValC{
            constexpr MPL::Value<vVal,vVal::v0> v0{};
            constexpr MPL::Value<vVal,vVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,vVal> v{}; 
        ///Write Protect
        enum class wpVal {
            v0=0x00000000,     ///<Write accesses are allowed.
            v1=0x00000001,     ///<Write accesses are not allowed. Attempting to write to the range of addresses for which the WP bit is set results in a bus error termination of the internal cycle and no external cycle.
        };
        namespace wpValC{
            constexpr MPL::Value<wpVal,wpVal::v0> v0{};
            constexpr MPL::Value<wpVal,wpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,wpVal> wp{}; 
        ///Base Address Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bam{}; 
    }
    namespace FbCscr0{    ///<Chip Select Control Register
        using Addr = Register::Address<0x4000c008,0x03000007,0,unsigned>;
        ///Burst-Write Enable
        enum class bstwVal {
            v0=0x00000000,     ///<Disabled. Data exceeding the specified port size is broken into individual, port-sized, non-burst writes. For example, a 32-bit write to an 8-bit port takes four byte writes.
            v1=0x00000001,     ///<Enabled. Enables burst write of data larger than the specified port size, including 32-bit writes to 8 and 16-bit ports, 16-bit writes to 8-bit ports, and line writes to 8-, 16-, and 32-bit ports.
        };
        namespace bstwValC{
            constexpr MPL::Value<bstwVal,bstwVal::v0> v0{};
            constexpr MPL::Value<bstwVal,bstwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bstwVal> bstw{}; 
        ///Burst-Read Enable
        enum class bstrVal {
            v0=0x00000000,     ///<Disabled. Data exceeding the specified port size is broken into individual, port-sized, non-burst reads. For example, a 32-bit read from an 8-bit port is broken into four 8-bit reads.
            v1=0x00000001,     ///<Enabled. Enables data burst reads larger than the specified port size, including 32-bit reads from 8- and 16-bit ports, 16-bit reads from 8-bit ports, and line reads from 8, 16-, and 32-bit ports.
        };
        namespace bstrValC{
            constexpr MPL::Value<bstrVal,bstrVal::v0> v0{};
            constexpr MPL::Value<bstrVal,bstrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bstrVal> bstr{}; 
        ///Byte-Enable Mode
        enum class bemVal {
            v0=0x00000000,     ///<FB_BE is asserted for data write only.
            v1=0x00000001,     ///<FB_BE is asserted for data read and write accesses.
        };
        namespace bemValC{
            constexpr MPL::Value<bemVal,bemVal::v0> v0{};
            constexpr MPL::Value<bemVal,bemVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bemVal> bem{}; 
        ///Port Size
        enum class psVal {
            v00=0x00000000,     ///<32-bit port size. Valid data is sampled and driven on FB_D[31:0].
            v01=0x00000001,     ///<8-bit port size. Valid data is sampled and driven on FB_D[31:24] when BLS is 0b, or FB_D[7:0] when BLS is 1b.
            v10=0x00000002,     ///<16-bit port size. Valid data is sampled and driven on FB_D[31:16] when BLS is 0b, or FB_D[15:0] when BLS is 1b.
            v11=0x00000003,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] when BLS is 0b, or FB_D[15:0] when BLS is 1b.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v00> v00{};
            constexpr MPL::Value<psVal,psVal::v01> v01{};
            constexpr MPL::Value<psVal,psVal::v10> v10{};
            constexpr MPL::Value<psVal,psVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,psVal> ps{}; 
        ///Auto-Acknowledge Enable
        enum class aaVal {
            v0=0x00000000,     ///<Disabled. No internal transfer acknowledge is asserted and the cycle is terminated externally.
            v1=0x00000001,     ///<Enabled. Internal transfer acknowledge is asserted as specified by WS.
        };
        namespace aaValC{
            constexpr MPL::Value<aaVal,aaVal::v0> v0{};
            constexpr MPL::Value<aaVal,aaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,aaVal> aa{}; 
        ///Byte-Lane Shift
        enum class blsVal {
            v0=0x00000000,     ///<Not shifted. Data is left-aligned on FB_AD.
            v1=0x00000001,     ///<Shifted. Data is right-aligned on FB_AD.
        };
        namespace blsValC{
            constexpr MPL::Value<blsVal,blsVal::v0> v0{};
            constexpr MPL::Value<blsVal,blsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,blsVal> bls{}; 
        ///Wait States
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> ws{}; 
        ///Write Address Hold or Deselect
        enum class wrahVal {
            v00=0x00000000,     ///<1 cycle (default for all but FB_CS0 )
            v01=0x00000001,     ///<2 cycles
            v10=0x00000002,     ///<3 cycles
            v11=0x00000003,     ///<4 cycles (default for FB_CS0 )
        };
        namespace wrahValC{
            constexpr MPL::Value<wrahVal,wrahVal::v00> v00{};
            constexpr MPL::Value<wrahVal,wrahVal::v01> v01{};
            constexpr MPL::Value<wrahVal,wrahVal::v10> v10{};
            constexpr MPL::Value<wrahVal,wrahVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,wrahVal> wrah{}; 
        ///Read Address Hold or Deselect
        enum class rdahVal {
            v00=0x00000000,     ///<When AA is 0b, 1 cycle. When AA is 1b, 0 cycles.
            v01=0x00000001,     ///<When AA is 0b, 2 cycles. When AA is 1b, 1 cycle.
            v10=0x00000002,     ///<When AA is 0b, 3 cycles. When AA is 1b, 2 cycles.
            v11=0x00000003,     ///<When AA is 0b, 4 cycles. When AA is 1b, 3 cycles.
        };
        namespace rdahValC{
            constexpr MPL::Value<rdahVal,rdahVal::v00> v00{};
            constexpr MPL::Value<rdahVal,rdahVal::v01> v01{};
            constexpr MPL::Value<rdahVal,rdahVal::v10> v10{};
            constexpr MPL::Value<rdahVal,rdahVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,rdahVal> rdah{}; 
        ///Address Setup
        enum class asetVal {
            v00=0x00000000,     ///<Assert FB_CSn on the first rising clock edge after the address is asserted (default for all but FB_CS0 ).
            v01=0x00000001,     ///<Assert FB_CSn on the second rising clock edge after the address is asserted.
            v10=0x00000002,     ///<Assert FB_CSn on the third rising clock edge after the address is asserted.
            v11=0x00000003,     ///<Assert FB_CSn on the fourth rising clock edge after the address is asserted (default for FB_CS0 ).
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
            v0=0x00000000,     ///<Disabled. FB_TS /FB_ALE asserts for one bus clock cycle.
            v1=0x00000001,     ///<Enabled. FB_TS /FB_ALE remains asserted until the first positive clock edge after FB_CSn asserts.
        };
        namespace extsValC{
            constexpr MPL::Value<extsVal,extsVal::v0> v0{};
            constexpr MPL::Value<extsVal,extsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,extsVal> exts{}; 
        ///Secondary Wait State Enable
        enum class swsenVal {
            v0=0x00000000,     ///<Disabled. A number of wait states (specified by WS) are inserted before an internal transfer acknowledge is generated for all transfers.
            v1=0x00000001,     ///<Enabled. A number of wait states (specified by SWS) are inserted before an internal transfer acknowledge is generated for burst transfer secondary terminations.
        };
        namespace swsenValC{
            constexpr MPL::Value<swsenVal,swsenVal::v0> v0{};
            constexpr MPL::Value<swsenVal,swsenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,swsenVal> swsen{}; 
        ///Secondary Wait States
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> sws{}; 
    }
    namespace FbCscr1{    ///<Chip Select Control Register
        using Addr = Register::Address<0x4000c014,0x03000007,0,unsigned>;
        ///Burst-Write Enable
        enum class bstwVal {
            v0=0x00000000,     ///<Disabled. Data exceeding the specified port size is broken into individual, port-sized, non-burst writes. For example, a 32-bit write to an 8-bit port takes four byte writes.
            v1=0x00000001,     ///<Enabled. Enables burst write of data larger than the specified port size, including 32-bit writes to 8 and 16-bit ports, 16-bit writes to 8-bit ports, and line writes to 8-, 16-, and 32-bit ports.
        };
        namespace bstwValC{
            constexpr MPL::Value<bstwVal,bstwVal::v0> v0{};
            constexpr MPL::Value<bstwVal,bstwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bstwVal> bstw{}; 
        ///Burst-Read Enable
        enum class bstrVal {
            v0=0x00000000,     ///<Disabled. Data exceeding the specified port size is broken into individual, port-sized, non-burst reads. For example, a 32-bit read from an 8-bit port is broken into four 8-bit reads.
            v1=0x00000001,     ///<Enabled. Enables data burst reads larger than the specified port size, including 32-bit reads from 8- and 16-bit ports, 16-bit reads from 8-bit ports, and line reads from 8, 16-, and 32-bit ports.
        };
        namespace bstrValC{
            constexpr MPL::Value<bstrVal,bstrVal::v0> v0{};
            constexpr MPL::Value<bstrVal,bstrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bstrVal> bstr{}; 
        ///Byte-Enable Mode
        enum class bemVal {
            v0=0x00000000,     ///<FB_BE is asserted for data write only.
            v1=0x00000001,     ///<FB_BE is asserted for data read and write accesses.
        };
        namespace bemValC{
            constexpr MPL::Value<bemVal,bemVal::v0> v0{};
            constexpr MPL::Value<bemVal,bemVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bemVal> bem{}; 
        ///Port Size
        enum class psVal {
            v00=0x00000000,     ///<32-bit port size. Valid data is sampled and driven on FB_D[31:0].
            v01=0x00000001,     ///<8-bit port size. Valid data is sampled and driven on FB_D[31:24] when BLS is 0b, or FB_D[7:0] when BLS is 1b.
            v10=0x00000002,     ///<16-bit port size. Valid data is sampled and driven on FB_D[31:16] when BLS is 0b, or FB_D[15:0] when BLS is 1b.
            v11=0x00000003,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] when BLS is 0b, or FB_D[15:0] when BLS is 1b.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v00> v00{};
            constexpr MPL::Value<psVal,psVal::v01> v01{};
            constexpr MPL::Value<psVal,psVal::v10> v10{};
            constexpr MPL::Value<psVal,psVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,psVal> ps{}; 
        ///Auto-Acknowledge Enable
        enum class aaVal {
            v0=0x00000000,     ///<Disabled. No internal transfer acknowledge is asserted and the cycle is terminated externally.
            v1=0x00000001,     ///<Enabled. Internal transfer acknowledge is asserted as specified by WS.
        };
        namespace aaValC{
            constexpr MPL::Value<aaVal,aaVal::v0> v0{};
            constexpr MPL::Value<aaVal,aaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,aaVal> aa{}; 
        ///Byte-Lane Shift
        enum class blsVal {
            v0=0x00000000,     ///<Not shifted. Data is left-aligned on FB_AD.
            v1=0x00000001,     ///<Shifted. Data is right-aligned on FB_AD.
        };
        namespace blsValC{
            constexpr MPL::Value<blsVal,blsVal::v0> v0{};
            constexpr MPL::Value<blsVal,blsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,blsVal> bls{}; 
        ///Wait States
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> ws{}; 
        ///Write Address Hold or Deselect
        enum class wrahVal {
            v00=0x00000000,     ///<1 cycle (default for all but FB_CS0 )
            v01=0x00000001,     ///<2 cycles
            v10=0x00000002,     ///<3 cycles
            v11=0x00000003,     ///<4 cycles (default for FB_CS0 )
        };
        namespace wrahValC{
            constexpr MPL::Value<wrahVal,wrahVal::v00> v00{};
            constexpr MPL::Value<wrahVal,wrahVal::v01> v01{};
            constexpr MPL::Value<wrahVal,wrahVal::v10> v10{};
            constexpr MPL::Value<wrahVal,wrahVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,wrahVal> wrah{}; 
        ///Read Address Hold or Deselect
        enum class rdahVal {
            v00=0x00000000,     ///<When AA is 0b, 1 cycle. When AA is 1b, 0 cycles.
            v01=0x00000001,     ///<When AA is 0b, 2 cycles. When AA is 1b, 1 cycle.
            v10=0x00000002,     ///<When AA is 0b, 3 cycles. When AA is 1b, 2 cycles.
            v11=0x00000003,     ///<When AA is 0b, 4 cycles. When AA is 1b, 3 cycles.
        };
        namespace rdahValC{
            constexpr MPL::Value<rdahVal,rdahVal::v00> v00{};
            constexpr MPL::Value<rdahVal,rdahVal::v01> v01{};
            constexpr MPL::Value<rdahVal,rdahVal::v10> v10{};
            constexpr MPL::Value<rdahVal,rdahVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,rdahVal> rdah{}; 
        ///Address Setup
        enum class asetVal {
            v00=0x00000000,     ///<Assert FB_CSn on the first rising clock edge after the address is asserted (default for all but FB_CS0 ).
            v01=0x00000001,     ///<Assert FB_CSn on the second rising clock edge after the address is asserted.
            v10=0x00000002,     ///<Assert FB_CSn on the third rising clock edge after the address is asserted.
            v11=0x00000003,     ///<Assert FB_CSn on the fourth rising clock edge after the address is asserted (default for FB_CS0 ).
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
            v0=0x00000000,     ///<Disabled. FB_TS /FB_ALE asserts for one bus clock cycle.
            v1=0x00000001,     ///<Enabled. FB_TS /FB_ALE remains asserted until the first positive clock edge after FB_CSn asserts.
        };
        namespace extsValC{
            constexpr MPL::Value<extsVal,extsVal::v0> v0{};
            constexpr MPL::Value<extsVal,extsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,extsVal> exts{}; 
        ///Secondary Wait State Enable
        enum class swsenVal {
            v0=0x00000000,     ///<Disabled. A number of wait states (specified by WS) are inserted before an internal transfer acknowledge is generated for all transfers.
            v1=0x00000001,     ///<Enabled. A number of wait states (specified by SWS) are inserted before an internal transfer acknowledge is generated for burst transfer secondary terminations.
        };
        namespace swsenValC{
            constexpr MPL::Value<swsenVal,swsenVal::v0> v0{};
            constexpr MPL::Value<swsenVal,swsenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,swsenVal> swsen{}; 
        ///Secondary Wait States
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> sws{}; 
    }
    namespace FbCscr2{    ///<Chip Select Control Register
        using Addr = Register::Address<0x4000c020,0x03000007,0,unsigned>;
        ///Burst-Write Enable
        enum class bstwVal {
            v0=0x00000000,     ///<Disabled. Data exceeding the specified port size is broken into individual, port-sized, non-burst writes. For example, a 32-bit write to an 8-bit port takes four byte writes.
            v1=0x00000001,     ///<Enabled. Enables burst write of data larger than the specified port size, including 32-bit writes to 8 and 16-bit ports, 16-bit writes to 8-bit ports, and line writes to 8-, 16-, and 32-bit ports.
        };
        namespace bstwValC{
            constexpr MPL::Value<bstwVal,bstwVal::v0> v0{};
            constexpr MPL::Value<bstwVal,bstwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bstwVal> bstw{}; 
        ///Burst-Read Enable
        enum class bstrVal {
            v0=0x00000000,     ///<Disabled. Data exceeding the specified port size is broken into individual, port-sized, non-burst reads. For example, a 32-bit read from an 8-bit port is broken into four 8-bit reads.
            v1=0x00000001,     ///<Enabled. Enables data burst reads larger than the specified port size, including 32-bit reads from 8- and 16-bit ports, 16-bit reads from 8-bit ports, and line reads from 8, 16-, and 32-bit ports.
        };
        namespace bstrValC{
            constexpr MPL::Value<bstrVal,bstrVal::v0> v0{};
            constexpr MPL::Value<bstrVal,bstrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bstrVal> bstr{}; 
        ///Byte-Enable Mode
        enum class bemVal {
            v0=0x00000000,     ///<FB_BE is asserted for data write only.
            v1=0x00000001,     ///<FB_BE is asserted for data read and write accesses.
        };
        namespace bemValC{
            constexpr MPL::Value<bemVal,bemVal::v0> v0{};
            constexpr MPL::Value<bemVal,bemVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bemVal> bem{}; 
        ///Port Size
        enum class psVal {
            v00=0x00000000,     ///<32-bit port size. Valid data is sampled and driven on FB_D[31:0].
            v01=0x00000001,     ///<8-bit port size. Valid data is sampled and driven on FB_D[31:24] when BLS is 0b, or FB_D[7:0] when BLS is 1b.
            v10=0x00000002,     ///<16-bit port size. Valid data is sampled and driven on FB_D[31:16] when BLS is 0b, or FB_D[15:0] when BLS is 1b.
            v11=0x00000003,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] when BLS is 0b, or FB_D[15:0] when BLS is 1b.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v00> v00{};
            constexpr MPL::Value<psVal,psVal::v01> v01{};
            constexpr MPL::Value<psVal,psVal::v10> v10{};
            constexpr MPL::Value<psVal,psVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,psVal> ps{}; 
        ///Auto-Acknowledge Enable
        enum class aaVal {
            v0=0x00000000,     ///<Disabled. No internal transfer acknowledge is asserted and the cycle is terminated externally.
            v1=0x00000001,     ///<Enabled. Internal transfer acknowledge is asserted as specified by WS.
        };
        namespace aaValC{
            constexpr MPL::Value<aaVal,aaVal::v0> v0{};
            constexpr MPL::Value<aaVal,aaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,aaVal> aa{}; 
        ///Byte-Lane Shift
        enum class blsVal {
            v0=0x00000000,     ///<Not shifted. Data is left-aligned on FB_AD.
            v1=0x00000001,     ///<Shifted. Data is right-aligned on FB_AD.
        };
        namespace blsValC{
            constexpr MPL::Value<blsVal,blsVal::v0> v0{};
            constexpr MPL::Value<blsVal,blsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,blsVal> bls{}; 
        ///Wait States
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> ws{}; 
        ///Write Address Hold or Deselect
        enum class wrahVal {
            v00=0x00000000,     ///<1 cycle (default for all but FB_CS0 )
            v01=0x00000001,     ///<2 cycles
            v10=0x00000002,     ///<3 cycles
            v11=0x00000003,     ///<4 cycles (default for FB_CS0 )
        };
        namespace wrahValC{
            constexpr MPL::Value<wrahVal,wrahVal::v00> v00{};
            constexpr MPL::Value<wrahVal,wrahVal::v01> v01{};
            constexpr MPL::Value<wrahVal,wrahVal::v10> v10{};
            constexpr MPL::Value<wrahVal,wrahVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,wrahVal> wrah{}; 
        ///Read Address Hold or Deselect
        enum class rdahVal {
            v00=0x00000000,     ///<When AA is 0b, 1 cycle. When AA is 1b, 0 cycles.
            v01=0x00000001,     ///<When AA is 0b, 2 cycles. When AA is 1b, 1 cycle.
            v10=0x00000002,     ///<When AA is 0b, 3 cycles. When AA is 1b, 2 cycles.
            v11=0x00000003,     ///<When AA is 0b, 4 cycles. When AA is 1b, 3 cycles.
        };
        namespace rdahValC{
            constexpr MPL::Value<rdahVal,rdahVal::v00> v00{};
            constexpr MPL::Value<rdahVal,rdahVal::v01> v01{};
            constexpr MPL::Value<rdahVal,rdahVal::v10> v10{};
            constexpr MPL::Value<rdahVal,rdahVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,rdahVal> rdah{}; 
        ///Address Setup
        enum class asetVal {
            v00=0x00000000,     ///<Assert FB_CSn on the first rising clock edge after the address is asserted (default for all but FB_CS0 ).
            v01=0x00000001,     ///<Assert FB_CSn on the second rising clock edge after the address is asserted.
            v10=0x00000002,     ///<Assert FB_CSn on the third rising clock edge after the address is asserted.
            v11=0x00000003,     ///<Assert FB_CSn on the fourth rising clock edge after the address is asserted (default for FB_CS0 ).
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
            v0=0x00000000,     ///<Disabled. FB_TS /FB_ALE asserts for one bus clock cycle.
            v1=0x00000001,     ///<Enabled. FB_TS /FB_ALE remains asserted until the first positive clock edge after FB_CSn asserts.
        };
        namespace extsValC{
            constexpr MPL::Value<extsVal,extsVal::v0> v0{};
            constexpr MPL::Value<extsVal,extsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,extsVal> exts{}; 
        ///Secondary Wait State Enable
        enum class swsenVal {
            v0=0x00000000,     ///<Disabled. A number of wait states (specified by WS) are inserted before an internal transfer acknowledge is generated for all transfers.
            v1=0x00000001,     ///<Enabled. A number of wait states (specified by SWS) are inserted before an internal transfer acknowledge is generated for burst transfer secondary terminations.
        };
        namespace swsenValC{
            constexpr MPL::Value<swsenVal,swsenVal::v0> v0{};
            constexpr MPL::Value<swsenVal,swsenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,swsenVal> swsen{}; 
        ///Secondary Wait States
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> sws{}; 
    }
    namespace FbCscr3{    ///<Chip Select Control Register
        using Addr = Register::Address<0x4000c02c,0x03000007,0,unsigned>;
        ///Burst-Write Enable
        enum class bstwVal {
            v0=0x00000000,     ///<Disabled. Data exceeding the specified port size is broken into individual, port-sized, non-burst writes. For example, a 32-bit write to an 8-bit port takes four byte writes.
            v1=0x00000001,     ///<Enabled. Enables burst write of data larger than the specified port size, including 32-bit writes to 8 and 16-bit ports, 16-bit writes to 8-bit ports, and line writes to 8-, 16-, and 32-bit ports.
        };
        namespace bstwValC{
            constexpr MPL::Value<bstwVal,bstwVal::v0> v0{};
            constexpr MPL::Value<bstwVal,bstwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bstwVal> bstw{}; 
        ///Burst-Read Enable
        enum class bstrVal {
            v0=0x00000000,     ///<Disabled. Data exceeding the specified port size is broken into individual, port-sized, non-burst reads. For example, a 32-bit read from an 8-bit port is broken into four 8-bit reads.
            v1=0x00000001,     ///<Enabled. Enables data burst reads larger than the specified port size, including 32-bit reads from 8- and 16-bit ports, 16-bit reads from 8-bit ports, and line reads from 8, 16-, and 32-bit ports.
        };
        namespace bstrValC{
            constexpr MPL::Value<bstrVal,bstrVal::v0> v0{};
            constexpr MPL::Value<bstrVal,bstrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bstrVal> bstr{}; 
        ///Byte-Enable Mode
        enum class bemVal {
            v0=0x00000000,     ///<FB_BE is asserted for data write only.
            v1=0x00000001,     ///<FB_BE is asserted for data read and write accesses.
        };
        namespace bemValC{
            constexpr MPL::Value<bemVal,bemVal::v0> v0{};
            constexpr MPL::Value<bemVal,bemVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bemVal> bem{}; 
        ///Port Size
        enum class psVal {
            v00=0x00000000,     ///<32-bit port size. Valid data is sampled and driven on FB_D[31:0].
            v01=0x00000001,     ///<8-bit port size. Valid data is sampled and driven on FB_D[31:24] when BLS is 0b, or FB_D[7:0] when BLS is 1b.
            v10=0x00000002,     ///<16-bit port size. Valid data is sampled and driven on FB_D[31:16] when BLS is 0b, or FB_D[15:0] when BLS is 1b.
            v11=0x00000003,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] when BLS is 0b, or FB_D[15:0] when BLS is 1b.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v00> v00{};
            constexpr MPL::Value<psVal,psVal::v01> v01{};
            constexpr MPL::Value<psVal,psVal::v10> v10{};
            constexpr MPL::Value<psVal,psVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,psVal> ps{}; 
        ///Auto-Acknowledge Enable
        enum class aaVal {
            v0=0x00000000,     ///<Disabled. No internal transfer acknowledge is asserted and the cycle is terminated externally.
            v1=0x00000001,     ///<Enabled. Internal transfer acknowledge is asserted as specified by WS.
        };
        namespace aaValC{
            constexpr MPL::Value<aaVal,aaVal::v0> v0{};
            constexpr MPL::Value<aaVal,aaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,aaVal> aa{}; 
        ///Byte-Lane Shift
        enum class blsVal {
            v0=0x00000000,     ///<Not shifted. Data is left-aligned on FB_AD.
            v1=0x00000001,     ///<Shifted. Data is right-aligned on FB_AD.
        };
        namespace blsValC{
            constexpr MPL::Value<blsVal,blsVal::v0> v0{};
            constexpr MPL::Value<blsVal,blsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,blsVal> bls{}; 
        ///Wait States
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> ws{}; 
        ///Write Address Hold or Deselect
        enum class wrahVal {
            v00=0x00000000,     ///<1 cycle (default for all but FB_CS0 )
            v01=0x00000001,     ///<2 cycles
            v10=0x00000002,     ///<3 cycles
            v11=0x00000003,     ///<4 cycles (default for FB_CS0 )
        };
        namespace wrahValC{
            constexpr MPL::Value<wrahVal,wrahVal::v00> v00{};
            constexpr MPL::Value<wrahVal,wrahVal::v01> v01{};
            constexpr MPL::Value<wrahVal,wrahVal::v10> v10{};
            constexpr MPL::Value<wrahVal,wrahVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,wrahVal> wrah{}; 
        ///Read Address Hold or Deselect
        enum class rdahVal {
            v00=0x00000000,     ///<When AA is 0b, 1 cycle. When AA is 1b, 0 cycles.
            v01=0x00000001,     ///<When AA is 0b, 2 cycles. When AA is 1b, 1 cycle.
            v10=0x00000002,     ///<When AA is 0b, 3 cycles. When AA is 1b, 2 cycles.
            v11=0x00000003,     ///<When AA is 0b, 4 cycles. When AA is 1b, 3 cycles.
        };
        namespace rdahValC{
            constexpr MPL::Value<rdahVal,rdahVal::v00> v00{};
            constexpr MPL::Value<rdahVal,rdahVal::v01> v01{};
            constexpr MPL::Value<rdahVal,rdahVal::v10> v10{};
            constexpr MPL::Value<rdahVal,rdahVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,rdahVal> rdah{}; 
        ///Address Setup
        enum class asetVal {
            v00=0x00000000,     ///<Assert FB_CSn on the first rising clock edge after the address is asserted (default for all but FB_CS0 ).
            v01=0x00000001,     ///<Assert FB_CSn on the second rising clock edge after the address is asserted.
            v10=0x00000002,     ///<Assert FB_CSn on the third rising clock edge after the address is asserted.
            v11=0x00000003,     ///<Assert FB_CSn on the fourth rising clock edge after the address is asserted (default for FB_CS0 ).
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
            v0=0x00000000,     ///<Disabled. FB_TS /FB_ALE asserts for one bus clock cycle.
            v1=0x00000001,     ///<Enabled. FB_TS /FB_ALE remains asserted until the first positive clock edge after FB_CSn asserts.
        };
        namespace extsValC{
            constexpr MPL::Value<extsVal,extsVal::v0> v0{};
            constexpr MPL::Value<extsVal,extsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,extsVal> exts{}; 
        ///Secondary Wait State Enable
        enum class swsenVal {
            v0=0x00000000,     ///<Disabled. A number of wait states (specified by WS) are inserted before an internal transfer acknowledge is generated for all transfers.
            v1=0x00000001,     ///<Enabled. A number of wait states (specified by SWS) are inserted before an internal transfer acknowledge is generated for burst transfer secondary terminations.
        };
        namespace swsenValC{
            constexpr MPL::Value<swsenVal,swsenVal::v0> v0{};
            constexpr MPL::Value<swsenVal,swsenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,swsenVal> swsen{}; 
        ///Secondary Wait States
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> sws{}; 
    }
    namespace FbCscr4{    ///<Chip Select Control Register
        using Addr = Register::Address<0x4000c038,0x03000007,0,unsigned>;
        ///Burst-Write Enable
        enum class bstwVal {
            v0=0x00000000,     ///<Disabled. Data exceeding the specified port size is broken into individual, port-sized, non-burst writes. For example, a 32-bit write to an 8-bit port takes four byte writes.
            v1=0x00000001,     ///<Enabled. Enables burst write of data larger than the specified port size, including 32-bit writes to 8 and 16-bit ports, 16-bit writes to 8-bit ports, and line writes to 8-, 16-, and 32-bit ports.
        };
        namespace bstwValC{
            constexpr MPL::Value<bstwVal,bstwVal::v0> v0{};
            constexpr MPL::Value<bstwVal,bstwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bstwVal> bstw{}; 
        ///Burst-Read Enable
        enum class bstrVal {
            v0=0x00000000,     ///<Disabled. Data exceeding the specified port size is broken into individual, port-sized, non-burst reads. For example, a 32-bit read from an 8-bit port is broken into four 8-bit reads.
            v1=0x00000001,     ///<Enabled. Enables data burst reads larger than the specified port size, including 32-bit reads from 8- and 16-bit ports, 16-bit reads from 8-bit ports, and line reads from 8, 16-, and 32-bit ports.
        };
        namespace bstrValC{
            constexpr MPL::Value<bstrVal,bstrVal::v0> v0{};
            constexpr MPL::Value<bstrVal,bstrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bstrVal> bstr{}; 
        ///Byte-Enable Mode
        enum class bemVal {
            v0=0x00000000,     ///<FB_BE is asserted for data write only.
            v1=0x00000001,     ///<FB_BE is asserted for data read and write accesses.
        };
        namespace bemValC{
            constexpr MPL::Value<bemVal,bemVal::v0> v0{};
            constexpr MPL::Value<bemVal,bemVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bemVal> bem{}; 
        ///Port Size
        enum class psVal {
            v00=0x00000000,     ///<32-bit port size. Valid data is sampled and driven on FB_D[31:0].
            v01=0x00000001,     ///<8-bit port size. Valid data is sampled and driven on FB_D[31:24] when BLS is 0b, or FB_D[7:0] when BLS is 1b.
            v10=0x00000002,     ///<16-bit port size. Valid data is sampled and driven on FB_D[31:16] when BLS is 0b, or FB_D[15:0] when BLS is 1b.
            v11=0x00000003,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] when BLS is 0b, or FB_D[15:0] when BLS is 1b.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v00> v00{};
            constexpr MPL::Value<psVal,psVal::v01> v01{};
            constexpr MPL::Value<psVal,psVal::v10> v10{};
            constexpr MPL::Value<psVal,psVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,psVal> ps{}; 
        ///Auto-Acknowledge Enable
        enum class aaVal {
            v0=0x00000000,     ///<Disabled. No internal transfer acknowledge is asserted and the cycle is terminated externally.
            v1=0x00000001,     ///<Enabled. Internal transfer acknowledge is asserted as specified by WS.
        };
        namespace aaValC{
            constexpr MPL::Value<aaVal,aaVal::v0> v0{};
            constexpr MPL::Value<aaVal,aaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,aaVal> aa{}; 
        ///Byte-Lane Shift
        enum class blsVal {
            v0=0x00000000,     ///<Not shifted. Data is left-aligned on FB_AD.
            v1=0x00000001,     ///<Shifted. Data is right-aligned on FB_AD.
        };
        namespace blsValC{
            constexpr MPL::Value<blsVal,blsVal::v0> v0{};
            constexpr MPL::Value<blsVal,blsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,blsVal> bls{}; 
        ///Wait States
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> ws{}; 
        ///Write Address Hold or Deselect
        enum class wrahVal {
            v00=0x00000000,     ///<1 cycle (default for all but FB_CS0 )
            v01=0x00000001,     ///<2 cycles
            v10=0x00000002,     ///<3 cycles
            v11=0x00000003,     ///<4 cycles (default for FB_CS0 )
        };
        namespace wrahValC{
            constexpr MPL::Value<wrahVal,wrahVal::v00> v00{};
            constexpr MPL::Value<wrahVal,wrahVal::v01> v01{};
            constexpr MPL::Value<wrahVal,wrahVal::v10> v10{};
            constexpr MPL::Value<wrahVal,wrahVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,wrahVal> wrah{}; 
        ///Read Address Hold or Deselect
        enum class rdahVal {
            v00=0x00000000,     ///<When AA is 0b, 1 cycle. When AA is 1b, 0 cycles.
            v01=0x00000001,     ///<When AA is 0b, 2 cycles. When AA is 1b, 1 cycle.
            v10=0x00000002,     ///<When AA is 0b, 3 cycles. When AA is 1b, 2 cycles.
            v11=0x00000003,     ///<When AA is 0b, 4 cycles. When AA is 1b, 3 cycles.
        };
        namespace rdahValC{
            constexpr MPL::Value<rdahVal,rdahVal::v00> v00{};
            constexpr MPL::Value<rdahVal,rdahVal::v01> v01{};
            constexpr MPL::Value<rdahVal,rdahVal::v10> v10{};
            constexpr MPL::Value<rdahVal,rdahVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,rdahVal> rdah{}; 
        ///Address Setup
        enum class asetVal {
            v00=0x00000000,     ///<Assert FB_CSn on the first rising clock edge after the address is asserted (default for all but FB_CS0 ).
            v01=0x00000001,     ///<Assert FB_CSn on the second rising clock edge after the address is asserted.
            v10=0x00000002,     ///<Assert FB_CSn on the third rising clock edge after the address is asserted.
            v11=0x00000003,     ///<Assert FB_CSn on the fourth rising clock edge after the address is asserted (default for FB_CS0 ).
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
            v0=0x00000000,     ///<Disabled. FB_TS /FB_ALE asserts for one bus clock cycle.
            v1=0x00000001,     ///<Enabled. FB_TS /FB_ALE remains asserted until the first positive clock edge after FB_CSn asserts.
        };
        namespace extsValC{
            constexpr MPL::Value<extsVal,extsVal::v0> v0{};
            constexpr MPL::Value<extsVal,extsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,extsVal> exts{}; 
        ///Secondary Wait State Enable
        enum class swsenVal {
            v0=0x00000000,     ///<Disabled. A number of wait states (specified by WS) are inserted before an internal transfer acknowledge is generated for all transfers.
            v1=0x00000001,     ///<Enabled. A number of wait states (specified by SWS) are inserted before an internal transfer acknowledge is generated for burst transfer secondary terminations.
        };
        namespace swsenValC{
            constexpr MPL::Value<swsenVal,swsenVal::v0> v0{};
            constexpr MPL::Value<swsenVal,swsenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,swsenVal> swsen{}; 
        ///Secondary Wait States
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> sws{}; 
    }
    namespace FbCscr5{    ///<Chip Select Control Register
        using Addr = Register::Address<0x4000c044,0x03000007,0,unsigned>;
        ///Burst-Write Enable
        enum class bstwVal {
            v0=0x00000000,     ///<Disabled. Data exceeding the specified port size is broken into individual, port-sized, non-burst writes. For example, a 32-bit write to an 8-bit port takes four byte writes.
            v1=0x00000001,     ///<Enabled. Enables burst write of data larger than the specified port size, including 32-bit writes to 8 and 16-bit ports, 16-bit writes to 8-bit ports, and line writes to 8-, 16-, and 32-bit ports.
        };
        namespace bstwValC{
            constexpr MPL::Value<bstwVal,bstwVal::v0> v0{};
            constexpr MPL::Value<bstwVal,bstwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bstwVal> bstw{}; 
        ///Burst-Read Enable
        enum class bstrVal {
            v0=0x00000000,     ///<Disabled. Data exceeding the specified port size is broken into individual, port-sized, non-burst reads. For example, a 32-bit read from an 8-bit port is broken into four 8-bit reads.
            v1=0x00000001,     ///<Enabled. Enables data burst reads larger than the specified port size, including 32-bit reads from 8- and 16-bit ports, 16-bit reads from 8-bit ports, and line reads from 8, 16-, and 32-bit ports.
        };
        namespace bstrValC{
            constexpr MPL::Value<bstrVal,bstrVal::v0> v0{};
            constexpr MPL::Value<bstrVal,bstrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bstrVal> bstr{}; 
        ///Byte-Enable Mode
        enum class bemVal {
            v0=0x00000000,     ///<FB_BE is asserted for data write only.
            v1=0x00000001,     ///<FB_BE is asserted for data read and write accesses.
        };
        namespace bemValC{
            constexpr MPL::Value<bemVal,bemVal::v0> v0{};
            constexpr MPL::Value<bemVal,bemVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bemVal> bem{}; 
        ///Port Size
        enum class psVal {
            v00=0x00000000,     ///<32-bit port size. Valid data is sampled and driven on FB_D[31:0].
            v01=0x00000001,     ///<8-bit port size. Valid data is sampled and driven on FB_D[31:24] when BLS is 0b, or FB_D[7:0] when BLS is 1b.
            v10=0x00000002,     ///<16-bit port size. Valid data is sampled and driven on FB_D[31:16] when BLS is 0b, or FB_D[15:0] when BLS is 1b.
            v11=0x00000003,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] when BLS is 0b, or FB_D[15:0] when BLS is 1b.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v00> v00{};
            constexpr MPL::Value<psVal,psVal::v01> v01{};
            constexpr MPL::Value<psVal,psVal::v10> v10{};
            constexpr MPL::Value<psVal,psVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,psVal> ps{}; 
        ///Auto-Acknowledge Enable
        enum class aaVal {
            v0=0x00000000,     ///<Disabled. No internal transfer acknowledge is asserted and the cycle is terminated externally.
            v1=0x00000001,     ///<Enabled. Internal transfer acknowledge is asserted as specified by WS.
        };
        namespace aaValC{
            constexpr MPL::Value<aaVal,aaVal::v0> v0{};
            constexpr MPL::Value<aaVal,aaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,aaVal> aa{}; 
        ///Byte-Lane Shift
        enum class blsVal {
            v0=0x00000000,     ///<Not shifted. Data is left-aligned on FB_AD.
            v1=0x00000001,     ///<Shifted. Data is right-aligned on FB_AD.
        };
        namespace blsValC{
            constexpr MPL::Value<blsVal,blsVal::v0> v0{};
            constexpr MPL::Value<blsVal,blsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,blsVal> bls{}; 
        ///Wait States
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> ws{}; 
        ///Write Address Hold or Deselect
        enum class wrahVal {
            v00=0x00000000,     ///<1 cycle (default for all but FB_CS0 )
            v01=0x00000001,     ///<2 cycles
            v10=0x00000002,     ///<3 cycles
            v11=0x00000003,     ///<4 cycles (default for FB_CS0 )
        };
        namespace wrahValC{
            constexpr MPL::Value<wrahVal,wrahVal::v00> v00{};
            constexpr MPL::Value<wrahVal,wrahVal::v01> v01{};
            constexpr MPL::Value<wrahVal,wrahVal::v10> v10{};
            constexpr MPL::Value<wrahVal,wrahVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,wrahVal> wrah{}; 
        ///Read Address Hold or Deselect
        enum class rdahVal {
            v00=0x00000000,     ///<When AA is 0b, 1 cycle. When AA is 1b, 0 cycles.
            v01=0x00000001,     ///<When AA is 0b, 2 cycles. When AA is 1b, 1 cycle.
            v10=0x00000002,     ///<When AA is 0b, 3 cycles. When AA is 1b, 2 cycles.
            v11=0x00000003,     ///<When AA is 0b, 4 cycles. When AA is 1b, 3 cycles.
        };
        namespace rdahValC{
            constexpr MPL::Value<rdahVal,rdahVal::v00> v00{};
            constexpr MPL::Value<rdahVal,rdahVal::v01> v01{};
            constexpr MPL::Value<rdahVal,rdahVal::v10> v10{};
            constexpr MPL::Value<rdahVal,rdahVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,rdahVal> rdah{}; 
        ///Address Setup
        enum class asetVal {
            v00=0x00000000,     ///<Assert FB_CSn on the first rising clock edge after the address is asserted (default for all but FB_CS0 ).
            v01=0x00000001,     ///<Assert FB_CSn on the second rising clock edge after the address is asserted.
            v10=0x00000002,     ///<Assert FB_CSn on the third rising clock edge after the address is asserted.
            v11=0x00000003,     ///<Assert FB_CSn on the fourth rising clock edge after the address is asserted (default for FB_CS0 ).
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
            v0=0x00000000,     ///<Disabled. FB_TS /FB_ALE asserts for one bus clock cycle.
            v1=0x00000001,     ///<Enabled. FB_TS /FB_ALE remains asserted until the first positive clock edge after FB_CSn asserts.
        };
        namespace extsValC{
            constexpr MPL::Value<extsVal,extsVal::v0> v0{};
            constexpr MPL::Value<extsVal,extsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,extsVal> exts{}; 
        ///Secondary Wait State Enable
        enum class swsenVal {
            v0=0x00000000,     ///<Disabled. A number of wait states (specified by WS) are inserted before an internal transfer acknowledge is generated for all transfers.
            v1=0x00000001,     ///<Enabled. A number of wait states (specified by SWS) are inserted before an internal transfer acknowledge is generated for burst transfer secondary terminations.
        };
        namespace swsenValC{
            constexpr MPL::Value<swsenVal,swsenVal::v0> v0{};
            constexpr MPL::Value<swsenVal,swsenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,swsenVal> swsen{}; 
        ///Secondary Wait States
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> sws{}; 
    }
    namespace FbCspmcr{    ///<Chip Select port Multiplexing Control Register
        using Addr = Register::Address<0x4000c060,0x00000fff,0,unsigned>;
        ///FlexBus Signal Group 5 Multiplex control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> group5{}; 
        ///FlexBus Signal Group 4 Multiplex control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> group4{}; 
        ///FlexBus Signal Group 3 Multiplex control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> group3{}; 
        ///FlexBus Signal Group 2 Multiplex control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> group2{}; 
        ///FlexBus Signal Group 1 Multiplex control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> group1{}; 
    }
}
