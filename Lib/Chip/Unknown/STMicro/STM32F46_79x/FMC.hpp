#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flexible memory controller
    namespace Nonebcr1{    ///<SRAM/NOR-Flash chip-select control register
          1
        using Addr = Register::Address<0xa0000000,0xffe70480,0,unsigned>;
        ///CCLKEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> cclken{}; 
        ///CBURSTRW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cburstrw{}; 
        ///ASYNCWAIT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> asyncwait{}; 
        ///EXTMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extmod{}; 
        ///WAITEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> waiten{}; 
        ///WREN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wren{}; 
        ///WAITCFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> waitcfg{}; 
        ///WAITPOL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> waitpol{}; 
        ///BURSTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bursten{}; 
        ///FACCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> faccen{}; 
        ///MWID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> mwid{}; 
        ///MTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mtyp{}; 
        ///MUXEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> muxen{}; 
        ///MBKEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mbken{}; 
    }
    namespace Nonebtr1{    ///<SRAM/NOR-Flash chip-select timing register
          1
        using Addr = Register::Address<0xa0000004,0xc0000000,0,unsigned>;
        ///ACCMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        ///DATLAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        ///CLKDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///BUSTURN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> busturn{}; 
        ///DATAST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        ///ADDHLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        ///ADDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
    }
    namespace Nonebcr2{    ///<SRAM/NOR-Flash chip-select control register
          2
        using Addr = Register::Address<0xa0000008,0xfff70080,0,unsigned>;
        ///CBURSTRW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cburstrw{}; 
        ///ASYNCWAIT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> asyncwait{}; 
        ///EXTMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extmod{}; 
        ///WAITEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> waiten{}; 
        ///WREN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wren{}; 
        ///WAITCFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> waitcfg{}; 
        ///WRAPMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> wrapmod{}; 
        ///WAITPOL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> waitpol{}; 
        ///BURSTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bursten{}; 
        ///FACCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> faccen{}; 
        ///MWID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> mwid{}; 
        ///MTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mtyp{}; 
        ///MUXEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> muxen{}; 
        ///MBKEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mbken{}; 
    }
    namespace Nonebtr2{    ///<SRAM/NOR-Flash chip-select timing register
          2
        using Addr = Register::Address<0xa000000c,0xc0000000,0,unsigned>;
        ///ACCMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        ///DATLAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        ///CLKDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///BUSTURN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> busturn{}; 
        ///DATAST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        ///ADDHLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        ///ADDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
    }
    namespace Nonebcr3{    ///<SRAM/NOR-Flash chip-select control register
          3
        using Addr = Register::Address<0xa0000010,0xfff70080,0,unsigned>;
        ///CBURSTRW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cburstrw{}; 
        ///ASYNCWAIT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> asyncwait{}; 
        ///EXTMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extmod{}; 
        ///WAITEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> waiten{}; 
        ///WREN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wren{}; 
        ///WAITCFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> waitcfg{}; 
        ///WRAPMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> wrapmod{}; 
        ///WAITPOL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> waitpol{}; 
        ///BURSTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bursten{}; 
        ///FACCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> faccen{}; 
        ///MWID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> mwid{}; 
        ///MTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mtyp{}; 
        ///MUXEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> muxen{}; 
        ///MBKEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mbken{}; 
    }
    namespace Nonebtr3{    ///<SRAM/NOR-Flash chip-select timing register
          3
        using Addr = Register::Address<0xa0000014,0xc0000000,0,unsigned>;
        ///ACCMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        ///DATLAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        ///CLKDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///BUSTURN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> busturn{}; 
        ///DATAST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        ///ADDHLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        ///ADDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
    }
    namespace Nonebcr4{    ///<SRAM/NOR-Flash chip-select control register
          4
        using Addr = Register::Address<0xa0000018,0xfff70080,0,unsigned>;
        ///CBURSTRW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cburstrw{}; 
        ///ASYNCWAIT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> asyncwait{}; 
        ///EXTMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extmod{}; 
        ///WAITEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> waiten{}; 
        ///WREN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wren{}; 
        ///WAITCFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> waitcfg{}; 
        ///WRAPMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> wrapmod{}; 
        ///WAITPOL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> waitpol{}; 
        ///BURSTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bursten{}; 
        ///FACCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> faccen{}; 
        ///MWID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> mwid{}; 
        ///MTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mtyp{}; 
        ///MUXEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> muxen{}; 
        ///MBKEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mbken{}; 
    }
    namespace Nonebtr4{    ///<SRAM/NOR-Flash chip-select timing register
          4
        using Addr = Register::Address<0xa000001c,0xc0000000,0,unsigned>;
        ///ACCMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        ///DATLAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        ///CLKDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///BUSTURN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> busturn{}; 
        ///DATAST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        ///ADDHLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        ///ADDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
    }
    namespace Nonepcr{    ///<PC Card/NAND Flash control register
          3
        using Addr = Register::Address<0xa0000080,0xfff00181,0,unsigned>;
        ///ECCPS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> eccps{}; 
        ///TAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,13),Register::ReadWriteAccess,unsigned> tar{}; 
        ///TCLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> tclr{}; 
        ///ECCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eccen{}; 
        ///PWID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pwid{}; 
        ///PTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ptyp{}; 
        ///PBKEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pbken{}; 
        ///PWAITEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pwaiten{}; 
    }
    namespace Nonesr{    ///<FIFO status and interrupt register
          3
        using Addr = Register::Address<0xa0000084,0xffffff80,0,unsigned>;
        ///FEMPT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fempt{}; 
        ///IFEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ifen{}; 
        ///ILEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ilen{}; 
        ///IREN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iren{}; 
        ///IFS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ifs{}; 
        ///ILS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ils{}; 
        ///IRS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irs{}; 
    }
    namespace Nonepmem{    ///<Common memory space timing register
          3
        using Addr = Register::Address<0xa0000088,0x00000000,0,unsigned>;
        ///MEMHIZx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> memhizx{}; 
        ///MEMHOLDx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> memholdx{}; 
        ///MEMWAITx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> memwaitx{}; 
        ///MEMSETx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> memsetx{}; 
    }
    namespace Nonepatt{    ///<Attribute memory space timing register
          3
        using Addr = Register::Address<0xa000008c,0x00000000,0,unsigned>;
        ///ATTHIZx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> atthizx{}; 
        ///ATTHOLDx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> attholdx{}; 
        ///ATTWAITx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> attwaitx{}; 
        ///ATTSETx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> attsetx{}; 
    }
    namespace Noneeccr{    ///<ECC result register 3
        using Addr = Register::Address<0xa0000094,0x00000000,0,unsigned>;
        ///ECCx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> eccx{}; 
    }
    namespace Nonebwtr1{    ///<SRAM/NOR-Flash write timing registers
          1
        using Addr = Register::Address<0xa0000104,0xc00f0000,0,unsigned>;
        ///ACCMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        ///DATLAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        ///CLKDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///DATAST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        ///ADDHLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        ///ADDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
    }
    namespace Nonebwtr2{    ///<SRAM/NOR-Flash write timing registers
          2
        using Addr = Register::Address<0xa000010c,0xc00f0000,0,unsigned>;
        ///ACCMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        ///DATLAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        ///CLKDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///DATAST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        ///ADDHLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        ///ADDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
    }
    namespace Nonebwtr3{    ///<SRAM/NOR-Flash write timing registers
          3
        using Addr = Register::Address<0xa0000114,0xc00f0000,0,unsigned>;
        ///ACCMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        ///DATLAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        ///CLKDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///DATAST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        ///ADDHLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        ///ADDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
    }
    namespace Nonebwtr4{    ///<SRAM/NOR-Flash write timing registers
          4
        using Addr = Register::Address<0xa000011c,0xc00f0000,0,unsigned>;
        ///ACCMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        ///DATLAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        ///CLKDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///DATAST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        ///ADDHLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        ///ADDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
    }
    namespace Nonesdcr1{    ///<SDRAM Control Register 1
        using Addr = Register::Address<0xa0000140,0xffff8000,0,unsigned>;
        ///Number of column address
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> nc{}; 
        ///Number of row address bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> nr{}; 
        ///Memory data bus width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> mwid{}; 
        ///Number of internal banks
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nb{}; 
        ///CAS latency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,unsigned> cas{}; 
        ///Write protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> wp{}; 
        ///SDRAM clock configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sdclk{}; 
        ///Burst read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rburst{}; 
        ///Read pipe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> rpipe{}; 
    }
    namespace Nonesdcr2{    ///<SDRAM Control Register 2
        using Addr = Register::Address<0xa0000144,0xffff8000,0,unsigned>;
        ///Number of column address
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> nc{}; 
        ///Number of row address bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> nr{}; 
        ///Memory data bus width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> mwid{}; 
        ///Number of internal banks
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nb{}; 
        ///CAS latency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,unsigned> cas{}; 
        ///Write protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> wp{}; 
        ///SDRAM clock configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sdclk{}; 
        ///Burst read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rburst{}; 
        ///Read pipe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> rpipe{}; 
    }
    namespace Nonesdtr1{    ///<SDRAM Timing register 1
        using Addr = Register::Address<0xa0000148,0xf0000000,0,unsigned>;
        ///Load Mode Register to
              Active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tmrd{}; 
        ///Exit self-refresh delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> txsr{}; 
        ///Self refresh time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tras{}; 
        ///Row cycle delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> trc{}; 
        ///Recovery delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> twr{}; 
        ///Row precharge delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> trp{}; 
        ///Row to column delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> trcd{}; 
    }
    namespace Nonesdtr2{    ///<SDRAM Timing register 2
        using Addr = Register::Address<0xa000014c,0xf0000000,0,unsigned>;
        ///Load Mode Register to
              Active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tmrd{}; 
        ///Exit self-refresh delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> txsr{}; 
        ///Self refresh time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tras{}; 
        ///Row cycle delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> trc{}; 
        ///Recovery delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> twr{}; 
        ///Row precharge delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> trp{}; 
        ///Row to column delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> trcd{}; 
    }
    namespace Nonesdcmr{    ///<SDRAM Command Mode register
        using Addr = Register::Address<0xa0000150,0xffc00000,0,unsigned>;
        ///Command mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> mode{}; 
        ///Command target bank 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ctb2{}; 
        ///Command target bank 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctb1{}; 
        ///Number of Auto-refresh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,5),Register::ReadWriteAccess,unsigned> nrfs{}; 
        ///Mode Register definition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,9),Register::ReadWriteAccess,unsigned> mrd{}; 
    }
    namespace Nonesdrtr{    ///<SDRAM Refresh Timer register
        using Addr = Register::Address<0xa0000154,0xffff8000,0,unsigned>;
        ///Clear Refresh error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cre{}; 
        ///Refresh Timer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,1),Register::ReadWriteAccess,unsigned> count{}; 
        ///RES Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> reie{}; 
    }
    namespace Nonesdsr{    ///<SDRAM Status register
        using Addr = Register::Address<0xa0000158,0xffffffc0,0,unsigned>;
        ///Refresh error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> re{}; 
        ///Status Mode for Bank 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> modes1{}; 
        ///Status Mode for Bank 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> modes2{}; 
        ///Busy status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> busy{}; 
    }
}
