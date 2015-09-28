#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemcr{
        using Addr = Register::Address<0x40017400,0x11c000c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> BRSTDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MREPU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PREEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,25)> DACSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TECEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TDCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TCCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TBCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TACEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> SYNC_SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SYNC_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SYNCSTRTM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SYNCRSTM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> SYNC_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RETRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CONT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CK_PSC; 
    }
    namespace Nonemisr{
        using Addr = Register::Address<0x40017404,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MREP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MCMP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MCMP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MCMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MCMP1; 
    }
    namespace Nonemicr{
        using Addr = Register::Address<0x40017408,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MUPDC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SYNCC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MREPC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MCMP4C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MCMP3C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MCMP2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MCMP1C; 
    }
    namespace Nonemdier4{
        using Addr = Register::Address<0x4001740c,0xff80ff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MUPDDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> SYNCDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MREPDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> MCMP4DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MCMP3DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MCMP2DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MCMP1DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MUPDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SYNCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MREPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MCMP4IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MCMP3IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MCMP2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MCMP1IE; 
    }
    namespace Nonemcntr{
        using Addr = Register::Address<0x40017410,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MCNT; 
    }
    namespace Nonemper{
        using Addr = Register::Address<0x40017414,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MPER; 
    }
    namespace Nonemrep{
        using Addr = Register::Address<0x40017418,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> MREP; 
    }
    namespace Nonemcmp1r{
        using Addr = Register::Address<0x4001741c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MCMP1; 
    }
    namespace Nonemcmp2r{
        using Addr = Register::Address<0x40017424,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MCMP2; 
    }
    namespace Nonemcmp3r{
        using Addr = Register::Address<0x40017428,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MCMP3; 
    }
    namespace Nonemcmp4r{
        using Addr = Register::Address<0x4001742c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MCMP4; 
    }
}
