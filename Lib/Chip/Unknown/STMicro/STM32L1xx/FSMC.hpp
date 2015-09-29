#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flexible static memory controller
    namespace Nonebcr1{    ///<BCR1
        using Addr = Register::Address<0xa0000000,0xfff70080,0,unsigned>;
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
    namespace Nonebtr1{    ///<BTR1
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
    namespace Nonebcr2{    ///<BCR2
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
    namespace Nonebtr2{    ///<BTR2
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
    namespace Nonebcr3{    ///<BCR3
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
    namespace Nonebtr3{    ///<BTR3
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
    namespace Nonebcr4{    ///<BCR4
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
    namespace Nonebtr4{    ///<BTR4
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
    namespace Nonebwtr1{    ///<BWTR1
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
    namespace Nonebwtr2{    ///<BWTR2
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
    namespace Nonebwtr3{    ///<BWTR3
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
    namespace Nonebwtr4{    ///<BWTR4
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
