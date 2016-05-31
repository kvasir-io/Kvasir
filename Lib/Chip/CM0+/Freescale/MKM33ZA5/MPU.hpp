#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Memory protection unit
    namespace MpuCesr{    ///<Control/Error Status Register
        using Addr = Register::Address<0x4000a000,0x3ff000fe,0x00000000,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nrgd{}; 
        ///Number Of Slave Ports
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nsp{}; 
        ///Hardware Revision Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hrl{}; 
        ///Slave Port n Error
        enum class SperrVal {
            v0=0x00000000,     ///<No error has occurred for slave port n.
            v1=0x00000001,     ///<An error has occurred for slave port n.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,SperrVal> sperr{}; 
        namespace SperrValC{
            constexpr Register::FieldValue<decltype(sperr)::Type,SperrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sperr)::Type,SperrVal::v1> v1{};
        }
    }
    namespace MpuEar0{    ///<Error Address Register, slave port n
        using Addr = Register::Address<0x4000a010,0x00000000,0x00000000,unsigned>;
        ///Error Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eaddr{}; 
    }
    namespace MpuEar1{    ///<Error Address Register, slave port n
        using Addr = Register::Address<0x4000a018,0x00000000,0x00000000,unsigned>;
        ///Error Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eaddr{}; 
    }
    namespace MpuEdr0{    ///<Error Detail Register, slave port n
        using Addr = Register::Address<0x4000a014,0x00000000,0x00000000,unsigned>;
        ///Error Read/Write
        enum class ErwVal {
            v0=0x00000000,     ///<Read
            v1=0x00000001,     ///<Write
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,ErwVal> erw{}; 
        namespace ErwValC{
            constexpr Register::FieldValue<decltype(erw)::Type,ErwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(erw)::Type,ErwVal::v1> v1{};
        }
        ///Error Attributes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eattr{}; 
        ///Error Master Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> emn{}; 
        ///Error Process Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epid{}; 
        ///Error Access Control Detail
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eacd{}; 
    }
    namespace MpuEdr1{    ///<Error Detail Register, slave port n
        using Addr = Register::Address<0x4000a01c,0x00000000,0x00000000,unsigned>;
        ///Error Read/Write
        enum class ErwVal {
            v0=0x00000000,     ///<Read
            v1=0x00000001,     ///<Write
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,ErwVal> erw{}; 
        namespace ErwValC{
            constexpr Register::FieldValue<decltype(erw)::Type,ErwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(erw)::Type,ErwVal::v1> v1{};
        }
        ///Error Attributes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eattr{}; 
        ///Error Master Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> emn{}; 
        ///Error Process Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> epid{}; 
        ///Error Access Control Detail
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eacd{}; 
    }
    namespace MpuRgd0Word0{    ///<Region Descriptor n, Word 0
        using Addr = Register::Address<0x4000a400,0x0000001f,0x00000000,unsigned>;
        ///Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> srtaddr{}; 
    }
    namespace MpuRgd1Word0{    ///<Region Descriptor n, Word 0
        using Addr = Register::Address<0x4000a410,0x0000001f,0x00000000,unsigned>;
        ///Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> srtaddr{}; 
    }
    namespace MpuRgd2Word0{    ///<Region Descriptor n, Word 0
        using Addr = Register::Address<0x4000a420,0x0000001f,0x00000000,unsigned>;
        ///Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> srtaddr{}; 
    }
    namespace MpuRgd3Word0{    ///<Region Descriptor n, Word 0
        using Addr = Register::Address<0x4000a430,0x0000001f,0x00000000,unsigned>;
        ///Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> srtaddr{}; 
    }
    namespace MpuRgd4Word0{    ///<Region Descriptor n, Word 0
        using Addr = Register::Address<0x4000a440,0x0000001f,0x00000000,unsigned>;
        ///Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> srtaddr{}; 
    }
    namespace MpuRgd5Word0{    ///<Region Descriptor n, Word 0
        using Addr = Register::Address<0x4000a450,0x0000001f,0x00000000,unsigned>;
        ///Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> srtaddr{}; 
    }
    namespace MpuRgd6Word0{    ///<Region Descriptor n, Word 0
        using Addr = Register::Address<0x4000a460,0x0000001f,0x00000000,unsigned>;
        ///Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> srtaddr{}; 
    }
    namespace MpuRgd7Word0{    ///<Region Descriptor n, Word 0
        using Addr = Register::Address<0x4000a470,0x0000001f,0x00000000,unsigned>;
        ///Start Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> srtaddr{}; 
    }
    namespace MpuRgd0Word1{    ///<Region Descriptor n, Word 1
        using Addr = Register::Address<0x4000a404,0x0000001f,0x00000000,unsigned>;
        ///End Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace MpuRgd1Word1{    ///<Region Descriptor n, Word 1
        using Addr = Register::Address<0x4000a414,0x0000001f,0x00000000,unsigned>;
        ///End Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace MpuRgd2Word1{    ///<Region Descriptor n, Word 1
        using Addr = Register::Address<0x4000a424,0x0000001f,0x00000000,unsigned>;
        ///End Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace MpuRgd3Word1{    ///<Region Descriptor n, Word 1
        using Addr = Register::Address<0x4000a434,0x0000001f,0x00000000,unsigned>;
        ///End Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace MpuRgd4Word1{    ///<Region Descriptor n, Word 1
        using Addr = Register::Address<0x4000a444,0x0000001f,0x00000000,unsigned>;
        ///End Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace MpuRgd5Word1{    ///<Region Descriptor n, Word 1
        using Addr = Register::Address<0x4000a454,0x0000001f,0x00000000,unsigned>;
        ///End Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace MpuRgd6Word1{    ///<Region Descriptor n, Word 1
        using Addr = Register::Address<0x4000a464,0x0000001f,0x00000000,unsigned>;
        ///End Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace MpuRgd7Word1{    ///<Region Descriptor n, Word 1
        using Addr = Register::Address<0x4000a474,0x0000001f,0x00000000,unsigned>;
        ///End Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace MpuRgd0Word2{    ///<Region Descriptor n, Word 2
        using Addr = Register::Address<0x4000a408,0x00000000,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x4000a418,0x00000000,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x4000a428,0x00000000,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x4000a438,0x00000000,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x4000a448,0x00000000,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x4000a458,0x00000000,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x4000a468,0x00000000,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x4000a478,0x00000000,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x4000a40c,0x0000fffe,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x4000a41c,0x0000fffe,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x4000a42c,0x0000fffe,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x4000a43c,0x0000fffe,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x4000a44c,0x0000fffe,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x4000a45c,0x0000fffe,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x4000a46c,0x0000fffe,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x4000a47c,0x0000fffe,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x4000a800,0x00000000,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x4000a804,0x00000000,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x4000a808,0x00000000,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x4000a80c,0x00000000,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x4000a810,0x00000000,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x4000a814,0x00000000,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x4000a818,0x00000000,0x00000000,unsigned>;
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
        using Addr = Register::Address<0x4000a81c,0x00000000,0x00000000,unsigned>;
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
