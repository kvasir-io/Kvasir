#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//EEPROM/flash
    namespace Nonefmsstart{    ///<Signature start address register
        using Addr = Register::Address<0x00200020,0xfffe0000,0,unsigned>;
        ///Signature generation start address (corresponds to AHB byte address bits[20:4]).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> start{}; 
    }
    namespace Nonefmsstop{    ///<Signature stop-address register
        using Addr = Register::Address<0x00200024,0xfffc0000,0,unsigned>;
        ///BIST stop address divided by 16 (corresponds to AHB byte address [20:4]).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,0),Register::ReadWriteAccess,unsigned> stop{}; 
        ///Start control bit for signature generation.
        enum class sigStartVal {
            stop=0x00000000,     ///<Signature generation is stopped
            start=0x00000001,     ///<Initiate signature generation
        };
        namespace sigStartValC{
            constexpr MPL::Value<sigStartVal,sigStartVal::stop> stop{};
            constexpr MPL::Value<sigStartVal,sigStartVal::start> start{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,sigStartVal> sigStart{}; 
    }
    namespace Nonefmsw0{    ///<128-bit signature Word 0
        using Addr = Register::Address<0x0020002c,0x00000000,0,unsigned>;
        ///Word 0 of 128-bit signature (bits 31 to 0).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sw0310{}; 
    }
    namespace Nonefmsw1{    ///<128-bit signature Word 1
        using Addr = Register::Address<0x00200030,0x00000000,0,unsigned>;
        ///Word 1 of 128-bit signature (bits 63 to 32).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sw16332{}; 
    }
    namespace Nonefmsw2{    ///<128-bit signature Word 2
        using Addr = Register::Address<0x00200034,0x00000000,0,unsigned>;
        ///Word 2 of 128-bit signature (bits 95 to 64).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sw29564{}; 
    }
    namespace Nonefmsw3{    ///<128-bit signature Word 3
        using Addr = Register::Address<0x00200038,0x00000000,0,unsigned>;
        ///Word 3 of 128-bit signature (bits 127 to 96).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sw312796{}; 
    }
    namespace Noneeecmd{    ///<EEPROM command register
        using Addr = Register::Address<0x00200080,0xfffffff0,0,unsigned>;
        ///Command. 000: 8-bit read 001: 16-bit read 010: 32-bit read 011: 8-bit write 100: 16-bit write 101: 32-bit write 110: erase/program page 111: reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> cmd{}; 
        ///Read data prefetch bit. 0: do not prefetch next read data as result of reading from the read data register. 1: prefetch read data as result of reading from the read data register. When this bit is set multiple consecutive data elements can be read without the need of programming new address values in the address register. The address post-increment and the automatic read data prefetch (if enabled) allow only reading from the read data register to be done to read the data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rdprefetch{}; 
    }
    namespace Noneeeaddr{    ///<EEPROM address register
        using Addr = Register::Address<0x00200084,0xfffff000,0,unsigned>;
        ///EEPROM Address.  Lower 6 bits are don't care.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace Noneeewdata{    ///<EEPROM write data register
        using Addr = Register::Address<0x00200088,0x00000000,0,unsigned>;
        ///Write data. In case of: 8-bit write operations: bits [7:0] must contain valid write data. 16-bit write operations: bits [15:0] must contain valid write data. 32-bit write operations: bits [31:0] must contain valid write data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace Noneeerdata{    ///<EEPROM read data register
        using Addr = Register::Address<0x0020008c,0x00000000,0,unsigned>;
        ///Read data. In case of: 8-bit read operations: bits [7:0] contain read data, others are zero. 16-bit read operations: bits [15:0] contain read data, others are zero. 32-bit read operations: bits [31:0] contain read data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rdata{}; 
    }
    namespace Noneeewstate{    ///<EEPROM wait state register
        using Addr = Register::Address<0x00200090,0xff000000,0,unsigned>;
        ///Wait states 3 (minus 1 encoded). The number of system clock periods required to give a minimum time of 15 ns.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> phase3{}; 
        ///Wait states 2 (minus 1 encoded). The number of system clock periods required to give a minimum time of 55 ns.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> phase2{}; 
        ///Wait states 1 (minus 1 encoded). The number of system clock periods required to give a minimum time of 35 ns.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> phase1{}; 
    }
    namespace Noneeeclkdiv{    ///<EEPROM clock divider register
        using Addr = Register::Address<0x00200094,0xffff0000,0,unsigned>;
        ///Division factor (minus 1 encoded).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clkdiv{}; 
    }
    namespace Noneeepwrdwn{    ///<EEPROM power-down register
        using Addr = Register::Address<0x00200098,0xfffffffe,0,unsigned>;
        ///Power down mode bit. 0: not in power down mode. 1: power down mode (this will put all EEPROM devices in power down).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pwrdwn{}; 
    }
    namespace Nonestat{    ///<Signature generation status register
        using Addr = Register::Address<0x00200fe0,0xebfffffb,0,unsigned>;
        ///When 1, a previously started signature generation has completed. See FMSTATCLR register description for clearing this flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sigDone{}; 
        ///EEPROM read/write operation finished interrupt status bit. Bit is: - set when this operation has finished OR when 1 is written in the corresponding bit of the EEINTSTATSET register. - cleared when 1 is written to the corresponding bit of the EEINTSTATCLR register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> endOfRdwr{}; 
        ///EEPROM program operation finished interrupt status bit. Bit is: - set when this operation has finished OR when 1 is written to the corresponding bit of the EEINTSTATSET register. - cleared when 1 is written to the corresponding bit of the EEINTSTATCLR register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> endOfProg1{}; 
    }
    namespace Noneinten{    ///<EEPROM interrupt enable
        using Addr = Register::Address<0x00200fe4,0xebffffff,0,unsigned>;
        ///EEPROM read/write operation finished interrupt enable bit. Bit is: - set when 1 is written to the corresponding bit of the EEINTENSET register. - cleared when 1 is written to the corresponding bit of the EEINTENCLR register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eeRwDone{}; 
        ///EEPROM program operation finished interrupt enable bit. Bit is: - set when 1 is written in the corresponding bit of the EEINTENSET register. - cleared when 1 is written to the corresponding bit of the EEINTENCLR register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> eeProgDone{}; 
    }
    namespace Nonestatclr{    ///<Signature generation status clear register
        using Addr = Register::Address<0x00200fe8,0xebfffffb,0,unsigned>;
        ///Writing a 1 to this bits clears the signature generation completion flag (SIG_DONE) in the FMSTAT register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sigDoneClr{}; 
        ///Clear read/write operation finished interrupt status bit (EEPROM). 0 leave corresponding bit unchanged. 1 clear corresponding bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> rdwrClrSt{}; 
        ///Clear program operation finished interrupt status bit for EEPROM device 1. 0 leave corresponding bit unchanged. 1 clear corresponding bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> prog1ClrSt{}; 
    }
    namespace Noneenclr{    ///<EEPROM interrupt enable clear
        using Addr = Register::Address<0x00200fd8,0xebffffff,0,unsigned>;
        ///Clear read/write operation finished interrupt enable bit (EEPROM). 0: leave corresponding bit unchanged. 1: clear corresponding bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> rdwrClrEn{}; 
        ///Clear program operation finished interrupt enable bit for EEPROM device 1. 0: leave corresponding bit unchanged. 1: clear corresponding bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> prog1ClrEn{}; 
    }
    namespace Noneenset{    ///<EEPROM interrupt enable set
        using Addr = Register::Address<0x00200fdc,0xebffffff,0,unsigned>;
        ///Set read/write operation finished interrupt enable bit (EEPROM). 0: leave corresponding bit unchanged. 1: set corresponding bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> rdwrSetEn{}; 
        ///Set program operation finished interrupt enable bit for EEPROM device 1. 0: leave corresponding bit unchanged. 1: set corresponding bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> prog1SetEn{}; 
    }
}
