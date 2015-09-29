#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Watchdog Timer
    namespace WdtClear{    ///<Clear
        using Addr = Register::Address<0x40001008,0xffffff00,0,unsigned char>;
        ///Watchdog Clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clear{}; 
    }
    namespace WdtConfig{    ///<Configuration
        using Addr = Register::Address<0x40001001,0xffffff00,0,unsigned char>;
        ///Time-Out Period
        enum class perVal {
            v0x0=0x00000000,     ///<8 clock cycles
            v0x1=0x00000001,     ///<16 clock cycles
            v0x2=0x00000002,     ///<32 clock cycles
            v0x3=0x00000003,     ///<64 clock cycles
            v0x4=0x00000004,     ///<128 clock cycles
            v0x5=0x00000005,     ///<256 clock cycles
            v0x6=0x00000006,     ///<512 clock cycles
            v0x7=0x00000007,     ///<1024 clock cycles
            v0x8=0x00000008,     ///<2048 clock cycles
            v0x9=0x00000009,     ///<4096 clock cycles
            v0xa=0x0000000a,     ///<8192 clock cycles
            v0xb=0x0000000b,     ///<16384 clock cycles
        };
        namespace perValC{
            constexpr MPL::Value<perVal,perVal::v0x0> v0x0{};
            constexpr MPL::Value<perVal,perVal::v0x1> v0x1{};
            constexpr MPL::Value<perVal,perVal::v0x2> v0x2{};
            constexpr MPL::Value<perVal,perVal::v0x3> v0x3{};
            constexpr MPL::Value<perVal,perVal::v0x4> v0x4{};
            constexpr MPL::Value<perVal,perVal::v0x5> v0x5{};
            constexpr MPL::Value<perVal,perVal::v0x6> v0x6{};
            constexpr MPL::Value<perVal,perVal::v0x7> v0x7{};
            constexpr MPL::Value<perVal,perVal::v0x8> v0x8{};
            constexpr MPL::Value<perVal,perVal::v0x9> v0x9{};
            constexpr MPL::Value<perVal,perVal::v0xa> v0xa{};
            constexpr MPL::Value<perVal,perVal::v0xb> v0xb{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,perVal> per{}; 
        ///Window Mode Time-Out Period
        enum class windowVal {
            v0x0=0x00000000,     ///<8 clock cycles
            v0x1=0x00000001,     ///<16 clock cycles
            v0x2=0x00000002,     ///<32 clock cycles
            v0x3=0x00000003,     ///<64 clock cycles
            v0x4=0x00000004,     ///<128 clock cycles
            v0x5=0x00000005,     ///<256 clock cycles
            v0x6=0x00000006,     ///<512 clock cycles
            v0x7=0x00000007,     ///<1024 clock cycles
            v0x8=0x00000008,     ///<2048 clock cycles
            v0x9=0x00000009,     ///<4096 clock cycles
            v0xa=0x0000000a,     ///<8192 clock cycles
            v0xb=0x0000000b,     ///<16384 clock cycles
        };
        namespace windowValC{
            constexpr MPL::Value<windowVal,windowVal::v0x0> v0x0{};
            constexpr MPL::Value<windowVal,windowVal::v0x1> v0x1{};
            constexpr MPL::Value<windowVal,windowVal::v0x2> v0x2{};
            constexpr MPL::Value<windowVal,windowVal::v0x3> v0x3{};
            constexpr MPL::Value<windowVal,windowVal::v0x4> v0x4{};
            constexpr MPL::Value<windowVal,windowVal::v0x5> v0x5{};
            constexpr MPL::Value<windowVal,windowVal::v0x6> v0x6{};
            constexpr MPL::Value<windowVal,windowVal::v0x7> v0x7{};
            constexpr MPL::Value<windowVal,windowVal::v0x8> v0x8{};
            constexpr MPL::Value<windowVal,windowVal::v0x9> v0x9{};
            constexpr MPL::Value<windowVal,windowVal::v0xa> v0xa{};
            constexpr MPL::Value<windowVal,windowVal::v0xb> v0xb{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,windowVal> window{}; 
    }
    namespace WdtCtrl{    ///<Control
        using Addr = Register::Address<0x40001000,0xffffff79,0,unsigned char>;
        ///Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Watchdog Timer Window Mode Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wen{}; 
        ///Always-On
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> alwayson{}; 
    }
    namespace WdtEwctrl{    ///<Early Warning Interrupt Control
        using Addr = Register::Address<0x40001002,0xfffffff0,0,unsigned char>;
        ///Early Warning Interrupt Time Offset
        enum class ewoffsetVal {
            v0x0=0x00000000,     ///<8 clock cycles
            v0x1=0x00000001,     ///<16 clock cycles
            v0x2=0x00000002,     ///<32 clock cycles
            v0x3=0x00000003,     ///<64 clock cycles
            v0x4=0x00000004,     ///<128 clock cycles
            v0x5=0x00000005,     ///<256 clock cycles
            v0x6=0x00000006,     ///<512 clock cycles
            v0x7=0x00000007,     ///<1024 clock cycles
            v0x8=0x00000008,     ///<2048 clock cycles
            v0x9=0x00000009,     ///<4096 clock cycles
            v0xa=0x0000000a,     ///<8192 clock cycles
            v0xb=0x0000000b,     ///<16384 clock cycles
        };
        namespace ewoffsetValC{
            constexpr MPL::Value<ewoffsetVal,ewoffsetVal::v0x0> v0x0{};
            constexpr MPL::Value<ewoffsetVal,ewoffsetVal::v0x1> v0x1{};
            constexpr MPL::Value<ewoffsetVal,ewoffsetVal::v0x2> v0x2{};
            constexpr MPL::Value<ewoffsetVal,ewoffsetVal::v0x3> v0x3{};
            constexpr MPL::Value<ewoffsetVal,ewoffsetVal::v0x4> v0x4{};
            constexpr MPL::Value<ewoffsetVal,ewoffsetVal::v0x5> v0x5{};
            constexpr MPL::Value<ewoffsetVal,ewoffsetVal::v0x6> v0x6{};
            constexpr MPL::Value<ewoffsetVal,ewoffsetVal::v0x7> v0x7{};
            constexpr MPL::Value<ewoffsetVal,ewoffsetVal::v0x8> v0x8{};
            constexpr MPL::Value<ewoffsetVal,ewoffsetVal::v0x9> v0x9{};
            constexpr MPL::Value<ewoffsetVal,ewoffsetVal::v0xa> v0xa{};
            constexpr MPL::Value<ewoffsetVal,ewoffsetVal::v0xb> v0xb{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,ewoffsetVal> ewoffset{}; 
    }
    namespace WdtIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x40001004,0xfffffffe,0,unsigned char>;
        ///Early Warning Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ew{}; 
    }
    namespace WdtIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x40001005,0xfffffffe,0,unsigned char>;
        ///Early Warning Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ew{}; 
    }
    namespace WdtIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x40001006,0xfffffffe,0,unsigned char>;
        ///Early Warning
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ew{}; 
    }
    namespace WdtStatus{    ///<Status
        using Addr = Register::Address<0x40001007,0xffffff7f,0,unsigned char>;
        ///Synchronization Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> syncbusy{}; 
    }
}
