#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x40026000,0xffffffec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IF0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IF1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OFFSTEN; 
    }
    namespace Nonestatus{
        using Addr = Register::Address<0x40026020,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OFFSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IDLESTS; 
    }
    namespace Noneconfig_0{
        using Addr = Register::Address<0x40026080,0xfffeeee2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BUSWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MUXMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ASEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ROEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> WDHINH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DELAYOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> KLREN; 
    }
    namespace Noneifrt_0{
        using Addr = Register::Address<0x40026090,0xffc0f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> RASET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> RAHOLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> RDHOLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> RDWAIT; 
    }
    namespace Noneifwt_0{
        using Addr = Register::Address<0x400260a0,0xffc0f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WASET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> WAHOLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> WDHOLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> WDWAIT; 
    }
    namespace Noneifrcst_0{
        using Addr = Register::Address<0x400260b0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CSRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CSRAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CSRDW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CSRDH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OERAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OERAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OERDW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OERDH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> WRRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WRRAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> WRRDW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WRRDH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ALERAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ALERAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ALERDW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ALERDH; 
    }
    namespace Noneifwcst_0{
        using Addr = Register::Address<0x400260c0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CSWAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CSWAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CSWDW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CSWDH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OEWAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OEWAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OEWDW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OEWDH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> WRWAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WRWAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> WRWDW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WRWDH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ALEWAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ALEWAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ALEWDW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ALEWDH; 
    }
    namespace Noneconfig_1{
        using Addr = Register::Address<0x40026100,0xfffeeee2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BUSWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MUXMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ASEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ROEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> WDHINH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DELAYOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> KLREN; 
    }
    namespace Noneifrt_1{
        using Addr = Register::Address<0x40026110,0xffc0f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> RASET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> RAHOLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> RDHOLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> RDWAIT; 
    }
    namespace Noneifwt_1{
        using Addr = Register::Address<0x40026120,0xffc0f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WASET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> WAHOLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> WDHOLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> WDWAIT; 
    }
    namespace Noneifrcst_1{
        using Addr = Register::Address<0x40026130,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CSRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CSRAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CSRDW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CSRDH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OERAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OERAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OERDW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OERDH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> WRRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WRRAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> WRRDW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WRRDH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ALERAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ALERAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ALERDW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ALERDH; 
    }
    namespace Noneifwcst_1{
        using Addr = Register::Address<0x40026140,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CSWAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CSWAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CSWDW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CSWDH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OEWAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OEWAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OEWDW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OEWDH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> WRWAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WRWAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> WRWDW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WRWDH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ALEWAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ALEWAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ALEWDW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ALEWDH; 
    }
}
