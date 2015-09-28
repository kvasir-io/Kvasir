#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetxctrl{
        using Addr = Register::Address<0x40034000,0xffffffc2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IBREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ITSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EOM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXEN; 
    }
    namespace Nonetxdata{
        using Addr = Register::Address<0x40034004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TXDATA; 
    }
    namespace Nonetxsts{
        using Addr = Register::Address<0x40034008,0xffffffce>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ITST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ACKSV; 
    }
    namespace Nonesfree{
        using Addr = Register::Address<0x4003400c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SFREE; 
    }
    namespace Nonercst{
        using Addr = Register::Address<0x40034040,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACKIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OVFSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OVF; 
    }
    namespace Nonerccr{
        using Addr = Register::Address<0x40034041,0xffffff70>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> THSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADRCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> MOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
    }
    namespace Nonercdahw{
        using Addr = Register::Address<0x40034044,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RCDAHW; 
    }
    namespace Nonercshw{
        using Addr = Register::Address<0x40034045,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RCSHW; 
    }
    namespace Nonercdbhw{
        using Addr = Register::Address<0x40034049,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RCDBHW; 
    }
    namespace Nonercadr2{
        using Addr = Register::Address<0x4003404c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> RCADR2; 
    }
    namespace Nonercadr1{
        using Addr = Register::Address<0x4003404d,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> RCADR1; 
    }
    namespace Nonercdthl{
        using Addr = Register::Address<0x40034050,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RCDTHL; 
    }
    namespace Nonercdthh{
        using Addr = Register::Address<0x40034051,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RCDTHH; 
    }
    namespace Nonercdtll{
        using Addr = Register::Address<0x40034054,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RCDTLL; 
    }
    namespace Nonercdtlh{
        using Addr = Register::Address<0x40034055,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RCDTLH; 
    }
    namespace Nonercckd{
        using Addr = Register::Address<0x40034058,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> CKDIV; 
    }
    namespace Nonercrhw{
        using Addr = Register::Address<0x4003405c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RCRHW; 
    }
    namespace Nonercrc{
        using Addr = Register::Address<0x4003405d,0xffffffee>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RC; 
    }
    namespace Nonercle{
        using Addr = Register::Address<0x40034061,0xffffff04>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LELIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LESIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LELE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LESE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LES; 
    }
    namespace Nonerclesw{
        using Addr = Register::Address<0x40034064,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RCLESW; 
    }
    namespace Nonerclelw{
        using Addr = Register::Address<0x40034065,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RCLELW; 
    }
}
