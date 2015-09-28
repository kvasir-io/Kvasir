#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace AC_compctrl0{
        using Addr = Register::Address<0x42004410,0xf8f44890>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SINGLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> SPEED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> INTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUXNEG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> MUXPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SWAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> HYST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> FLEN; 
    }
    namespace AC_compctrl1{
        using Addr = Register::Address<0x42004414,0xf8f44890>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SINGLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> SPEED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> INTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUXNEG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> MUXPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SWAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> HYST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> FLEN; 
    }
    namespace AC_ctrla{
        using Addr = Register::Address<0x42004400,0xffffff78>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RUNSTDBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LPMUX; 
    }
    namespace AC_ctrlb{
        using Addr = Register::Address<0x42004401,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> START1; 
    }
    namespace AC_evctrl{
        using Addr = Register::Address<0x42004402,0xfffffcec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COMPEO0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> COMPEO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WINEO0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> COMPEI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> COMPEI1; 
    }
    namespace AC_intenclr{
        using Addr = Register::Address<0x42004404,0xffffffec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COMP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> COMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WIN0; 
    }
    namespace AC_intenset{
        using Addr = Register::Address<0x42004405,0xffffffec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COMP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> COMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WIN0; 
    }
    namespace AC_intflag{
        using Addr = Register::Address<0x42004406,0xffffffec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COMP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> COMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WIN0; 
    }
    namespace AC_scaler0{
        using Addr = Register::Address<0x42004420,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> VALUE; 
    }
    namespace AC_scaler1{
        using Addr = Register::Address<0x42004421,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> VALUE; 
    }
    namespace AC_statusa{
        using Addr = Register::Address<0x42004408,0xffffffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STATE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STATE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> WSTATE0; 
    }
    namespace AC_statusb{
        using Addr = Register::Address<0x42004409,0xffffff7c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READY0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> READY1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SYNCBUSY; 
    }
    namespace AC_statusc{
        using Addr = Register::Address<0x4200440a,0xffffffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STATE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STATE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> WSTATE0; 
    }
    namespace AC_winctrl{
        using Addr = Register::Address<0x4200440c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> WINTSEL0; 
    }
}
