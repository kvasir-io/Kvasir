#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecon{
        using Addr = Register::Address<0x400bc000,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RESP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RESPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RESV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RESI; 
    }
    namespace Noneconf{
        using Addr = Register::Address<0x400bc008,0xfff0ffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIRINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SIGMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAPMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INVINX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRESPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> INXGATE; 
    }
    namespace Nonestat{
        using Addr = Register::Address<0x400bc004,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR; 
    }
    namespace Nonepos{
        using Addr = Register::Address<0x400bc00c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> POS; 
    }
    namespace Nonemaxpos{
        using Addr = Register::Address<0x400bc010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MAXPOS; 
    }
    namespace Nonecmpos0{
        using Addr = Register::Address<0x400bc014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PCMP0; 
    }
    namespace Nonecmpos1{
        using Addr = Register::Address<0x400bc018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PCMP1; 
    }
    namespace Nonecmpos2{
        using Addr = Register::Address<0x400bc01c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> PCMP2; 
    }
    namespace Noneinxcnt{
        using Addr = Register::Address<0x400bc020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ENCPOS; 
    }
    namespace Noneinxcmp0{
        using Addr = Register::Address<0x400bc024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ICMP0; 
    }
    namespace Noneload{
        using Addr = Register::Address<0x400bc028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VELLOAD; 
    }
    namespace Nonetime{
        using Addr = Register::Address<0x400bc02c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VELVAL; 
    }
    namespace Nonevel{
        using Addr = Register::Address<0x400bc030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VELPC; 
    }
    namespace Nonecap{
        using Addr = Register::Address<0x400bc034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VELCAP; 
    }
    namespace Nonevelcomp{
        using Addr = Register::Address<0x400bc038,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VELPC; 
    }
    namespace Nonefilter{
        using Addr = Register::Address<0x400bc03c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FILTA; 
    }
    namespace Noneintstat{
        using Addr = Register::Address<0x400bcfe0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INX_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIM_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VELC_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DIR_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ERR_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENCLK_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> POS0_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> POS1_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> POS2_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> REV0_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> POS0REV_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> POS1REV_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> POS2REV_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> REV1_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> REV2_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MAXPOS_INT; 
    }
    namespace Noneset{
        using Addr = Register::Address<0x400bcfec,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INX_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIM_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VELC_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DIR_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ERR_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENCLK_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> POS0_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> POS1_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> POS2_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> REV0_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> POS0REV_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> POS1REV_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> POS2REV_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> REV1_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> REV2_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MAXPOS_INT; 
    }
    namespace Noneclr{
        using Addr = Register::Address<0x400bcfe8,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INX_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIM_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VELC_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DIR_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ERR_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENCLK_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> POS0_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> POS1_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> POS2_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> REV0_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> POS0REV_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> POS1REV_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> POS2REV_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> REV1_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> REV2_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MAXPOS_INT; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x400bcfe4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INX_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIM_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VELC_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DIR_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ERR_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENCLK_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> POS0_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> POS1_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> POS2_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> REV0_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> POS0REV_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> POS1REV_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> POS2REV_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> REV1_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> REV2_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MAXPOS_INT; 
    }
    namespace Noneies{
        using Addr = Register::Address<0x400bcfdc,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INX_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIM_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VELC_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DIR_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ERR_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENCLK_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> POS0_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> POS1_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> POS2_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> REV0_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> POS0REV_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> POS1REV_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> POS2REV_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> REV1_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> REV2_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MAXPOS_INT; 
    }
    namespace Noneiec{
        using Addr = Register::Address<0x400bcfd8,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INX_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIM_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VELC_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DIR_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ERR_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENCLK_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> POS0_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> POS1_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> POS2_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> REV0_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> POS0REV_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> POS1REV_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> POS2REV_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> REV1_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> REV2_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MAXPOS_INT; 
    }
}
