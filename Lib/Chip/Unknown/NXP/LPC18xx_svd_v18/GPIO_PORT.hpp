#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//GPIO port 
    namespace Noneb0{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4000,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb1{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4001,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb2{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4002,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb3{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4003,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb4{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4004,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb5{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4005,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb6{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4006,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb7{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4007,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb8{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4008,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb9{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4009,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb10{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f400a,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb11{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f400b,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb12{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f400c,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb13{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f400d,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb14{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f400e,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb15{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f400f,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb16{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4010,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb17{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4011,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb18{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4012,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb19{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4013,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb20{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4014,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb21{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4015,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb22{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4016,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb23{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4017,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb24{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4018,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb25{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4019,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb26{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f401a,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb27{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f401b,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb28{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f401c,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb29{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f401d,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb30{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f401e,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb31{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f401f,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb32{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4020,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb33{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4021,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb34{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4022,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb35{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4023,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb36{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4024,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb37{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4025,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb38{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4026,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb39{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4027,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb40{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4028,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb41{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4029,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb42{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f402a,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb43{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f402b,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb44{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f402c,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb45{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f402d,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb46{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f402e,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb47{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f402f,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb48{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4030,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb49{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4031,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb50{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4032,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb51{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4033,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb52{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4034,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb53{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4035,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb54{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4036,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb55{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4037,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb56{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4038,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb57{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4039,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb58{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f403a,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb59{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f403b,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb60{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f403c,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb61{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f403d,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb62{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f403e,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb63{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f403f,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb64{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4040,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb65{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4041,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb66{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4042,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb67{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4043,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb68{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4044,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb69{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4045,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb70{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4046,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb71{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4047,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb72{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4048,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb73{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4049,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb74{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f404a,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb75{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f404b,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb76{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f404c,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb77{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f404d,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb78{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f404e,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb79{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f404f,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb80{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4050,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb81{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4051,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb82{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4052,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb83{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4053,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb84{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4054,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb85{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4055,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb86{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4056,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb87{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4057,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb88{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4058,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb89{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4059,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb90{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f405a,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb91{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f405b,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb92{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f405c,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb93{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f405d,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb94{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f405e,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb95{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f405f,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb96{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4060,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb97{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4061,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb98{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4062,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb99{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4063,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb100{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4064,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb101{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4065,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb102{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4066,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb103{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4067,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb104{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4068,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb105{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4069,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb106{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f406a,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb107{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f406b,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb108{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f406c,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb109{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f406d,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb110{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f406e,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb111{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f406f,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb112{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4070,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb113{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4071,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb114{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4072,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb115{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4073,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb116{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4074,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb117{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4075,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb118{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4076,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb119{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4077,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb120{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4078,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb121{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4079,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb122{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f407a,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb123{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f407b,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb124{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f407c,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb125{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f407d,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb126{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f407e,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb127{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f407f,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb128{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4080,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb129{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4081,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb130{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4082,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb131{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4083,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb132{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4084,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb133{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4085,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb134{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4086,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb135{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4087,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb136{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4088,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb137{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4089,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb138{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f408a,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb139{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f408b,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb140{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f408c,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb141{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f408d,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb142{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f408e,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb143{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f408f,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb144{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4090,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb145{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4091,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb146{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4092,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb147{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4093,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb148{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4094,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb149{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4095,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb150{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4096,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb151{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4097,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb152{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4098,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb153{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f4099,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb154{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f409a,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb155{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f409b,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb156{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f409c,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb157{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f409d,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb158{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f409e,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb159{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f409f,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb160{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40a0,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb161{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40a1,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb162{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40a2,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb163{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40a3,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb164{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40a4,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb165{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40a5,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb166{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40a6,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb167{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40a7,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb168{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40a8,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb169{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40a9,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb170{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40aa,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb171{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40ab,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb172{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40ac,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb173{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40ad,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb174{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40ae,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb175{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40af,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb176{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40b0,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb177{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40b1,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb178{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40b2,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb179{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40b3,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb180{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40b4,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb181{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40b5,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb182{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40b6,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb183{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40b7,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb184{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40b8,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb185{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40b9,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb186{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40ba,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb187{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40bb,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb188{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40bc,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb189{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40bd,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb190{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40be,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb191{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40bf,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb192{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40c0,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb193{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40c1,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb194{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40c2,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb195{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40c3,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb196{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40c4,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb197{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40c5,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb198{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40c6,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb199{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40c7,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb200{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40c8,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb201{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40c9,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb202{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40ca,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb203{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40cb,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb204{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40cc,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb205{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40cd,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb206{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40ce,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb207{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40cf,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb208{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40d0,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb209{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40d1,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb210{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40d2,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb211{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40d3,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb212{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40d4,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb213{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40d5,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb214{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40d6,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb215{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40d7,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb216{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40d8,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb217{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40d9,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb218{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40da,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb219{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40db,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb220{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40dc,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb221{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40dd,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb222{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40de,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb223{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40df,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb224{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40e0,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb225{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40e1,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb226{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40e2,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb227{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40e3,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb228{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40e4,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb229{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40e5,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb230{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40e6,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb231{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40e7,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb232{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40e8,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb233{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40e9,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb234{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40ea,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb235{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40eb,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb236{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40ec,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb237{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40ed,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb238{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40ee,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb239{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40ef,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb240{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40f0,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb241{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40f1,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb242{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40f2,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb243{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40f3,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb244{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40f4,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb245{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40f5,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb246{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40f6,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb247{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40f7,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb248{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40f8,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb249{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40f9,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb250{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40fa,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb251{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40fb,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb252{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40fc,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb253{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40fd,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb254{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40fe,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb255{    ///<Byte pin registers port 0 to 5; pins PIOn_0 to PIOn_31
        using Addr = Register::Address<0x400f40ff,0xfffffffe,0,unsigned char>;
        ///Read: state of the GPIOm[n] pin, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Nonew0{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5000,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew1{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5004,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew2{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5008,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew3{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f500c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew4{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5010,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew5{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5014,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew6{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5018,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew7{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f501c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew8{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5020,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew9{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5024,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew10{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5028,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew11{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f502c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew12{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5030,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew13{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5034,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew14{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5038,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew15{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f503c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew16{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5040,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew17{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5044,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew18{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5048,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew19{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f504c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew20{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5050,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew21{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5054,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew22{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5058,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew23{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f505c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew24{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5060,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew25{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5064,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew26{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5068,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew27{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f506c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew28{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5070,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew29{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5074,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew30{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5078,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew31{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f507c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew32{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5080,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew33{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5084,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew34{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5088,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew35{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f508c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew36{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5090,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew37{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5094,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew38{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5098,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew39{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f509c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew40{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f50a0,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew41{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f50a4,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew42{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f50a8,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew43{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f50ac,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew44{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f50b0,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew45{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f50b4,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew46{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f50b8,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew47{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f50bc,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew48{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f50c0,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew49{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f50c4,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew50{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f50c8,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew51{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f50cc,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew52{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f50d0,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew53{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f50d4,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew54{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f50d8,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew55{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f50dc,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew56{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f50e0,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew57{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f50e4,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew58{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f50e8,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew59{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f50ec,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew60{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f50f0,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew61{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f50f4,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew62{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f50f8,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew63{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f50fc,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew64{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5100,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew65{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5104,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew66{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5108,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew67{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f510c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew68{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5110,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew69{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5114,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew70{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5118,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew71{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f511c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew72{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5120,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew73{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5124,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew74{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5128,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew75{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f512c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew76{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5130,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew77{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5134,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew78{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5138,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew79{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f513c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew80{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5140,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew81{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5144,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew82{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5148,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew83{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f514c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew84{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5150,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew85{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5154,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew86{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5158,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew87{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f515c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew88{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5160,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew89{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5164,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew90{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5168,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew91{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f516c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew92{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5170,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew93{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5174,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew94{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5178,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew95{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f517c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew96{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5180,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew97{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5184,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew98{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5188,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew99{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f518c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew100{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5190,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew101{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5194,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew102{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5198,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew103{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f519c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew104{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f51a0,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew105{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f51a4,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew106{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f51a8,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew107{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f51ac,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew108{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f51b0,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew109{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f51b4,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew110{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f51b8,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew111{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f51bc,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew112{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f51c0,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew113{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f51c4,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew114{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f51c8,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew115{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f51cc,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew116{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f51d0,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew117{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f51d4,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew118{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f51d8,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew119{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f51dc,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew120{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f51e0,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew121{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f51e4,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew122{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f51e8,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew123{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f51ec,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew124{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f51f0,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew125{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f51f4,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew126{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f51f8,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew127{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f51fc,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew128{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5200,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew129{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5204,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew130{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5208,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew131{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f520c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew132{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5210,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew133{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5214,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew134{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5218,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew135{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f521c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew136{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5220,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew137{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5224,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew138{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5228,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew139{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f522c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew140{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5230,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew141{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5234,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew142{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5238,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew143{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f523c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew144{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5240,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew145{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5244,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew146{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5248,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew147{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f524c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew148{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5250,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew149{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5254,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew150{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5258,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew151{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f525c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew152{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5260,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew153{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5264,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew154{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5268,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew155{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f526c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew156{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5270,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew157{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5274,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew158{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5278,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew159{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f527c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew160{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5280,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew161{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5284,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew162{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5288,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew163{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f528c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew164{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5290,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew165{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5294,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew166{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5298,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew167{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f529c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew168{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f52a0,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew169{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f52a4,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew170{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f52a8,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew171{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f52ac,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew172{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f52b0,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew173{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f52b4,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew174{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f52b8,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew175{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f52bc,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew176{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f52c0,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew177{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f52c4,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew178{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f52c8,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew179{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f52cc,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew180{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f52d0,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew181{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f52d4,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew182{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f52d8,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew183{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f52dc,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew184{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f52e0,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew185{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f52e4,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew186{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f52e8,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew187{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f52ec,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew188{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f52f0,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew189{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f52f4,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew190{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f52f8,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew191{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f52fc,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew192{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5300,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew193{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5304,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew194{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5308,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew195{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f530c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew196{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5310,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew197{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5314,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew198{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5318,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew199{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f531c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew200{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5320,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew201{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5324,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew202{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5328,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew203{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f532c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew204{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5330,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew205{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5334,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew206{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5338,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew207{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f533c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew208{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5340,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew209{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5344,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew210{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5348,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew211{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f534c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew212{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5350,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew213{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5354,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew214{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5358,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew215{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f535c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew216{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5360,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew217{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5364,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew218{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5368,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew219{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f536c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew220{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5370,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew221{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5374,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew222{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5378,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew223{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f537c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew224{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5380,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew225{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5384,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew226{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5388,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew227{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f538c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew228{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5390,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew229{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5394,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew230{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f5398,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew231{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f539c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew232{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f53a0,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew233{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f53a4,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew234{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f53a8,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew235{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f53ac,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew236{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f53b0,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew237{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f53b4,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew238{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f53b8,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew239{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f53bc,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew240{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f53c0,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew241{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f53c4,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew242{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f53c8,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew243{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f53cc,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew244{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f53d0,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew245{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f53d4,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew246{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f53d8,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew247{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f53dc,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew248{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f53e0,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew249{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f53e4,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew250{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f53e8,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew251{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f53ec,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew252{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f53f0,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew253{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f53f4,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew254{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f53f8,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew255{    ///<Word pin registers port 0 to 5
        using Addr = Register::Address<0x400f53fc,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonedir0{    ///<Direction registers port m
        using Addr = Register::Address<0x400f6000,0x00000000,0,unsigned>;
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dirp0{}; 
        namespace Dirp0ValC{
        }
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dirp1{}; 
        namespace Dirp1ValC{
        }
        ///Selects pin direction for  GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dirp2{}; 
        namespace Dirp2ValC{
        }
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirp3{}; 
        namespace Dirp3ValC{
        }
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dirp4{}; 
        namespace Dirp4ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dirp5{}; 
        namespace Dirp5ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dirp6{}; 
        namespace Dirp6ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dirp7{}; 
        namespace Dirp7ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dirp8{}; 
        namespace Dirp8ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dirp9{}; 
        namespace Dirp9ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dirp10{}; 
        namespace Dirp10ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dirp11{}; 
        namespace Dirp11ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dirp12{}; 
        namespace Dirp12ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dirp13{}; 
        namespace Dirp13ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dirp14{}; 
        namespace Dirp14ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dirp15{}; 
        namespace Dirp15ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dirp16{}; 
        namespace Dirp16ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dirp17{}; 
        namespace Dirp17ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dirp18{}; 
        namespace Dirp18ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dirp19{}; 
        namespace Dirp19ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dirp20{}; 
        namespace Dirp20ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dirp21{}; 
        namespace Dirp21ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dirp22{}; 
        namespace Dirp22ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dirp23{}; 
        namespace Dirp23ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dirp24{}; 
        namespace Dirp24ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dirp25{}; 
        namespace Dirp25ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dirp26{}; 
        namespace Dirp26ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dirp27{}; 
        namespace Dirp27ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dirp28{}; 
        namespace Dirp28ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dirp29{}; 
        namespace Dirp29ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dirp30{}; 
        namespace Dirp30ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dirp31{}; 
        namespace Dirp31ValC{
        }
    }
    namespace Nonedir1{    ///<Direction registers port m
        using Addr = Register::Address<0x400f6004,0x00000000,0,unsigned>;
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dirp0{}; 
        namespace Dirp0ValC{
        }
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dirp1{}; 
        namespace Dirp1ValC{
        }
        ///Selects pin direction for  GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dirp2{}; 
        namespace Dirp2ValC{
        }
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirp3{}; 
        namespace Dirp3ValC{
        }
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dirp4{}; 
        namespace Dirp4ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dirp5{}; 
        namespace Dirp5ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dirp6{}; 
        namespace Dirp6ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dirp7{}; 
        namespace Dirp7ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dirp8{}; 
        namespace Dirp8ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dirp9{}; 
        namespace Dirp9ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dirp10{}; 
        namespace Dirp10ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dirp11{}; 
        namespace Dirp11ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dirp12{}; 
        namespace Dirp12ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dirp13{}; 
        namespace Dirp13ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dirp14{}; 
        namespace Dirp14ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dirp15{}; 
        namespace Dirp15ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dirp16{}; 
        namespace Dirp16ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dirp17{}; 
        namespace Dirp17ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dirp18{}; 
        namespace Dirp18ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dirp19{}; 
        namespace Dirp19ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dirp20{}; 
        namespace Dirp20ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dirp21{}; 
        namespace Dirp21ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dirp22{}; 
        namespace Dirp22ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dirp23{}; 
        namespace Dirp23ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dirp24{}; 
        namespace Dirp24ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dirp25{}; 
        namespace Dirp25ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dirp26{}; 
        namespace Dirp26ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dirp27{}; 
        namespace Dirp27ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dirp28{}; 
        namespace Dirp28ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dirp29{}; 
        namespace Dirp29ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dirp30{}; 
        namespace Dirp30ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dirp31{}; 
        namespace Dirp31ValC{
        }
    }
    namespace Nonedir2{    ///<Direction registers port m
        using Addr = Register::Address<0x400f6008,0x00000000,0,unsigned>;
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dirp0{}; 
        namespace Dirp0ValC{
        }
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dirp1{}; 
        namespace Dirp1ValC{
        }
        ///Selects pin direction for  GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dirp2{}; 
        namespace Dirp2ValC{
        }
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirp3{}; 
        namespace Dirp3ValC{
        }
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dirp4{}; 
        namespace Dirp4ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dirp5{}; 
        namespace Dirp5ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dirp6{}; 
        namespace Dirp6ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dirp7{}; 
        namespace Dirp7ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dirp8{}; 
        namespace Dirp8ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dirp9{}; 
        namespace Dirp9ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dirp10{}; 
        namespace Dirp10ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dirp11{}; 
        namespace Dirp11ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dirp12{}; 
        namespace Dirp12ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dirp13{}; 
        namespace Dirp13ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dirp14{}; 
        namespace Dirp14ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dirp15{}; 
        namespace Dirp15ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dirp16{}; 
        namespace Dirp16ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dirp17{}; 
        namespace Dirp17ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dirp18{}; 
        namespace Dirp18ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dirp19{}; 
        namespace Dirp19ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dirp20{}; 
        namespace Dirp20ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dirp21{}; 
        namespace Dirp21ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dirp22{}; 
        namespace Dirp22ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dirp23{}; 
        namespace Dirp23ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dirp24{}; 
        namespace Dirp24ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dirp25{}; 
        namespace Dirp25ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dirp26{}; 
        namespace Dirp26ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dirp27{}; 
        namespace Dirp27ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dirp28{}; 
        namespace Dirp28ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dirp29{}; 
        namespace Dirp29ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dirp30{}; 
        namespace Dirp30ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dirp31{}; 
        namespace Dirp31ValC{
        }
    }
    namespace Nonedir3{    ///<Direction registers port m
        using Addr = Register::Address<0x400f600c,0x00000000,0,unsigned>;
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dirp0{}; 
        namespace Dirp0ValC{
        }
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dirp1{}; 
        namespace Dirp1ValC{
        }
        ///Selects pin direction for  GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dirp2{}; 
        namespace Dirp2ValC{
        }
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirp3{}; 
        namespace Dirp3ValC{
        }
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dirp4{}; 
        namespace Dirp4ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dirp5{}; 
        namespace Dirp5ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dirp6{}; 
        namespace Dirp6ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dirp7{}; 
        namespace Dirp7ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dirp8{}; 
        namespace Dirp8ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dirp9{}; 
        namespace Dirp9ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dirp10{}; 
        namespace Dirp10ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dirp11{}; 
        namespace Dirp11ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dirp12{}; 
        namespace Dirp12ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dirp13{}; 
        namespace Dirp13ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dirp14{}; 
        namespace Dirp14ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dirp15{}; 
        namespace Dirp15ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dirp16{}; 
        namespace Dirp16ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dirp17{}; 
        namespace Dirp17ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dirp18{}; 
        namespace Dirp18ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dirp19{}; 
        namespace Dirp19ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dirp20{}; 
        namespace Dirp20ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dirp21{}; 
        namespace Dirp21ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dirp22{}; 
        namespace Dirp22ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dirp23{}; 
        namespace Dirp23ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dirp24{}; 
        namespace Dirp24ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dirp25{}; 
        namespace Dirp25ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dirp26{}; 
        namespace Dirp26ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dirp27{}; 
        namespace Dirp27ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dirp28{}; 
        namespace Dirp28ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dirp29{}; 
        namespace Dirp29ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dirp30{}; 
        namespace Dirp30ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dirp31{}; 
        namespace Dirp31ValC{
        }
    }
    namespace Nonedir4{    ///<Direction registers port m
        using Addr = Register::Address<0x400f6010,0x00000000,0,unsigned>;
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dirp0{}; 
        namespace Dirp0ValC{
        }
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dirp1{}; 
        namespace Dirp1ValC{
        }
        ///Selects pin direction for  GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dirp2{}; 
        namespace Dirp2ValC{
        }
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirp3{}; 
        namespace Dirp3ValC{
        }
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dirp4{}; 
        namespace Dirp4ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dirp5{}; 
        namespace Dirp5ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dirp6{}; 
        namespace Dirp6ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dirp7{}; 
        namespace Dirp7ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dirp8{}; 
        namespace Dirp8ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dirp9{}; 
        namespace Dirp9ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dirp10{}; 
        namespace Dirp10ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dirp11{}; 
        namespace Dirp11ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dirp12{}; 
        namespace Dirp12ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dirp13{}; 
        namespace Dirp13ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dirp14{}; 
        namespace Dirp14ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dirp15{}; 
        namespace Dirp15ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dirp16{}; 
        namespace Dirp16ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dirp17{}; 
        namespace Dirp17ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dirp18{}; 
        namespace Dirp18ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dirp19{}; 
        namespace Dirp19ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dirp20{}; 
        namespace Dirp20ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dirp21{}; 
        namespace Dirp21ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dirp22{}; 
        namespace Dirp22ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dirp23{}; 
        namespace Dirp23ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dirp24{}; 
        namespace Dirp24ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dirp25{}; 
        namespace Dirp25ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dirp26{}; 
        namespace Dirp26ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dirp27{}; 
        namespace Dirp27ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dirp28{}; 
        namespace Dirp28ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dirp29{}; 
        namespace Dirp29ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dirp30{}; 
        namespace Dirp30ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dirp31{}; 
        namespace Dirp31ValC{
        }
    }
    namespace Nonedir5{    ///<Direction registers port m
        using Addr = Register::Address<0x400f6014,0x00000000,0,unsigned>;
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dirp0{}; 
        namespace Dirp0ValC{
        }
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dirp1{}; 
        namespace Dirp1ValC{
        }
        ///Selects pin direction for  GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dirp2{}; 
        namespace Dirp2ValC{
        }
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirp3{}; 
        namespace Dirp3ValC{
        }
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dirp4{}; 
        namespace Dirp4ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dirp5{}; 
        namespace Dirp5ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dirp6{}; 
        namespace Dirp6ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dirp7{}; 
        namespace Dirp7ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dirp8{}; 
        namespace Dirp8ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dirp9{}; 
        namespace Dirp9ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dirp10{}; 
        namespace Dirp10ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dirp11{}; 
        namespace Dirp11ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dirp12{}; 
        namespace Dirp12ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dirp13{}; 
        namespace Dirp13ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dirp14{}; 
        namespace Dirp14ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dirp15{}; 
        namespace Dirp15ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dirp16{}; 
        namespace Dirp16ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dirp17{}; 
        namespace Dirp17ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dirp18{}; 
        namespace Dirp18ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dirp19{}; 
        namespace Dirp19ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dirp20{}; 
        namespace Dirp20ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dirp21{}; 
        namespace Dirp21ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dirp22{}; 
        namespace Dirp22ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dirp23{}; 
        namespace Dirp23ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dirp24{}; 
        namespace Dirp24ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dirp25{}; 
        namespace Dirp25ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dirp26{}; 
        namespace Dirp26ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dirp27{}; 
        namespace Dirp27ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dirp28{}; 
        namespace Dirp28ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dirp29{}; 
        namespace Dirp29ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dirp30{}; 
        namespace Dirp30ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dirp31{}; 
        namespace Dirp31ValC{
        }
    }
    namespace Nonedir6{    ///<Direction registers port m
        using Addr = Register::Address<0x400f6018,0x00000000,0,unsigned>;
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dirp0{}; 
        namespace Dirp0ValC{
        }
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dirp1{}; 
        namespace Dirp1ValC{
        }
        ///Selects pin direction for  GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dirp2{}; 
        namespace Dirp2ValC{
        }
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirp3{}; 
        namespace Dirp3ValC{
        }
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dirp4{}; 
        namespace Dirp4ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dirp5{}; 
        namespace Dirp5ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dirp6{}; 
        namespace Dirp6ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dirp7{}; 
        namespace Dirp7ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dirp8{}; 
        namespace Dirp8ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dirp9{}; 
        namespace Dirp9ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dirp10{}; 
        namespace Dirp10ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dirp11{}; 
        namespace Dirp11ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dirp12{}; 
        namespace Dirp12ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dirp13{}; 
        namespace Dirp13ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dirp14{}; 
        namespace Dirp14ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dirp15{}; 
        namespace Dirp15ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dirp16{}; 
        namespace Dirp16ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dirp17{}; 
        namespace Dirp17ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dirp18{}; 
        namespace Dirp18ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dirp19{}; 
        namespace Dirp19ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dirp20{}; 
        namespace Dirp20ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dirp21{}; 
        namespace Dirp21ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dirp22{}; 
        namespace Dirp22ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dirp23{}; 
        namespace Dirp23ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dirp24{}; 
        namespace Dirp24ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dirp25{}; 
        namespace Dirp25ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dirp26{}; 
        namespace Dirp26ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dirp27{}; 
        namespace Dirp27ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dirp28{}; 
        namespace Dirp28ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dirp29{}; 
        namespace Dirp29ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dirp30{}; 
        namespace Dirp30ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dirp31{}; 
        namespace Dirp31ValC{
        }
    }
    namespace Nonedir7{    ///<Direction registers port m
        using Addr = Register::Address<0x400f601c,0x00000000,0,unsigned>;
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dirp0{}; 
        namespace Dirp0ValC{
        }
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dirp1{}; 
        namespace Dirp1ValC{
        }
        ///Selects pin direction for  GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dirp2{}; 
        namespace Dirp2ValC{
        }
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirp3{}; 
        namespace Dirp3ValC{
        }
        ///Selects pin direction for GPIOm[n] pin (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dirp4{}; 
        namespace Dirp4ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dirp5{}; 
        namespace Dirp5ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dirp6{}; 
        namespace Dirp6ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dirp7{}; 
        namespace Dirp7ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dirp8{}; 
        namespace Dirp8ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dirp9{}; 
        namespace Dirp9ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dirp10{}; 
        namespace Dirp10ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dirp11{}; 
        namespace Dirp11ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dirp12{}; 
        namespace Dirp12ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dirp13{}; 
        namespace Dirp13ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dirp14{}; 
        namespace Dirp14ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dirp15{}; 
        namespace Dirp15ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dirp16{}; 
        namespace Dirp16ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dirp17{}; 
        namespace Dirp17ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dirp18{}; 
        namespace Dirp18ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dirp19{}; 
        namespace Dirp19ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dirp20{}; 
        namespace Dirp20ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dirp21{}; 
        namespace Dirp21ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dirp22{}; 
        namespace Dirp22ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dirp23{}; 
        namespace Dirp23ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dirp24{}; 
        namespace Dirp24ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dirp25{}; 
        namespace Dirp25ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dirp26{}; 
        namespace Dirp26ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dirp27{}; 
        namespace Dirp27ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dirp28{}; 
        namespace Dirp28ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dirp29{}; 
        namespace Dirp29ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dirp30{}; 
        namespace Dirp30ValC{
        }
        ///Selects pin direction for pin GPIOm[n] (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dirp31{}; 
        namespace Dirp31ValC{
        }
    }
    namespace Nonemask0{    ///<Mask register port m
        using Addr = Register::Address<0x400f6080,0x00000000,0,unsigned>;
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> maskp0{}; 
        namespace Maskp0ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> maskp1{}; 
        namespace Maskp1ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> maskp2{}; 
        namespace Maskp2ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> maskp3{}; 
        namespace Maskp3ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the P0/1PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> maskp4{}; 
        namespace Maskp4ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> maskp5{}; 
        namespace Maskp5ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> maskp6{}; 
        namespace Maskp6ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> maskp7{}; 
        namespace Maskp7ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> maskp8{}; 
        namespace Maskp8ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> maskp9{}; 
        namespace Maskp9ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> maskp10{}; 
        namespace Maskp10ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> maskp11{}; 
        namespace Maskp11ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> maskp12{}; 
        namespace Maskp12ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> maskp13{}; 
        namespace Maskp13ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> maskp14{}; 
        namespace Maskp14ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maskp15{}; 
        namespace Maskp15ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> maskp16{}; 
        namespace Maskp16ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> maskp17{}; 
        namespace Maskp17ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> maskp18{}; 
        namespace Maskp18ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> maskp19{}; 
        namespace Maskp19ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> maskp20{}; 
        namespace Maskp20ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> maskp21{}; 
        namespace Maskp21ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> maskp22{}; 
        namespace Maskp22ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> maskp23{}; 
        namespace Maskp23ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> maskp24{}; 
        namespace Maskp24ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> maskp25{}; 
        namespace Maskp25ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> maskp26{}; 
        namespace Maskp26ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> maskp27{}; 
        namespace Maskp27ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> maskp28{}; 
        namespace Maskp28ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> maskp29{}; 
        namespace Maskp29ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> maskp30{}; 
        namespace Maskp30ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> maskp31{}; 
        namespace Maskp31ValC{
        }
    }
    namespace Nonemask1{    ///<Mask register port m
        using Addr = Register::Address<0x400f6084,0x00000000,0,unsigned>;
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> maskp0{}; 
        namespace Maskp0ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> maskp1{}; 
        namespace Maskp1ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> maskp2{}; 
        namespace Maskp2ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> maskp3{}; 
        namespace Maskp3ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the P0/1PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> maskp4{}; 
        namespace Maskp4ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> maskp5{}; 
        namespace Maskp5ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> maskp6{}; 
        namespace Maskp6ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> maskp7{}; 
        namespace Maskp7ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> maskp8{}; 
        namespace Maskp8ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> maskp9{}; 
        namespace Maskp9ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> maskp10{}; 
        namespace Maskp10ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> maskp11{}; 
        namespace Maskp11ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> maskp12{}; 
        namespace Maskp12ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> maskp13{}; 
        namespace Maskp13ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> maskp14{}; 
        namespace Maskp14ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maskp15{}; 
        namespace Maskp15ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> maskp16{}; 
        namespace Maskp16ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> maskp17{}; 
        namespace Maskp17ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> maskp18{}; 
        namespace Maskp18ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> maskp19{}; 
        namespace Maskp19ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> maskp20{}; 
        namespace Maskp20ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> maskp21{}; 
        namespace Maskp21ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> maskp22{}; 
        namespace Maskp22ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> maskp23{}; 
        namespace Maskp23ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> maskp24{}; 
        namespace Maskp24ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> maskp25{}; 
        namespace Maskp25ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> maskp26{}; 
        namespace Maskp26ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> maskp27{}; 
        namespace Maskp27ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> maskp28{}; 
        namespace Maskp28ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> maskp29{}; 
        namespace Maskp29ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> maskp30{}; 
        namespace Maskp30ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> maskp31{}; 
        namespace Maskp31ValC{
        }
    }
    namespace Nonemask2{    ///<Mask register port m
        using Addr = Register::Address<0x400f6088,0x00000000,0,unsigned>;
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> maskp0{}; 
        namespace Maskp0ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> maskp1{}; 
        namespace Maskp1ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> maskp2{}; 
        namespace Maskp2ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> maskp3{}; 
        namespace Maskp3ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the P0/1PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> maskp4{}; 
        namespace Maskp4ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> maskp5{}; 
        namespace Maskp5ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> maskp6{}; 
        namespace Maskp6ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> maskp7{}; 
        namespace Maskp7ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> maskp8{}; 
        namespace Maskp8ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> maskp9{}; 
        namespace Maskp9ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> maskp10{}; 
        namespace Maskp10ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> maskp11{}; 
        namespace Maskp11ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> maskp12{}; 
        namespace Maskp12ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> maskp13{}; 
        namespace Maskp13ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> maskp14{}; 
        namespace Maskp14ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maskp15{}; 
        namespace Maskp15ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> maskp16{}; 
        namespace Maskp16ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> maskp17{}; 
        namespace Maskp17ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> maskp18{}; 
        namespace Maskp18ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> maskp19{}; 
        namespace Maskp19ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> maskp20{}; 
        namespace Maskp20ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> maskp21{}; 
        namespace Maskp21ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> maskp22{}; 
        namespace Maskp22ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> maskp23{}; 
        namespace Maskp23ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> maskp24{}; 
        namespace Maskp24ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> maskp25{}; 
        namespace Maskp25ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> maskp26{}; 
        namespace Maskp26ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> maskp27{}; 
        namespace Maskp27ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> maskp28{}; 
        namespace Maskp28ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> maskp29{}; 
        namespace Maskp29ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> maskp30{}; 
        namespace Maskp30ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> maskp31{}; 
        namespace Maskp31ValC{
        }
    }
    namespace Nonemask3{    ///<Mask register port m
        using Addr = Register::Address<0x400f608c,0x00000000,0,unsigned>;
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> maskp0{}; 
        namespace Maskp0ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> maskp1{}; 
        namespace Maskp1ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> maskp2{}; 
        namespace Maskp2ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> maskp3{}; 
        namespace Maskp3ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the P0/1PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> maskp4{}; 
        namespace Maskp4ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> maskp5{}; 
        namespace Maskp5ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> maskp6{}; 
        namespace Maskp6ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> maskp7{}; 
        namespace Maskp7ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> maskp8{}; 
        namespace Maskp8ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> maskp9{}; 
        namespace Maskp9ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> maskp10{}; 
        namespace Maskp10ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> maskp11{}; 
        namespace Maskp11ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> maskp12{}; 
        namespace Maskp12ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> maskp13{}; 
        namespace Maskp13ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> maskp14{}; 
        namespace Maskp14ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maskp15{}; 
        namespace Maskp15ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> maskp16{}; 
        namespace Maskp16ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> maskp17{}; 
        namespace Maskp17ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> maskp18{}; 
        namespace Maskp18ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> maskp19{}; 
        namespace Maskp19ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> maskp20{}; 
        namespace Maskp20ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> maskp21{}; 
        namespace Maskp21ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> maskp22{}; 
        namespace Maskp22ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> maskp23{}; 
        namespace Maskp23ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> maskp24{}; 
        namespace Maskp24ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> maskp25{}; 
        namespace Maskp25ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> maskp26{}; 
        namespace Maskp26ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> maskp27{}; 
        namespace Maskp27ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> maskp28{}; 
        namespace Maskp28ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> maskp29{}; 
        namespace Maskp29ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> maskp30{}; 
        namespace Maskp30ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> maskp31{}; 
        namespace Maskp31ValC{
        }
    }
    namespace Nonemask4{    ///<Mask register port m
        using Addr = Register::Address<0x400f6090,0x00000000,0,unsigned>;
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> maskp0{}; 
        namespace Maskp0ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> maskp1{}; 
        namespace Maskp1ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> maskp2{}; 
        namespace Maskp2ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> maskp3{}; 
        namespace Maskp3ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the P0/1PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> maskp4{}; 
        namespace Maskp4ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> maskp5{}; 
        namespace Maskp5ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> maskp6{}; 
        namespace Maskp6ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> maskp7{}; 
        namespace Maskp7ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> maskp8{}; 
        namespace Maskp8ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> maskp9{}; 
        namespace Maskp9ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> maskp10{}; 
        namespace Maskp10ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> maskp11{}; 
        namespace Maskp11ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> maskp12{}; 
        namespace Maskp12ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> maskp13{}; 
        namespace Maskp13ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> maskp14{}; 
        namespace Maskp14ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maskp15{}; 
        namespace Maskp15ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> maskp16{}; 
        namespace Maskp16ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> maskp17{}; 
        namespace Maskp17ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> maskp18{}; 
        namespace Maskp18ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> maskp19{}; 
        namespace Maskp19ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> maskp20{}; 
        namespace Maskp20ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> maskp21{}; 
        namespace Maskp21ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> maskp22{}; 
        namespace Maskp22ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> maskp23{}; 
        namespace Maskp23ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> maskp24{}; 
        namespace Maskp24ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> maskp25{}; 
        namespace Maskp25ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> maskp26{}; 
        namespace Maskp26ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> maskp27{}; 
        namespace Maskp27ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> maskp28{}; 
        namespace Maskp28ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> maskp29{}; 
        namespace Maskp29ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> maskp30{}; 
        namespace Maskp30ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> maskp31{}; 
        namespace Maskp31ValC{
        }
    }
    namespace Nonemask5{    ///<Mask register port m
        using Addr = Register::Address<0x400f6094,0x00000000,0,unsigned>;
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> maskp0{}; 
        namespace Maskp0ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> maskp1{}; 
        namespace Maskp1ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> maskp2{}; 
        namespace Maskp2ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> maskp3{}; 
        namespace Maskp3ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the P0/1PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> maskp4{}; 
        namespace Maskp4ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> maskp5{}; 
        namespace Maskp5ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> maskp6{}; 
        namespace Maskp6ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> maskp7{}; 
        namespace Maskp7ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> maskp8{}; 
        namespace Maskp8ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> maskp9{}; 
        namespace Maskp9ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> maskp10{}; 
        namespace Maskp10ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> maskp11{}; 
        namespace Maskp11ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> maskp12{}; 
        namespace Maskp12ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> maskp13{}; 
        namespace Maskp13ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> maskp14{}; 
        namespace Maskp14ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maskp15{}; 
        namespace Maskp15ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> maskp16{}; 
        namespace Maskp16ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> maskp17{}; 
        namespace Maskp17ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> maskp18{}; 
        namespace Maskp18ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> maskp19{}; 
        namespace Maskp19ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> maskp20{}; 
        namespace Maskp20ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> maskp21{}; 
        namespace Maskp21ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> maskp22{}; 
        namespace Maskp22ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> maskp23{}; 
        namespace Maskp23ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> maskp24{}; 
        namespace Maskp24ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> maskp25{}; 
        namespace Maskp25ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> maskp26{}; 
        namespace Maskp26ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> maskp27{}; 
        namespace Maskp27ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> maskp28{}; 
        namespace Maskp28ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> maskp29{}; 
        namespace Maskp29ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> maskp30{}; 
        namespace Maskp30ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> maskp31{}; 
        namespace Maskp31ValC{
        }
    }
    namespace Nonemask6{    ///<Mask register port m
        using Addr = Register::Address<0x400f6098,0x00000000,0,unsigned>;
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> maskp0{}; 
        namespace Maskp0ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> maskp1{}; 
        namespace Maskp1ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> maskp2{}; 
        namespace Maskp2ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> maskp3{}; 
        namespace Maskp3ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the P0/1PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> maskp4{}; 
        namespace Maskp4ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> maskp5{}; 
        namespace Maskp5ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> maskp6{}; 
        namespace Maskp6ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> maskp7{}; 
        namespace Maskp7ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> maskp8{}; 
        namespace Maskp8ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> maskp9{}; 
        namespace Maskp9ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> maskp10{}; 
        namespace Maskp10ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> maskp11{}; 
        namespace Maskp11ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> maskp12{}; 
        namespace Maskp12ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> maskp13{}; 
        namespace Maskp13ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> maskp14{}; 
        namespace Maskp14ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maskp15{}; 
        namespace Maskp15ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> maskp16{}; 
        namespace Maskp16ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> maskp17{}; 
        namespace Maskp17ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> maskp18{}; 
        namespace Maskp18ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> maskp19{}; 
        namespace Maskp19ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> maskp20{}; 
        namespace Maskp20ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> maskp21{}; 
        namespace Maskp21ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> maskp22{}; 
        namespace Maskp22ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> maskp23{}; 
        namespace Maskp23ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> maskp24{}; 
        namespace Maskp24ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> maskp25{}; 
        namespace Maskp25ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> maskp26{}; 
        namespace Maskp26ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> maskp27{}; 
        namespace Maskp27ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> maskp28{}; 
        namespace Maskp28ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> maskp29{}; 
        namespace Maskp29ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> maskp30{}; 
        namespace Maskp30ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> maskp31{}; 
        namespace Maskp31ValC{
        }
    }
    namespace Nonemask7{    ///<Mask register port m
        using Addr = Register::Address<0x400f609c,0x00000000,0,unsigned>;
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> maskp0{}; 
        namespace Maskp0ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> maskp1{}; 
        namespace Maskp1ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> maskp2{}; 
        namespace Maskp2ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> maskp3{}; 
        namespace Maskp3ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the P0/1PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> maskp4{}; 
        namespace Maskp4ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> maskp5{}; 
        namespace Maskp5ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> maskp6{}; 
        namespace Maskp6ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> maskp7{}; 
        namespace Maskp7ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> maskp8{}; 
        namespace Maskp8ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> maskp9{}; 
        namespace Maskp9ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> maskp10{}; 
        namespace Maskp10ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> maskp11{}; 
        namespace Maskp11ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> maskp12{}; 
        namespace Maskp12ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> maskp13{}; 
        namespace Maskp13ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> maskp14{}; 
        namespace Maskp14ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maskp15{}; 
        namespace Maskp15ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> maskp16{}; 
        namespace Maskp16ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> maskp17{}; 
        namespace Maskp17ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> maskp18{}; 
        namespace Maskp18ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> maskp19{}; 
        namespace Maskp19ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> maskp20{}; 
        namespace Maskp20ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> maskp21{}; 
        namespace Maskp21ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> maskp22{}; 
        namespace Maskp22ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> maskp23{}; 
        namespace Maskp23ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> maskp24{}; 
        namespace Maskp24ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> maskp25{}; 
        namespace Maskp25ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> maskp26{}; 
        namespace Maskp26ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> maskp27{}; 
        namespace Maskp27ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> maskp28{}; 
        namespace Maskp28ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> maskp29{}; 
        namespace Maskp29ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> maskp30{}; 
        namespace Maskp30ValC{
        }
        ///Controls which bits corresponding to GPIOm[n] are active in the  PIN register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> maskp31{}; 
        namespace Maskp31ValC{
        }
    }
    namespace Nonepin0{    ///<Port pin register port m
        using Addr = Register::Address<0x400f6100,0x00000000,0,unsigned>;
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> port0{}; 
        namespace Port0ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> port1{}; 
        namespace Port1ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> port2{}; 
        namespace Port2ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> port3{}; 
        namespace Port3ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> port4{}; 
        namespace Port4ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> port5{}; 
        namespace Port5ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> port6{}; 
        namespace Port6ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> port7{}; 
        namespace Port7ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> port8{}; 
        namespace Port8ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> port9{}; 
        namespace Port9ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> port10{}; 
        namespace Port10ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> port11{}; 
        namespace Port11ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> port12{}; 
        namespace Port12ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> port13{}; 
        namespace Port13ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> port14{}; 
        namespace Port14ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> port15{}; 
        namespace Port15ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> port16{}; 
        namespace Port16ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> port17{}; 
        namespace Port17ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> port18{}; 
        namespace Port18ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> port19{}; 
        namespace Port19ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> port20{}; 
        namespace Port20ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> port21{}; 
        namespace Port21ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> port22{}; 
        namespace Port22ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> port23{}; 
        namespace Port23ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> port24{}; 
        namespace Port24ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> port25{}; 
        namespace Port25ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> port26{}; 
        namespace Port26ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> port27{}; 
        namespace Port27ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> port28{}; 
        namespace Port28ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> port29{}; 
        namespace Port29ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> port30{}; 
        namespace Port30ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> port31{}; 
        namespace Port31ValC{
        }
    }
    namespace Nonepin1{    ///<Port pin register port m
        using Addr = Register::Address<0x400f6104,0x00000000,0,unsigned>;
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> port0{}; 
        namespace Port0ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> port1{}; 
        namespace Port1ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> port2{}; 
        namespace Port2ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> port3{}; 
        namespace Port3ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> port4{}; 
        namespace Port4ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> port5{}; 
        namespace Port5ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> port6{}; 
        namespace Port6ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> port7{}; 
        namespace Port7ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> port8{}; 
        namespace Port8ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> port9{}; 
        namespace Port9ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> port10{}; 
        namespace Port10ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> port11{}; 
        namespace Port11ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> port12{}; 
        namespace Port12ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> port13{}; 
        namespace Port13ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> port14{}; 
        namespace Port14ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> port15{}; 
        namespace Port15ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> port16{}; 
        namespace Port16ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> port17{}; 
        namespace Port17ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> port18{}; 
        namespace Port18ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> port19{}; 
        namespace Port19ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> port20{}; 
        namespace Port20ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> port21{}; 
        namespace Port21ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> port22{}; 
        namespace Port22ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> port23{}; 
        namespace Port23ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> port24{}; 
        namespace Port24ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> port25{}; 
        namespace Port25ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> port26{}; 
        namespace Port26ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> port27{}; 
        namespace Port27ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> port28{}; 
        namespace Port28ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> port29{}; 
        namespace Port29ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> port30{}; 
        namespace Port30ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> port31{}; 
        namespace Port31ValC{
        }
    }
    namespace Nonepin2{    ///<Port pin register port m
        using Addr = Register::Address<0x400f6108,0x00000000,0,unsigned>;
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> port0{}; 
        namespace Port0ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> port1{}; 
        namespace Port1ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> port2{}; 
        namespace Port2ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> port3{}; 
        namespace Port3ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> port4{}; 
        namespace Port4ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> port5{}; 
        namespace Port5ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> port6{}; 
        namespace Port6ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> port7{}; 
        namespace Port7ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> port8{}; 
        namespace Port8ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> port9{}; 
        namespace Port9ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> port10{}; 
        namespace Port10ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> port11{}; 
        namespace Port11ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> port12{}; 
        namespace Port12ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> port13{}; 
        namespace Port13ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> port14{}; 
        namespace Port14ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> port15{}; 
        namespace Port15ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> port16{}; 
        namespace Port16ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> port17{}; 
        namespace Port17ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> port18{}; 
        namespace Port18ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> port19{}; 
        namespace Port19ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> port20{}; 
        namespace Port20ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> port21{}; 
        namespace Port21ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> port22{}; 
        namespace Port22ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> port23{}; 
        namespace Port23ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> port24{}; 
        namespace Port24ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> port25{}; 
        namespace Port25ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> port26{}; 
        namespace Port26ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> port27{}; 
        namespace Port27ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> port28{}; 
        namespace Port28ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> port29{}; 
        namespace Port29ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> port30{}; 
        namespace Port30ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> port31{}; 
        namespace Port31ValC{
        }
    }
    namespace Nonepin3{    ///<Port pin register port m
        using Addr = Register::Address<0x400f610c,0x00000000,0,unsigned>;
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> port0{}; 
        namespace Port0ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> port1{}; 
        namespace Port1ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> port2{}; 
        namespace Port2ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> port3{}; 
        namespace Port3ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> port4{}; 
        namespace Port4ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> port5{}; 
        namespace Port5ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> port6{}; 
        namespace Port6ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> port7{}; 
        namespace Port7ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> port8{}; 
        namespace Port8ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> port9{}; 
        namespace Port9ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> port10{}; 
        namespace Port10ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> port11{}; 
        namespace Port11ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> port12{}; 
        namespace Port12ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> port13{}; 
        namespace Port13ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> port14{}; 
        namespace Port14ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> port15{}; 
        namespace Port15ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> port16{}; 
        namespace Port16ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> port17{}; 
        namespace Port17ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> port18{}; 
        namespace Port18ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> port19{}; 
        namespace Port19ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> port20{}; 
        namespace Port20ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> port21{}; 
        namespace Port21ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> port22{}; 
        namespace Port22ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> port23{}; 
        namespace Port23ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> port24{}; 
        namespace Port24ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> port25{}; 
        namespace Port25ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> port26{}; 
        namespace Port26ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> port27{}; 
        namespace Port27ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> port28{}; 
        namespace Port28ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> port29{}; 
        namespace Port29ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> port30{}; 
        namespace Port30ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> port31{}; 
        namespace Port31ValC{
        }
    }
    namespace Nonepin4{    ///<Port pin register port m
        using Addr = Register::Address<0x400f6110,0x00000000,0,unsigned>;
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> port0{}; 
        namespace Port0ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> port1{}; 
        namespace Port1ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> port2{}; 
        namespace Port2ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> port3{}; 
        namespace Port3ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> port4{}; 
        namespace Port4ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> port5{}; 
        namespace Port5ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> port6{}; 
        namespace Port6ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> port7{}; 
        namespace Port7ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> port8{}; 
        namespace Port8ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> port9{}; 
        namespace Port9ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> port10{}; 
        namespace Port10ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> port11{}; 
        namespace Port11ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> port12{}; 
        namespace Port12ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> port13{}; 
        namespace Port13ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> port14{}; 
        namespace Port14ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> port15{}; 
        namespace Port15ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> port16{}; 
        namespace Port16ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> port17{}; 
        namespace Port17ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> port18{}; 
        namespace Port18ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> port19{}; 
        namespace Port19ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> port20{}; 
        namespace Port20ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> port21{}; 
        namespace Port21ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> port22{}; 
        namespace Port22ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> port23{}; 
        namespace Port23ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> port24{}; 
        namespace Port24ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> port25{}; 
        namespace Port25ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> port26{}; 
        namespace Port26ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> port27{}; 
        namespace Port27ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> port28{}; 
        namespace Port28ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> port29{}; 
        namespace Port29ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> port30{}; 
        namespace Port30ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> port31{}; 
        namespace Port31ValC{
        }
    }
    namespace Nonepin5{    ///<Port pin register port m
        using Addr = Register::Address<0x400f6114,0x00000000,0,unsigned>;
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> port0{}; 
        namespace Port0ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> port1{}; 
        namespace Port1ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> port2{}; 
        namespace Port2ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> port3{}; 
        namespace Port3ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> port4{}; 
        namespace Port4ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> port5{}; 
        namespace Port5ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> port6{}; 
        namespace Port6ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> port7{}; 
        namespace Port7ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> port8{}; 
        namespace Port8ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> port9{}; 
        namespace Port9ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> port10{}; 
        namespace Port10ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> port11{}; 
        namespace Port11ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> port12{}; 
        namespace Port12ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> port13{}; 
        namespace Port13ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> port14{}; 
        namespace Port14ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> port15{}; 
        namespace Port15ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> port16{}; 
        namespace Port16ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> port17{}; 
        namespace Port17ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> port18{}; 
        namespace Port18ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> port19{}; 
        namespace Port19ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> port20{}; 
        namespace Port20ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> port21{}; 
        namespace Port21ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> port22{}; 
        namespace Port22ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> port23{}; 
        namespace Port23ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> port24{}; 
        namespace Port24ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> port25{}; 
        namespace Port25ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> port26{}; 
        namespace Port26ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> port27{}; 
        namespace Port27ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> port28{}; 
        namespace Port28ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> port29{}; 
        namespace Port29ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> port30{}; 
        namespace Port30ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> port31{}; 
        namespace Port31ValC{
        }
    }
    namespace Nonepin6{    ///<Port pin register port m
        using Addr = Register::Address<0x400f6118,0x00000000,0,unsigned>;
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> port0{}; 
        namespace Port0ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> port1{}; 
        namespace Port1ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> port2{}; 
        namespace Port2ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> port3{}; 
        namespace Port3ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> port4{}; 
        namespace Port4ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> port5{}; 
        namespace Port5ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> port6{}; 
        namespace Port6ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> port7{}; 
        namespace Port7ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> port8{}; 
        namespace Port8ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> port9{}; 
        namespace Port9ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> port10{}; 
        namespace Port10ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> port11{}; 
        namespace Port11ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> port12{}; 
        namespace Port12ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> port13{}; 
        namespace Port13ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> port14{}; 
        namespace Port14ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> port15{}; 
        namespace Port15ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> port16{}; 
        namespace Port16ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> port17{}; 
        namespace Port17ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> port18{}; 
        namespace Port18ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> port19{}; 
        namespace Port19ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> port20{}; 
        namespace Port20ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> port21{}; 
        namespace Port21ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> port22{}; 
        namespace Port22ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> port23{}; 
        namespace Port23ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> port24{}; 
        namespace Port24ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> port25{}; 
        namespace Port25ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> port26{}; 
        namespace Port26ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> port27{}; 
        namespace Port27ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> port28{}; 
        namespace Port28ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> port29{}; 
        namespace Port29ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> port30{}; 
        namespace Port30ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> port31{}; 
        namespace Port31ValC{
        }
    }
    namespace Nonepin7{    ///<Port pin register port m
        using Addr = Register::Address<0x400f611c,0x00000000,0,unsigned>;
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> port0{}; 
        namespace Port0ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> port1{}; 
        namespace Port1ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> port2{}; 
        namespace Port2ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> port3{}; 
        namespace Port3ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> port4{}; 
        namespace Port4ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> port5{}; 
        namespace Port5ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> port6{}; 
        namespace Port6ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> port7{}; 
        namespace Port7ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> port8{}; 
        namespace Port8ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> port9{}; 
        namespace Port9ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> port10{}; 
        namespace Port10ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> port11{}; 
        namespace Port11ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> port12{}; 
        namespace Port12ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> port13{}; 
        namespace Port13ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> port14{}; 
        namespace Port14ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> port15{}; 
        namespace Port15ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> port16{}; 
        namespace Port16ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> port17{}; 
        namespace Port17ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> port18{}; 
        namespace Port18ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> port19{}; 
        namespace Port19ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> port20{}; 
        namespace Port20ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> port21{}; 
        namespace Port21ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> port22{}; 
        namespace Port22ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> port23{}; 
        namespace Port23ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> port24{}; 
        namespace Port24ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> port25{}; 
        namespace Port25ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> port26{}; 
        namespace Port26ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> port27{}; 
        namespace Port27ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> port28{}; 
        namespace Port28ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> port29{}; 
        namespace Port29ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> port30{}; 
        namespace Port30ValC{
        }
        ///Reads pin states or loads output bits (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> port31{}; 
        namespace Port31ValC{
        }
    }
    namespace Nonempin0{    ///<Masked port register port m
        using Addr = Register::Address<0x400f6180,0x00000000,0,unsigned>;
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mportp0{}; 
        namespace Mportp0ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mportp1{}; 
        namespace Mportp1ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mportp2{}; 
        namespace Mportp2ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mportp3{}; 
        namespace Mportp3ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mportp4{}; 
        namespace Mportp4ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mportp5{}; 
        namespace Mportp5ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mportp6{}; 
        namespace Mportp6ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mportp7{}; 
        namespace Mportp7ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mportp8{}; 
        namespace Mportp8ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mportp9{}; 
        namespace Mportp9ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mportp10{}; 
        namespace Mportp10ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mportp11{}; 
        namespace Mportp11ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mportp12{}; 
        namespace Mportp12ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mportp13{}; 
        namespace Mportp13ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mportp14{}; 
        namespace Mportp14ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mportp15{}; 
        namespace Mportp15ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mportp16{}; 
        namespace Mportp16ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mportp17{}; 
        namespace Mportp17ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mportp18{}; 
        namespace Mportp18ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mportp19{}; 
        namespace Mportp19ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mportp20{}; 
        namespace Mportp20ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mportp21{}; 
        namespace Mportp21ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mportp22{}; 
        namespace Mportp22ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mportp23{}; 
        namespace Mportp23ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mportp24{}; 
        namespace Mportp24ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mportp25{}; 
        namespace Mportp25ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mportp26{}; 
        namespace Mportp26ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mportp27{}; 
        namespace Mportp27ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> mportp28{}; 
        namespace Mportp28ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mportp29{}; 
        namespace Mportp29ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> mportp30{}; 
        namespace Mportp30ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mportp31{}; 
        namespace Mportp31ValC{
        }
    }
    namespace Nonempin1{    ///<Masked port register port m
        using Addr = Register::Address<0x400f6184,0x00000000,0,unsigned>;
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mportp0{}; 
        namespace Mportp0ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mportp1{}; 
        namespace Mportp1ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mportp2{}; 
        namespace Mportp2ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mportp3{}; 
        namespace Mportp3ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mportp4{}; 
        namespace Mportp4ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mportp5{}; 
        namespace Mportp5ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mportp6{}; 
        namespace Mportp6ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mportp7{}; 
        namespace Mportp7ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mportp8{}; 
        namespace Mportp8ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mportp9{}; 
        namespace Mportp9ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mportp10{}; 
        namespace Mportp10ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mportp11{}; 
        namespace Mportp11ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mportp12{}; 
        namespace Mportp12ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mportp13{}; 
        namespace Mportp13ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mportp14{}; 
        namespace Mportp14ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mportp15{}; 
        namespace Mportp15ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mportp16{}; 
        namespace Mportp16ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mportp17{}; 
        namespace Mportp17ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mportp18{}; 
        namespace Mportp18ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mportp19{}; 
        namespace Mportp19ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mportp20{}; 
        namespace Mportp20ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mportp21{}; 
        namespace Mportp21ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mportp22{}; 
        namespace Mportp22ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mportp23{}; 
        namespace Mportp23ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mportp24{}; 
        namespace Mportp24ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mportp25{}; 
        namespace Mportp25ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mportp26{}; 
        namespace Mportp26ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mportp27{}; 
        namespace Mportp27ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> mportp28{}; 
        namespace Mportp28ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mportp29{}; 
        namespace Mportp29ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> mportp30{}; 
        namespace Mportp30ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mportp31{}; 
        namespace Mportp31ValC{
        }
    }
    namespace Nonempin2{    ///<Masked port register port m
        using Addr = Register::Address<0x400f6188,0x00000000,0,unsigned>;
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mportp0{}; 
        namespace Mportp0ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mportp1{}; 
        namespace Mportp1ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mportp2{}; 
        namespace Mportp2ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mportp3{}; 
        namespace Mportp3ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mportp4{}; 
        namespace Mportp4ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mportp5{}; 
        namespace Mportp5ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mportp6{}; 
        namespace Mportp6ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mportp7{}; 
        namespace Mportp7ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mportp8{}; 
        namespace Mportp8ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mportp9{}; 
        namespace Mportp9ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mportp10{}; 
        namespace Mportp10ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mportp11{}; 
        namespace Mportp11ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mportp12{}; 
        namespace Mportp12ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mportp13{}; 
        namespace Mportp13ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mportp14{}; 
        namespace Mportp14ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mportp15{}; 
        namespace Mportp15ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mportp16{}; 
        namespace Mportp16ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mportp17{}; 
        namespace Mportp17ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mportp18{}; 
        namespace Mportp18ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mportp19{}; 
        namespace Mportp19ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mportp20{}; 
        namespace Mportp20ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mportp21{}; 
        namespace Mportp21ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mportp22{}; 
        namespace Mportp22ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mportp23{}; 
        namespace Mportp23ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mportp24{}; 
        namespace Mportp24ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mportp25{}; 
        namespace Mportp25ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mportp26{}; 
        namespace Mportp26ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mportp27{}; 
        namespace Mportp27ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> mportp28{}; 
        namespace Mportp28ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mportp29{}; 
        namespace Mportp29ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> mportp30{}; 
        namespace Mportp30ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mportp31{}; 
        namespace Mportp31ValC{
        }
    }
    namespace Nonempin3{    ///<Masked port register port m
        using Addr = Register::Address<0x400f618c,0x00000000,0,unsigned>;
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mportp0{}; 
        namespace Mportp0ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mportp1{}; 
        namespace Mportp1ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mportp2{}; 
        namespace Mportp2ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mportp3{}; 
        namespace Mportp3ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mportp4{}; 
        namespace Mportp4ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mportp5{}; 
        namespace Mportp5ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mportp6{}; 
        namespace Mportp6ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mportp7{}; 
        namespace Mportp7ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mportp8{}; 
        namespace Mportp8ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mportp9{}; 
        namespace Mportp9ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mportp10{}; 
        namespace Mportp10ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mportp11{}; 
        namespace Mportp11ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mportp12{}; 
        namespace Mportp12ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mportp13{}; 
        namespace Mportp13ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mportp14{}; 
        namespace Mportp14ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mportp15{}; 
        namespace Mportp15ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mportp16{}; 
        namespace Mportp16ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mportp17{}; 
        namespace Mportp17ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mportp18{}; 
        namespace Mportp18ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mportp19{}; 
        namespace Mportp19ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mportp20{}; 
        namespace Mportp20ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mportp21{}; 
        namespace Mportp21ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mportp22{}; 
        namespace Mportp22ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mportp23{}; 
        namespace Mportp23ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mportp24{}; 
        namespace Mportp24ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mportp25{}; 
        namespace Mportp25ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mportp26{}; 
        namespace Mportp26ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mportp27{}; 
        namespace Mportp27ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> mportp28{}; 
        namespace Mportp28ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mportp29{}; 
        namespace Mportp29ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> mportp30{}; 
        namespace Mportp30ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mportp31{}; 
        namespace Mportp31ValC{
        }
    }
    namespace Nonempin4{    ///<Masked port register port m
        using Addr = Register::Address<0x400f6190,0x00000000,0,unsigned>;
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mportp0{}; 
        namespace Mportp0ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mportp1{}; 
        namespace Mportp1ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mportp2{}; 
        namespace Mportp2ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mportp3{}; 
        namespace Mportp3ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mportp4{}; 
        namespace Mportp4ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mportp5{}; 
        namespace Mportp5ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mportp6{}; 
        namespace Mportp6ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mportp7{}; 
        namespace Mportp7ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mportp8{}; 
        namespace Mportp8ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mportp9{}; 
        namespace Mportp9ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mportp10{}; 
        namespace Mportp10ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mportp11{}; 
        namespace Mportp11ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mportp12{}; 
        namespace Mportp12ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mportp13{}; 
        namespace Mportp13ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mportp14{}; 
        namespace Mportp14ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mportp15{}; 
        namespace Mportp15ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mportp16{}; 
        namespace Mportp16ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mportp17{}; 
        namespace Mportp17ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mportp18{}; 
        namespace Mportp18ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mportp19{}; 
        namespace Mportp19ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mportp20{}; 
        namespace Mportp20ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mportp21{}; 
        namespace Mportp21ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mportp22{}; 
        namespace Mportp22ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mportp23{}; 
        namespace Mportp23ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mportp24{}; 
        namespace Mportp24ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mportp25{}; 
        namespace Mportp25ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mportp26{}; 
        namespace Mportp26ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mportp27{}; 
        namespace Mportp27ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> mportp28{}; 
        namespace Mportp28ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mportp29{}; 
        namespace Mportp29ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> mportp30{}; 
        namespace Mportp30ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mportp31{}; 
        namespace Mportp31ValC{
        }
    }
    namespace Nonempin5{    ///<Masked port register port m
        using Addr = Register::Address<0x400f6194,0x00000000,0,unsigned>;
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mportp0{}; 
        namespace Mportp0ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mportp1{}; 
        namespace Mportp1ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mportp2{}; 
        namespace Mportp2ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mportp3{}; 
        namespace Mportp3ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mportp4{}; 
        namespace Mportp4ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mportp5{}; 
        namespace Mportp5ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mportp6{}; 
        namespace Mportp6ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mportp7{}; 
        namespace Mportp7ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mportp8{}; 
        namespace Mportp8ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mportp9{}; 
        namespace Mportp9ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mportp10{}; 
        namespace Mportp10ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mportp11{}; 
        namespace Mportp11ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mportp12{}; 
        namespace Mportp12ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mportp13{}; 
        namespace Mportp13ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mportp14{}; 
        namespace Mportp14ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mportp15{}; 
        namespace Mportp15ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mportp16{}; 
        namespace Mportp16ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mportp17{}; 
        namespace Mportp17ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mportp18{}; 
        namespace Mportp18ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mportp19{}; 
        namespace Mportp19ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mportp20{}; 
        namespace Mportp20ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mportp21{}; 
        namespace Mportp21ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mportp22{}; 
        namespace Mportp22ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mportp23{}; 
        namespace Mportp23ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mportp24{}; 
        namespace Mportp24ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mportp25{}; 
        namespace Mportp25ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mportp26{}; 
        namespace Mportp26ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mportp27{}; 
        namespace Mportp27ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> mportp28{}; 
        namespace Mportp28ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mportp29{}; 
        namespace Mportp29ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> mportp30{}; 
        namespace Mportp30ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mportp31{}; 
        namespace Mportp31ValC{
        }
    }
    namespace Nonempin6{    ///<Masked port register port m
        using Addr = Register::Address<0x400f6198,0x00000000,0,unsigned>;
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mportp0{}; 
        namespace Mportp0ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mportp1{}; 
        namespace Mportp1ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mportp2{}; 
        namespace Mportp2ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mportp3{}; 
        namespace Mportp3ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mportp4{}; 
        namespace Mportp4ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mportp5{}; 
        namespace Mportp5ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mportp6{}; 
        namespace Mportp6ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mportp7{}; 
        namespace Mportp7ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mportp8{}; 
        namespace Mportp8ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mportp9{}; 
        namespace Mportp9ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mportp10{}; 
        namespace Mportp10ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mportp11{}; 
        namespace Mportp11ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mportp12{}; 
        namespace Mportp12ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mportp13{}; 
        namespace Mportp13ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mportp14{}; 
        namespace Mportp14ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mportp15{}; 
        namespace Mportp15ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mportp16{}; 
        namespace Mportp16ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mportp17{}; 
        namespace Mportp17ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mportp18{}; 
        namespace Mportp18ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mportp19{}; 
        namespace Mportp19ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mportp20{}; 
        namespace Mportp20ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mportp21{}; 
        namespace Mportp21ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mportp22{}; 
        namespace Mportp22ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mportp23{}; 
        namespace Mportp23ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mportp24{}; 
        namespace Mportp24ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mportp25{}; 
        namespace Mportp25ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mportp26{}; 
        namespace Mportp26ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mportp27{}; 
        namespace Mportp27ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> mportp28{}; 
        namespace Mportp28ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mportp29{}; 
        namespace Mportp29ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> mportp30{}; 
        namespace Mportp30ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mportp31{}; 
        namespace Mportp31ValC{
        }
    }
    namespace Nonempin7{    ///<Masked port register port m
        using Addr = Register::Address<0x400f619c,0x00000000,0,unsigned>;
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mportp0{}; 
        namespace Mportp0ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mportp1{}; 
        namespace Mportp1ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mportp2{}; 
        namespace Mportp2ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mportp3{}; 
        namespace Mportp3ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mportp4{}; 
        namespace Mportp4ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mportp5{}; 
        namespace Mportp5ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mportp6{}; 
        namespace Mportp6ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mportp7{}; 
        namespace Mportp7ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mportp8{}; 
        namespace Mportp8ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mportp9{}; 
        namespace Mportp9ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mportp10{}; 
        namespace Mportp10ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mportp11{}; 
        namespace Mportp11ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mportp12{}; 
        namespace Mportp12ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mportp13{}; 
        namespace Mportp13ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mportp14{}; 
        namespace Mportp14ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mportp15{}; 
        namespace Mportp15ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mportp16{}; 
        namespace Mportp16ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mportp17{}; 
        namespace Mportp17ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mportp18{}; 
        namespace Mportp18ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mportp19{}; 
        namespace Mportp19ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mportp20{}; 
        namespace Mportp20ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mportp21{}; 
        namespace Mportp21ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mportp22{}; 
        namespace Mportp22ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mportp23{}; 
        namespace Mportp23ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mportp24{}; 
        namespace Mportp24ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mportp25{}; 
        namespace Mportp25ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mportp26{}; 
        namespace Mportp26ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mportp27{}; 
        namespace Mportp27ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> mportp28{}; 
        namespace Mportp28ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mportp29{}; 
        namespace Mportp29ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> mportp30{}; 
        namespace Mportp30ValC{
        }
        ///Masked port register (bit 0 = GPIOm[0], bit 1 = GPIOm[1], ..., bit 31 = GPIOm[31]). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mportp31{}; 
        namespace Mportp31ValC{
        }
    }
    namespace Noneset0{    ///<Write: Set register for port m  Read: output bits for port m
        using Addr = Register::Address<0x400f6200,0x00000000,0,unsigned>;
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setp0{}; 
        namespace Setp0ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setp1{}; 
        namespace Setp1ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setp2{}; 
        namespace Setp2ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setp3{}; 
        namespace Setp3ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setp4{}; 
        namespace Setp4ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setp5{}; 
        namespace Setp5ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setp6{}; 
        namespace Setp6ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setp7{}; 
        namespace Setp7ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setp8{}; 
        namespace Setp8ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setp9{}; 
        namespace Setp9ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setp10{}; 
        namespace Setp10ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setp11{}; 
        namespace Setp11ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setp12{}; 
        namespace Setp12ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setp13{}; 
        namespace Setp13ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setp14{}; 
        namespace Setp14ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setp15{}; 
        namespace Setp15ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> setp16{}; 
        namespace Setp16ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> setp17{}; 
        namespace Setp17ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> setp18{}; 
        namespace Setp18ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> setp19{}; 
        namespace Setp19ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> setp20{}; 
        namespace Setp20ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> setp21{}; 
        namespace Setp21ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> setp22{}; 
        namespace Setp22ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> setp23{}; 
        namespace Setp23ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> setp24{}; 
        namespace Setp24ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> setp25{}; 
        namespace Setp25ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> setp26{}; 
        namespace Setp26ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> setp27{}; 
        namespace Setp27ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> setp28{}; 
        namespace Setp28ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> setp29{}; 
        namespace Setp29ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> setp30{}; 
        namespace Setp30ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> setp31{}; 
        namespace Setp31ValC{
        }
    }
    namespace Noneset1{    ///<Write: Set register for port m  Read: output bits for port m
        using Addr = Register::Address<0x400f6204,0x00000000,0,unsigned>;
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setp0{}; 
        namespace Setp0ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setp1{}; 
        namespace Setp1ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setp2{}; 
        namespace Setp2ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setp3{}; 
        namespace Setp3ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setp4{}; 
        namespace Setp4ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setp5{}; 
        namespace Setp5ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setp6{}; 
        namespace Setp6ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setp7{}; 
        namespace Setp7ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setp8{}; 
        namespace Setp8ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setp9{}; 
        namespace Setp9ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setp10{}; 
        namespace Setp10ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setp11{}; 
        namespace Setp11ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setp12{}; 
        namespace Setp12ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setp13{}; 
        namespace Setp13ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setp14{}; 
        namespace Setp14ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setp15{}; 
        namespace Setp15ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> setp16{}; 
        namespace Setp16ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> setp17{}; 
        namespace Setp17ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> setp18{}; 
        namespace Setp18ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> setp19{}; 
        namespace Setp19ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> setp20{}; 
        namespace Setp20ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> setp21{}; 
        namespace Setp21ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> setp22{}; 
        namespace Setp22ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> setp23{}; 
        namespace Setp23ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> setp24{}; 
        namespace Setp24ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> setp25{}; 
        namespace Setp25ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> setp26{}; 
        namespace Setp26ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> setp27{}; 
        namespace Setp27ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> setp28{}; 
        namespace Setp28ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> setp29{}; 
        namespace Setp29ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> setp30{}; 
        namespace Setp30ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> setp31{}; 
        namespace Setp31ValC{
        }
    }
    namespace Noneset2{    ///<Write: Set register for port m  Read: output bits for port m
        using Addr = Register::Address<0x400f6208,0x00000000,0,unsigned>;
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setp0{}; 
        namespace Setp0ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setp1{}; 
        namespace Setp1ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setp2{}; 
        namespace Setp2ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setp3{}; 
        namespace Setp3ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setp4{}; 
        namespace Setp4ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setp5{}; 
        namespace Setp5ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setp6{}; 
        namespace Setp6ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setp7{}; 
        namespace Setp7ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setp8{}; 
        namespace Setp8ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setp9{}; 
        namespace Setp9ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setp10{}; 
        namespace Setp10ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setp11{}; 
        namespace Setp11ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setp12{}; 
        namespace Setp12ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setp13{}; 
        namespace Setp13ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setp14{}; 
        namespace Setp14ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setp15{}; 
        namespace Setp15ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> setp16{}; 
        namespace Setp16ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> setp17{}; 
        namespace Setp17ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> setp18{}; 
        namespace Setp18ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> setp19{}; 
        namespace Setp19ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> setp20{}; 
        namespace Setp20ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> setp21{}; 
        namespace Setp21ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> setp22{}; 
        namespace Setp22ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> setp23{}; 
        namespace Setp23ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> setp24{}; 
        namespace Setp24ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> setp25{}; 
        namespace Setp25ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> setp26{}; 
        namespace Setp26ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> setp27{}; 
        namespace Setp27ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> setp28{}; 
        namespace Setp28ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> setp29{}; 
        namespace Setp29ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> setp30{}; 
        namespace Setp30ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> setp31{}; 
        namespace Setp31ValC{
        }
    }
    namespace Noneset3{    ///<Write: Set register for port m  Read: output bits for port m
        using Addr = Register::Address<0x400f620c,0x00000000,0,unsigned>;
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setp0{}; 
        namespace Setp0ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setp1{}; 
        namespace Setp1ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setp2{}; 
        namespace Setp2ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setp3{}; 
        namespace Setp3ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setp4{}; 
        namespace Setp4ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setp5{}; 
        namespace Setp5ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setp6{}; 
        namespace Setp6ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setp7{}; 
        namespace Setp7ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setp8{}; 
        namespace Setp8ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setp9{}; 
        namespace Setp9ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setp10{}; 
        namespace Setp10ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setp11{}; 
        namespace Setp11ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setp12{}; 
        namespace Setp12ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setp13{}; 
        namespace Setp13ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setp14{}; 
        namespace Setp14ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setp15{}; 
        namespace Setp15ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> setp16{}; 
        namespace Setp16ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> setp17{}; 
        namespace Setp17ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> setp18{}; 
        namespace Setp18ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> setp19{}; 
        namespace Setp19ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> setp20{}; 
        namespace Setp20ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> setp21{}; 
        namespace Setp21ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> setp22{}; 
        namespace Setp22ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> setp23{}; 
        namespace Setp23ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> setp24{}; 
        namespace Setp24ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> setp25{}; 
        namespace Setp25ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> setp26{}; 
        namespace Setp26ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> setp27{}; 
        namespace Setp27ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> setp28{}; 
        namespace Setp28ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> setp29{}; 
        namespace Setp29ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> setp30{}; 
        namespace Setp30ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> setp31{}; 
        namespace Setp31ValC{
        }
    }
    namespace Noneset4{    ///<Write: Set register for port m  Read: output bits for port m
        using Addr = Register::Address<0x400f6210,0x00000000,0,unsigned>;
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setp0{}; 
        namespace Setp0ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setp1{}; 
        namespace Setp1ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setp2{}; 
        namespace Setp2ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setp3{}; 
        namespace Setp3ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setp4{}; 
        namespace Setp4ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setp5{}; 
        namespace Setp5ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setp6{}; 
        namespace Setp6ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setp7{}; 
        namespace Setp7ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setp8{}; 
        namespace Setp8ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setp9{}; 
        namespace Setp9ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setp10{}; 
        namespace Setp10ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setp11{}; 
        namespace Setp11ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setp12{}; 
        namespace Setp12ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setp13{}; 
        namespace Setp13ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setp14{}; 
        namespace Setp14ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setp15{}; 
        namespace Setp15ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> setp16{}; 
        namespace Setp16ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> setp17{}; 
        namespace Setp17ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> setp18{}; 
        namespace Setp18ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> setp19{}; 
        namespace Setp19ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> setp20{}; 
        namespace Setp20ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> setp21{}; 
        namespace Setp21ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> setp22{}; 
        namespace Setp22ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> setp23{}; 
        namespace Setp23ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> setp24{}; 
        namespace Setp24ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> setp25{}; 
        namespace Setp25ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> setp26{}; 
        namespace Setp26ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> setp27{}; 
        namespace Setp27ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> setp28{}; 
        namespace Setp28ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> setp29{}; 
        namespace Setp29ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> setp30{}; 
        namespace Setp30ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> setp31{}; 
        namespace Setp31ValC{
        }
    }
    namespace Noneset5{    ///<Write: Set register for port m  Read: output bits for port m
        using Addr = Register::Address<0x400f6214,0x00000000,0,unsigned>;
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setp0{}; 
        namespace Setp0ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setp1{}; 
        namespace Setp1ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setp2{}; 
        namespace Setp2ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setp3{}; 
        namespace Setp3ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setp4{}; 
        namespace Setp4ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setp5{}; 
        namespace Setp5ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setp6{}; 
        namespace Setp6ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setp7{}; 
        namespace Setp7ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setp8{}; 
        namespace Setp8ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setp9{}; 
        namespace Setp9ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setp10{}; 
        namespace Setp10ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setp11{}; 
        namespace Setp11ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setp12{}; 
        namespace Setp12ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setp13{}; 
        namespace Setp13ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setp14{}; 
        namespace Setp14ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setp15{}; 
        namespace Setp15ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> setp16{}; 
        namespace Setp16ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> setp17{}; 
        namespace Setp17ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> setp18{}; 
        namespace Setp18ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> setp19{}; 
        namespace Setp19ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> setp20{}; 
        namespace Setp20ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> setp21{}; 
        namespace Setp21ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> setp22{}; 
        namespace Setp22ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> setp23{}; 
        namespace Setp23ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> setp24{}; 
        namespace Setp24ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> setp25{}; 
        namespace Setp25ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> setp26{}; 
        namespace Setp26ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> setp27{}; 
        namespace Setp27ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> setp28{}; 
        namespace Setp28ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> setp29{}; 
        namespace Setp29ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> setp30{}; 
        namespace Setp30ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> setp31{}; 
        namespace Setp31ValC{
        }
    }
    namespace Noneset6{    ///<Write: Set register for port m  Read: output bits for port m
        using Addr = Register::Address<0x400f6218,0x00000000,0,unsigned>;
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setp0{}; 
        namespace Setp0ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setp1{}; 
        namespace Setp1ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setp2{}; 
        namespace Setp2ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setp3{}; 
        namespace Setp3ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setp4{}; 
        namespace Setp4ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setp5{}; 
        namespace Setp5ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setp6{}; 
        namespace Setp6ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setp7{}; 
        namespace Setp7ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setp8{}; 
        namespace Setp8ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setp9{}; 
        namespace Setp9ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setp10{}; 
        namespace Setp10ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setp11{}; 
        namespace Setp11ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setp12{}; 
        namespace Setp12ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setp13{}; 
        namespace Setp13ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setp14{}; 
        namespace Setp14ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setp15{}; 
        namespace Setp15ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> setp16{}; 
        namespace Setp16ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> setp17{}; 
        namespace Setp17ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> setp18{}; 
        namespace Setp18ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> setp19{}; 
        namespace Setp19ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> setp20{}; 
        namespace Setp20ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> setp21{}; 
        namespace Setp21ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> setp22{}; 
        namespace Setp22ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> setp23{}; 
        namespace Setp23ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> setp24{}; 
        namespace Setp24ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> setp25{}; 
        namespace Setp25ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> setp26{}; 
        namespace Setp26ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> setp27{}; 
        namespace Setp27ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> setp28{}; 
        namespace Setp28ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> setp29{}; 
        namespace Setp29ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> setp30{}; 
        namespace Setp30ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> setp31{}; 
        namespace Setp31ValC{
        }
    }
    namespace Noneset7{    ///<Write: Set register for port m  Read: output bits for port m
        using Addr = Register::Address<0x400f621c,0x00000000,0,unsigned>;
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setp0{}; 
        namespace Setp0ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setp1{}; 
        namespace Setp1ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setp2{}; 
        namespace Setp2ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setp3{}; 
        namespace Setp3ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setp4{}; 
        namespace Setp4ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setp5{}; 
        namespace Setp5ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setp6{}; 
        namespace Setp6ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setp7{}; 
        namespace Setp7ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setp8{}; 
        namespace Setp8ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setp9{}; 
        namespace Setp9ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setp10{}; 
        namespace Setp10ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setp11{}; 
        namespace Setp11ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setp12{}; 
        namespace Setp12ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setp13{}; 
        namespace Setp13ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setp14{}; 
        namespace Setp14ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setp15{}; 
        namespace Setp15ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> setp16{}; 
        namespace Setp16ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> setp17{}; 
        namespace Setp17ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> setp18{}; 
        namespace Setp18ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> setp19{}; 
        namespace Setp19ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> setp20{}; 
        namespace Setp20ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> setp21{}; 
        namespace Setp21ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> setp22{}; 
        namespace Setp22ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> setp23{}; 
        namespace Setp23ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> setp24{}; 
        namespace Setp24ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> setp25{}; 
        namespace Setp25ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> setp26{}; 
        namespace Setp26ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> setp27{}; 
        namespace Setp27ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> setp28{}; 
        namespace Setp28ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> setp29{}; 
        namespace Setp29ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> setp30{}; 
        namespace Setp30ValC{
        }
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> setp31{}; 
        namespace Setp31ValC{
        }
    }
    namespace Noneclr0{    ///<Clear port m
        using Addr = Register::Address<0x400f6280,0x00000000,0,unsigned>;
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrp00{}; 
        namespace Clrp00ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrp01{}; 
        namespace Clrp01ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrp02{}; 
        namespace Clrp02ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrp03{}; 
        namespace Clrp03ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrp04{}; 
        namespace Clrp04ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrp05{}; 
        namespace Clrp05ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrp06{}; 
        namespace Clrp06ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrp07{}; 
        namespace Clrp07ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrp08{}; 
        namespace Clrp08ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrp09{}; 
        namespace Clrp09ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrp010{}; 
        namespace Clrp010ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrp011{}; 
        namespace Clrp011ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrp012{}; 
        namespace Clrp012ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrp013{}; 
        namespace Clrp013ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrp014{}; 
        namespace Clrp014ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrp015{}; 
        namespace Clrp015ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clrp016{}; 
        namespace Clrp016ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clrp017{}; 
        namespace Clrp017ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> clrp018{}; 
        namespace Clrp018ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> clrp019{}; 
        namespace Clrp019ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> clrp020{}; 
        namespace Clrp020ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> clrp021{}; 
        namespace Clrp021ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> clrp022{}; 
        namespace Clrp022ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> clrp023{}; 
        namespace Clrp023ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> clrp024{}; 
        namespace Clrp024ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> clrp025{}; 
        namespace Clrp025ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> clrp026{}; 
        namespace Clrp026ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> clrp027{}; 
        namespace Clrp027ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> clrp028{}; 
        namespace Clrp028ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> clrp029{}; 
        namespace Clrp029ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clrp030{}; 
        namespace Clrp030ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> clrp031{}; 
        namespace Clrp031ValC{
        }
    }
    namespace Noneclr1{    ///<Clear port m
        using Addr = Register::Address<0x400f6284,0x00000000,0,unsigned>;
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrp00{}; 
        namespace Clrp00ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrp01{}; 
        namespace Clrp01ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrp02{}; 
        namespace Clrp02ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrp03{}; 
        namespace Clrp03ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrp04{}; 
        namespace Clrp04ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrp05{}; 
        namespace Clrp05ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrp06{}; 
        namespace Clrp06ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrp07{}; 
        namespace Clrp07ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrp08{}; 
        namespace Clrp08ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrp09{}; 
        namespace Clrp09ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrp010{}; 
        namespace Clrp010ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrp011{}; 
        namespace Clrp011ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrp012{}; 
        namespace Clrp012ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrp013{}; 
        namespace Clrp013ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrp014{}; 
        namespace Clrp014ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrp015{}; 
        namespace Clrp015ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clrp016{}; 
        namespace Clrp016ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clrp017{}; 
        namespace Clrp017ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> clrp018{}; 
        namespace Clrp018ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> clrp019{}; 
        namespace Clrp019ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> clrp020{}; 
        namespace Clrp020ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> clrp021{}; 
        namespace Clrp021ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> clrp022{}; 
        namespace Clrp022ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> clrp023{}; 
        namespace Clrp023ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> clrp024{}; 
        namespace Clrp024ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> clrp025{}; 
        namespace Clrp025ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> clrp026{}; 
        namespace Clrp026ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> clrp027{}; 
        namespace Clrp027ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> clrp028{}; 
        namespace Clrp028ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> clrp029{}; 
        namespace Clrp029ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clrp030{}; 
        namespace Clrp030ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> clrp031{}; 
        namespace Clrp031ValC{
        }
    }
    namespace Noneclr2{    ///<Clear port m
        using Addr = Register::Address<0x400f6288,0x00000000,0,unsigned>;
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrp00{}; 
        namespace Clrp00ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrp01{}; 
        namespace Clrp01ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrp02{}; 
        namespace Clrp02ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrp03{}; 
        namespace Clrp03ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrp04{}; 
        namespace Clrp04ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrp05{}; 
        namespace Clrp05ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrp06{}; 
        namespace Clrp06ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrp07{}; 
        namespace Clrp07ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrp08{}; 
        namespace Clrp08ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrp09{}; 
        namespace Clrp09ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrp010{}; 
        namespace Clrp010ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrp011{}; 
        namespace Clrp011ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrp012{}; 
        namespace Clrp012ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrp013{}; 
        namespace Clrp013ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrp014{}; 
        namespace Clrp014ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrp015{}; 
        namespace Clrp015ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clrp016{}; 
        namespace Clrp016ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clrp017{}; 
        namespace Clrp017ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> clrp018{}; 
        namespace Clrp018ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> clrp019{}; 
        namespace Clrp019ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> clrp020{}; 
        namespace Clrp020ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> clrp021{}; 
        namespace Clrp021ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> clrp022{}; 
        namespace Clrp022ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> clrp023{}; 
        namespace Clrp023ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> clrp024{}; 
        namespace Clrp024ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> clrp025{}; 
        namespace Clrp025ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> clrp026{}; 
        namespace Clrp026ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> clrp027{}; 
        namespace Clrp027ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> clrp028{}; 
        namespace Clrp028ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> clrp029{}; 
        namespace Clrp029ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clrp030{}; 
        namespace Clrp030ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> clrp031{}; 
        namespace Clrp031ValC{
        }
    }
    namespace Noneclr3{    ///<Clear port m
        using Addr = Register::Address<0x400f628c,0x00000000,0,unsigned>;
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrp00{}; 
        namespace Clrp00ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrp01{}; 
        namespace Clrp01ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrp02{}; 
        namespace Clrp02ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrp03{}; 
        namespace Clrp03ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrp04{}; 
        namespace Clrp04ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrp05{}; 
        namespace Clrp05ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrp06{}; 
        namespace Clrp06ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrp07{}; 
        namespace Clrp07ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrp08{}; 
        namespace Clrp08ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrp09{}; 
        namespace Clrp09ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrp010{}; 
        namespace Clrp010ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrp011{}; 
        namespace Clrp011ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrp012{}; 
        namespace Clrp012ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrp013{}; 
        namespace Clrp013ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrp014{}; 
        namespace Clrp014ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrp015{}; 
        namespace Clrp015ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clrp016{}; 
        namespace Clrp016ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clrp017{}; 
        namespace Clrp017ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> clrp018{}; 
        namespace Clrp018ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> clrp019{}; 
        namespace Clrp019ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> clrp020{}; 
        namespace Clrp020ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> clrp021{}; 
        namespace Clrp021ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> clrp022{}; 
        namespace Clrp022ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> clrp023{}; 
        namespace Clrp023ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> clrp024{}; 
        namespace Clrp024ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> clrp025{}; 
        namespace Clrp025ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> clrp026{}; 
        namespace Clrp026ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> clrp027{}; 
        namespace Clrp027ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> clrp028{}; 
        namespace Clrp028ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> clrp029{}; 
        namespace Clrp029ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clrp030{}; 
        namespace Clrp030ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> clrp031{}; 
        namespace Clrp031ValC{
        }
    }
    namespace Noneclr4{    ///<Clear port m
        using Addr = Register::Address<0x400f6290,0x00000000,0,unsigned>;
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrp00{}; 
        namespace Clrp00ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrp01{}; 
        namespace Clrp01ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrp02{}; 
        namespace Clrp02ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrp03{}; 
        namespace Clrp03ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrp04{}; 
        namespace Clrp04ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrp05{}; 
        namespace Clrp05ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrp06{}; 
        namespace Clrp06ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrp07{}; 
        namespace Clrp07ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrp08{}; 
        namespace Clrp08ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrp09{}; 
        namespace Clrp09ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrp010{}; 
        namespace Clrp010ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrp011{}; 
        namespace Clrp011ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrp012{}; 
        namespace Clrp012ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrp013{}; 
        namespace Clrp013ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrp014{}; 
        namespace Clrp014ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrp015{}; 
        namespace Clrp015ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clrp016{}; 
        namespace Clrp016ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clrp017{}; 
        namespace Clrp017ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> clrp018{}; 
        namespace Clrp018ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> clrp019{}; 
        namespace Clrp019ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> clrp020{}; 
        namespace Clrp020ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> clrp021{}; 
        namespace Clrp021ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> clrp022{}; 
        namespace Clrp022ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> clrp023{}; 
        namespace Clrp023ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> clrp024{}; 
        namespace Clrp024ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> clrp025{}; 
        namespace Clrp025ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> clrp026{}; 
        namespace Clrp026ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> clrp027{}; 
        namespace Clrp027ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> clrp028{}; 
        namespace Clrp028ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> clrp029{}; 
        namespace Clrp029ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clrp030{}; 
        namespace Clrp030ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> clrp031{}; 
        namespace Clrp031ValC{
        }
    }
    namespace Noneclr5{    ///<Clear port m
        using Addr = Register::Address<0x400f6294,0x00000000,0,unsigned>;
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrp00{}; 
        namespace Clrp00ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrp01{}; 
        namespace Clrp01ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrp02{}; 
        namespace Clrp02ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrp03{}; 
        namespace Clrp03ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrp04{}; 
        namespace Clrp04ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrp05{}; 
        namespace Clrp05ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrp06{}; 
        namespace Clrp06ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrp07{}; 
        namespace Clrp07ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrp08{}; 
        namespace Clrp08ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrp09{}; 
        namespace Clrp09ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrp010{}; 
        namespace Clrp010ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrp011{}; 
        namespace Clrp011ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrp012{}; 
        namespace Clrp012ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrp013{}; 
        namespace Clrp013ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrp014{}; 
        namespace Clrp014ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrp015{}; 
        namespace Clrp015ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clrp016{}; 
        namespace Clrp016ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clrp017{}; 
        namespace Clrp017ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> clrp018{}; 
        namespace Clrp018ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> clrp019{}; 
        namespace Clrp019ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> clrp020{}; 
        namespace Clrp020ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> clrp021{}; 
        namespace Clrp021ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> clrp022{}; 
        namespace Clrp022ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> clrp023{}; 
        namespace Clrp023ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> clrp024{}; 
        namespace Clrp024ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> clrp025{}; 
        namespace Clrp025ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> clrp026{}; 
        namespace Clrp026ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> clrp027{}; 
        namespace Clrp027ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> clrp028{}; 
        namespace Clrp028ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> clrp029{}; 
        namespace Clrp029ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clrp030{}; 
        namespace Clrp030ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> clrp031{}; 
        namespace Clrp031ValC{
        }
    }
    namespace Noneclr6{    ///<Clear port m
        using Addr = Register::Address<0x400f6298,0x00000000,0,unsigned>;
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrp00{}; 
        namespace Clrp00ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrp01{}; 
        namespace Clrp01ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrp02{}; 
        namespace Clrp02ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrp03{}; 
        namespace Clrp03ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrp04{}; 
        namespace Clrp04ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrp05{}; 
        namespace Clrp05ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrp06{}; 
        namespace Clrp06ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrp07{}; 
        namespace Clrp07ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrp08{}; 
        namespace Clrp08ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrp09{}; 
        namespace Clrp09ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrp010{}; 
        namespace Clrp010ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrp011{}; 
        namespace Clrp011ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrp012{}; 
        namespace Clrp012ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrp013{}; 
        namespace Clrp013ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrp014{}; 
        namespace Clrp014ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrp015{}; 
        namespace Clrp015ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clrp016{}; 
        namespace Clrp016ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clrp017{}; 
        namespace Clrp017ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> clrp018{}; 
        namespace Clrp018ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> clrp019{}; 
        namespace Clrp019ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> clrp020{}; 
        namespace Clrp020ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> clrp021{}; 
        namespace Clrp021ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> clrp022{}; 
        namespace Clrp022ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> clrp023{}; 
        namespace Clrp023ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> clrp024{}; 
        namespace Clrp024ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> clrp025{}; 
        namespace Clrp025ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> clrp026{}; 
        namespace Clrp026ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> clrp027{}; 
        namespace Clrp027ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> clrp028{}; 
        namespace Clrp028ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> clrp029{}; 
        namespace Clrp029ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clrp030{}; 
        namespace Clrp030ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> clrp031{}; 
        namespace Clrp031ValC{
        }
    }
    namespace Noneclr7{    ///<Clear port m
        using Addr = Register::Address<0x400f629c,0x00000000,0,unsigned>;
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrp00{}; 
        namespace Clrp00ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrp01{}; 
        namespace Clrp01ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrp02{}; 
        namespace Clrp02ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrp03{}; 
        namespace Clrp03ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrp04{}; 
        namespace Clrp04ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrp05{}; 
        namespace Clrp05ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrp06{}; 
        namespace Clrp06ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrp07{}; 
        namespace Clrp07ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrp08{}; 
        namespace Clrp08ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrp09{}; 
        namespace Clrp09ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrp010{}; 
        namespace Clrp010ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrp011{}; 
        namespace Clrp011ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrp012{}; 
        namespace Clrp012ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrp013{}; 
        namespace Clrp013ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrp014{}; 
        namespace Clrp014ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrp015{}; 
        namespace Clrp015ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clrp016{}; 
        namespace Clrp016ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clrp017{}; 
        namespace Clrp017ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> clrp018{}; 
        namespace Clrp018ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> clrp019{}; 
        namespace Clrp019ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> clrp020{}; 
        namespace Clrp020ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> clrp021{}; 
        namespace Clrp021ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> clrp022{}; 
        namespace Clrp022ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> clrp023{}; 
        namespace Clrp023ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> clrp024{}; 
        namespace Clrp024ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> clrp025{}; 
        namespace Clrp025ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> clrp026{}; 
        namespace Clrp026ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> clrp027{}; 
        namespace Clrp027ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> clrp028{}; 
        namespace Clrp028ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> clrp029{}; 
        namespace Clrp029ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clrp030{}; 
        namespace Clrp030ValC{
        }
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> clrp031{}; 
        namespace Clrp031ValC{
        }
    }
    namespace Nonenot0{    ///<Toggle port m
        using Addr = Register::Address<0x400f6300,0x00000000,0,unsigned>;
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> notp0{}; 
        namespace Notp0ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> notp1{}; 
        namespace Notp1ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> notp2{}; 
        namespace Notp2ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> notp3{}; 
        namespace Notp3ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> notp4{}; 
        namespace Notp4ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notp5{}; 
        namespace Notp5ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> notp6{}; 
        namespace Notp6ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> notp7{}; 
        namespace Notp7ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> notp8{}; 
        namespace Notp8ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> notp9{}; 
        namespace Notp9ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> notp10{}; 
        namespace Notp10ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> notp11{}; 
        namespace Notp11ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> notp12{}; 
        namespace Notp12ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> notp13{}; 
        namespace Notp13ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> notp14{}; 
        namespace Notp14ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> notp15{}; 
        namespace Notp15ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> notp16{}; 
        namespace Notp16ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> notp17{}; 
        namespace Notp17ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> notp18{}; 
        namespace Notp18ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> notp19{}; 
        namespace Notp19ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> notp20{}; 
        namespace Notp20ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> notp21{}; 
        namespace Notp21ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> notp22{}; 
        namespace Notp22ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> notp23{}; 
        namespace Notp23ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> notp24{}; 
        namespace Notp24ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> notp25{}; 
        namespace Notp25ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> notp26{}; 
        namespace Notp26ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> notp27{}; 
        namespace Notp27ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> notp28{}; 
        namespace Notp28ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> notp29{}; 
        namespace Notp29ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> notp30{}; 
        namespace Notp30ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> notp31{}; 
        namespace Notp31ValC{
        }
    }
    namespace Nonenot1{    ///<Toggle port m
        using Addr = Register::Address<0x400f6304,0x00000000,0,unsigned>;
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> notp0{}; 
        namespace Notp0ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> notp1{}; 
        namespace Notp1ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> notp2{}; 
        namespace Notp2ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> notp3{}; 
        namespace Notp3ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> notp4{}; 
        namespace Notp4ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notp5{}; 
        namespace Notp5ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> notp6{}; 
        namespace Notp6ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> notp7{}; 
        namespace Notp7ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> notp8{}; 
        namespace Notp8ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> notp9{}; 
        namespace Notp9ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> notp10{}; 
        namespace Notp10ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> notp11{}; 
        namespace Notp11ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> notp12{}; 
        namespace Notp12ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> notp13{}; 
        namespace Notp13ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> notp14{}; 
        namespace Notp14ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> notp15{}; 
        namespace Notp15ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> notp16{}; 
        namespace Notp16ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> notp17{}; 
        namespace Notp17ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> notp18{}; 
        namespace Notp18ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> notp19{}; 
        namespace Notp19ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> notp20{}; 
        namespace Notp20ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> notp21{}; 
        namespace Notp21ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> notp22{}; 
        namespace Notp22ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> notp23{}; 
        namespace Notp23ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> notp24{}; 
        namespace Notp24ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> notp25{}; 
        namespace Notp25ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> notp26{}; 
        namespace Notp26ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> notp27{}; 
        namespace Notp27ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> notp28{}; 
        namespace Notp28ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> notp29{}; 
        namespace Notp29ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> notp30{}; 
        namespace Notp30ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> notp31{}; 
        namespace Notp31ValC{
        }
    }
    namespace Nonenot2{    ///<Toggle port m
        using Addr = Register::Address<0x400f6308,0x00000000,0,unsigned>;
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> notp0{}; 
        namespace Notp0ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> notp1{}; 
        namespace Notp1ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> notp2{}; 
        namespace Notp2ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> notp3{}; 
        namespace Notp3ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> notp4{}; 
        namespace Notp4ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notp5{}; 
        namespace Notp5ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> notp6{}; 
        namespace Notp6ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> notp7{}; 
        namespace Notp7ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> notp8{}; 
        namespace Notp8ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> notp9{}; 
        namespace Notp9ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> notp10{}; 
        namespace Notp10ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> notp11{}; 
        namespace Notp11ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> notp12{}; 
        namespace Notp12ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> notp13{}; 
        namespace Notp13ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> notp14{}; 
        namespace Notp14ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> notp15{}; 
        namespace Notp15ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> notp16{}; 
        namespace Notp16ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> notp17{}; 
        namespace Notp17ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> notp18{}; 
        namespace Notp18ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> notp19{}; 
        namespace Notp19ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> notp20{}; 
        namespace Notp20ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> notp21{}; 
        namespace Notp21ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> notp22{}; 
        namespace Notp22ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> notp23{}; 
        namespace Notp23ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> notp24{}; 
        namespace Notp24ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> notp25{}; 
        namespace Notp25ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> notp26{}; 
        namespace Notp26ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> notp27{}; 
        namespace Notp27ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> notp28{}; 
        namespace Notp28ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> notp29{}; 
        namespace Notp29ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> notp30{}; 
        namespace Notp30ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> notp31{}; 
        namespace Notp31ValC{
        }
    }
    namespace Nonenot3{    ///<Toggle port m
        using Addr = Register::Address<0x400f630c,0x00000000,0,unsigned>;
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> notp0{}; 
        namespace Notp0ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> notp1{}; 
        namespace Notp1ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> notp2{}; 
        namespace Notp2ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> notp3{}; 
        namespace Notp3ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> notp4{}; 
        namespace Notp4ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notp5{}; 
        namespace Notp5ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> notp6{}; 
        namespace Notp6ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> notp7{}; 
        namespace Notp7ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> notp8{}; 
        namespace Notp8ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> notp9{}; 
        namespace Notp9ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> notp10{}; 
        namespace Notp10ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> notp11{}; 
        namespace Notp11ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> notp12{}; 
        namespace Notp12ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> notp13{}; 
        namespace Notp13ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> notp14{}; 
        namespace Notp14ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> notp15{}; 
        namespace Notp15ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> notp16{}; 
        namespace Notp16ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> notp17{}; 
        namespace Notp17ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> notp18{}; 
        namespace Notp18ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> notp19{}; 
        namespace Notp19ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> notp20{}; 
        namespace Notp20ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> notp21{}; 
        namespace Notp21ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> notp22{}; 
        namespace Notp22ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> notp23{}; 
        namespace Notp23ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> notp24{}; 
        namespace Notp24ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> notp25{}; 
        namespace Notp25ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> notp26{}; 
        namespace Notp26ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> notp27{}; 
        namespace Notp27ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> notp28{}; 
        namespace Notp28ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> notp29{}; 
        namespace Notp29ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> notp30{}; 
        namespace Notp30ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> notp31{}; 
        namespace Notp31ValC{
        }
    }
    namespace Nonenot4{    ///<Toggle port m
        using Addr = Register::Address<0x400f6310,0x00000000,0,unsigned>;
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> notp0{}; 
        namespace Notp0ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> notp1{}; 
        namespace Notp1ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> notp2{}; 
        namespace Notp2ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> notp3{}; 
        namespace Notp3ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> notp4{}; 
        namespace Notp4ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notp5{}; 
        namespace Notp5ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> notp6{}; 
        namespace Notp6ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> notp7{}; 
        namespace Notp7ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> notp8{}; 
        namespace Notp8ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> notp9{}; 
        namespace Notp9ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> notp10{}; 
        namespace Notp10ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> notp11{}; 
        namespace Notp11ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> notp12{}; 
        namespace Notp12ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> notp13{}; 
        namespace Notp13ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> notp14{}; 
        namespace Notp14ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> notp15{}; 
        namespace Notp15ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> notp16{}; 
        namespace Notp16ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> notp17{}; 
        namespace Notp17ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> notp18{}; 
        namespace Notp18ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> notp19{}; 
        namespace Notp19ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> notp20{}; 
        namespace Notp20ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> notp21{}; 
        namespace Notp21ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> notp22{}; 
        namespace Notp22ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> notp23{}; 
        namespace Notp23ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> notp24{}; 
        namespace Notp24ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> notp25{}; 
        namespace Notp25ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> notp26{}; 
        namespace Notp26ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> notp27{}; 
        namespace Notp27ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> notp28{}; 
        namespace Notp28ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> notp29{}; 
        namespace Notp29ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> notp30{}; 
        namespace Notp30ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> notp31{}; 
        namespace Notp31ValC{
        }
    }
    namespace Nonenot5{    ///<Toggle port m
        using Addr = Register::Address<0x400f6314,0x00000000,0,unsigned>;
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> notp0{}; 
        namespace Notp0ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> notp1{}; 
        namespace Notp1ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> notp2{}; 
        namespace Notp2ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> notp3{}; 
        namespace Notp3ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> notp4{}; 
        namespace Notp4ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notp5{}; 
        namespace Notp5ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> notp6{}; 
        namespace Notp6ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> notp7{}; 
        namespace Notp7ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> notp8{}; 
        namespace Notp8ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> notp9{}; 
        namespace Notp9ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> notp10{}; 
        namespace Notp10ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> notp11{}; 
        namespace Notp11ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> notp12{}; 
        namespace Notp12ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> notp13{}; 
        namespace Notp13ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> notp14{}; 
        namespace Notp14ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> notp15{}; 
        namespace Notp15ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> notp16{}; 
        namespace Notp16ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> notp17{}; 
        namespace Notp17ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> notp18{}; 
        namespace Notp18ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> notp19{}; 
        namespace Notp19ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> notp20{}; 
        namespace Notp20ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> notp21{}; 
        namespace Notp21ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> notp22{}; 
        namespace Notp22ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> notp23{}; 
        namespace Notp23ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> notp24{}; 
        namespace Notp24ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> notp25{}; 
        namespace Notp25ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> notp26{}; 
        namespace Notp26ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> notp27{}; 
        namespace Notp27ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> notp28{}; 
        namespace Notp28ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> notp29{}; 
        namespace Notp29ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> notp30{}; 
        namespace Notp30ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> notp31{}; 
        namespace Notp31ValC{
        }
    }
    namespace Nonenot6{    ///<Toggle port m
        using Addr = Register::Address<0x400f6318,0x00000000,0,unsigned>;
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> notp0{}; 
        namespace Notp0ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> notp1{}; 
        namespace Notp1ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> notp2{}; 
        namespace Notp2ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> notp3{}; 
        namespace Notp3ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> notp4{}; 
        namespace Notp4ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notp5{}; 
        namespace Notp5ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> notp6{}; 
        namespace Notp6ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> notp7{}; 
        namespace Notp7ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> notp8{}; 
        namespace Notp8ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> notp9{}; 
        namespace Notp9ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> notp10{}; 
        namespace Notp10ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> notp11{}; 
        namespace Notp11ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> notp12{}; 
        namespace Notp12ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> notp13{}; 
        namespace Notp13ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> notp14{}; 
        namespace Notp14ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> notp15{}; 
        namespace Notp15ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> notp16{}; 
        namespace Notp16ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> notp17{}; 
        namespace Notp17ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> notp18{}; 
        namespace Notp18ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> notp19{}; 
        namespace Notp19ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> notp20{}; 
        namespace Notp20ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> notp21{}; 
        namespace Notp21ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> notp22{}; 
        namespace Notp22ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> notp23{}; 
        namespace Notp23ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> notp24{}; 
        namespace Notp24ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> notp25{}; 
        namespace Notp25ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> notp26{}; 
        namespace Notp26ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> notp27{}; 
        namespace Notp27ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> notp28{}; 
        namespace Notp28ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> notp29{}; 
        namespace Notp29ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> notp30{}; 
        namespace Notp30ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> notp31{}; 
        namespace Notp31ValC{
        }
    }
    namespace Nonenot7{    ///<Toggle port m
        using Addr = Register::Address<0x400f631c,0x00000000,0,unsigned>;
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> notp0{}; 
        namespace Notp0ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> notp1{}; 
        namespace Notp1ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> notp2{}; 
        namespace Notp2ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> notp3{}; 
        namespace Notp3ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> notp4{}; 
        namespace Notp4ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notp5{}; 
        namespace Notp5ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> notp6{}; 
        namespace Notp6ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> notp7{}; 
        namespace Notp7ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> notp8{}; 
        namespace Notp8ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> notp9{}; 
        namespace Notp9ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> notp10{}; 
        namespace Notp10ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> notp11{}; 
        namespace Notp11ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> notp12{}; 
        namespace Notp12ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> notp13{}; 
        namespace Notp13ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> notp14{}; 
        namespace Notp14ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> notp15{}; 
        namespace Notp15ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> notp16{}; 
        namespace Notp16ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> notp17{}; 
        namespace Notp17ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> notp18{}; 
        namespace Notp18ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> notp19{}; 
        namespace Notp19ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> notp20{}; 
        namespace Notp20ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> notp21{}; 
        namespace Notp21ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> notp22{}; 
        namespace Notp22ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> notp23{}; 
        namespace Notp23ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> notp24{}; 
        namespace Notp24ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> notp25{}; 
        namespace Notp25ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> notp26{}; 
        namespace Notp26ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> notp27{}; 
        namespace Notp27ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> notp28{}; 
        namespace Notp28ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> notp29{}; 
        namespace Notp29ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> notp30{}; 
        namespace Notp30ValC{
        }
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> notp31{}; 
        namespace Notp31ValC{
        }
    }
}
