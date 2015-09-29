#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//DMA Controller
    namespace Noneintstatus{    ///<DMAC Interrupt Status Register
        using Addr = Register::Address<0x40000000,0xfffffffc,0,unsigned>;
        ///INTSTATUS0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> intstatus0{}; 
        ///INTSTATUS1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> intstatus1{}; 
    }
    namespace Noneinttcstatus{    ///<DMAC Interrupt Terminal Count Status Register
        using Addr = Register::Address<0x40000004,0xfffffffc,0,unsigned>;
        ///INTTCSTATUS0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inttcstatus0{}; 
        ///INTTCSTATUS1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inttcstatus1{}; 
    }
    namespace Noneinttcclear{    ///<DMAC Interrupt Terminal Count Clear Register
        using Addr = Register::Address<0x40000008,0xfffffffc,0,unsigned>;
        ///INTTCCLEAR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inttcclear0{}; 
        ///INTTCCLEAR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inttcclear1{}; 
    }
    namespace Noneinterrorstatus{    ///<DMAC Interrupt Error Status Register
        using Addr = Register::Address<0x4000000c,0xfffffffc,0,unsigned>;
        ///INTERRSTATUS0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> interrstatus0{}; 
        ///INTERRSTATUS1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> interrstatus1{}; 
    }
    namespace Noneinterrclr{    ///<DMAC Interrupt Error Clear Register
        using Addr = Register::Address<0x40000010,0xfffffffc,0,unsigned>;
        ///INTERRCLR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> interrclr0{}; 
        ///INTERRCLR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> interrclr1{}; 
    }
    namespace Nonerawinttcstatus{    ///<DMAC Raw Interrupt Terminal Count Status Register
        using Addr = Register::Address<0x40000014,0xfffffffc,0,unsigned>;
        ///RAWINTTCS0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rawinttcs0{}; 
        ///RAWINTTCS1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rawinttcs1{}; 
    }
    namespace Nonerawinterrorstatus{    ///<DMAC Raw Error Interrupt Status Register
        using Addr = Register::Address<0x40000018,0xfffffffc,0,unsigned>;
        ///RAWINTERRS0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rawinterrs0{}; 
        ///RAWINTERRS1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rawinterrs1{}; 
    }
    namespace Noneenbldchns{    ///<DMAC Enabled Channel Register
        using Addr = Register::Address<0x4000001c,0xfffffffc,0,unsigned>;
        ///ENABLEDCH0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enabledch0{}; 
        ///ENABLEDCH1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enabledch1{}; 
    }
    namespace Nonesoftbreq{    ///<DMAC Software Burst Request Register
        using Addr = Register::Address<0x40000020,0xffff0000,0,unsigned>;
        ///SOFTBREQ0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> softbreq0{}; 
        ///SOFTBREQ1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> softbreq1{}; 
        ///SOFTBREQ2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> softbreq2{}; 
        ///SOFTBREQ3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> softbreq3{}; 
        ///SOFTBREQ4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> softbreq4{}; 
        ///SOFTBREQ5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> softbreq5{}; 
        ///SOFTBREQ6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> softbreq6{}; 
        ///SOFTBREQ7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> softbreq7{}; 
        ///SOFTBREQ8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> softbreq8{}; 
        ///SOFTBREQ9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> softbreq9{}; 
        ///SOFTBREQ10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> softbreq10{}; 
        ///SOFTBREQ11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> softbreq11{}; 
        ///SOFTBREQ12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> softbreq12{}; 
        ///SOFTBREQ13
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> softbreq13{}; 
        ///SOFTBREQ14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> softbreq14{}; 
        ///SOFTBREQ15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> softbreq15{}; 
    }
    namespace Nonesoftsreq{    ///<DMAC Software Single Request Register
        using Addr = Register::Address<0x40000024,0xffff03ff,0,unsigned>;
        ///SOFTSREQ10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> softsreq10{}; 
        ///SOFTSREQ11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> softsreq11{}; 
        ///SOFTSREQ12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> softsreq12{}; 
        ///SOFTSREQ13
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> softsreq13{}; 
        ///SOFTSREQ14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> softsreq14{}; 
        ///SOFTSREQ15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> softsreq15{}; 
    }
    namespace Noneconfiguration{    ///<DMAC Configuration Register
        using Addr = Register::Address<0x40000030,0xfffffffc,0,unsigned>;
        ///E
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> e{}; 
        ///M
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> m{}; 
    }
    namespace Nonec0srcaddr{    ///<DMAC Channel0 Source Address Register
        using Addr = Register::Address<0x40000100,0x00000000,0,unsigned>;
        ///SRCADDR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> srcaddr{}; 
    }
    namespace Nonec0destaddr{    ///<DMAC Channel0 Destination Address Register
        using Addr = Register::Address<0x40000104,0x00000000,0,unsigned>;
        ///DESTADDR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> destaddr{}; 
    }
    namespace Nonec0lli{    ///<DMAC Channel0 Linked List Item Register
        using Addr = Register::Address<0x40000108,0x00000003,0,unsigned>;
        ///LLI
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> lli{}; 
    }
    namespace Nonec0control{    ///<DMAC Channel0 Control Register
        using Addr = Register::Address<0x4000010c,0x73000000,0,unsigned>;
        ///TRANSFERSIZE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> transfersize{}; 
        ///SBSIZE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> sbsize{}; 
        ///DBSIZE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> dbsize{}; 
        ///SWIDTH
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> swidth{}; 
        ///DWIDTH
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> dwidth{}; 
        ///SI
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> si{}; 
        ///DI
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> di{}; 
        ///I
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i{}; 
    }
    namespace Nonec0configuration{    ///<DMAC Channel0 Configuration Register
        using Addr = Register::Address<0x40000110,0xfff80420,0,unsigned>;
        ///E
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> e{}; 
        ///SRCPERIPHERAL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> srcperipheral{}; 
        ///DESTPERIPHERAL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> destperipheral{}; 
        ///FLOWCNTRL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,unsigned> flowcntrl{}; 
        ///IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ie{}; 
        ///ITC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> itc{}; 
        ///LOCK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lock{}; 
        ///ACTIVE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> active{}; 
        ///HALT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> halt{}; 
    }
    namespace Nonec1srcaddr{    ///<DMAC Channel1 Source Address Register
        using Addr = Register::Address<0x40000120,0x00000000,0,unsigned>;
        ///SRCADDR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> srcaddr{}; 
    }
    namespace Nonec1destaddr{    ///<DMAC Channel1 Destination Address Register
        using Addr = Register::Address<0x40000124,0x00000000,0,unsigned>;
        ///DESTADDR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> destaddr{}; 
    }
    namespace Nonec1lli{    ///<DMAC Channel1 Linked List Item Register
        using Addr = Register::Address<0x40000128,0x00000001,0,unsigned>;
        ///LLI
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> lli{}; 
    }
    namespace Nonec1control{    ///<DMAC Channel1 Control Register
        using Addr = Register::Address<0x4000012c,0x73000000,0,unsigned>;
        ///TRANSFERSIZE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> transfersize{}; 
        ///SBSIZE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> sbsize{}; 
        ///DBSIZE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> dbsize{}; 
        ///SWIDTH
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> swidth{}; 
        ///DWIDTH
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> dwidth{}; 
        ///SI
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> si{}; 
        ///DI
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> di{}; 
        ///I
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i{}; 
    }
    namespace Nonec1configuration{    ///<DMAC Channel1 Configuration Register
        using Addr = Register::Address<0x40000130,0xfff80420,0,unsigned>;
        ///E
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> e{}; 
        ///SRCPERIPHERAL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> srcperipheral{}; 
        ///DESTPERIPHERAL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> destperipheral{}; 
        ///FLOWCNTRL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,unsigned> flowcntrl{}; 
        ///IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ie{}; 
        ///ITC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> itc{}; 
        ///LOCK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lock{}; 
        ///ACTIVE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> active{}; 
        ///HALT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> halt{}; 
    }
}
