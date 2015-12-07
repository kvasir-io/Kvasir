#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose I/O 
    namespace Noneb0{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000000,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb1{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000001,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb2{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000002,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb3{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000003,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb4{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000004,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb5{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000005,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb6{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000006,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb7{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000007,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb8{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000008,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb9{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000009,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb10{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00000a,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb11{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00000b,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb12{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00000c,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb13{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00000d,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb14{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00000e,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb15{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00000f,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb16{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000010,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb17{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000011,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb18{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000012,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb19{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000013,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb20{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000014,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb21{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000015,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb22{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000016,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb23{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000017,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb24{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000018,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb25{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000019,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb26{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00001a,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb27{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00001b,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb28{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00001c,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb29{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00001d,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb30{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00001e,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb31{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00001f,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb32{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000020,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb33{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000021,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb34{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000022,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb35{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000023,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb36{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000024,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb37{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000025,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb38{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000026,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb39{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000027,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb40{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000028,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb41{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000029,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb42{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00002a,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb43{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00002b,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb44{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00002c,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb45{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00002d,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb46{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00002e,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb47{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00002f,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb48{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000030,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Noneb49{    ///<Byte pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c000031,0xfffffffe,0,unsigned>;
        ///Read: state of the pin PIOm_n, regardless of direction,
								masking, or alternate function, except that pins configured as
								analog I/O always read as 0. One register for each port pin.
								Supported pins depends on the specific device and package. Write:
								loads the pins output bit. One register for each port pin. Supported
								pins depends on the specific device and package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
        namespace PbyteValC{
        }
    }
    namespace Nonew0{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001000,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew1{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001004,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew2{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001008,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew3{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00100c,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew4{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001010,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew5{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001014,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew6{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001018,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew7{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00101c,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew8{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001020,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew9{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001024,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew10{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001028,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew11{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00102c,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew12{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001030,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew13{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001034,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew14{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001038,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew15{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00103c,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew16{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001040,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew17{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001044,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew18{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001048,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew19{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00104c,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew20{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001050,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew21{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001054,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew22{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001058,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew23{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00105c,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew24{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001060,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew25{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001064,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew26{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001068,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew27{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00106c,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew28{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001070,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew29{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001074,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew30{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001078,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew31{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00107c,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew32{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001080,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew33{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001084,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew34{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001088,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew35{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00108c,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew36{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001090,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew37{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001094,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew38{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c001098,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew39{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c00109c,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew40{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c0010a0,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew41{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c0010a4,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew42{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c0010a8,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew43{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c0010ac,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew44{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c0010b0,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew45{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c0010b4,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew46{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c0010b8,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew47{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c0010bc,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew48{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c0010c0,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonew49{    ///<Word pin registers port 0/1; pins PIO0_0 to PIO1_8
        using Addr = Register::Address<0x1c0010c4,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW. Write 0: clear output bit. Read
								0xFFFF FFFF: pin PIOm_n is HIGH. Write any value 0x0000 0001 to
								0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read.
								Writing any value other than 0 will set the output bit. One register
								for each port pin. Supported pins depends on the specific device and
								package.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
        namespace PwordValC{
        }
    }
    namespace Nonedir0{    ///<Direction registers port 0/1
        using Addr = Register::Address<0x1c002000,0x00000000,0,unsigned>;
        ///Selects pin direction for pin PIOm_n. Supported pins
								depends on the specific device and package. 0 = input. 1 =
								output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dirp{}; 
        namespace DirpValC{
        }
    }
    namespace Nonedir1{    ///<Direction registers port 0/1
        using Addr = Register::Address<0x1c002004,0x00000000,0,unsigned>;
        ///Selects pin direction for pin PIOm_n. Supported pins
								depends on the specific device and package. 0 = input. 1 =
								output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dirp{}; 
        namespace DirpValC{
        }
    }
    namespace Nonemask0{    ///<Mask register port 0/1
        using Addr = Register::Address<0x1c002080,0x00000000,0,unsigned>;
        ///Controls which bits corresponding to PIOm_n are active in
								the MPORT register. Supported pins depends on the specific device
								and package. 0 = Read MPORT: pin state; write MPORT: load output
								bit. 1 = Read MPORT: 0; write MPORT: output bit not
								affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> maskp{}; 
        namespace MaskpValC{
        }
    }
    namespace Nonemask1{    ///<Mask register port 0/1
        using Addr = Register::Address<0x1c002084,0x00000000,0,unsigned>;
        ///Controls which bits corresponding to PIOm_n are active in
								the MPORT register. Supported pins depends on the specific device
								and package. 0 = Read MPORT: pin state; write MPORT: load output
								bit. 1 = Read MPORT: 0; write MPORT: output bit not
								affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> maskp{}; 
        namespace MaskpValC{
        }
    }
    namespace Nonepin0{    ///<Port pin register port 0/1
        using Addr = Register::Address<0x1c002100,0x00000000,0,unsigned>;
        ///Reads pin states or loads output bits. Supported pins
								depends on the specific device and package. 0 = Read: pin is low;
								write: clear output bit. 1 = Read: pin is high; write: set output
								bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> port{}; 
        namespace PortValC{
        }
    }
    namespace Nonepin1{    ///<Port pin register port 0/1
        using Addr = Register::Address<0x1c002104,0x00000000,0,unsigned>;
        ///Reads pin states or loads output bits. Supported pins
								depends on the specific device and package. 0 = Read: pin is low;
								write: clear output bit. 1 = Read: pin is high; write: set output
								bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> port{}; 
        namespace PortValC{
        }
    }
    namespace Nonempin0{    ///<Masked port register port 0/1
        using Addr = Register::Address<0x1c002180,0x00000000,0,unsigned>;
        ///Masked port register. Supported pins depends on the
								specific device and package. 0 = Read: pin is LOW and/or the
								corresponding bit in the MASK register is 1; write: clear output bit
								if the corresponding bit in the MASK register is 0. 1 = Read: pin is
								HIGH and the corresponding bit in the MASK register is 0; write: set
								output bit if the corresponding bit in the MASK register is
								0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mportp{}; 
        namespace MportpValC{
        }
    }
    namespace Nonempin1{    ///<Masked port register port 0/1
        using Addr = Register::Address<0x1c002184,0x00000000,0,unsigned>;
        ///Masked port register. Supported pins depends on the
								specific device and package. 0 = Read: pin is LOW and/or the
								corresponding bit in the MASK register is 1; write: clear output bit
								if the corresponding bit in the MASK register is 0. 1 = Read: pin is
								HIGH and the corresponding bit in the MASK register is 0; write: set
								output bit if the corresponding bit in the MASK register is
								0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mportp{}; 
        namespace MportpValC{
        }
    }
    namespace Noneset0{    ///<Write: Set register for port 0/1 Read: output bits for port
						0/1
        using Addr = Register::Address<0x1c002200,0x00000000,0,unsigned>;
        ///Read or set output bits. Supported pins depends on the
								specific device and package. 0 = Read: output bit: write: no
								operation. 1 = Read: output bit; write: set output
								bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setp{}; 
        namespace SetpValC{
        }
    }
    namespace Noneset1{    ///<Write: Set register for port 0/1 Read: output bits for port
						0/1
        using Addr = Register::Address<0x1c002204,0x00000000,0,unsigned>;
        ///Read or set output bits. Supported pins depends on the
								specific device and package. 0 = Read: output bit: write: no
								operation. 1 = Read: output bit; write: set output
								bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setp{}; 
        namespace SetpValC{
        }
    }
    namespace Noneclr0{    ///<Clear port 0/1
        using Addr = Register::Address<0x1c002280,0x00000000,0,unsigned>;
        ///Clear output bits. Supported pins depends on the specific
								device and package. 0 = No operation. 1 = Clear output
								bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrp{}; 
        namespace ClrpValC{
        }
    }
    namespace Noneclr1{    ///<Clear port 0/1
        using Addr = Register::Address<0x1c002284,0x00000000,0,unsigned>;
        ///Clear output bits. Supported pins depends on the specific
								device and package. 0 = No operation. 1 = Clear output
								bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrp{}; 
        namespace ClrpValC{
        }
    }
    namespace Nonenot0{    ///<Toggle port 0/1
        using Addr = Register::Address<0x1c002300,0x00000000,0,unsigned>;
        ///Toggle output bits. Supported pins depends on the specific
								device and package. 0 = no operation. 1 = Toggle output
								bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> notp{}; 
        namespace NotpValC{
        }
    }
    namespace Nonenot1{    ///<Toggle port 0/1
        using Addr = Register::Address<0x1c002304,0x00000000,0,unsigned>;
        ///Toggle output bits. Supported pins depends on the specific
								device and package. 0 = no operation. 1 = Toggle output
								bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> notp{}; 
        namespace NotpValC{
        }
    }
}
