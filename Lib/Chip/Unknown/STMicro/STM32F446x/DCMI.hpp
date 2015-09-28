#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x50050000,0xffe0b000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CAPTURE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CROP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> JPEG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PCKPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> HSPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> VSPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> EDM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> BSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OEBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> LSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> OELS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> FCRC; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x50050004,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HSYNC; 
    }
    namespace Noneris{
        using Addr = Register::Address<0x50050008,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LINE_RIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VSYNC_RIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ERR_RIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVR_RIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRAME_RIS; 
    }
    namespace Noneier{
        using Addr = Register::Address<0x5005000c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LINE_IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VSYNC_IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ERR_IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVR_IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRAME_IE; 
    }
    namespace Nonemis{
        using Addr = Register::Address<0x50050010,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LINE_MIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VSYNC_MIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ERR_MIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVR_MIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRAME_MIS; 
    }
    namespace Noneicr{
        using Addr = Register::Address<0x50050014,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LINE_ISC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VSYNC_ISC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ERR_ISC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVR_ISC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRAME_ISC; 
    }
    namespace Noneescr{
        using Addr = Register::Address<0x50050018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> FEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> LEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> LSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FSC; 
    }
    namespace Noneesur{
        using Addr = Register::Address<0x5005001c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> FEU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> LEU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> LSU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FSU; 
    }
    namespace Nonecwstrt{
        using Addr = Register::Address<0x50050020,0xe000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,16)> VST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> HOFFCNT; 
    }
    namespace Nonecwsize{
        using Addr = Register::Address<0x50050024,0xc000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> VLINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> CAPCNT; 
    }
    namespace Nonedr{
        using Addr = Register::Address<0x50050028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> Byte3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> Byte2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> Byte1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> Byte0; 
    }
}
