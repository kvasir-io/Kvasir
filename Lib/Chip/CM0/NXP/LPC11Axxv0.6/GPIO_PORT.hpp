#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//GPIO port 
    namespace Noneb0{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x50000000,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb1{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x50000001,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb2{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x50000002,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb3{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x50000003,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb4{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x50000004,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb5{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x50000005,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb6{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x50000006,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb7{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x50000007,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb8{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x50000008,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb9{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x50000009,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb10{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x5000000a,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb11{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x5000000b,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb12{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x5000000c,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb13{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x5000000d,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb14{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x5000000e,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb15{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x5000000f,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb16{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x50000010,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb17{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x50000011,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb18{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x50000012,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb19{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x50000013,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb20{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x50000014,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb21{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x50000015,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb22{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x50000016,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb23{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x50000017,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb24{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x50000018,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb25{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x50000019,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb26{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x5000001a,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb27{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x5000001b,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb28{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x5000001c,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb29{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x5000001d,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb30{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x5000001e,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb31{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_31
        using Addr = Register::Address<0x5000001f,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb32{    ///<Byte pin registers port 1
        using Addr = Register::Address<0x50000020,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P1_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb33{    ///<Byte pin registers port 1
        using Addr = Register::Address<0x50000021,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P1_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb34{    ///<Byte pin registers port 1
        using Addr = Register::Address<0x50000022,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P1_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb35{    ///<Byte pin registers port 1
        using Addr = Register::Address<0x50000023,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P1_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb36{    ///<Byte pin registers port 1
        using Addr = Register::Address<0x50000024,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P1_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb37{    ///<Byte pin registers port 1
        using Addr = Register::Address<0x50000025,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P1_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb38{    ///<Byte pin registers port 1
        using Addr = Register::Address<0x50000026,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P1_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb39{    ///<Byte pin registers port 1
        using Addr = Register::Address<0x50000027,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P1_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb40{    ///<Byte pin registers port 1
        using Addr = Register::Address<0x50000028,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P1_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Noneb41{    ///<Byte pin registers port 1
        using Addr = Register::Address<0x50000029,0xfffffffe,0,unsigned char>;
        ///Read: state of the pin P1_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace Nonew0{    ///<Word pin registers port 0
        using Addr = Register::Address<0x50001000,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew1{    ///<Word pin registers port 0
        using Addr = Register::Address<0x50001004,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew2{    ///<Word pin registers port 0
        using Addr = Register::Address<0x50001008,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew3{    ///<Word pin registers port 0
        using Addr = Register::Address<0x5000100c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew4{    ///<Word pin registers port 0
        using Addr = Register::Address<0x50001010,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew5{    ///<Word pin registers port 0
        using Addr = Register::Address<0x50001014,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew6{    ///<Word pin registers port 0
        using Addr = Register::Address<0x50001018,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew7{    ///<Word pin registers port 0
        using Addr = Register::Address<0x5000101c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew8{    ///<Word pin registers port 0
        using Addr = Register::Address<0x50001020,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew9{    ///<Word pin registers port 0
        using Addr = Register::Address<0x50001024,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew10{    ///<Word pin registers port 0
        using Addr = Register::Address<0x50001028,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew11{    ///<Word pin registers port 0
        using Addr = Register::Address<0x5000102c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew12{    ///<Word pin registers port 0
        using Addr = Register::Address<0x50001030,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew13{    ///<Word pin registers port 0
        using Addr = Register::Address<0x50001034,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew14{    ///<Word pin registers port 0
        using Addr = Register::Address<0x50001038,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew15{    ///<Word pin registers port 0
        using Addr = Register::Address<0x5000103c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew16{    ///<Word pin registers port 0
        using Addr = Register::Address<0x50001040,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew17{    ///<Word pin registers port 0
        using Addr = Register::Address<0x50001044,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew18{    ///<Word pin registers port 0
        using Addr = Register::Address<0x50001048,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew19{    ///<Word pin registers port 0
        using Addr = Register::Address<0x5000104c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew20{    ///<Word pin registers port 0
        using Addr = Register::Address<0x50001050,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew21{    ///<Word pin registers port 0
        using Addr = Register::Address<0x50001054,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew22{    ///<Word pin registers port 0
        using Addr = Register::Address<0x50001058,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew23{    ///<Word pin registers port 0
        using Addr = Register::Address<0x5000105c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew24{    ///<Word pin registers port 0
        using Addr = Register::Address<0x50001060,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew25{    ///<Word pin registers port 0
        using Addr = Register::Address<0x50001064,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew26{    ///<Word pin registers port 0
        using Addr = Register::Address<0x50001068,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew27{    ///<Word pin registers port 0
        using Addr = Register::Address<0x5000106c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew28{    ///<Word pin registers port 0
        using Addr = Register::Address<0x50001070,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew29{    ///<Word pin registers port 0
        using Addr = Register::Address<0x50001074,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew30{    ///<Word pin registers port 0
        using Addr = Register::Address<0x50001078,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew31{    ///<Word pin registers port 0
        using Addr = Register::Address<0x5000107c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew32{    ///<Word pin registers port 1
        using Addr = Register::Address<0x50001080,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew33{    ///<Word pin registers port 1
        using Addr = Register::Address<0x50001084,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew34{    ///<Word pin registers port 1
        using Addr = Register::Address<0x50001088,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew35{    ///<Word pin registers port 1
        using Addr = Register::Address<0x5000108c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew36{    ///<Word pin registers port 1
        using Addr = Register::Address<0x50001090,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew37{    ///<Word pin registers port 1
        using Addr = Register::Address<0x50001094,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew38{    ///<Word pin registers port 1
        using Addr = Register::Address<0x50001098,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew39{    ///<Word pin registers port 1
        using Addr = Register::Address<0x5000109c,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew40{    ///<Word pin registers port 1
        using Addr = Register::Address<0x500010a0,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonew41{    ///<Word pin registers port 1
        using Addr = Register::Address<0x500010a4,0x00000000,0,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace Nonedir0{    ///<Direction registers port 0/1
        using Addr = Register::Address<0x50002000,0x00000000,0,unsigned>;
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dirp0{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dirp1{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dirp2{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirp3{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dirp4{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dirp5{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dirp6{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dirp7{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dirp8{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dirp9{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dirp10{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dirp11{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dirp12{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dirp13{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dirp14{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dirp15{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dirp16{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dirp17{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dirp18{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dirp19{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dirp20{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dirp21{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dirp22{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dirp23{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dirp24{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dirp25{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dirp26{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dirp27{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dirp28{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dirp29{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dirp30{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dirp31{}; 
    }
    namespace Nonedir1{    ///<Direction registers port 0/1
        using Addr = Register::Address<0x50002004,0x00000000,0,unsigned>;
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dirp0{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dirp1{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dirp2{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirp3{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dirp4{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dirp5{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dirp6{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dirp7{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dirp8{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dirp9{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dirp10{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dirp11{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dirp12{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dirp13{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dirp14{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dirp15{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dirp16{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dirp17{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dirp18{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dirp19{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dirp20{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dirp21{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dirp22{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dirp23{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dirp24{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dirp25{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dirp26{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dirp27{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dirp28{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dirp29{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dirp30{}; 
        ///Selects pin direction for pin P0/1_n (bit 0 = P0/1_0, bit 1 = P0_1, ..., bit 31 = P0/1_31). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dirp31{}; 
    }
    namespace Nonemask0{    ///<Mask register port 0/1
        using Addr = Register::Address<0x50002080,0x00000000,0,unsigned>;
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> maskp0{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> maskp1{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> maskp2{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> maskp3{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> maskp4{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> maskp5{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> maskp6{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> maskp7{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> maskp8{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> maskp9{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> maskp10{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> maskp11{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> maskp12{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> maskp13{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> maskp14{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maskp15{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> maskp16{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> maskp17{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> maskp18{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> maskp19{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> maskp20{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> maskp21{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> maskp22{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> maskp23{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> maskp24{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> maskp25{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> maskp26{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> maskp27{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> maskp28{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> maskp29{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> maskp30{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> maskp31{}; 
    }
    namespace Nonemask1{    ///<Mask register port 0/1
        using Addr = Register::Address<0x50002084,0x00000000,0,unsigned>;
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> maskp0{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> maskp1{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> maskp2{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> maskp3{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> maskp4{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> maskp5{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> maskp6{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> maskp7{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> maskp8{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> maskp9{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> maskp10{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> maskp11{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> maskp12{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> maskp13{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> maskp14{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maskp15{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> maskp16{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> maskp17{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> maskp18{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> maskp19{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> maskp20{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> maskp21{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> maskp22{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> maskp23{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> maskp24{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> maskp25{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> maskp26{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> maskp27{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> maskp28{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> maskp29{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> maskp30{}; 
        ///Controls which bits corresponding to P0/1_n are active in the P0/1 PIN register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> maskp31{}; 
    }
    namespace Nonepin0{    ///<Portpin register port 0
        using Addr = Register::Address<0x50002100,0x00000000,0,unsigned>;
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> port0{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> port1{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> port2{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> port3{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> port4{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> port5{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> port6{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> port7{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> port8{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> port9{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> port10{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> port11{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> port12{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> port13{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> port14{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> port15{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> port16{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> port17{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> port18{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> port19{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> port20{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> port21{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> port22{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> port23{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> port24{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> port25{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> port26{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> port27{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> port28{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> port29{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> port30{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> port31{}; 
    }
    namespace Nonepin1{    ///<Portpin register port 0
        using Addr = Register::Address<0x50002104,0x00000000,0,unsigned>;
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> port0{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> port1{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> port2{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> port3{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> port4{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> port5{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> port6{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> port7{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> port8{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> port9{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> port10{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> port11{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> port12{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> port13{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> port14{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> port15{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> port16{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> port17{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> port18{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> port19{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> port20{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> port21{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> port22{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> port23{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> port24{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> port25{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> port26{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> port27{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> port28{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> port29{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> port30{}; 
        ///Reads pin states or loads output bits (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> port31{}; 
    }
    namespace Nonempin0{    ///<Masked port register port 0/1
        using Addr = Register::Address<0x50002180,0x00000000,0,unsigned>;
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mportp0{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mportp1{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mportp2{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mportp3{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mportp4{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mportp5{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mportp6{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mportp7{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mportp8{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mportp9{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mportp10{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mportp11{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mportp12{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mportp13{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mportp14{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mportp15{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mportp16{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mportp17{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mportp18{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mportp19{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mportp20{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mportp21{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mportp22{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mportp23{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mportp24{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mportp25{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mportp26{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mportp27{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> mportp28{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mportp29{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> mportp30{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mportp31{}; 
    }
    namespace Nonempin1{    ///<Masked port register port 0/1
        using Addr = Register::Address<0x50002184,0x00000000,0,unsigned>;
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mportp0{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mportp1{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mportp2{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mportp3{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mportp4{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mportp5{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mportp6{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mportp7{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mportp8{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mportp9{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mportp10{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mportp11{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mportp12{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mportp13{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mportp14{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mportp15{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mportp16{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mportp17{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mportp18{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mportp19{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mportp20{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mportp21{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mportp22{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mportp23{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mportp24{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mportp25{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mportp26{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mportp27{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> mportp28{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mportp29{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> mportp30{}; 
        ///Masked port register (bit 0 = P0/1_0, bit 1 = P0/1_1, ..., bit 31 = P0/1_31). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mportp31{}; 
    }
    namespace Noneset0{    ///<Write: Set register for port 0/1  Read: output bits for port 0/1
        using Addr = Register::Address<0x50002200,0x00000000,0,unsigned>;
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setp0{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setp1{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setp2{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setp3{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setp4{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setp5{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setp6{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setp7{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setp8{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setp9{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setp10{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setp11{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setp12{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setp13{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setp14{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setp15{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> setp16{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> setp17{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> setp18{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> setp19{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> setp20{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> setp21{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> setp22{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> setp23{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> setp24{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> setp25{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> setp26{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> setp27{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> setp28{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> setp29{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> setp30{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> setp31{}; 
    }
    namespace Noneset1{    ///<Write: Set register for port 0/1  Read: output bits for port 0/1
        using Addr = Register::Address<0x50002204,0x00000000,0,unsigned>;
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setp0{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setp1{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setp2{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setp3{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setp4{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setp5{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setp6{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setp7{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setp8{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setp9{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setp10{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setp11{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setp12{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setp13{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setp14{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setp15{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> setp16{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> setp17{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> setp18{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> setp19{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> setp20{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> setp21{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> setp22{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> setp23{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> setp24{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> setp25{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> setp26{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> setp27{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> setp28{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> setp29{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> setp30{}; 
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> setp31{}; 
    }
    namespace Noneclr0{    ///<Clear port 0/1
        using Addr = Register::Address<0x50002280,0x00000000,0,unsigned>;
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
    namespace Noneclr1{    ///<Clear port 0/1
        using Addr = Register::Address<0x50002284,0x00000000,0,unsigned>;
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
    namespace Nonenot0{    ///<Toggle port 0/1
        using Addr = Register::Address<0x50002300,0x00000000,0,unsigned>;
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> notp0{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> notp1{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> notp2{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> notp3{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> notp4{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notp5{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> notp6{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> notp7{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> notp8{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> notp9{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> notp10{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> notp11{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> notp12{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> notp13{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> notp14{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> notp15{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> notp16{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> notp17{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> notp18{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> notp19{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> notp20{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> notp21{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> notp22{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> notp23{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> notp24{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> notp25{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> notp26{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> notp27{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> notp28{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> notp29{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> notp30{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> notp31{}; 
    }
    namespace Nonenot1{    ///<Toggle port 0/1
        using Addr = Register::Address<0x50002304,0x00000000,0,unsigned>;
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> notp0{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> notp1{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> notp2{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> notp3{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> notp4{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notp5{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> notp6{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> notp7{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> notp8{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> notp9{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> notp10{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> notp11{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> notp12{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> notp13{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> notp14{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> notp15{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> notp16{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> notp17{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> notp18{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> notp19{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> notp20{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> notp21{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> notp22{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> notp23{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> notp24{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> notp25{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> notp26{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> notp27{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> notp28{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> notp29{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> notp30{}; 
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> notp31{}; 
    }
}
