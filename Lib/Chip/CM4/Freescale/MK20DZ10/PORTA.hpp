#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PORTA_pcr0{
        using Addr = Register::Address<0x40049000,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr1{
        using Addr = Register::Address<0x40049004,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr2{
        using Addr = Register::Address<0x40049008,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr3{
        using Addr = Register::Address<0x4004900c,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr4{
        using Addr = Register::Address<0x40049010,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr5{
        using Addr = Register::Address<0x40049014,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr6{
        using Addr = Register::Address<0x40049018,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr7{
        using Addr = Register::Address<0x4004901c,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr8{
        using Addr = Register::Address<0x40049020,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr9{
        using Addr = Register::Address<0x40049024,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr10{
        using Addr = Register::Address<0x40049028,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr11{
        using Addr = Register::Address<0x4004902c,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr12{
        using Addr = Register::Address<0x40049030,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr13{
        using Addr = Register::Address<0x40049034,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr14{
        using Addr = Register::Address<0x40049038,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr15{
        using Addr = Register::Address<0x4004903c,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr16{
        using Addr = Register::Address<0x40049040,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr17{
        using Addr = Register::Address<0x40049044,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr18{
        using Addr = Register::Address<0x40049048,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr19{
        using Addr = Register::Address<0x4004904c,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr20{
        using Addr = Register::Address<0x40049050,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr21{
        using Addr = Register::Address<0x40049054,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr22{
        using Addr = Register::Address<0x40049058,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr23{
        using Addr = Register::Address<0x4004905c,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr24{
        using Addr = Register::Address<0x40049060,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr25{
        using Addr = Register::Address<0x40049064,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr26{
        using Addr = Register::Address<0x40049068,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr27{
        using Addr = Register::Address<0x4004906c,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr28{
        using Addr = Register::Address<0x40049070,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr29{
        using Addr = Register::Address<0x40049074,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr30{
        using Addr = Register::Address<0x40049078,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_pcr31{
        using Addr = Register::Address<0x4004907c,0xfef07888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTA_gpclr{
        using Addr = Register::Address<0x40049080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> GPWD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> GPWE; 
    }
    namespace PORTA_gpchr{
        using Addr = Register::Address<0x40049084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> GPWD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> GPWE; 
    }
    namespace PORTA_isfr{
        using Addr = Register::Address<0x400490a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ISF; 
    }
    namespace PORTA_dfer{
        using Addr = Register::Address<0x400490c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DFE; 
    }
    namespace PORTA_dfcr{
        using Addr = Register::Address<0x400490c4,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CS; 
    }
    namespace PORTA_dfwr{
        using Addr = Register::Address<0x400490c8,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> FILT; 
    }
}
