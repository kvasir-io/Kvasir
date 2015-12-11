#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Device Service Unit
    namespace DsuAddr{    ///<Address
        using Addr = Register::Address<0x41002004,0x00000003,0,unsigned>;
        ///Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace DsuCid0{    ///<Component Identification 0
        using Addr = Register::Address<0x41003ff0,0xffffff00,0,unsigned>;
        ///Preamble Byte 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> preambleb0{}; 
    }
    namespace DsuCid1{    ///<Component Identification 1
        using Addr = Register::Address<0x41003ff4,0xffffff00,0,unsigned>;
        ///Preamble
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> preamble{}; 
        ///Component Class
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> cclass{}; 
    }
    namespace DsuCid2{    ///<Component Identification 2
        using Addr = Register::Address<0x41003ff8,0xffffff00,0,unsigned>;
        ///Preamble Byte 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> preambleb2{}; 
    }
    namespace DsuCid3{    ///<Component Identification 3
        using Addr = Register::Address<0x41003ffc,0xffffff00,0,unsigned>;
        ///Preamble Byte 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> preambleb3{}; 
    }
    namespace DsuCtrl{    ///<Control
        using Addr = Register::Address<0x41002000,0xffffffe2,0,unsigned char>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///32-bit Cyclic Redundancy Check
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> crc{}; 
        ///Memory Built-In Self-Test
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mbist{}; 
        ///Chip Erase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ce{}; 
    }
    namespace DsuData{    ///<Data
        using Addr = Register::Address<0x4100200c,0x00000000,0,unsigned>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace DsuDcc0{    ///<Debug Communication Channel n
        using Addr = Register::Address<0x41002010,0x00000000,0,unsigned>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace DsuDcc1{    ///<Debug Communication Channel n
        using Addr = Register::Address<0x41002014,0x00000000,0,unsigned>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace DsuDid{    ///<Device Identification
        using Addr = Register::Address<0x41002018,0x00400000,0,unsigned>;
        ///Device Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> devsel{}; 
        ///Revision
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> revision{}; 
        ///Die Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> die{}; 
        ///Product Series
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> series{}; 
        ///Product Family
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,23),Register::ReadWriteAccess,unsigned> family{}; 
        ///Processor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> processor{}; 
    }
    namespace DsuEnd{    ///<Coresight ROM Table End
        using Addr = Register::Address<0x41003008,0x00000000,0,unsigned>;
        ///End Marker
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> end{}; 
    }
    namespace DsuEntry0{    ///<Coresight ROM Table Entry n
        using Addr = Register::Address<0x41003000,0x00000ffc,0,unsigned>;
        ///Entry Present
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epres{}; 
        ///Format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fmt{}; 
        ///Address Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> addoff{}; 
    }
    namespace DsuEntry1{    ///<Coresight ROM Table Entry n
        using Addr = Register::Address<0x41003004,0x00000ffc,0,unsigned>;
        ///Entry Present
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> epres{}; 
        ///Format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fmt{}; 
        ///Address Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> addoff{}; 
    }
    namespace DsuLength{    ///<Length
        using Addr = Register::Address<0x41002008,0x00000003,0,unsigned>;
        ///Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> length{}; 
    }
    namespace DsuMemtype{    ///<Coresight ROM Table Memory Type
        using Addr = Register::Address<0x41003fcc,0xfffffffe,0,unsigned>;
        ///System Memory Present
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> smemp{}; 
    }
    namespace DsuPid0{    ///<Peripheral Identification 0
        using Addr = Register::Address<0x41003fe0,0xffffff00,0,unsigned>;
        ///Part Number Low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> partnbl{}; 
    }
    namespace DsuPid1{    ///<Peripheral Identification 1
        using Addr = Register::Address<0x41003fe4,0xffffff00,0,unsigned>;
        ///Part Number High
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> partnbh{}; 
        ///Low part of the JEP-106 Identity Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> jepidcl{}; 
    }
    namespace DsuPid2{    ///<Peripheral Identification 2
        using Addr = Register::Address<0x41003fe8,0xffffff00,0,unsigned>;
        ///JEP-106 Identity Code High
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> jepidch{}; 
        ///JEP-106 Identity Code is used
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jepu{}; 
        ///Revision Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> revision{}; 
    }
    namespace DsuPid3{    ///<Peripheral Identification 3
        using Addr = Register::Address<0x41003fec,0xffffff00,0,unsigned>;
        ///ARM CUSMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cusmod{}; 
        ///Revision Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> revand{}; 
    }
    namespace DsuPid4{    ///<Peripheral Identification 4
        using Addr = Register::Address<0x41003fd0,0xffffff00,0,unsigned>;
        ///JEP-106 Continuation Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> jepcc{}; 
        ///4KB Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> fkbc{}; 
    }
    namespace DsuStatusa{    ///<Status A
        using Addr = Register::Address<0x41002001,0xffffffe0,0,unsigned char>;
        ///Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> done{}; 
        ///CPU Reset Phase Extension
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> crstext{}; 
        ///Bus Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> berr{}; 
        ///Failure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fail{}; 
        ///Protection Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> perr{}; 
    }
    namespace DsuStatusb{    ///<Status B
        using Addr = Register::Address<0x41002002,0xffffffe0,0,unsigned char>;
        ///Protected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> prot{}; 
        ///Debugger Present
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dbgpres{}; 
        ///Debug Communication Channel 0 Dirty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dccd0{}; 
        ///Debug Communication Channel 1 Dirty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dccd1{}; 
        ///Hot-Plugging Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> hpe{}; 
    }
}
