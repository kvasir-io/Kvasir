#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//FlexBus external bus interface
    namespace FbCsar0{    ///<Chip Select Address Register
        using Addr = Register::Address<0x4000c000,0x0000ffff,0,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace FbCsar1{    ///<Chip Select Address Register
        using Addr = Register::Address<0x4000c00c,0x0000ffff,0,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace FbCsar2{    ///<Chip Select Address Register
        using Addr = Register::Address<0x4000c018,0x0000ffff,0,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace FbCsar3{    ///<Chip Select Address Register
        using Addr = Register::Address<0x4000c024,0x0000ffff,0,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace FbCsar4{    ///<Chip Select Address Register
        using Addr = Register::Address<0x4000c030,0x0000ffff,0,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace FbCsar5{    ///<Chip Select Address Register
        using Addr = Register::Address<0x4000c03c,0x0000ffff,0,unsigned>;
        ///Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace FbCsmr0{    ///<Chip Select Mask Register
        using Addr = Register::Address<0x4000c004,0x0000fefe,0,unsigned>;
        ///Valid
        enum class VVal {
            v0=0x00000000,     ///<Chip-select is invalid.
            v1=0x00000001,     ///<Chip-select is valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,VVal> v{}; 
        namespace VValC{
            constexpr Register::FieldValue<decltype(v)::Type,VVal::v0> v0{};
            constexpr Register::FieldValue<decltype(v)::Type,VVal::v1> v1{};
        }
        ///Write Protect
        enum class WpVal {
            v0=0x00000000,     ///<Write accesses are allowed.
            v1=0x00000001,     ///<Write accesses are not allowed. Attempting to write to the range of addresses for which the WP bit is set results in a bus error termination of the internal cycle and no external cycle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,WpVal> wp{}; 
        namespace WpValC{
            constexpr Register::FieldValue<decltype(wp)::Type,WpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wp)::Type,WpVal::v1> v1{};
        }
        ///Base Address Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bam{}; 
    }
    namespace FbCsmr1{    ///<Chip Select Mask Register
        using Addr = Register::Address<0x4000c010,0x0000fefe,0,unsigned>;
        ///Valid
        enum class VVal {
            v0=0x00000000,     ///<Chip-select is invalid.
            v1=0x00000001,     ///<Chip-select is valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,VVal> v{}; 
        namespace VValC{
            constexpr Register::FieldValue<decltype(v)::Type,VVal::v0> v0{};
            constexpr Register::FieldValue<decltype(v)::Type,VVal::v1> v1{};
        }
        ///Write Protect
        enum class WpVal {
            v0=0x00000000,     ///<Write accesses are allowed.
            v1=0x00000001,     ///<Write accesses are not allowed. Attempting to write to the range of addresses for which the WP bit is set results in a bus error termination of the internal cycle and no external cycle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,WpVal> wp{}; 
        namespace WpValC{
            constexpr Register::FieldValue<decltype(wp)::Type,WpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wp)::Type,WpVal::v1> v1{};
        }
        ///Base Address Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bam{}; 
    }
    namespace FbCsmr2{    ///<Chip Select Mask Register
        using Addr = Register::Address<0x4000c01c,0x0000fefe,0,unsigned>;
        ///Valid
        enum class VVal {
            v0=0x00000000,     ///<Chip-select is invalid.
            v1=0x00000001,     ///<Chip-select is valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,VVal> v{}; 
        namespace VValC{
            constexpr Register::FieldValue<decltype(v)::Type,VVal::v0> v0{};
            constexpr Register::FieldValue<decltype(v)::Type,VVal::v1> v1{};
        }
        ///Write Protect
        enum class WpVal {
            v0=0x00000000,     ///<Write accesses are allowed.
            v1=0x00000001,     ///<Write accesses are not allowed. Attempting to write to the range of addresses for which the WP bit is set results in a bus error termination of the internal cycle and no external cycle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,WpVal> wp{}; 
        namespace WpValC{
            constexpr Register::FieldValue<decltype(wp)::Type,WpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wp)::Type,WpVal::v1> v1{};
        }
        ///Base Address Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bam{}; 
    }
    namespace FbCsmr3{    ///<Chip Select Mask Register
        using Addr = Register::Address<0x4000c028,0x0000fefe,0,unsigned>;
        ///Valid
        enum class VVal {
            v0=0x00000000,     ///<Chip-select is invalid.
            v1=0x00000001,     ///<Chip-select is valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,VVal> v{}; 
        namespace VValC{
            constexpr Register::FieldValue<decltype(v)::Type,VVal::v0> v0{};
            constexpr Register::FieldValue<decltype(v)::Type,VVal::v1> v1{};
        }
        ///Write Protect
        enum class WpVal {
            v0=0x00000000,     ///<Write accesses are allowed.
            v1=0x00000001,     ///<Write accesses are not allowed. Attempting to write to the range of addresses for which the WP bit is set results in a bus error termination of the internal cycle and no external cycle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,WpVal> wp{}; 
        namespace WpValC{
            constexpr Register::FieldValue<decltype(wp)::Type,WpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wp)::Type,WpVal::v1> v1{};
        }
        ///Base Address Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bam{}; 
    }
    namespace FbCsmr4{    ///<Chip Select Mask Register
        using Addr = Register::Address<0x4000c034,0x0000fefe,0,unsigned>;
        ///Valid
        enum class VVal {
            v0=0x00000000,     ///<Chip-select is invalid.
            v1=0x00000001,     ///<Chip-select is valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,VVal> v{}; 
        namespace VValC{
            constexpr Register::FieldValue<decltype(v)::Type,VVal::v0> v0{};
            constexpr Register::FieldValue<decltype(v)::Type,VVal::v1> v1{};
        }
        ///Write Protect
        enum class WpVal {
            v0=0x00000000,     ///<Write accesses are allowed.
            v1=0x00000001,     ///<Write accesses are not allowed. Attempting to write to the range of addresses for which the WP bit is set results in a bus error termination of the internal cycle and no external cycle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,WpVal> wp{}; 
        namespace WpValC{
            constexpr Register::FieldValue<decltype(wp)::Type,WpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wp)::Type,WpVal::v1> v1{};
        }
        ///Base Address Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bam{}; 
    }
    namespace FbCsmr5{    ///<Chip Select Mask Register
        using Addr = Register::Address<0x4000c040,0x0000fefe,0,unsigned>;
        ///Valid
        enum class VVal {
            v0=0x00000000,     ///<Chip-select is invalid.
            v1=0x00000001,     ///<Chip-select is valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,VVal> v{}; 
        namespace VValC{
            constexpr Register::FieldValue<decltype(v)::Type,VVal::v0> v0{};
            constexpr Register::FieldValue<decltype(v)::Type,VVal::v1> v1{};
        }
        ///Write Protect
        enum class WpVal {
            v0=0x00000000,     ///<Write accesses are allowed.
            v1=0x00000001,     ///<Write accesses are not allowed. Attempting to write to the range of addresses for which the WP bit is set results in a bus error termination of the internal cycle and no external cycle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,WpVal> wp{}; 
        namespace WpValC{
            constexpr Register::FieldValue<decltype(wp)::Type,WpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wp)::Type,WpVal::v1> v1{};
        }
        ///Base Address Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bam{}; 
    }
    namespace FbCscr0{    ///<Chip Select Control Register
        using Addr = Register::Address<0x4000c008,0x03000007,0,unsigned>;
        ///Burst-Write Enable
        enum class BstwVal {
            v0=0x00000000,     ///<Disabled. Data exceeding the specified port size is broken into individual, port-sized, non-burst writes. For example, a 32-bit write to an 8-bit port takes four byte writes.
            v1=0x00000001,     ///<Enabled. Enables burst write of data larger than the specified port size, including 32-bit writes to 8 and 16-bit ports, 16-bit writes to 8-bit ports, and line writes to 8-, 16-, and 32-bit ports.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BstwVal> bstw{}; 
        namespace BstwValC{
            constexpr Register::FieldValue<decltype(bstw)::Type,BstwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bstw)::Type,BstwVal::v1> v1{};
        }
        ///Burst-Read Enable
        enum class BstrVal {
            v0=0x00000000,     ///<Disabled. Data exceeding the specified port size is broken into individual, port-sized, non-burst reads. For example, a 32-bit read from an 8-bit port is broken into four 8-bit reads.
            v1=0x00000001,     ///<Enabled. Enables data burst reads larger than the specified port size, including 32-bit reads from 8- and 16-bit ports, 16-bit reads from 8-bit ports, and line reads from 8, 16-, and 32-bit ports.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BstrVal> bstr{}; 
        namespace BstrValC{
            constexpr Register::FieldValue<decltype(bstr)::Type,BstrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bstr)::Type,BstrVal::v1> v1{};
        }
        ///Byte-Enable Mode
        enum class BemVal {
            v0=0x00000000,     ///<FB_BE is asserted for data write only.
            v1=0x00000001,     ///<FB_BE is asserted for data read and write accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BemVal> bem{}; 
        namespace BemValC{
            constexpr Register::FieldValue<decltype(bem)::Type,BemVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bem)::Type,BemVal::v1> v1{};
        }
        ///Port Size
        enum class PsVal {
            v00=0x00000000,     ///<32-bit port size. Valid data is sampled and driven on FB_D[31:0].
            v01=0x00000001,     ///<8-bit port size. Valid data is sampled and driven on FB_D[31:24] when BLS is 0b, or FB_D[7:0] when BLS is 1b.
            v10=0x00000002,     ///<16-bit port size. Valid data is sampled and driven on FB_D[31:16] when BLS is 0b, or FB_D[15:0] when BLS is 1b.
            v11=0x00000003,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] when BLS is 0b, or FB_D[15:0] when BLS is 1b.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v11> v11{};
        }
        ///Auto-Acknowledge Enable
        enum class AaVal {
            v0=0x00000000,     ///<Disabled. No internal transfer acknowledge is asserted and the cycle is terminated externally.
            v1=0x00000001,     ///<Enabled. Internal transfer acknowledge is asserted as specified by WS.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AaVal> aa{}; 
        namespace AaValC{
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v1> v1{};
        }
        ///Byte-Lane Shift
        enum class BlsVal {
            v0=0x00000000,     ///<Not shifted. Data is left-aligned on FB_AD.
            v1=0x00000001,     ///<Shifted. Data is right-aligned on FB_AD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,BlsVal> bls{}; 
        namespace BlsValC{
            constexpr Register::FieldValue<decltype(bls)::Type,BlsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bls)::Type,BlsVal::v1> v1{};
        }
        ///Wait States
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> ws{}; 
        ///Write Address Hold or Deselect
        enum class WrahVal {
            v00=0x00000000,     ///<1 cycle (default for all but FB_CS0 )
            v01=0x00000001,     ///<2 cycles
            v10=0x00000002,     ///<3 cycles
            v11=0x00000003,     ///<4 cycles (default for FB_CS0 )
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,WrahVal> wrah{}; 
        namespace WrahValC{
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v00> v00{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v01> v01{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v10> v10{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v11> v11{};
        }
        ///Read Address Hold or Deselect
        enum class RdahVal {
            v00=0x00000000,     ///<When AA is 0b, 1 cycle. When AA is 1b, 0 cycles.
            v01=0x00000001,     ///<When AA is 0b, 2 cycles. When AA is 1b, 1 cycle.
            v10=0x00000002,     ///<When AA is 0b, 3 cycles. When AA is 1b, 2 cycles.
            v11=0x00000003,     ///<When AA is 0b, 4 cycles. When AA is 1b, 3 cycles.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,RdahVal> rdah{}; 
        namespace RdahValC{
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v10> v10{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v11> v11{};
        }
        ///Address Setup
        enum class AsetVal {
            v00=0x00000000,     ///<Assert FB_CSn on the first rising clock edge after the address is asserted (default for all but FB_CS0 ).
            v01=0x00000001,     ///<Assert FB_CSn on the second rising clock edge after the address is asserted.
            v10=0x00000002,     ///<Assert FB_CSn on the third rising clock edge after the address is asserted.
            v11=0x00000003,     ///<Assert FB_CSn on the fourth rising clock edge after the address is asserted (default for FB_CS0 ).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,AsetVal> aset{}; 
        namespace AsetValC{
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v00> v00{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v01> v01{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v10> v10{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v11> v11{};
        }
        ///no description available
        enum class ExtsVal {
            v0=0x00000000,     ///<Disabled. FB_TS /FB_ALE asserts for one bus clock cycle.
            v1=0x00000001,     ///<Enabled. FB_TS /FB_ALE remains asserted until the first positive clock edge after FB_CSn asserts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ExtsVal> exts{}; 
        namespace ExtsValC{
            constexpr Register::FieldValue<decltype(exts)::Type,ExtsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(exts)::Type,ExtsVal::v1> v1{};
        }
        ///Secondary Wait State Enable
        enum class SwsenVal {
            v0=0x00000000,     ///<Disabled. A number of wait states (specified by WS) are inserted before an internal transfer acknowledge is generated for all transfers.
            v1=0x00000001,     ///<Enabled. A number of wait states (specified by SWS) are inserted before an internal transfer acknowledge is generated for burst transfer secondary terminations.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,SwsenVal> swsen{}; 
        namespace SwsenValC{
            constexpr Register::FieldValue<decltype(swsen)::Type,SwsenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swsen)::Type,SwsenVal::v1> v1{};
        }
        ///Secondary Wait States
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> sws{}; 
    }
    namespace FbCscr1{    ///<Chip Select Control Register
        using Addr = Register::Address<0x4000c014,0x03000007,0,unsigned>;
        ///Burst-Write Enable
        enum class BstwVal {
            v0=0x00000000,     ///<Disabled. Data exceeding the specified port size is broken into individual, port-sized, non-burst writes. For example, a 32-bit write to an 8-bit port takes four byte writes.
            v1=0x00000001,     ///<Enabled. Enables burst write of data larger than the specified port size, including 32-bit writes to 8 and 16-bit ports, 16-bit writes to 8-bit ports, and line writes to 8-, 16-, and 32-bit ports.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BstwVal> bstw{}; 
        namespace BstwValC{
            constexpr Register::FieldValue<decltype(bstw)::Type,BstwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bstw)::Type,BstwVal::v1> v1{};
        }
        ///Burst-Read Enable
        enum class BstrVal {
            v0=0x00000000,     ///<Disabled. Data exceeding the specified port size is broken into individual, port-sized, non-burst reads. For example, a 32-bit read from an 8-bit port is broken into four 8-bit reads.
            v1=0x00000001,     ///<Enabled. Enables data burst reads larger than the specified port size, including 32-bit reads from 8- and 16-bit ports, 16-bit reads from 8-bit ports, and line reads from 8, 16-, and 32-bit ports.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BstrVal> bstr{}; 
        namespace BstrValC{
            constexpr Register::FieldValue<decltype(bstr)::Type,BstrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bstr)::Type,BstrVal::v1> v1{};
        }
        ///Byte-Enable Mode
        enum class BemVal {
            v0=0x00000000,     ///<FB_BE is asserted for data write only.
            v1=0x00000001,     ///<FB_BE is asserted for data read and write accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BemVal> bem{}; 
        namespace BemValC{
            constexpr Register::FieldValue<decltype(bem)::Type,BemVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bem)::Type,BemVal::v1> v1{};
        }
        ///Port Size
        enum class PsVal {
            v00=0x00000000,     ///<32-bit port size. Valid data is sampled and driven on FB_D[31:0].
            v01=0x00000001,     ///<8-bit port size. Valid data is sampled and driven on FB_D[31:24] when BLS is 0b, or FB_D[7:0] when BLS is 1b.
            v10=0x00000002,     ///<16-bit port size. Valid data is sampled and driven on FB_D[31:16] when BLS is 0b, or FB_D[15:0] when BLS is 1b.
            v11=0x00000003,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] when BLS is 0b, or FB_D[15:0] when BLS is 1b.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v11> v11{};
        }
        ///Auto-Acknowledge Enable
        enum class AaVal {
            v0=0x00000000,     ///<Disabled. No internal transfer acknowledge is asserted and the cycle is terminated externally.
            v1=0x00000001,     ///<Enabled. Internal transfer acknowledge is asserted as specified by WS.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AaVal> aa{}; 
        namespace AaValC{
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v1> v1{};
        }
        ///Byte-Lane Shift
        enum class BlsVal {
            v0=0x00000000,     ///<Not shifted. Data is left-aligned on FB_AD.
            v1=0x00000001,     ///<Shifted. Data is right-aligned on FB_AD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,BlsVal> bls{}; 
        namespace BlsValC{
            constexpr Register::FieldValue<decltype(bls)::Type,BlsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bls)::Type,BlsVal::v1> v1{};
        }
        ///Wait States
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> ws{}; 
        ///Write Address Hold or Deselect
        enum class WrahVal {
            v00=0x00000000,     ///<1 cycle (default for all but FB_CS0 )
            v01=0x00000001,     ///<2 cycles
            v10=0x00000002,     ///<3 cycles
            v11=0x00000003,     ///<4 cycles (default for FB_CS0 )
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,WrahVal> wrah{}; 
        namespace WrahValC{
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v00> v00{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v01> v01{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v10> v10{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v11> v11{};
        }
        ///Read Address Hold or Deselect
        enum class RdahVal {
            v00=0x00000000,     ///<When AA is 0b, 1 cycle. When AA is 1b, 0 cycles.
            v01=0x00000001,     ///<When AA is 0b, 2 cycles. When AA is 1b, 1 cycle.
            v10=0x00000002,     ///<When AA is 0b, 3 cycles. When AA is 1b, 2 cycles.
            v11=0x00000003,     ///<When AA is 0b, 4 cycles. When AA is 1b, 3 cycles.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,RdahVal> rdah{}; 
        namespace RdahValC{
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v10> v10{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v11> v11{};
        }
        ///Address Setup
        enum class AsetVal {
            v00=0x00000000,     ///<Assert FB_CSn on the first rising clock edge after the address is asserted (default for all but FB_CS0 ).
            v01=0x00000001,     ///<Assert FB_CSn on the second rising clock edge after the address is asserted.
            v10=0x00000002,     ///<Assert FB_CSn on the third rising clock edge after the address is asserted.
            v11=0x00000003,     ///<Assert FB_CSn on the fourth rising clock edge after the address is asserted (default for FB_CS0 ).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,AsetVal> aset{}; 
        namespace AsetValC{
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v00> v00{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v01> v01{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v10> v10{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v11> v11{};
        }
        ///no description available
        enum class ExtsVal {
            v0=0x00000000,     ///<Disabled. FB_TS /FB_ALE asserts for one bus clock cycle.
            v1=0x00000001,     ///<Enabled. FB_TS /FB_ALE remains asserted until the first positive clock edge after FB_CSn asserts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ExtsVal> exts{}; 
        namespace ExtsValC{
            constexpr Register::FieldValue<decltype(exts)::Type,ExtsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(exts)::Type,ExtsVal::v1> v1{};
        }
        ///Secondary Wait State Enable
        enum class SwsenVal {
            v0=0x00000000,     ///<Disabled. A number of wait states (specified by WS) are inserted before an internal transfer acknowledge is generated for all transfers.
            v1=0x00000001,     ///<Enabled. A number of wait states (specified by SWS) are inserted before an internal transfer acknowledge is generated for burst transfer secondary terminations.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,SwsenVal> swsen{}; 
        namespace SwsenValC{
            constexpr Register::FieldValue<decltype(swsen)::Type,SwsenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swsen)::Type,SwsenVal::v1> v1{};
        }
        ///Secondary Wait States
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> sws{}; 
    }
    namespace FbCscr2{    ///<Chip Select Control Register
        using Addr = Register::Address<0x4000c020,0x03000007,0,unsigned>;
        ///Burst-Write Enable
        enum class BstwVal {
            v0=0x00000000,     ///<Disabled. Data exceeding the specified port size is broken into individual, port-sized, non-burst writes. For example, a 32-bit write to an 8-bit port takes four byte writes.
            v1=0x00000001,     ///<Enabled. Enables burst write of data larger than the specified port size, including 32-bit writes to 8 and 16-bit ports, 16-bit writes to 8-bit ports, and line writes to 8-, 16-, and 32-bit ports.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BstwVal> bstw{}; 
        namespace BstwValC{
            constexpr Register::FieldValue<decltype(bstw)::Type,BstwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bstw)::Type,BstwVal::v1> v1{};
        }
        ///Burst-Read Enable
        enum class BstrVal {
            v0=0x00000000,     ///<Disabled. Data exceeding the specified port size is broken into individual, port-sized, non-burst reads. For example, a 32-bit read from an 8-bit port is broken into four 8-bit reads.
            v1=0x00000001,     ///<Enabled. Enables data burst reads larger than the specified port size, including 32-bit reads from 8- and 16-bit ports, 16-bit reads from 8-bit ports, and line reads from 8, 16-, and 32-bit ports.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BstrVal> bstr{}; 
        namespace BstrValC{
            constexpr Register::FieldValue<decltype(bstr)::Type,BstrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bstr)::Type,BstrVal::v1> v1{};
        }
        ///Byte-Enable Mode
        enum class BemVal {
            v0=0x00000000,     ///<FB_BE is asserted for data write only.
            v1=0x00000001,     ///<FB_BE is asserted for data read and write accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BemVal> bem{}; 
        namespace BemValC{
            constexpr Register::FieldValue<decltype(bem)::Type,BemVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bem)::Type,BemVal::v1> v1{};
        }
        ///Port Size
        enum class PsVal {
            v00=0x00000000,     ///<32-bit port size. Valid data is sampled and driven on FB_D[31:0].
            v01=0x00000001,     ///<8-bit port size. Valid data is sampled and driven on FB_D[31:24] when BLS is 0b, or FB_D[7:0] when BLS is 1b.
            v10=0x00000002,     ///<16-bit port size. Valid data is sampled and driven on FB_D[31:16] when BLS is 0b, or FB_D[15:0] when BLS is 1b.
            v11=0x00000003,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] when BLS is 0b, or FB_D[15:0] when BLS is 1b.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v11> v11{};
        }
        ///Auto-Acknowledge Enable
        enum class AaVal {
            v0=0x00000000,     ///<Disabled. No internal transfer acknowledge is asserted and the cycle is terminated externally.
            v1=0x00000001,     ///<Enabled. Internal transfer acknowledge is asserted as specified by WS.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AaVal> aa{}; 
        namespace AaValC{
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v1> v1{};
        }
        ///Byte-Lane Shift
        enum class BlsVal {
            v0=0x00000000,     ///<Not shifted. Data is left-aligned on FB_AD.
            v1=0x00000001,     ///<Shifted. Data is right-aligned on FB_AD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,BlsVal> bls{}; 
        namespace BlsValC{
            constexpr Register::FieldValue<decltype(bls)::Type,BlsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bls)::Type,BlsVal::v1> v1{};
        }
        ///Wait States
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> ws{}; 
        ///Write Address Hold or Deselect
        enum class WrahVal {
            v00=0x00000000,     ///<1 cycle (default for all but FB_CS0 )
            v01=0x00000001,     ///<2 cycles
            v10=0x00000002,     ///<3 cycles
            v11=0x00000003,     ///<4 cycles (default for FB_CS0 )
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,WrahVal> wrah{}; 
        namespace WrahValC{
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v00> v00{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v01> v01{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v10> v10{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v11> v11{};
        }
        ///Read Address Hold or Deselect
        enum class RdahVal {
            v00=0x00000000,     ///<When AA is 0b, 1 cycle. When AA is 1b, 0 cycles.
            v01=0x00000001,     ///<When AA is 0b, 2 cycles. When AA is 1b, 1 cycle.
            v10=0x00000002,     ///<When AA is 0b, 3 cycles. When AA is 1b, 2 cycles.
            v11=0x00000003,     ///<When AA is 0b, 4 cycles. When AA is 1b, 3 cycles.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,RdahVal> rdah{}; 
        namespace RdahValC{
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v10> v10{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v11> v11{};
        }
        ///Address Setup
        enum class AsetVal {
            v00=0x00000000,     ///<Assert FB_CSn on the first rising clock edge after the address is asserted (default for all but FB_CS0 ).
            v01=0x00000001,     ///<Assert FB_CSn on the second rising clock edge after the address is asserted.
            v10=0x00000002,     ///<Assert FB_CSn on the third rising clock edge after the address is asserted.
            v11=0x00000003,     ///<Assert FB_CSn on the fourth rising clock edge after the address is asserted (default for FB_CS0 ).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,AsetVal> aset{}; 
        namespace AsetValC{
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v00> v00{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v01> v01{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v10> v10{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v11> v11{};
        }
        ///no description available
        enum class ExtsVal {
            v0=0x00000000,     ///<Disabled. FB_TS /FB_ALE asserts for one bus clock cycle.
            v1=0x00000001,     ///<Enabled. FB_TS /FB_ALE remains asserted until the first positive clock edge after FB_CSn asserts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ExtsVal> exts{}; 
        namespace ExtsValC{
            constexpr Register::FieldValue<decltype(exts)::Type,ExtsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(exts)::Type,ExtsVal::v1> v1{};
        }
        ///Secondary Wait State Enable
        enum class SwsenVal {
            v0=0x00000000,     ///<Disabled. A number of wait states (specified by WS) are inserted before an internal transfer acknowledge is generated for all transfers.
            v1=0x00000001,     ///<Enabled. A number of wait states (specified by SWS) are inserted before an internal transfer acknowledge is generated for burst transfer secondary terminations.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,SwsenVal> swsen{}; 
        namespace SwsenValC{
            constexpr Register::FieldValue<decltype(swsen)::Type,SwsenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swsen)::Type,SwsenVal::v1> v1{};
        }
        ///Secondary Wait States
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> sws{}; 
    }
    namespace FbCscr3{    ///<Chip Select Control Register
        using Addr = Register::Address<0x4000c02c,0x03000007,0,unsigned>;
        ///Burst-Write Enable
        enum class BstwVal {
            v0=0x00000000,     ///<Disabled. Data exceeding the specified port size is broken into individual, port-sized, non-burst writes. For example, a 32-bit write to an 8-bit port takes four byte writes.
            v1=0x00000001,     ///<Enabled. Enables burst write of data larger than the specified port size, including 32-bit writes to 8 and 16-bit ports, 16-bit writes to 8-bit ports, and line writes to 8-, 16-, and 32-bit ports.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BstwVal> bstw{}; 
        namespace BstwValC{
            constexpr Register::FieldValue<decltype(bstw)::Type,BstwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bstw)::Type,BstwVal::v1> v1{};
        }
        ///Burst-Read Enable
        enum class BstrVal {
            v0=0x00000000,     ///<Disabled. Data exceeding the specified port size is broken into individual, port-sized, non-burst reads. For example, a 32-bit read from an 8-bit port is broken into four 8-bit reads.
            v1=0x00000001,     ///<Enabled. Enables data burst reads larger than the specified port size, including 32-bit reads from 8- and 16-bit ports, 16-bit reads from 8-bit ports, and line reads from 8, 16-, and 32-bit ports.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BstrVal> bstr{}; 
        namespace BstrValC{
            constexpr Register::FieldValue<decltype(bstr)::Type,BstrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bstr)::Type,BstrVal::v1> v1{};
        }
        ///Byte-Enable Mode
        enum class BemVal {
            v0=0x00000000,     ///<FB_BE is asserted for data write only.
            v1=0x00000001,     ///<FB_BE is asserted for data read and write accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BemVal> bem{}; 
        namespace BemValC{
            constexpr Register::FieldValue<decltype(bem)::Type,BemVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bem)::Type,BemVal::v1> v1{};
        }
        ///Port Size
        enum class PsVal {
            v00=0x00000000,     ///<32-bit port size. Valid data is sampled and driven on FB_D[31:0].
            v01=0x00000001,     ///<8-bit port size. Valid data is sampled and driven on FB_D[31:24] when BLS is 0b, or FB_D[7:0] when BLS is 1b.
            v10=0x00000002,     ///<16-bit port size. Valid data is sampled and driven on FB_D[31:16] when BLS is 0b, or FB_D[15:0] when BLS is 1b.
            v11=0x00000003,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] when BLS is 0b, or FB_D[15:0] when BLS is 1b.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v11> v11{};
        }
        ///Auto-Acknowledge Enable
        enum class AaVal {
            v0=0x00000000,     ///<Disabled. No internal transfer acknowledge is asserted and the cycle is terminated externally.
            v1=0x00000001,     ///<Enabled. Internal transfer acknowledge is asserted as specified by WS.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AaVal> aa{}; 
        namespace AaValC{
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v1> v1{};
        }
        ///Byte-Lane Shift
        enum class BlsVal {
            v0=0x00000000,     ///<Not shifted. Data is left-aligned on FB_AD.
            v1=0x00000001,     ///<Shifted. Data is right-aligned on FB_AD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,BlsVal> bls{}; 
        namespace BlsValC{
            constexpr Register::FieldValue<decltype(bls)::Type,BlsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bls)::Type,BlsVal::v1> v1{};
        }
        ///Wait States
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> ws{}; 
        ///Write Address Hold or Deselect
        enum class WrahVal {
            v00=0x00000000,     ///<1 cycle (default for all but FB_CS0 )
            v01=0x00000001,     ///<2 cycles
            v10=0x00000002,     ///<3 cycles
            v11=0x00000003,     ///<4 cycles (default for FB_CS0 )
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,WrahVal> wrah{}; 
        namespace WrahValC{
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v00> v00{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v01> v01{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v10> v10{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v11> v11{};
        }
        ///Read Address Hold or Deselect
        enum class RdahVal {
            v00=0x00000000,     ///<When AA is 0b, 1 cycle. When AA is 1b, 0 cycles.
            v01=0x00000001,     ///<When AA is 0b, 2 cycles. When AA is 1b, 1 cycle.
            v10=0x00000002,     ///<When AA is 0b, 3 cycles. When AA is 1b, 2 cycles.
            v11=0x00000003,     ///<When AA is 0b, 4 cycles. When AA is 1b, 3 cycles.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,RdahVal> rdah{}; 
        namespace RdahValC{
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v10> v10{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v11> v11{};
        }
        ///Address Setup
        enum class AsetVal {
            v00=0x00000000,     ///<Assert FB_CSn on the first rising clock edge after the address is asserted (default for all but FB_CS0 ).
            v01=0x00000001,     ///<Assert FB_CSn on the second rising clock edge after the address is asserted.
            v10=0x00000002,     ///<Assert FB_CSn on the third rising clock edge after the address is asserted.
            v11=0x00000003,     ///<Assert FB_CSn on the fourth rising clock edge after the address is asserted (default for FB_CS0 ).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,AsetVal> aset{}; 
        namespace AsetValC{
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v00> v00{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v01> v01{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v10> v10{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v11> v11{};
        }
        ///no description available
        enum class ExtsVal {
            v0=0x00000000,     ///<Disabled. FB_TS /FB_ALE asserts for one bus clock cycle.
            v1=0x00000001,     ///<Enabled. FB_TS /FB_ALE remains asserted until the first positive clock edge after FB_CSn asserts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ExtsVal> exts{}; 
        namespace ExtsValC{
            constexpr Register::FieldValue<decltype(exts)::Type,ExtsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(exts)::Type,ExtsVal::v1> v1{};
        }
        ///Secondary Wait State Enable
        enum class SwsenVal {
            v0=0x00000000,     ///<Disabled. A number of wait states (specified by WS) are inserted before an internal transfer acknowledge is generated for all transfers.
            v1=0x00000001,     ///<Enabled. A number of wait states (specified by SWS) are inserted before an internal transfer acknowledge is generated for burst transfer secondary terminations.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,SwsenVal> swsen{}; 
        namespace SwsenValC{
            constexpr Register::FieldValue<decltype(swsen)::Type,SwsenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swsen)::Type,SwsenVal::v1> v1{};
        }
        ///Secondary Wait States
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> sws{}; 
    }
    namespace FbCscr4{    ///<Chip Select Control Register
        using Addr = Register::Address<0x4000c038,0x03000007,0,unsigned>;
        ///Burst-Write Enable
        enum class BstwVal {
            v0=0x00000000,     ///<Disabled. Data exceeding the specified port size is broken into individual, port-sized, non-burst writes. For example, a 32-bit write to an 8-bit port takes four byte writes.
            v1=0x00000001,     ///<Enabled. Enables burst write of data larger than the specified port size, including 32-bit writes to 8 and 16-bit ports, 16-bit writes to 8-bit ports, and line writes to 8-, 16-, and 32-bit ports.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BstwVal> bstw{}; 
        namespace BstwValC{
            constexpr Register::FieldValue<decltype(bstw)::Type,BstwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bstw)::Type,BstwVal::v1> v1{};
        }
        ///Burst-Read Enable
        enum class BstrVal {
            v0=0x00000000,     ///<Disabled. Data exceeding the specified port size is broken into individual, port-sized, non-burst reads. For example, a 32-bit read from an 8-bit port is broken into four 8-bit reads.
            v1=0x00000001,     ///<Enabled. Enables data burst reads larger than the specified port size, including 32-bit reads from 8- and 16-bit ports, 16-bit reads from 8-bit ports, and line reads from 8, 16-, and 32-bit ports.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BstrVal> bstr{}; 
        namespace BstrValC{
            constexpr Register::FieldValue<decltype(bstr)::Type,BstrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bstr)::Type,BstrVal::v1> v1{};
        }
        ///Byte-Enable Mode
        enum class BemVal {
            v0=0x00000000,     ///<FB_BE is asserted for data write only.
            v1=0x00000001,     ///<FB_BE is asserted for data read and write accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BemVal> bem{}; 
        namespace BemValC{
            constexpr Register::FieldValue<decltype(bem)::Type,BemVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bem)::Type,BemVal::v1> v1{};
        }
        ///Port Size
        enum class PsVal {
            v00=0x00000000,     ///<32-bit port size. Valid data is sampled and driven on FB_D[31:0].
            v01=0x00000001,     ///<8-bit port size. Valid data is sampled and driven on FB_D[31:24] when BLS is 0b, or FB_D[7:0] when BLS is 1b.
            v10=0x00000002,     ///<16-bit port size. Valid data is sampled and driven on FB_D[31:16] when BLS is 0b, or FB_D[15:0] when BLS is 1b.
            v11=0x00000003,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] when BLS is 0b, or FB_D[15:0] when BLS is 1b.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v11> v11{};
        }
        ///Auto-Acknowledge Enable
        enum class AaVal {
            v0=0x00000000,     ///<Disabled. No internal transfer acknowledge is asserted and the cycle is terminated externally.
            v1=0x00000001,     ///<Enabled. Internal transfer acknowledge is asserted as specified by WS.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AaVal> aa{}; 
        namespace AaValC{
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v1> v1{};
        }
        ///Byte-Lane Shift
        enum class BlsVal {
            v0=0x00000000,     ///<Not shifted. Data is left-aligned on FB_AD.
            v1=0x00000001,     ///<Shifted. Data is right-aligned on FB_AD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,BlsVal> bls{}; 
        namespace BlsValC{
            constexpr Register::FieldValue<decltype(bls)::Type,BlsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bls)::Type,BlsVal::v1> v1{};
        }
        ///Wait States
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> ws{}; 
        ///Write Address Hold or Deselect
        enum class WrahVal {
            v00=0x00000000,     ///<1 cycle (default for all but FB_CS0 )
            v01=0x00000001,     ///<2 cycles
            v10=0x00000002,     ///<3 cycles
            v11=0x00000003,     ///<4 cycles (default for FB_CS0 )
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,WrahVal> wrah{}; 
        namespace WrahValC{
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v00> v00{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v01> v01{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v10> v10{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v11> v11{};
        }
        ///Read Address Hold or Deselect
        enum class RdahVal {
            v00=0x00000000,     ///<When AA is 0b, 1 cycle. When AA is 1b, 0 cycles.
            v01=0x00000001,     ///<When AA is 0b, 2 cycles. When AA is 1b, 1 cycle.
            v10=0x00000002,     ///<When AA is 0b, 3 cycles. When AA is 1b, 2 cycles.
            v11=0x00000003,     ///<When AA is 0b, 4 cycles. When AA is 1b, 3 cycles.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,RdahVal> rdah{}; 
        namespace RdahValC{
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v10> v10{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v11> v11{};
        }
        ///Address Setup
        enum class AsetVal {
            v00=0x00000000,     ///<Assert FB_CSn on the first rising clock edge after the address is asserted (default for all but FB_CS0 ).
            v01=0x00000001,     ///<Assert FB_CSn on the second rising clock edge after the address is asserted.
            v10=0x00000002,     ///<Assert FB_CSn on the third rising clock edge after the address is asserted.
            v11=0x00000003,     ///<Assert FB_CSn on the fourth rising clock edge after the address is asserted (default for FB_CS0 ).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,AsetVal> aset{}; 
        namespace AsetValC{
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v00> v00{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v01> v01{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v10> v10{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v11> v11{};
        }
        ///no description available
        enum class ExtsVal {
            v0=0x00000000,     ///<Disabled. FB_TS /FB_ALE asserts for one bus clock cycle.
            v1=0x00000001,     ///<Enabled. FB_TS /FB_ALE remains asserted until the first positive clock edge after FB_CSn asserts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ExtsVal> exts{}; 
        namespace ExtsValC{
            constexpr Register::FieldValue<decltype(exts)::Type,ExtsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(exts)::Type,ExtsVal::v1> v1{};
        }
        ///Secondary Wait State Enable
        enum class SwsenVal {
            v0=0x00000000,     ///<Disabled. A number of wait states (specified by WS) are inserted before an internal transfer acknowledge is generated for all transfers.
            v1=0x00000001,     ///<Enabled. A number of wait states (specified by SWS) are inserted before an internal transfer acknowledge is generated for burst transfer secondary terminations.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,SwsenVal> swsen{}; 
        namespace SwsenValC{
            constexpr Register::FieldValue<decltype(swsen)::Type,SwsenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swsen)::Type,SwsenVal::v1> v1{};
        }
        ///Secondary Wait States
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> sws{}; 
    }
    namespace FbCscr5{    ///<Chip Select Control Register
        using Addr = Register::Address<0x4000c044,0x03000007,0,unsigned>;
        ///Burst-Write Enable
        enum class BstwVal {
            v0=0x00000000,     ///<Disabled. Data exceeding the specified port size is broken into individual, port-sized, non-burst writes. For example, a 32-bit write to an 8-bit port takes four byte writes.
            v1=0x00000001,     ///<Enabled. Enables burst write of data larger than the specified port size, including 32-bit writes to 8 and 16-bit ports, 16-bit writes to 8-bit ports, and line writes to 8-, 16-, and 32-bit ports.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BstwVal> bstw{}; 
        namespace BstwValC{
            constexpr Register::FieldValue<decltype(bstw)::Type,BstwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bstw)::Type,BstwVal::v1> v1{};
        }
        ///Burst-Read Enable
        enum class BstrVal {
            v0=0x00000000,     ///<Disabled. Data exceeding the specified port size is broken into individual, port-sized, non-burst reads. For example, a 32-bit read from an 8-bit port is broken into four 8-bit reads.
            v1=0x00000001,     ///<Enabled. Enables data burst reads larger than the specified port size, including 32-bit reads from 8- and 16-bit ports, 16-bit reads from 8-bit ports, and line reads from 8, 16-, and 32-bit ports.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BstrVal> bstr{}; 
        namespace BstrValC{
            constexpr Register::FieldValue<decltype(bstr)::Type,BstrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bstr)::Type,BstrVal::v1> v1{};
        }
        ///Byte-Enable Mode
        enum class BemVal {
            v0=0x00000000,     ///<FB_BE is asserted for data write only.
            v1=0x00000001,     ///<FB_BE is asserted for data read and write accesses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BemVal> bem{}; 
        namespace BemValC{
            constexpr Register::FieldValue<decltype(bem)::Type,BemVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bem)::Type,BemVal::v1> v1{};
        }
        ///Port Size
        enum class PsVal {
            v00=0x00000000,     ///<32-bit port size. Valid data is sampled and driven on FB_D[31:0].
            v01=0x00000001,     ///<8-bit port size. Valid data is sampled and driven on FB_D[31:24] when BLS is 0b, or FB_D[7:0] when BLS is 1b.
            v10=0x00000002,     ///<16-bit port size. Valid data is sampled and driven on FB_D[31:16] when BLS is 0b, or FB_D[15:0] when BLS is 1b.
            v11=0x00000003,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] when BLS is 0b, or FB_D[15:0] when BLS is 1b.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v11> v11{};
        }
        ///Auto-Acknowledge Enable
        enum class AaVal {
            v0=0x00000000,     ///<Disabled. No internal transfer acknowledge is asserted and the cycle is terminated externally.
            v1=0x00000001,     ///<Enabled. Internal transfer acknowledge is asserted as specified by WS.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AaVal> aa{}; 
        namespace AaValC{
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v1> v1{};
        }
        ///Byte-Lane Shift
        enum class BlsVal {
            v0=0x00000000,     ///<Not shifted. Data is left-aligned on FB_AD.
            v1=0x00000001,     ///<Shifted. Data is right-aligned on FB_AD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,BlsVal> bls{}; 
        namespace BlsValC{
            constexpr Register::FieldValue<decltype(bls)::Type,BlsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bls)::Type,BlsVal::v1> v1{};
        }
        ///Wait States
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> ws{}; 
        ///Write Address Hold or Deselect
        enum class WrahVal {
            v00=0x00000000,     ///<1 cycle (default for all but FB_CS0 )
            v01=0x00000001,     ///<2 cycles
            v10=0x00000002,     ///<3 cycles
            v11=0x00000003,     ///<4 cycles (default for FB_CS0 )
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,WrahVal> wrah{}; 
        namespace WrahValC{
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v00> v00{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v01> v01{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v10> v10{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v11> v11{};
        }
        ///Read Address Hold or Deselect
        enum class RdahVal {
            v00=0x00000000,     ///<When AA is 0b, 1 cycle. When AA is 1b, 0 cycles.
            v01=0x00000001,     ///<When AA is 0b, 2 cycles. When AA is 1b, 1 cycle.
            v10=0x00000002,     ///<When AA is 0b, 3 cycles. When AA is 1b, 2 cycles.
            v11=0x00000003,     ///<When AA is 0b, 4 cycles. When AA is 1b, 3 cycles.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,RdahVal> rdah{}; 
        namespace RdahValC{
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v10> v10{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v11> v11{};
        }
        ///Address Setup
        enum class AsetVal {
            v00=0x00000000,     ///<Assert FB_CSn on the first rising clock edge after the address is asserted (default for all but FB_CS0 ).
            v01=0x00000001,     ///<Assert FB_CSn on the second rising clock edge after the address is asserted.
            v10=0x00000002,     ///<Assert FB_CSn on the third rising clock edge after the address is asserted.
            v11=0x00000003,     ///<Assert FB_CSn on the fourth rising clock edge after the address is asserted (default for FB_CS0 ).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,AsetVal> aset{}; 
        namespace AsetValC{
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v00> v00{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v01> v01{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v10> v10{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v11> v11{};
        }
        ///no description available
        enum class ExtsVal {
            v0=0x00000000,     ///<Disabled. FB_TS /FB_ALE asserts for one bus clock cycle.
            v1=0x00000001,     ///<Enabled. FB_TS /FB_ALE remains asserted until the first positive clock edge after FB_CSn asserts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ExtsVal> exts{}; 
        namespace ExtsValC{
            constexpr Register::FieldValue<decltype(exts)::Type,ExtsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(exts)::Type,ExtsVal::v1> v1{};
        }
        ///Secondary Wait State Enable
        enum class SwsenVal {
            v0=0x00000000,     ///<Disabled. A number of wait states (specified by WS) are inserted before an internal transfer acknowledge is generated for all transfers.
            v1=0x00000001,     ///<Enabled. A number of wait states (specified by SWS) are inserted before an internal transfer acknowledge is generated for burst transfer secondary terminations.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,SwsenVal> swsen{}; 
        namespace SwsenValC{
            constexpr Register::FieldValue<decltype(swsen)::Type,SwsenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swsen)::Type,SwsenVal::v1> v1{};
        }
        ///Secondary Wait States
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> sws{}; 
    }
    namespace FbCspmcr{    ///<Chip Select port Multiplexing Control Register
        using Addr = Register::Address<0x4000c060,0x00000fff,0,unsigned>;
        ///FlexBus Signal Group 5 Multiplex control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> group5{}; 
        ///FlexBus Signal Group 4 Multiplex control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> group4{}; 
        ///FlexBus Signal Group 3 Multiplex control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> group3{}; 
        ///FlexBus Signal Group 2 Multiplex control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> group2{}; 
        ///FlexBus Signal Group 1 Multiplex control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> group1{}; 
    }
}
