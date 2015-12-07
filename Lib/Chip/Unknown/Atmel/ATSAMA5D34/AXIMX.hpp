#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//AXI Matrix
    namespace AximxRemap{    ///<Remap Register
        using Addr = Register::Address<0x00800000,0xfffffffc,0,unsigned>;
        ///Remap State 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> remap0{}; 
        namespace Remap0ValC{
        }
        ///Remap State 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> remap1{}; 
        namespace Remap1ValC{
        }
    }
    namespace AximxPeriphId4{    ///<Peripheral ID Register 4
        using Addr = Register::Address<0x00801fd0,0xffffff00,0,unsigned>;
        ///Peripheral ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> id{}; 
        namespace IdValC{
        }
    }
    namespace AximxPeriphId5{    ///<Peripheral ID Register 5
        using Addr = Register::Address<0x00801fd4,0xffffff00,0,unsigned>;
        ///Peripheral ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> id{}; 
        namespace IdValC{
        }
    }
    namespace AximxPeriphId6{    ///<Peripheral ID Register 6
        using Addr = Register::Address<0x00801fd8,0xffffff00,0,unsigned>;
        ///Peripheral ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> id{}; 
        namespace IdValC{
        }
    }
    namespace AximxPeriphId7{    ///<Peripheral ID Register 7
        using Addr = Register::Address<0x00801fdc,0xffffff00,0,unsigned>;
        ///Peripheral ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> id{}; 
        namespace IdValC{
        }
    }
    namespace AximxPeriphId0{    ///<Peripheral ID Register 0
        using Addr = Register::Address<0x00801fe0,0xffffff00,0,unsigned>;
        ///Peripheral ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> id{}; 
        namespace IdValC{
        }
    }
    namespace AximxPeriphId1{    ///<Peripheral ID Register 1
        using Addr = Register::Address<0x00801fe4,0xffffff00,0,unsigned>;
        ///Peripheral ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> id{}; 
        namespace IdValC{
        }
    }
    namespace AximxPeriphId2{    ///<Peripheral ID Register 2
        using Addr = Register::Address<0x00801fe8,0xffffff00,0,unsigned>;
        ///Peripheral ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> id{}; 
        namespace IdValC{
        }
    }
    namespace AximxPeriphId3{    ///<Peripheral ID Register 3
        using Addr = Register::Address<0x00801fec,0xffffff00,0,unsigned>;
        ///Peripheral ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> id{}; 
        namespace IdValC{
        }
    }
    namespace AximxCompId0{    ///<Component ID Register
        using Addr = Register::Address<0x00801ff0,0xffffff00,0,unsigned>;
        ///Component ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> id{}; 
        namespace IdValC{
        }
    }
    namespace AximxCompId1{    ///<Component ID Register
        using Addr = Register::Address<0x00801ff4,0xffffff00,0,unsigned>;
        ///Component ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> id{}; 
        namespace IdValC{
        }
    }
    namespace AximxCompId2{    ///<Component ID Register
        using Addr = Register::Address<0x00801ff8,0xffffff00,0,unsigned>;
        ///Component ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> id{}; 
        namespace IdValC{
        }
    }
    namespace AximxCompId3{    ///<Component ID Register
        using Addr = Register::Address<0x00801ffc,0xffffff00,0,unsigned>;
        ///Component ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> id{}; 
        namespace IdValC{
        }
    }
    namespace AximxAmib3FnModBmIss{    ///<AMIB3 Bus Matrix Functionality Modification Register
        using Addr = Register::Address<0x00805008,0xfffffffc,0,unsigned>;
        ///Read Issuing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdIss{}; 
        namespace RdissValC{
        }
        ///Write Issuing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wrIss{}; 
        namespace WrissValC{
        }
    }
    namespace AximxAmib3FnMod2{    ///<AMIB3 Bypass Merge
        using Addr = Register::Address<0x00805024,0xfffffffe,0,unsigned>;
        ///Bypass Merge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bpMrg{}; 
        namespace BpmrgValC{
        }
    }
    namespace AximxAsib0ReadQos{    ///<ASIB0 Read Channel QoS Register
        using Addr = Register::Address<0x00842100,0xfffffff0,0,unsigned>;
        ///Read QoS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> rdQos{}; 
        namespace RdqosValC{
        }
    }
    namespace AximxAsib0WriteQos{    ///<ASIB0 Write Channel QoS Register
        using Addr = Register::Address<0x00842104,0xfffffff0,0,unsigned>;
        ///Write QoS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> wrQos{}; 
        namespace WrqosValC{
        }
    }
    namespace AximxAsib1FnModAhb{    ///<ASIB1 AHB Functionality Modification Register
        using Addr = Register::Address<0x00843028,0xfffffff8,0,unsigned>;
        ///Read INCR Override
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdIncrOvr{}; 
        namespace RdincrovrValC{
        }
        ///Write INCR override
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wrIncrOvr{}; 
        namespace WrincrovrValC{
        }
        ///Lock Override
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lockOvr{}; 
        namespace LockovrValC{
        }
    }
    namespace AximxAsib1ReadQos{    ///<ASIB1 Read Channel QoS Register
        using Addr = Register::Address<0x00843100,0xfffffff0,0,unsigned>;
        ///Read QoS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> rdQos{}; 
        namespace RdqosValC{
        }
    }
    namespace AximxAsib1WriteQos{    ///<ASIB1 Write Channel QoS Register
        using Addr = Register::Address<0x00843104,0xfffffff0,0,unsigned>;
        ///Write QoS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> wrQos{}; 
        namespace WrqosValC{
        }
    }
    namespace AximxAsib1FnMod{    ///<ASIB1 Issuing Functionality Modification Register
        using Addr = Register::Address<0x00843108,0xfffffffc,0,unsigned>;
        ///Read Issuing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdIss{}; 
        namespace RdissValC{
        }
        ///Write Issuing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wrIss{}; 
        namespace WrissValC{
        }
    }
}
