#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace DAC1_dat0l{
        using Addr = Register::Address<0x40028000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat1l{
        using Addr = Register::Address<0x40028002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat2l{
        using Addr = Register::Address<0x40028004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat3l{
        using Addr = Register::Address<0x40028006,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat4l{
        using Addr = Register::Address<0x40028008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat5l{
        using Addr = Register::Address<0x4002800a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat6l{
        using Addr = Register::Address<0x4002800c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat7l{
        using Addr = Register::Address<0x4002800e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat8l{
        using Addr = Register::Address<0x40028010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat9l{
        using Addr = Register::Address<0x40028012,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat10l{
        using Addr = Register::Address<0x40028014,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat11l{
        using Addr = Register::Address<0x40028016,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat12l{
        using Addr = Register::Address<0x40028018,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat13l{
        using Addr = Register::Address<0x4002801a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat14l{
        using Addr = Register::Address<0x4002801c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat15l{
        using Addr = Register::Address<0x4002801e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC1_dat0h{
        using Addr = Register::Address<0x40028001,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat1h{
        using Addr = Register::Address<0x40028003,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat2h{
        using Addr = Register::Address<0x40028005,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat3h{
        using Addr = Register::Address<0x40028007,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat4h{
        using Addr = Register::Address<0x40028009,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat5h{
        using Addr = Register::Address<0x4002800b,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat6h{
        using Addr = Register::Address<0x4002800d,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat7h{
        using Addr = Register::Address<0x4002800f,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat8h{
        using Addr = Register::Address<0x40028011,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat9h{
        using Addr = Register::Address<0x40028013,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat10h{
        using Addr = Register::Address<0x40028015,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat11h{
        using Addr = Register::Address<0x40028017,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat12h{
        using Addr = Register::Address<0x40028019,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat13h{
        using Addr = Register::Address<0x4002801b,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat14h{
        using Addr = Register::Address<0x4002801d,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_dat15h{
        using Addr = Register::Address<0x4002801f,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC1_sr{
        using Addr = Register::Address<0x40028020,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DACBFRPBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DACBFRPTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DACBFWMF; 
    }
    namespace DAC1_c0{
        using Addr = Register::Address<0x40028021,0xffffff00>;
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
        using Addr = Register::Address<0x40028022,0xffffff60>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DACBFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> DACBFMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> DACBFWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DMAEN; 
    }
    namespace DAC1_c2{
        using Addr = Register::Address<0x40028023,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DACBFUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DACBFRP; 
    }
}
