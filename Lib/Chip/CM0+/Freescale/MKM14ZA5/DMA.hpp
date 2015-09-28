#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace DMA_sar0{
        using Addr = Register::Address<0x40008100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SAR; 
    }
    namespace DMA_sar1{
        using Addr = Register::Address<0x40008110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SAR; 
    }
    namespace DMA_sar2{
        using Addr = Register::Address<0x40008120,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SAR; 
    }
    namespace DMA_sar3{
        using Addr = Register::Address<0x40008130,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SAR; 
    }
    namespace DMA_dar0{
        using Addr = Register::Address<0x40008104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DAR; 
    }
    namespace DMA_dar1{
        using Addr = Register::Address<0x40008114,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DAR; 
    }
    namespace DMA_dar2{
        using Addr = Register::Address<0x40008124,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DAR; 
    }
    namespace DMA_dar3{
        using Addr = Register::Address<0x40008134,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DAR; 
    }
    namespace DMA_dsr_bcr0{
        using Addr = Register::Address<0x40008108,0x88000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> BCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> BSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> REQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> BED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> BES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CE; 
    }
    namespace DMA_dsr_bcr1{
        using Addr = Register::Address<0x40008118,0x88000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> BCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> BSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> REQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> BED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> BES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CE; 
    }
    namespace DMA_dsr_bcr2{
        using Addr = Register::Address<0x40008128,0x88000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> BCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> BSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> REQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> BED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> BES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CE; 
    }
    namespace DMA_dsr_bcr3{
        using Addr = Register::Address<0x40008138,0x88000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> BCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> BSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> REQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> BED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> BES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CE; 
    }
    namespace DMA_dsr0{
        using Addr = Register::Address<0x4000810b,0xffffffff>;
    }
    namespace DMA_dcr0{
        using Addr = Register::Address<0x4000810c,0x00000040>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> LCH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> LCH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> LINKCC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> D_REQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> SMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> DINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EADREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> UMNSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> CHACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> AA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> CS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> ERQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EINT; 
    }
    namespace DMA_dcr1{
        using Addr = Register::Address<0x4000811c,0x00000040>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> LCH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> LCH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> LINKCC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> D_REQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> SMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> DINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EADREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> UMNSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> CHACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> AA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> CS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> ERQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EINT; 
    }
    namespace DMA_dcr2{
        using Addr = Register::Address<0x4000812c,0x00000040>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> LCH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> LCH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> LINKCC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> D_REQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> SMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> DINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EADREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> UMNSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> CHACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> AA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> CS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> ERQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EINT; 
    }
    namespace DMA_dcr3{
        using Addr = Register::Address<0x4000813c,0x00000040>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> LCH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> LCH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> LINKCC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> D_REQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> SMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> DINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EADREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> UMNSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> CHACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> AA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> CS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> ERQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EINT; 
    }
    namespace DMA_dsr1{
        using Addr = Register::Address<0x4000811b,0xffffffff>;
    }
    namespace DMA_dsr2{
        using Addr = Register::Address<0x4000812b,0xffffffff>;
    }
    namespace DMA_dsr3{
        using Addr = Register::Address<0x4000813b,0xffffffff>;
    }
}
