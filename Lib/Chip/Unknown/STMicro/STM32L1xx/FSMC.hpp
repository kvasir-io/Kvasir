#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flexible static memory controller
    namespace Nonebcr1{    ///<BCR1
        using Addr = Register::Address<0xa0000000,0xfff70080,0,unsigned>;
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
    namespace Nonebtr1{    ///<BTR1
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
    namespace Nonebcr2{    ///<BCR2
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
    namespace Nonebtr2{    ///<BTR2
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
    namespace Nonebcr3{    ///<BCR3
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
    namespace Nonebtr3{    ///<BTR3
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
    namespace Nonebcr4{    ///<BCR4
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
    namespace Nonebtr4{    ///<BTR4
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
    namespace Nonebwtr1{    ///<BWTR1
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
    namespace Nonebwtr2{    ///<BWTR2
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
    namespace Nonebwtr3{    ///<BWTR3
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
    namespace Nonebwtr4{    ///<BWTR4
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
