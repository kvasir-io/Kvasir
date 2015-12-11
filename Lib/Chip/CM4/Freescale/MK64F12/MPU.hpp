#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Memory protection unit
    namespace MpuCesr{    ///<Control/Error Status Register
        using Addr = Register::Address<0x4000d000,0x07f000fe,0,unsigned>;
        ///Valid
        enum class VldVal {
            v0=0x00000000,     ///<MPU is disabled. All accesses from all bus masters are allowed.
            v1=0x00000001,     ///<MPU is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,VldVal> vld{}; 
        namespace VldValC{
            constexpr Register::FieldValue<decltype(vld)::Type,VldVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vld)::Type,VldVal::v1> v1{};
        }
        ///Number Of Region Descriptors
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> nrgd{}; 
        ///Number Of Slave Ports
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> nsp{}; 
        ///Hardware Revision Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> hrl{}; 
        ///Slave Port n Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,27),Register::ReadWriteAccess,unsigned> sperr{}; 
    }
    namespace MpuEar0{    ///<Error Address Register, slave port n
        using Addr = Register::Address<0x4000d010,0x00000000,0,unsigned>;
        ///Error Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> eaddr{}; 
    }
    namespace MpuEar1{    ///<Error Address Register, slave port n
        using Addr = Register::Address<0x4000d018,0x00000000,0,unsigned>;
        ///Error Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> eaddr{}; 
    }
    namespace MpuEar2{    ///<Error Address Register, slave port n
        using Addr = Register::Address<0x4000d020,0x00000000,0,unsigned>;
        ///Error Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> eaddr{}; 
    }
    namespace MpuEar3{    ///<Error Address Register, slave port n
        using Addr = Register::Address<0x4000d028,0x00000000,0,unsigned>;
        ///Error Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> eaddr{}; 
    }
    namespace MpuEar4{    ///<Error Address Register, slave port n
        using Addr = Register::Address<0x4000d030,0x00000000,0,unsigned>;
        ///Error Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> eaddr{}; 
    }
    namespace MpuEdr0{    ///<Error Detail Register, slave port n
        using Addr = Register::Address<0x4000d014,0x00000000,0,unsigned>;
        ///Error Read/Write
        enum class ErwVal {
            v0=0x00000000,     ///<Read
            v1=0x00000001,     ///<Write
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ErwVal> erw{}; 
        namespace ErwValC{
            constexpr Register::FieldValue<decltype(erw)::Type,ErwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(erw)::Type,ErwVal::v1> v1{};
        }
        ///Error Attributes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> eattr{}; 
        ///Error Master Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> emn{}; 
        ///Error Process Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> epid{}; 
        ///Error Access Control Detail
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> eacd{}; 
    }
    namespace MpuEdr1{    ///<Error Detail Register, slave port n
        using Addr = Register::Address<0x4000d01c,0x00000000,0,unsigned>;
        ///Error Read/Write
        enum class ErwVal {
            v0=0x00000000,     ///<Read
            v1=0x00000001,     ///<Write
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ErwVal> erw{}; 
        namespace ErwValC{
            constexpr Register::FieldValue<decltype(erw)::Type,ErwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(erw)::Type,ErwVal::v1> v1{};
        }
        ///Error Attributes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> eattr{}; 
        ///Error Master Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> emn{}; 
        ///Error Process Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> epid{}; 
        ///Error Access Control Detail
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> eacd{}; 
    }
    namespace MpuEdr2{    ///<Error Detail Register, slave port n
        using Addr = Register::Address<0x4000d024,0x00000000,0,unsigned>;
        ///Error Read/Write
        enum class ErwVal {
            v0=0x00000000,     ///<Read
            v1=0x00000001,     ///<Write
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ErwVal> erw{}; 
        namespace ErwValC{
            constexpr Register::FieldValue<decltype(erw)::Type,ErwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(erw)::Type,ErwVal::v1> v1{};
        }
        ///Error Attributes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> eattr{}; 
        ///Error Master Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> emn{}; 
        ///Error Process Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> epid{}; 
        ///Error Access Control Detail
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> eacd{}; 
    }
    namespace MpuEdr3{    ///<Error Detail Register, slave port n
        using Addr = Register::Address<0x4000d02c,0x00000000,0,unsigned>;
        ///Error Read/Write
        enum class ErwVal {
            v0=0x00000000,     ///<Read
            v1=0x00000001,     ///<Write
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ErwVal> erw{}; 
        namespace ErwValC{
            constexpr Register::FieldValue<decltype(erw)::Type,ErwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(erw)::Type,ErwVal::v1> v1{};
        }
        ///Error Attributes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> eattr{}; 
        ///Error Master Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> emn{}; 
        ///Error Process Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> epid{}; 
        ///Error Access Control Detail
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> eacd{}; 
    }
    namespace MpuEdr4{    ///<Error Detail Register, slave port n
        using Addr = Register::Address<0x4000d034,0x00000000,0,unsigned>;
        ///Error Read/Write
        enum class ErwVal {
            v0=0x00000000,     ///<Read
            v1=0x00000001,     ///<Write
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ErwVal> erw{}; 
        namespace ErwValC{
            constexpr Register::FieldValue<decltype(erw)::Type,ErwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(erw)::Type,ErwVal::v1> v1{};
        }
        ///Error Attributes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> eattr{}; 
        ///Error Master Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> emn{}; 
        ///Error Process Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> epid{}; 
        ///Error Access Control Detail
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> eacd{}; 
    }
    namespace MpuRgd0Word0{    ///<Region Descriptor n, Word 0
        using Addr = Register::Address<0x4000d400,0x0000001f,0,unsigned>;
        ///Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> srtaddr{}; 
    }
    namespace MpuRgd1Word0{    ///<Region Descriptor n, Word 0
        using Addr = Register::Address<0x4000d410,0x0000001f,0,unsigned>;
        ///Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> srtaddr{}; 
    }
    namespace MpuRgd2Word0{    ///<Region Descriptor n, Word 0
        using Addr = Register::Address<0x4000d420,0x0000001f,0,unsigned>;
        ///Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> srtaddr{}; 
    }
    namespace MpuRgd3Word0{    ///<Region Descriptor n, Word 0
        using Addr = Register::Address<0x4000d430,0x0000001f,0,unsigned>;
        ///Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> srtaddr{}; 
    }
    namespace MpuRgd4Word0{    ///<Region Descriptor n, Word 0
        using Addr = Register::Address<0x4000d440,0x0000001f,0,unsigned>;
        ///Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> srtaddr{}; 
    }
    namespace MpuRgd5Word0{    ///<Region Descriptor n, Word 0
        using Addr = Register::Address<0x4000d450,0x0000001f,0,unsigned>;
        ///Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> srtaddr{}; 
    }
    namespace MpuRgd6Word0{    ///<Region Descriptor n, Word 0
        using Addr = Register::Address<0x4000d460,0x0000001f,0,unsigned>;
        ///Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> srtaddr{}; 
    }
    namespace MpuRgd7Word0{    ///<Region Descriptor n, Word 0
        using Addr = Register::Address<0x4000d470,0x0000001f,0,unsigned>;
        ///Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> srtaddr{}; 
    }
    namespace MpuRgd8Word0{    ///<Region Descriptor n, Word 0
        using Addr = Register::Address<0x4000d480,0x0000001f,0,unsigned>;
        ///Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> srtaddr{}; 
    }
    namespace MpuRgd9Word0{    ///<Region Descriptor n, Word 0
        using Addr = Register::Address<0x4000d490,0x0000001f,0,unsigned>;
        ///Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> srtaddr{}; 
    }
    namespace MpuRgd10Word0{    ///<Region Descriptor n, Word 0
        using Addr = Register::Address<0x4000d4a0,0x0000001f,0,unsigned>;
        ///Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> srtaddr{}; 
    }
    namespace MpuRgd11Word0{    ///<Region Descriptor n, Word 0
        using Addr = Register::Address<0x4000d4b0,0x0000001f,0,unsigned>;
        ///Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> srtaddr{}; 
    }
    namespace MpuRgd0Word1{    ///<Region Descriptor n, Word 1
        using Addr = Register::Address<0x4000d404,0x0000001f,0,unsigned>;
        ///End Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace MpuRgd1Word1{    ///<Region Descriptor n, Word 1
        using Addr = Register::Address<0x4000d414,0x0000001f,0,unsigned>;
        ///End Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace MpuRgd2Word1{    ///<Region Descriptor n, Word 1
        using Addr = Register::Address<0x4000d424,0x0000001f,0,unsigned>;
        ///End Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace MpuRgd3Word1{    ///<Region Descriptor n, Word 1
        using Addr = Register::Address<0x4000d434,0x0000001f,0,unsigned>;
        ///End Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace MpuRgd4Word1{    ///<Region Descriptor n, Word 1
        using Addr = Register::Address<0x4000d444,0x0000001f,0,unsigned>;
        ///End Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace MpuRgd5Word1{    ///<Region Descriptor n, Word 1
        using Addr = Register::Address<0x4000d454,0x0000001f,0,unsigned>;
        ///End Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace MpuRgd6Word1{    ///<Region Descriptor n, Word 1
        using Addr = Register::Address<0x4000d464,0x0000001f,0,unsigned>;
        ///End Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace MpuRgd7Word1{    ///<Region Descriptor n, Word 1
        using Addr = Register::Address<0x4000d474,0x0000001f,0,unsigned>;
        ///End Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace MpuRgd8Word1{    ///<Region Descriptor n, Word 1
        using Addr = Register::Address<0x4000d484,0x0000001f,0,unsigned>;
        ///End Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace MpuRgd9Word1{    ///<Region Descriptor n, Word 1
        using Addr = Register::Address<0x4000d494,0x0000001f,0,unsigned>;
        ///End Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace MpuRgd10Word1{    ///<Region Descriptor n, Word 1
        using Addr = Register::Address<0x4000d4a4,0x0000001f,0,unsigned>;
        ///End Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace MpuRgd11Word1{    ///<Region Descriptor n, Word 1
        using Addr = Register::Address<0x4000d4b4,0x0000001f,0,unsigned>;
        ///End Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace MpuRgd0Word2{    ///<Region Descriptor n, Word 2
        using Addr = Register::Address<0x4000d408,0x00000000,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 0 Process Identifier enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> m0pe{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 1 Process Identifier enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> m1pe{}; 
        ///Bus Master 2 User Mode Access control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 2 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> m2pe{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class M3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,M3smVal> m3sm{}; 
        namespace M3smValC{
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v11> v11{};
        }
        ///Bus Master 3 Process Identifier Enable
        enum class M3peVal {
            v0=0x00000000,     ///<Do not include the process identifier in the evaluation
            v1=0x00000001,     ///<Include the process identifier and mask (RGDn_WORD3) in the region hit evaluation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,M3peVal> m3pe{}; 
        namespace M3peValC{
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v1> v1{};
        }
        ///Bus Master 4 Write Enable
        enum class M4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,M4weVal> m4we{}; 
        namespace M4weValC{
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v1> v1{};
        }
        ///Bus Master 4 Read Enable
        enum class M4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,M4reVal> m4re{}; 
        namespace M4reValC{
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v1> v1{};
        }
        ///Bus Master 5 Write Enable
        enum class M5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,M5weVal> m5we{}; 
        namespace M5weValC{
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v1> v1{};
        }
        ///Bus Master 5 Read Enable
        enum class M5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,M5reVal> m5re{}; 
        namespace M5reValC{
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v1> v1{};
        }
        ///Bus Master 6 Write Enable
        enum class M6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,M6weVal> m6we{}; 
        namespace M6weValC{
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v1> v1{};
        }
        ///Bus Master 6 Read Enable
        enum class M6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,M6reVal> m6re{}; 
        namespace M6reValC{
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v1> v1{};
        }
        ///Bus Master 7 Write Enable
        enum class M7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,M7weVal> m7we{}; 
        namespace M7weValC{
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v1> v1{};
        }
        ///Bus Master 7 Read Enable
        enum class M7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,M7reVal> m7re{}; 
        namespace M7reValC{
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v1> v1{};
        }
    }
    namespace MpuRgd1Word2{    ///<Region Descriptor n, Word 2
        using Addr = Register::Address<0x4000d418,0x00000000,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 0 Process Identifier enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> m0pe{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 1 Process Identifier enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> m1pe{}; 
        ///Bus Master 2 User Mode Access control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 2 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> m2pe{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class M3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,M3smVal> m3sm{}; 
        namespace M3smValC{
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v11> v11{};
        }
        ///Bus Master 3 Process Identifier Enable
        enum class M3peVal {
            v0=0x00000000,     ///<Do not include the process identifier in the evaluation
            v1=0x00000001,     ///<Include the process identifier and mask (RGDn_WORD3) in the region hit evaluation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,M3peVal> m3pe{}; 
        namespace M3peValC{
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v1> v1{};
        }
        ///Bus Master 4 Write Enable
        enum class M4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,M4weVal> m4we{}; 
        namespace M4weValC{
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v1> v1{};
        }
        ///Bus Master 4 Read Enable
        enum class M4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,M4reVal> m4re{}; 
        namespace M4reValC{
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v1> v1{};
        }
        ///Bus Master 5 Write Enable
        enum class M5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,M5weVal> m5we{}; 
        namespace M5weValC{
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v1> v1{};
        }
        ///Bus Master 5 Read Enable
        enum class M5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,M5reVal> m5re{}; 
        namespace M5reValC{
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v1> v1{};
        }
        ///Bus Master 6 Write Enable
        enum class M6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,M6weVal> m6we{}; 
        namespace M6weValC{
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v1> v1{};
        }
        ///Bus Master 6 Read Enable
        enum class M6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,M6reVal> m6re{}; 
        namespace M6reValC{
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v1> v1{};
        }
        ///Bus Master 7 Write Enable
        enum class M7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,M7weVal> m7we{}; 
        namespace M7weValC{
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v1> v1{};
        }
        ///Bus Master 7 Read Enable
        enum class M7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,M7reVal> m7re{}; 
        namespace M7reValC{
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v1> v1{};
        }
    }
    namespace MpuRgd2Word2{    ///<Region Descriptor n, Word 2
        using Addr = Register::Address<0x4000d428,0x00000000,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 0 Process Identifier enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> m0pe{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 1 Process Identifier enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> m1pe{}; 
        ///Bus Master 2 User Mode Access control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 2 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> m2pe{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class M3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,M3smVal> m3sm{}; 
        namespace M3smValC{
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v11> v11{};
        }
        ///Bus Master 3 Process Identifier Enable
        enum class M3peVal {
            v0=0x00000000,     ///<Do not include the process identifier in the evaluation
            v1=0x00000001,     ///<Include the process identifier and mask (RGDn_WORD3) in the region hit evaluation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,M3peVal> m3pe{}; 
        namespace M3peValC{
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v1> v1{};
        }
        ///Bus Master 4 Write Enable
        enum class M4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,M4weVal> m4we{}; 
        namespace M4weValC{
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v1> v1{};
        }
        ///Bus Master 4 Read Enable
        enum class M4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,M4reVal> m4re{}; 
        namespace M4reValC{
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v1> v1{};
        }
        ///Bus Master 5 Write Enable
        enum class M5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,M5weVal> m5we{}; 
        namespace M5weValC{
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v1> v1{};
        }
        ///Bus Master 5 Read Enable
        enum class M5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,M5reVal> m5re{}; 
        namespace M5reValC{
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v1> v1{};
        }
        ///Bus Master 6 Write Enable
        enum class M6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,M6weVal> m6we{}; 
        namespace M6weValC{
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v1> v1{};
        }
        ///Bus Master 6 Read Enable
        enum class M6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,M6reVal> m6re{}; 
        namespace M6reValC{
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v1> v1{};
        }
        ///Bus Master 7 Write Enable
        enum class M7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,M7weVal> m7we{}; 
        namespace M7weValC{
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v1> v1{};
        }
        ///Bus Master 7 Read Enable
        enum class M7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,M7reVal> m7re{}; 
        namespace M7reValC{
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v1> v1{};
        }
    }
    namespace MpuRgd3Word2{    ///<Region Descriptor n, Word 2
        using Addr = Register::Address<0x4000d438,0x00000000,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 0 Process Identifier enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> m0pe{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 1 Process Identifier enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> m1pe{}; 
        ///Bus Master 2 User Mode Access control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 2 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> m2pe{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class M3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,M3smVal> m3sm{}; 
        namespace M3smValC{
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v11> v11{};
        }
        ///Bus Master 3 Process Identifier Enable
        enum class M3peVal {
            v0=0x00000000,     ///<Do not include the process identifier in the evaluation
            v1=0x00000001,     ///<Include the process identifier and mask (RGDn_WORD3) in the region hit evaluation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,M3peVal> m3pe{}; 
        namespace M3peValC{
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v1> v1{};
        }
        ///Bus Master 4 Write Enable
        enum class M4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,M4weVal> m4we{}; 
        namespace M4weValC{
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v1> v1{};
        }
        ///Bus Master 4 Read Enable
        enum class M4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,M4reVal> m4re{}; 
        namespace M4reValC{
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v1> v1{};
        }
        ///Bus Master 5 Write Enable
        enum class M5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,M5weVal> m5we{}; 
        namespace M5weValC{
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v1> v1{};
        }
        ///Bus Master 5 Read Enable
        enum class M5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,M5reVal> m5re{}; 
        namespace M5reValC{
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v1> v1{};
        }
        ///Bus Master 6 Write Enable
        enum class M6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,M6weVal> m6we{}; 
        namespace M6weValC{
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v1> v1{};
        }
        ///Bus Master 6 Read Enable
        enum class M6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,M6reVal> m6re{}; 
        namespace M6reValC{
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v1> v1{};
        }
        ///Bus Master 7 Write Enable
        enum class M7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,M7weVal> m7we{}; 
        namespace M7weValC{
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v1> v1{};
        }
        ///Bus Master 7 Read Enable
        enum class M7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,M7reVal> m7re{}; 
        namespace M7reValC{
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v1> v1{};
        }
    }
    namespace MpuRgd4Word2{    ///<Region Descriptor n, Word 2
        using Addr = Register::Address<0x4000d448,0x00000000,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 0 Process Identifier enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> m0pe{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 1 Process Identifier enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> m1pe{}; 
        ///Bus Master 2 User Mode Access control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 2 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> m2pe{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class M3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,M3smVal> m3sm{}; 
        namespace M3smValC{
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v11> v11{};
        }
        ///Bus Master 3 Process Identifier Enable
        enum class M3peVal {
            v0=0x00000000,     ///<Do not include the process identifier in the evaluation
            v1=0x00000001,     ///<Include the process identifier and mask (RGDn_WORD3) in the region hit evaluation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,M3peVal> m3pe{}; 
        namespace M3peValC{
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v1> v1{};
        }
        ///Bus Master 4 Write Enable
        enum class M4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,M4weVal> m4we{}; 
        namespace M4weValC{
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v1> v1{};
        }
        ///Bus Master 4 Read Enable
        enum class M4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,M4reVal> m4re{}; 
        namespace M4reValC{
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v1> v1{};
        }
        ///Bus Master 5 Write Enable
        enum class M5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,M5weVal> m5we{}; 
        namespace M5weValC{
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v1> v1{};
        }
        ///Bus Master 5 Read Enable
        enum class M5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,M5reVal> m5re{}; 
        namespace M5reValC{
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v1> v1{};
        }
        ///Bus Master 6 Write Enable
        enum class M6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,M6weVal> m6we{}; 
        namespace M6weValC{
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v1> v1{};
        }
        ///Bus Master 6 Read Enable
        enum class M6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,M6reVal> m6re{}; 
        namespace M6reValC{
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v1> v1{};
        }
        ///Bus Master 7 Write Enable
        enum class M7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,M7weVal> m7we{}; 
        namespace M7weValC{
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v1> v1{};
        }
        ///Bus Master 7 Read Enable
        enum class M7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,M7reVal> m7re{}; 
        namespace M7reValC{
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v1> v1{};
        }
    }
    namespace MpuRgd5Word2{    ///<Region Descriptor n, Word 2
        using Addr = Register::Address<0x4000d458,0x00000000,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 0 Process Identifier enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> m0pe{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 1 Process Identifier enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> m1pe{}; 
        ///Bus Master 2 User Mode Access control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 2 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> m2pe{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class M3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,M3smVal> m3sm{}; 
        namespace M3smValC{
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v11> v11{};
        }
        ///Bus Master 3 Process Identifier Enable
        enum class M3peVal {
            v0=0x00000000,     ///<Do not include the process identifier in the evaluation
            v1=0x00000001,     ///<Include the process identifier and mask (RGDn_WORD3) in the region hit evaluation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,M3peVal> m3pe{}; 
        namespace M3peValC{
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v1> v1{};
        }
        ///Bus Master 4 Write Enable
        enum class M4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,M4weVal> m4we{}; 
        namespace M4weValC{
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v1> v1{};
        }
        ///Bus Master 4 Read Enable
        enum class M4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,M4reVal> m4re{}; 
        namespace M4reValC{
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v1> v1{};
        }
        ///Bus Master 5 Write Enable
        enum class M5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,M5weVal> m5we{}; 
        namespace M5weValC{
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v1> v1{};
        }
        ///Bus Master 5 Read Enable
        enum class M5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,M5reVal> m5re{}; 
        namespace M5reValC{
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v1> v1{};
        }
        ///Bus Master 6 Write Enable
        enum class M6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,M6weVal> m6we{}; 
        namespace M6weValC{
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v1> v1{};
        }
        ///Bus Master 6 Read Enable
        enum class M6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,M6reVal> m6re{}; 
        namespace M6reValC{
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v1> v1{};
        }
        ///Bus Master 7 Write Enable
        enum class M7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,M7weVal> m7we{}; 
        namespace M7weValC{
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v1> v1{};
        }
        ///Bus Master 7 Read Enable
        enum class M7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,M7reVal> m7re{}; 
        namespace M7reValC{
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v1> v1{};
        }
    }
    namespace MpuRgd6Word2{    ///<Region Descriptor n, Word 2
        using Addr = Register::Address<0x4000d468,0x00000000,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 0 Process Identifier enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> m0pe{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 1 Process Identifier enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> m1pe{}; 
        ///Bus Master 2 User Mode Access control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 2 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> m2pe{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class M3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,M3smVal> m3sm{}; 
        namespace M3smValC{
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v11> v11{};
        }
        ///Bus Master 3 Process Identifier Enable
        enum class M3peVal {
            v0=0x00000000,     ///<Do not include the process identifier in the evaluation
            v1=0x00000001,     ///<Include the process identifier and mask (RGDn_WORD3) in the region hit evaluation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,M3peVal> m3pe{}; 
        namespace M3peValC{
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v1> v1{};
        }
        ///Bus Master 4 Write Enable
        enum class M4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,M4weVal> m4we{}; 
        namespace M4weValC{
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v1> v1{};
        }
        ///Bus Master 4 Read Enable
        enum class M4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,M4reVal> m4re{}; 
        namespace M4reValC{
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v1> v1{};
        }
        ///Bus Master 5 Write Enable
        enum class M5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,M5weVal> m5we{}; 
        namespace M5weValC{
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v1> v1{};
        }
        ///Bus Master 5 Read Enable
        enum class M5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,M5reVal> m5re{}; 
        namespace M5reValC{
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v1> v1{};
        }
        ///Bus Master 6 Write Enable
        enum class M6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,M6weVal> m6we{}; 
        namespace M6weValC{
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v1> v1{};
        }
        ///Bus Master 6 Read Enable
        enum class M6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,M6reVal> m6re{}; 
        namespace M6reValC{
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v1> v1{};
        }
        ///Bus Master 7 Write Enable
        enum class M7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,M7weVal> m7we{}; 
        namespace M7weValC{
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v1> v1{};
        }
        ///Bus Master 7 Read Enable
        enum class M7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,M7reVal> m7re{}; 
        namespace M7reValC{
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v1> v1{};
        }
    }
    namespace MpuRgd7Word2{    ///<Region Descriptor n, Word 2
        using Addr = Register::Address<0x4000d478,0x00000000,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 0 Process Identifier enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> m0pe{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 1 Process Identifier enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> m1pe{}; 
        ///Bus Master 2 User Mode Access control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 2 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> m2pe{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class M3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,M3smVal> m3sm{}; 
        namespace M3smValC{
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v11> v11{};
        }
        ///Bus Master 3 Process Identifier Enable
        enum class M3peVal {
            v0=0x00000000,     ///<Do not include the process identifier in the evaluation
            v1=0x00000001,     ///<Include the process identifier and mask (RGDn_WORD3) in the region hit evaluation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,M3peVal> m3pe{}; 
        namespace M3peValC{
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v1> v1{};
        }
        ///Bus Master 4 Write Enable
        enum class M4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,M4weVal> m4we{}; 
        namespace M4weValC{
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v1> v1{};
        }
        ///Bus Master 4 Read Enable
        enum class M4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,M4reVal> m4re{}; 
        namespace M4reValC{
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v1> v1{};
        }
        ///Bus Master 5 Write Enable
        enum class M5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,M5weVal> m5we{}; 
        namespace M5weValC{
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v1> v1{};
        }
        ///Bus Master 5 Read Enable
        enum class M5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,M5reVal> m5re{}; 
        namespace M5reValC{
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v1> v1{};
        }
        ///Bus Master 6 Write Enable
        enum class M6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,M6weVal> m6we{}; 
        namespace M6weValC{
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v1> v1{};
        }
        ///Bus Master 6 Read Enable
        enum class M6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,M6reVal> m6re{}; 
        namespace M6reValC{
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v1> v1{};
        }
        ///Bus Master 7 Write Enable
        enum class M7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,M7weVal> m7we{}; 
        namespace M7weValC{
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v1> v1{};
        }
        ///Bus Master 7 Read Enable
        enum class M7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,M7reVal> m7re{}; 
        namespace M7reValC{
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v1> v1{};
        }
    }
    namespace MpuRgd8Word2{    ///<Region Descriptor n, Word 2
        using Addr = Register::Address<0x4000d488,0x00000000,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 0 Process Identifier enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> m0pe{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 1 Process Identifier enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> m1pe{}; 
        ///Bus Master 2 User Mode Access control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 2 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> m2pe{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class M3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,M3smVal> m3sm{}; 
        namespace M3smValC{
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v11> v11{};
        }
        ///Bus Master 3 Process Identifier Enable
        enum class M3peVal {
            v0=0x00000000,     ///<Do not include the process identifier in the evaluation
            v1=0x00000001,     ///<Include the process identifier and mask (RGDn_WORD3) in the region hit evaluation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,M3peVal> m3pe{}; 
        namespace M3peValC{
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v1> v1{};
        }
        ///Bus Master 4 Write Enable
        enum class M4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,M4weVal> m4we{}; 
        namespace M4weValC{
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v1> v1{};
        }
        ///Bus Master 4 Read Enable
        enum class M4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,M4reVal> m4re{}; 
        namespace M4reValC{
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v1> v1{};
        }
        ///Bus Master 5 Write Enable
        enum class M5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,M5weVal> m5we{}; 
        namespace M5weValC{
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v1> v1{};
        }
        ///Bus Master 5 Read Enable
        enum class M5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,M5reVal> m5re{}; 
        namespace M5reValC{
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v1> v1{};
        }
        ///Bus Master 6 Write Enable
        enum class M6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,M6weVal> m6we{}; 
        namespace M6weValC{
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v1> v1{};
        }
        ///Bus Master 6 Read Enable
        enum class M6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,M6reVal> m6re{}; 
        namespace M6reValC{
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v1> v1{};
        }
        ///Bus Master 7 Write Enable
        enum class M7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,M7weVal> m7we{}; 
        namespace M7weValC{
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v1> v1{};
        }
        ///Bus Master 7 Read Enable
        enum class M7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,M7reVal> m7re{}; 
        namespace M7reValC{
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v1> v1{};
        }
    }
    namespace MpuRgd9Word2{    ///<Region Descriptor n, Word 2
        using Addr = Register::Address<0x4000d498,0x00000000,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 0 Process Identifier enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> m0pe{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 1 Process Identifier enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> m1pe{}; 
        ///Bus Master 2 User Mode Access control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 2 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> m2pe{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class M3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,M3smVal> m3sm{}; 
        namespace M3smValC{
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v11> v11{};
        }
        ///Bus Master 3 Process Identifier Enable
        enum class M3peVal {
            v0=0x00000000,     ///<Do not include the process identifier in the evaluation
            v1=0x00000001,     ///<Include the process identifier and mask (RGDn_WORD3) in the region hit evaluation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,M3peVal> m3pe{}; 
        namespace M3peValC{
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v1> v1{};
        }
        ///Bus Master 4 Write Enable
        enum class M4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,M4weVal> m4we{}; 
        namespace M4weValC{
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v1> v1{};
        }
        ///Bus Master 4 Read Enable
        enum class M4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,M4reVal> m4re{}; 
        namespace M4reValC{
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v1> v1{};
        }
        ///Bus Master 5 Write Enable
        enum class M5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,M5weVal> m5we{}; 
        namespace M5weValC{
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v1> v1{};
        }
        ///Bus Master 5 Read Enable
        enum class M5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,M5reVal> m5re{}; 
        namespace M5reValC{
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v1> v1{};
        }
        ///Bus Master 6 Write Enable
        enum class M6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,M6weVal> m6we{}; 
        namespace M6weValC{
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v1> v1{};
        }
        ///Bus Master 6 Read Enable
        enum class M6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,M6reVal> m6re{}; 
        namespace M6reValC{
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v1> v1{};
        }
        ///Bus Master 7 Write Enable
        enum class M7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,M7weVal> m7we{}; 
        namespace M7weValC{
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v1> v1{};
        }
        ///Bus Master 7 Read Enable
        enum class M7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,M7reVal> m7re{}; 
        namespace M7reValC{
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v1> v1{};
        }
    }
    namespace MpuRgd10Word2{    ///<Region Descriptor n, Word 2
        using Addr = Register::Address<0x4000d4a8,0x00000000,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 0 Process Identifier enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> m0pe{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 1 Process Identifier enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> m1pe{}; 
        ///Bus Master 2 User Mode Access control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 2 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> m2pe{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class M3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,M3smVal> m3sm{}; 
        namespace M3smValC{
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v11> v11{};
        }
        ///Bus Master 3 Process Identifier Enable
        enum class M3peVal {
            v0=0x00000000,     ///<Do not include the process identifier in the evaluation
            v1=0x00000001,     ///<Include the process identifier and mask (RGDn_WORD3) in the region hit evaluation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,M3peVal> m3pe{}; 
        namespace M3peValC{
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v1> v1{};
        }
        ///Bus Master 4 Write Enable
        enum class M4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,M4weVal> m4we{}; 
        namespace M4weValC{
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v1> v1{};
        }
        ///Bus Master 4 Read Enable
        enum class M4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,M4reVal> m4re{}; 
        namespace M4reValC{
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v1> v1{};
        }
        ///Bus Master 5 Write Enable
        enum class M5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,M5weVal> m5we{}; 
        namespace M5weValC{
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v1> v1{};
        }
        ///Bus Master 5 Read Enable
        enum class M5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,M5reVal> m5re{}; 
        namespace M5reValC{
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v1> v1{};
        }
        ///Bus Master 6 Write Enable
        enum class M6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,M6weVal> m6we{}; 
        namespace M6weValC{
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v1> v1{};
        }
        ///Bus Master 6 Read Enable
        enum class M6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,M6reVal> m6re{}; 
        namespace M6reValC{
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v1> v1{};
        }
        ///Bus Master 7 Write Enable
        enum class M7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,M7weVal> m7we{}; 
        namespace M7weValC{
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v1> v1{};
        }
        ///Bus Master 7 Read Enable
        enum class M7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,M7reVal> m7re{}; 
        namespace M7reValC{
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v1> v1{};
        }
    }
    namespace MpuRgd11Word2{    ///<Region Descriptor n, Word 2
        using Addr = Register::Address<0x4000d4b8,0x00000000,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 0 Process Identifier enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> m0pe{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 1 Process Identifier enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> m1pe{}; 
        ///Bus Master 2 User Mode Access control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 2 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> m2pe{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class M3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,M3smVal> m3sm{}; 
        namespace M3smValC{
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v11> v11{};
        }
        ///Bus Master 3 Process Identifier Enable
        enum class M3peVal {
            v0=0x00000000,     ///<Do not include the process identifier in the evaluation
            v1=0x00000001,     ///<Include the process identifier and mask (RGDn_WORD3) in the region hit evaluation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,M3peVal> m3pe{}; 
        namespace M3peValC{
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v1> v1{};
        }
        ///Bus Master 4 Write Enable
        enum class M4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,M4weVal> m4we{}; 
        namespace M4weValC{
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v1> v1{};
        }
        ///Bus Master 4 Read Enable
        enum class M4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,M4reVal> m4re{}; 
        namespace M4reValC{
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v1> v1{};
        }
        ///Bus Master 5 Write Enable
        enum class M5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,M5weVal> m5we{}; 
        namespace M5weValC{
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v1> v1{};
        }
        ///Bus Master 5 Read Enable
        enum class M5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,M5reVal> m5re{}; 
        namespace M5reValC{
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v1> v1{};
        }
        ///Bus Master 6 Write Enable
        enum class M6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,M6weVal> m6we{}; 
        namespace M6weValC{
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v1> v1{};
        }
        ///Bus Master 6 Read Enable
        enum class M6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,M6reVal> m6re{}; 
        namespace M6reValC{
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v1> v1{};
        }
        ///Bus Master 7 Write Enable
        enum class M7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,M7weVal> m7we{}; 
        namespace M7weValC{
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v1> v1{};
        }
        ///Bus Master 7 Read Enable
        enum class M7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,M7reVal> m7re{}; 
        namespace M7reValC{
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v1> v1{};
        }
    }
    namespace MpuRgd0Word3{    ///<Region Descriptor n, Word 3
        using Addr = Register::Address<0x4000d40c,0x0000fffe,0,unsigned>;
        ///Valid
        enum class VldVal {
            v0=0x00000000,     ///<Region descriptor is invalid
            v1=0x00000001,     ///<Region descriptor is valid
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,VldVal> vld{}; 
        namespace VldValC{
            constexpr Register::FieldValue<decltype(vld)::Type,VldVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vld)::Type,VldVal::v1> v1{};
        }
        ///Process Identifier Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pidmask{}; 
        ///Process Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pid{}; 
    }
    namespace MpuRgd1Word3{    ///<Region Descriptor n, Word 3
        using Addr = Register::Address<0x4000d41c,0x0000fffe,0,unsigned>;
        ///Valid
        enum class VldVal {
            v0=0x00000000,     ///<Region descriptor is invalid
            v1=0x00000001,     ///<Region descriptor is valid
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,VldVal> vld{}; 
        namespace VldValC{
            constexpr Register::FieldValue<decltype(vld)::Type,VldVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vld)::Type,VldVal::v1> v1{};
        }
        ///Process Identifier Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pidmask{}; 
        ///Process Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pid{}; 
    }
    namespace MpuRgd2Word3{    ///<Region Descriptor n, Word 3
        using Addr = Register::Address<0x4000d42c,0x0000fffe,0,unsigned>;
        ///Valid
        enum class VldVal {
            v0=0x00000000,     ///<Region descriptor is invalid
            v1=0x00000001,     ///<Region descriptor is valid
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,VldVal> vld{}; 
        namespace VldValC{
            constexpr Register::FieldValue<decltype(vld)::Type,VldVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vld)::Type,VldVal::v1> v1{};
        }
        ///Process Identifier Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pidmask{}; 
        ///Process Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pid{}; 
    }
    namespace MpuRgd3Word3{    ///<Region Descriptor n, Word 3
        using Addr = Register::Address<0x4000d43c,0x0000fffe,0,unsigned>;
        ///Valid
        enum class VldVal {
            v0=0x00000000,     ///<Region descriptor is invalid
            v1=0x00000001,     ///<Region descriptor is valid
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,VldVal> vld{}; 
        namespace VldValC{
            constexpr Register::FieldValue<decltype(vld)::Type,VldVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vld)::Type,VldVal::v1> v1{};
        }
        ///Process Identifier Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pidmask{}; 
        ///Process Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pid{}; 
    }
    namespace MpuRgd4Word3{    ///<Region Descriptor n, Word 3
        using Addr = Register::Address<0x4000d44c,0x0000fffe,0,unsigned>;
        ///Valid
        enum class VldVal {
            v0=0x00000000,     ///<Region descriptor is invalid
            v1=0x00000001,     ///<Region descriptor is valid
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,VldVal> vld{}; 
        namespace VldValC{
            constexpr Register::FieldValue<decltype(vld)::Type,VldVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vld)::Type,VldVal::v1> v1{};
        }
        ///Process Identifier Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pidmask{}; 
        ///Process Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pid{}; 
    }
    namespace MpuRgd5Word3{    ///<Region Descriptor n, Word 3
        using Addr = Register::Address<0x4000d45c,0x0000fffe,0,unsigned>;
        ///Valid
        enum class VldVal {
            v0=0x00000000,     ///<Region descriptor is invalid
            v1=0x00000001,     ///<Region descriptor is valid
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,VldVal> vld{}; 
        namespace VldValC{
            constexpr Register::FieldValue<decltype(vld)::Type,VldVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vld)::Type,VldVal::v1> v1{};
        }
        ///Process Identifier Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pidmask{}; 
        ///Process Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pid{}; 
    }
    namespace MpuRgd6Word3{    ///<Region Descriptor n, Word 3
        using Addr = Register::Address<0x4000d46c,0x0000fffe,0,unsigned>;
        ///Valid
        enum class VldVal {
            v0=0x00000000,     ///<Region descriptor is invalid
            v1=0x00000001,     ///<Region descriptor is valid
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,VldVal> vld{}; 
        namespace VldValC{
            constexpr Register::FieldValue<decltype(vld)::Type,VldVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vld)::Type,VldVal::v1> v1{};
        }
        ///Process Identifier Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pidmask{}; 
        ///Process Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pid{}; 
    }
    namespace MpuRgd7Word3{    ///<Region Descriptor n, Word 3
        using Addr = Register::Address<0x4000d47c,0x0000fffe,0,unsigned>;
        ///Valid
        enum class VldVal {
            v0=0x00000000,     ///<Region descriptor is invalid
            v1=0x00000001,     ///<Region descriptor is valid
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,VldVal> vld{}; 
        namespace VldValC{
            constexpr Register::FieldValue<decltype(vld)::Type,VldVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vld)::Type,VldVal::v1> v1{};
        }
        ///Process Identifier Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pidmask{}; 
        ///Process Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pid{}; 
    }
    namespace MpuRgd8Word3{    ///<Region Descriptor n, Word 3
        using Addr = Register::Address<0x4000d48c,0x0000fffe,0,unsigned>;
        ///Valid
        enum class VldVal {
            v0=0x00000000,     ///<Region descriptor is invalid
            v1=0x00000001,     ///<Region descriptor is valid
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,VldVal> vld{}; 
        namespace VldValC{
            constexpr Register::FieldValue<decltype(vld)::Type,VldVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vld)::Type,VldVal::v1> v1{};
        }
        ///Process Identifier Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pidmask{}; 
        ///Process Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pid{}; 
    }
    namespace MpuRgd9Word3{    ///<Region Descriptor n, Word 3
        using Addr = Register::Address<0x4000d49c,0x0000fffe,0,unsigned>;
        ///Valid
        enum class VldVal {
            v0=0x00000000,     ///<Region descriptor is invalid
            v1=0x00000001,     ///<Region descriptor is valid
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,VldVal> vld{}; 
        namespace VldValC{
            constexpr Register::FieldValue<decltype(vld)::Type,VldVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vld)::Type,VldVal::v1> v1{};
        }
        ///Process Identifier Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pidmask{}; 
        ///Process Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pid{}; 
    }
    namespace MpuRgd10Word3{    ///<Region Descriptor n, Word 3
        using Addr = Register::Address<0x4000d4ac,0x0000fffe,0,unsigned>;
        ///Valid
        enum class VldVal {
            v0=0x00000000,     ///<Region descriptor is invalid
            v1=0x00000001,     ///<Region descriptor is valid
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,VldVal> vld{}; 
        namespace VldValC{
            constexpr Register::FieldValue<decltype(vld)::Type,VldVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vld)::Type,VldVal::v1> v1{};
        }
        ///Process Identifier Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pidmask{}; 
        ///Process Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pid{}; 
    }
    namespace MpuRgd11Word3{    ///<Region Descriptor n, Word 3
        using Addr = Register::Address<0x4000d4bc,0x0000fffe,0,unsigned>;
        ///Valid
        enum class VldVal {
            v0=0x00000000,     ///<Region descriptor is invalid
            v1=0x00000001,     ///<Region descriptor is valid
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,VldVal> vld{}; 
        namespace VldValC{
            constexpr Register::FieldValue<decltype(vld)::Type,VldVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vld)::Type,VldVal::v1> v1{};
        }
        ///Process Identifier Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pidmask{}; 
        ///Process Identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pid{}; 
    }
    namespace MpuRgdaac0{    ///<Region Descriptor Alternate Access Control n
        using Addr = Register::Address<0x4000d800,0x00000000,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 0 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> m0pe{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 1 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> m1pe{}; 
        ///Bus Master 2 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 2 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> m2pe{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class M3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,M3smVal> m3sm{}; 
        namespace M3smValC{
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v11> v11{};
        }
        ///Bus Master 3 Process Identifier Enable
        enum class M3peVal {
            v0=0x00000000,     ///<Do not include the process identifier in the evaluation
            v1=0x00000001,     ///<Include the process identifier and mask (RGDn.RGDAAC) in the region hit evaluation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,M3peVal> m3pe{}; 
        namespace M3peValC{
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v1> v1{};
        }
        ///Bus Master 4 Write Enable
        enum class M4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,M4weVal> m4we{}; 
        namespace M4weValC{
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v1> v1{};
        }
        ///Bus Master 4 Read Enable
        enum class M4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,M4reVal> m4re{}; 
        namespace M4reValC{
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v1> v1{};
        }
        ///Bus Master 5 Write Enable
        enum class M5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,M5weVal> m5we{}; 
        namespace M5weValC{
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v1> v1{};
        }
        ///Bus Master 5 Read Enable
        enum class M5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,M5reVal> m5re{}; 
        namespace M5reValC{
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v1> v1{};
        }
        ///Bus Master 6 Write Enable
        enum class M6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,M6weVal> m6we{}; 
        namespace M6weValC{
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v1> v1{};
        }
        ///Bus Master 6 Read Enable
        enum class M6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,M6reVal> m6re{}; 
        namespace M6reValC{
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v1> v1{};
        }
        ///Bus Master 7 Write Enable
        enum class M7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,M7weVal> m7we{}; 
        namespace M7weValC{
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v1> v1{};
        }
        ///Bus Master 7 Read Enable
        enum class M7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,M7reVal> m7re{}; 
        namespace M7reValC{
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v1> v1{};
        }
    }
    namespace MpuRgdaac1{    ///<Region Descriptor Alternate Access Control n
        using Addr = Register::Address<0x4000d804,0x00000000,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 0 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> m0pe{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 1 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> m1pe{}; 
        ///Bus Master 2 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 2 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> m2pe{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class M3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,M3smVal> m3sm{}; 
        namespace M3smValC{
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v11> v11{};
        }
        ///Bus Master 3 Process Identifier Enable
        enum class M3peVal {
            v0=0x00000000,     ///<Do not include the process identifier in the evaluation
            v1=0x00000001,     ///<Include the process identifier and mask (RGDn.RGDAAC) in the region hit evaluation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,M3peVal> m3pe{}; 
        namespace M3peValC{
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v1> v1{};
        }
        ///Bus Master 4 Write Enable
        enum class M4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,M4weVal> m4we{}; 
        namespace M4weValC{
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v1> v1{};
        }
        ///Bus Master 4 Read Enable
        enum class M4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,M4reVal> m4re{}; 
        namespace M4reValC{
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v1> v1{};
        }
        ///Bus Master 5 Write Enable
        enum class M5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,M5weVal> m5we{}; 
        namespace M5weValC{
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v1> v1{};
        }
        ///Bus Master 5 Read Enable
        enum class M5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,M5reVal> m5re{}; 
        namespace M5reValC{
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v1> v1{};
        }
        ///Bus Master 6 Write Enable
        enum class M6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,M6weVal> m6we{}; 
        namespace M6weValC{
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v1> v1{};
        }
        ///Bus Master 6 Read Enable
        enum class M6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,M6reVal> m6re{}; 
        namespace M6reValC{
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v1> v1{};
        }
        ///Bus Master 7 Write Enable
        enum class M7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,M7weVal> m7we{}; 
        namespace M7weValC{
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v1> v1{};
        }
        ///Bus Master 7 Read Enable
        enum class M7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,M7reVal> m7re{}; 
        namespace M7reValC{
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v1> v1{};
        }
    }
    namespace MpuRgdaac2{    ///<Region Descriptor Alternate Access Control n
        using Addr = Register::Address<0x4000d808,0x00000000,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 0 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> m0pe{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 1 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> m1pe{}; 
        ///Bus Master 2 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 2 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> m2pe{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class M3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,M3smVal> m3sm{}; 
        namespace M3smValC{
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v11> v11{};
        }
        ///Bus Master 3 Process Identifier Enable
        enum class M3peVal {
            v0=0x00000000,     ///<Do not include the process identifier in the evaluation
            v1=0x00000001,     ///<Include the process identifier and mask (RGDn.RGDAAC) in the region hit evaluation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,M3peVal> m3pe{}; 
        namespace M3peValC{
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v1> v1{};
        }
        ///Bus Master 4 Write Enable
        enum class M4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,M4weVal> m4we{}; 
        namespace M4weValC{
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v1> v1{};
        }
        ///Bus Master 4 Read Enable
        enum class M4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,M4reVal> m4re{}; 
        namespace M4reValC{
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v1> v1{};
        }
        ///Bus Master 5 Write Enable
        enum class M5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,M5weVal> m5we{}; 
        namespace M5weValC{
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v1> v1{};
        }
        ///Bus Master 5 Read Enable
        enum class M5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,M5reVal> m5re{}; 
        namespace M5reValC{
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v1> v1{};
        }
        ///Bus Master 6 Write Enable
        enum class M6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,M6weVal> m6we{}; 
        namespace M6weValC{
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v1> v1{};
        }
        ///Bus Master 6 Read Enable
        enum class M6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,M6reVal> m6re{}; 
        namespace M6reValC{
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v1> v1{};
        }
        ///Bus Master 7 Write Enable
        enum class M7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,M7weVal> m7we{}; 
        namespace M7weValC{
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v1> v1{};
        }
        ///Bus Master 7 Read Enable
        enum class M7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,M7reVal> m7re{}; 
        namespace M7reValC{
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v1> v1{};
        }
    }
    namespace MpuRgdaac3{    ///<Region Descriptor Alternate Access Control n
        using Addr = Register::Address<0x4000d80c,0x00000000,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 0 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> m0pe{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 1 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> m1pe{}; 
        ///Bus Master 2 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 2 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> m2pe{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class M3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,M3smVal> m3sm{}; 
        namespace M3smValC{
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v11> v11{};
        }
        ///Bus Master 3 Process Identifier Enable
        enum class M3peVal {
            v0=0x00000000,     ///<Do not include the process identifier in the evaluation
            v1=0x00000001,     ///<Include the process identifier and mask (RGDn.RGDAAC) in the region hit evaluation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,M3peVal> m3pe{}; 
        namespace M3peValC{
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v1> v1{};
        }
        ///Bus Master 4 Write Enable
        enum class M4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,M4weVal> m4we{}; 
        namespace M4weValC{
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v1> v1{};
        }
        ///Bus Master 4 Read Enable
        enum class M4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,M4reVal> m4re{}; 
        namespace M4reValC{
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v1> v1{};
        }
        ///Bus Master 5 Write Enable
        enum class M5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,M5weVal> m5we{}; 
        namespace M5weValC{
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v1> v1{};
        }
        ///Bus Master 5 Read Enable
        enum class M5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,M5reVal> m5re{}; 
        namespace M5reValC{
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v1> v1{};
        }
        ///Bus Master 6 Write Enable
        enum class M6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,M6weVal> m6we{}; 
        namespace M6weValC{
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v1> v1{};
        }
        ///Bus Master 6 Read Enable
        enum class M6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,M6reVal> m6re{}; 
        namespace M6reValC{
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v1> v1{};
        }
        ///Bus Master 7 Write Enable
        enum class M7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,M7weVal> m7we{}; 
        namespace M7weValC{
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v1> v1{};
        }
        ///Bus Master 7 Read Enable
        enum class M7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,M7reVal> m7re{}; 
        namespace M7reValC{
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v1> v1{};
        }
    }
    namespace MpuRgdaac4{    ///<Region Descriptor Alternate Access Control n
        using Addr = Register::Address<0x4000d810,0x00000000,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 0 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> m0pe{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 1 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> m1pe{}; 
        ///Bus Master 2 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 2 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> m2pe{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class M3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,M3smVal> m3sm{}; 
        namespace M3smValC{
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v11> v11{};
        }
        ///Bus Master 3 Process Identifier Enable
        enum class M3peVal {
            v0=0x00000000,     ///<Do not include the process identifier in the evaluation
            v1=0x00000001,     ///<Include the process identifier and mask (RGDn.RGDAAC) in the region hit evaluation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,M3peVal> m3pe{}; 
        namespace M3peValC{
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v1> v1{};
        }
        ///Bus Master 4 Write Enable
        enum class M4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,M4weVal> m4we{}; 
        namespace M4weValC{
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v1> v1{};
        }
        ///Bus Master 4 Read Enable
        enum class M4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,M4reVal> m4re{}; 
        namespace M4reValC{
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v1> v1{};
        }
        ///Bus Master 5 Write Enable
        enum class M5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,M5weVal> m5we{}; 
        namespace M5weValC{
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v1> v1{};
        }
        ///Bus Master 5 Read Enable
        enum class M5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,M5reVal> m5re{}; 
        namespace M5reValC{
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v1> v1{};
        }
        ///Bus Master 6 Write Enable
        enum class M6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,M6weVal> m6we{}; 
        namespace M6weValC{
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v1> v1{};
        }
        ///Bus Master 6 Read Enable
        enum class M6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,M6reVal> m6re{}; 
        namespace M6reValC{
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v1> v1{};
        }
        ///Bus Master 7 Write Enable
        enum class M7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,M7weVal> m7we{}; 
        namespace M7weValC{
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v1> v1{};
        }
        ///Bus Master 7 Read Enable
        enum class M7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,M7reVal> m7re{}; 
        namespace M7reValC{
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v1> v1{};
        }
    }
    namespace MpuRgdaac5{    ///<Region Descriptor Alternate Access Control n
        using Addr = Register::Address<0x4000d814,0x00000000,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 0 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> m0pe{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 1 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> m1pe{}; 
        ///Bus Master 2 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 2 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> m2pe{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class M3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,M3smVal> m3sm{}; 
        namespace M3smValC{
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v11> v11{};
        }
        ///Bus Master 3 Process Identifier Enable
        enum class M3peVal {
            v0=0x00000000,     ///<Do not include the process identifier in the evaluation
            v1=0x00000001,     ///<Include the process identifier and mask (RGDn.RGDAAC) in the region hit evaluation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,M3peVal> m3pe{}; 
        namespace M3peValC{
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v1> v1{};
        }
        ///Bus Master 4 Write Enable
        enum class M4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,M4weVal> m4we{}; 
        namespace M4weValC{
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v1> v1{};
        }
        ///Bus Master 4 Read Enable
        enum class M4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,M4reVal> m4re{}; 
        namespace M4reValC{
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v1> v1{};
        }
        ///Bus Master 5 Write Enable
        enum class M5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,M5weVal> m5we{}; 
        namespace M5weValC{
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v1> v1{};
        }
        ///Bus Master 5 Read Enable
        enum class M5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,M5reVal> m5re{}; 
        namespace M5reValC{
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v1> v1{};
        }
        ///Bus Master 6 Write Enable
        enum class M6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,M6weVal> m6we{}; 
        namespace M6weValC{
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v1> v1{};
        }
        ///Bus Master 6 Read Enable
        enum class M6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,M6reVal> m6re{}; 
        namespace M6reValC{
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v1> v1{};
        }
        ///Bus Master 7 Write Enable
        enum class M7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,M7weVal> m7we{}; 
        namespace M7weValC{
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v1> v1{};
        }
        ///Bus Master 7 Read Enable
        enum class M7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,M7reVal> m7re{}; 
        namespace M7reValC{
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v1> v1{};
        }
    }
    namespace MpuRgdaac6{    ///<Region Descriptor Alternate Access Control n
        using Addr = Register::Address<0x4000d818,0x00000000,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 0 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> m0pe{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 1 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> m1pe{}; 
        ///Bus Master 2 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 2 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> m2pe{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class M3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,M3smVal> m3sm{}; 
        namespace M3smValC{
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v11> v11{};
        }
        ///Bus Master 3 Process Identifier Enable
        enum class M3peVal {
            v0=0x00000000,     ///<Do not include the process identifier in the evaluation
            v1=0x00000001,     ///<Include the process identifier and mask (RGDn.RGDAAC) in the region hit evaluation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,M3peVal> m3pe{}; 
        namespace M3peValC{
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v1> v1{};
        }
        ///Bus Master 4 Write Enable
        enum class M4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,M4weVal> m4we{}; 
        namespace M4weValC{
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v1> v1{};
        }
        ///Bus Master 4 Read Enable
        enum class M4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,M4reVal> m4re{}; 
        namespace M4reValC{
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v1> v1{};
        }
        ///Bus Master 5 Write Enable
        enum class M5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,M5weVal> m5we{}; 
        namespace M5weValC{
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v1> v1{};
        }
        ///Bus Master 5 Read Enable
        enum class M5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,M5reVal> m5re{}; 
        namespace M5reValC{
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v1> v1{};
        }
        ///Bus Master 6 Write Enable
        enum class M6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,M6weVal> m6we{}; 
        namespace M6weValC{
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v1> v1{};
        }
        ///Bus Master 6 Read Enable
        enum class M6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,M6reVal> m6re{}; 
        namespace M6reValC{
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v1> v1{};
        }
        ///Bus Master 7 Write Enable
        enum class M7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,M7weVal> m7we{}; 
        namespace M7weValC{
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v1> v1{};
        }
        ///Bus Master 7 Read Enable
        enum class M7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,M7reVal> m7re{}; 
        namespace M7reValC{
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v1> v1{};
        }
    }
    namespace MpuRgdaac7{    ///<Region Descriptor Alternate Access Control n
        using Addr = Register::Address<0x4000d81c,0x00000000,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 0 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> m0pe{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 1 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> m1pe{}; 
        ///Bus Master 2 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 2 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> m2pe{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class M3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,M3smVal> m3sm{}; 
        namespace M3smValC{
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v11> v11{};
        }
        ///Bus Master 3 Process Identifier Enable
        enum class M3peVal {
            v0=0x00000000,     ///<Do not include the process identifier in the evaluation
            v1=0x00000001,     ///<Include the process identifier and mask (RGDn.RGDAAC) in the region hit evaluation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,M3peVal> m3pe{}; 
        namespace M3peValC{
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v1> v1{};
        }
        ///Bus Master 4 Write Enable
        enum class M4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,M4weVal> m4we{}; 
        namespace M4weValC{
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v1> v1{};
        }
        ///Bus Master 4 Read Enable
        enum class M4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,M4reVal> m4re{}; 
        namespace M4reValC{
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v1> v1{};
        }
        ///Bus Master 5 Write Enable
        enum class M5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,M5weVal> m5we{}; 
        namespace M5weValC{
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v1> v1{};
        }
        ///Bus Master 5 Read Enable
        enum class M5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,M5reVal> m5re{}; 
        namespace M5reValC{
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v1> v1{};
        }
        ///Bus Master 6 Write Enable
        enum class M6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,M6weVal> m6we{}; 
        namespace M6weValC{
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v1> v1{};
        }
        ///Bus Master 6 Read Enable
        enum class M6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,M6reVal> m6re{}; 
        namespace M6reValC{
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v1> v1{};
        }
        ///Bus Master 7 Write Enable
        enum class M7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,M7weVal> m7we{}; 
        namespace M7weValC{
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v1> v1{};
        }
        ///Bus Master 7 Read Enable
        enum class M7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,M7reVal> m7re{}; 
        namespace M7reValC{
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v1> v1{};
        }
    }
    namespace MpuRgdaac8{    ///<Region Descriptor Alternate Access Control n
        using Addr = Register::Address<0x4000d820,0x00000000,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 0 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> m0pe{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 1 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> m1pe{}; 
        ///Bus Master 2 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 2 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> m2pe{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class M3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,M3smVal> m3sm{}; 
        namespace M3smValC{
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v11> v11{};
        }
        ///Bus Master 3 Process Identifier Enable
        enum class M3peVal {
            v0=0x00000000,     ///<Do not include the process identifier in the evaluation
            v1=0x00000001,     ///<Include the process identifier and mask (RGDn.RGDAAC) in the region hit evaluation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,M3peVal> m3pe{}; 
        namespace M3peValC{
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v1> v1{};
        }
        ///Bus Master 4 Write Enable
        enum class M4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,M4weVal> m4we{}; 
        namespace M4weValC{
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v1> v1{};
        }
        ///Bus Master 4 Read Enable
        enum class M4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,M4reVal> m4re{}; 
        namespace M4reValC{
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v1> v1{};
        }
        ///Bus Master 5 Write Enable
        enum class M5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,M5weVal> m5we{}; 
        namespace M5weValC{
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v1> v1{};
        }
        ///Bus Master 5 Read Enable
        enum class M5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,M5reVal> m5re{}; 
        namespace M5reValC{
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v1> v1{};
        }
        ///Bus Master 6 Write Enable
        enum class M6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,M6weVal> m6we{}; 
        namespace M6weValC{
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v1> v1{};
        }
        ///Bus Master 6 Read Enable
        enum class M6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,M6reVal> m6re{}; 
        namespace M6reValC{
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v1> v1{};
        }
        ///Bus Master 7 Write Enable
        enum class M7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,M7weVal> m7we{}; 
        namespace M7weValC{
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v1> v1{};
        }
        ///Bus Master 7 Read Enable
        enum class M7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,M7reVal> m7re{}; 
        namespace M7reValC{
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v1> v1{};
        }
    }
    namespace MpuRgdaac9{    ///<Region Descriptor Alternate Access Control n
        using Addr = Register::Address<0x4000d824,0x00000000,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 0 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> m0pe{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 1 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> m1pe{}; 
        ///Bus Master 2 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 2 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> m2pe{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class M3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,M3smVal> m3sm{}; 
        namespace M3smValC{
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v11> v11{};
        }
        ///Bus Master 3 Process Identifier Enable
        enum class M3peVal {
            v0=0x00000000,     ///<Do not include the process identifier in the evaluation
            v1=0x00000001,     ///<Include the process identifier and mask (RGDn.RGDAAC) in the region hit evaluation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,M3peVal> m3pe{}; 
        namespace M3peValC{
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v1> v1{};
        }
        ///Bus Master 4 Write Enable
        enum class M4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,M4weVal> m4we{}; 
        namespace M4weValC{
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v1> v1{};
        }
        ///Bus Master 4 Read Enable
        enum class M4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,M4reVal> m4re{}; 
        namespace M4reValC{
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v1> v1{};
        }
        ///Bus Master 5 Write Enable
        enum class M5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,M5weVal> m5we{}; 
        namespace M5weValC{
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v1> v1{};
        }
        ///Bus Master 5 Read Enable
        enum class M5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,M5reVal> m5re{}; 
        namespace M5reValC{
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v1> v1{};
        }
        ///Bus Master 6 Write Enable
        enum class M6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,M6weVal> m6we{}; 
        namespace M6weValC{
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v1> v1{};
        }
        ///Bus Master 6 Read Enable
        enum class M6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,M6reVal> m6re{}; 
        namespace M6reValC{
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v1> v1{};
        }
        ///Bus Master 7 Write Enable
        enum class M7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,M7weVal> m7we{}; 
        namespace M7weValC{
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v1> v1{};
        }
        ///Bus Master 7 Read Enable
        enum class M7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,M7reVal> m7re{}; 
        namespace M7reValC{
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v1> v1{};
        }
    }
    namespace MpuRgdaac10{    ///<Region Descriptor Alternate Access Control n
        using Addr = Register::Address<0x4000d828,0x00000000,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 0 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> m0pe{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 1 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> m1pe{}; 
        ///Bus Master 2 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 2 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> m2pe{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class M3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,M3smVal> m3sm{}; 
        namespace M3smValC{
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v11> v11{};
        }
        ///Bus Master 3 Process Identifier Enable
        enum class M3peVal {
            v0=0x00000000,     ///<Do not include the process identifier in the evaluation
            v1=0x00000001,     ///<Include the process identifier and mask (RGDn.RGDAAC) in the region hit evaluation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,M3peVal> m3pe{}; 
        namespace M3peValC{
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v1> v1{};
        }
        ///Bus Master 4 Write Enable
        enum class M4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,M4weVal> m4we{}; 
        namespace M4weValC{
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v1> v1{};
        }
        ///Bus Master 4 Read Enable
        enum class M4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,M4reVal> m4re{}; 
        namespace M4reValC{
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v1> v1{};
        }
        ///Bus Master 5 Write Enable
        enum class M5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,M5weVal> m5we{}; 
        namespace M5weValC{
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v1> v1{};
        }
        ///Bus Master 5 Read Enable
        enum class M5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,M5reVal> m5re{}; 
        namespace M5reValC{
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v1> v1{};
        }
        ///Bus Master 6 Write Enable
        enum class M6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,M6weVal> m6we{}; 
        namespace M6weValC{
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v1> v1{};
        }
        ///Bus Master 6 Read Enable
        enum class M6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,M6reVal> m6re{}; 
        namespace M6reValC{
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v1> v1{};
        }
        ///Bus Master 7 Write Enable
        enum class M7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,M7weVal> m7we{}; 
        namespace M7weValC{
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v1> v1{};
        }
        ///Bus Master 7 Read Enable
        enum class M7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,M7reVal> m7re{}; 
        namespace M7reValC{
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v1> v1{};
        }
    }
    namespace MpuRgdaac11{    ///<Region Descriptor Alternate Access Control n
        using Addr = Register::Address<0x4000d82c,0x00000000,0,unsigned>;
        ///Bus Master 0 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> m0um{}; 
        ///Bus Master 0 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> m0sm{}; 
        ///Bus Master 0 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> m0pe{}; 
        ///Bus Master 1 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> m1um{}; 
        ///Bus Master 1 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> m1sm{}; 
        ///Bus Master 1 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> m1pe{}; 
        ///Bus Master 2 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> m2um{}; 
        ///Bus Master 2 Supervisor Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> m2sm{}; 
        ///Bus Master 2 Process Identifier Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> m2pe{}; 
        ///Bus Master 3 User Mode Access Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> m3um{}; 
        ///Bus Master 3 Supervisor Mode Access Control
        enum class M3smVal {
            v00=0x00000000,     ///<r/w/x; read, write and execute allowed
            v01=0x00000001,     ///<r/x; read and execute allowed, but no write
            v10=0x00000002,     ///<r/w; read and write allowed, but no execute
            v11=0x00000003,     ///<Same as User mode defined in M3UM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,M3smVal> m3sm{}; 
        namespace M3smValC{
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v00> v00{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v01> v01{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v10> v10{};
            constexpr Register::FieldValue<decltype(m3sm)::Type,M3smVal::v11> v11{};
        }
        ///Bus Master 3 Process Identifier Enable
        enum class M3peVal {
            v0=0x00000000,     ///<Do not include the process identifier in the evaluation
            v1=0x00000001,     ///<Include the process identifier and mask (RGDn.RGDAAC) in the region hit evaluation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,M3peVal> m3pe{}; 
        namespace M3peValC{
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m3pe)::Type,M3peVal::v1> v1{};
        }
        ///Bus Master 4 Write Enable
        enum class M4weVal {
            v0=0x00000000,     ///<Bus master 4 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 4 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,M4weVal> m4we{}; 
        namespace M4weValC{
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4we)::Type,M4weVal::v1> v1{};
        }
        ///Bus Master 4 Read Enable
        enum class M4reVal {
            v0=0x00000000,     ///<Bus master 4 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 4 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,M4reVal> m4re{}; 
        namespace M4reValC{
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m4re)::Type,M4reVal::v1> v1{};
        }
        ///Bus Master 5 Write Enable
        enum class M5weVal {
            v0=0x00000000,     ///<Bus master 5 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 5 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,M5weVal> m5we{}; 
        namespace M5weValC{
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5we)::Type,M5weVal::v1> v1{};
        }
        ///Bus Master 5 Read Enable
        enum class M5reVal {
            v0=0x00000000,     ///<Bus master 5 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 5 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,M5reVal> m5re{}; 
        namespace M5reValC{
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m5re)::Type,M5reVal::v1> v1{};
        }
        ///Bus Master 6 Write Enable
        enum class M6weVal {
            v0=0x00000000,     ///<Bus master 6 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 6 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,M6weVal> m6we{}; 
        namespace M6weValC{
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6we)::Type,M6weVal::v1> v1{};
        }
        ///Bus Master 6 Read Enable
        enum class M6reVal {
            v0=0x00000000,     ///<Bus master 6 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 6 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,M6reVal> m6re{}; 
        namespace M6reValC{
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m6re)::Type,M6reVal::v1> v1{};
        }
        ///Bus Master 7 Write Enable
        enum class M7weVal {
            v0=0x00000000,     ///<Bus master 7 writes terminate with an access error and the write is not performed
            v1=0x00000001,     ///<Bus master 7 writes allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,M7weVal> m7we{}; 
        namespace M7weValC{
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7we)::Type,M7weVal::v1> v1{};
        }
        ///Bus Master 7 Read Enable
        enum class M7reVal {
            v0=0x00000000,     ///<Bus master 7 reads terminate with an access error and the read is not performed
            v1=0x00000001,     ///<Bus master 7 reads allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,M7reVal> m7re{}; 
        namespace M7reValC{
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v0> v0{};
            constexpr Register::FieldValue<decltype(m7re)::Type,M7reVal::v1> v1{};
        }
    }
}
