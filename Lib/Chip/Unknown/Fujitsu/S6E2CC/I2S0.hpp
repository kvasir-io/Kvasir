#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonerxfdat{
        using Addr = Register::Address<0x4006c000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXDATA; 
    }
    namespace Nonetxfdat{
        using Addr = Register::Address<0x4006c004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXDATA; 
    }
    namespace Nonecntreg{
        using Addr = Register::Address<0x4006c008,0x00008000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26)> CKRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> OVHD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MSKB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> MSMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SBFN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RHLL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ECKM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BEXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MLSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SMPL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FSPH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FSLN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FSPL; 
    }
    namespace Nonemcr0reg{
        using Addr = Register::Address<0x4006c00c,0x80008000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> S1CHN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21)> S1CHL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> S1WDL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> S0CHN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> S0CHL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> S0WDL; 
    }
    namespace Nonemcr1reg{
        using Addr = Register::Address<0x4006c010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> S0CH31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> S0CH30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> S0CH29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> S0CH28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> S0CH27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> S0CH26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> S0CH25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> S0CH24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> S0CH23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> S0CH22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> S0CH21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> S0CH20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> S0CH19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> S0CH18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> S0CH17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> S0CH16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> S0CH15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> S0CH14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> S0CH13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> S0CH12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> S0CH11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> S0CH10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> S0CH09; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> S0CH08; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> S0CH07; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> S0CH06; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> S0CH05; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> S0CH04; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> S0CH03; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> S0CH02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> S0CH01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> S0CH00; 
    }
    namespace Nonemcr2reg{
        using Addr = Register::Address<0x4006c014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> S1CH31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> S1CH30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> S1CH29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> S1CH28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> S1CH27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> S1CH26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> S1CH25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> S1CH24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> S1CH23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> S1CH22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> S1CH21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> S1CH20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> S1CH19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> S1CH18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> S1CH17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> S1CH16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> S1CH15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> S1CH14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> S1CH13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> S1CH12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> S1CH11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> S1CH10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> S1CH09; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> S1CH08; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> S1CH07; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> S1CH06; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> S1CH05; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> S1CH04; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> S1CH03; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> S1CH02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> S1CH01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> S1CH00; 
    }
    namespace Noneoprreg{
        using Addr = Register::Address<0x4006c018,0xfefefffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RXENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TXENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
    }
    namespace Nonesrst{
        using Addr = Register::Address<0x4006c01c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SRST; 
    }
    namespace Noneintcnt{
        using Addr = Register::Address<0x4006c020,0x80c0f0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> TXUD1M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> TBERM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> FERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> TXUD0M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> TXOVM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> TXFDM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TXFIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> RBERM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RXUDM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RXOVM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EOPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RXFDM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RXFIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TFTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> RPTMR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> RFTH; 
    }
    namespace Nonestatus{
        using Addr = Register::Address<0x4006c024,0x00f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> TBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> RBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> FERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TXUDR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> TXUDR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> TXOVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> RXUDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RXOVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EOPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TXFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RXFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> TXNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RXNUM; 
    }
    namespace Nonedmaact{
        using Addr = Register::Address<0x4006c028,0xfefefefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TL1E0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TDMACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RL1E0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDMACT; 
    }
    namespace Nonetstreg{
        using Addr = Register::Address<0x4006c02c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LBMD; 
    }
}
