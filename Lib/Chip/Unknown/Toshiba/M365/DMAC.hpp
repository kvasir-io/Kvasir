#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//DMA Controller
    namespace Noneintstatus{    ///<DMAC Interrupt Status Register
        using Addr = Register::Address<0x40000000,0xfffffffc,0,unsigned>;
        ///INTSTATUS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> intstatus0{}; 
        namespace Intstatus0ValC{
        }
        ///INTSTATUS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> intstatus1{}; 
        namespace Intstatus1ValC{
        }
    }
    namespace Noneinttcstatus{    ///<DMAC Interrupt Terminal Count Status Register
        using Addr = Register::Address<0x40000004,0xfffffffc,0,unsigned>;
        ///INTTCSTATUS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inttcstatus0{}; 
        namespace Inttcstatus0ValC{
        }
        ///INTTCSTATUS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inttcstatus1{}; 
        namespace Inttcstatus1ValC{
        }
    }
    namespace Noneinttcclear{    ///<DMAC Interrupt Terminal Count Clear Register
        using Addr = Register::Address<0x40000008,0xfffffffc,0,unsigned>;
        ///INTTCCLEAR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inttcclear0{}; 
        namespace Inttcclear0ValC{
        }
        ///INTTCCLEAR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inttcclear1{}; 
        namespace Inttcclear1ValC{
        }
    }
    namespace Noneinterrorstatus{    ///<DMAC Interrupt Error Status Register
        using Addr = Register::Address<0x4000000c,0xfffffffc,0,unsigned>;
        ///INTERRSTATUS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> interrstatus0{}; 
        namespace Interrstatus0ValC{
        }
        ///INTERRSTATUS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> interrstatus1{}; 
        namespace Interrstatus1ValC{
        }
    }
    namespace Noneinterrclr{    ///<DMAC Interrupt Error Clear Register
        using Addr = Register::Address<0x40000010,0xfffffffc,0,unsigned>;
        ///INTERRCLR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> interrclr0{}; 
        namespace Interrclr0ValC{
        }
        ///INTERRCLR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> interrclr1{}; 
        namespace Interrclr1ValC{
        }
    }
    namespace Nonerawinttcstatus{    ///<DMAC Raw Interrupt Terminal Count Status Register
        using Addr = Register::Address<0x40000014,0xfffffffc,0,unsigned>;
        ///RAWINTTCS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rawinttcs0{}; 
        namespace Rawinttcs0ValC{
        }
        ///RAWINTTCS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rawinttcs1{}; 
        namespace Rawinttcs1ValC{
        }
    }
    namespace Nonerawinterrorstatus{    ///<DMAC Raw Error Interrupt Status Register
        using Addr = Register::Address<0x40000018,0xfffffffc,0,unsigned>;
        ///RAWINTERRS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rawinterrs0{}; 
        namespace Rawinterrs0ValC{
        }
        ///RAWINTERRS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rawinterrs1{}; 
        namespace Rawinterrs1ValC{
        }
    }
    namespace Noneenbldchns{    ///<DMAC Enabled Channel Register
        using Addr = Register::Address<0x4000001c,0xfffffffc,0,unsigned>;
        ///ENABLEDCH0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enabledch0{}; 
        namespace Enabledch0ValC{
        }
        ///ENABLEDCH1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enabledch1{}; 
        namespace Enabledch1ValC{
        }
    }
    namespace Nonesoftbreq{    ///<DMAC Software Burst Request Register
        using Addr = Register::Address<0x40000020,0xffff0000,0,unsigned>;
        ///SOFTBREQ0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> softbreq0{}; 
        namespace Softbreq0ValC{
        }
        ///SOFTBREQ1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> softbreq1{}; 
        namespace Softbreq1ValC{
        }
        ///SOFTBREQ2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> softbreq2{}; 
        namespace Softbreq2ValC{
        }
        ///SOFTBREQ3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> softbreq3{}; 
        namespace Softbreq3ValC{
        }
        ///SOFTBREQ4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> softbreq4{}; 
        namespace Softbreq4ValC{
        }
        ///SOFTBREQ5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> softbreq5{}; 
        namespace Softbreq5ValC{
        }
        ///SOFTBREQ6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> softbreq6{}; 
        namespace Softbreq6ValC{
        }
        ///SOFTBREQ7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> softbreq7{}; 
        namespace Softbreq7ValC{
        }
        ///SOFTBREQ8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> softbreq8{}; 
        namespace Softbreq8ValC{
        }
        ///SOFTBREQ9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> softbreq9{}; 
        namespace Softbreq9ValC{
        }
        ///SOFTBREQ10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> softbreq10{}; 
        namespace Softbreq10ValC{
        }
        ///SOFTBREQ11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> softbreq11{}; 
        namespace Softbreq11ValC{
        }
        ///SOFTBREQ12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> softbreq12{}; 
        namespace Softbreq12ValC{
        }
        ///SOFTBREQ13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> softbreq13{}; 
        namespace Softbreq13ValC{
        }
        ///SOFTBREQ14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> softbreq14{}; 
        namespace Softbreq14ValC{
        }
        ///SOFTBREQ15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> softbreq15{}; 
        namespace Softbreq15ValC{
        }
    }
    namespace Nonesoftsreq{    ///<DMAC Software Single Request Register
        using Addr = Register::Address<0x40000024,0xffff03ff,0,unsigned>;
        ///SOFTSREQ10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> softsreq10{}; 
        namespace Softsreq10ValC{
        }
        ///SOFTSREQ11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> softsreq11{}; 
        namespace Softsreq11ValC{
        }
        ///SOFTSREQ12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> softsreq12{}; 
        namespace Softsreq12ValC{
        }
        ///SOFTSREQ13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> softsreq13{}; 
        namespace Softsreq13ValC{
        }
        ///SOFTSREQ14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> softsreq14{}; 
        namespace Softsreq14ValC{
        }
        ///SOFTSREQ15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> softsreq15{}; 
        namespace Softsreq15ValC{
        }
    }
    namespace Noneconfiguration{    ///<DMAC Configuration Register
        using Addr = Register::Address<0x40000030,0xfffffffc,0,unsigned>;
        ///E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> e{}; 
        namespace EValC{
        }
        ///M
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> m{}; 
        namespace MValC{
        }
    }
    namespace Nonec0srcaddr{    ///<DMAC Channel0 Source Address Register
        using Addr = Register::Address<0x40000100,0x00000000,0,unsigned>;
        ///SRCADDR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> srcaddr{}; 
        namespace SrcaddrValC{
        }
    }
    namespace Nonec0destaddr{    ///<DMAC Channel0 Destination Address Register
        using Addr = Register::Address<0x40000104,0x00000000,0,unsigned>;
        ///DESTADDR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> destaddr{}; 
        namespace DestaddrValC{
        }
    }
    namespace Nonec0lli{    ///<DMAC Channel0 Linked List Item Register
        using Addr = Register::Address<0x40000108,0x00000003,0,unsigned>;
        ///LLI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> lli{}; 
        namespace LliValC{
        }
    }
    namespace Nonec0control{    ///<DMAC Channel0 Control Register
        using Addr = Register::Address<0x4000010c,0x73000000,0,unsigned>;
        ///TRANSFERSIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> transfersize{}; 
        namespace TransfersizeValC{
        }
        ///SBSIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> sbsize{}; 
        namespace SbsizeValC{
        }
        ///DBSIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> dbsize{}; 
        namespace DbsizeValC{
        }
        ///SWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> swidth{}; 
        namespace SwidthValC{
        }
        ///DWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> dwidth{}; 
        namespace DwidthValC{
        }
        ///SI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> si{}; 
        namespace SiValC{
        }
        ///DI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> di{}; 
        namespace DiValC{
        }
        ///I
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i{}; 
        namespace IValC{
        }
    }
    namespace Nonec0configuration{    ///<DMAC Channel0 Configuration Register
        using Addr = Register::Address<0x40000110,0xfff80420,0,unsigned>;
        ///E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> e{}; 
        namespace EValC{
        }
        ///SRCPERIPHERAL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> srcperipheral{}; 
        namespace SrcperipheralValC{
        }
        ///DESTPERIPHERAL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> destperipheral{}; 
        namespace DestperipheralValC{
        }
        ///FLOWCNTRL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,unsigned> flowcntrl{}; 
        namespace FlowcntrlValC{
        }
        ///IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ie{}; 
        namespace IeValC{
        }
        ///ITC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> itc{}; 
        namespace ItcValC{
        }
        ///LOCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lock{}; 
        namespace LockValC{
        }
        ///ACTIVE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> active{}; 
        namespace ActiveValC{
        }
        ///HALT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> halt{}; 
        namespace HaltValC{
        }
    }
    namespace Nonec1srcaddr{    ///<DMAC Channel1 Source Address Register
        using Addr = Register::Address<0x40000120,0x00000000,0,unsigned>;
        ///SRCADDR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> srcaddr{}; 
        namespace SrcaddrValC{
        }
    }
    namespace Nonec1destaddr{    ///<DMAC Channel1 Destination Address Register
        using Addr = Register::Address<0x40000124,0x00000000,0,unsigned>;
        ///DESTADDR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> destaddr{}; 
        namespace DestaddrValC{
        }
    }
    namespace Nonec1lli{    ///<DMAC Channel1 Linked List Item Register
        using Addr = Register::Address<0x40000128,0x00000001,0,unsigned>;
        ///LLI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> lli{}; 
        namespace LliValC{
        }
    }
    namespace Nonec1control{    ///<DMAC Channel1 Control Register
        using Addr = Register::Address<0x4000012c,0x73000000,0,unsigned>;
        ///TRANSFERSIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> transfersize{}; 
        namespace TransfersizeValC{
        }
        ///SBSIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> sbsize{}; 
        namespace SbsizeValC{
        }
        ///DBSIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> dbsize{}; 
        namespace DbsizeValC{
        }
        ///SWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> swidth{}; 
        namespace SwidthValC{
        }
        ///DWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> dwidth{}; 
        namespace DwidthValC{
        }
        ///SI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> si{}; 
        namespace SiValC{
        }
        ///DI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> di{}; 
        namespace DiValC{
        }
        ///I
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> i{}; 
        namespace IValC{
        }
    }
    namespace Nonec1configuration{    ///<DMAC Channel1 Configuration Register
        using Addr = Register::Address<0x40000130,0xfff80420,0,unsigned>;
        ///E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> e{}; 
        namespace EValC{
        }
        ///SRCPERIPHERAL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> srcperipheral{}; 
        namespace SrcperipheralValC{
        }
        ///DESTPERIPHERAL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> destperipheral{}; 
        namespace DestperipheralValC{
        }
        ///FLOWCNTRL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,unsigned> flowcntrl{}; 
        namespace FlowcntrlValC{
        }
        ///IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ie{}; 
        namespace IeValC{
        }
        ///ITC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> itc{}; 
        namespace ItcValC{
        }
        ///LOCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lock{}; 
        namespace LockValC{
        }
        ///ACTIVE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> active{}; 
        namespace ActiveValC{
        }
        ///HALT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> halt{}; 
        namespace HaltValC{
        }
    }
}
