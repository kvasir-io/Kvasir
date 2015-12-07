#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Hash processor
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0x50060400,0xfffee003,0,unsigned>;
        ///Long key selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lkey{}; 
        namespace LkeyValC{
        }
        ///DIN not empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dinne{}; 
        namespace DinneValC{
        }
        ///Number of words already
              pushed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> nbw{}; 
        namespace NbwValC{
        }
        ///Algorithm selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> algo{}; 
        namespace AlgoValC{
        }
        ///Mode selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mode{}; 
        namespace ModeValC{
        }
        ///Data type selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> datatype{}; 
        namespace DatatypeValC{
        }
        ///DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dmae{}; 
        namespace DmaeValC{
        }
        ///Initialize message digest
              calculation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> init{}; 
        namespace InitValC{
        }
    }
    namespace Nonedin{    ///<data input register
        using Addr = Register::Address<0x50060404,0x00000000,0,unsigned>;
        ///Data input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> datain{}; 
        namespace DatainValC{
        }
    }
    namespace Nonestr{    ///<start register
        using Addr = Register::Address<0x50060408,0xfffffee0,0,unsigned>;
        ///Digest calculation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dcal{}; 
        namespace DcalValC{
        }
        ///Number of valid bits in the last word of
              the message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> nblw{}; 
        namespace NblwValC{
        }
    }
    namespace Nonehr0{    ///<digest registers
        using Addr = Register::Address<0x5006040c,0x00000000,0,unsigned>;
        ///H0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h0{}; 
        namespace H0ValC{
        }
    }
    namespace Nonehr1{    ///<digest registers
        using Addr = Register::Address<0x50060410,0x00000000,0,unsigned>;
        ///H1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h1{}; 
        namespace H1ValC{
        }
    }
    namespace Nonehr2{    ///<digest registers
        using Addr = Register::Address<0x50060414,0x00000000,0,unsigned>;
        ///H2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h2{}; 
        namespace H2ValC{
        }
    }
    namespace Nonehr3{    ///<digest registers
        using Addr = Register::Address<0x50060418,0x00000000,0,unsigned>;
        ///H3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h3{}; 
        namespace H3ValC{
        }
    }
    namespace Nonehr4{    ///<digest registers
        using Addr = Register::Address<0x5006041c,0x00000000,0,unsigned>;
        ///H4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h4{}; 
        namespace H4ValC{
        }
    }
    namespace Noneimr{    ///<interrupt enable register
        using Addr = Register::Address<0x50060420,0xfffffffc,0,unsigned>;
        ///Digest calculation completion interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcie{}; 
        namespace DcieValC{
        }
        ///Data input interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dinie{}; 
        namespace DinieValC{
        }
    }
    namespace Nonesr{    ///<status register
        using Addr = Register::Address<0x50060424,0xfffffff0,0,unsigned>;
        ///Busy bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> busy{}; 
        namespace BusyValC{
        }
        ///DMA Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmas{}; 
        namespace DmasValC{
        }
        ///Digest calculation completion interrupt
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcis{}; 
        namespace DcisValC{
        }
        ///Data input interrupt
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dinis{}; 
        namespace DinisValC{
        }
    }
    namespace Nonecsr0{    ///<context swap registers
        using Addr = Register::Address<0x500604f8,0x00000000,0,unsigned>;
        ///CSR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr0{}; 
        namespace Csr0ValC{
        }
    }
    namespace Nonecsr1{    ///<context swap registers
        using Addr = Register::Address<0x500604fc,0x00000000,0,unsigned>;
        ///CSR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr1{}; 
        namespace Csr1ValC{
        }
    }
    namespace Nonecsr2{    ///<context swap registers
        using Addr = Register::Address<0x50060500,0x00000000,0,unsigned>;
        ///CSR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr2{}; 
        namespace Csr2ValC{
        }
    }
    namespace Nonecsr3{    ///<context swap registers
        using Addr = Register::Address<0x50060504,0x00000000,0,unsigned>;
        ///CSR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr3{}; 
        namespace Csr3ValC{
        }
    }
    namespace Nonecsr4{    ///<context swap registers
        using Addr = Register::Address<0x50060508,0x00000000,0,unsigned>;
        ///CSR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr4{}; 
        namespace Csr4ValC{
        }
    }
    namespace Nonecsr5{    ///<context swap registers
        using Addr = Register::Address<0x5006050c,0x00000000,0,unsigned>;
        ///CSR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr5{}; 
        namespace Csr5ValC{
        }
    }
    namespace Nonecsr6{    ///<context swap registers
        using Addr = Register::Address<0x50060510,0x00000000,0,unsigned>;
        ///CSR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr6{}; 
        namespace Csr6ValC{
        }
    }
    namespace Nonecsr7{    ///<context swap registers
        using Addr = Register::Address<0x50060514,0x00000000,0,unsigned>;
        ///CSR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr7{}; 
        namespace Csr7ValC{
        }
    }
    namespace Nonecsr8{    ///<context swap registers
        using Addr = Register::Address<0x50060518,0x00000000,0,unsigned>;
        ///CSR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr8{}; 
        namespace Csr8ValC{
        }
    }
    namespace Nonecsr9{    ///<context swap registers
        using Addr = Register::Address<0x5006051c,0x00000000,0,unsigned>;
        ///CSR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr9{}; 
        namespace Csr9ValC{
        }
    }
    namespace Nonecsr10{    ///<context swap registers
        using Addr = Register::Address<0x50060520,0x00000000,0,unsigned>;
        ///CSR10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr10{}; 
        namespace Csr10ValC{
        }
    }
    namespace Nonecsr11{    ///<context swap registers
        using Addr = Register::Address<0x50060524,0x00000000,0,unsigned>;
        ///CSR11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr11{}; 
        namespace Csr11ValC{
        }
    }
    namespace Nonecsr12{    ///<context swap registers
        using Addr = Register::Address<0x50060528,0x00000000,0,unsigned>;
        ///CSR12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr12{}; 
        namespace Csr12ValC{
        }
    }
    namespace Nonecsr13{    ///<context swap registers
        using Addr = Register::Address<0x5006052c,0x00000000,0,unsigned>;
        ///CSR13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr13{}; 
        namespace Csr13ValC{
        }
    }
    namespace Nonecsr14{    ///<context swap registers
        using Addr = Register::Address<0x50060530,0x00000000,0,unsigned>;
        ///CSR14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr14{}; 
        namespace Csr14ValC{
        }
    }
    namespace Nonecsr15{    ///<context swap registers
        using Addr = Register::Address<0x50060534,0x00000000,0,unsigned>;
        ///CSR15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr15{}; 
        namespace Csr15ValC{
        }
    }
    namespace Nonecsr16{    ///<context swap registers
        using Addr = Register::Address<0x50060538,0x00000000,0,unsigned>;
        ///CSR16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr16{}; 
        namespace Csr16ValC{
        }
    }
    namespace Nonecsr17{    ///<context swap registers
        using Addr = Register::Address<0x5006053c,0x00000000,0,unsigned>;
        ///CSR17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr17{}; 
        namespace Csr17ValC{
        }
    }
    namespace Nonecsr18{    ///<context swap registers
        using Addr = Register::Address<0x50060540,0x00000000,0,unsigned>;
        ///CSR18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr18{}; 
        namespace Csr18ValC{
        }
    }
    namespace Nonecsr19{    ///<context swap registers
        using Addr = Register::Address<0x50060544,0x00000000,0,unsigned>;
        ///CSR19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr19{}; 
        namespace Csr19ValC{
        }
    }
    namespace Nonecsr20{    ///<context swap registers
        using Addr = Register::Address<0x50060548,0x00000000,0,unsigned>;
        ///CSR20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr20{}; 
        namespace Csr20ValC{
        }
    }
    namespace Nonecsr21{    ///<context swap registers
        using Addr = Register::Address<0x5006054c,0x00000000,0,unsigned>;
        ///CSR21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr21{}; 
        namespace Csr21ValC{
        }
    }
    namespace Nonecsr22{    ///<context swap registers
        using Addr = Register::Address<0x50060550,0x00000000,0,unsigned>;
        ///CSR22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr22{}; 
        namespace Csr22ValC{
        }
    }
    namespace Nonecsr23{    ///<context swap registers
        using Addr = Register::Address<0x50060554,0x00000000,0,unsigned>;
        ///CSR23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr23{}; 
        namespace Csr23ValC{
        }
    }
    namespace Nonecsr24{    ///<context swap registers
        using Addr = Register::Address<0x50060558,0x00000000,0,unsigned>;
        ///CSR24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr24{}; 
        namespace Csr24ValC{
        }
    }
    namespace Nonecsr25{    ///<context swap registers
        using Addr = Register::Address<0x5006055c,0x00000000,0,unsigned>;
        ///CSR25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr25{}; 
        namespace Csr25ValC{
        }
    }
    namespace Nonecsr26{    ///<context swap registers
        using Addr = Register::Address<0x50060560,0x00000000,0,unsigned>;
        ///CSR26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr26{}; 
        namespace Csr26ValC{
        }
    }
    namespace Nonecsr27{    ///<context swap registers
        using Addr = Register::Address<0x50060564,0x00000000,0,unsigned>;
        ///CSR27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr27{}; 
        namespace Csr27ValC{
        }
    }
    namespace Nonecsr28{    ///<context swap registers
        using Addr = Register::Address<0x50060568,0x00000000,0,unsigned>;
        ///CSR28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr28{}; 
        namespace Csr28ValC{
        }
    }
    namespace Nonecsr29{    ///<context swap registers
        using Addr = Register::Address<0x5006056c,0x00000000,0,unsigned>;
        ///CSR29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr29{}; 
        namespace Csr29ValC{
        }
    }
    namespace Nonecsr30{    ///<context swap registers
        using Addr = Register::Address<0x50060570,0x00000000,0,unsigned>;
        ///CSR30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr30{}; 
        namespace Csr30ValC{
        }
    }
    namespace Nonecsr31{    ///<context swap registers
        using Addr = Register::Address<0x50060574,0x00000000,0,unsigned>;
        ///CSR31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr31{}; 
        namespace Csr31ValC{
        }
    }
    namespace Nonecsr32{    ///<context swap registers
        using Addr = Register::Address<0x50060578,0x00000000,0,unsigned>;
        ///CSR32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr32{}; 
        namespace Csr32ValC{
        }
    }
    namespace Nonecsr33{    ///<context swap registers
        using Addr = Register::Address<0x5006057c,0x00000000,0,unsigned>;
        ///CSR33
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr33{}; 
        namespace Csr33ValC{
        }
    }
    namespace Nonecsr34{    ///<context swap registers
        using Addr = Register::Address<0x50060580,0x00000000,0,unsigned>;
        ///CSR34
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr34{}; 
        namespace Csr34ValC{
        }
    }
    namespace Nonecsr35{    ///<context swap registers
        using Addr = Register::Address<0x50060584,0x00000000,0,unsigned>;
        ///CSR35
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr35{}; 
        namespace Csr35ValC{
        }
    }
    namespace Nonecsr36{    ///<context swap registers
        using Addr = Register::Address<0x50060588,0x00000000,0,unsigned>;
        ///CSR36
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr36{}; 
        namespace Csr36ValC{
        }
    }
    namespace Nonecsr37{    ///<context swap registers
        using Addr = Register::Address<0x5006058c,0x00000000,0,unsigned>;
        ///CSR37
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr37{}; 
        namespace Csr37ValC{
        }
    }
    namespace Nonecsr38{    ///<context swap registers
        using Addr = Register::Address<0x50060590,0x00000000,0,unsigned>;
        ///CSR38
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr38{}; 
        namespace Csr38ValC{
        }
    }
    namespace Nonecsr39{    ///<context swap registers
        using Addr = Register::Address<0x50060594,0x00000000,0,unsigned>;
        ///CSR39
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr39{}; 
        namespace Csr39ValC{
        }
    }
    namespace Nonecsr40{    ///<context swap registers
        using Addr = Register::Address<0x50060598,0x00000000,0,unsigned>;
        ///CSR40
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr40{}; 
        namespace Csr40ValC{
        }
    }
    namespace Nonecsr41{    ///<context swap registers
        using Addr = Register::Address<0x5006059c,0x00000000,0,unsigned>;
        ///CSR41
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr41{}; 
        namespace Csr41ValC{
        }
    }
    namespace Nonecsr42{    ///<context swap registers
        using Addr = Register::Address<0x500605a0,0x00000000,0,unsigned>;
        ///CSR42
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr42{}; 
        namespace Csr42ValC{
        }
    }
    namespace Nonecsr43{    ///<context swap registers
        using Addr = Register::Address<0x500605a4,0x00000000,0,unsigned>;
        ///CSR43
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr43{}; 
        namespace Csr43ValC{
        }
    }
    namespace Nonecsr44{    ///<context swap registers
        using Addr = Register::Address<0x500605a8,0x00000000,0,unsigned>;
        ///CSR44
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr44{}; 
        namespace Csr44ValC{
        }
    }
    namespace Nonecsr45{    ///<context swap registers
        using Addr = Register::Address<0x500605ac,0x00000000,0,unsigned>;
        ///CSR45
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr45{}; 
        namespace Csr45ValC{
        }
    }
    namespace Nonecsr46{    ///<context swap registers
        using Addr = Register::Address<0x500605b0,0x00000000,0,unsigned>;
        ///CSR46
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr46{}; 
        namespace Csr46ValC{
        }
    }
    namespace Nonecsr47{    ///<context swap registers
        using Addr = Register::Address<0x500605b4,0x00000000,0,unsigned>;
        ///CSR47
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr47{}; 
        namespace Csr47ValC{
        }
    }
    namespace Nonecsr48{    ///<context swap registers
        using Addr = Register::Address<0x500605b8,0x00000000,0,unsigned>;
        ///CSR48
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr48{}; 
        namespace Csr48ValC{
        }
    }
    namespace Nonecsr49{    ///<context swap registers
        using Addr = Register::Address<0x500605bc,0x00000000,0,unsigned>;
        ///CSR49
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr49{}; 
        namespace Csr49ValC{
        }
    }
    namespace Nonecsr50{    ///<context swap registers
        using Addr = Register::Address<0x500605c0,0x00000000,0,unsigned>;
        ///CSR50
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr50{}; 
        namespace Csr50ValC{
        }
    }
}
