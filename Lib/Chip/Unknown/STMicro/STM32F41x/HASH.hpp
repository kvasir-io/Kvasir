#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Hash processor
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0x50060400,0xfffee003,0,unsigned>;
        ///Long key selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lkey{}; 
        ///DIN not empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dinne{}; 
        ///Number of words already
              pushed
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> nbw{}; 
        ///Algorithm selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> algo{}; 
        ///Mode selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mode{}; 
        ///Data type selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> datatype{}; 
        ///DMA enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dmae{}; 
        ///Initialize message digest
              calculation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> init{}; 
    }
    namespace Nonedin{    ///<data input register
        using Addr = Register::Address<0x50060404,0x00000000,0,unsigned>;
        ///Data input
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> datain{}; 
    }
    namespace Nonestr{    ///<start register
        using Addr = Register::Address<0x50060408,0xfffffee0,0,unsigned>;
        ///Digest calculation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dcal{}; 
        ///Number of valid bits in the last word of
              the message
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> nblw{}; 
    }
    namespace Nonehr0{    ///<digest registers
        using Addr = Register::Address<0x5006040c,0x00000000,0,unsigned>;
        ///H0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h0{}; 
    }
    namespace Nonehr1{    ///<digest registers
        using Addr = Register::Address<0x50060410,0x00000000,0,unsigned>;
        ///H1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h1{}; 
    }
    namespace Nonehr2{    ///<digest registers
        using Addr = Register::Address<0x50060414,0x00000000,0,unsigned>;
        ///H2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h2{}; 
    }
    namespace Nonehr3{    ///<digest registers
        using Addr = Register::Address<0x50060418,0x00000000,0,unsigned>;
        ///H3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h3{}; 
    }
    namespace Nonehr4{    ///<digest registers
        using Addr = Register::Address<0x5006041c,0x00000000,0,unsigned>;
        ///H4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h4{}; 
    }
    namespace Noneimr{    ///<interrupt enable register
        using Addr = Register::Address<0x50060420,0xfffffffc,0,unsigned>;
        ///Digest calculation completion interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcie{}; 
        ///Data input interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dinie{}; 
    }
    namespace Nonesr{    ///<status register
        using Addr = Register::Address<0x50060424,0xfffffff0,0,unsigned>;
        ///Busy bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> busy{}; 
        ///DMA Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmas{}; 
        ///Digest calculation completion interrupt
              status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcis{}; 
        ///Data input interrupt
              status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dinis{}; 
    }
    namespace Nonecsr0{    ///<context swap registers
        using Addr = Register::Address<0x500604f8,0x00000000,0,unsigned>;
        ///CSR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr0{}; 
    }
    namespace Nonecsr1{    ///<context swap registers
        using Addr = Register::Address<0x500604fc,0x00000000,0,unsigned>;
        ///CSR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr1{}; 
    }
    namespace Nonecsr2{    ///<context swap registers
        using Addr = Register::Address<0x50060500,0x00000000,0,unsigned>;
        ///CSR2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr2{}; 
    }
    namespace Nonecsr3{    ///<context swap registers
        using Addr = Register::Address<0x50060504,0x00000000,0,unsigned>;
        ///CSR3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr3{}; 
    }
    namespace Nonecsr4{    ///<context swap registers
        using Addr = Register::Address<0x50060508,0x00000000,0,unsigned>;
        ///CSR4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr4{}; 
    }
    namespace Nonecsr5{    ///<context swap registers
        using Addr = Register::Address<0x5006050c,0x00000000,0,unsigned>;
        ///CSR5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr5{}; 
    }
    namespace Nonecsr6{    ///<context swap registers
        using Addr = Register::Address<0x50060510,0x00000000,0,unsigned>;
        ///CSR6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr6{}; 
    }
    namespace Nonecsr7{    ///<context swap registers
        using Addr = Register::Address<0x50060514,0x00000000,0,unsigned>;
        ///CSR7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr7{}; 
    }
    namespace Nonecsr8{    ///<context swap registers
        using Addr = Register::Address<0x50060518,0x00000000,0,unsigned>;
        ///CSR8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr8{}; 
    }
    namespace Nonecsr9{    ///<context swap registers
        using Addr = Register::Address<0x5006051c,0x00000000,0,unsigned>;
        ///CSR9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr9{}; 
    }
    namespace Nonecsr10{    ///<context swap registers
        using Addr = Register::Address<0x50060520,0x00000000,0,unsigned>;
        ///CSR10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr10{}; 
    }
    namespace Nonecsr11{    ///<context swap registers
        using Addr = Register::Address<0x50060524,0x00000000,0,unsigned>;
        ///CSR11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr11{}; 
    }
    namespace Nonecsr12{    ///<context swap registers
        using Addr = Register::Address<0x50060528,0x00000000,0,unsigned>;
        ///CSR12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr12{}; 
    }
    namespace Nonecsr13{    ///<context swap registers
        using Addr = Register::Address<0x5006052c,0x00000000,0,unsigned>;
        ///CSR13
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr13{}; 
    }
    namespace Nonecsr14{    ///<context swap registers
        using Addr = Register::Address<0x50060530,0x00000000,0,unsigned>;
        ///CSR14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr14{}; 
    }
    namespace Nonecsr15{    ///<context swap registers
        using Addr = Register::Address<0x50060534,0x00000000,0,unsigned>;
        ///CSR15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr15{}; 
    }
    namespace Nonecsr16{    ///<context swap registers
        using Addr = Register::Address<0x50060538,0x00000000,0,unsigned>;
        ///CSR16
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr16{}; 
    }
    namespace Nonecsr17{    ///<context swap registers
        using Addr = Register::Address<0x5006053c,0x00000000,0,unsigned>;
        ///CSR17
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr17{}; 
    }
    namespace Nonecsr18{    ///<context swap registers
        using Addr = Register::Address<0x50060540,0x00000000,0,unsigned>;
        ///CSR18
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr18{}; 
    }
    namespace Nonecsr19{    ///<context swap registers
        using Addr = Register::Address<0x50060544,0x00000000,0,unsigned>;
        ///CSR19
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr19{}; 
    }
    namespace Nonecsr20{    ///<context swap registers
        using Addr = Register::Address<0x50060548,0x00000000,0,unsigned>;
        ///CSR20
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr20{}; 
    }
    namespace Nonecsr21{    ///<context swap registers
        using Addr = Register::Address<0x5006054c,0x00000000,0,unsigned>;
        ///CSR21
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr21{}; 
    }
    namespace Nonecsr22{    ///<context swap registers
        using Addr = Register::Address<0x50060550,0x00000000,0,unsigned>;
        ///CSR22
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr22{}; 
    }
    namespace Nonecsr23{    ///<context swap registers
        using Addr = Register::Address<0x50060554,0x00000000,0,unsigned>;
        ///CSR23
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr23{}; 
    }
    namespace Nonecsr24{    ///<context swap registers
        using Addr = Register::Address<0x50060558,0x00000000,0,unsigned>;
        ///CSR24
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr24{}; 
    }
    namespace Nonecsr25{    ///<context swap registers
        using Addr = Register::Address<0x5006055c,0x00000000,0,unsigned>;
        ///CSR25
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr25{}; 
    }
    namespace Nonecsr26{    ///<context swap registers
        using Addr = Register::Address<0x50060560,0x00000000,0,unsigned>;
        ///CSR26
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr26{}; 
    }
    namespace Nonecsr27{    ///<context swap registers
        using Addr = Register::Address<0x50060564,0x00000000,0,unsigned>;
        ///CSR27
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr27{}; 
    }
    namespace Nonecsr28{    ///<context swap registers
        using Addr = Register::Address<0x50060568,0x00000000,0,unsigned>;
        ///CSR28
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr28{}; 
    }
    namespace Nonecsr29{    ///<context swap registers
        using Addr = Register::Address<0x5006056c,0x00000000,0,unsigned>;
        ///CSR29
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr29{}; 
    }
    namespace Nonecsr30{    ///<context swap registers
        using Addr = Register::Address<0x50060570,0x00000000,0,unsigned>;
        ///CSR30
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr30{}; 
    }
    namespace Nonecsr31{    ///<context swap registers
        using Addr = Register::Address<0x50060574,0x00000000,0,unsigned>;
        ///CSR31
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr31{}; 
    }
    namespace Nonecsr32{    ///<context swap registers
        using Addr = Register::Address<0x50060578,0x00000000,0,unsigned>;
        ///CSR32
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr32{}; 
    }
    namespace Nonecsr33{    ///<context swap registers
        using Addr = Register::Address<0x5006057c,0x00000000,0,unsigned>;
        ///CSR33
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr33{}; 
    }
    namespace Nonecsr34{    ///<context swap registers
        using Addr = Register::Address<0x50060580,0x00000000,0,unsigned>;
        ///CSR34
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr34{}; 
    }
    namespace Nonecsr35{    ///<context swap registers
        using Addr = Register::Address<0x50060584,0x00000000,0,unsigned>;
        ///CSR35
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr35{}; 
    }
    namespace Nonecsr36{    ///<context swap registers
        using Addr = Register::Address<0x50060588,0x00000000,0,unsigned>;
        ///CSR36
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr36{}; 
    }
    namespace Nonecsr37{    ///<context swap registers
        using Addr = Register::Address<0x5006058c,0x00000000,0,unsigned>;
        ///CSR37
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr37{}; 
    }
    namespace Nonecsr38{    ///<context swap registers
        using Addr = Register::Address<0x50060590,0x00000000,0,unsigned>;
        ///CSR38
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr38{}; 
    }
    namespace Nonecsr39{    ///<context swap registers
        using Addr = Register::Address<0x50060594,0x00000000,0,unsigned>;
        ///CSR39
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr39{}; 
    }
    namespace Nonecsr40{    ///<context swap registers
        using Addr = Register::Address<0x50060598,0x00000000,0,unsigned>;
        ///CSR40
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr40{}; 
    }
    namespace Nonecsr41{    ///<context swap registers
        using Addr = Register::Address<0x5006059c,0x00000000,0,unsigned>;
        ///CSR41
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr41{}; 
    }
    namespace Nonecsr42{    ///<context swap registers
        using Addr = Register::Address<0x500605a0,0x00000000,0,unsigned>;
        ///CSR42
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr42{}; 
    }
    namespace Nonecsr43{    ///<context swap registers
        using Addr = Register::Address<0x500605a4,0x00000000,0,unsigned>;
        ///CSR43
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr43{}; 
    }
    namespace Nonecsr44{    ///<context swap registers
        using Addr = Register::Address<0x500605a8,0x00000000,0,unsigned>;
        ///CSR44
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr44{}; 
    }
    namespace Nonecsr45{    ///<context swap registers
        using Addr = Register::Address<0x500605ac,0x00000000,0,unsigned>;
        ///CSR45
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr45{}; 
    }
    namespace Nonecsr46{    ///<context swap registers
        using Addr = Register::Address<0x500605b0,0x00000000,0,unsigned>;
        ///CSR46
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr46{}; 
    }
    namespace Nonecsr47{    ///<context swap registers
        using Addr = Register::Address<0x500605b4,0x00000000,0,unsigned>;
        ///CSR47
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr47{}; 
    }
    namespace Nonecsr48{    ///<context swap registers
        using Addr = Register::Address<0x500605b8,0x00000000,0,unsigned>;
        ///CSR48
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr48{}; 
    }
    namespace Nonecsr49{    ///<context swap registers
        using Addr = Register::Address<0x500605bc,0x00000000,0,unsigned>;
        ///CSR49
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr49{}; 
    }
    namespace Nonecsr50{    ///<context swap registers
        using Addr = Register::Address<0x500605c0,0x00000000,0,unsigned>;
        ///CSR50
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr50{}; 
    }
}
