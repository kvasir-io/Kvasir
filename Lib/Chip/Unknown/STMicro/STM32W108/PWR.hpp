#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepwr_dsleepcr1{
        using Addr = Register::Address<0x40000004,0xfffffffd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PWR_CSYSPWRUPACKCR; 
    }
    namespace Nonepwr_dsleepcr2{
        using Addr = Register::Address<0x40000014,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MODE; 
    }
    namespace Nonepwr_vregcr{
        using Addr = Register::Address<0x40000018,0xffff7468>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PWR_VREGCR_1V2TRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PWR_VREGCR_1V2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,7)> PWR_VREGCR_1V8TRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PWR_VREGCR_1V8EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PWR_VREGCR_VREFEN; 
    }
    namespace Nonepwr_wakecr1{
        using Addr = Register::Address<0x40000020,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WAKEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IRQD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> COMPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> COMPB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CORE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CPWRRUPREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CSYSPWRUPREQ; 
    }
    namespace Nonepwr_wakecr2{
        using Addr = Register::Address<0x40000024,0xffffffdf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> COREWAKE; 
    }
    namespace Nonepwr_wakesr{
        using Addr = Register::Address<0x40000028,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GPIOPIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IRQD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> COMPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> COMPB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CORE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CPWRRUPREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CSYSPWRUPREQ; 
    }
    namespace Nonepwr_cpwrupreqsr{
        using Addr = Register::Address<0x40000034,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> REQ; 
    }
    namespace Nonepwr_csyspwrupreqsr{
        using Addr = Register::Address<0x40000038,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> REQ; 
    }
    namespace Nonepwr_csyspwrupacksr{
        using Addr = Register::Address<0x4000003c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ACK; 
    }
    namespace Nonepwr_csyspwrupackcr{
        using Addr = Register::Address<0x40000040,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INHIBIT; 
    }
    namespace Nonepwr_wakepar{
        using Addr = Register::Address<0x4000bc08,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PA7; 
    }
    namespace Nonepwr_wakepbr{
        using Addr = Register::Address<0x4000bc0c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PB4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PB5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PB6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PB7; 
    }
    namespace Nonepwr_wakepcr{
        using Addr = Register::Address<0x4000bc10,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PC7; 
    }
    namespace Nonepwr_wakefiltr{
        using Addr = Register::Address<0x4000bc1c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GPIO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IRQD; 
    }
}
