#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//DMA Controller
    namespace DmacIntstatus{    ///<DMAC Interrupt Status Register
        using Addr = Register::Address<0x40000000,0xfffffffc,0x00000000,unsigned>;
        ///INTSTATUS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intstatus0{}; 
        ///INTSTATUS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intstatus1{}; 
    }
    namespace DmacInttcstatus{    ///<DMAC Interrupt Terminal Count Status Register
        using Addr = Register::Address<0x40000004,0xfffffffc,0x00000000,unsigned>;
        ///INTTCSTATUS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> inttcstatus0{}; 
        ///INTTCSTATUS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> inttcstatus1{}; 
    }
    namespace DmacInttcclear{    ///<DMAC Interrupt Terminal Count Clear Register
        using Addr = Register::Address<0x40000008,0xfffffffc,0x00000000,unsigned>;
        ///INTTCCLEAR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> inttcclear0{}; 
        ///INTTCCLEAR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> inttcclear1{}; 
    }
    namespace DmacInterrorstatus{    ///<DMAC Interrupt Error Status Register
        using Addr = Register::Address<0x4000000c,0xfffffffc,0x00000000,unsigned>;
        ///INTERRSTATUS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> interrstatus0{}; 
        ///INTERRSTATUS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> interrstatus1{}; 
    }
    namespace DmacInterrclr{    ///<DMAC Interrupt Error Clear Register
        using Addr = Register::Address<0x40000010,0xfffffffc,0x00000000,unsigned>;
        ///INTERRCLR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> interrclr0{}; 
        ///INTERRCLR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> interrclr1{}; 
    }
    namespace DmacRawinttcstatus{    ///<DMAC Raw Interrupt Terminal Count Status Register
        using Addr = Register::Address<0x40000014,0xfffffffc,0x00000000,unsigned>;
        ///RAWINTTCS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rawinttcs0{}; 
        ///RAWINTTCS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rawinttcs1{}; 
    }
    namespace DmacRawinterrorstatus{    ///<DMAC Raw Error Interrupt Status Register
        using Addr = Register::Address<0x40000018,0xfffffffc,0x00000000,unsigned>;
        ///RAWINTERRS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rawinterrs0{}; 
        ///RAWINTERRS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rawinterrs1{}; 
    }
    namespace DmacEnbldchns{    ///<DMAC Enabled Channel Register
        using Addr = Register::Address<0x4000001c,0xfffffffc,0x00000000,unsigned>;
        ///ENABLEDCH0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> enabledch0{}; 
        ///ENABLEDCH1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> enabledch1{}; 
    }
    namespace DmacSoftbreq{    ///<DMAC Software Burst Request Register
        using Addr = Register::Address<0x40000020,0xffff0000,0x00000000,unsigned>;
        ///SOFTBREQ0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> softbreq0{}; 
        ///SOFTBREQ1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> softbreq1{}; 
        ///SOFTBREQ2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> softbreq2{}; 
        ///SOFTBREQ3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> softbreq3{}; 
        ///SOFTBREQ4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> softbreq4{}; 
        ///SOFTBREQ5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> softbreq5{}; 
        ///SOFTBREQ6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> softbreq6{}; 
        ///SOFTBREQ7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> softbreq7{}; 
        ///SOFTBREQ8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> softbreq8{}; 
        ///SOFTBREQ9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> softbreq9{}; 
        ///SOFTBREQ10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> softbreq10{}; 
        ///SOFTBREQ11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> softbreq11{}; 
        ///SOFTBREQ12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> softbreq12{}; 
        ///SOFTBREQ13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> softbreq13{}; 
        ///SOFTBREQ14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> softbreq14{}; 
        ///SOFTBREQ15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> softbreq15{}; 
    }
    namespace DmacSoftsreq{    ///<DMAC Software Single Request Register
        using Addr = Register::Address<0x40000024,0xffff03ff,0x00000000,unsigned>;
        ///SOFTSREQ10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> softsreq10{}; 
        ///SOFTSREQ11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> softsreq11{}; 
        ///SOFTSREQ12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> softsreq12{}; 
        ///SOFTSREQ13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> softsreq13{}; 
        ///SOFTSREQ14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> softsreq14{}; 
        ///SOFTSREQ15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> softsreq15{}; 
    }
    namespace DmacConfiguration{    ///<DMAC Configuration Register
        using Addr = Register::Address<0x40000030,0xfffffffc,0x00000000,unsigned>;
        ///E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> e{}; 
        ///M
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> m{}; 
    }
    namespace DmacC0srcaddr{    ///<DMAC Channel0 Source Address Register
        using Addr = Register::Address<0x40000100,0x00000000,0x00000000,unsigned>;
        ///SRCADDR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> srcaddr{}; 
    }
    namespace DmacC0destaddr{    ///<DMAC Channel0 Destination Address Register
        using Addr = Register::Address<0x40000104,0x00000000,0x00000000,unsigned>;
        ///DESTADDR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> destaddr{}; 
    }
    namespace DmacC0lli{    ///<DMAC Channel0 Linked List Item Register
        using Addr = Register::Address<0x40000108,0x00000003,0x00000000,unsigned>;
        ///LLI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> lli{}; 
    }
    namespace DmacC0control{    ///<DMAC Channel0 Control Register
        using Addr = Register::Address<0x4000010c,0x73000000,0x00000000,unsigned>;
        ///TRANSFERSIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> transfersize{}; 
        ///SBSIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> sbsize{}; 
        ///DBSIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> dbsize{}; 
        ///SWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> swidth{}; 
        ///DWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> dwidth{}; 
        ///SI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> si{}; 
        ///DI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> di{}; 
        ///I
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i{}; 
    }
    namespace DmacC0configuration{    ///<DMAC Channel0 Configuration Register
        using Addr = Register::Address<0x40000110,0xfff80420,0x00000000,unsigned>;
        ///E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> e{}; 
        ///SRCPERIPHERAL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> srcperipheral{}; 
        ///DESTPERIPHERAL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> destperipheral{}; 
        ///FLOWCNTRL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,unsigned> flowcntrl{}; 
        ///IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ie{}; 
        ///ITC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> itc{}; 
        ///LOCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lock{}; 
        ///ACTIVE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> active{}; 
        ///HALT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> halt{}; 
    }
    namespace DmacC1srcaddr{    ///<DMAC Channel1 Source Address Register
        using Addr = Register::Address<0x40000120,0x00000000,0x00000000,unsigned>;
        ///SRCADDR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> srcaddr{}; 
    }
    namespace DmacC1destaddr{    ///<DMAC Channel1 Destination Address Register
        using Addr = Register::Address<0x40000124,0x00000000,0x00000000,unsigned>;
        ///DESTADDR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> destaddr{}; 
    }
    namespace DmacC1lli{    ///<DMAC Channel1 Linked List Item Register
        using Addr = Register::Address<0x40000128,0x00000001,0x00000000,unsigned>;
        ///LLI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> lli{}; 
    }
    namespace DmacC1control{    ///<DMAC Channel1 Control Register
        using Addr = Register::Address<0x4000012c,0x73000000,0x00000000,unsigned>;
        ///TRANSFERSIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> transfersize{}; 
        ///SBSIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> sbsize{}; 
        ///DBSIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> dbsize{}; 
        ///SWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> swidth{}; 
        ///DWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> dwidth{}; 
        ///SI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> si{}; 
        ///DI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> di{}; 
        ///I
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i{}; 
    }
    namespace DmacC1configuration{    ///<DMAC Channel1 Configuration Register
        using Addr = Register::Address<0x40000130,0xfff80420,0x00000000,unsigned>;
        ///E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> e{}; 
        ///SRCPERIPHERAL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> srcperipheral{}; 
        ///DESTPERIPHERAL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> destperipheral{}; 
        ///FLOWCNTRL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,unsigned> flowcntrl{}; 
        ///IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ie{}; 
        ///ITC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> itc{}; 
        ///LOCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lock{}; 
        ///ACTIVE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> active{}; 
        ///HALT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> halt{}; 
    }
}
