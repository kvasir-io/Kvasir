#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Hash processor
    namespace HashCr{    ///<control register
        using Addr = Register::Address<0x50060400,0xfffee003,0x00000000,unsigned>;
        ///Long key selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lkey{}; 
        ///DIN not empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dinne{}; 
        ///Number of words already              pushed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nbw{}; 
        ///Algorithm selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> algo{}; 
        ///Mode selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mode{}; 
        ///Data type selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> datatype{}; 
        ///DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dmae{}; 
        ///Initialize message digest              calculation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> init{}; 
    }
    namespace HashDin{    ///<data input register
        using Addr = Register::Address<0x50060404,0x00000000,0x00000000,unsigned>;
        ///Data input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> datain{}; 
    }
    namespace HashStr{    ///<start register
        using Addr = Register::Address<0x50060408,0xfffffee0,0x00000000,unsigned>;
        ///Digest calculation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dcal{}; 
        ///Number of valid bits in the last word of              the message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> nblw{}; 
    }
    namespace HashHr0{    ///<digest registers
        using Addr = Register::Address<0x5006040c,0x00000000,0x00000000,unsigned>;
        ///H0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h0{}; 
    }
    namespace HashHr1{    ///<digest registers
        using Addr = Register::Address<0x50060410,0x00000000,0x00000000,unsigned>;
        ///H1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h1{}; 
    }
    namespace HashHr2{    ///<digest registers
        using Addr = Register::Address<0x50060414,0x00000000,0x00000000,unsigned>;
        ///H2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h2{}; 
    }
    namespace HashHr3{    ///<digest registers
        using Addr = Register::Address<0x50060418,0x00000000,0x00000000,unsigned>;
        ///H3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h3{}; 
    }
    namespace HashHr4{    ///<digest registers
        using Addr = Register::Address<0x5006041c,0x00000000,0x00000000,unsigned>;
        ///H4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> h4{}; 
    }
    namespace HashImr{    ///<interrupt enable register
        using Addr = Register::Address<0x50060420,0xfffffffc,0x00000000,unsigned>;
        ///Digest calculation completion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcie{}; 
        ///Data input interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dinie{}; 
    }
    namespace HashSr{    ///<status register
        using Addr = Register::Address<0x50060424,0xfffffff0,0x00000000,unsigned>;
        ///Busy bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///DMA Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmas{}; 
        ///Digest calculation completion interrupt              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcis{}; 
        ///Data input interrupt              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dinis{}; 
    }
    namespace HashCsr0{    ///<context swap registers
        using Addr = Register::Address<0x500604f8,0x00000000,0x00000000,unsigned>;
        ///CSR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr0{}; 
    }
    namespace HashCsr1{    ///<context swap registers
        using Addr = Register::Address<0x500604fc,0x00000000,0x00000000,unsigned>;
        ///CSR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr1{}; 
    }
    namespace HashCsr2{    ///<context swap registers
        using Addr = Register::Address<0x50060500,0x00000000,0x00000000,unsigned>;
        ///CSR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr2{}; 
    }
    namespace HashCsr3{    ///<context swap registers
        using Addr = Register::Address<0x50060504,0x00000000,0x00000000,unsigned>;
        ///CSR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr3{}; 
    }
    namespace HashCsr4{    ///<context swap registers
        using Addr = Register::Address<0x50060508,0x00000000,0x00000000,unsigned>;
        ///CSR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr4{}; 
    }
    namespace HashCsr5{    ///<context swap registers
        using Addr = Register::Address<0x5006050c,0x00000000,0x00000000,unsigned>;
        ///CSR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr5{}; 
    }
    namespace HashCsr6{    ///<context swap registers
        using Addr = Register::Address<0x50060510,0x00000000,0x00000000,unsigned>;
        ///CSR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr6{}; 
    }
    namespace HashCsr7{    ///<context swap registers
        using Addr = Register::Address<0x50060514,0x00000000,0x00000000,unsigned>;
        ///CSR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr7{}; 
    }
    namespace HashCsr8{    ///<context swap registers
        using Addr = Register::Address<0x50060518,0x00000000,0x00000000,unsigned>;
        ///CSR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr8{}; 
    }
    namespace HashCsr9{    ///<context swap registers
        using Addr = Register::Address<0x5006051c,0x00000000,0x00000000,unsigned>;
        ///CSR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr9{}; 
    }
    namespace HashCsr10{    ///<context swap registers
        using Addr = Register::Address<0x50060520,0x00000000,0x00000000,unsigned>;
        ///CSR10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr10{}; 
    }
    namespace HashCsr11{    ///<context swap registers
        using Addr = Register::Address<0x50060524,0x00000000,0x00000000,unsigned>;
        ///CSR11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr11{}; 
    }
    namespace HashCsr12{    ///<context swap registers
        using Addr = Register::Address<0x50060528,0x00000000,0x00000000,unsigned>;
        ///CSR12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr12{}; 
    }
    namespace HashCsr13{    ///<context swap registers
        using Addr = Register::Address<0x5006052c,0x00000000,0x00000000,unsigned>;
        ///CSR13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr13{}; 
    }
    namespace HashCsr14{    ///<context swap registers
        using Addr = Register::Address<0x50060530,0x00000000,0x00000000,unsigned>;
        ///CSR14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr14{}; 
    }
    namespace HashCsr15{    ///<context swap registers
        using Addr = Register::Address<0x50060534,0x00000000,0x00000000,unsigned>;
        ///CSR15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr15{}; 
    }
    namespace HashCsr16{    ///<context swap registers
        using Addr = Register::Address<0x50060538,0x00000000,0x00000000,unsigned>;
        ///CSR16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr16{}; 
    }
    namespace HashCsr17{    ///<context swap registers
        using Addr = Register::Address<0x5006053c,0x00000000,0x00000000,unsigned>;
        ///CSR17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr17{}; 
    }
    namespace HashCsr18{    ///<context swap registers
        using Addr = Register::Address<0x50060540,0x00000000,0x00000000,unsigned>;
        ///CSR18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr18{}; 
    }
    namespace HashCsr19{    ///<context swap registers
        using Addr = Register::Address<0x50060544,0x00000000,0x00000000,unsigned>;
        ///CSR19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr19{}; 
    }
    namespace HashCsr20{    ///<context swap registers
        using Addr = Register::Address<0x50060548,0x00000000,0x00000000,unsigned>;
        ///CSR20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr20{}; 
    }
    namespace HashCsr21{    ///<context swap registers
        using Addr = Register::Address<0x5006054c,0x00000000,0x00000000,unsigned>;
        ///CSR21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr21{}; 
    }
    namespace HashCsr22{    ///<context swap registers
        using Addr = Register::Address<0x50060550,0x00000000,0x00000000,unsigned>;
        ///CSR22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr22{}; 
    }
    namespace HashCsr23{    ///<context swap registers
        using Addr = Register::Address<0x50060554,0x00000000,0x00000000,unsigned>;
        ///CSR23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr23{}; 
    }
    namespace HashCsr24{    ///<context swap registers
        using Addr = Register::Address<0x50060558,0x00000000,0x00000000,unsigned>;
        ///CSR24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr24{}; 
    }
    namespace HashCsr25{    ///<context swap registers
        using Addr = Register::Address<0x5006055c,0x00000000,0x00000000,unsigned>;
        ///CSR25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr25{}; 
    }
    namespace HashCsr26{    ///<context swap registers
        using Addr = Register::Address<0x50060560,0x00000000,0x00000000,unsigned>;
        ///CSR26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr26{}; 
    }
    namespace HashCsr27{    ///<context swap registers
        using Addr = Register::Address<0x50060564,0x00000000,0x00000000,unsigned>;
        ///CSR27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr27{}; 
    }
    namespace HashCsr28{    ///<context swap registers
        using Addr = Register::Address<0x50060568,0x00000000,0x00000000,unsigned>;
        ///CSR28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr28{}; 
    }
    namespace HashCsr29{    ///<context swap registers
        using Addr = Register::Address<0x5006056c,0x00000000,0x00000000,unsigned>;
        ///CSR29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr29{}; 
    }
    namespace HashCsr30{    ///<context swap registers
        using Addr = Register::Address<0x50060570,0x00000000,0x00000000,unsigned>;
        ///CSR30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr30{}; 
    }
    namespace HashCsr31{    ///<context swap registers
        using Addr = Register::Address<0x50060574,0x00000000,0x00000000,unsigned>;
        ///CSR31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr31{}; 
    }
    namespace HashCsr32{    ///<context swap registers
        using Addr = Register::Address<0x50060578,0x00000000,0x00000000,unsigned>;
        ///CSR32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr32{}; 
    }
    namespace HashCsr33{    ///<context swap registers
        using Addr = Register::Address<0x5006057c,0x00000000,0x00000000,unsigned>;
        ///CSR33
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr33{}; 
    }
    namespace HashCsr34{    ///<context swap registers
        using Addr = Register::Address<0x50060580,0x00000000,0x00000000,unsigned>;
        ///CSR34
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr34{}; 
    }
    namespace HashCsr35{    ///<context swap registers
        using Addr = Register::Address<0x50060584,0x00000000,0x00000000,unsigned>;
        ///CSR35
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr35{}; 
    }
    namespace HashCsr36{    ///<context swap registers
        using Addr = Register::Address<0x50060588,0x00000000,0x00000000,unsigned>;
        ///CSR36
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr36{}; 
    }
    namespace HashCsr37{    ///<context swap registers
        using Addr = Register::Address<0x5006058c,0x00000000,0x00000000,unsigned>;
        ///CSR37
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr37{}; 
    }
    namespace HashCsr38{    ///<context swap registers
        using Addr = Register::Address<0x50060590,0x00000000,0x00000000,unsigned>;
        ///CSR38
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr38{}; 
    }
    namespace HashCsr39{    ///<context swap registers
        using Addr = Register::Address<0x50060594,0x00000000,0x00000000,unsigned>;
        ///CSR39
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr39{}; 
    }
    namespace HashCsr40{    ///<context swap registers
        using Addr = Register::Address<0x50060598,0x00000000,0x00000000,unsigned>;
        ///CSR40
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr40{}; 
    }
    namespace HashCsr41{    ///<context swap registers
        using Addr = Register::Address<0x5006059c,0x00000000,0x00000000,unsigned>;
        ///CSR41
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr41{}; 
    }
    namespace HashCsr42{    ///<context swap registers
        using Addr = Register::Address<0x500605a0,0x00000000,0x00000000,unsigned>;
        ///CSR42
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr42{}; 
    }
    namespace HashCsr43{    ///<context swap registers
        using Addr = Register::Address<0x500605a4,0x00000000,0x00000000,unsigned>;
        ///CSR43
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr43{}; 
    }
    namespace HashCsr44{    ///<context swap registers
        using Addr = Register::Address<0x500605a8,0x00000000,0x00000000,unsigned>;
        ///CSR44
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr44{}; 
    }
    namespace HashCsr45{    ///<context swap registers
        using Addr = Register::Address<0x500605ac,0x00000000,0x00000000,unsigned>;
        ///CSR45
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr45{}; 
    }
    namespace HashCsr46{    ///<context swap registers
        using Addr = Register::Address<0x500605b0,0x00000000,0x00000000,unsigned>;
        ///CSR46
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr46{}; 
    }
    namespace HashCsr47{    ///<context swap registers
        using Addr = Register::Address<0x500605b4,0x00000000,0x00000000,unsigned>;
        ///CSR47
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr47{}; 
    }
    namespace HashCsr48{    ///<context swap registers
        using Addr = Register::Address<0x500605b8,0x00000000,0x00000000,unsigned>;
        ///CSR48
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr48{}; 
    }
    namespace HashCsr49{    ///<context swap registers
        using Addr = Register::Address<0x500605bc,0x00000000,0x00000000,unsigned>;
        ///CSR49
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr49{}; 
    }
    namespace HashCsr50{    ///<context swap registers
        using Addr = Register::Address<0x500605c0,0x00000000,0x00000000,unsigned>;
        ///CSR50
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csr50{}; 
    }
}
