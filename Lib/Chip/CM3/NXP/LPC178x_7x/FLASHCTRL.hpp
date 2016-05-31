#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Flash control block
    namespace FlashctrlFmsstart{    ///<Signature start address register
        using Addr = Register::Address<0x00200020,0x00000000,0x00000000,unsigned>;
        ///Signature generation start address (corresponds to AHB byte address bits[20:4]).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> start{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,17),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace FlashctrlFmsstop{    ///<Signature stop-address register
        using Addr = Register::Address<0x00200024,0x00000000,0x00000000,unsigned>;
        ///BIST stop address divided by 16 (corresponds to AHB byte address [20:4]).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> stop{}; 
        ///Start control bit for signature generation.
        enum class SigstartVal {
            stop=0x00000000,     ///<Signature generation is stopped
            start=0x00000001,     ///<Initiate signature generation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,SigstartVal> sigStart{}; 
        namespace SigstartValC{
            constexpr Register::FieldValue<decltype(sigStart)::Type,SigstartVal::stop> stop{};
            constexpr Register::FieldValue<decltype(sigStart)::Type,SigstartVal::start> start{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace FlashctrlFmsw0{    ///<128-bit signature Word 0
        using Addr = Register::Address<0x0020002c,0x00000000,0x00000000,unsigned>;
        ///Word 0 of 128-bit signature (bits 31 to 0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sw0310{}; 
    }
    namespace FlashctrlFmsw1{    ///<128-bit signature Word 1
        using Addr = Register::Address<0x00200030,0x00000000,0x00000000,unsigned>;
        ///Word 1 of 128-bit signature (bits 63 to 32).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sw16332{}; 
    }
    namespace FlashctrlFmsw2{    ///<128-bit signature Word 2
        using Addr = Register::Address<0x00200034,0x00000000,0x00000000,unsigned>;
        ///Word 2 of 128-bit signature (bits 95 to 64).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sw29564{}; 
    }
    namespace FlashctrlFmsw3{    ///<128-bit signature Word 3
        using Addr = Register::Address<0x00200038,0x00000000,0x00000000,unsigned>;
        ///Word 3 of 128-bit signature (bits 127 to 96).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sw312796{}; 
    }
    namespace FlashctrlEecmd{    ///<EEPROM command register
        using Addr = Register::Address<0x00200080,0x00000000,0x00000000,unsigned>;
        ///Command. 000: 8-bit read 001: 16-bit read 010: 32-bit read 011: 8-bit write 100: 16-bit write 101: 32-bit write 110: erase/program page 111: reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> cmd{}; 
        ///Read data prefetch bit. 0: do not prefetch next read data as result of reading from the read data register. 1: prefetch read data as result of reading from the read data register. When this bit is set multiple consecutive data elements can be read without the need of programming new address values in the address register. The address post-increment and the automatic read data prefetch (if enabled) allow only reading from the read data register to be done to read the data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rdprefetch{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace FlashctrlEewdata{    ///<EEPROM write data register
        using Addr = Register::Address<0x00200088,0x00000000,0x00000000,unsigned>;
        ///Write data. In case of: 8-bit write operations: bits [7:0] must contain valid write data. 16-bit write operations: bits [15:0] must contain valid write data. 32-bit write operations: bits [31:0] must contain valid write data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace FlashctrlEerdata{    ///<EEPROM read data register
        using Addr = Register::Address<0x0020008c,0x00000000,0x00000000,unsigned>;
        ///Read data. In case of: 8-bit read operations: bits [7:0] contain read data, others are zero. 16-bit read operations: bits [15:0] contain read data, others are zero. 32-bit read operations: bits [31:0] contain read data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rdata{}; 
    }
    namespace FlashctrlEewstate{    ///<EEPROM wait state register
        using Addr = Register::Address<0x00200090,0x00000000,0x00000000,unsigned>;
        ///Wait states 3 (minus 1 encoded). The number of system clock periods required to give a minimum time of 15 ns.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> phase3{}; 
        ///Wait states 2 (minus 1 encoded). The number of system clock periods required to give a minimum time of 55 ns.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> phase2{}; 
        ///Wait states 1 (minus 1 encoded). The number of system clock periods required to give a minimum time of 35 ns.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> phase1{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace FlashctrlEeclkdiv{    ///<EEPROM clock divider register
        using Addr = Register::Address<0x00200094,0x00000000,0x00000000,unsigned>;
        ///Division factor (minus 1 encoded).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace FlashctrlEepwrdwn{    ///<EEPROM power-down register
        using Addr = Register::Address<0x00200098,0x00000000,0x00000000,unsigned>;
        ///Power down mode bit. 0: not in power down mode. 1: power down mode (this will put all EEPROM devices in power down).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pwrdwn{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace FlashctrlStat{    ///<Signature generation status register
        using Addr = Register::Address<0x00200fe0,0x00000000,0x00000000,unsigned>;
        ///Reserved. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When 1, a previously started signature generation has completed. See FMSTATCLR register description for clearing this flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sigDone{}; 
        ///Reserved. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,3),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///EEPROM read/write operation finished interrupt status bit. Bit is: - set when this operation has finished OR when 1 is written in the corresponding bit of the EEINTSTATSET register. - cleared when 1 is written to the corresponding bit of the EEINTSTATCLR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> endOfRdwr{}; 
        ///Reserved. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///EEPROM program operation finished interrupt status bit. Bit is: - set when this operation has finished OR when 1 is written to the corresponding bit of the EEINTSTATSET register. - cleared when 1 is written to the corresponding bit of the EEINTSTATCLR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> endOfProg1{}; 
        ///Reserved. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace FlashctrlInten{    ///<EEPROM interrupt enable
        using Addr = Register::Address<0x00200fe4,0x00000000,0x00000000,unsigned>;
        ///Reserved. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///EEPROM read/write operation finished interrupt enable bit. Bit is: - set when 1 is written to the corresponding bit of the EEINTENSET register. - cleared when 1 is written to the corresponding bit of the EEINTENCLR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eeRwDone{}; 
        ///Reserved. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///EEPROM program operation finished interrupt enable bit. Bit is: - set when 1 is written in the corresponding bit of the EEINTENSET register. - cleared when 1 is written to the corresponding bit of the EEINTENCLR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> eeProgDone{}; 
        ///Reserved. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace FlashctrlStatclr{    ///<Signature generation status clear register
        using Addr = Register::Address<0x00200fe8,0x00000000,0x00000000,unsigned>;
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Writing a 1 to this bits clears the signature generation completion flag (SIG_DONE) in the FMSTAT register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sigDoneClr{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,3),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clear read/write operation finished interrupt status bit (EEPROM). 0 leave corresponding bit unchanged. 1 clear corresponding bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> rdwrClrSt{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clear program operation finished interrupt status bit for EEPROM device 1. 0 leave corresponding bit unchanged. 1 clear corresponding bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> prog1ClrSt{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace FlashctrlEnclr{    ///<EEPROM interrupt enable clear
        using Addr = Register::Address<0x00200fd8,0x00000000,0x00000000,unsigned>;
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clear read/write operation finished interrupt enable bit (EEPROM). 0: leave corresponding bit unchanged. 1: clear corresponding bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> rdwrClrEn{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clear program operation finished interrupt enable bit for EEPROM device 1. 0: leave corresponding bit unchanged. 1: clear corresponding bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> prog1ClrEn{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace FlashctrlEnset{    ///<EEPROM interrupt enable set
        using Addr = Register::Address<0x00200fdc,0x00000000,0x00000000,unsigned>;
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Set read/write operation finished interrupt enable bit (EEPROM). 0: leave corresponding bit unchanged. 1: set corresponding bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> rdwrSetEn{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Set program operation finished interrupt enable bit for EEPROM device 1. 0: leave corresponding bit unchanged. 1: set corresponding bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> prog1SetEn{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
