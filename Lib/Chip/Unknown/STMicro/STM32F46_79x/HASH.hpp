#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Hash processor
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0x50060400,0xfffac003,0,unsigned>;
        ///Initialize message digest
              calculation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> init{}; 
        ///DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dmae{}; 
        ///Data type selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> datatype{}; 
        ///Mode selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mode{}; 
        ///Algorithm selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> algo0{}; 
        ///Number of words already
              pushed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> nbw{}; 
        ///DIN not empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dinne{}; 
        ///Multiple DMA Transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mdmat{}; 
        ///Long key selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lkey{}; 
        ///ALGO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> algo1{}; 
    }
    namespace Nonedin{    ///<data input register
        using Addr = Register::Address<0x50060404,0x00000000,0,unsigned>;
        ///Data input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> datain{}; 
    }
    namespace Nonestr{    ///<start register
        using Addr = Register::Address<0x50060408,0xfffffee0,0,unsigned>;
        ///Digest calculation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dcal{}; 
        ///Number of valid bits in the last word of
              the message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> nblw{}; 
    }
    namespace Nonehr0{    ///<digest registers
        using Addr = Register::Address<0x5006040c,0x00000000,0,unsigned>;
        ///H0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h0{}; 
    }
    namespace Nonehr1{    ///<digest registers
        using Addr = Register::Address<0x50060410,0x00000000,0,unsigned>;
        ///H1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h1{}; 
    }
    namespace Nonehr2{    ///<digest registers
        using Addr = Register::Address<0x50060414,0x00000000,0,unsigned>;
        ///H2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h2{}; 
    }
    namespace Nonehr3{    ///<digest registers
        using Addr = Register::Address<0x50060418,0x00000000,0,unsigned>;
        ///H3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h3{}; 
    }
    namespace Nonehr4{    ///<digest registers
        using Addr = Register::Address<0x5006041c,0x00000000,0,unsigned>;
        ///H4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h4{}; 
    }
    namespace Noneimr{    ///<interrupt enable register
        using Addr = Register::Address<0x50060420,0xfffffffc,0,unsigned>;
        ///Digest calculation completion interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcie{}; 
        ///Data input interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dinie{}; 
    }
    namespace Nonesr{    ///<status register
        using Addr = Register::Address<0x50060424,0xfffffff0,0,unsigned>;
        ///Busy bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> busy{}; 
        ///DMA Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmas{}; 
        ///Digest calculation completion interrupt
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcis{}; 
        ///Data input interrupt
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dinis{}; 
    }
    namespace Nonecsr0{    ///<context swap registers
        using Addr = Register::Address<0x500604f8,0x00000000,0,unsigned>;
        ///CSR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr0{}; 
    }
    namespace Nonecsr1{    ///<context swap registers
        using Addr = Register::Address<0x500604fc,0x00000000,0,unsigned>;
        ///CSR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr1{}; 
    }
    namespace Nonecsr2{    ///<context swap registers
        using Addr = Register::Address<0x50060500,0x00000000,0,unsigned>;
        ///CSR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr2{}; 
    }
    namespace Nonecsr3{    ///<context swap registers
        using Addr = Register::Address<0x50060504,0x00000000,0,unsigned>;
        ///CSR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr3{}; 
    }
    namespace Nonecsr4{    ///<context swap registers
        using Addr = Register::Address<0x50060508,0x00000000,0,unsigned>;
        ///CSR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr4{}; 
    }
    namespace Nonecsr5{    ///<context swap registers
        using Addr = Register::Address<0x5006050c,0x00000000,0,unsigned>;
        ///CSR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr5{}; 
    }
    namespace Nonecsr6{    ///<context swap registers
        using Addr = Register::Address<0x50060510,0x00000000,0,unsigned>;
        ///CSR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr6{}; 
    }
    namespace Nonecsr7{    ///<context swap registers
        using Addr = Register::Address<0x50060514,0x00000000,0,unsigned>;
        ///CSR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr7{}; 
    }
    namespace Nonecsr8{    ///<context swap registers
        using Addr = Register::Address<0x50060518,0x00000000,0,unsigned>;
        ///CSR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr8{}; 
    }
    namespace Nonecsr9{    ///<context swap registers
        using Addr = Register::Address<0x5006051c,0x00000000,0,unsigned>;
        ///CSR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr9{}; 
    }
    namespace Nonecsr10{    ///<context swap registers
        using Addr = Register::Address<0x50060520,0x00000000,0,unsigned>;
        ///CSR10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr10{}; 
    }
    namespace Nonecsr11{    ///<context swap registers
        using Addr = Register::Address<0x50060524,0x00000000,0,unsigned>;
        ///CSR11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr11{}; 
    }
    namespace Nonecsr12{    ///<context swap registers
        using Addr = Register::Address<0x50060528,0x00000000,0,unsigned>;
        ///CSR12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr12{}; 
    }
    namespace Nonecsr13{    ///<context swap registers
        using Addr = Register::Address<0x5006052c,0x00000000,0,unsigned>;
        ///CSR13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr13{}; 
    }
    namespace Nonecsr14{    ///<context swap registers
        using Addr = Register::Address<0x50060530,0x00000000,0,unsigned>;
        ///CSR14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr14{}; 
    }
    namespace Nonecsr15{    ///<context swap registers
        using Addr = Register::Address<0x50060534,0x00000000,0,unsigned>;
        ///CSR15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr15{}; 
    }
    namespace Nonecsr16{    ///<context swap registers
        using Addr = Register::Address<0x50060538,0x00000000,0,unsigned>;
        ///CSR16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr16{}; 
    }
    namespace Nonecsr17{    ///<context swap registers
        using Addr = Register::Address<0x5006053c,0x00000000,0,unsigned>;
        ///CSR17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr17{}; 
    }
    namespace Nonecsr18{    ///<context swap registers
        using Addr = Register::Address<0x50060540,0x00000000,0,unsigned>;
        ///CSR18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr18{}; 
    }
    namespace Nonecsr19{    ///<context swap registers
        using Addr = Register::Address<0x50060544,0x00000000,0,unsigned>;
        ///CSR19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr19{}; 
    }
    namespace Nonecsr20{    ///<context swap registers
        using Addr = Register::Address<0x50060548,0x00000000,0,unsigned>;
        ///CSR20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr20{}; 
    }
    namespace Nonecsr21{    ///<context swap registers
        using Addr = Register::Address<0x5006054c,0x00000000,0,unsigned>;
        ///CSR21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr21{}; 
    }
    namespace Nonecsr22{    ///<context swap registers
        using Addr = Register::Address<0x50060550,0x00000000,0,unsigned>;
        ///CSR22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr22{}; 
    }
    namespace Nonecsr23{    ///<context swap registers
        using Addr = Register::Address<0x50060554,0x00000000,0,unsigned>;
        ///CSR23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr23{}; 
    }
    namespace Nonecsr24{    ///<context swap registers
        using Addr = Register::Address<0x50060558,0x00000000,0,unsigned>;
        ///CSR24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr24{}; 
    }
    namespace Nonecsr25{    ///<context swap registers
        using Addr = Register::Address<0x5006055c,0x00000000,0,unsigned>;
        ///CSR25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr25{}; 
    }
    namespace Nonecsr26{    ///<context swap registers
        using Addr = Register::Address<0x50060560,0x00000000,0,unsigned>;
        ///CSR26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr26{}; 
    }
    namespace Nonecsr27{    ///<context swap registers
        using Addr = Register::Address<0x50060564,0x00000000,0,unsigned>;
        ///CSR27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr27{}; 
    }
    namespace Nonecsr28{    ///<context swap registers
        using Addr = Register::Address<0x50060568,0x00000000,0,unsigned>;
        ///CSR28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr28{}; 
    }
    namespace Nonecsr29{    ///<context swap registers
        using Addr = Register::Address<0x5006056c,0x00000000,0,unsigned>;
        ///CSR29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr29{}; 
    }
    namespace Nonecsr30{    ///<context swap registers
        using Addr = Register::Address<0x50060570,0x00000000,0,unsigned>;
        ///CSR30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr30{}; 
    }
    namespace Nonecsr31{    ///<context swap registers
        using Addr = Register::Address<0x50060574,0x00000000,0,unsigned>;
        ///CSR31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr31{}; 
    }
    namespace Nonecsr32{    ///<context swap registers
        using Addr = Register::Address<0x50060578,0x00000000,0,unsigned>;
        ///CSR32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr32{}; 
    }
    namespace Nonecsr33{    ///<context swap registers
        using Addr = Register::Address<0x5006057c,0x00000000,0,unsigned>;
        ///CSR33
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr33{}; 
    }
    namespace Nonecsr34{    ///<context swap registers
        using Addr = Register::Address<0x50060580,0x00000000,0,unsigned>;
        ///CSR34
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr34{}; 
    }
    namespace Nonecsr35{    ///<context swap registers
        using Addr = Register::Address<0x50060584,0x00000000,0,unsigned>;
        ///CSR35
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr35{}; 
    }
    namespace Nonecsr36{    ///<context swap registers
        using Addr = Register::Address<0x50060588,0x00000000,0,unsigned>;
        ///CSR36
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr36{}; 
    }
    namespace Nonecsr37{    ///<context swap registers
        using Addr = Register::Address<0x5006058c,0x00000000,0,unsigned>;
        ///CSR37
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr37{}; 
    }
    namespace Nonecsr38{    ///<context swap registers
        using Addr = Register::Address<0x50060590,0x00000000,0,unsigned>;
        ///CSR38
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr38{}; 
    }
    namespace Nonecsr39{    ///<context swap registers
        using Addr = Register::Address<0x50060594,0x00000000,0,unsigned>;
        ///CSR39
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr39{}; 
    }
    namespace Nonecsr40{    ///<context swap registers
        using Addr = Register::Address<0x50060598,0x00000000,0,unsigned>;
        ///CSR40
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr40{}; 
    }
    namespace Nonecsr41{    ///<context swap registers
        using Addr = Register::Address<0x5006059c,0x00000000,0,unsigned>;
        ///CSR41
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr41{}; 
    }
    namespace Nonecsr42{    ///<context swap registers
        using Addr = Register::Address<0x500605a0,0x00000000,0,unsigned>;
        ///CSR42
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr42{}; 
    }
    namespace Nonecsr43{    ///<context swap registers
        using Addr = Register::Address<0x500605a4,0x00000000,0,unsigned>;
        ///CSR43
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr43{}; 
    }
    namespace Nonecsr44{    ///<context swap registers
        using Addr = Register::Address<0x500605a8,0x00000000,0,unsigned>;
        ///CSR44
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr44{}; 
    }
    namespace Nonecsr45{    ///<context swap registers
        using Addr = Register::Address<0x500605ac,0x00000000,0,unsigned>;
        ///CSR45
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr45{}; 
    }
    namespace Nonecsr46{    ///<context swap registers
        using Addr = Register::Address<0x500605b0,0x00000000,0,unsigned>;
        ///CSR46
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr46{}; 
    }
    namespace Nonecsr47{    ///<context swap registers
        using Addr = Register::Address<0x500605b4,0x00000000,0,unsigned>;
        ///CSR47
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr47{}; 
    }
    namespace Nonecsr48{    ///<context swap registers
        using Addr = Register::Address<0x500605b8,0x00000000,0,unsigned>;
        ///CSR48
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr48{}; 
    }
    namespace Nonecsr49{    ///<context swap registers
        using Addr = Register::Address<0x500605bc,0x00000000,0,unsigned>;
        ///CSR49
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr49{}; 
    }
    namespace Nonecsr50{    ///<context swap registers
        using Addr = Register::Address<0x500605c0,0x00000000,0,unsigned>;
        ///CSR50
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr50{}; 
    }
    namespace Nonecsr51{    ///<context swap registers
        using Addr = Register::Address<0x500605c4,0x00000000,0,unsigned>;
        ///CSR51
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr51{}; 
    }
    namespace Nonecsr52{    ///<context swap registers
        using Addr = Register::Address<0x500605c8,0x00000000,0,unsigned>;
        ///CSR52
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr52{}; 
    }
    namespace Nonecsr53{    ///<context swap registers
        using Addr = Register::Address<0x500605cc,0x00000000,0,unsigned>;
        ///CSR53
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr53{}; 
    }
    namespace NonehashHr0{    ///<HASH digest register
        using Addr = Register::Address<0x50060710,0x00000000,0,unsigned>;
        ///H0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h0{}; 
    }
    namespace NonehashHr1{    ///<read-only
        using Addr = Register::Address<0x50060714,0x00000000,0,unsigned>;
        ///H1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h1{}; 
    }
    namespace NonehashHr2{    ///<read-only
        using Addr = Register::Address<0x50060718,0x00000000,0,unsigned>;
        ///H2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h2{}; 
    }
    namespace NonehashHr3{    ///<read-only
        using Addr = Register::Address<0x5006071c,0x00000000,0,unsigned>;
        ///H3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h3{}; 
    }
    namespace NonehashHr4{    ///<read-only
        using Addr = Register::Address<0x50060720,0x00000000,0,unsigned>;
        ///H4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h4{}; 
    }
    namespace NonehashHr5{    ///<read-only
        using Addr = Register::Address<0x50060724,0x00000000,0,unsigned>;
        ///H5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h5{}; 
    }
    namespace NonehashHr6{    ///<read-only
        using Addr = Register::Address<0x50060728,0x00000000,0,unsigned>;
        ///H6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h6{}; 
    }
    namespace NonehashHr7{    ///<read-only
        using Addr = Register::Address<0x5006072c,0x00000000,0,unsigned>;
        ///H7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h7{}; 
    }
}
