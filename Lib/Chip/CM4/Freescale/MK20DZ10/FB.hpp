#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//FlexBus external bus interface
    namespace FbCsar0{    ///<Chip select address register
        using Addr = Register::Address<0x4000c000,0x0000ffff,0,unsigned>;
        ///Base address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace FbCsar1{    ///<Chip select address register
        using Addr = Register::Address<0x4000c00c,0x0000ffff,0,unsigned>;
        ///Base address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace FbCsar2{    ///<Chip select address register
        using Addr = Register::Address<0x4000c018,0x0000ffff,0,unsigned>;
        ///Base address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace FbCsar3{    ///<Chip select address register
        using Addr = Register::Address<0x4000c024,0x0000ffff,0,unsigned>;
        ///Base address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace FbCsar4{    ///<Chip select address register
        using Addr = Register::Address<0x4000c030,0x0000ffff,0,unsigned>;
        ///Base address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace FbCsar5{    ///<Chip select address register
        using Addr = Register::Address<0x4000c03c,0x0000ffff,0,unsigned>;
        ///Base address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ba{}; 
    }
    namespace FbCsmr0{    ///<Chip select mask register
        using Addr = Register::Address<0x4000c004,0x0000fefe,0,unsigned>;
        ///Valid
        enum class VVal {
            v0=0x00000000,     ///<Chip select invalid
            v1=0x00000001,     ///<Chip select valid
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,VVal> v{}; 
        namespace VValC{
            constexpr Register::FieldValue<decltype(v)::Type,VVal::v0> v0{};
            constexpr Register::FieldValue<decltype(v)::Type,VVal::v1> v1{};
        }
        }
        ///Write protect
        enum class WpVal {
            v0=0x00000000,     ///<Read and write accesses are allowed
            v1=0x00000001,     ///<Only read accesses are allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,WpVal> wp{}; 
        namespace WpValC{
            constexpr Register::FieldValue<decltype(wp)::Type,WpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wp)::Type,WpVal::v1> v1{};
        }
        }
        ///Base address mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bam{}; 
    }
    namespace FbCsmr1{    ///<Chip select mask register
        using Addr = Register::Address<0x4000c010,0x0000fefe,0,unsigned>;
        ///Valid
        enum class VVal {
            v0=0x00000000,     ///<Chip select invalid
            v1=0x00000001,     ///<Chip select valid
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,VVal> v{}; 
        namespace VValC{
            constexpr Register::FieldValue<decltype(v)::Type,VVal::v0> v0{};
            constexpr Register::FieldValue<decltype(v)::Type,VVal::v1> v1{};
        }
        }
        ///Write protect
        enum class WpVal {
            v0=0x00000000,     ///<Read and write accesses are allowed
            v1=0x00000001,     ///<Only read accesses are allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,WpVal> wp{}; 
        namespace WpValC{
            constexpr Register::FieldValue<decltype(wp)::Type,WpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wp)::Type,WpVal::v1> v1{};
        }
        }
        ///Base address mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bam{}; 
    }
    namespace FbCsmr2{    ///<Chip select mask register
        using Addr = Register::Address<0x4000c01c,0x0000fefe,0,unsigned>;
        ///Valid
        enum class VVal {
            v0=0x00000000,     ///<Chip select invalid
            v1=0x00000001,     ///<Chip select valid
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,VVal> v{}; 
        namespace VValC{
            constexpr Register::FieldValue<decltype(v)::Type,VVal::v0> v0{};
            constexpr Register::FieldValue<decltype(v)::Type,VVal::v1> v1{};
        }
        }
        ///Write protect
        enum class WpVal {
            v0=0x00000000,     ///<Read and write accesses are allowed
            v1=0x00000001,     ///<Only read accesses are allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,WpVal> wp{}; 
        namespace WpValC{
            constexpr Register::FieldValue<decltype(wp)::Type,WpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wp)::Type,WpVal::v1> v1{};
        }
        }
        ///Base address mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bam{}; 
    }
    namespace FbCsmr3{    ///<Chip select mask register
        using Addr = Register::Address<0x4000c028,0x0000fefe,0,unsigned>;
        ///Valid
        enum class VVal {
            v0=0x00000000,     ///<Chip select invalid
            v1=0x00000001,     ///<Chip select valid
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,VVal> v{}; 
        namespace VValC{
            constexpr Register::FieldValue<decltype(v)::Type,VVal::v0> v0{};
            constexpr Register::FieldValue<decltype(v)::Type,VVal::v1> v1{};
        }
        }
        ///Write protect
        enum class WpVal {
            v0=0x00000000,     ///<Read and write accesses are allowed
            v1=0x00000001,     ///<Only read accesses are allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,WpVal> wp{}; 
        namespace WpValC{
            constexpr Register::FieldValue<decltype(wp)::Type,WpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wp)::Type,WpVal::v1> v1{};
        }
        }
        ///Base address mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bam{}; 
    }
    namespace FbCsmr4{    ///<Chip select mask register
        using Addr = Register::Address<0x4000c034,0x0000fefe,0,unsigned>;
        ///Valid
        enum class VVal {
            v0=0x00000000,     ///<Chip select invalid
            v1=0x00000001,     ///<Chip select valid
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,VVal> v{}; 
        namespace VValC{
            constexpr Register::FieldValue<decltype(v)::Type,VVal::v0> v0{};
            constexpr Register::FieldValue<decltype(v)::Type,VVal::v1> v1{};
        }
        }
        ///Write protect
        enum class WpVal {
            v0=0x00000000,     ///<Read and write accesses are allowed
            v1=0x00000001,     ///<Only read accesses are allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,WpVal> wp{}; 
        namespace WpValC{
            constexpr Register::FieldValue<decltype(wp)::Type,WpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wp)::Type,WpVal::v1> v1{};
        }
        }
        ///Base address mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bam{}; 
    }
    namespace FbCsmr5{    ///<Chip select mask register
        using Addr = Register::Address<0x4000c040,0x0000fefe,0,unsigned>;
        ///Valid
        enum class VVal {
            v0=0x00000000,     ///<Chip select invalid
            v1=0x00000001,     ///<Chip select valid
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,VVal> v{}; 
        namespace VValC{
            constexpr Register::FieldValue<decltype(v)::Type,VVal::v0> v0{};
            constexpr Register::FieldValue<decltype(v)::Type,VVal::v1> v1{};
        }
        }
        ///Write protect
        enum class WpVal {
            v0=0x00000000,     ///<Read and write accesses are allowed
            v1=0x00000001,     ///<Only read accesses are allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,WpVal> wp{}; 
        namespace WpValC{
            constexpr Register::FieldValue<decltype(wp)::Type,WpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wp)::Type,WpVal::v1> v1{};
        }
        }
        ///Base address mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bam{}; 
    }
    namespace FbCscr0{    ///<Chip select control register
        using Addr = Register::Address<0x4000c008,0x03000007,0,unsigned>;
        ///Burst-write enable
        enum class BstwVal {
            v0=0x00000000,     ///<Break data larger than the specified port size into individual, port-sized, non-burst writes. For example, a longword write to an 8-bit port takes four byte writes.
            v1=0x00000001,     ///<Enables burst write of data larger than the specified port size, including longword writes to 8 and 16-bit ports, word writes to 8-bit ports, and line writes to 8-, 16-, and 32-bit ports.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BstwVal> bstw{}; 
        namespace BstwValC{
            constexpr Register::FieldValue<decltype(bstw)::Type,BstwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bstw)::Type,BstwVal::v1> v1{};
        }
        }
        ///Burst-read enable
        enum class BstrVal {
            v0=0x00000000,     ///<Data exceeding the specified port size is broken into individual, port-sized, non-burst reads. For example, a longword read from an 8-bit port is broken into four 8-bit reads.
            v1=0x00000001,     ///<Enables data burst reads larger than the specified port size, including longword reads from 8- and 16-bit ports, word reads from 8-bit ports, and line reads from 8, 16-, and 32-bit ports.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BstrVal> bstr{}; 
        namespace BstrValC{
            constexpr Register::FieldValue<decltype(bstr)::Type,BstrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bstr)::Type,BstrVal::v1> v1{};
        }
        }
        ///Byte-enable mode
        enum class BemVal {
            v0=0x00000000,     ///<The FB_BE n signals are not asserted for reads. The FB_BE n signals are asserted for data write only.
            v1=0x00000001,     ///<The FB_BE n signals are asserted for read and write accesses
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BemVal> bem{}; 
        namespace BemValC{
            constexpr Register::FieldValue<decltype(bem)::Type,BemVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bem)::Type,BemVal::v1> v1{};
        }
        }
        ///Port size
        enum class PsVal {
            v00=0x00000000,     ///<32-bit port size. Valid data sampled and driven on FB_D[31:0]
            v01=0x00000001,     ///<8-bit port size. Valid data sampled and driven on FB_D[31:24] if BLS = 0 or FB_D[7:0] if BLS = 1
            v10=0x00000002,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] if BLS = 0 or FB_D[15:0] if BLS = 1
            v11=0x00000003,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] if BLS = 0 or FB_D[15:0] if BLS = 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v11> v11{};
        }
        }
        ///Auto-acknowledge enable
        enum class AaVal {
            v0=0x00000000,     ///<No internal FB_TA is asserted. Cycle is terminated externally
            v1=0x00000001,     ///<Internal transfer acknowledge is asserted as specified by WS
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AaVal> aa{}; 
        namespace AaValC{
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v1> v1{};
        }
        }
        ///Byte-lane shift
        enum class BlsVal {
            v0=0x00000000,     ///<Not shifted. Data is left-justfied on FB_AD.
            v1=0x00000001,     ///<Shifted. Data is right justified on FB_AD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,BlsVal> bls{}; 
        namespace BlsValC{
            constexpr Register::FieldValue<decltype(bls)::Type,BlsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bls)::Type,BlsVal::v1> v1{};
        }
        }
        ///Wait states
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> ws{}; 
        ///Write address hold or deselect
        enum class WrahVal {
            v00=0x00000000,     ///<Hold address and attributes one cycle after FB_CSn negates on writes. (Default FB_CSn)
            v01=0x00000001,     ///<Hold address and attributes two cycles after FB_CSn negates on writes.
            v10=0x00000002,     ///<Hold address and attributes three cycles after FB_CSn negates on writes.
            v11=0x00000003,     ///<Hold address and attributes four cycles after FB_CSn negates on writes. (Default FB_CS0)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,WrahVal> wrah{}; 
        namespace WrahValC{
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v00> v00{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v01> v01{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v10> v10{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v11> v11{};
        }
        }
        ///Read address hold or deselect
        enum class RdahVal {
            v00=0x00000000,     ///<If AA is cleared, 1 cycle. If AA is set, 0 cycles.
            v01=0x00000001,     ///<If AA is cleared, 2 cycles. If AA is set, 1 cycle.
            v10=0x00000002,     ///<If AA is cleared, 3 cycles. If AA is set, 2 cycles.
            v11=0x00000003,     ///<If AA is cleared, 4 cycles. If AA is set, 3 cycles.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,RdahVal> rdah{}; 
        namespace RdahValC{
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v10> v10{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v11> v11{};
        }
        }
        ///Address setup
        enum class AsetVal {
            v00=0x00000000,     ///<Assert FB_CSn on first rising clock edge after address is asserted. (Default FB_CSn)
            v01=0x00000001,     ///<Assert FB_CSn on second rising clock edge after address is asserted.
            v10=0x00000002,     ///<Assert FB_CSn on third rising clock edge after address is asserted.
            v11=0x00000003,     ///<Assert FB_CSn on fourth rising clock edge after address is asserted. (Default FB_CS0)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,AsetVal> aset{}; 
        namespace AsetValC{
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v00> v00{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v01> v01{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v10> v10{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v11> v11{};
        }
        }
        ///no description available
        enum class ExtsVal {
            v0=0x00000000,     ///<FB_TS /FB_ALE asserts for one bus clock cycle
            v1=0x00000001,     ///<FB_TS /FB_ALE remains asserted until the first positive clock edge after FB_CSn asserts
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ExtsVal> exts{}; 
        namespace ExtsValC{
            constexpr Register::FieldValue<decltype(exts)::Type,ExtsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(exts)::Type,ExtsVal::v1> v1{};
        }
        }
        ///Secondary wait state enable
        enum class SwsenVal {
            v0=0x00000000,     ///<The WS value inserts wait states before an internal transfer acknowledge is generated for all transfers
            v1=0x00000001,     ///<The SWS value inserts wait states before an internal transfer acknowledge is generated for burst transfer secondary terminations
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,SwsenVal> swsen{}; 
        namespace SwsenValC{
            constexpr Register::FieldValue<decltype(swsen)::Type,SwsenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swsen)::Type,SwsenVal::v1> v1{};
        }
        }
        ///Secondary wait states
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> sws{}; 
    }
    namespace FbCscr1{    ///<Chip select control register
        using Addr = Register::Address<0x4000c014,0x03000007,0,unsigned>;
        ///Burst-write enable
        enum class BstwVal {
            v0=0x00000000,     ///<Break data larger than the specified port size into individual, port-sized, non-burst writes. For example, a longword write to an 8-bit port takes four byte writes.
            v1=0x00000001,     ///<Enables burst write of data larger than the specified port size, including longword writes to 8 and 16-bit ports, word writes to 8-bit ports, and line writes to 8-, 16-, and 32-bit ports.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BstwVal> bstw{}; 
        namespace BstwValC{
            constexpr Register::FieldValue<decltype(bstw)::Type,BstwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bstw)::Type,BstwVal::v1> v1{};
        }
        }
        ///Burst-read enable
        enum class BstrVal {
            v0=0x00000000,     ///<Data exceeding the specified port size is broken into individual, port-sized, non-burst reads. For example, a longword read from an 8-bit port is broken into four 8-bit reads.
            v1=0x00000001,     ///<Enables data burst reads larger than the specified port size, including longword reads from 8- and 16-bit ports, word reads from 8-bit ports, and line reads from 8, 16-, and 32-bit ports.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BstrVal> bstr{}; 
        namespace BstrValC{
            constexpr Register::FieldValue<decltype(bstr)::Type,BstrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bstr)::Type,BstrVal::v1> v1{};
        }
        }
        ///Byte-enable mode
        enum class BemVal {
            v0=0x00000000,     ///<The FB_BE n signals are not asserted for reads. The FB_BE n signals are asserted for data write only.
            v1=0x00000001,     ///<The FB_BE n signals are asserted for read and write accesses
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BemVal> bem{}; 
        namespace BemValC{
            constexpr Register::FieldValue<decltype(bem)::Type,BemVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bem)::Type,BemVal::v1> v1{};
        }
        }
        ///Port size
        enum class PsVal {
            v00=0x00000000,     ///<32-bit port size. Valid data sampled and driven on FB_D[31:0]
            v01=0x00000001,     ///<8-bit port size. Valid data sampled and driven on FB_D[31:24] if BLS = 0 or FB_D[7:0] if BLS = 1
            v10=0x00000002,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] if BLS = 0 or FB_D[15:0] if BLS = 1
            v11=0x00000003,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] if BLS = 0 or FB_D[15:0] if BLS = 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v11> v11{};
        }
        }
        ///Auto-acknowledge enable
        enum class AaVal {
            v0=0x00000000,     ///<No internal FB_TA is asserted. Cycle is terminated externally
            v1=0x00000001,     ///<Internal transfer acknowledge is asserted as specified by WS
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AaVal> aa{}; 
        namespace AaValC{
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v1> v1{};
        }
        }
        ///Byte-lane shift
        enum class BlsVal {
            v0=0x00000000,     ///<Not shifted. Data is left-justfied on FB_AD.
            v1=0x00000001,     ///<Shifted. Data is right justified on FB_AD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,BlsVal> bls{}; 
        namespace BlsValC{
            constexpr Register::FieldValue<decltype(bls)::Type,BlsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bls)::Type,BlsVal::v1> v1{};
        }
        }
        ///Wait states
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> ws{}; 
        ///Write address hold or deselect
        enum class WrahVal {
            v00=0x00000000,     ///<Hold address and attributes one cycle after FB_CSn negates on writes. (Default FB_CSn)
            v01=0x00000001,     ///<Hold address and attributes two cycles after FB_CSn negates on writes.
            v10=0x00000002,     ///<Hold address and attributes three cycles after FB_CSn negates on writes.
            v11=0x00000003,     ///<Hold address and attributes four cycles after FB_CSn negates on writes. (Default FB_CS0)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,WrahVal> wrah{}; 
        namespace WrahValC{
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v00> v00{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v01> v01{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v10> v10{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v11> v11{};
        }
        }
        ///Read address hold or deselect
        enum class RdahVal {
            v00=0x00000000,     ///<If AA is cleared, 1 cycle. If AA is set, 0 cycles.
            v01=0x00000001,     ///<If AA is cleared, 2 cycles. If AA is set, 1 cycle.
            v10=0x00000002,     ///<If AA is cleared, 3 cycles. If AA is set, 2 cycles.
            v11=0x00000003,     ///<If AA is cleared, 4 cycles. If AA is set, 3 cycles.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,RdahVal> rdah{}; 
        namespace RdahValC{
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v10> v10{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v11> v11{};
        }
        }
        ///Address setup
        enum class AsetVal {
            v00=0x00000000,     ///<Assert FB_CSn on first rising clock edge after address is asserted. (Default FB_CSn)
            v01=0x00000001,     ///<Assert FB_CSn on second rising clock edge after address is asserted.
            v10=0x00000002,     ///<Assert FB_CSn on third rising clock edge after address is asserted.
            v11=0x00000003,     ///<Assert FB_CSn on fourth rising clock edge after address is asserted. (Default FB_CS0)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,AsetVal> aset{}; 
        namespace AsetValC{
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v00> v00{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v01> v01{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v10> v10{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v11> v11{};
        }
        }
        ///no description available
        enum class ExtsVal {
            v0=0x00000000,     ///<FB_TS /FB_ALE asserts for one bus clock cycle
            v1=0x00000001,     ///<FB_TS /FB_ALE remains asserted until the first positive clock edge after FB_CSn asserts
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ExtsVal> exts{}; 
        namespace ExtsValC{
            constexpr Register::FieldValue<decltype(exts)::Type,ExtsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(exts)::Type,ExtsVal::v1> v1{};
        }
        }
        ///Secondary wait state enable
        enum class SwsenVal {
            v0=0x00000000,     ///<The WS value inserts wait states before an internal transfer acknowledge is generated for all transfers
            v1=0x00000001,     ///<The SWS value inserts wait states before an internal transfer acknowledge is generated for burst transfer secondary terminations
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,SwsenVal> swsen{}; 
        namespace SwsenValC{
            constexpr Register::FieldValue<decltype(swsen)::Type,SwsenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swsen)::Type,SwsenVal::v1> v1{};
        }
        }
        ///Secondary wait states
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> sws{}; 
    }
    namespace FbCscr2{    ///<Chip select control register
        using Addr = Register::Address<0x4000c020,0x03000007,0,unsigned>;
        ///Burst-write enable
        enum class BstwVal {
            v0=0x00000000,     ///<Break data larger than the specified port size into individual, port-sized, non-burst writes. For example, a longword write to an 8-bit port takes four byte writes.
            v1=0x00000001,     ///<Enables burst write of data larger than the specified port size, including longword writes to 8 and 16-bit ports, word writes to 8-bit ports, and line writes to 8-, 16-, and 32-bit ports.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BstwVal> bstw{}; 
        namespace BstwValC{
            constexpr Register::FieldValue<decltype(bstw)::Type,BstwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bstw)::Type,BstwVal::v1> v1{};
        }
        }
        ///Burst-read enable
        enum class BstrVal {
            v0=0x00000000,     ///<Data exceeding the specified port size is broken into individual, port-sized, non-burst reads. For example, a longword read from an 8-bit port is broken into four 8-bit reads.
            v1=0x00000001,     ///<Enables data burst reads larger than the specified port size, including longword reads from 8- and 16-bit ports, word reads from 8-bit ports, and line reads from 8, 16-, and 32-bit ports.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BstrVal> bstr{}; 
        namespace BstrValC{
            constexpr Register::FieldValue<decltype(bstr)::Type,BstrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bstr)::Type,BstrVal::v1> v1{};
        }
        }
        ///Byte-enable mode
        enum class BemVal {
            v0=0x00000000,     ///<The FB_BE n signals are not asserted for reads. The FB_BE n signals are asserted for data write only.
            v1=0x00000001,     ///<The FB_BE n signals are asserted for read and write accesses
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BemVal> bem{}; 
        namespace BemValC{
            constexpr Register::FieldValue<decltype(bem)::Type,BemVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bem)::Type,BemVal::v1> v1{};
        }
        }
        ///Port size
        enum class PsVal {
            v00=0x00000000,     ///<32-bit port size. Valid data sampled and driven on FB_D[31:0]
            v01=0x00000001,     ///<8-bit port size. Valid data sampled and driven on FB_D[31:24] if BLS = 0 or FB_D[7:0] if BLS = 1
            v10=0x00000002,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] if BLS = 0 or FB_D[15:0] if BLS = 1
            v11=0x00000003,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] if BLS = 0 or FB_D[15:0] if BLS = 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v11> v11{};
        }
        }
        ///Auto-acknowledge enable
        enum class AaVal {
            v0=0x00000000,     ///<No internal FB_TA is asserted. Cycle is terminated externally
            v1=0x00000001,     ///<Internal transfer acknowledge is asserted as specified by WS
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AaVal> aa{}; 
        namespace AaValC{
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v1> v1{};
        }
        }
        ///Byte-lane shift
        enum class BlsVal {
            v0=0x00000000,     ///<Not shifted. Data is left-justfied on FB_AD.
            v1=0x00000001,     ///<Shifted. Data is right justified on FB_AD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,BlsVal> bls{}; 
        namespace BlsValC{
            constexpr Register::FieldValue<decltype(bls)::Type,BlsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bls)::Type,BlsVal::v1> v1{};
        }
        }
        ///Wait states
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> ws{}; 
        ///Write address hold or deselect
        enum class WrahVal {
            v00=0x00000000,     ///<Hold address and attributes one cycle after FB_CSn negates on writes. (Default FB_CSn)
            v01=0x00000001,     ///<Hold address and attributes two cycles after FB_CSn negates on writes.
            v10=0x00000002,     ///<Hold address and attributes three cycles after FB_CSn negates on writes.
            v11=0x00000003,     ///<Hold address and attributes four cycles after FB_CSn negates on writes. (Default FB_CS0)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,WrahVal> wrah{}; 
        namespace WrahValC{
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v00> v00{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v01> v01{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v10> v10{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v11> v11{};
        }
        }
        ///Read address hold or deselect
        enum class RdahVal {
            v00=0x00000000,     ///<If AA is cleared, 1 cycle. If AA is set, 0 cycles.
            v01=0x00000001,     ///<If AA is cleared, 2 cycles. If AA is set, 1 cycle.
            v10=0x00000002,     ///<If AA is cleared, 3 cycles. If AA is set, 2 cycles.
            v11=0x00000003,     ///<If AA is cleared, 4 cycles. If AA is set, 3 cycles.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,RdahVal> rdah{}; 
        namespace RdahValC{
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v10> v10{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v11> v11{};
        }
        }
        ///Address setup
        enum class AsetVal {
            v00=0x00000000,     ///<Assert FB_CSn on first rising clock edge after address is asserted. (Default FB_CSn)
            v01=0x00000001,     ///<Assert FB_CSn on second rising clock edge after address is asserted.
            v10=0x00000002,     ///<Assert FB_CSn on third rising clock edge after address is asserted.
            v11=0x00000003,     ///<Assert FB_CSn on fourth rising clock edge after address is asserted. (Default FB_CS0)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,AsetVal> aset{}; 
        namespace AsetValC{
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v00> v00{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v01> v01{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v10> v10{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v11> v11{};
        }
        }
        ///no description available
        enum class ExtsVal {
            v0=0x00000000,     ///<FB_TS /FB_ALE asserts for one bus clock cycle
            v1=0x00000001,     ///<FB_TS /FB_ALE remains asserted until the first positive clock edge after FB_CSn asserts
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ExtsVal> exts{}; 
        namespace ExtsValC{
            constexpr Register::FieldValue<decltype(exts)::Type,ExtsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(exts)::Type,ExtsVal::v1> v1{};
        }
        }
        ///Secondary wait state enable
        enum class SwsenVal {
            v0=0x00000000,     ///<The WS value inserts wait states before an internal transfer acknowledge is generated for all transfers
            v1=0x00000001,     ///<The SWS value inserts wait states before an internal transfer acknowledge is generated for burst transfer secondary terminations
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,SwsenVal> swsen{}; 
        namespace SwsenValC{
            constexpr Register::FieldValue<decltype(swsen)::Type,SwsenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swsen)::Type,SwsenVal::v1> v1{};
        }
        }
        ///Secondary wait states
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> sws{}; 
    }
    namespace FbCscr3{    ///<Chip select control register
        using Addr = Register::Address<0x4000c02c,0x03000007,0,unsigned>;
        ///Burst-write enable
        enum class BstwVal {
            v0=0x00000000,     ///<Break data larger than the specified port size into individual, port-sized, non-burst writes. For example, a longword write to an 8-bit port takes four byte writes.
            v1=0x00000001,     ///<Enables burst write of data larger than the specified port size, including longword writes to 8 and 16-bit ports, word writes to 8-bit ports, and line writes to 8-, 16-, and 32-bit ports.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BstwVal> bstw{}; 
        namespace BstwValC{
            constexpr Register::FieldValue<decltype(bstw)::Type,BstwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bstw)::Type,BstwVal::v1> v1{};
        }
        }
        ///Burst-read enable
        enum class BstrVal {
            v0=0x00000000,     ///<Data exceeding the specified port size is broken into individual, port-sized, non-burst reads. For example, a longword read from an 8-bit port is broken into four 8-bit reads.
            v1=0x00000001,     ///<Enables data burst reads larger than the specified port size, including longword reads from 8- and 16-bit ports, word reads from 8-bit ports, and line reads from 8, 16-, and 32-bit ports.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BstrVal> bstr{}; 
        namespace BstrValC{
            constexpr Register::FieldValue<decltype(bstr)::Type,BstrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bstr)::Type,BstrVal::v1> v1{};
        }
        }
        ///Byte-enable mode
        enum class BemVal {
            v0=0x00000000,     ///<The FB_BE n signals are not asserted for reads. The FB_BE n signals are asserted for data write only.
            v1=0x00000001,     ///<The FB_BE n signals are asserted for read and write accesses
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BemVal> bem{}; 
        namespace BemValC{
            constexpr Register::FieldValue<decltype(bem)::Type,BemVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bem)::Type,BemVal::v1> v1{};
        }
        }
        ///Port size
        enum class PsVal {
            v00=0x00000000,     ///<32-bit port size. Valid data sampled and driven on FB_D[31:0]
            v01=0x00000001,     ///<8-bit port size. Valid data sampled and driven on FB_D[31:24] if BLS = 0 or FB_D[7:0] if BLS = 1
            v10=0x00000002,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] if BLS = 0 or FB_D[15:0] if BLS = 1
            v11=0x00000003,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] if BLS = 0 or FB_D[15:0] if BLS = 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v11> v11{};
        }
        }
        ///Auto-acknowledge enable
        enum class AaVal {
            v0=0x00000000,     ///<No internal FB_TA is asserted. Cycle is terminated externally
            v1=0x00000001,     ///<Internal transfer acknowledge is asserted as specified by WS
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AaVal> aa{}; 
        namespace AaValC{
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v1> v1{};
        }
        }
        ///Byte-lane shift
        enum class BlsVal {
            v0=0x00000000,     ///<Not shifted. Data is left-justfied on FB_AD.
            v1=0x00000001,     ///<Shifted. Data is right justified on FB_AD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,BlsVal> bls{}; 
        namespace BlsValC{
            constexpr Register::FieldValue<decltype(bls)::Type,BlsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bls)::Type,BlsVal::v1> v1{};
        }
        }
        ///Wait states
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> ws{}; 
        ///Write address hold or deselect
        enum class WrahVal {
            v00=0x00000000,     ///<Hold address and attributes one cycle after FB_CSn negates on writes. (Default FB_CSn)
            v01=0x00000001,     ///<Hold address and attributes two cycles after FB_CSn negates on writes.
            v10=0x00000002,     ///<Hold address and attributes three cycles after FB_CSn negates on writes.
            v11=0x00000003,     ///<Hold address and attributes four cycles after FB_CSn negates on writes. (Default FB_CS0)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,WrahVal> wrah{}; 
        namespace WrahValC{
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v00> v00{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v01> v01{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v10> v10{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v11> v11{};
        }
        }
        ///Read address hold or deselect
        enum class RdahVal {
            v00=0x00000000,     ///<If AA is cleared, 1 cycle. If AA is set, 0 cycles.
            v01=0x00000001,     ///<If AA is cleared, 2 cycles. If AA is set, 1 cycle.
            v10=0x00000002,     ///<If AA is cleared, 3 cycles. If AA is set, 2 cycles.
            v11=0x00000003,     ///<If AA is cleared, 4 cycles. If AA is set, 3 cycles.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,RdahVal> rdah{}; 
        namespace RdahValC{
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v10> v10{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v11> v11{};
        }
        }
        ///Address setup
        enum class AsetVal {
            v00=0x00000000,     ///<Assert FB_CSn on first rising clock edge after address is asserted. (Default FB_CSn)
            v01=0x00000001,     ///<Assert FB_CSn on second rising clock edge after address is asserted.
            v10=0x00000002,     ///<Assert FB_CSn on third rising clock edge after address is asserted.
            v11=0x00000003,     ///<Assert FB_CSn on fourth rising clock edge after address is asserted. (Default FB_CS0)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,AsetVal> aset{}; 
        namespace AsetValC{
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v00> v00{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v01> v01{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v10> v10{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v11> v11{};
        }
        }
        ///no description available
        enum class ExtsVal {
            v0=0x00000000,     ///<FB_TS /FB_ALE asserts for one bus clock cycle
            v1=0x00000001,     ///<FB_TS /FB_ALE remains asserted until the first positive clock edge after FB_CSn asserts
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ExtsVal> exts{}; 
        namespace ExtsValC{
            constexpr Register::FieldValue<decltype(exts)::Type,ExtsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(exts)::Type,ExtsVal::v1> v1{};
        }
        }
        ///Secondary wait state enable
        enum class SwsenVal {
            v0=0x00000000,     ///<The WS value inserts wait states before an internal transfer acknowledge is generated for all transfers
            v1=0x00000001,     ///<The SWS value inserts wait states before an internal transfer acknowledge is generated for burst transfer secondary terminations
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,SwsenVal> swsen{}; 
        namespace SwsenValC{
            constexpr Register::FieldValue<decltype(swsen)::Type,SwsenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swsen)::Type,SwsenVal::v1> v1{};
        }
        }
        ///Secondary wait states
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> sws{}; 
    }
    namespace FbCscr4{    ///<Chip select control register
        using Addr = Register::Address<0x4000c038,0x03000007,0,unsigned>;
        ///Burst-write enable
        enum class BstwVal {
            v0=0x00000000,     ///<Break data larger than the specified port size into individual, port-sized, non-burst writes. For example, a longword write to an 8-bit port takes four byte writes.
            v1=0x00000001,     ///<Enables burst write of data larger than the specified port size, including longword writes to 8 and 16-bit ports, word writes to 8-bit ports, and line writes to 8-, 16-, and 32-bit ports.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BstwVal> bstw{}; 
        namespace BstwValC{
            constexpr Register::FieldValue<decltype(bstw)::Type,BstwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bstw)::Type,BstwVal::v1> v1{};
        }
        }
        ///Burst-read enable
        enum class BstrVal {
            v0=0x00000000,     ///<Data exceeding the specified port size is broken into individual, port-sized, non-burst reads. For example, a longword read from an 8-bit port is broken into four 8-bit reads.
            v1=0x00000001,     ///<Enables data burst reads larger than the specified port size, including longword reads from 8- and 16-bit ports, word reads from 8-bit ports, and line reads from 8, 16-, and 32-bit ports.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BstrVal> bstr{}; 
        namespace BstrValC{
            constexpr Register::FieldValue<decltype(bstr)::Type,BstrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bstr)::Type,BstrVal::v1> v1{};
        }
        }
        ///Byte-enable mode
        enum class BemVal {
            v0=0x00000000,     ///<The FB_BE n signals are not asserted for reads. The FB_BE n signals are asserted for data write only.
            v1=0x00000001,     ///<The FB_BE n signals are asserted for read and write accesses
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BemVal> bem{}; 
        namespace BemValC{
            constexpr Register::FieldValue<decltype(bem)::Type,BemVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bem)::Type,BemVal::v1> v1{};
        }
        }
        ///Port size
        enum class PsVal {
            v00=0x00000000,     ///<32-bit port size. Valid data sampled and driven on FB_D[31:0]
            v01=0x00000001,     ///<8-bit port size. Valid data sampled and driven on FB_D[31:24] if BLS = 0 or FB_D[7:0] if BLS = 1
            v10=0x00000002,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] if BLS = 0 or FB_D[15:0] if BLS = 1
            v11=0x00000003,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] if BLS = 0 or FB_D[15:0] if BLS = 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v11> v11{};
        }
        }
        ///Auto-acknowledge enable
        enum class AaVal {
            v0=0x00000000,     ///<No internal FB_TA is asserted. Cycle is terminated externally
            v1=0x00000001,     ///<Internal transfer acknowledge is asserted as specified by WS
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AaVal> aa{}; 
        namespace AaValC{
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v1> v1{};
        }
        }
        ///Byte-lane shift
        enum class BlsVal {
            v0=0x00000000,     ///<Not shifted. Data is left-justfied on FB_AD.
            v1=0x00000001,     ///<Shifted. Data is right justified on FB_AD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,BlsVal> bls{}; 
        namespace BlsValC{
            constexpr Register::FieldValue<decltype(bls)::Type,BlsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bls)::Type,BlsVal::v1> v1{};
        }
        }
        ///Wait states
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> ws{}; 
        ///Write address hold or deselect
        enum class WrahVal {
            v00=0x00000000,     ///<Hold address and attributes one cycle after FB_CSn negates on writes. (Default FB_CSn)
            v01=0x00000001,     ///<Hold address and attributes two cycles after FB_CSn negates on writes.
            v10=0x00000002,     ///<Hold address and attributes three cycles after FB_CSn negates on writes.
            v11=0x00000003,     ///<Hold address and attributes four cycles after FB_CSn negates on writes. (Default FB_CS0)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,WrahVal> wrah{}; 
        namespace WrahValC{
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v00> v00{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v01> v01{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v10> v10{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v11> v11{};
        }
        }
        ///Read address hold or deselect
        enum class RdahVal {
            v00=0x00000000,     ///<If AA is cleared, 1 cycle. If AA is set, 0 cycles.
            v01=0x00000001,     ///<If AA is cleared, 2 cycles. If AA is set, 1 cycle.
            v10=0x00000002,     ///<If AA is cleared, 3 cycles. If AA is set, 2 cycles.
            v11=0x00000003,     ///<If AA is cleared, 4 cycles. If AA is set, 3 cycles.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,RdahVal> rdah{}; 
        namespace RdahValC{
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v10> v10{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v11> v11{};
        }
        }
        ///Address setup
        enum class AsetVal {
            v00=0x00000000,     ///<Assert FB_CSn on first rising clock edge after address is asserted. (Default FB_CSn)
            v01=0x00000001,     ///<Assert FB_CSn on second rising clock edge after address is asserted.
            v10=0x00000002,     ///<Assert FB_CSn on third rising clock edge after address is asserted.
            v11=0x00000003,     ///<Assert FB_CSn on fourth rising clock edge after address is asserted. (Default FB_CS0)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,AsetVal> aset{}; 
        namespace AsetValC{
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v00> v00{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v01> v01{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v10> v10{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v11> v11{};
        }
        }
        ///no description available
        enum class ExtsVal {
            v0=0x00000000,     ///<FB_TS /FB_ALE asserts for one bus clock cycle
            v1=0x00000001,     ///<FB_TS /FB_ALE remains asserted until the first positive clock edge after FB_CSn asserts
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ExtsVal> exts{}; 
        namespace ExtsValC{
            constexpr Register::FieldValue<decltype(exts)::Type,ExtsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(exts)::Type,ExtsVal::v1> v1{};
        }
        }
        ///Secondary wait state enable
        enum class SwsenVal {
            v0=0x00000000,     ///<The WS value inserts wait states before an internal transfer acknowledge is generated for all transfers
            v1=0x00000001,     ///<The SWS value inserts wait states before an internal transfer acknowledge is generated for burst transfer secondary terminations
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,SwsenVal> swsen{}; 
        namespace SwsenValC{
            constexpr Register::FieldValue<decltype(swsen)::Type,SwsenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swsen)::Type,SwsenVal::v1> v1{};
        }
        }
        ///Secondary wait states
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> sws{}; 
    }
    namespace FbCscr5{    ///<Chip select control register
        using Addr = Register::Address<0x4000c044,0x03000007,0,unsigned>;
        ///Burst-write enable
        enum class BstwVal {
            v0=0x00000000,     ///<Break data larger than the specified port size into individual, port-sized, non-burst writes. For example, a longword write to an 8-bit port takes four byte writes.
            v1=0x00000001,     ///<Enables burst write of data larger than the specified port size, including longword writes to 8 and 16-bit ports, word writes to 8-bit ports, and line writes to 8-, 16-, and 32-bit ports.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BstwVal> bstw{}; 
        namespace BstwValC{
            constexpr Register::FieldValue<decltype(bstw)::Type,BstwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bstw)::Type,BstwVal::v1> v1{};
        }
        }
        ///Burst-read enable
        enum class BstrVal {
            v0=0x00000000,     ///<Data exceeding the specified port size is broken into individual, port-sized, non-burst reads. For example, a longword read from an 8-bit port is broken into four 8-bit reads.
            v1=0x00000001,     ///<Enables data burst reads larger than the specified port size, including longword reads from 8- and 16-bit ports, word reads from 8-bit ports, and line reads from 8, 16-, and 32-bit ports.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BstrVal> bstr{}; 
        namespace BstrValC{
            constexpr Register::FieldValue<decltype(bstr)::Type,BstrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bstr)::Type,BstrVal::v1> v1{};
        }
        }
        ///Byte-enable mode
        enum class BemVal {
            v0=0x00000000,     ///<The FB_BE n signals are not asserted for reads. The FB_BE n signals are asserted for data write only.
            v1=0x00000001,     ///<The FB_BE n signals are asserted for read and write accesses
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BemVal> bem{}; 
        namespace BemValC{
            constexpr Register::FieldValue<decltype(bem)::Type,BemVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bem)::Type,BemVal::v1> v1{};
        }
        }
        ///Port size
        enum class PsVal {
            v00=0x00000000,     ///<32-bit port size. Valid data sampled and driven on FB_D[31:0]
            v01=0x00000001,     ///<8-bit port size. Valid data sampled and driven on FB_D[31:24] if BLS = 0 or FB_D[7:0] if BLS = 1
            v10=0x00000002,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] if BLS = 0 or FB_D[15:0] if BLS = 1
            v11=0x00000003,     ///<16-bit port size. Valid data sampled and driven on FB_D[31:16] if BLS = 0 or FB_D[15:0] if BLS = 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v11> v11{};
        }
        }
        ///Auto-acknowledge enable
        enum class AaVal {
            v0=0x00000000,     ///<No internal FB_TA is asserted. Cycle is terminated externally
            v1=0x00000001,     ///<Internal transfer acknowledge is asserted as specified by WS
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AaVal> aa{}; 
        namespace AaValC{
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aa)::Type,AaVal::v1> v1{};
        }
        }
        ///Byte-lane shift
        enum class BlsVal {
            v0=0x00000000,     ///<Not shifted. Data is left-justfied on FB_AD.
            v1=0x00000001,     ///<Shifted. Data is right justified on FB_AD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,BlsVal> bls{}; 
        namespace BlsValC{
            constexpr Register::FieldValue<decltype(bls)::Type,BlsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bls)::Type,BlsVal::v1> v1{};
        }
        }
        ///Wait states
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> ws{}; 
        ///Write address hold or deselect
        enum class WrahVal {
            v00=0x00000000,     ///<Hold address and attributes one cycle after FB_CSn negates on writes. (Default FB_CSn)
            v01=0x00000001,     ///<Hold address and attributes two cycles after FB_CSn negates on writes.
            v10=0x00000002,     ///<Hold address and attributes three cycles after FB_CSn negates on writes.
            v11=0x00000003,     ///<Hold address and attributes four cycles after FB_CSn negates on writes. (Default FB_CS0)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,WrahVal> wrah{}; 
        namespace WrahValC{
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v00> v00{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v01> v01{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v10> v10{};
            constexpr Register::FieldValue<decltype(wrah)::Type,WrahVal::v11> v11{};
        }
        }
        ///Read address hold or deselect
        enum class RdahVal {
            v00=0x00000000,     ///<If AA is cleared, 1 cycle. If AA is set, 0 cycles.
            v01=0x00000001,     ///<If AA is cleared, 2 cycles. If AA is set, 1 cycle.
            v10=0x00000002,     ///<If AA is cleared, 3 cycles. If AA is set, 2 cycles.
            v11=0x00000003,     ///<If AA is cleared, 4 cycles. If AA is set, 3 cycles.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,RdahVal> rdah{}; 
        namespace RdahValC{
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v10> v10{};
            constexpr Register::FieldValue<decltype(rdah)::Type,RdahVal::v11> v11{};
        }
        }
        ///Address setup
        enum class AsetVal {
            v00=0x00000000,     ///<Assert FB_CSn on first rising clock edge after address is asserted. (Default FB_CSn)
            v01=0x00000001,     ///<Assert FB_CSn on second rising clock edge after address is asserted.
            v10=0x00000002,     ///<Assert FB_CSn on third rising clock edge after address is asserted.
            v11=0x00000003,     ///<Assert FB_CSn on fourth rising clock edge after address is asserted. (Default FB_CS0)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,AsetVal> aset{}; 
        namespace AsetValC{
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v00> v00{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v01> v01{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v10> v10{};
            constexpr Register::FieldValue<decltype(aset)::Type,AsetVal::v11> v11{};
        }
        }
        ///no description available
        enum class ExtsVal {
            v0=0x00000000,     ///<FB_TS /FB_ALE asserts for one bus clock cycle
            v1=0x00000001,     ///<FB_TS /FB_ALE remains asserted until the first positive clock edge after FB_CSn asserts
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ExtsVal> exts{}; 
        namespace ExtsValC{
            constexpr Register::FieldValue<decltype(exts)::Type,ExtsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(exts)::Type,ExtsVal::v1> v1{};
        }
        }
        ///Secondary wait state enable
        enum class SwsenVal {
            v0=0x00000000,     ///<The WS value inserts wait states before an internal transfer acknowledge is generated for all transfers
            v1=0x00000001,     ///<The SWS value inserts wait states before an internal transfer acknowledge is generated for burst transfer secondary terminations
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,SwsenVal> swsen{}; 
        namespace SwsenValC{
            constexpr Register::FieldValue<decltype(swsen)::Type,SwsenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swsen)::Type,SwsenVal::v1> v1{};
        }
        }
        ///Secondary wait states
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> sws{}; 
    }
    namespace FbCspmcr{    ///<Chip select port multiplexing control register
        using Addr = Register::Address<0x4000c060,0x00000fff,0,unsigned>;
        ///FlexBus signal group 5 multiplex control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> group5{}; 
        ///FlexBus signal group 4 multiplex control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> group4{}; 
        ///FlexBus signal group 3 multiplex control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> group3{}; 
        ///FlexBus signal group 2 multiplex control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> group2{}; 
        ///FlexBus signal group 1 multiplex control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> group1{}; 
    }
}
