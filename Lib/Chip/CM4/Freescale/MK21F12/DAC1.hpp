#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace DAC1_dat0l{
        using Addr = Register::Address<0x400cd000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat1l{
        using Addr = Register::Address<0x400cd002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat2l{
        using Addr = Register::Address<0x400cd004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat3l{
        using Addr = Register::Address<0x400cd006,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat4l{
        using Addr = Register::Address<0x400cd008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat5l{
        using Addr = Register::Address<0x400cd00a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat6l{
        using Addr = Register::Address<0x400cd00c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat7l{
        using Addr = Register::Address<0x400cd00e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat8l{
        using Addr = Register::Address<0x400cd010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat9l{
        using Addr = Register::Address<0x400cd012,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat10l{
        using Addr = Register::Address<0x400cd014,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat11l{
        using Addr = Register::Address<0x400cd016,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat12l{
        using Addr = Register::Address<0x400cd018,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat13l{
        using Addr = Register::Address<0x400cd01a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat14l{
        using Addr = Register::Address<0x400cd01c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat15l{
        using Addr = Register::Address<0x400cd01e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat0h{
        using Addr = Register::Address<0x400cd001,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat1h{
        using Addr = Register::Address<0x400cd003,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat2h{
        using Addr = Register::Address<0x400cd005,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat3h{
        using Addr = Register::Address<0x400cd007,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat4h{
        using Addr = Register::Address<0x400cd009,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat5h{
        using Addr = Register::Address<0x400cd00b,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat6h{
        using Addr = Register::Address<0x400cd00d,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat7h{
        using Addr = Register::Address<0x400cd00f,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat8h{
        using Addr = Register::Address<0x400cd011,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat9h{
        using Addr = Register::Address<0x400cd013,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat10h{
        using Addr = Register::Address<0x400cd015,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat11h{
        using Addr = Register::Address<0x400cd017,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat12h{
        using Addr = Register::Address<0x400cd019,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat13h{
        using Addr = Register::Address<0x400cd01b,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat14h{
        using Addr = Register::Address<0x400cd01d,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat15h{
        using Addr = Register::Address<0x400cd01f,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_sr{
        using Addr = Register::Address<0x400cd020,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DACBFRPBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DACBFRPTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DACBFWMF; 
    }
    namespace DAC1_c0{
        using Addr = Register::Address<0x400cd021,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DACBBIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DACBTIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DACBWIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DACSWTRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DACTRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DACRFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DACEN; 
    }
    namespace DAC1_c1{
        using Addr = Register::Address<0x400cd022,0xffffff60>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DACBFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> DACBFMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> DACBFWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DMAEN; 
    }
    namespace DAC1_c2{
        using Addr = Register::Address<0x400cd023,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DACBFUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DACBFRP; 
    }
}
