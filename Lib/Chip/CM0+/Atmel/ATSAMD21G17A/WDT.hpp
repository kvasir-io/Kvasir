#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Watchdog Timer
    namespace WdtClear{    ///<Clear
        using Addr = Register::Address<0x40001008,0xffffff00,0,unsigned char>;
        ///Watchdog Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clear{}; 
        namespace ClearValC{
        }
    }
    namespace WdtConfig{    ///<Configuration
        using Addr = Register::Address<0x40001001,0xffffff00,0,unsigned char>;
        ///Time-Out Period
        enum class PerVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PerVal> per{}; 
        namespace PerValC{
            constexpr Register::FieldValue<decltype(per),PerVal::v0x0> v0x0{};
            constexpr Register::FieldValue<decltype(per),PerVal::v0x1> v0x1{};
            constexpr Register::FieldValue<decltype(per),PerVal::v0x2> v0x2{};
            constexpr Register::FieldValue<decltype(per),PerVal::v0x3> v0x3{};
            constexpr Register::FieldValue<decltype(per),PerVal::v0x4> v0x4{};
            constexpr Register::FieldValue<decltype(per),PerVal::v0x5> v0x5{};
            constexpr Register::FieldValue<decltype(per),PerVal::v0x6> v0x6{};
            constexpr Register::FieldValue<decltype(per),PerVal::v0x7> v0x7{};
            constexpr Register::FieldValue<decltype(per),PerVal::v0x8> v0x8{};
            constexpr Register::FieldValue<decltype(per),PerVal::v0x9> v0x9{};
            constexpr Register::FieldValue<decltype(per),PerVal::v0xa> v0xa{};
            constexpr Register::FieldValue<decltype(per),PerVal::v0xb> v0xb{};
        }
        ///Window Mode Time-Out Period
        enum class WindowVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,WindowVal> window{}; 
        namespace WindowValC{
            constexpr Register::FieldValue<decltype(window),WindowVal::v0x0> v0x0{};
            constexpr Register::FieldValue<decltype(window),WindowVal::v0x1> v0x1{};
            constexpr Register::FieldValue<decltype(window),WindowVal::v0x2> v0x2{};
            constexpr Register::FieldValue<decltype(window),WindowVal::v0x3> v0x3{};
            constexpr Register::FieldValue<decltype(window),WindowVal::v0x4> v0x4{};
            constexpr Register::FieldValue<decltype(window),WindowVal::v0x5> v0x5{};
            constexpr Register::FieldValue<decltype(window),WindowVal::v0x6> v0x6{};
            constexpr Register::FieldValue<decltype(window),WindowVal::v0x7> v0x7{};
            constexpr Register::FieldValue<decltype(window),WindowVal::v0x8> v0x8{};
            constexpr Register::FieldValue<decltype(window),WindowVal::v0x9> v0x9{};
            constexpr Register::FieldValue<decltype(window),WindowVal::v0xa> v0xa{};
            constexpr Register::FieldValue<decltype(window),WindowVal::v0xb> v0xb{};
        }
    }
    namespace WdtCtrl{    ///<Control
        using Addr = Register::Address<0x40001000,0xffffff79,0,unsigned char>;
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        namespace EnableValC{
        }
        ///Watchdog Timer Window Mode Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wen{}; 
        namespace WenValC{
        }
        ///Always-On
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> alwayson{}; 
        namespace AlwaysonValC{
        }
    }
    namespace WdtEwctrl{    ///<Early Warning Interrupt Control
        using Addr = Register::Address<0x40001002,0xfffffff0,0,unsigned char>;
        ///Early Warning Interrupt Time Offset
        enum class EwoffsetVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,EwoffsetVal> ewoffset{}; 
        namespace EwoffsetValC{
            constexpr Register::FieldValue<decltype(ewoffset),EwoffsetVal::v0x0> v0x0{};
            constexpr Register::FieldValue<decltype(ewoffset),EwoffsetVal::v0x1> v0x1{};
            constexpr Register::FieldValue<decltype(ewoffset),EwoffsetVal::v0x2> v0x2{};
            constexpr Register::FieldValue<decltype(ewoffset),EwoffsetVal::v0x3> v0x3{};
            constexpr Register::FieldValue<decltype(ewoffset),EwoffsetVal::v0x4> v0x4{};
            constexpr Register::FieldValue<decltype(ewoffset),EwoffsetVal::v0x5> v0x5{};
            constexpr Register::FieldValue<decltype(ewoffset),EwoffsetVal::v0x6> v0x6{};
            constexpr Register::FieldValue<decltype(ewoffset),EwoffsetVal::v0x7> v0x7{};
            constexpr Register::FieldValue<decltype(ewoffset),EwoffsetVal::v0x8> v0x8{};
            constexpr Register::FieldValue<decltype(ewoffset),EwoffsetVal::v0x9> v0x9{};
            constexpr Register::FieldValue<decltype(ewoffset),EwoffsetVal::v0xa> v0xa{};
            constexpr Register::FieldValue<decltype(ewoffset),EwoffsetVal::v0xb> v0xb{};
        }
    }
    namespace WdtIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x40001004,0xfffffffe,0,unsigned char>;
        ///Early Warning Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ew{}; 
        namespace EwValC{
        }
    }
    namespace WdtIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x40001005,0xfffffffe,0,unsigned char>;
        ///Early Warning Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ew{}; 
        namespace EwValC{
        }
    }
    namespace WdtIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x40001006,0xfffffffe,0,unsigned char>;
        ///Early Warning
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ew{}; 
        namespace EwValC{
        }
    }
    namespace WdtStatus{    ///<Status
        using Addr = Register::Address<0x40001007,0xffffff7f,0,unsigned char>;
        ///Synchronization Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> syncbusy{}; 
        namespace SyncbusyValC{
        }
    }
}
