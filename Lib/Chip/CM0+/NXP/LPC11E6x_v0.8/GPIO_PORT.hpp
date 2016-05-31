#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//General Purpose I/O (GPIO) 
    namespace GpioPortB0{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000000,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB1{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000001,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB2{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000002,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB3{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000003,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB4{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000004,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB5{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000005,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB6{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000006,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB7{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000007,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB8{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000008,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB9{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000009,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB10{    ///<Byte pin registers
        using Addr = Register::Address<0xa000000a,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB11{    ///<Byte pin registers
        using Addr = Register::Address<0xa000000b,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB12{    ///<Byte pin registers
        using Addr = Register::Address<0xa000000c,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB13{    ///<Byte pin registers
        using Addr = Register::Address<0xa000000d,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB14{    ///<Byte pin registers
        using Addr = Register::Address<0xa000000e,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB15{    ///<Byte pin registers
        using Addr = Register::Address<0xa000000f,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB16{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000010,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB17{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000011,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB18{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000012,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB19{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000013,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB20{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000014,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB21{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000015,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB22{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000016,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB23{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000017,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB24{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000018,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB25{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000019,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB26{    ///<Byte pin registers
        using Addr = Register::Address<0xa000001a,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB27{    ///<Byte pin registers
        using Addr = Register::Address<0xa000001b,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB28{    ///<Byte pin registers
        using Addr = Register::Address<0xa000001c,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB29{    ///<Byte pin registers
        using Addr = Register::Address<0xa000001d,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB30{    ///<Byte pin registers
        using Addr = Register::Address<0xa000001e,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB31{    ///<Byte pin registers
        using Addr = Register::Address<0xa000001f,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB32{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000020,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB33{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000021,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB34{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000022,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB35{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000023,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB36{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000024,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB37{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000025,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB38{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000026,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB39{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000027,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB40{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000028,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB41{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000029,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB42{    ///<Byte pin registers
        using Addr = Register::Address<0xa000002a,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB43{    ///<Byte pin registers
        using Addr = Register::Address<0xa000002b,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB44{    ///<Byte pin registers
        using Addr = Register::Address<0xa000002c,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB45{    ///<Byte pin registers
        using Addr = Register::Address<0xa000002d,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB46{    ///<Byte pin registers
        using Addr = Register::Address<0xa000002e,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB47{    ///<Byte pin registers
        using Addr = Register::Address<0xa000002f,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB48{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000030,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB49{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000031,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB50{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000032,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB51{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000033,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB52{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000034,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB53{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000035,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB54{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000036,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB55{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000037,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB56{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000038,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB57{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000039,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB58{    ///<Byte pin registers
        using Addr = Register::Address<0xa000003a,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB59{    ///<Byte pin registers
        using Addr = Register::Address<0xa000003b,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB60{    ///<Byte pin registers
        using Addr = Register::Address<0xa000003c,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB61{    ///<Byte pin registers
        using Addr = Register::Address<0xa000003d,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB62{    ///<Byte pin registers
        using Addr = Register::Address<0xa000003e,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB63{    ///<Byte pin registers
        using Addr = Register::Address<0xa000003f,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB64{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000040,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB65{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000041,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB66{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000042,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB67{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000043,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB68{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000044,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB69{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000045,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB70{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000046,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB71{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000047,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB72{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000048,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB73{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000049,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB74{    ///<Byte pin registers
        using Addr = Register::Address<0xa000004a,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB75{    ///<Byte pin registers
        using Addr = Register::Address<0xa000004b,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB76{    ///<Byte pin registers
        using Addr = Register::Address<0xa000004c,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB77{    ///<Byte pin registers
        using Addr = Register::Address<0xa000004d,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB78{    ///<Byte pin registers
        using Addr = Register::Address<0xa000004e,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB79{    ///<Byte pin registers
        using Addr = Register::Address<0xa000004f,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB80{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000050,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB81{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000051,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB82{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000052,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB83{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000053,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB84{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000054,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB85{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000055,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB86{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000056,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB87{    ///<Byte pin registers
        using Addr = Register::Address<0xa0000057,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortW0{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001000,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW1{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001004,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW2{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001008,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW3{    ///<Word pin registers 
        using Addr = Register::Address<0xa000100c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW4{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001010,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW5{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001014,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW6{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001018,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW7{    ///<Word pin registers 
        using Addr = Register::Address<0xa000101c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW8{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001020,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW9{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001024,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW10{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001028,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW11{    ///<Word pin registers 
        using Addr = Register::Address<0xa000102c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW12{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001030,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW13{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001034,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW14{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001038,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW15{    ///<Word pin registers 
        using Addr = Register::Address<0xa000103c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW16{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001040,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW17{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001044,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW18{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001048,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW19{    ///<Word pin registers 
        using Addr = Register::Address<0xa000104c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW20{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001050,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW21{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001054,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW22{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001058,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW23{    ///<Word pin registers 
        using Addr = Register::Address<0xa000105c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW24{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001060,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW25{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001064,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW26{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001068,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW27{    ///<Word pin registers 
        using Addr = Register::Address<0xa000106c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW28{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001070,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW29{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001074,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW30{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001078,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW31{    ///<Word pin registers 
        using Addr = Register::Address<0xa000107c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW32{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001080,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW33{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001084,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW34{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001088,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW35{    ///<Word pin registers 
        using Addr = Register::Address<0xa000108c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW36{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001090,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW37{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001094,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW38{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001098,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW39{    ///<Word pin registers 
        using Addr = Register::Address<0xa000109c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW40{    ///<Word pin registers 
        using Addr = Register::Address<0xa00010a0,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW41{    ///<Word pin registers 
        using Addr = Register::Address<0xa00010a4,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW42{    ///<Word pin registers 
        using Addr = Register::Address<0xa00010a8,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW43{    ///<Word pin registers 
        using Addr = Register::Address<0xa00010ac,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW44{    ///<Word pin registers 
        using Addr = Register::Address<0xa00010b0,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW45{    ///<Word pin registers 
        using Addr = Register::Address<0xa00010b4,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW46{    ///<Word pin registers 
        using Addr = Register::Address<0xa00010b8,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW47{    ///<Word pin registers 
        using Addr = Register::Address<0xa00010bc,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW48{    ///<Word pin registers 
        using Addr = Register::Address<0xa00010c0,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW49{    ///<Word pin registers 
        using Addr = Register::Address<0xa00010c4,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW50{    ///<Word pin registers 
        using Addr = Register::Address<0xa00010c8,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW51{    ///<Word pin registers 
        using Addr = Register::Address<0xa00010cc,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW52{    ///<Word pin registers 
        using Addr = Register::Address<0xa00010d0,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW53{    ///<Word pin registers 
        using Addr = Register::Address<0xa00010d4,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW54{    ///<Word pin registers 
        using Addr = Register::Address<0xa00010d8,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW55{    ///<Word pin registers 
        using Addr = Register::Address<0xa00010dc,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW56{    ///<Word pin registers 
        using Addr = Register::Address<0xa00010e0,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW57{    ///<Word pin registers 
        using Addr = Register::Address<0xa00010e4,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW58{    ///<Word pin registers 
        using Addr = Register::Address<0xa00010e8,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW59{    ///<Word pin registers 
        using Addr = Register::Address<0xa00010ec,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW60{    ///<Word pin registers 
        using Addr = Register::Address<0xa00010f0,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW61{    ///<Word pin registers 
        using Addr = Register::Address<0xa00010f4,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW62{    ///<Word pin registers 
        using Addr = Register::Address<0xa00010f8,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW63{    ///<Word pin registers 
        using Addr = Register::Address<0xa00010fc,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW64{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001100,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW65{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001104,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW66{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001108,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW67{    ///<Word pin registers 
        using Addr = Register::Address<0xa000110c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW68{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001110,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW69{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001114,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW70{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001118,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW71{    ///<Word pin registers 
        using Addr = Register::Address<0xa000111c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW72{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001120,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW73{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001124,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW74{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001128,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW75{    ///<Word pin registers 
        using Addr = Register::Address<0xa000112c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW76{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001130,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW77{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001134,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW78{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001138,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW79{    ///<Word pin registers 
        using Addr = Register::Address<0xa000113c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW80{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001140,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW81{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001144,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW82{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001148,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW83{    ///<Word pin registers 
        using Addr = Register::Address<0xa000114c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW84{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001150,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW85{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001154,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW86{    ///<Word pin registers 
        using Addr = Register::Address<0xa0001158,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW87{    ///<Word pin registers 
        using Addr = Register::Address<0xa000115c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortDir0{    ///<Port Direction registers 
        using Addr = Register::Address<0xa0002000,0x00000000,0x00000000,unsigned>;
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dirp0{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dirp1{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dirp2{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirp3{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dirp4{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dirp5{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dirp6{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dirp7{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dirp8{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dirp9{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dirp10{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dirp11{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dirp12{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dirp13{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dirp14{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dirp15{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dirp16{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dirp17{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dirp18{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dirp19{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dirp20{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dirp21{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dirp22{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dirp23{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dirp24{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dirp25{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dirp26{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dirp27{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dirp28{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dirp29{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dirp30{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dirp31{}; 
    }
    namespace GpioPortDir1{    ///<Port Direction registers 
        using Addr = Register::Address<0xa0002004,0x00000000,0x00000000,unsigned>;
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dirp0{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dirp1{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dirp2{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirp3{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dirp4{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dirp5{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dirp6{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dirp7{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dirp8{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dirp9{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dirp10{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dirp11{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dirp12{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dirp13{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dirp14{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dirp15{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dirp16{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dirp17{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dirp18{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dirp19{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dirp20{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dirp21{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dirp22{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dirp23{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dirp24{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dirp25{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dirp26{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dirp27{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dirp28{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dirp29{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dirp30{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dirp31{}; 
    }
    namespace GpioPortDir2{    ///<Port Direction registers 
        using Addr = Register::Address<0xa0002008,0x00000000,0x00000000,unsigned>;
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dirp0{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dirp1{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dirp2{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirp3{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dirp4{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dirp5{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dirp6{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dirp7{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dirp8{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dirp9{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dirp10{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dirp11{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dirp12{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dirp13{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dirp14{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dirp15{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dirp16{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dirp17{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dirp18{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dirp19{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dirp20{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dirp21{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dirp22{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dirp23{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dirp24{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dirp25{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dirp26{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dirp27{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dirp28{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dirp29{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dirp30{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dirp31{}; 
    }
    namespace GpioPortMask0{    ///<Port Mask register 
        using Addr = Register::Address<0xa0002080,0x00000000,0x00000000,unsigned>;
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> maskp0{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> maskp1{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> maskp2{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> maskp3{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> maskp4{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> maskp5{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> maskp6{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> maskp7{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> maskp8{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> maskp9{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> maskp10{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> maskp11{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> maskp12{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> maskp13{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> maskp14{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maskp15{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> maskp16{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> maskp17{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> maskp18{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> maskp19{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> maskp20{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> maskp21{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> maskp22{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> maskp23{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> maskp24{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> maskp25{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> maskp26{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> maskp27{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> maskp28{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> maskp29{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> maskp30{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> maskp31{}; 
    }
    namespace GpioPortMask1{    ///<Port Mask register 
        using Addr = Register::Address<0xa0002084,0x00000000,0x00000000,unsigned>;
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> maskp0{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> maskp1{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> maskp2{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> maskp3{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> maskp4{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> maskp5{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> maskp6{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> maskp7{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> maskp8{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> maskp9{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> maskp10{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> maskp11{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> maskp12{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> maskp13{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> maskp14{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maskp15{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> maskp16{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> maskp17{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> maskp18{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> maskp19{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> maskp20{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> maskp21{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> maskp22{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> maskp23{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> maskp24{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> maskp25{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> maskp26{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> maskp27{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> maskp28{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> maskp29{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> maskp30{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> maskp31{}; 
    }
    namespace GpioPortMask2{    ///<Port Mask register 
        using Addr = Register::Address<0xa0002088,0x00000000,0x00000000,unsigned>;
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> maskp0{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> maskp1{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> maskp2{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> maskp3{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> maskp4{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> maskp5{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> maskp6{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> maskp7{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> maskp8{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> maskp9{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> maskp10{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> maskp11{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> maskp12{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> maskp13{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> maskp14{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maskp15{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> maskp16{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> maskp17{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> maskp18{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> maskp19{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> maskp20{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> maskp21{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> maskp22{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> maskp23{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> maskp24{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> maskp25{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> maskp26{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> maskp27{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> maskp28{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> maskp29{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> maskp30{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> maskp31{}; 
    }
    namespace GpioPortPin0{    ///<Port pin register 
        using Addr = Register::Address<0xa0002100,0x00000000,0x00000000,unsigned>;
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> port0{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> port1{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> port2{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> port3{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> port4{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> port5{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> port6{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> port7{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> port8{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> port9{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> port10{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> port11{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> port12{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> port13{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> port14{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> port15{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> port16{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> port17{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> port18{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> port19{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> port20{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> port21{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> port22{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> port23{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> port24{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> port25{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> port26{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> port27{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> port28{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> port29{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> port30{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> port31{}; 
    }
    namespace GpioPortPin1{    ///<Port pin register 
        using Addr = Register::Address<0xa0002104,0x00000000,0x00000000,unsigned>;
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> port0{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> port1{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> port2{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> port3{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> port4{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> port5{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> port6{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> port7{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> port8{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> port9{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> port10{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> port11{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> port12{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> port13{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> port14{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> port15{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> port16{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> port17{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> port18{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> port19{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> port20{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> port21{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> port22{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> port23{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> port24{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> port25{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> port26{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> port27{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> port28{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> port29{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> port30{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> port31{}; 
    }
    namespace GpioPortPin2{    ///<Port pin register 
        using Addr = Register::Address<0xa0002108,0x00000000,0x00000000,unsigned>;
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> port0{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> port1{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> port2{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> port3{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> port4{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> port5{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> port6{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> port7{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> port8{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> port9{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> port10{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> port11{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> port12{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> port13{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> port14{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> port15{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> port16{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> port17{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> port18{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> port19{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> port20{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> port21{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> port22{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> port23{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> port24{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> port25{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> port26{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> port27{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> port28{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> port29{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> port30{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> port31{}; 
    }
    namespace GpioPortMpin0{    ///<Masked port register 
        using Addr = Register::Address<0xa0002180,0x00000000,0x00000000,unsigned>;
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mportp0{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mportp1{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mportp2{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mportp3{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mportp4{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mportp5{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mportp6{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mportp7{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mportp8{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mportp9{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mportp10{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mportp11{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mportp12{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mportp13{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mportp14{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mportp15{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mportp16{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mportp17{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mportp18{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mportp19{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mportp20{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mportp21{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mportp22{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mportp23{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mportp24{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mportp25{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mportp26{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mportp27{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> mportp28{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mportp29{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> mportp30{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mportp31{}; 
    }
    namespace GpioPortMpin1{    ///<Masked port register 
        using Addr = Register::Address<0xa0002184,0x00000000,0x00000000,unsigned>;
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mportp0{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mportp1{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mportp2{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mportp3{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mportp4{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mportp5{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mportp6{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mportp7{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mportp8{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mportp9{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mportp10{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mportp11{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mportp12{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mportp13{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mportp14{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mportp15{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mportp16{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mportp17{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mportp18{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mportp19{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mportp20{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mportp21{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mportp22{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mportp23{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mportp24{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mportp25{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mportp26{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mportp27{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> mportp28{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mportp29{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> mportp30{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mportp31{}; 
    }
    namespace GpioPortMpin2{    ///<Masked port register 
        using Addr = Register::Address<0xa0002188,0x00000000,0x00000000,unsigned>;
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mportp0{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mportp1{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mportp2{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mportp3{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mportp4{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mportp5{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mportp6{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mportp7{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mportp8{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mportp9{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mportp10{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mportp11{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mportp12{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mportp13{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mportp14{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mportp15{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mportp16{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mportp17{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mportp18{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mportp19{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mportp20{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mportp21{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mportp22{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mportp23{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mportp24{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mportp25{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mportp26{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mportp27{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> mportp28{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mportp29{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> mportp30{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mportp31{}; 
    }
    namespace GpioPortSet0{    ///<Write: Set port  register Read: port output bits 
        using Addr = Register::Address<0xa0002200,0x00000000,0x00000000,unsigned>;
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setp00{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setp01{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setp02{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setp03{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setp04{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setp05{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setp06{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setp07{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setp08{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setp09{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setp010{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setp011{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setp012{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setp013{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setp014{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setp015{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> setp016{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> setp017{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> setp018{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> setp019{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> setp020{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> setp021{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> setp022{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> setp023{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> setp024{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> setp025{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> setp026{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> setp027{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> setp028{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> setp029{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> setp030{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> setp031{}; 
    }
    namespace GpioPortSet1{    ///<Write: Set port  register Read: port output bits 
        using Addr = Register::Address<0xa0002204,0x00000000,0x00000000,unsigned>;
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setp00{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setp01{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setp02{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setp03{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setp04{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setp05{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setp06{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setp07{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setp08{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setp09{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setp010{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setp011{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setp012{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setp013{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setp014{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setp015{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> setp016{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> setp017{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> setp018{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> setp019{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> setp020{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> setp021{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> setp022{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> setp023{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> setp024{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> setp025{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> setp026{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> setp027{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> setp028{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> setp029{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> setp030{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> setp031{}; 
    }
    namespace GpioPortSet2{    ///<Write: Set port  register Read: port output bits 
        using Addr = Register::Address<0xa0002208,0x00000000,0x00000000,unsigned>;
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setp00{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setp01{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setp02{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setp03{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setp04{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setp05{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setp06{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setp07{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setp08{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setp09{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setp010{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setp011{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setp012{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setp013{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setp014{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setp015{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> setp016{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> setp017{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> setp018{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> setp019{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> setp020{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> setp021{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> setp022{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> setp023{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> setp024{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> setp025{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> setp026{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> setp027{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> setp028{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> setp029{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> setp030{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> setp031{}; 
    }
    namespace GpioPortClr0{    ///<Clear port
        using Addr = Register::Address<0xa0002280,0x00000000,0x00000000,unsigned>;
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrp00{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrp01{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrp02{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrp03{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrp04{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrp05{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrp06{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrp07{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrp08{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrp09{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrp010{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrp011{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrp012{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrp013{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrp014{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrp015{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clrp016{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clrp017{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> clrp018{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> clrp019{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> clrp020{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> clrp021{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> clrp022{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> clrp023{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> clrp024{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> clrp025{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> clrp026{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> clrp027{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> clrp028{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> clrp029{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clrp030{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> clrp031{}; 
    }
    namespace GpioPortClr1{    ///<Clear port
        using Addr = Register::Address<0xa0002284,0x00000000,0x00000000,unsigned>;
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrp00{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrp01{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrp02{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrp03{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrp04{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrp05{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrp06{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrp07{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrp08{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrp09{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrp010{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrp011{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrp012{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrp013{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrp014{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrp015{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clrp016{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clrp017{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> clrp018{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> clrp019{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> clrp020{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> clrp021{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> clrp022{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> clrp023{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> clrp024{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> clrp025{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> clrp026{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> clrp027{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> clrp028{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> clrp029{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clrp030{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> clrp031{}; 
    }
    namespace GpioPortClr2{    ///<Clear port
        using Addr = Register::Address<0xa0002288,0x00000000,0x00000000,unsigned>;
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrp00{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrp01{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrp02{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrp03{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrp04{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrp05{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrp06{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrp07{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrp08{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrp09{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrp010{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrp011{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrp012{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrp013{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrp014{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrp015{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clrp016{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clrp017{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> clrp018{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> clrp019{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> clrp020{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> clrp021{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> clrp022{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> clrp023{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> clrp024{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> clrp025{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> clrp026{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> clrp027{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> clrp028{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> clrp029{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clrp030{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> clrp031{}; 
    }
    namespace GpioPortNot0{    ///<Toggle port 
        using Addr = Register::Address<0xa0002300,0x00000000,0x00000000,unsigned>;
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> notp00{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> notp01{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> notp02{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> notp03{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> notp04{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notp05{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> notp06{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> notp07{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> notp08{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> notp09{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> notp010{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> notp011{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> notp012{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> notp013{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> notp014{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> notp015{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> notp016{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> notp017{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> notp018{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> notp019{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> notp020{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> notp021{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> notp022{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> notp023{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> notp024{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> notp025{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> notp026{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> notp027{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> notp028{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> notp029{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> notp030{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> notp031{}; 
    }
    namespace GpioPortNot1{    ///<Toggle port 
        using Addr = Register::Address<0xa0002304,0x00000000,0x00000000,unsigned>;
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> notp00{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> notp01{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> notp02{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> notp03{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> notp04{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notp05{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> notp06{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> notp07{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> notp08{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> notp09{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> notp010{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> notp011{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> notp012{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> notp013{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> notp014{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> notp015{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> notp016{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> notp017{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> notp018{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> notp019{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> notp020{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> notp021{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> notp022{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> notp023{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> notp024{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> notp025{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> notp026{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> notp027{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> notp028{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> notp029{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> notp030{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> notp031{}; 
    }
    namespace GpioPortNot2{    ///<Toggle port 
        using Addr = Register::Address<0xa0002308,0x00000000,0x00000000,unsigned>;
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> notp00{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> notp01{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> notp02{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> notp03{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> notp04{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notp05{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> notp06{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> notp07{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> notp08{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> notp09{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> notp010{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> notp011{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> notp012{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> notp013{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> notp014{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> notp015{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> notp016{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> notp017{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> notp018{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> notp019{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> notp020{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> notp021{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> notp022{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> notp023{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> notp024{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> notp025{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> notp026{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> notp027{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> notp028{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> notp029{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> notp030{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> notp031{}; 
    }
}
