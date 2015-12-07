#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Device Service Unit
    namespace DsuAddr{    ///<Address
        using Addr = Register::Address<0x41002004,0x00000003,0,unsigned>;
        ///Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace DsuCid0{    ///<Component Identification 0
        using Addr = Register::Address<0x41003ff0,0xffffff00,0,unsigned>;
        ///Preamble Byte 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> preambleb0{}; 
        namespace Preambleb0ValC{
        }
    }
    namespace DsuCid1{    ///<Component Identification 1
        using Addr = Register::Address<0x41003ff4,0xffffff00,0,unsigned>;
        ///Preamble
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> preamble{}; 
        namespace PreambleValC{
        }
        ///Component Class
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> cclass{}; 
        namespace CclassValC{
        }
    }
    namespace DsuCid2{    ///<Component Identification 2
        using Addr = Register::Address<0x41003ff8,0xffffff00,0,unsigned>;
        ///Preamble Byte 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> preambleb2{}; 
        namespace Preambleb2ValC{
        }
    }
    namespace DsuCid3{    ///<Component Identification 3
        using Addr = Register::Address<0x41003ffc,0xffffff00,0,unsigned>;
        ///Preamble Byte 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> preambleb3{}; 
        namespace Preambleb3ValC{
        }
    }
    namespace DsuCtrl{    ///<Control
        using Addr = Register::Address<0x41002000,0xffffffe2,0,unsigned char>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        namespace SwrstValC{
        }
        ///32-bit Cyclic Redundancy Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> crc{}; 
        namespace CrcValC{
        }
        ///Memory Built-In Self-Test
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mbist{}; 
        namespace MbistValC{
        }
        ///Chip Erase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ce{}; 
        namespace CeValC{
        }
    }
    namespace DsuData{    ///<Data
        using Addr = Register::Address<0x4100200c,0x00000000,0,unsigned>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace DsuDcc0{    ///<Debug Communication Channel n
        using Addr = Register::Address<0x41002010,0x00000000,0,unsigned>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace DsuDcc1{    ///<Debug Communication Channel n
        using Addr = Register::Address<0x41002014,0x00000000,0,unsigned>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace DsuDid{    ///<Device Identification
        using Addr = Register::Address<0x41002018,0x00400000,0,unsigned>;
        ///Device Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> devsel{}; 
        namespace DevselValC{
        }
        ///Revision
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> revision{}; 
        namespace RevisionValC{
        }
        ///Die Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> die{}; 
        namespace DieValC{
        }
        ///Product Series
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> series{}; 
        namespace SeriesValC{
        }
        ///Product Family
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,23),Register::ReadWriteAccess,unsigned> family{}; 
        namespace FamilyValC{
        }
        ///Processor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> processor{}; 
        namespace ProcessorValC{
        }
    }
    namespace DsuEnd{    ///<Coresight ROM Table End
        using Addr = Register::Address<0x41003008,0x00000000,0,unsigned>;
        ///End Marker
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> end{}; 
        namespace EndValC{
        }
    }
    namespace DsuEntry0{    ///<Coresight ROM Table Entry n
        using Addr = Register::Address<0x41003000,0x00000ffc,0,unsigned>;
        ///Entry Present
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epres{}; 
        namespace EpresValC{
        }
        ///Format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fmt{}; 
        namespace FmtValC{
        }
        ///Address Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> addoff{}; 
        namespace AddoffValC{
        }
    }
    namespace DsuEntry1{    ///<Coresight ROM Table Entry n
        using Addr = Register::Address<0x41003004,0x00000ffc,0,unsigned>;
        ///Entry Present
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epres{}; 
        namespace EpresValC{
        }
        ///Format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fmt{}; 
        namespace FmtValC{
        }
        ///Address Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> addoff{}; 
        namespace AddoffValC{
        }
    }
    namespace DsuLength{    ///<Length
        using Addr = Register::Address<0x41002008,0x00000003,0,unsigned>;
        ///Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> length{}; 
        namespace LengthValC{
        }
    }
    namespace DsuMemtype{    ///<Coresight ROM Table Memory Type
        using Addr = Register::Address<0x41003fcc,0xfffffffe,0,unsigned>;
        ///System Memory Present
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> smemp{}; 
        namespace SmempValC{
        }
    }
    namespace DsuPid0{    ///<Peripheral Identification 0
        using Addr = Register::Address<0x41003fe0,0xffffff00,0,unsigned>;
        ///Part Number Low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> partnbl{}; 
        namespace PartnblValC{
        }
    }
    namespace DsuPid1{    ///<Peripheral Identification 1
        using Addr = Register::Address<0x41003fe4,0xffffff00,0,unsigned>;
        ///Part Number High
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> partnbh{}; 
        namespace PartnbhValC{
        }
        ///Low part of the JEP-106 Identity Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> jepidcl{}; 
        namespace JepidclValC{
        }
    }
    namespace DsuPid2{    ///<Peripheral Identification 2
        using Addr = Register::Address<0x41003fe8,0xffffff00,0,unsigned>;
        ///JEP-106 Identity Code High
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> jepidch{}; 
        namespace JepidchValC{
        }
        ///JEP-106 Identity Code is used
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jepu{}; 
        namespace JepuValC{
        }
        ///Revision Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> revision{}; 
        namespace RevisionValC{
        }
    }
    namespace DsuPid3{    ///<Peripheral Identification 3
        using Addr = Register::Address<0x41003fec,0xffffff00,0,unsigned>;
        ///ARM CUSMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cusmod{}; 
        namespace CusmodValC{
        }
        ///Revision Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> revand{}; 
        namespace RevandValC{
        }
    }
    namespace DsuPid4{    ///<Peripheral Identification 4
        using Addr = Register::Address<0x41003fd0,0xffffff00,0,unsigned>;
        ///JEP-106 Continuation Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> jepcc{}; 
        namespace JepccValC{
        }
        ///4KB Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> fkbc{}; 
        namespace FkbcValC{
        }
    }
    namespace DsuStatusa{    ///<Status A
        using Addr = Register::Address<0x41002001,0xffffffe0,0,unsigned char>;
        ///Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
        ///CPU Reset Phase Extension
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> crstext{}; 
        namespace CrstextValC{
        }
        ///Bus Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> berr{}; 
        namespace BerrValC{
        }
        ///Failure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fail{}; 
        namespace FailValC{
        }
        ///Protection Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> perr{}; 
        namespace PerrValC{
        }
    }
    namespace DsuStatusb{    ///<Status B
        using Addr = Register::Address<0x41002002,0xffffffe0,0,unsigned char>;
        ///Protected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> prot{}; 
        namespace ProtValC{
        }
        ///Debugger Present
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dbgpres{}; 
        namespace DbgpresValC{
        }
        ///Debug Communication Channel 0 Dirty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dccd0{}; 
        namespace Dccd0ValC{
        }
        ///Debug Communication Channel 1 Dirty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dccd1{}; 
        namespace Dccd1ValC{
        }
        ///Hot-Plugging Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> hpe{}; 
        namespace HpeValC{
        }
    }
}
