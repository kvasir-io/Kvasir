#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x50060400,0xfffee003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> LKEY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DINNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> NBW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ALGO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DATATYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DMAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INIT; 
    }
    namespace Nonedin{
        using Addr = Register::Address<0x50060404,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATAIN; 
    }
    namespace Nonestr{
        using Addr = Register::Address<0x50060408,0xfffffee0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DCAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> NBLW; 
    }
    namespace Nonehr0{
        using Addr = Register::Address<0x5006040c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> H0; 
    }
    namespace Nonehr1{
        using Addr = Register::Address<0x50060410,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> H1; 
    }
    namespace Nonehr2{
        using Addr = Register::Address<0x50060414,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> H2; 
    }
    namespace Nonehr3{
        using Addr = Register::Address<0x50060418,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> H3; 
    }
    namespace Nonehr4{
        using Addr = Register::Address<0x5006041c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> H4; 
    }
    namespace Noneimr{
        using Addr = Register::Address<0x50060420,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DINIE; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x50060424,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DCIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DINIS; 
    }
    namespace Nonecsr0{
        using Addr = Register::Address<0x500604f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR0; 
    }
    namespace Nonecsr1{
        using Addr = Register::Address<0x500604fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR1; 
    }
    namespace Nonecsr2{
        using Addr = Register::Address<0x50060500,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR2; 
    }
    namespace Nonecsr3{
        using Addr = Register::Address<0x50060504,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR3; 
    }
    namespace Nonecsr4{
        using Addr = Register::Address<0x50060508,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR4; 
    }
    namespace Nonecsr5{
        using Addr = Register::Address<0x5006050c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR5; 
    }
    namespace Nonecsr6{
        using Addr = Register::Address<0x50060510,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR6; 
    }
    namespace Nonecsr7{
        using Addr = Register::Address<0x50060514,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR7; 
    }
    namespace Nonecsr8{
        using Addr = Register::Address<0x50060518,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR8; 
    }
    namespace Nonecsr9{
        using Addr = Register::Address<0x5006051c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR9; 
    }
    namespace Nonecsr10{
        using Addr = Register::Address<0x50060520,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR10; 
    }
    namespace Nonecsr11{
        using Addr = Register::Address<0x50060524,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR11; 
    }
    namespace Nonecsr12{
        using Addr = Register::Address<0x50060528,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR12; 
    }
    namespace Nonecsr13{
        using Addr = Register::Address<0x5006052c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR13; 
    }
    namespace Nonecsr14{
        using Addr = Register::Address<0x50060530,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR14; 
    }
    namespace Nonecsr15{
        using Addr = Register::Address<0x50060534,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR15; 
    }
    namespace Nonecsr16{
        using Addr = Register::Address<0x50060538,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR16; 
    }
    namespace Nonecsr17{
        using Addr = Register::Address<0x5006053c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR17; 
    }
    namespace Nonecsr18{
        using Addr = Register::Address<0x50060540,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR18; 
    }
    namespace Nonecsr19{
        using Addr = Register::Address<0x50060544,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR19; 
    }
    namespace Nonecsr20{
        using Addr = Register::Address<0x50060548,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR20; 
    }
    namespace Nonecsr21{
        using Addr = Register::Address<0x5006054c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR21; 
    }
    namespace Nonecsr22{
        using Addr = Register::Address<0x50060550,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR22; 
    }
    namespace Nonecsr23{
        using Addr = Register::Address<0x50060554,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR23; 
    }
    namespace Nonecsr24{
        using Addr = Register::Address<0x50060558,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR24; 
    }
    namespace Nonecsr25{
        using Addr = Register::Address<0x5006055c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR25; 
    }
    namespace Nonecsr26{
        using Addr = Register::Address<0x50060560,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR26; 
    }
    namespace Nonecsr27{
        using Addr = Register::Address<0x50060564,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR27; 
    }
    namespace Nonecsr28{
        using Addr = Register::Address<0x50060568,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR28; 
    }
    namespace Nonecsr29{
        using Addr = Register::Address<0x5006056c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR29; 
    }
    namespace Nonecsr30{
        using Addr = Register::Address<0x50060570,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR30; 
    }
    namespace Nonecsr31{
        using Addr = Register::Address<0x50060574,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR31; 
    }
    namespace Nonecsr32{
        using Addr = Register::Address<0x50060578,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR32; 
    }
    namespace Nonecsr33{
        using Addr = Register::Address<0x5006057c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR33; 
    }
    namespace Nonecsr34{
        using Addr = Register::Address<0x50060580,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR34; 
    }
    namespace Nonecsr35{
        using Addr = Register::Address<0x50060584,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR35; 
    }
    namespace Nonecsr36{
        using Addr = Register::Address<0x50060588,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR36; 
    }
    namespace Nonecsr37{
        using Addr = Register::Address<0x5006058c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR37; 
    }
    namespace Nonecsr38{
        using Addr = Register::Address<0x50060590,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR38; 
    }
    namespace Nonecsr39{
        using Addr = Register::Address<0x50060594,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR39; 
    }
    namespace Nonecsr40{
        using Addr = Register::Address<0x50060598,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR40; 
    }
    namespace Nonecsr41{
        using Addr = Register::Address<0x5006059c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR41; 
    }
    namespace Nonecsr42{
        using Addr = Register::Address<0x500605a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR42; 
    }
    namespace Nonecsr43{
        using Addr = Register::Address<0x500605a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR43; 
    }
    namespace Nonecsr44{
        using Addr = Register::Address<0x500605a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR44; 
    }
    namespace Nonecsr45{
        using Addr = Register::Address<0x500605ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR45; 
    }
    namespace Nonecsr46{
        using Addr = Register::Address<0x500605b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR46; 
    }
    namespace Nonecsr47{
        using Addr = Register::Address<0x500605b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR47; 
    }
    namespace Nonecsr48{
        using Addr = Register::Address<0x500605b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR48; 
    }
    namespace Nonecsr49{
        using Addr = Register::Address<0x500605bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR49; 
    }
    namespace Nonecsr50{
        using Addr = Register::Address<0x500605c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSR50; 
    }
}
