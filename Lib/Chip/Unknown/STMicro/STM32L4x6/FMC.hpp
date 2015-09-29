#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flexible memory controller
    namespace Nonebcr1{    ///<SRAM/NOR-Flash chip-select control register
          1
        using Addr = Register::Address<0x60000000,0xffc70480,0,unsigned>;
        ///MBKEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mbken{}; 
        ///MUXEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> muxen{}; 
        ///MTYP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mtyp{}; 
        ///MWID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> mwid{}; 
        ///FACCEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> faccen{}; 
        ///BURSTEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bursten{}; 
        ///WAITPOL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> waitpol{}; 
        ///WAITCFG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> waitcfg{}; 
        ///WREN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wren{}; 
        ///WAITEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> waiten{}; 
        ///EXTMOD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extmod{}; 
        ///ASYNCWAIT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> asyncwait{}; 
        ///CBURSTRW
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cburstrw{}; 
        ///CCLKEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> cclken{}; 
        ///Write FIFO Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> wfdis{}; 
    }
    namespace Nonebtr1{    ///<SRAM/NOR-Flash chip-select timing register
          1
        using Addr = Register::Address<0x60000004,0xc0000000,0,unsigned>;
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
        using Addr = Register::Address<0x60000008,0xfff70080,0,unsigned>;
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
        using Addr = Register::Address<0x6000000c,0xc0000000,0,unsigned>;
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
        using Addr = Register::Address<0x60000010,0xfff70080,0,unsigned>;
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
        using Addr = Register::Address<0x60000014,0xc0000000,0,unsigned>;
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
        using Addr = Register::Address<0x60000018,0xfff70080,0,unsigned>;
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
        using Addr = Register::Address<0x6000001c,0xc0000000,0,unsigned>;
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
    namespace Nonepcr{    ///<PC Card/NAND Flash control register
          3
        using Addr = Register::Address<0x60000080,0xfff00181,0,unsigned>;
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
    namespace Nonesr{    ///<FIFO status and interrupt register
          3
        using Addr = Register::Address<0x60000084,0xffffff80,0,unsigned>;
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
    namespace Nonepmem{    ///<Common memory space timing register
          3
        using Addr = Register::Address<0x60000088,0x00000000,0,unsigned>;
        ///MEMHIZx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> memhizx{}; 
        ///MEMHOLDx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> memholdx{}; 
        ///MEMWAITx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> memwaitx{}; 
        ///MEMSETx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> memsetx{}; 
    }
    namespace Nonepatt{    ///<Attribute memory space timing register
          3
        using Addr = Register::Address<0x6000008c,0x00000000,0,unsigned>;
        ///ATTHIZx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> atthizx{}; 
        ///ATTHOLDx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> attholdx{}; 
        ///ATTWAITx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> attwaitx{}; 
        ///ATTSETx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> attsetx{}; 
    }
    namespace Noneeccr{    ///<ECC result register 3
        using Addr = Register::Address<0x60000094,0x00000000,0,unsigned>;
        ///ECCx
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> eccx{}; 
    }
    namespace Nonebwtr1{    ///<SRAM/NOR-Flash write timing registers
          1
        using Addr = Register::Address<0x60000104,0xc00f0000,0,unsigned>;
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
        using Addr = Register::Address<0x6000010c,0xc00f0000,0,unsigned>;
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
        using Addr = Register::Address<0x60000114,0xc00f0000,0,unsigned>;
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
        using Addr = Register::Address<0x6000011c,0xc00f0000,0,unsigned>;
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
