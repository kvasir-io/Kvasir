#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Memory protection unit
    namespace MpuCesr{    ///<Control/Error Status Register
        using Addr = Register::Address<0x4000d000,0x07f000fe,0,unsigned>;
        ///Valid
        enum class vldVal {
            v0=0x00000000,     ///<MPU is disabled. All accesses from all bus masters are allowed.
            v1=0x00000001,     ///<MPU is enabled
        };
        namespace vldValC{
            constexpr MPL::Value<vldVal,vldVal::v0> v0{};
            constexpr MPL::Value<vldVal,vldVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,vldVal> vld{}; 
        ///Number Of Region Descriptors
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> nrgd{}; 
        ///Number Of Slave Ports
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> nsp{}; 
        ///Hardware Revision Level
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> hrl{}; 
        ///Slave Port n Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,27),Register::ReadWriteAccess,unsigned> sperr{}; 
    }
    namespace MpuEar0{    ///<Error Address Register, slave port n
        using Addr = Register::Address<0x4000d010,0x00000000,0,unsigned>;
        ///Error Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> eaddr{}; 
    }
    namespace MpuEar1{    ///<Error Address Register, slave port n
        using Addr = Register::Address<0x4000d018,0x00000000,0,unsigned>;
        ///Error Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> eaddr{}; 
    }
    namespace MpuEar2{    ///<Error Address Register, slave port n
        using Addr = Register::Address<0x4000d020,0x00000000,0,unsigned>;
        ///Error Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> eaddr{}; 
    }
    namespace MpuEar3{    ///<Error Address Register, slave port n
        using Addr = Register::Address<0x4000d028,0x00000000,0,unsigned>;
        ///Error Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> eaddr{}; 
    }
    namespace MpuEar4{    ///<Error Address Register, slave port n
        using Addr = Register::Address<0x4000d030,0x00000000,0,unsigned>;
        ///Error Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> eaddr{}; 
    }
    namespace MpuEdr0{    ///<Error Detail Register, slave port n
        using Addr = Register::Address<0x4000d014,0x0000ff00,0,unsigned>;
        ///Error Read/Write
        enum class erwVal {
            v0=0x00000000,     ///<Read
            v1=0x00000001,     ///<Write
        };
        namespace erwValC{
            constexpr MPL::Value<erwVal,erwVal::v0> v0{};
            constexpr MPL::Value<erwVal,erwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,erwVal> erw{}; 
        ///Error Attributes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> eattr{}; 
        ///Error Master Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> emn{}; 
        ///Error Access Control Detail
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> eacd{}; 
    }
    namespace MpuEdr1{    ///<Error Detail Register, slave port n
        using Addr = Register::Address<0x4000d01c,0x0000ff00,0,unsigned>;
        ///Error Read/Write
        enum class erwVal {
            v0=0x00000000,     ///<Read
            v1=0x00000001,     ///<Write
        };
        namespace erwValC{
            constexpr MPL::Value<erwVal,erwVal::v0> v0{};
            constexpr MPL::Value<erwVal,erwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,erwVal> erw{}; 
        ///Error Attributes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> eattr{}; 
        ///Error Master Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> emn{}; 
        ///Error Access Control Detail
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> eacd{}; 
    }
    namespace MpuEdr2{    ///<Error Detail Register, slave port n
        using Addr = Register::Address<0x4000d024,0x0000ff00,0,unsigned>;
        ///Error Read/Write
        enum class erwVal {
            v0=0x00000000,     ///<Read
            v1=0x00000001,     ///<Write
        };
        namespace erwValC{
            constexpr MPL::Value<erwVal,erwVal::v0> v0{};
            constexpr MPL::Value<erwVal,erwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,erwVal> erw{}; 
        ///Error Attributes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> eattr{}; 
        ///Error Master Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> emn{}; 
        ///Error Access Control Detail
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> eacd{}; 
    }
    namespace MpuEdr3{    ///<Error Detail Register, slave port n
        using Addr = Register::Address<0x4000d02c,0x0000ff00,0,unsigned>;
        ///Error Read/Write
        enum class erwVal {
            v0=0x00000000,     ///<Read
            v1=0x00000001,     ///<Write
        };
        namespace erwValC{
            constexpr MPL::Value<erwVal,erwVal::v0> v0{};
            constexpr MPL::Value<erwVal,erwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,erwVal> erw{}; 
        ///Error Attributes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> eattr{}; 
        ///Error Master Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> emn{}; 
        ///Error Access Control Detail
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> eacd{}; 
    }
    namespace MpuEdr4{    ///<Error Detail Register, slave port n
        using Addr = Register::Address<0x4000d034,0x0000ff00,0,unsigned>;
        ///Error Read/Write
        enum class erwVal {
            v0=0x00000000,     ///<Read
            v1=0x00000001,     ///<Write
        };
        namespace erwValC{
            constexpr MPL::Value<erwVal,erwVal::v0> v0{};
            constexpr MPL::Value<erwVal,erwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,erwVal> erw{}; 
        ///Error Attributes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> eattr{}; 
        ///Error Master Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> emn{}; 
        ///Error Access Control Detail
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> eacd{}; 
    }
    namespace MpuRgd0Word0{    ///<Region Descriptor n, Word 0
        using Addr = Register::Address<0x4000d400,0x0000001f,0,unsigned>;
        ///Start Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> srtaddr{}; 
    }
    namespace MpuRgd1Word0{    ///<Region Descriptor n, Word 0
        using Addr = Register::Address<0x4000d410,0x0000001f,0,unsigned>;
        ///Start Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> srtaddr{}; 
    }
    namespace MpuRgd2Word0{    ///<Region Descriptor n, Word 0
        using Addr = Register::Address<0x4000d420,0x0000001f,0,unsigned>;
        ///Start Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> srtaddr{}; 
    }
    namespace MpuRgd3Word0{    ///<Region Descriptor n, Word 0
        using Addr = Register::Address<0x4000d430,0x0000001f,0,unsigned>;
        ///Start Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> srtaddr{}; 
    }
    namespace MpuRgd4Word0{    ///<Region Descriptor n, Word 0
        using Addr = Register::Address<0x4000d440,0x0000001f,0,unsigned>;
        ///Start Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> srtaddr{}; 
    }
    namespace MpuRgd5Word0{    ///<Region Descriptor n, Word 0
        using Addr = Register::Address<0x4000d450,0x0000001f,0,unsigned>;
        ///Start Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> srtaddr{}; 
    }
    namespace MpuRgd6Word0{    ///<Region Descriptor n, Word 0
        using Addr = Register::Address<0x4000d460,0x0000001f,0,unsigned>;
        ///Start Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> srtaddr{}; 
    }
    namespace MpuRgd7Word0{    ///<Region Descriptor n, Word 0
        using Addr = Register::Address<0x4000d470,0x0000001f,0,unsigned>;
        ///Start Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> srtaddr{}; 
    }
    namespace MpuRgd0Word1{    ///<Region Descriptor n, Word 1
        using Addr = Register::Address<0x4000d404,0x0000001f,0,unsigned>;
        ///End Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace MpuRgd1Word1{    ///<Region Descriptor n, Word 1
        using Addr = Register::Address<0x4000d414,0x0000001f,0,unsigned>;
        ///End Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace MpuRgd2Word1{    ///<Region Descriptor n, Word 1
        using Addr = Register::Address<0x4000d424,0x0000001f,0,unsigned>;
        ///End Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace MpuRgd3Word1{    ///<Region Descriptor n, Word 1
        using Addr = Register::Address<0x4000d434,0x0000001f,0,unsigned>;
        ///End Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace MpuRgd4Word1{    ///<Region Descriptor n, Word 1
        using Addr = Register::Address<0x4000d444,0x0000001f,0,unsigned>;
        ///End Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace MpuRgd5Word1{    ///<Region Descriptor n, Word 1
        using Addr = Register::Address<0x4000d454,0x0000001f,0,unsigned>;
        ///End Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace MpuRgd6Word1{    ///<Region Descriptor n, Word 1
        using Addr = Register::Address<0x4000d464,0x0000001f,0,unsigned>;
        ///End Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace MpuRgd7Word1{    ///<Region Descriptor n, Word 1
        using Addr = Register::Address<0x4000d474,0x0000001f,0,unsigned>;
        ///End Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace MpuRgd0Word2{    ///<Region Descriptor n, Word 2
        using Addr = Register::Address<0x4000d408,0x00820820,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 2 User Mode Access control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class m3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        namespace m3smValC{
            constexpr MPL::Value<m3smVal,m3smVal::v00> v00{};
            constexpr MPL::Value<m3smVal,m3smVal::v01> v01{};
            constexpr MPL::Value<m3smVal,m3smVal::v10> v10{};
            constexpr MPL::Value<m3smVal,m3smVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,m3smVal> m3sm{}; 
        ///Bus Master 4 Write Enable
        enum class m4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        namespace m4weValC{
            constexpr MPL::Value<m4weVal,m4weVal::v0> v0{};
            constexpr MPL::Value<m4weVal,m4weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,m4weVal> m4we{}; 
        ///Bus Master 4 Read Enable
        enum class m4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        namespace m4reValC{
            constexpr MPL::Value<m4reVal,m4reVal::v0> v0{};
            constexpr MPL::Value<m4reVal,m4reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,m4reVal> m4re{}; 
        ///Bus Master 5 Write Enable
        enum class m5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        namespace m5weValC{
            constexpr MPL::Value<m5weVal,m5weVal::v0> v0{};
            constexpr MPL::Value<m5weVal,m5weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,m5weVal> m5we{}; 
        ///Bus Master 5 Read Enable
        enum class m5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        namespace m5reValC{
            constexpr MPL::Value<m5reVal,m5reVal::v0> v0{};
            constexpr MPL::Value<m5reVal,m5reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,m5reVal> m5re{}; 
        ///Bus Master 6 Write Enable
        enum class m6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        namespace m6weValC{
            constexpr MPL::Value<m6weVal,m6weVal::v0> v0{};
            constexpr MPL::Value<m6weVal,m6weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,m6weVal> m6we{}; 
        ///Bus Master 6 Read Enable
        enum class m6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        namespace m6reValC{
            constexpr MPL::Value<m6reVal,m6reVal::v0> v0{};
            constexpr MPL::Value<m6reVal,m6reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,m6reVal> m6re{}; 
        ///Bus Master 7 Write Enable
        enum class m7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        namespace m7weValC{
            constexpr MPL::Value<m7weVal,m7weVal::v0> v0{};
            constexpr MPL::Value<m7weVal,m7weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,m7weVal> m7we{}; 
        ///Bus Master 7 Read Enable
        enum class m7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        namespace m7reValC{
            constexpr MPL::Value<m7reVal,m7reVal::v0> v0{};
            constexpr MPL::Value<m7reVal,m7reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,m7reVal> m7re{}; 
    }
    namespace MpuRgd1Word2{    ///<Region Descriptor n, Word 2
        using Addr = Register::Address<0x4000d418,0x00820820,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 2 User Mode Access control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class m3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        namespace m3smValC{
            constexpr MPL::Value<m3smVal,m3smVal::v00> v00{};
            constexpr MPL::Value<m3smVal,m3smVal::v01> v01{};
            constexpr MPL::Value<m3smVal,m3smVal::v10> v10{};
            constexpr MPL::Value<m3smVal,m3smVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,m3smVal> m3sm{}; 
        ///Bus Master 4 Write Enable
        enum class m4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        namespace m4weValC{
            constexpr MPL::Value<m4weVal,m4weVal::v0> v0{};
            constexpr MPL::Value<m4weVal,m4weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,m4weVal> m4we{}; 
        ///Bus Master 4 Read Enable
        enum class m4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        namespace m4reValC{
            constexpr MPL::Value<m4reVal,m4reVal::v0> v0{};
            constexpr MPL::Value<m4reVal,m4reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,m4reVal> m4re{}; 
        ///Bus Master 5 Write Enable
        enum class m5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        namespace m5weValC{
            constexpr MPL::Value<m5weVal,m5weVal::v0> v0{};
            constexpr MPL::Value<m5weVal,m5weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,m5weVal> m5we{}; 
        ///Bus Master 5 Read Enable
        enum class m5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        namespace m5reValC{
            constexpr MPL::Value<m5reVal,m5reVal::v0> v0{};
            constexpr MPL::Value<m5reVal,m5reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,m5reVal> m5re{}; 
        ///Bus Master 6 Write Enable
        enum class m6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        namespace m6weValC{
            constexpr MPL::Value<m6weVal,m6weVal::v0> v0{};
            constexpr MPL::Value<m6weVal,m6weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,m6weVal> m6we{}; 
        ///Bus Master 6 Read Enable
        enum class m6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        namespace m6reValC{
            constexpr MPL::Value<m6reVal,m6reVal::v0> v0{};
            constexpr MPL::Value<m6reVal,m6reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,m6reVal> m6re{}; 
        ///Bus Master 7 Write Enable
        enum class m7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        namespace m7weValC{
            constexpr MPL::Value<m7weVal,m7weVal::v0> v0{};
            constexpr MPL::Value<m7weVal,m7weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,m7weVal> m7we{}; 
        ///Bus Master 7 Read Enable
        enum class m7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        namespace m7reValC{
            constexpr MPL::Value<m7reVal,m7reVal::v0> v0{};
            constexpr MPL::Value<m7reVal,m7reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,m7reVal> m7re{}; 
    }
    namespace MpuRgd2Word2{    ///<Region Descriptor n, Word 2
        using Addr = Register::Address<0x4000d428,0x00820820,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 2 User Mode Access control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class m3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        namespace m3smValC{
            constexpr MPL::Value<m3smVal,m3smVal::v00> v00{};
            constexpr MPL::Value<m3smVal,m3smVal::v01> v01{};
            constexpr MPL::Value<m3smVal,m3smVal::v10> v10{};
            constexpr MPL::Value<m3smVal,m3smVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,m3smVal> m3sm{}; 
        ///Bus Master 4 Write Enable
        enum class m4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        namespace m4weValC{
            constexpr MPL::Value<m4weVal,m4weVal::v0> v0{};
            constexpr MPL::Value<m4weVal,m4weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,m4weVal> m4we{}; 
        ///Bus Master 4 Read Enable
        enum class m4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        namespace m4reValC{
            constexpr MPL::Value<m4reVal,m4reVal::v0> v0{};
            constexpr MPL::Value<m4reVal,m4reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,m4reVal> m4re{}; 
        ///Bus Master 5 Write Enable
        enum class m5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        namespace m5weValC{
            constexpr MPL::Value<m5weVal,m5weVal::v0> v0{};
            constexpr MPL::Value<m5weVal,m5weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,m5weVal> m5we{}; 
        ///Bus Master 5 Read Enable
        enum class m5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        namespace m5reValC{
            constexpr MPL::Value<m5reVal,m5reVal::v0> v0{};
            constexpr MPL::Value<m5reVal,m5reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,m5reVal> m5re{}; 
        ///Bus Master 6 Write Enable
        enum class m6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        namespace m6weValC{
            constexpr MPL::Value<m6weVal,m6weVal::v0> v0{};
            constexpr MPL::Value<m6weVal,m6weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,m6weVal> m6we{}; 
        ///Bus Master 6 Read Enable
        enum class m6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        namespace m6reValC{
            constexpr MPL::Value<m6reVal,m6reVal::v0> v0{};
            constexpr MPL::Value<m6reVal,m6reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,m6reVal> m6re{}; 
        ///Bus Master 7 Write Enable
        enum class m7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        namespace m7weValC{
            constexpr MPL::Value<m7weVal,m7weVal::v0> v0{};
            constexpr MPL::Value<m7weVal,m7weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,m7weVal> m7we{}; 
        ///Bus Master 7 Read Enable
        enum class m7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        namespace m7reValC{
            constexpr MPL::Value<m7reVal,m7reVal::v0> v0{};
            constexpr MPL::Value<m7reVal,m7reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,m7reVal> m7re{}; 
    }
    namespace MpuRgd3Word2{    ///<Region Descriptor n, Word 2
        using Addr = Register::Address<0x4000d438,0x00820820,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 2 User Mode Access control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class m3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        namespace m3smValC{
            constexpr MPL::Value<m3smVal,m3smVal::v00> v00{};
            constexpr MPL::Value<m3smVal,m3smVal::v01> v01{};
            constexpr MPL::Value<m3smVal,m3smVal::v10> v10{};
            constexpr MPL::Value<m3smVal,m3smVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,m3smVal> m3sm{}; 
        ///Bus Master 4 Write Enable
        enum class m4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        namespace m4weValC{
            constexpr MPL::Value<m4weVal,m4weVal::v0> v0{};
            constexpr MPL::Value<m4weVal,m4weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,m4weVal> m4we{}; 
        ///Bus Master 4 Read Enable
        enum class m4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        namespace m4reValC{
            constexpr MPL::Value<m4reVal,m4reVal::v0> v0{};
            constexpr MPL::Value<m4reVal,m4reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,m4reVal> m4re{}; 
        ///Bus Master 5 Write Enable
        enum class m5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        namespace m5weValC{
            constexpr MPL::Value<m5weVal,m5weVal::v0> v0{};
            constexpr MPL::Value<m5weVal,m5weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,m5weVal> m5we{}; 
        ///Bus Master 5 Read Enable
        enum class m5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        namespace m5reValC{
            constexpr MPL::Value<m5reVal,m5reVal::v0> v0{};
            constexpr MPL::Value<m5reVal,m5reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,m5reVal> m5re{}; 
        ///Bus Master 6 Write Enable
        enum class m6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        namespace m6weValC{
            constexpr MPL::Value<m6weVal,m6weVal::v0> v0{};
            constexpr MPL::Value<m6weVal,m6weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,m6weVal> m6we{}; 
        ///Bus Master 6 Read Enable
        enum class m6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        namespace m6reValC{
            constexpr MPL::Value<m6reVal,m6reVal::v0> v0{};
            constexpr MPL::Value<m6reVal,m6reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,m6reVal> m6re{}; 
        ///Bus Master 7 Write Enable
        enum class m7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        namespace m7weValC{
            constexpr MPL::Value<m7weVal,m7weVal::v0> v0{};
            constexpr MPL::Value<m7weVal,m7weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,m7weVal> m7we{}; 
        ///Bus Master 7 Read Enable
        enum class m7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        namespace m7reValC{
            constexpr MPL::Value<m7reVal,m7reVal::v0> v0{};
            constexpr MPL::Value<m7reVal,m7reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,m7reVal> m7re{}; 
    }
    namespace MpuRgd4Word2{    ///<Region Descriptor n, Word 2
        using Addr = Register::Address<0x4000d448,0x00820820,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 2 User Mode Access control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class m3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        namespace m3smValC{
            constexpr MPL::Value<m3smVal,m3smVal::v00> v00{};
            constexpr MPL::Value<m3smVal,m3smVal::v01> v01{};
            constexpr MPL::Value<m3smVal,m3smVal::v10> v10{};
            constexpr MPL::Value<m3smVal,m3smVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,m3smVal> m3sm{}; 
        ///Bus Master 4 Write Enable
        enum class m4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        namespace m4weValC{
            constexpr MPL::Value<m4weVal,m4weVal::v0> v0{};
            constexpr MPL::Value<m4weVal,m4weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,m4weVal> m4we{}; 
        ///Bus Master 4 Read Enable
        enum class m4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        namespace m4reValC{
            constexpr MPL::Value<m4reVal,m4reVal::v0> v0{};
            constexpr MPL::Value<m4reVal,m4reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,m4reVal> m4re{}; 
        ///Bus Master 5 Write Enable
        enum class m5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        namespace m5weValC{
            constexpr MPL::Value<m5weVal,m5weVal::v0> v0{};
            constexpr MPL::Value<m5weVal,m5weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,m5weVal> m5we{}; 
        ///Bus Master 5 Read Enable
        enum class m5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        namespace m5reValC{
            constexpr MPL::Value<m5reVal,m5reVal::v0> v0{};
            constexpr MPL::Value<m5reVal,m5reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,m5reVal> m5re{}; 
        ///Bus Master 6 Write Enable
        enum class m6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        namespace m6weValC{
            constexpr MPL::Value<m6weVal,m6weVal::v0> v0{};
            constexpr MPL::Value<m6weVal,m6weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,m6weVal> m6we{}; 
        ///Bus Master 6 Read Enable
        enum class m6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        namespace m6reValC{
            constexpr MPL::Value<m6reVal,m6reVal::v0> v0{};
            constexpr MPL::Value<m6reVal,m6reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,m6reVal> m6re{}; 
        ///Bus Master 7 Write Enable
        enum class m7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        namespace m7weValC{
            constexpr MPL::Value<m7weVal,m7weVal::v0> v0{};
            constexpr MPL::Value<m7weVal,m7weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,m7weVal> m7we{}; 
        ///Bus Master 7 Read Enable
        enum class m7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        namespace m7reValC{
            constexpr MPL::Value<m7reVal,m7reVal::v0> v0{};
            constexpr MPL::Value<m7reVal,m7reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,m7reVal> m7re{}; 
    }
    namespace MpuRgd5Word2{    ///<Region Descriptor n, Word 2
        using Addr = Register::Address<0x4000d458,0x00820820,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 2 User Mode Access control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class m3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        namespace m3smValC{
            constexpr MPL::Value<m3smVal,m3smVal::v00> v00{};
            constexpr MPL::Value<m3smVal,m3smVal::v01> v01{};
            constexpr MPL::Value<m3smVal,m3smVal::v10> v10{};
            constexpr MPL::Value<m3smVal,m3smVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,m3smVal> m3sm{}; 
        ///Bus Master 4 Write Enable
        enum class m4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        namespace m4weValC{
            constexpr MPL::Value<m4weVal,m4weVal::v0> v0{};
            constexpr MPL::Value<m4weVal,m4weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,m4weVal> m4we{}; 
        ///Bus Master 4 Read Enable
        enum class m4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        namespace m4reValC{
            constexpr MPL::Value<m4reVal,m4reVal::v0> v0{};
            constexpr MPL::Value<m4reVal,m4reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,m4reVal> m4re{}; 
        ///Bus Master 5 Write Enable
        enum class m5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        namespace m5weValC{
            constexpr MPL::Value<m5weVal,m5weVal::v0> v0{};
            constexpr MPL::Value<m5weVal,m5weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,m5weVal> m5we{}; 
        ///Bus Master 5 Read Enable
        enum class m5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        namespace m5reValC{
            constexpr MPL::Value<m5reVal,m5reVal::v0> v0{};
            constexpr MPL::Value<m5reVal,m5reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,m5reVal> m5re{}; 
        ///Bus Master 6 Write Enable
        enum class m6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        namespace m6weValC{
            constexpr MPL::Value<m6weVal,m6weVal::v0> v0{};
            constexpr MPL::Value<m6weVal,m6weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,m6weVal> m6we{}; 
        ///Bus Master 6 Read Enable
        enum class m6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        namespace m6reValC{
            constexpr MPL::Value<m6reVal,m6reVal::v0> v0{};
            constexpr MPL::Value<m6reVal,m6reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,m6reVal> m6re{}; 
        ///Bus Master 7 Write Enable
        enum class m7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        namespace m7weValC{
            constexpr MPL::Value<m7weVal,m7weVal::v0> v0{};
            constexpr MPL::Value<m7weVal,m7weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,m7weVal> m7we{}; 
        ///Bus Master 7 Read Enable
        enum class m7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        namespace m7reValC{
            constexpr MPL::Value<m7reVal,m7reVal::v0> v0{};
            constexpr MPL::Value<m7reVal,m7reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,m7reVal> m7re{}; 
    }
    namespace MpuRgd6Word2{    ///<Region Descriptor n, Word 2
        using Addr = Register::Address<0x4000d468,0x00820820,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 2 User Mode Access control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class m3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        namespace m3smValC{
            constexpr MPL::Value<m3smVal,m3smVal::v00> v00{};
            constexpr MPL::Value<m3smVal,m3smVal::v01> v01{};
            constexpr MPL::Value<m3smVal,m3smVal::v10> v10{};
            constexpr MPL::Value<m3smVal,m3smVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,m3smVal> m3sm{}; 
        ///Bus Master 4 Write Enable
        enum class m4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        namespace m4weValC{
            constexpr MPL::Value<m4weVal,m4weVal::v0> v0{};
            constexpr MPL::Value<m4weVal,m4weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,m4weVal> m4we{}; 
        ///Bus Master 4 Read Enable
        enum class m4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        namespace m4reValC{
            constexpr MPL::Value<m4reVal,m4reVal::v0> v0{};
            constexpr MPL::Value<m4reVal,m4reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,m4reVal> m4re{}; 
        ///Bus Master 5 Write Enable
        enum class m5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        namespace m5weValC{
            constexpr MPL::Value<m5weVal,m5weVal::v0> v0{};
            constexpr MPL::Value<m5weVal,m5weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,m5weVal> m5we{}; 
        ///Bus Master 5 Read Enable
        enum class m5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        namespace m5reValC{
            constexpr MPL::Value<m5reVal,m5reVal::v0> v0{};
            constexpr MPL::Value<m5reVal,m5reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,m5reVal> m5re{}; 
        ///Bus Master 6 Write Enable
        enum class m6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        namespace m6weValC{
            constexpr MPL::Value<m6weVal,m6weVal::v0> v0{};
            constexpr MPL::Value<m6weVal,m6weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,m6weVal> m6we{}; 
        ///Bus Master 6 Read Enable
        enum class m6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        namespace m6reValC{
            constexpr MPL::Value<m6reVal,m6reVal::v0> v0{};
            constexpr MPL::Value<m6reVal,m6reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,m6reVal> m6re{}; 
        ///Bus Master 7 Write Enable
        enum class m7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        namespace m7weValC{
            constexpr MPL::Value<m7weVal,m7weVal::v0> v0{};
            constexpr MPL::Value<m7weVal,m7weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,m7weVal> m7we{}; 
        ///Bus Master 7 Read Enable
        enum class m7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        namespace m7reValC{
            constexpr MPL::Value<m7reVal,m7reVal::v0> v0{};
            constexpr MPL::Value<m7reVal,m7reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,m7reVal> m7re{}; 
    }
    namespace MpuRgd7Word2{    ///<Region Descriptor n, Word 2
        using Addr = Register::Address<0x4000d478,0x00820820,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 2 User Mode Access control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class m3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        namespace m3smValC{
            constexpr MPL::Value<m3smVal,m3smVal::v00> v00{};
            constexpr MPL::Value<m3smVal,m3smVal::v01> v01{};
            constexpr MPL::Value<m3smVal,m3smVal::v10> v10{};
            constexpr MPL::Value<m3smVal,m3smVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,m3smVal> m3sm{}; 
        ///Bus Master 4 Write Enable
        enum class m4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        namespace m4weValC{
            constexpr MPL::Value<m4weVal,m4weVal::v0> v0{};
            constexpr MPL::Value<m4weVal,m4weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,m4weVal> m4we{}; 
        ///Bus Master 4 Read Enable
        enum class m4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        namespace m4reValC{
            constexpr MPL::Value<m4reVal,m4reVal::v0> v0{};
            constexpr MPL::Value<m4reVal,m4reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,m4reVal> m4re{}; 
        ///Bus Master 5 Write Enable
        enum class m5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        namespace m5weValC{
            constexpr MPL::Value<m5weVal,m5weVal::v0> v0{};
            constexpr MPL::Value<m5weVal,m5weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,m5weVal> m5we{}; 
        ///Bus Master 5 Read Enable
        enum class m5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        namespace m5reValC{
            constexpr MPL::Value<m5reVal,m5reVal::v0> v0{};
            constexpr MPL::Value<m5reVal,m5reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,m5reVal> m5re{}; 
        ///Bus Master 6 Write Enable
        enum class m6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        namespace m6weValC{
            constexpr MPL::Value<m6weVal,m6weVal::v0> v0{};
            constexpr MPL::Value<m6weVal,m6weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,m6weVal> m6we{}; 
        ///Bus Master 6 Read Enable
        enum class m6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        namespace m6reValC{
            constexpr MPL::Value<m6reVal,m6reVal::v0> v0{};
            constexpr MPL::Value<m6reVal,m6reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,m6reVal> m6re{}; 
        ///Bus Master 7 Write Enable
        enum class m7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        namespace m7weValC{
            constexpr MPL::Value<m7weVal,m7weVal::v0> v0{};
            constexpr MPL::Value<m7weVal,m7weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,m7weVal> m7we{}; 
        ///Bus Master 7 Read Enable
        enum class m7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        namespace m7reValC{
            constexpr MPL::Value<m7reVal,m7reVal::v0> v0{};
            constexpr MPL::Value<m7reVal,m7reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,m7reVal> m7re{}; 
    }
    namespace MpuRgd0Word3{    ///<Region Descriptor n, Word 3
        using Addr = Register::Address<0x4000d40c,0xfffffffe,0,unsigned>;
        ///Valid
        enum class vldVal {
            v0=0x00000000,     ///<Region descriptor is invalid
            v1=0x00000001,     ///<Region descriptor is valid
        };
        namespace vldValC{
            constexpr MPL::Value<vldVal,vldVal::v0> v0{};
            constexpr MPL::Value<vldVal,vldVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,vldVal> vld{}; 
    }
    namespace MpuRgd1Word3{    ///<Region Descriptor n, Word 3
        using Addr = Register::Address<0x4000d41c,0xfffffffe,0,unsigned>;
        ///Valid
        enum class vldVal {
            v0=0x00000000,     ///<Region descriptor is invalid
            v1=0x00000001,     ///<Region descriptor is valid
        };
        namespace vldValC{
            constexpr MPL::Value<vldVal,vldVal::v0> v0{};
            constexpr MPL::Value<vldVal,vldVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,vldVal> vld{}; 
    }
    namespace MpuRgd2Word3{    ///<Region Descriptor n, Word 3
        using Addr = Register::Address<0x4000d42c,0xfffffffe,0,unsigned>;
        ///Valid
        enum class vldVal {
            v0=0x00000000,     ///<Region descriptor is invalid
            v1=0x00000001,     ///<Region descriptor is valid
        };
        namespace vldValC{
            constexpr MPL::Value<vldVal,vldVal::v0> v0{};
            constexpr MPL::Value<vldVal,vldVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,vldVal> vld{}; 
    }
    namespace MpuRgd3Word3{    ///<Region Descriptor n, Word 3
        using Addr = Register::Address<0x4000d43c,0xfffffffe,0,unsigned>;
        ///Valid
        enum class vldVal {
            v0=0x00000000,     ///<Region descriptor is invalid
            v1=0x00000001,     ///<Region descriptor is valid
        };
        namespace vldValC{
            constexpr MPL::Value<vldVal,vldVal::v0> v0{};
            constexpr MPL::Value<vldVal,vldVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,vldVal> vld{}; 
    }
    namespace MpuRgd4Word3{    ///<Region Descriptor n, Word 3
        using Addr = Register::Address<0x4000d44c,0xfffffffe,0,unsigned>;
        ///Valid
        enum class vldVal {
            v0=0x00000000,     ///<Region descriptor is invalid
            v1=0x00000001,     ///<Region descriptor is valid
        };
        namespace vldValC{
            constexpr MPL::Value<vldVal,vldVal::v0> v0{};
            constexpr MPL::Value<vldVal,vldVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,vldVal> vld{}; 
    }
    namespace MpuRgd5Word3{    ///<Region Descriptor n, Word 3
        using Addr = Register::Address<0x4000d45c,0xfffffffe,0,unsigned>;
        ///Valid
        enum class vldVal {
            v0=0x00000000,     ///<Region descriptor is invalid
            v1=0x00000001,     ///<Region descriptor is valid
        };
        namespace vldValC{
            constexpr MPL::Value<vldVal,vldVal::v0> v0{};
            constexpr MPL::Value<vldVal,vldVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,vldVal> vld{}; 
    }
    namespace MpuRgd6Word3{    ///<Region Descriptor n, Word 3
        using Addr = Register::Address<0x4000d46c,0xfffffffe,0,unsigned>;
        ///Valid
        enum class vldVal {
            v0=0x00000000,     ///<Region descriptor is invalid
            v1=0x00000001,     ///<Region descriptor is valid
        };
        namespace vldValC{
            constexpr MPL::Value<vldVal,vldVal::v0> v0{};
            constexpr MPL::Value<vldVal,vldVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,vldVal> vld{}; 
    }
    namespace MpuRgd7Word3{    ///<Region Descriptor n, Word 3
        using Addr = Register::Address<0x4000d47c,0xfffffffe,0,unsigned>;
        ///Valid
        enum class vldVal {
            v0=0x00000000,     ///<Region descriptor is invalid
            v1=0x00000001,     ///<Region descriptor is valid
        };
        namespace vldValC{
            constexpr MPL::Value<vldVal,vldVal::v0> v0{};
            constexpr MPL::Value<vldVal,vldVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,vldVal> vld{}; 
    }
    namespace MpuRgdaac0{    ///<Region Descriptor Alternate Access Control n
        using Addr = Register::Address<0x4000d800,0x00820820,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 2 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class m3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        namespace m3smValC{
            constexpr MPL::Value<m3smVal,m3smVal::v00> v00{};
            constexpr MPL::Value<m3smVal,m3smVal::v01> v01{};
            constexpr MPL::Value<m3smVal,m3smVal::v10> v10{};
            constexpr MPL::Value<m3smVal,m3smVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,m3smVal> m3sm{}; 
        ///Bus Master 4 Write Enable
        enum class m4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        namespace m4weValC{
            constexpr MPL::Value<m4weVal,m4weVal::v0> v0{};
            constexpr MPL::Value<m4weVal,m4weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,m4weVal> m4we{}; 
        ///Bus Master 4 Read Enable
        enum class m4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        namespace m4reValC{
            constexpr MPL::Value<m4reVal,m4reVal::v0> v0{};
            constexpr MPL::Value<m4reVal,m4reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,m4reVal> m4re{}; 
        ///Bus Master 5 Write Enable
        enum class m5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        namespace m5weValC{
            constexpr MPL::Value<m5weVal,m5weVal::v0> v0{};
            constexpr MPL::Value<m5weVal,m5weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,m5weVal> m5we{}; 
        ///Bus Master 5 Read Enable
        enum class m5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        namespace m5reValC{
            constexpr MPL::Value<m5reVal,m5reVal::v0> v0{};
            constexpr MPL::Value<m5reVal,m5reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,m5reVal> m5re{}; 
        ///Bus Master 6 Write Enable
        enum class m6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        namespace m6weValC{
            constexpr MPL::Value<m6weVal,m6weVal::v0> v0{};
            constexpr MPL::Value<m6weVal,m6weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,m6weVal> m6we{}; 
        ///Bus Master 6 Read Enable
        enum class m6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        namespace m6reValC{
            constexpr MPL::Value<m6reVal,m6reVal::v0> v0{};
            constexpr MPL::Value<m6reVal,m6reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,m6reVal> m6re{}; 
        ///Bus Master 7 Write Enable
        enum class m7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        namespace m7weValC{
            constexpr MPL::Value<m7weVal,m7weVal::v0> v0{};
            constexpr MPL::Value<m7weVal,m7weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,m7weVal> m7we{}; 
        ///Bus Master 7 Read Enable
        enum class m7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        namespace m7reValC{
            constexpr MPL::Value<m7reVal,m7reVal::v0> v0{};
            constexpr MPL::Value<m7reVal,m7reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,m7reVal> m7re{}; 
    }
    namespace MpuRgdaac1{    ///<Region Descriptor Alternate Access Control n
        using Addr = Register::Address<0x4000d804,0x00820820,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 2 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class m3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        namespace m3smValC{
            constexpr MPL::Value<m3smVal,m3smVal::v00> v00{};
            constexpr MPL::Value<m3smVal,m3smVal::v01> v01{};
            constexpr MPL::Value<m3smVal,m3smVal::v10> v10{};
            constexpr MPL::Value<m3smVal,m3smVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,m3smVal> m3sm{}; 
        ///Bus Master 4 Write Enable
        enum class m4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        namespace m4weValC{
            constexpr MPL::Value<m4weVal,m4weVal::v0> v0{};
            constexpr MPL::Value<m4weVal,m4weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,m4weVal> m4we{}; 
        ///Bus Master 4 Read Enable
        enum class m4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        namespace m4reValC{
            constexpr MPL::Value<m4reVal,m4reVal::v0> v0{};
            constexpr MPL::Value<m4reVal,m4reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,m4reVal> m4re{}; 
        ///Bus Master 5 Write Enable
        enum class m5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        namespace m5weValC{
            constexpr MPL::Value<m5weVal,m5weVal::v0> v0{};
            constexpr MPL::Value<m5weVal,m5weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,m5weVal> m5we{}; 
        ///Bus Master 5 Read Enable
        enum class m5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        namespace m5reValC{
            constexpr MPL::Value<m5reVal,m5reVal::v0> v0{};
            constexpr MPL::Value<m5reVal,m5reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,m5reVal> m5re{}; 
        ///Bus Master 6 Write Enable
        enum class m6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        namespace m6weValC{
            constexpr MPL::Value<m6weVal,m6weVal::v0> v0{};
            constexpr MPL::Value<m6weVal,m6weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,m6weVal> m6we{}; 
        ///Bus Master 6 Read Enable
        enum class m6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        namespace m6reValC{
            constexpr MPL::Value<m6reVal,m6reVal::v0> v0{};
            constexpr MPL::Value<m6reVal,m6reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,m6reVal> m6re{}; 
        ///Bus Master 7 Write Enable
        enum class m7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        namespace m7weValC{
            constexpr MPL::Value<m7weVal,m7weVal::v0> v0{};
            constexpr MPL::Value<m7weVal,m7weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,m7weVal> m7we{}; 
        ///Bus Master 7 Read Enable
        enum class m7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        namespace m7reValC{
            constexpr MPL::Value<m7reVal,m7reVal::v0> v0{};
            constexpr MPL::Value<m7reVal,m7reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,m7reVal> m7re{}; 
    }
    namespace MpuRgdaac2{    ///<Region Descriptor Alternate Access Control n
        using Addr = Register::Address<0x4000d808,0x00820820,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 2 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class m3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        namespace m3smValC{
            constexpr MPL::Value<m3smVal,m3smVal::v00> v00{};
            constexpr MPL::Value<m3smVal,m3smVal::v01> v01{};
            constexpr MPL::Value<m3smVal,m3smVal::v10> v10{};
            constexpr MPL::Value<m3smVal,m3smVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,m3smVal> m3sm{}; 
        ///Bus Master 4 Write Enable
        enum class m4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        namespace m4weValC{
            constexpr MPL::Value<m4weVal,m4weVal::v0> v0{};
            constexpr MPL::Value<m4weVal,m4weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,m4weVal> m4we{}; 
        ///Bus Master 4 Read Enable
        enum class m4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        namespace m4reValC{
            constexpr MPL::Value<m4reVal,m4reVal::v0> v0{};
            constexpr MPL::Value<m4reVal,m4reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,m4reVal> m4re{}; 
        ///Bus Master 5 Write Enable
        enum class m5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        namespace m5weValC{
            constexpr MPL::Value<m5weVal,m5weVal::v0> v0{};
            constexpr MPL::Value<m5weVal,m5weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,m5weVal> m5we{}; 
        ///Bus Master 5 Read Enable
        enum class m5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        namespace m5reValC{
            constexpr MPL::Value<m5reVal,m5reVal::v0> v0{};
            constexpr MPL::Value<m5reVal,m5reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,m5reVal> m5re{}; 
        ///Bus Master 6 Write Enable
        enum class m6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        namespace m6weValC{
            constexpr MPL::Value<m6weVal,m6weVal::v0> v0{};
            constexpr MPL::Value<m6weVal,m6weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,m6weVal> m6we{}; 
        ///Bus Master 6 Read Enable
        enum class m6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        namespace m6reValC{
            constexpr MPL::Value<m6reVal,m6reVal::v0> v0{};
            constexpr MPL::Value<m6reVal,m6reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,m6reVal> m6re{}; 
        ///Bus Master 7 Write Enable
        enum class m7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        namespace m7weValC{
            constexpr MPL::Value<m7weVal,m7weVal::v0> v0{};
            constexpr MPL::Value<m7weVal,m7weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,m7weVal> m7we{}; 
        ///Bus Master 7 Read Enable
        enum class m7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        namespace m7reValC{
            constexpr MPL::Value<m7reVal,m7reVal::v0> v0{};
            constexpr MPL::Value<m7reVal,m7reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,m7reVal> m7re{}; 
    }
    namespace MpuRgdaac3{    ///<Region Descriptor Alternate Access Control n
        using Addr = Register::Address<0x4000d80c,0x00820820,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 2 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class m3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        namespace m3smValC{
            constexpr MPL::Value<m3smVal,m3smVal::v00> v00{};
            constexpr MPL::Value<m3smVal,m3smVal::v01> v01{};
            constexpr MPL::Value<m3smVal,m3smVal::v10> v10{};
            constexpr MPL::Value<m3smVal,m3smVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,m3smVal> m3sm{}; 
        ///Bus Master 4 Write Enable
        enum class m4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        namespace m4weValC{
            constexpr MPL::Value<m4weVal,m4weVal::v0> v0{};
            constexpr MPL::Value<m4weVal,m4weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,m4weVal> m4we{}; 
        ///Bus Master 4 Read Enable
        enum class m4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        namespace m4reValC{
            constexpr MPL::Value<m4reVal,m4reVal::v0> v0{};
            constexpr MPL::Value<m4reVal,m4reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,m4reVal> m4re{}; 
        ///Bus Master 5 Write Enable
        enum class m5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        namespace m5weValC{
            constexpr MPL::Value<m5weVal,m5weVal::v0> v0{};
            constexpr MPL::Value<m5weVal,m5weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,m5weVal> m5we{}; 
        ///Bus Master 5 Read Enable
        enum class m5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        namespace m5reValC{
            constexpr MPL::Value<m5reVal,m5reVal::v0> v0{};
            constexpr MPL::Value<m5reVal,m5reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,m5reVal> m5re{}; 
        ///Bus Master 6 Write Enable
        enum class m6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        namespace m6weValC{
            constexpr MPL::Value<m6weVal,m6weVal::v0> v0{};
            constexpr MPL::Value<m6weVal,m6weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,m6weVal> m6we{}; 
        ///Bus Master 6 Read Enable
        enum class m6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        namespace m6reValC{
            constexpr MPL::Value<m6reVal,m6reVal::v0> v0{};
            constexpr MPL::Value<m6reVal,m6reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,m6reVal> m6re{}; 
        ///Bus Master 7 Write Enable
        enum class m7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        namespace m7weValC{
            constexpr MPL::Value<m7weVal,m7weVal::v0> v0{};
            constexpr MPL::Value<m7weVal,m7weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,m7weVal> m7we{}; 
        ///Bus Master 7 Read Enable
        enum class m7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        namespace m7reValC{
            constexpr MPL::Value<m7reVal,m7reVal::v0> v0{};
            constexpr MPL::Value<m7reVal,m7reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,m7reVal> m7re{}; 
    }
    namespace MpuRgdaac4{    ///<Region Descriptor Alternate Access Control n
        using Addr = Register::Address<0x4000d810,0x00820820,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 2 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class m3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        namespace m3smValC{
            constexpr MPL::Value<m3smVal,m3smVal::v00> v00{};
            constexpr MPL::Value<m3smVal,m3smVal::v01> v01{};
            constexpr MPL::Value<m3smVal,m3smVal::v10> v10{};
            constexpr MPL::Value<m3smVal,m3smVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,m3smVal> m3sm{}; 
        ///Bus Master 4 Write Enable
        enum class m4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        namespace m4weValC{
            constexpr MPL::Value<m4weVal,m4weVal::v0> v0{};
            constexpr MPL::Value<m4weVal,m4weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,m4weVal> m4we{}; 
        ///Bus Master 4 Read Enable
        enum class m4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        namespace m4reValC{
            constexpr MPL::Value<m4reVal,m4reVal::v0> v0{};
            constexpr MPL::Value<m4reVal,m4reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,m4reVal> m4re{}; 
        ///Bus Master 5 Write Enable
        enum class m5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        namespace m5weValC{
            constexpr MPL::Value<m5weVal,m5weVal::v0> v0{};
            constexpr MPL::Value<m5weVal,m5weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,m5weVal> m5we{}; 
        ///Bus Master 5 Read Enable
        enum class m5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        namespace m5reValC{
            constexpr MPL::Value<m5reVal,m5reVal::v0> v0{};
            constexpr MPL::Value<m5reVal,m5reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,m5reVal> m5re{}; 
        ///Bus Master 6 Write Enable
        enum class m6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        namespace m6weValC{
            constexpr MPL::Value<m6weVal,m6weVal::v0> v0{};
            constexpr MPL::Value<m6weVal,m6weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,m6weVal> m6we{}; 
        ///Bus Master 6 Read Enable
        enum class m6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        namespace m6reValC{
            constexpr MPL::Value<m6reVal,m6reVal::v0> v0{};
            constexpr MPL::Value<m6reVal,m6reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,m6reVal> m6re{}; 
        ///Bus Master 7 Write Enable
        enum class m7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        namespace m7weValC{
            constexpr MPL::Value<m7weVal,m7weVal::v0> v0{};
            constexpr MPL::Value<m7weVal,m7weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,m7weVal> m7we{}; 
        ///Bus Master 7 Read Enable
        enum class m7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        namespace m7reValC{
            constexpr MPL::Value<m7reVal,m7reVal::v0> v0{};
            constexpr MPL::Value<m7reVal,m7reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,m7reVal> m7re{}; 
    }
    namespace MpuRgdaac5{    ///<Region Descriptor Alternate Access Control n
        using Addr = Register::Address<0x4000d814,0x00820820,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 2 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class m3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        namespace m3smValC{
            constexpr MPL::Value<m3smVal,m3smVal::v00> v00{};
            constexpr MPL::Value<m3smVal,m3smVal::v01> v01{};
            constexpr MPL::Value<m3smVal,m3smVal::v10> v10{};
            constexpr MPL::Value<m3smVal,m3smVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,m3smVal> m3sm{}; 
        ///Bus Master 4 Write Enable
        enum class m4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        namespace m4weValC{
            constexpr MPL::Value<m4weVal,m4weVal::v0> v0{};
            constexpr MPL::Value<m4weVal,m4weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,m4weVal> m4we{}; 
        ///Bus Master 4 Read Enable
        enum class m4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        namespace m4reValC{
            constexpr MPL::Value<m4reVal,m4reVal::v0> v0{};
            constexpr MPL::Value<m4reVal,m4reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,m4reVal> m4re{}; 
        ///Bus Master 5 Write Enable
        enum class m5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        namespace m5weValC{
            constexpr MPL::Value<m5weVal,m5weVal::v0> v0{};
            constexpr MPL::Value<m5weVal,m5weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,m5weVal> m5we{}; 
        ///Bus Master 5 Read Enable
        enum class m5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        namespace m5reValC{
            constexpr MPL::Value<m5reVal,m5reVal::v0> v0{};
            constexpr MPL::Value<m5reVal,m5reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,m5reVal> m5re{}; 
        ///Bus Master 6 Write Enable
        enum class m6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        namespace m6weValC{
            constexpr MPL::Value<m6weVal,m6weVal::v0> v0{};
            constexpr MPL::Value<m6weVal,m6weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,m6weVal> m6we{}; 
        ///Bus Master 6 Read Enable
        enum class m6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        namespace m6reValC{
            constexpr MPL::Value<m6reVal,m6reVal::v0> v0{};
            constexpr MPL::Value<m6reVal,m6reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,m6reVal> m6re{}; 
        ///Bus Master 7 Write Enable
        enum class m7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        namespace m7weValC{
            constexpr MPL::Value<m7weVal,m7weVal::v0> v0{};
            constexpr MPL::Value<m7weVal,m7weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,m7weVal> m7we{}; 
        ///Bus Master 7 Read Enable
        enum class m7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        namespace m7reValC{
            constexpr MPL::Value<m7reVal,m7reVal::v0> v0{};
            constexpr MPL::Value<m7reVal,m7reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,m7reVal> m7re{}; 
    }
    namespace MpuRgdaac6{    ///<Region Descriptor Alternate Access Control n
        using Addr = Register::Address<0x4000d818,0x00820820,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 2 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class m3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        namespace m3smValC{
            constexpr MPL::Value<m3smVal,m3smVal::v00> v00{};
            constexpr MPL::Value<m3smVal,m3smVal::v01> v01{};
            constexpr MPL::Value<m3smVal,m3smVal::v10> v10{};
            constexpr MPL::Value<m3smVal,m3smVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,m3smVal> m3sm{}; 
        ///Bus Master 4 Write Enable
        enum class m4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        namespace m4weValC{
            constexpr MPL::Value<m4weVal,m4weVal::v0> v0{};
            constexpr MPL::Value<m4weVal,m4weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,m4weVal> m4we{}; 
        ///Bus Master 4 Read Enable
        enum class m4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        namespace m4reValC{
            constexpr MPL::Value<m4reVal,m4reVal::v0> v0{};
            constexpr MPL::Value<m4reVal,m4reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,m4reVal> m4re{}; 
        ///Bus Master 5 Write Enable
        enum class m5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        namespace m5weValC{
            constexpr MPL::Value<m5weVal,m5weVal::v0> v0{};
            constexpr MPL::Value<m5weVal,m5weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,m5weVal> m5we{}; 
        ///Bus Master 5 Read Enable
        enum class m5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        namespace m5reValC{
            constexpr MPL::Value<m5reVal,m5reVal::v0> v0{};
            constexpr MPL::Value<m5reVal,m5reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,m5reVal> m5re{}; 
        ///Bus Master 6 Write Enable
        enum class m6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        namespace m6weValC{
            constexpr MPL::Value<m6weVal,m6weVal::v0> v0{};
            constexpr MPL::Value<m6weVal,m6weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,m6weVal> m6we{}; 
        ///Bus Master 6 Read Enable
        enum class m6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        namespace m6reValC{
            constexpr MPL::Value<m6reVal,m6reVal::v0> v0{};
            constexpr MPL::Value<m6reVal,m6reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,m6reVal> m6re{}; 
        ///Bus Master 7 Write Enable
        enum class m7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        namespace m7weValC{
            constexpr MPL::Value<m7weVal,m7weVal::v0> v0{};
            constexpr MPL::Value<m7weVal,m7weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,m7weVal> m7we{}; 
        ///Bus Master 7 Read Enable
        enum class m7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        namespace m7reValC{
            constexpr MPL::Value<m7reVal,m7reVal::v0> v0{};
            constexpr MPL::Value<m7reVal,m7reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,m7reVal> m7re{}; 
    }
    namespace MpuRgdaac7{    ///<Region Descriptor Alternate Access Control n
        using Addr = Register::Address<0x4000d81c,0x00820820,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 2 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class m3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        namespace m3smValC{
            constexpr MPL::Value<m3smVal,m3smVal::v00> v00{};
            constexpr MPL::Value<m3smVal,m3smVal::v01> v01{};
            constexpr MPL::Value<m3smVal,m3smVal::v10> v10{};
            constexpr MPL::Value<m3smVal,m3smVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,m3smVal> m3sm{}; 
        ///Bus Master 4 Write Enable
        enum class m4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        namespace m4weValC{
            constexpr MPL::Value<m4weVal,m4weVal::v0> v0{};
            constexpr MPL::Value<m4weVal,m4weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,m4weVal> m4we{}; 
        ///Bus Master 4 Read Enable
        enum class m4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        namespace m4reValC{
            constexpr MPL::Value<m4reVal,m4reVal::v0> v0{};
            constexpr MPL::Value<m4reVal,m4reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,m4reVal> m4re{}; 
        ///Bus Master 5 Write Enable
        enum class m5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        namespace m5weValC{
            constexpr MPL::Value<m5weVal,m5weVal::v0> v0{};
            constexpr MPL::Value<m5weVal,m5weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,m5weVal> m5we{}; 
        ///Bus Master 5 Read Enable
        enum class m5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        namespace m5reValC{
            constexpr MPL::Value<m5reVal,m5reVal::v0> v0{};
            constexpr MPL::Value<m5reVal,m5reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,m5reVal> m5re{}; 
        ///Bus Master 6 Write Enable
        enum class m6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        namespace m6weValC{
            constexpr MPL::Value<m6weVal,m6weVal::v0> v0{};
            constexpr MPL::Value<m6weVal,m6weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,m6weVal> m6we{}; 
        ///Bus Master 6 Read Enable
        enum class m6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        namespace m6reValC{
            constexpr MPL::Value<m6reVal,m6reVal::v0> v0{};
            constexpr MPL::Value<m6reVal,m6reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,m6reVal> m6re{}; 
        ///Bus Master 7 Write Enable
        enum class m7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        namespace m7weValC{
            constexpr MPL::Value<m7weVal,m7weVal::v0> v0{};
            constexpr MPL::Value<m7weVal,m7weVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,m7weVal> m7we{}; 
        ///Bus Master 7 Read Enable
        enum class m7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        namespace m7reValC{
            constexpr MPL::Value<m7reVal,m7reVal::v0> v0{};
            constexpr MPL::Value<m7reVal,m7reVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,m7reVal> m7re{}; 
    }
}
