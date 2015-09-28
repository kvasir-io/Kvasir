#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonebcr1{
        using Addr = Register::Address<0xa0000000,0xffe70480>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CCLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CBURSTRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ASYNCWAIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EXTMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WAITEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WAITCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WAITPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BURSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FACCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> MWID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> MTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MBKEN; 
    }
    namespace Nonebtr1{
        using Addr = Register::Address<0xa0000004,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> ACCMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> DATLAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> BUSTURN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> ADDHLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ADDSET; 
    }
    namespace Nonebcr2{
        using Addr = Register::Address<0xa0000008,0xfff70080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CBURSTRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ASYNCWAIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EXTMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WAITEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WAITCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> WRAPMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WAITPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BURSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FACCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> MWID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> MTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MBKEN; 
    }
    namespace Nonebtr2{
        using Addr = Register::Address<0xa000000c,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> ACCMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> DATLAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> BUSTURN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> ADDHLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ADDSET; 
    }
    namespace Nonebcr3{
        using Addr = Register::Address<0xa0000010,0xfff70080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CBURSTRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ASYNCWAIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EXTMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WAITEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WAITCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> WRAPMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WAITPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BURSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FACCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> MWID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> MTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MBKEN; 
    }
    namespace Nonebtr3{
        using Addr = Register::Address<0xa0000014,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> ACCMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> DATLAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> BUSTURN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> ADDHLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ADDSET; 
    }
    namespace Nonebcr4{
        using Addr = Register::Address<0xa0000018,0xfff70080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CBURSTRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ASYNCWAIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EXTMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WAITEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WAITCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> WRAPMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WAITPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BURSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FACCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> MWID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> MTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MUXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MBKEN; 
    }
    namespace Nonebtr4{
        using Addr = Register::Address<0xa000001c,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> ACCMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> DATLAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> BUSTURN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> ADDHLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ADDSET; 
    }
    namespace Nonepcr{
        using Addr = Register::Address<0xa0000080,0xfff00181>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17)> ECCPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,13)> TAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9)> TCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ECCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PWID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PBKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PWAITEN; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0xa0000084,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FEMPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ILEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ILS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IRS; 
    }
    namespace Nonepmem{
        using Addr = Register::Address<0xa0000088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> MEMHIZx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> MEMHOLDx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> MEMWAITx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> MEMSETx; 
    }
    namespace Nonepatt{
        using Addr = Register::Address<0xa000008c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ATTHIZx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> ATTHOLDx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> ATTWAITx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ATTSETx; 
    }
    namespace Noneeccr{
        using Addr = Register::Address<0xa0000094,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ECCx; 
    }
    namespace Nonebwtr1{
        using Addr = Register::Address<0xa0000104,0xc00f0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> ACCMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> DATLAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> ADDHLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ADDSET; 
    }
    namespace Nonebwtr2{
        using Addr = Register::Address<0xa000010c,0xc00f0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> ACCMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> DATLAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> ADDHLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ADDSET; 
    }
    namespace Nonebwtr3{
        using Addr = Register::Address<0xa0000114,0xc00f0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> ACCMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> DATLAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> ADDHLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ADDSET; 
    }
    namespace Nonebwtr4{
        using Addr = Register::Address<0xa000011c,0xc00f0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> ACCMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> DATLAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> ADDHLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ADDSET; 
    }
    namespace Nonesdcr1{
        using Addr = Register::Address<0xa0000140,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> NC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> NR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> MWID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,7)> CAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> SDCLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> RPIPE; 
    }
    namespace Nonesdcr2{
        using Addr = Register::Address<0xa0000144,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> NC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> NR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> MWID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> NB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,7)> CAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> SDCLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> RPIPE; 
    }
    namespace Nonesdtr1{
        using Addr = Register::Address<0xa0000148,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TMRD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> TXSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> TRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TWR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> TRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> TRCD; 
    }
    namespace Nonesdtr2{
        using Addr = Register::Address<0xa000014c,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TMRD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> TXSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> TRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TWR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> TRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> TRCD; 
    }
    namespace Nonesdcmr{
        using Addr = Register::Address<0xa0000150,0xffc00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CTB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,5)> NRFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,9)> MRD; 
    }
    namespace Nonesdrtr{
        using Addr = Register::Address<0xa0000154,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,1)> COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> REIE; 
    }
    namespace Nonesdsr{
        using Addr = Register::Address<0xa0000158,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> MODES1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODES2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BUSY; 
    }
}
