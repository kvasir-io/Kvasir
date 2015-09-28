#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr1{
        using Addr = Register::Address<0x40005c00,0xffff4004>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ALERT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> POS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NOSTRETCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENGC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENPEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENARP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SMBTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SMBUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PE; 
    }
    namespace Nonecr2{
        using Addr = Register::Address<0x40005c04,0xffffe0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> LAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ITBUFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ITEVTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ITERREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> FREQ; 
    }
    namespace Noneoar1{
        using Addr = Register::Address<0x40005c08,0xffff7c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ADDMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> ADD10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> ADD7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADD0; 
    }
    namespace Noneoar2{
        using Addr = Register::Address<0x40005c0c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> ADD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENDUAL; 
    }
    namespace Nonedr{
        using Addr = Register::Address<0x40005c10,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DR; 
    }
    namespace Nonesr1{
        using Addr = Register::Address<0x40005c14,0xffff2020>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SMBALERT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PECERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> AF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ARLO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TxE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RxNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STOPF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADD10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SB; 
    }
    namespace Nonesr2{
        using Addr = Register::Address<0x40005c18,0xffff0008>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DUALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SMBHOST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SMBDEFAULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> GENCALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MSL; 
    }
    namespace Noneccr{
        using Addr = Register::Address<0x40005c1c,0xffff3000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> F_S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DUTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> CCR; 
    }
    namespace Nonetrise{
        using Addr = Register::Address<0x40005c20,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> TRISE; 
    }
}
