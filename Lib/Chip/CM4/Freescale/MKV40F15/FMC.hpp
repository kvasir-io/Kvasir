#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash Memory Controller
    namespace FmcPfapr{    ///<Flash Access Protection Register
        using Addr = Register::Address<0x4001f000,0xfff8ffc0,0,unsigned>;
        ///Master 0 Access Protection
        enum class m0apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        namespace m0apValC{
            constexpr MPL::Value<m0apVal,m0apVal::v00> v00{};
            constexpr MPL::Value<m0apVal,m0apVal::v01> v01{};
            constexpr MPL::Value<m0apVal,m0apVal::v10> v10{};
            constexpr MPL::Value<m0apVal,m0apVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,m0apVal> m0ap{}; 
        ///Master 1 Access Protection
        enum class m1apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        namespace m1apValC{
            constexpr MPL::Value<m1apVal,m1apVal::v00> v00{};
            constexpr MPL::Value<m1apVal,m1apVal::v01> v01{};
            constexpr MPL::Value<m1apVal,m1apVal::v10> v10{};
            constexpr MPL::Value<m1apVal,m1apVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,m1apVal> m1ap{}; 
        ///Master 2 Access Protection
        enum class m2apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        namespace m2apValC{
            constexpr MPL::Value<m2apVal,m2apVal::v00> v00{};
            constexpr MPL::Value<m2apVal,m2apVal::v01> v01{};
            constexpr MPL::Value<m2apVal,m2apVal::v10> v10{};
            constexpr MPL::Value<m2apVal,m2apVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,m2apVal> m2ap{}; 
        ///Master 0 Prefetch Disable
        enum class m0pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        namespace m0pfdValC{
            constexpr MPL::Value<m0pfdVal,m0pfdVal::v0> v0{};
            constexpr MPL::Value<m0pfdVal,m0pfdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,m0pfdVal> m0pfd{}; 
        ///Master 1 Prefetch Disable
        enum class m1pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        namespace m1pfdValC{
            constexpr MPL::Value<m1pfdVal,m1pfdVal::v0> v0{};
            constexpr MPL::Value<m1pfdVal,m1pfdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,m1pfdVal> m1pfd{}; 
        ///Master 2 Prefetch Disable
        enum class m2pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        namespace m2pfdValC{
            constexpr MPL::Value<m2pfdVal,m2pfdVal::v0> v0{};
            constexpr MPL::Value<m2pfdVal,m2pfdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,m2pfdVal> m2pfd{}; 
    }
    namespace FmcPfb0cr{    ///<Flash Bank 0 Control Register
        using Addr = Register::Address<0x4001f004,0x0001ff00,0,unsigned>;
        ///Bank 0 Single Entry Buffer Enable
        enum class b0sebeVal {
            v0=0x00000000,     ///<Single entry buffer is disabled.
            v1=0x00000001,     ///<Single entry buffer is enabled.
        };
        namespace b0sebeValC{
            constexpr MPL::Value<b0sebeVal,b0sebeVal::v0> v0{};
            constexpr MPL::Value<b0sebeVal,b0sebeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,b0sebeVal> b0sebe{}; 
        ///Bank 0 Instruction Prefetch Enable
        enum class b0ipeVal {
            v0=0x00000000,     ///<Do not prefetch in response to instruction fetches.
            v1=0x00000001,     ///<Enable prefetches in response to instruction fetches.
        };
        namespace b0ipeValC{
            constexpr MPL::Value<b0ipeVal,b0ipeVal::v0> v0{};
            constexpr MPL::Value<b0ipeVal,b0ipeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,b0ipeVal> b0ipe{}; 
        ///Bank 0 Data Prefetch Enable
        enum class b0dpeVal {
            v0=0x00000000,     ///<Do not prefetch in response to data references.
            v1=0x00000001,     ///<Enable prefetches in response to data references.
        };
        namespace b0dpeValC{
            constexpr MPL::Value<b0dpeVal,b0dpeVal::v0> v0{};
            constexpr MPL::Value<b0dpeVal,b0dpeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,b0dpeVal> b0dpe{}; 
        ///Bank 0 Instruction Cache Enable
        enum class b0iceVal {
            v0=0x00000000,     ///<Do not cache instruction fetches.
            v1=0x00000001,     ///<Cache instruction fetches.
        };
        namespace b0iceValC{
            constexpr MPL::Value<b0iceVal,b0iceVal::v0> v0{};
            constexpr MPL::Value<b0iceVal,b0iceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,b0iceVal> b0ice{}; 
        ///Bank 0 Data Cache Enable
        enum class b0dceVal {
            v0=0x00000000,     ///<Do not cache data references.
            v1=0x00000001,     ///<Cache data references.
        };
        namespace b0dceValC{
            constexpr MPL::Value<b0dceVal,b0dceVal::v0> v0{};
            constexpr MPL::Value<b0dceVal,b0dceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,b0dceVal> b0dce{}; 
        ///Cache Replacement Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> crc{}; 
        ///Bank 0 Memory Width
        enum class b0mwVal {
            v00=0x00000000,     ///<32 bits
            v01=0x00000001,     ///<64 bits
            v10=0x00000002,     ///<128 bits
        };
        namespace b0mwValC{
            constexpr MPL::Value<b0mwVal,b0mwVal::v00> v00{};
            constexpr MPL::Value<b0mwVal,b0mwVal::v01> v01{};
            constexpr MPL::Value<b0mwVal,b0mwVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,b0mwVal> b0mw{}; 
        ///Invalidate Prefetch Speculation Buffer
        enum class sBInvVal {
            v0=0x00000000,     ///<Speculation buffer and single entry buffer are not affected.
            v1=0x00000001,     ///<Invalidate (clear) speculation buffer and single entry buffer.
        };
        namespace sBInvValC{
            constexpr MPL::Value<sBInvVal,sBInvVal::v0> v0{};
            constexpr MPL::Value<sBInvVal,sBInvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,sBInvVal> sBInv{}; 
        ///Cache Invalidate Way x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> cinvWay{}; 
        ///Cache Lock Way x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> clckWay{}; 
        ///Bank 0 Read Wait State Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> b0rwsc{}; 
    }
    namespace FmcPfb1cr{    ///<Flash Bank 1 Control Register
        using Addr = Register::Address<0x4001f008,0xffffffff,0,unsigned>;
    }
    namespace FmcTagvdw0s0{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f100,0xfff0001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///the tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,5),Register::ReadWriteAccess,unsigned> cacheTag{}; 
    }
    namespace FmcTagvdw0s1{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f104,0xfff0001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///the tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,5),Register::ReadWriteAccess,unsigned> cacheTag{}; 
    }
    namespace FmcTagvdw1s0{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f108,0xfff0001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///the tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,5),Register::ReadWriteAccess,unsigned> cacheTag{}; 
    }
    namespace FmcTagvdw1s1{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f10c,0xfff0001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///the tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,5),Register::ReadWriteAccess,unsigned> cacheTag{}; 
    }
    namespace FmcTagvdw2s0{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f110,0xfff0001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///the tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,5),Register::ReadWriteAccess,unsigned> cacheTag{}; 
    }
    namespace FmcTagvdw2s1{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f114,0xfff0001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///the tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,5),Register::ReadWriteAccess,unsigned> cacheTag{}; 
    }
    namespace FmcTagvdw3s0{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f118,0xfff0001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///the tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,5),Register::ReadWriteAccess,unsigned> cacheTag{}; 
    }
    namespace FmcTagvdw3s1{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f11c,0xfff0001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///the tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,5),Register::ReadWriteAccess,unsigned> cacheTag{}; 
    }
    namespace FmcDataw0s0um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f200,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s1um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f210,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s0mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f204,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s1mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f214,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s0ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f208,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s1ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f218,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s0lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f20c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s1lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f21c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s0um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f240,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s1um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f250,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s0mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f244,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s1mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f254,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s0ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f248,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s1ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f258,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s0lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f24c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s1lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f25c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s0um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f280,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s1um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f290,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s0mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f284,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s1mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f294,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s0ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f288,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s1ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f298,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s0lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f28c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s1lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f29c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s0um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f2c0,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s1um{    ///<Cache Data Storage (uppermost word)
        using Addr = Register::Address<0x4001f2d0,0x00000000,0,unsigned>;
        ///Bits [127:96] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s0mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f2c4,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s1mu{    ///<Cache Data Storage (mid-upper word)
        using Addr = Register::Address<0x4001f2d4,0x00000000,0,unsigned>;
        ///Bits [95:64] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s0ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f2c8,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s1ml{    ///<Cache Data Storage (mid-lower word)
        using Addr = Register::Address<0x4001f2d8,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s0lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f2cc,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s1lm{    ///<Cache Data Storage (lowermost word)
        using Addr = Register::Address<0x4001f2dc,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
}
