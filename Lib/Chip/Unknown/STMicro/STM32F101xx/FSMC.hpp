#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flexible static memory controller
    namespace Nonebcr1{    ///<SRAM/NOR-Flash chip-select control register
          1
        using Addr = Register::Address<0xa0000000,0xfff70480,0,unsigned>;
        ///CBURSTRW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cburstrw{}; 
        namespace CburstrwValC{
        }
        ///ASYNCWAIT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> asyncwait{}; 
        namespace AsyncwaitValC{
        }
        ///EXTMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extmod{}; 
        namespace ExtmodValC{
        }
        ///WAITEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> waiten{}; 
        namespace WaitenValC{
        }
        ///WREN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wren{}; 
        namespace WrenValC{
        }
        ///WAITCFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> waitcfg{}; 
        namespace WaitcfgValC{
        }
        ///WAITPOL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> waitpol{}; 
        namespace WaitpolValC{
        }
        ///BURSTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bursten{}; 
        namespace BurstenValC{
        }
        ///FACCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> faccen{}; 
        namespace FaccenValC{
        }
        ///MWID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> mwid{}; 
        namespace MwidValC{
        }
        ///MTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mtyp{}; 
        namespace MtypValC{
        }
        ///MUXEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> muxen{}; 
        namespace MuxenValC{
        }
        ///MBKEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mbken{}; 
        namespace MbkenValC{
        }
    }
    namespace Nonebtr1{    ///<SRAM/NOR-Flash chip-select timing register
          1
        using Addr = Register::Address<0xa0000004,0xc0000000,0,unsigned>;
        ///ACCMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        namespace AccmodValC{
        }
        ///DATLAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        namespace DatlatValC{
        }
        ///CLKDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        namespace ClkdivValC{
        }
        ///BUSTURN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> busturn{}; 
        namespace BusturnValC{
        }
        ///DATAST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        namespace DatastValC{
        }
        ///ADDHLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        namespace AddhldValC{
        }
        ///ADDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
        namespace AddsetValC{
        }
    }
    namespace Nonebcr2{    ///<SRAM/NOR-Flash chip-select control register
          2
        using Addr = Register::Address<0xa0000008,0xfff70080,0,unsigned>;
        ///CBURSTRW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cburstrw{}; 
        namespace CburstrwValC{
        }
        ///ASYNCWAIT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> asyncwait{}; 
        namespace AsyncwaitValC{
        }
        ///EXTMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extmod{}; 
        namespace ExtmodValC{
        }
        ///WAITEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> waiten{}; 
        namespace WaitenValC{
        }
        ///WREN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wren{}; 
        namespace WrenValC{
        }
        ///WAITCFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> waitcfg{}; 
        namespace WaitcfgValC{
        }
        ///WRAPMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> wrapmod{}; 
        namespace WrapmodValC{
        }
        ///WAITPOL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> waitpol{}; 
        namespace WaitpolValC{
        }
        ///BURSTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bursten{}; 
        namespace BurstenValC{
        }
        ///FACCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> faccen{}; 
        namespace FaccenValC{
        }
        ///MWID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> mwid{}; 
        namespace MwidValC{
        }
        ///MTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mtyp{}; 
        namespace MtypValC{
        }
        ///MUXEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> muxen{}; 
        namespace MuxenValC{
        }
        ///MBKEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mbken{}; 
        namespace MbkenValC{
        }
    }
    namespace Nonebtr2{    ///<SRAM/NOR-Flash chip-select timing register
          2
        using Addr = Register::Address<0xa000000c,0xc0000000,0,unsigned>;
        ///ACCMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        namespace AccmodValC{
        }
        ///DATLAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        namespace DatlatValC{
        }
        ///CLKDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        namespace ClkdivValC{
        }
        ///BUSTURN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> busturn{}; 
        namespace BusturnValC{
        }
        ///DATAST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        namespace DatastValC{
        }
        ///ADDHLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        namespace AddhldValC{
        }
        ///ADDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
        namespace AddsetValC{
        }
    }
    namespace Nonebcr3{    ///<SRAM/NOR-Flash chip-select control register
          3
        using Addr = Register::Address<0xa0000010,0xfff70080,0,unsigned>;
        ///CBURSTRW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cburstrw{}; 
        namespace CburstrwValC{
        }
        ///ASYNCWAIT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> asyncwait{}; 
        namespace AsyncwaitValC{
        }
        ///EXTMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extmod{}; 
        namespace ExtmodValC{
        }
        ///WAITEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> waiten{}; 
        namespace WaitenValC{
        }
        ///WREN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wren{}; 
        namespace WrenValC{
        }
        ///WAITCFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> waitcfg{}; 
        namespace WaitcfgValC{
        }
        ///WRAPMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> wrapmod{}; 
        namespace WrapmodValC{
        }
        ///WAITPOL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> waitpol{}; 
        namespace WaitpolValC{
        }
        ///BURSTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bursten{}; 
        namespace BurstenValC{
        }
        ///FACCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> faccen{}; 
        namespace FaccenValC{
        }
        ///MWID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> mwid{}; 
        namespace MwidValC{
        }
        ///MTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mtyp{}; 
        namespace MtypValC{
        }
        ///MUXEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> muxen{}; 
        namespace MuxenValC{
        }
        ///MBKEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mbken{}; 
        namespace MbkenValC{
        }
    }
    namespace Nonebtr3{    ///<SRAM/NOR-Flash chip-select timing register
          3
        using Addr = Register::Address<0xa0000014,0xc0000000,0,unsigned>;
        ///ACCMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        namespace AccmodValC{
        }
        ///DATLAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        namespace DatlatValC{
        }
        ///CLKDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        namespace ClkdivValC{
        }
        ///BUSTURN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> busturn{}; 
        namespace BusturnValC{
        }
        ///DATAST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        namespace DatastValC{
        }
        ///ADDHLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        namespace AddhldValC{
        }
        ///ADDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
        namespace AddsetValC{
        }
    }
    namespace Nonebcr4{    ///<SRAM/NOR-Flash chip-select control register
          4
        using Addr = Register::Address<0xa0000018,0xfff70080,0,unsigned>;
        ///CBURSTRW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cburstrw{}; 
        namespace CburstrwValC{
        }
        ///ASYNCWAIT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> asyncwait{}; 
        namespace AsyncwaitValC{
        }
        ///EXTMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extmod{}; 
        namespace ExtmodValC{
        }
        ///WAITEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> waiten{}; 
        namespace WaitenValC{
        }
        ///WREN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wren{}; 
        namespace WrenValC{
        }
        ///WAITCFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> waitcfg{}; 
        namespace WaitcfgValC{
        }
        ///WRAPMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> wrapmod{}; 
        namespace WrapmodValC{
        }
        ///WAITPOL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> waitpol{}; 
        namespace WaitpolValC{
        }
        ///BURSTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bursten{}; 
        namespace BurstenValC{
        }
        ///FACCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> faccen{}; 
        namespace FaccenValC{
        }
        ///MWID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> mwid{}; 
        namespace MwidValC{
        }
        ///MTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mtyp{}; 
        namespace MtypValC{
        }
        ///MUXEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> muxen{}; 
        namespace MuxenValC{
        }
        ///MBKEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mbken{}; 
        namespace MbkenValC{
        }
    }
    namespace Nonebtr4{    ///<SRAM/NOR-Flash chip-select timing register
          4
        using Addr = Register::Address<0xa000001c,0xc0000000,0,unsigned>;
        ///ACCMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        namespace AccmodValC{
        }
        ///DATLAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        namespace DatlatValC{
        }
        ///CLKDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        namespace ClkdivValC{
        }
        ///BUSTURN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> busturn{}; 
        namespace BusturnValC{
        }
        ///DATAST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        namespace DatastValC{
        }
        ///ADDHLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        namespace AddhldValC{
        }
        ///ADDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
        namespace AddsetValC{
        }
    }
    namespace Nonepcr2{    ///<PC Card/NAND Flash control register
          2
        using Addr = Register::Address<0xa0000060,0xfff00181,0,unsigned>;
        ///ECCPS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> eccps{}; 
        namespace EccpsValC{
        }
        ///TAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,13),Register::ReadWriteAccess,unsigned> tar{}; 
        namespace TarValC{
        }
        ///TCLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> tclr{}; 
        namespace TclrValC{
        }
        ///ECCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eccen{}; 
        namespace EccenValC{
        }
        ///PWID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pwid{}; 
        namespace PwidValC{
        }
        ///PTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ptyp{}; 
        namespace PtypValC{
        }
        ///PBKEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pbken{}; 
        namespace PbkenValC{
        }
        ///PWAITEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pwaiten{}; 
        namespace PwaitenValC{
        }
    }
    namespace Nonesr2{    ///<FIFO status and interrupt register
          2
        using Addr = Register::Address<0xa0000064,0xffffff80,0,unsigned>;
        ///FEMPT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fempt{}; 
        namespace FemptValC{
        }
        ///IFEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ifen{}; 
        namespace IfenValC{
        }
        ///ILEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ilen{}; 
        namespace IlenValC{
        }
        ///IREN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iren{}; 
        namespace IrenValC{
        }
        ///IFS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ifs{}; 
        namespace IfsValC{
        }
        ///ILS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ils{}; 
        namespace IlsValC{
        }
        ///IRS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irs{}; 
        namespace IrsValC{
        }
    }
    namespace Nonepmem2{    ///<Common memory space timing register
          2
        using Addr = Register::Address<0xa0000068,0x00000000,0,unsigned>;
        ///MEMHIZx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> memhizx{}; 
        namespace MemhizxValC{
        }
        ///MEMHOLDx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> memholdx{}; 
        namespace MemholdxValC{
        }
        ///MEMWAITx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> memwaitx{}; 
        namespace MemwaitxValC{
        }
        ///MEMSETx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> memsetx{}; 
        namespace MemsetxValC{
        }
    }
    namespace Nonepatt2{    ///<Attribute memory space timing register
          2
        using Addr = Register::Address<0xa000006c,0x00000000,0,unsigned>;
        ///Attribute memory x databus HiZ
              time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> atthizx{}; 
        namespace AtthizxValC{
        }
        ///Attribute memory x hold
              time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> attholdx{}; 
        namespace AttholdxValC{
        }
        ///Attribute memory x wait
              time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> attwaitx{}; 
        namespace AttwaitxValC{
        }
        ///Attribute memory x setup
              time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> attsetx{}; 
        namespace AttsetxValC{
        }
    }
    namespace Noneeccr2{    ///<ECC result register 2
        using Addr = Register::Address<0xa0000074,0x00000000,0,unsigned>;
        ///ECC result
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> eccx{}; 
        namespace EccxValC{
        }
    }
    namespace Nonepcr3{    ///<PC Card/NAND Flash control register
          3
        using Addr = Register::Address<0xa0000080,0xfff00181,0,unsigned>;
        ///ECCPS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> eccps{}; 
        namespace EccpsValC{
        }
        ///TAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,13),Register::ReadWriteAccess,unsigned> tar{}; 
        namespace TarValC{
        }
        ///TCLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> tclr{}; 
        namespace TclrValC{
        }
        ///ECCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eccen{}; 
        namespace EccenValC{
        }
        ///PWID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pwid{}; 
        namespace PwidValC{
        }
        ///PTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ptyp{}; 
        namespace PtypValC{
        }
        ///PBKEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pbken{}; 
        namespace PbkenValC{
        }
        ///PWAITEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pwaiten{}; 
        namespace PwaitenValC{
        }
    }
    namespace Nonesr3{    ///<FIFO status and interrupt register
          3
        using Addr = Register::Address<0xa0000084,0xffffff80,0,unsigned>;
        ///FEMPT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fempt{}; 
        namespace FemptValC{
        }
        ///IFEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ifen{}; 
        namespace IfenValC{
        }
        ///ILEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ilen{}; 
        namespace IlenValC{
        }
        ///IREN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iren{}; 
        namespace IrenValC{
        }
        ///IFS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ifs{}; 
        namespace IfsValC{
        }
        ///ILS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ils{}; 
        namespace IlsValC{
        }
        ///IRS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irs{}; 
        namespace IrsValC{
        }
    }
    namespace Nonepmem3{    ///<Common memory space timing register
          3
        using Addr = Register::Address<0xa0000088,0x00000000,0,unsigned>;
        ///MEMHIZx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> memhizx{}; 
        namespace MemhizxValC{
        }
        ///MEMHOLDx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> memholdx{}; 
        namespace MemholdxValC{
        }
        ///MEMWAITx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> memwaitx{}; 
        namespace MemwaitxValC{
        }
        ///MEMSETx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> memsetx{}; 
        namespace MemsetxValC{
        }
    }
    namespace Nonepatt3{    ///<Attribute memory space timing register
          3
        using Addr = Register::Address<0xa000008c,0x00000000,0,unsigned>;
        ///ATTHIZx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> atthizx{}; 
        namespace AtthizxValC{
        }
        ///ATTHOLDx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> attholdx{}; 
        namespace AttholdxValC{
        }
        ///ATTWAITx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> attwaitx{}; 
        namespace AttwaitxValC{
        }
        ///ATTSETx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> attsetx{}; 
        namespace AttsetxValC{
        }
    }
    namespace Noneeccr3{    ///<ECC result register 3
        using Addr = Register::Address<0xa0000094,0x00000000,0,unsigned>;
        ///ECCx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> eccx{}; 
        namespace EccxValC{
        }
    }
    namespace Nonepcr4{    ///<PC Card/NAND Flash control register
          4
        using Addr = Register::Address<0xa00000a0,0xfff00181,0,unsigned>;
        ///ECCPS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> eccps{}; 
        namespace EccpsValC{
        }
        ///TAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,13),Register::ReadWriteAccess,unsigned> tar{}; 
        namespace TarValC{
        }
        ///TCLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> tclr{}; 
        namespace TclrValC{
        }
        ///ECCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eccen{}; 
        namespace EccenValC{
        }
        ///PWID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> pwid{}; 
        namespace PwidValC{
        }
        ///PTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ptyp{}; 
        namespace PtypValC{
        }
        ///PBKEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pbken{}; 
        namespace PbkenValC{
        }
        ///PWAITEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pwaiten{}; 
        namespace PwaitenValC{
        }
    }
    namespace Nonesr4{    ///<FIFO status and interrupt register
          4
        using Addr = Register::Address<0xa00000a4,0xffffff80,0,unsigned>;
        ///FEMPT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fempt{}; 
        namespace FemptValC{
        }
        ///IFEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ifen{}; 
        namespace IfenValC{
        }
        ///ILEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ilen{}; 
        namespace IlenValC{
        }
        ///IREN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iren{}; 
        namespace IrenValC{
        }
        ///IFS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ifs{}; 
        namespace IfsValC{
        }
        ///ILS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ils{}; 
        namespace IlsValC{
        }
        ///IRS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irs{}; 
        namespace IrsValC{
        }
    }
    namespace Nonepmem4{    ///<Common memory space timing register
          4
        using Addr = Register::Address<0xa00000a8,0x00000000,0,unsigned>;
        ///MEMHIZx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> memhizx{}; 
        namespace MemhizxValC{
        }
        ///MEMHOLDx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> memholdx{}; 
        namespace MemholdxValC{
        }
        ///MEMWAITx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> memwaitx{}; 
        namespace MemwaitxValC{
        }
        ///MEMSETx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> memsetx{}; 
        namespace MemsetxValC{
        }
    }
    namespace Nonepatt4{    ///<Attribute memory space timing register
          4
        using Addr = Register::Address<0xa00000ac,0x00000000,0,unsigned>;
        ///ATTHIZx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> atthizx{}; 
        namespace AtthizxValC{
        }
        ///ATTHOLDx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> attholdx{}; 
        namespace AttholdxValC{
        }
        ///ATTWAITx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> attwaitx{}; 
        namespace AttwaitxValC{
        }
        ///ATTSETx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> attsetx{}; 
        namespace AttsetxValC{
        }
    }
    namespace Nonepio4{    ///<I/O space timing register 4
        using Addr = Register::Address<0xa00000b0,0x00000000,0,unsigned>;
        ///IOHIZx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> iohizx{}; 
        namespace IohizxValC{
        }
        ///IOHOLDx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ioholdx{}; 
        namespace IoholdxValC{
        }
        ///IOWAITx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> iowaitx{}; 
        namespace IowaitxValC{
        }
        ///IOSETx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iosetx{}; 
        namespace IosetxValC{
        }
    }
    namespace Nonebwtr1{    ///<SRAM/NOR-Flash write timing registers
          1
        using Addr = Register::Address<0xa0000104,0xc00f0000,0,unsigned>;
        ///ACCMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        namespace AccmodValC{
        }
        ///DATLAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        namespace DatlatValC{
        }
        ///CLKDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        namespace ClkdivValC{
        }
        ///DATAST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        namespace DatastValC{
        }
        ///ADDHLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        namespace AddhldValC{
        }
        ///ADDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
        namespace AddsetValC{
        }
    }
    namespace Nonebwtr2{    ///<SRAM/NOR-Flash write timing registers
          2
        using Addr = Register::Address<0xa000010c,0xc00f0000,0,unsigned>;
        ///ACCMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        namespace AccmodValC{
        }
        ///DATLAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        namespace DatlatValC{
        }
        ///CLKDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        namespace ClkdivValC{
        }
        ///DATAST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        namespace DatastValC{
        }
        ///ADDHLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        namespace AddhldValC{
        }
        ///ADDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
        namespace AddsetValC{
        }
    }
    namespace Nonebwtr3{    ///<SRAM/NOR-Flash write timing registers
          3
        using Addr = Register::Address<0xa0000114,0xc00f0000,0,unsigned>;
        ///ACCMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        namespace AccmodValC{
        }
        ///DATLAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        namespace DatlatValC{
        }
        ///CLKDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        namespace ClkdivValC{
        }
        ///DATAST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        namespace DatastValC{
        }
        ///ADDHLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        namespace AddhldValC{
        }
        ///ADDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
        namespace AddsetValC{
        }
    }
    namespace Nonebwtr4{    ///<SRAM/NOR-Flash write timing registers
          4
        using Addr = Register::Address<0xa000011c,0xc00f0000,0,unsigned>;
        ///ACCMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> accmod{}; 
        namespace AccmodValC{
        }
        ///DATLAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> datlat{}; 
        namespace DatlatValC{
        }
        ///CLKDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        namespace ClkdivValC{
        }
        ///DATAST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> datast{}; 
        namespace DatastValC{
        }
        ///ADDHLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> addhld{}; 
        namespace AddhldValC{
        }
        ///ADDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> addset{}; 
        namespace AddsetValC{
        }
    }
}
