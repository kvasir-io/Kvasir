#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonebcr1{
        using Addr = Register::Address<0xa0000000,0xfff70480>;
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
}
