#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//General Purpose I/O 
    namespace GpioB0{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000000,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB1{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000001,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB2{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000002,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB3{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000003,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB4{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000004,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB5{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000005,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB6{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000006,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB7{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000007,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB8{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000008,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB9{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000009,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB10{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00000a,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB11{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00000b,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB12{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00000c,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB13{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00000d,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB14{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00000e,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB15{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00000f,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB16{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000010,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB17{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000011,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB18{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000012,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB19{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000013,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB20{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000014,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB21{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000015,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB22{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000016,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB23{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000017,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB24{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000018,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB25{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000019,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB26{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00001a,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB27{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00001b,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB28{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00001c,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB29{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00001d,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB30{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00001e,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB31{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00001f,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB32{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000020,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB33{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000021,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB34{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000022,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB35{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000023,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB36{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000024,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB37{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000025,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB38{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000026,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB39{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000027,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB40{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000028,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB41{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000029,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB42{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00002a,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB43{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00002b,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB44{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00002c,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB45{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00002d,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB46{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00002e,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB47{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00002f,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB48{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000030,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioB49{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000031,0xfffffffe,0x00000000,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,								masking, or alternate function, except that pins configured as								analog I/O always read as 0. One register for each port pin.								Supported pins depends on the specific device and package. Write:								loads the pins output bit. One register for each port pin. Supported								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioW0{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001000,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW1{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001004,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW2{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001008,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW3{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00100c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW4{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001010,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW5{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001014,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW6{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001018,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW7{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00101c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW8{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001020,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW9{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001024,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW10{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001028,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW11{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00102c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW12{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001030,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW13{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001034,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW14{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001038,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW15{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00103c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW16{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001040,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW17{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001044,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW18{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001048,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW19{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00104c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW20{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001050,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW21{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001054,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW22{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001058,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW23{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00105c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW24{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001060,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW25{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001064,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW26{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001068,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW27{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00106c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW28{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001070,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW29{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001074,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW30{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001078,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW31{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00107c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW32{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001080,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW33{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001084,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW34{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001088,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW35{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00108c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW36{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001090,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW37{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001094,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW38{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001098,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW39{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00109c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW40{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c0010a0,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW41{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c0010a4,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW42{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c0010a8,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW43{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c0010ac,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW44{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c0010b0,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW45{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c0010b4,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW46{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c0010b8,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW47{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c0010bc,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW48{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c0010c0,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioW49{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c0010c4,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.								Writing any value other than 0 will set the output bit. One register								for each port pin. Supported pins depends on the specific device and								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioDir0{    ///<Direction registers port 0/1
        using Addr = Register::Address<0x1c002000,0x00000000,0x00000000,unsigned>;
        ///Selects pin direction for pin PIOm_n. Supported pins								depends on the specific device and package. 0 = input. 1 =								output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dirp{}; 
    }
    namespace GpioDir1{    ///<Direction registers port 0/1
        using Addr = Register::Address<0x1c002004,0x00000000,0x00000000,unsigned>;
        ///Selects pin direction for pin PIOm_n. Supported pins								depends on the specific device and package. 0 = input. 1 =								output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dirp{}; 
    }
    namespace GpioMask0{    ///<Mask register port 0/1
        using Addr = Register::Address<0x1c002080,0x00000000,0x00000000,unsigned>;
        ///Controls which bits corresponding to PIOm_n are active in								the MPORT register. Supported pins depends on the specific device								and package. 0 = Read MPORT: pin state; write MPORT: load output								bit. 1 = Read MPORT: 0; write MPORT: output bit not								affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> maskp{}; 
    }
    namespace GpioMask1{    ///<Mask register port 0/1
        using Addr = Register::Address<0x1c002084,0x00000000,0x00000000,unsigned>;
        ///Controls which bits corresponding to PIOm_n are active in								the MPORT register. Supported pins depends on the specific device								and package. 0 = Read MPORT: pin state; write MPORT: load output								bit. 1 = Read MPORT: 0; write MPORT: output bit not								affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> maskp{}; 
    }
    namespace GpioPin0{    ///<Port pin register port 0/1
        using Addr = Register::Address<0x1c002100,0x00000000,0x00000000,unsigned>;
        ///Reads pin states or loads output bits. Supported pins								depends on the specific device and package. 0 = Read: pin is low;								write: clear output bit. 1 = Read: pin is high; write: set output								bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> port{}; 
    }
    namespace GpioPin1{    ///<Port pin register port 0/1
        using Addr = Register::Address<0x1c002104,0x00000000,0x00000000,unsigned>;
        ///Reads pin states or loads output bits. Supported pins								depends on the specific device and package. 0 = Read: pin is low;								write: clear output bit. 1 = Read: pin is high; write: set output								bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> port{}; 
    }
    namespace GpioMpin0{    ///<Masked port register port 0/1
        using Addr = Register::Address<0x1c002180,0x00000000,0x00000000,unsigned>;
        ///Masked port register. Supported pins depends on the								specific device and package. 0 = Read: pin is LOW and/or the								corresponding bit in the MASK register is 1; write: clear output bit								if the corresponding bit in the MASK register is 0. 1 = Read: pin is								HIGH and the corresponding bit in the MASK register is 0; write: set								output bit if the corresponding bit in the MASK register is								0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mportp{}; 
    }
    namespace GpioMpin1{    ///<Masked port register port 0/1
        using Addr = Register::Address<0x1c002184,0x00000000,0x00000000,unsigned>;
        ///Masked port register. Supported pins depends on the								specific device and package. 0 = Read: pin is LOW and/or the								corresponding bit in the MASK register is 1; write: clear output bit								if the corresponding bit in the MASK register is 0. 1 = Read: pin is								HIGH and the corresponding bit in the MASK register is 0; write: set								output bit if the corresponding bit in the MASK register is								0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mportp{}; 
    }
    namespace GpioSet0{    ///<Write: Set register for port 0/1 Read: output bits for port						0/1
        using Addr = Register::Address<0x1c002200,0x00000000,0x00000000,unsigned>;
        ///Read or set output bits. Supported pins depends on the								specific device and package. 0 = Read: output bit: write: no								operation. 1 = Read: output bit; write: set output								bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setp{}; 
    }
    namespace GpioSet1{    ///<Write: Set register for port 0/1 Read: output bits for port						0/1
        using Addr = Register::Address<0x1c002204,0x00000000,0x00000000,unsigned>;
        ///Read or set output bits. Supported pins depends on the								specific device and package. 0 = Read: output bit: write: no								operation. 1 = Read: output bit; write: set output								bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setp{}; 
    }
    namespace GpioClr0{    ///<Clear port 0/1
        using Addr = Register::Address<0x1c002280,0x00000000,0x00000000,unsigned>;
        ///Clear output bits. Supported pins depends on the specific								device and package. 0 = No operation. 1 = Clear output								bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrp{}; 
    }
    namespace GpioClr1{    ///<Clear port 0/1
        using Addr = Register::Address<0x1c002284,0x00000000,0x00000000,unsigned>;
        ///Clear output bits. Supported pins depends on the specific								device and package. 0 = No operation. 1 = Clear output								bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrp{}; 
    }
    namespace GpioNot0{    ///<Toggle port 0/1
        using Addr = Register::Address<0x1c002300,0x00000000,0x00000000,unsigned>;
        ///Toggle output bits. Supported pins depends on the specific								device and package. 0 = no operation. 1 = Toggle output								bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> notp{}; 
    }
    namespace GpioNot1{    ///<Toggle port 0/1
        using Addr = Register::Address<0x1c002304,0x00000000,0x00000000,unsigned>;
        ///Toggle output bits. Supported pins depends on the specific								device and package. 0 = no operation. 1 = Toggle output								bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> notp{}; 
    }
}
