#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash Memory Controller
    namespace FmcPfapr{    ///<Flash Access Protection Register
        using Addr = Register::Address<0x4001f000,0xff000000,0,unsigned>;
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
        ///Master 3 Access Protection
        enum class m3apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        namespace m3apValC{
            constexpr MPL::Value<m3apVal,m3apVal::v00> v00{};
            constexpr MPL::Value<m3apVal,m3apVal::v01> v01{};
            constexpr MPL::Value<m3apVal,m3apVal::v10> v10{};
            constexpr MPL::Value<m3apVal,m3apVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,m3apVal> m3ap{}; 
        ///Master 4 Access Protection
        enum class m4apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        namespace m4apValC{
            constexpr MPL::Value<m4apVal,m4apVal::v00> v00{};
            constexpr MPL::Value<m4apVal,m4apVal::v01> v01{};
            constexpr MPL::Value<m4apVal,m4apVal::v10> v10{};
            constexpr MPL::Value<m4apVal,m4apVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,m4apVal> m4ap{}; 
        ///Master 5 Access Protection
        enum class m5apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        namespace m5apValC{
            constexpr MPL::Value<m5apVal,m5apVal::v00> v00{};
            constexpr MPL::Value<m5apVal,m5apVal::v01> v01{};
            constexpr MPL::Value<m5apVal,m5apVal::v10> v10{};
            constexpr MPL::Value<m5apVal,m5apVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,m5apVal> m5ap{}; 
        ///Master 6 Access Protection
        enum class m6apVal {
            v00=0x00000000,     ///<No access may be performed by this master
            v01=0x00000001,     ///<Only read accesses may be performed by this master
            v10=0x00000002,     ///<Only write accesses may be performed by this master
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master
        };
        namespace m6apValC{
            constexpr MPL::Value<m6apVal,m6apVal::v00> v00{};
            constexpr MPL::Value<m6apVal,m6apVal::v01> v01{};
            constexpr MPL::Value<m6apVal,m6apVal::v10> v10{};
            constexpr MPL::Value<m6apVal,m6apVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,m6apVal> m6ap{}; 
        ///Master 7 Access Protection
        enum class m7apVal {
            v00=0x00000000,     ///<No access may be performed by this master.
            v01=0x00000001,     ///<Only read accesses may be performed by this master.
            v10=0x00000002,     ///<Only write accesses may be performed by this master.
            v11=0x00000003,     ///<Both read and write accesses may be performed by this master.
        };
        namespace m7apValC{
            constexpr MPL::Value<m7apVal,m7apVal::v00> v00{};
            constexpr MPL::Value<m7apVal,m7apVal::v01> v01{};
            constexpr MPL::Value<m7apVal,m7apVal::v10> v10{};
            constexpr MPL::Value<m7apVal,m7apVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,m7apVal> m7ap{}; 
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
        ///Master 3 Prefetch Disable
        enum class m3pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        namespace m3pfdValC{
            constexpr MPL::Value<m3pfdVal,m3pfdVal::v0> v0{};
            constexpr MPL::Value<m3pfdVal,m3pfdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,m3pfdVal> m3pfd{}; 
        ///Master 4 Prefetch Disable
        enum class m4pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        namespace m4pfdValC{
            constexpr MPL::Value<m4pfdVal,m4pfdVal::v0> v0{};
            constexpr MPL::Value<m4pfdVal,m4pfdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,m4pfdVal> m4pfd{}; 
        ///Master 5 Prefetch Disable
        enum class m5pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        namespace m5pfdValC{
            constexpr MPL::Value<m5pfdVal,m5pfdVal::v0> v0{};
            constexpr MPL::Value<m5pfdVal,m5pfdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,m5pfdVal> m5pfd{}; 
        ///Master 6 Prefetch Disable
        enum class m6pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        namespace m6pfdValC{
            constexpr MPL::Value<m6pfdVal,m6pfdVal::v0> v0{};
            constexpr MPL::Value<m6pfdVal,m6pfdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,m6pfdVal> m6pfd{}; 
        ///Master 7 Prefetch Disable
        enum class m7pfdVal {
            v0=0x00000000,     ///<Prefetching for this master is enabled.
            v1=0x00000001,     ///<Prefetching for this master is disabled.
        };
        namespace m7pfdValC{
            constexpr MPL::Value<m7pfdVal,m7pfdVal::v0> v0{};
            constexpr MPL::Value<m7pfdVal,m7pfdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,m7pfdVal> m7pfd{}; 
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
        };
        namespace b0mwValC{
            constexpr MPL::Value<b0mwVal,b0mwVal::v00> v00{};
            constexpr MPL::Value<b0mwVal,b0mwVal::v01> v01{};
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
        using Addr = Register::Address<0x4001f008,0x0ff9ffe0,0,unsigned>;
        ///Bank 1 Single Entry Buffer Enable
        enum class b1sebeVal {
            v0=0x00000000,     ///<Single entry buffer is disabled.
            v1=0x00000001,     ///<Single entry buffer is enabled.
        };
        namespace b1sebeValC{
            constexpr MPL::Value<b1sebeVal,b1sebeVal::v0> v0{};
            constexpr MPL::Value<b1sebeVal,b1sebeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,b1sebeVal> b1sebe{}; 
        ///Bank 1 Instruction Prefetch Enable
        enum class b1ipeVal {
            v0=0x00000000,     ///<Do not prefetch in response to instruction fetches.
            v1=0x00000001,     ///<Enable prefetches in response to instruction fetches.
        };
        namespace b1ipeValC{
            constexpr MPL::Value<b1ipeVal,b1ipeVal::v0> v0{};
            constexpr MPL::Value<b1ipeVal,b1ipeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,b1ipeVal> b1ipe{}; 
        ///Bank 1 Data Prefetch Enable
        enum class b1dpeVal {
            v0=0x00000000,     ///<Do not prefetch in response to data references.
            v1=0x00000001,     ///<Enable prefetches in response to data references.
        };
        namespace b1dpeValC{
            constexpr MPL::Value<b1dpeVal,b1dpeVal::v0> v0{};
            constexpr MPL::Value<b1dpeVal,b1dpeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,b1dpeVal> b1dpe{}; 
        ///Bank 1 Instruction Cache Enable
        enum class b1iceVal {
            v0=0x00000000,     ///<Do not cache instruction fetches.
            v1=0x00000001,     ///<Cache instruction fetches.
        };
        namespace b1iceValC{
            constexpr MPL::Value<b1iceVal,b1iceVal::v0> v0{};
            constexpr MPL::Value<b1iceVal,b1iceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,b1iceVal> b1ice{}; 
        ///Bank 1 Data Cache Enable
        enum class b1dceVal {
            v0=0x00000000,     ///<Do not cache data references.
            v1=0x00000001,     ///<Cache data references.
        };
        namespace b1dceValC{
            constexpr MPL::Value<b1dceVal,b1dceVal::v0> v0{};
            constexpr MPL::Value<b1dceVal,b1dceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,b1dceVal> b1dce{}; 
        ///Bank 1 Memory Width
        enum class b1mwVal {
            v00=0x00000000,     ///<32 bits
            v01=0x00000001,     ///<64 bits
        };
        namespace b1mwValC{
            constexpr MPL::Value<b1mwVal,b1mwVal::v00> v00{};
            constexpr MPL::Value<b1mwVal,b1mwVal::v01> v01{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,b1mwVal> b1mw{}; 
        ///Bank 1 Read Wait State Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> b1rwsc{}; 
    }
    namespace FmcTagvdw0s0{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f100,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw0s1{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f104,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw0s2{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f108,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw0s3{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f10c,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw0s4{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f110,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw0s5{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f114,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw0s6{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f118,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw0s7{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f11c,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw1s0{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f120,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw1s1{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f124,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw1s2{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f128,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw1s3{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f12c,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw1s4{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f130,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw1s5{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f134,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw1s6{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f138,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw1s7{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f13c,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw2s0{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f140,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw2s1{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f144,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw2s2{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f148,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw2s3{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f14c,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw2s4{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f150,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw2s5{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f154,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw2s6{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f158,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw2s7{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f15c,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw3s0{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f160,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw3s1{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f164,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw3s2{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f168,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw3s3{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f16c,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw3s4{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f170,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw3s5{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f174,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw3s6{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f178,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcTagvdw3s7{    ///<Cache Tag Storage
        using Addr = Register::Address<0x4001f17c,0xfff8001e,0,unsigned>;
        ///1-bit valid for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> valid{}; 
        ///14-bit tag for cache entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,5),Register::ReadWriteAccess,unsigned> tag{}; 
    }
    namespace FmcDataw0s0u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f200,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s1u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f208,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s2u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f210,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s3u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f218,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s4u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f220,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s5u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f228,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s6u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f230,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s7u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f238,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s0l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f204,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s1l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f20c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s2l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f214,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s3l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f21c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s4l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f224,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s5l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f22c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s6l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f234,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw0s7l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f23c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s0u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f240,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s1u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f248,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s2u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f250,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s3u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f258,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s4u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f260,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s5u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f268,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s6u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f270,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s7u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f278,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s0l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f244,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s1l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f24c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s2l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f254,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s3l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f25c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s4l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f264,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s5l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f26c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s6l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f274,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw1s7l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f27c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s0u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f280,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s1u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f288,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s2u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f290,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s3u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f298,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s4u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f2a0,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s5u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f2a8,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s6u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f2b0,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s7u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f2b8,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s0l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f284,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s1l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f28c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s2l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f294,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s3l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f29c,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s4l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f2a4,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s5l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f2ac,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s6l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f2b4,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw2s7l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f2bc,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s0u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f2c0,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s1u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f2c8,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s2u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f2d0,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s3u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f2d8,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s4u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f2e0,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s5u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f2e8,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s6u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f2f0,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s7u{    ///<Cache Data Storage (upper word)
        using Addr = Register::Address<0x4001f2f8,0x00000000,0,unsigned>;
        ///Bits [63:32] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s0l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f2c4,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s1l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f2cc,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s2l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f2d4,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s3l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f2dc,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s4l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f2e4,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s5l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f2ec,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s6l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f2f4,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace FmcDataw3s7l{    ///<Cache Data Storage (lower word)
        using Addr = Register::Address<0x4001f2fc,0x00000000,0,unsigned>;
        ///Bits [31:0] of data entry
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
}
