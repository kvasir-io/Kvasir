#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//General Purpose I/O port (GPIO)
    namespace GpioPortDir0{    ///<Direction registers port 0
        using Addr = Register::Address<0xa0002000,0x00000000,0x00000000,unsigned>;
        ///Selects pin direction for pin P0_n (bit 0 = P0_0, bit 1 = P0_1, ..., bit 17 = P0_17). 0 = input. 1 = output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> dirp0{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GpioPortMask0{    ///<Mask register port 0
        using Addr = Register::Address<0xa0002080,0x00000000,0x00000000,unsigned>;
        ///Controls which bits corresponding to P0_n are active in the P0MPORT register (bit 0 = P0_0, bit 1 = P0_1, ..., bit 17 = P0_17). 0 = Read MPORT: pin state; write MPORT: load output bit. 1 = Read MPORT: 0; write MPORT: output bit not affected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> maskp0{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GpioPortPin0{    ///<Port pin register port 0
        using Addr = Register::Address<0xa0002100,0x00000000,0x00000000,unsigned>;
        ///Reads pin states or loads output bits (bit 0 = P0_0, bit 1 = P0_1, ..., bit 17 = P0_17). 0 = Read: pin is low; write: clear output bit. 1 = Read: pin is high; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> port0{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GpioPortMpin0{    ///<Masked port register port 0
        using Addr = Register::Address<0xa0002180,0x00000000,0x00000000,unsigned>;
        ///Masked port register (bit 0 = P0_0, bit 1 = P0_1, ..., bit 17 = P0_17). 0 = Read: pin is LOW and/or the corresponding bit in the MASK register is 1; write: clear output bit if the corresponding bit in the MASK register is 0. 1 = Read: pin is HIGH and the corresponding bit in the MASK register is 0; write: set output bit if the corresponding bit in the MASK register is 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> mportp0{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GpioPortSet0{    ///<Write: Set register for port 0 Read: output bits for port 0
        using Addr = Register::Address<0xa0002200,0x00000000,0x00000000,unsigned>;
        ///Read or set output bits. 0 = Read: output bit: write: no operation. 1 = Read: output bit; write: set output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> setp0{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GpioPortClr0{    ///<Clear port 0
        using Addr = Register::Address<0xa0002280,0x00000000,0x00000000,unsigned>;
        ///Clear output bits: 0 = No operation. 1 = Clear output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> clrp0{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GpioPortNot0{    ///<Toggle port 0
        using Addr = Register::Address<0xa0002300,0x00000000,0x00000000,unsigned>;
        ///Toggle output bits: 0 = no operation. 1 = Toggle output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> notp0{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace GpioPortB0{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_17
        using Addr = Register::Address<0xa0000000,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB1{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_17
        using Addr = Register::Address<0xa0000001,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB2{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_17
        using Addr = Register::Address<0xa0000002,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB3{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_17
        using Addr = Register::Address<0xa0000003,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB4{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_17
        using Addr = Register::Address<0xa0000004,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB5{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_17
        using Addr = Register::Address<0xa0000005,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB6{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_17
        using Addr = Register::Address<0xa0000006,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB7{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_17
        using Addr = Register::Address<0xa0000007,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB8{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_17
        using Addr = Register::Address<0xa0000008,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB9{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_17
        using Addr = Register::Address<0xa0000009,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB10{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_17
        using Addr = Register::Address<0xa000000a,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB11{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_17
        using Addr = Register::Address<0xa000000b,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB12{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_17
        using Addr = Register::Address<0xa000000c,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB13{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_17
        using Addr = Register::Address<0xa000000d,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB14{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_17
        using Addr = Register::Address<0xa000000e,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB15{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_17
        using Addr = Register::Address<0xa000000f,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB16{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_17
        using Addr = Register::Address<0xa0000010,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortB17{    ///<Byte pin registers port 0; pins PIO0_0 to PIO0_17
        using Addr = Register::Address<0xa0000011,0xfffffffe,0x00000000,unsigned char>;
        ///Read: state of the pin P0_n, regardless of direction, masking, or alternate function, except that pins configured as analog I/O always read as 0. Write: loads the pin's output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pbyte{}; 
    }
    namespace GpioPortW0{    ///<Word pin registers port 0
        using Addr = Register::Address<0xa0001000,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW1{    ///<Word pin registers port 0
        using Addr = Register::Address<0xa0001004,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW2{    ///<Word pin registers port 0
        using Addr = Register::Address<0xa0001008,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW3{    ///<Word pin registers port 0
        using Addr = Register::Address<0xa000100c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW4{    ///<Word pin registers port 0
        using Addr = Register::Address<0xa0001010,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW5{    ///<Word pin registers port 0
        using Addr = Register::Address<0xa0001014,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW6{    ///<Word pin registers port 0
        using Addr = Register::Address<0xa0001018,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW7{    ///<Word pin registers port 0
        using Addr = Register::Address<0xa000101c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW8{    ///<Word pin registers port 0
        using Addr = Register::Address<0xa0001020,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW9{    ///<Word pin registers port 0
        using Addr = Register::Address<0xa0001024,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW10{    ///<Word pin registers port 0
        using Addr = Register::Address<0xa0001028,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW11{    ///<Word pin registers port 0
        using Addr = Register::Address<0xa000102c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW12{    ///<Word pin registers port 0
        using Addr = Register::Address<0xa0001030,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW13{    ///<Word pin registers port 0
        using Addr = Register::Address<0xa0001034,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW14{    ///<Word pin registers port 0
        using Addr = Register::Address<0xa0001038,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW15{    ///<Word pin registers port 0
        using Addr = Register::Address<0xa000103c,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW16{    ///<Word pin registers port 0
        using Addr = Register::Address<0xa0001040,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
    namespace GpioPortW17{    ///<Word pin registers port 0
        using Addr = Register::Address<0xa0001044,0x00000000,0x00000000,unsigned>;
        ///Read 0: pin is LOW.  Write 0: clear output bit. Read 0xFFFF FFFF: pin is HIGH.  Write any value 0x0000 0001 to 0xFFFF FFFF: set output bit. Only 0 or 0xFFFF FFFF can be read. Writing any value other than 0 will set the output bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pword{}; 
    }
}
