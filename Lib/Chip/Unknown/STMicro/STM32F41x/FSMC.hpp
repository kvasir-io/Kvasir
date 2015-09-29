#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flexible static memory controller
    namespace Nonebcr1{    ///<SRAM/NOR-Flash chip-select control register
          1
        using Addr = Register::Address<0xa0000000,0xfff70480,0,unsigned>;
        ///CBURSTRW
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cburstrw{}; 
        ///ASYNCWAIT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> asyncwait{}; 
        ///EXTMOD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extmod{}; 
        ///WAITEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> waiten{}; 
        ///WREN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wren{}; 
        ///WAITCFG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> waitcfg{}; 
        ///WAITPOL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> waitpol{}; 
        ///BURSTEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bursten{}; 
        ///FACCEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> faccen{}; 
        ///MWID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> mwid{}; 
        ///MTYP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mtyp{}; 
        ///MUXEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> muxen{}; 
        ///MBKEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mbken{}; 
    }
    namespace Nonebtr1{    ///<SRAM/NOR-Flash chip-select timing register
          1
        using Addr = Register::Address<0xa0000004,0xc0000000,0,unsigned>;
        ///ACCMOD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        ///DATLAT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        ///CLKDIV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///BUSTURN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> busturn{}; 
        ///DATAST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        ///ADDHLD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        ///ADDSET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
    }
    namespace Nonebcr2{    ///<SRAM/NOR-Flash chip-select control register
          2
        using Addr = Register::Address<0xa0000008,0xfff70080,0,unsigned>;
        ///CBURSTRW
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cburstrw{}; 
        ///ASYNCWAIT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> asyncwait{}; 
        ///EXTMOD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extmod{}; 
        ///WAITEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> waiten{}; 
        ///WREN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wren{}; 
        ///WAITCFG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> waitcfg{}; 
        ///WRAPMOD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> wrapmod{}; 
        ///WAITPOL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> waitpol{}; 
        ///BURSTEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bursten{}; 
        ///FACCEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> faccen{}; 
        ///MWID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> mwid{}; 
        ///MTYP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mtyp{}; 
        ///MUXEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> muxen{}; 
        ///MBKEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mbken{}; 
    }
    namespace Nonebtr2{    ///<SRAM/NOR-Flash chip-select timing register
          2
        using Addr = Register::Address<0xa000000c,0xc0000000,0,unsigned>;
        ///ACCMOD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        ///DATLAT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        ///CLKDIV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///BUSTURN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> busturn{}; 
        ///DATAST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        ///ADDHLD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        ///ADDSET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
    }
    namespace Nonebcr3{    ///<SRAM/NOR-Flash chip-select control register
          3
        using Addr = Register::Address<0xa0000010,0xfff70080,0,unsigned>;
        ///CBURSTRW
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cburstrw{}; 
        ///ASYNCWAIT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> asyncwait{}; 
        ///EXTMOD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extmod{}; 
        ///WAITEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> waiten{}; 
        ///WREN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wren{}; 
        ///WAITCFG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> waitcfg{}; 
        ///WRAPMOD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> wrapmod{}; 
        ///WAITPOL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> waitpol{}; 
        ///BURSTEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bursten{}; 
        ///FACCEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> faccen{}; 
        ///MWID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> mwid{}; 
        ///MTYP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mtyp{}; 
        ///MUXEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> muxen{}; 
        ///MBKEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mbken{}; 
    }
    namespace Nonebtr3{    ///<SRAM/NOR-Flash chip-select timing register
          3
        using Addr = Register::Address<0xa0000014,0xc0000000,0,unsigned>;
        ///ACCMOD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        ///DATLAT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        ///CLKDIV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///BUSTURN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> busturn{}; 
        ///DATAST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        ///ADDHLD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        ///ADDSET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
    }
    namespace Nonebcr4{    ///<SRAM/NOR-Flash chip-select control register
          4
        using Addr = Register::Address<0xa0000018,0xfff70080,0,unsigned>;
        ///CBURSTRW
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cburstrw{}; 
        ///ASYNCWAIT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> asyncwait{}; 
        ///EXTMOD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extmod{}; 
        ///WAITEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> waiten{}; 
        ///WREN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wren{}; 
        ///WAITCFG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> waitcfg{}; 
        ///WRAPMOD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> wrapmod{}; 
        ///WAITPOL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> waitpol{}; 
        ///BURSTEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bursten{}; 
        ///FACCEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> faccen{}; 
        ///MWID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> mwid{}; 
        ///MTYP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mtyp{}; 
        ///MUXEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> muxen{}; 
        ///MBKEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mbken{}; 
    }
    namespace Nonebtr4{    ///<SRAM/NOR-Flash chip-select timing register
          4
        using Addr = Register::Address<0xa000001c,0xc0000000,0,unsigned>;
        ///ACCMOD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        ///DATLAT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        ///CLKDIV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///BUSTURN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> busturn{}; 
        ///DATAST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        ///ADDHLD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        ///ADDSET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
    }
    namespace Nonepcr2{    ///<PC Card/NAND Flash control register
          2
        using Addr = Register::Address<0xa0000060,0xfff00181,0,unsigned>;
        ///ECCPS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> eccps{}; 
        ///TAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,13),Register::ReadWriteAccess,unsigned> tar{}; 
        ///TCLR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> tclr{}; 
        ///ECCEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eccen{}; 
        ///PWID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pwid{}; 
        ///PTYP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ptyp{}; 
        ///PBKEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pbken{}; 
        ///PWAITEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pwaiten{}; 
    }
    namespace Nonesr2{    ///<FIFO status and interrupt register
          2
        using Addr = Register::Address<0xa0000064,0xffffff80,0,unsigned>;
        ///FEMPT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fempt{}; 
        ///IFEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ifen{}; 
        ///ILEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ilen{}; 
        ///IREN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iren{}; 
        ///IFS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ifs{}; 
        ///ILS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ils{}; 
        ///IRS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irs{}; 
    }
    namespace Nonepmem2{    ///<Common memory space timing register
          2
        using Addr = Register::Address<0xa0000068,0x00000000,0,unsigned>;
        ///MEMHIZx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> memhizx{}; 
        ///MEMHOLDx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> memholdx{}; 
        ///MEMWAITx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> memwaitx{}; 
        ///MEMSETx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> memsetx{}; 
    }
    namespace Nonepatt2{    ///<Attribute memory space timing register
          2
        using Addr = Register::Address<0xa000006c,0x00000000,0,unsigned>;
        ///ATTHIZx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> atthizx{}; 
        ///ATTHOLDx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> attholdx{}; 
        ///ATTWAITx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> attwaitx{}; 
        ///ATTSETx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> attsetx{}; 
    }
    namespace Noneeccr2{    ///<ECC result register 2
        using Addr = Register::Address<0xa0000074,0x00000000,0,unsigned>;
        ///ECCx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> eccx{}; 
    }
    namespace Nonepcr3{    ///<PC Card/NAND Flash control register
          3
        using Addr = Register::Address<0xa0000080,0xfff00181,0,unsigned>;
        ///ECCPS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> eccps{}; 
        ///TAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,13),Register::ReadWriteAccess,unsigned> tar{}; 
        ///TCLR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> tclr{}; 
        ///ECCEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eccen{}; 
        ///PWID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pwid{}; 
        ///PTYP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ptyp{}; 
        ///PBKEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pbken{}; 
        ///PWAITEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pwaiten{}; 
    }
    namespace Nonesr3{    ///<FIFO status and interrupt register
          3
        using Addr = Register::Address<0xa0000084,0xffffff80,0,unsigned>;
        ///FEMPT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fempt{}; 
        ///IFEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ifen{}; 
        ///ILEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ilen{}; 
        ///IREN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iren{}; 
        ///IFS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ifs{}; 
        ///ILS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ils{}; 
        ///IRS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irs{}; 
    }
    namespace Nonepmem3{    ///<Common memory space timing register
          3
        using Addr = Register::Address<0xa0000088,0x00000000,0,unsigned>;
        ///MEMHIZx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> memhizx{}; 
        ///MEMHOLDx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> memholdx{}; 
        ///MEMWAITx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> memwaitx{}; 
        ///MEMSETx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> memsetx{}; 
    }
    namespace Nonepatt3{    ///<Attribute memory space timing register
          3
        using Addr = Register::Address<0xa000008c,0x00000000,0,unsigned>;
        ///ATTHIZx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> atthizx{}; 
        ///ATTHOLDx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> attholdx{}; 
        ///ATTWAITx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> attwaitx{}; 
        ///ATTSETx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> attsetx{}; 
    }
    namespace Noneeccr3{    ///<ECC result register 3
        using Addr = Register::Address<0xa0000094,0x00000000,0,unsigned>;
        ///ECCx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> eccx{}; 
    }
    namespace Nonepcr4{    ///<PC Card/NAND Flash control register
          4
        using Addr = Register::Address<0xa00000a0,0xfff00181,0,unsigned>;
        ///ECCPS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> eccps{}; 
        ///TAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,13),Register::ReadWriteAccess,unsigned> tar{}; 
        ///TCLR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> tclr{}; 
        ///ECCEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eccen{}; 
        ///PWID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pwid{}; 
        ///PTYP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ptyp{}; 
        ///PBKEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pbken{}; 
        ///PWAITEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pwaiten{}; 
    }
    namespace Nonesr4{    ///<FIFO status and interrupt register
          4
        using Addr = Register::Address<0xa00000a4,0xffffff80,0,unsigned>;
        ///FEMPT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fempt{}; 
        ///IFEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ifen{}; 
        ///ILEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ilen{}; 
        ///IREN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iren{}; 
        ///IFS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ifs{}; 
        ///ILS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ils{}; 
        ///IRS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irs{}; 
    }
    namespace Nonepmem4{    ///<Common memory space timing register
          4
        using Addr = Register::Address<0xa00000a8,0x00000000,0,unsigned>;
        ///MEMHIZx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> memhizx{}; 
        ///MEMHOLDx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> memholdx{}; 
        ///MEMWAITx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> memwaitx{}; 
        ///MEMSETx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> memsetx{}; 
    }
    namespace Nonepatt4{    ///<Attribute memory space timing register
          4
        using Addr = Register::Address<0xa00000ac,0x00000000,0,unsigned>;
        ///ATTHIZx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> atthizx{}; 
        ///ATTHOLDx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> attholdx{}; 
        ///ATTWAITx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> attwaitx{}; 
        ///ATTSETx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> attsetx{}; 
    }
    namespace Nonepio4{    ///<I/O space timing register 4
        using Addr = Register::Address<0xa00000b0,0x00000000,0,unsigned>;
        ///IOHIZx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iohizx{}; 
        ///IOHOLDx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ioholdx{}; 
        ///IOWAITx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iowaitx{}; 
        ///IOSETx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iosetx{}; 
    }
    namespace Nonebwtr1{    ///<SRAM/NOR-Flash write timing registers
          1
        using Addr = Register::Address<0xa0000104,0xc00f0000,0,unsigned>;
        ///ACCMOD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        ///DATLAT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        ///CLKDIV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///DATAST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        ///ADDHLD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        ///ADDSET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
    }
    namespace Nonebwtr2{    ///<SRAM/NOR-Flash write timing registers
          2
        using Addr = Register::Address<0xa000010c,0xc00f0000,0,unsigned>;
        ///ACCMOD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        ///DATLAT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        ///CLKDIV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///DATAST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        ///ADDHLD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        ///ADDSET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
    }
    namespace Nonebwtr3{    ///<SRAM/NOR-Flash write timing registers
          3
        using Addr = Register::Address<0xa0000114,0xc00f0000,0,unsigned>;
        ///ACCMOD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        ///DATLAT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        ///CLKDIV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///DATAST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        ///ADDHLD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        ///ADDSET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
    }
    namespace Nonebwtr4{    ///<SRAM/NOR-Flash write timing registers
          4
        using Addr = Register::Address<0xa000011c,0xc00f0000,0,unsigned>;
        ///ACCMOD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        ///DATLAT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        ///CLKDIV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///DATAST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        ///ADDHLD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        ///ADDSET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
    }
}
