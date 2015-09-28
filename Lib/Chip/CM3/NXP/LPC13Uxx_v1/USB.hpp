#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedevcmdstat{
        using Addr = Register::Address<0x40080000,0xe8e40400>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> DEV_ADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DEV_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PLL_ON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> LPM_SUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> INTONNAK_AO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> INTONNAK_AI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> INTONNAK_CO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> INTONNAK_CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DSUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> LPM_SUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> LPM_REWP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DCON_C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DSUS_C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DRES_C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> VBUSDEBOUNCED; 
    }
    namespace Noneinfo{
        using Addr = Register::Address<0x40080004,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> FRAME_NR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,11)> ERR_CODE; 
    }
    namespace Noneepliststart{
        using Addr = Register::Address<0x40080008,0x000000ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> EP_LIST; 
    }
    namespace Nonedatabufstart{
        using Addr = Register::Address<0x4008000c,0x003fffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,22)> DA_BUF; 
    }
    namespace Nonelpm{
        using Addr = Register::Address<0x40080010,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> HIRD_HW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> HIRD_SW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DATA_PENDING; 
    }
    namespace Noneepskip{
        using Addr = Register::Address<0x40080014,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> SKIP; 
    }
    namespace Noneepinuse{
        using Addr = Register::Address<0x40080018,0xfffffc03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,2)> BUF; 
    }
    namespace Noneepbufcfg{
        using Addr = Register::Address<0x4008001c,0xfffffc03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,2)> BUF_SB; 
    }
    namespace Noneintstat{
        using Addr = Register::Address<0x40080020,0x3ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EP0OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EP0IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EP1OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EP1IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EP2OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EP2IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EP3OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EP3IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EP4OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EP4IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> FRAME_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DEV_INT; 
    }
    namespace Noneinten{
        using Addr = Register::Address<0x40080024,0x3ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> EP_INT_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> FRAME_INT_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DEV_INT_EN; 
    }
    namespace Noneintsetstat{
        using Addr = Register::Address<0x40080028,0x3ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> EP_SET_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> FRAME_SET_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DEV_SET_INT; 
    }
    namespace Noneintrouting{
        using Addr = Register::Address<0x4008002c,0x3ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> ROUTE_INT9_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> ROUTE_INT30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ROUTE_INT31; 
    }
    namespace Noneeptoggle{
        using Addr = Register::Address<0x40080034,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> TOGGLE; 
    }
}
