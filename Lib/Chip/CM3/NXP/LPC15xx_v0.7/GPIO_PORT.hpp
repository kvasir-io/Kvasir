#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose I/O (GPIO) 
    namespace Noneb0{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000000,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb1{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000001,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb2{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000002,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb3{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000003,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb4{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000004,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb5{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000005,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb6{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000006,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb7{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000007,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb8{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000008,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb9{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000009,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb10{    ///<Byte pin registers
        using Addr = Register::Address<0x1c00000a,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb11{    ///<Byte pin registers
        using Addr = Register::Address<0x1c00000b,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb12{    ///<Byte pin registers
        using Addr = Register::Address<0x1c00000c,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb13{    ///<Byte pin registers
        using Addr = Register::Address<0x1c00000d,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb14{    ///<Byte pin registers
        using Addr = Register::Address<0x1c00000e,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb15{    ///<Byte pin registers
        using Addr = Register::Address<0x1c00000f,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb16{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000010,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb17{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000011,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb18{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000012,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb19{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000013,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb20{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000014,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb21{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000015,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb22{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000016,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb23{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000017,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb24{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000018,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb25{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000019,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb26{    ///<Byte pin registers
        using Addr = Register::Address<0x1c00001a,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb27{    ///<Byte pin registers
        using Addr = Register::Address<0x1c00001b,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb28{    ///<Byte pin registers
        using Addr = Register::Address<0x1c00001c,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb29{    ///<Byte pin registers
        using Addr = Register::Address<0x1c00001d,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb30{    ///<Byte pin registers
        using Addr = Register::Address<0x1c00001e,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb31{    ///<Byte pin registers
        using Addr = Register::Address<0x1c00001f,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb32{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000020,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb33{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000021,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb34{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000022,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb35{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000023,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb36{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000024,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb37{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000025,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb38{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000026,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb39{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000027,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb40{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000028,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb41{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000029,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb42{    ///<Byte pin registers
        using Addr = Register::Address<0x1c00002a,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb43{    ///<Byte pin registers
        using Addr = Register::Address<0x1c00002b,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb44{    ///<Byte pin registers
        using Addr = Register::Address<0x1c00002c,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb45{    ///<Byte pin registers
        using Addr = Register::Address<0x1c00002d,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb46{    ///<Byte pin registers
        using Addr = Register::Address<0x1c00002e,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb47{    ///<Byte pin registers
        using Addr = Register::Address<0x1c00002f,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb48{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000030,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb49{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000031,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb50{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000032,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb51{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000033,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb52{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000034,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb53{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000035,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb54{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000036,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb55{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000037,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb56{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000038,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb57{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000039,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb58{    ///<Byte pin registers
        using Addr = Register::Address<0x1c00003a,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb59{    ///<Byte pin registers
        using Addr = Register::Address<0x1c00003b,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb60{    ///<Byte pin registers
        using Addr = Register::Address<0x1c00003c,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb61{    ///<Byte pin registers
        using Addr = Register::Address<0x1c00003d,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb62{    ///<Byte pin registers
        using Addr = Register::Address<0x1c00003e,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb63{    ///<Byte pin registers
        using Addr = Register::Address<0x1c00003f,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb64{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000040,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb65{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000041,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb66{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000042,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb67{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000043,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb68{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000044,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb69{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000045,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb70{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000046,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb71{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000047,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb72{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000048,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb73{    ///<Byte pin registers
        using Addr = Register::Address<0x1c000049,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb74{    ///<Byte pin registers
        using Addr = Register::Address<0x1c00004a,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb75{    ///<Byte pin registers
        using Addr = Register::Address<0x1c00004b,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin PIOm_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port 2. Write: loads the pin's output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Nonew0{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001000,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew1{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001004,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew2{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001008,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew3{    ///<Word pin registers 
        using Addr = Register::Address<0x1c00100c,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew4{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001010,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew5{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001014,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew6{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001018,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew7{    ///<Word pin registers 
        using Addr = Register::Address<0x1c00101c,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew8{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001020,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew9{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001024,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew10{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001028,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew11{    ///<Word pin registers 
        using Addr = Register::Address<0x1c00102c,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew12{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001030,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew13{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001034,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew14{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001038,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew15{    ///<Word pin registers 
        using Addr = Register::Address<0x1c00103c,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew16{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001040,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew17{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001044,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew18{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001048,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew19{    ///<Word pin registers 
        using Addr = Register::Address<0x1c00104c,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew20{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001050,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew21{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001054,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew22{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001058,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew23{    ///<Word pin registers 
        using Addr = Register::Address<0x1c00105c,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew24{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001060,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew25{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001064,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew26{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001068,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew27{    ///<Word pin registers 
        using Addr = Register::Address<0x1c00106c,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew28{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001070,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew29{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001074,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew30{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001078,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew31{    ///<Word pin registers 
        using Addr = Register::Address<0x1c00107c,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew32{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001080,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew33{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001084,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew34{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001088,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew35{    ///<Word pin registers 
        using Addr = Register::Address<0x1c00108c,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew36{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001090,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew37{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001094,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew38{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001098,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew39{    ///<Word pin registers 
        using Addr = Register::Address<0x1c00109c,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew40{    ///<Word pin registers 
        using Addr = Register::Address<0x1c0010a0,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew41{    ///<Word pin registers 
        using Addr = Register::Address<0x1c0010a4,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew42{    ///<Word pin registers 
        using Addr = Register::Address<0x1c0010a8,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew43{    ///<Word pin registers 
        using Addr = Register::Address<0x1c0010ac,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew44{    ///<Word pin registers 
        using Addr = Register::Address<0x1c0010b0,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew45{    ///<Word pin registers 
        using Addr = Register::Address<0x1c0010b4,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew46{    ///<Word pin registers 
        using Addr = Register::Address<0x1c0010b8,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew47{    ///<Word pin registers 
        using Addr = Register::Address<0x1c0010bc,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew48{    ///<Word pin registers 
        using Addr = Register::Address<0x1c0010c0,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew49{    ///<Word pin registers 
        using Addr = Register::Address<0x1c0010c4,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew50{    ///<Word pin registers 
        using Addr = Register::Address<0x1c0010c8,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew51{    ///<Word pin registers 
        using Addr = Register::Address<0x1c0010cc,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew52{    ///<Word pin registers 
        using Addr = Register::Address<0x1c0010d0,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew53{    ///<Word pin registers 
        using Addr = Register::Address<0x1c0010d4,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew54{    ///<Word pin registers 
        using Addr = Register::Address<0x1c0010d8,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew55{    ///<Word pin registers 
        using Addr = Register::Address<0x1c0010dc,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew56{    ///<Word pin registers 
        using Addr = Register::Address<0x1c0010e0,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew57{    ///<Word pin registers 
        using Addr = Register::Address<0x1c0010e4,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew58{    ///<Word pin registers 
        using Addr = Register::Address<0x1c0010e8,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew59{    ///<Word pin registers 
        using Addr = Register::Address<0x1c0010ec,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew60{    ///<Word pin registers 
        using Addr = Register::Address<0x1c0010f0,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew61{    ///<Word pin registers 
        using Addr = Register::Address<0x1c0010f4,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew62{    ///<Word pin registers 
        using Addr = Register::Address<0x1c0010f8,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew63{    ///<Word pin registers 
        using Addr = Register::Address<0x1c0010fc,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew64{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001100,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew65{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001104,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew66{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001108,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew67{    ///<Word pin registers 
        using Addr = Register::Address<0x1c00110c,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew68{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001110,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew69{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001114,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew70{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001118,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew71{    ///<Word pin registers 
        using Addr = Register::Address<0x1c00111c,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew72{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001120,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew73{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001124,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew74{    ///<Word pin registers 
        using Addr = Register::Address<0x1c001128,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew75{    ///<Word pin registers 
        using Addr = Register::Address<0x1c00112c,0x00000000,0,unsigned>;
        ///Read 0: pin PIOm_n is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin PIOm_n is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit. One register for each port pin: m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonedir0{    ///<Port Direction registers 
        using Addr = Register::Address<0x1c002000,0x00000000,0,unsigned>;
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dirp0{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dirp1{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dirp2{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirp3{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dirp4{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dirp5{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dirp6{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dirp7{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dirp8{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dirp9{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dirp10{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dirp11{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dirp12{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dirp13{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dirp14{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dirp15{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dirp16{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dirp17{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dirp18{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dirp19{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dirp20{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dirp21{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dirp22{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dirp23{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dirp24{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dirp25{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dirp26{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dirp27{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dirp28{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dirp29{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dirp30{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dirp31{}; 
    }
    namespace Nonedir1{    ///<Port Direction registers 
        using Addr = Register::Address<0x1c002004,0x00000000,0,unsigned>;
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dirp0{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dirp1{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dirp2{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirp3{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dirp4{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dirp5{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dirp6{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dirp7{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dirp8{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dirp9{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dirp10{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dirp11{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dirp12{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dirp13{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dirp14{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dirp15{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dirp16{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dirp17{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dirp18{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dirp19{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dirp20{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dirp21{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dirp22{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dirp23{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dirp24{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dirp25{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dirp26{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dirp27{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dirp28{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dirp29{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dirp30{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dirp31{}; 
    }
    namespace Nonedir2{    ///<Port Direction registers 
        using Addr = Register::Address<0x1c002008,0x00000000,0,unsigned>;
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dirp0{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dirp1{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dirp2{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirp3{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dirp4{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dirp5{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dirp6{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dirp7{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dirp8{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dirp9{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dirp10{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dirp11{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dirp12{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dirp13{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dirp14{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dirp15{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dirp16{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dirp17{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dirp18{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dirp19{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dirp20{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dirp21{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dirp22{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dirp23{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dirp24{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dirp25{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dirp26{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dirp27{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dirp28{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dirp29{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dirp30{}; 
        ///Selects pin direction for pin PIOm_n (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = input. 1 = output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dirp31{}; 
    }
    namespace Nonemask0{    ///<Port Mask register 
        using Addr = Register::Address<0x1c002080,0x00000000,0,unsigned>;
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> maskp0{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> maskp1{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> maskp2{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> maskp3{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> maskp4{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> maskp5{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> maskp6{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> maskp7{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> maskp8{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> maskp9{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> maskp10{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> maskp11{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> maskp12{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> maskp13{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> maskp14{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maskp15{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> maskp16{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> maskp17{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> maskp18{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> maskp19{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> maskp20{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> maskp21{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> maskp22{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> maskp23{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> maskp24{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> maskp25{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> maskp26{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> maskp27{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> maskp28{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> maskp29{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> maskp30{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> maskp31{}; 
    }
    namespace Nonemask1{    ///<Port Mask register 
        using Addr = Register::Address<0x1c002084,0x00000000,0,unsigned>;
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> maskp0{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> maskp1{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> maskp2{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> maskp3{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> maskp4{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> maskp5{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> maskp6{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> maskp7{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> maskp8{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> maskp9{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> maskp10{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> maskp11{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> maskp12{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> maskp13{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> maskp14{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maskp15{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> maskp16{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> maskp17{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> maskp18{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> maskp19{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> maskp20{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> maskp21{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> maskp22{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> maskp23{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> maskp24{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> maskp25{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> maskp26{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> maskp27{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> maskp28{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> maskp29{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> maskp30{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> maskp31{}; 
    }
    namespace Nonemask2{    ///<Port Mask register 
        using Addr = Register::Address<0x1c002088,0x00000000,0,unsigned>;
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> maskp0{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> maskp1{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> maskp2{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> maskp3{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> maskp4{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> maskp5{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> maskp6{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> maskp7{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> maskp8{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> maskp9{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> maskp10{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> maskp11{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> maskp12{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> maskp13{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> maskp14{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maskp15{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> maskp16{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> maskp17{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> maskp18{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> maskp19{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> maskp20{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> maskp21{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> maskp22{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> maskp23{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> maskp24{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> maskp25{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> maskp26{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> maskp27{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> maskp28{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> maskp29{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> maskp30{}; 
        ///Controls which bits corresponding to PIOm_n are active in the MPORT register (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> maskp31{}; 
    }
    namespace Nonepin0{    ///<Port pin register 
        using Addr = Register::Address<0x1c002100,0x00000000,0,unsigned>;
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> port0{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> port1{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> port2{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> port3{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> port4{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> port5{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> port6{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> port7{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> port8{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> port9{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> port10{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> port11{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> port12{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> port13{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> port14{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> port15{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> port16{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> port17{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> port18{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> port19{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> port20{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> port21{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> port22{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> port23{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> port24{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> port25{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> port26{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> port27{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> port28{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> port29{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> port30{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> port31{}; 
    }
    namespace Nonepin1{    ///<Port pin register 
        using Addr = Register::Address<0x1c002104,0x00000000,0,unsigned>;
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> port0{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> port1{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> port2{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> port3{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> port4{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> port5{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> port6{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> port7{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> port8{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> port9{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> port10{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> port11{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> port12{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> port13{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> port14{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> port15{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> port16{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> port17{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> port18{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> port19{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> port20{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> port21{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> port22{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> port23{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> port24{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> port25{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> port26{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> port27{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> port28{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> port29{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> port30{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> port31{}; 
    }
    namespace Nonepin2{    ///<Port pin register 
        using Addr = Register::Address<0x1c002108,0x00000000,0,unsigned>;
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> port0{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> port1{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> port2{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> port3{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> port4{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> port5{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> port6{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> port7{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> port8{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> port9{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> port10{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> port11{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> port12{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> port13{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> port14{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> port15{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> port16{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> port17{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> port18{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> port19{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> port20{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> port21{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> port22{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> port23{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> port24{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> port25{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> port26{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> port27{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> port28{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> port29{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> port30{}; 
        ///Reads pin states or loads output bits (bit 0 = PIOm_0, bit 1 = PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2. 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> port31{}; 
    }
    namespace Nonempin0{    ///<Masked port register 
        using Addr = Register::Address<0x1c002180,0x00000000,0,unsigned>;
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mportp0{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mportp1{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mportp2{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mportp3{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mportp4{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mportp5{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mportp6{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mportp7{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mportp8{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mportp9{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mportp10{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mportp11{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mportp12{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mportp13{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mportp14{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mportp15{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mportp16{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mportp17{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mportp18{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mportp19{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mportp20{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mportp21{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mportp22{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mportp23{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mportp24{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mportp25{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mportp26{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mportp27{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> mportp28{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mportp29{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> mportp30{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mportp31{}; 
    }
    namespace Nonempin1{    ///<Masked port register 
        using Addr = Register::Address<0x1c002184,0x00000000,0,unsigned>;
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mportp0{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mportp1{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mportp2{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mportp3{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mportp4{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mportp5{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mportp6{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mportp7{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mportp8{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mportp9{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mportp10{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mportp11{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mportp12{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mportp13{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mportp14{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mportp15{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mportp16{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mportp17{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mportp18{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mportp19{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mportp20{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mportp21{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mportp22{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mportp23{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mportp24{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mportp25{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mportp26{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mportp27{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> mportp28{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mportp29{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> mportp30{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mportp31{}; 
    }
    namespace Nonempin2{    ///<Masked port register 
        using Addr = Register::Address<0x1c002188,0x00000000,0,unsigned>;
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mportp0{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mportp1{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mportp2{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mportp3{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mportp4{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mportp5{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mportp6{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mportp7{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mportp8{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mportp9{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mportp10{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mportp11{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mportp12{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mportp13{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mportp14{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mportp15{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mportp16{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mportp17{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mportp18{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mportp19{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mportp20{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mportp21{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mportp22{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mportp23{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mportp24{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mportp25{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mportp26{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mportp27{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> mportp28{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mportp29{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> mportp30{}; 
        ///Masked port register (bit 0 = PIOm_0, bit 1 =PIOm_1, ..., bit 31 = PIOm_31). m = port 0 to 2; n = pin 0 to 31 for port 0 and 1 and pin 0 to 11 for port2.  0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mportp31{}; 
    }
    namespace Noneset0{    ///<Write: Set port  register Read: port output bits 
        using Addr = Register::Address<0x1c002200,0x00000000,0,unsigned>;
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setp00{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setp01{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setp02{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setp03{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setp04{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setp05{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setp06{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setp07{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setp08{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setp09{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setp010{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setp011{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setp012{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setp013{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setp014{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setp015{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> setp016{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> setp017{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> setp018{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> setp019{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> setp020{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> setp021{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> setp022{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> setp023{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> setp024{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> setp025{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> setp026{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> setp027{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> setp028{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> setp029{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> setp030{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> setp031{}; 
    }
    namespace Noneset1{    ///<Write: Set port  register Read: port output bits 
        using Addr = Register::Address<0x1c002204,0x00000000,0,unsigned>;
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setp00{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setp01{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setp02{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setp03{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setp04{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setp05{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setp06{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setp07{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setp08{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setp09{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setp010{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setp011{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setp012{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setp013{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setp014{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setp015{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> setp016{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> setp017{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> setp018{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> setp019{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> setp020{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> setp021{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> setp022{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> setp023{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> setp024{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> setp025{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> setp026{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> setp027{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> setp028{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> setp029{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> setp030{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> setp031{}; 
    }
    namespace Noneset2{    ///<Write: Set port  register Read: port output bits 
        using Addr = Register::Address<0x1c002208,0x00000000,0,unsigned>;
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setp00{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setp01{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setp02{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setp03{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setp04{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setp05{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setp06{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setp07{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setp08{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setp09{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setp010{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setp011{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setp012{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setp013{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setp014{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setp015{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> setp016{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> setp017{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> setp018{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> setp019{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> setp020{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> setp021{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> setp022{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> setp023{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> setp024{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> setp025{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> setp026{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> setp027{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> setp028{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> setp029{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> setp030{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> setp031{}; 
    }
    namespace Noneclr0{    ///<Clear port
        using Addr = Register::Address<0x1c002280,0x00000000,0,unsigned>;
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrp00{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrp01{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrp02{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrp03{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrp04{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrp05{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrp06{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrp07{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrp08{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrp09{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrp010{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrp011{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrp012{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrp013{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrp014{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrp015{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clrp016{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clrp017{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> clrp018{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> clrp019{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> clrp020{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> clrp021{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> clrp022{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> clrp023{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> clrp024{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> clrp025{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> clrp026{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> clrp027{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> clrp028{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> clrp029{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clrp030{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> clrp031{}; 
    }
    namespace Noneclr1{    ///<Clear port
        using Addr = Register::Address<0x1c002284,0x00000000,0,unsigned>;
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrp00{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrp01{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrp02{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrp03{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrp04{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrp05{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrp06{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrp07{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrp08{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrp09{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrp010{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrp011{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrp012{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrp013{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrp014{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrp015{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clrp016{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clrp017{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> clrp018{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> clrp019{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> clrp020{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> clrp021{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> clrp022{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> clrp023{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> clrp024{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> clrp025{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> clrp026{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> clrp027{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> clrp028{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> clrp029{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clrp030{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> clrp031{}; 
    }
    namespace Noneclr2{    ///<Clear port
        using Addr = Register::Address<0x1c002288,0x00000000,0,unsigned>;
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrp00{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrp01{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrp02{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrp03{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrp04{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrp05{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrp06{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrp07{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrp08{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrp09{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrp010{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrp011{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrp012{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrp013{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrp014{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrp015{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clrp016{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> clrp017{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> clrp018{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> clrp019{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> clrp020{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> clrp021{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> clrp022{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> clrp023{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> clrp024{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> clrp025{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> clrp026{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> clrp027{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> clrp028{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> clrp029{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> clrp030{}; 
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> clrp031{}; 
    }
    namespace Nonenot0{    ///<Toggle port 
        using Addr = Register::Address<0x1c002300,0x00000000,0,unsigned>;
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> notp00{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> notp01{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> notp02{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> notp03{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> notp04{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notp05{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> notp06{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> notp07{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> notp08{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> notp09{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> notp010{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> notp011{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> notp012{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> notp013{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> notp014{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> notp015{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> notp016{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> notp017{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> notp018{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> notp019{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> notp020{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> notp021{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> notp022{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> notp023{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> notp024{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> notp025{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> notp026{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> notp027{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> notp028{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> notp029{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> notp030{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> notp031{}; 
    }
    namespace Nonenot1{    ///<Toggle port 
        using Addr = Register::Address<0x1c002304,0x00000000,0,unsigned>;
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> notp00{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> notp01{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> notp02{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> notp03{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> notp04{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notp05{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> notp06{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> notp07{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> notp08{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> notp09{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> notp010{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> notp011{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> notp012{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> notp013{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> notp014{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> notp015{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> notp016{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> notp017{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> notp018{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> notp019{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> notp020{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> notp021{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> notp022{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> notp023{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> notp024{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> notp025{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> notp026{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> notp027{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> notp028{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> notp029{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> notp030{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> notp031{}; 
    }
    namespace Nonenot2{    ///<Toggle port 
        using Addr = Register::Address<0x1c002308,0x00000000,0,unsigned>;
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> notp00{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> notp01{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> notp02{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> notp03{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> notp04{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notp05{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> notp06{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> notp07{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> notp08{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> notp09{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> notp010{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> notp011{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> notp012{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> notp013{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> notp014{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> notp015{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> notp016{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> notp017{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> notp018{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> notp019{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> notp020{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> notp021{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> notp022{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> notp023{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> notp024{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> notp025{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> notp026{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> notp027{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> notp028{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> notp029{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> notp030{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> notp031{}; 
    }
}
