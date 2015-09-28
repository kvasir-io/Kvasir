#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace UART2_bdh{
        using Addr = Register::Address<0x4006c000,0xffffffa0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXEDGIE; 
    }
    namespace UART2_bdl{
        using Addr = Register::Address<0x4006c001,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SBR; 
    }
    namespace UART2_c1{
        using Addr = Register::Address<0x4006c002,0xffffff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ILT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WAKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LOOPS; 
    }
    namespace UART2_c2{
        using Addr = Register::Address<0x4006c003,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RWU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ILIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TIE; 
    }
    namespace UART2_s1{
        using Addr = Register::Address<0x4006c004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IDLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RDRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TDRE; 
    }
    namespace UART2_s2{
        using Addr = Register::Address<0x4006c005,0xffffff82>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RAF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BRK13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RWUID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXEDGIF; 
    }
    namespace UART2_c3{
        using Addr = Register::Address<0x4006c006,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ORIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> T8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> R8; 
    }
    namespace UART2_d{
        using Addr = Register::Address<0x4006c007,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RT; 
    }
    namespace UART2_ma1{
        using Addr = Register::Address<0x4006c008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> MA; 
    }
    namespace UART2_ma2{
        using Addr = Register::Address<0x4006c009,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> MA; 
    }
    namespace UART2_c4{
        using Addr = Register::Address<0x4006c00a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> BRFA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> M10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MAEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MAEN1; 
    }
    namespace UART2_c5{
        using Addr = Register::Address<0x4006c00b,0xffffff5f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TDMAS; 
    }
    namespace UART2_c7816{
        using Addr = Register::Address<0x4006c018,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ISO_7816E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ANACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ONACK; 
    }
    namespace UART2_ie7816{
        using Addr = Register::Address<0x4006c019,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> GTVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> INITDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BWTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CWTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WTE; 
    }
    namespace UART2_is7816{
        using Addr = Register::Address<0x4006c01a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> GTV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> INITD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BWT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CWT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WT; 
    }
    namespace UART2_wp7816{
        using Addr = Register::Address<0x4006c01b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WTX; 
    }
    namespace UART2_wn7816{
        using Addr = Register::Address<0x4006c01c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> GTN; 
    }
    namespace UART2_wf7816{
        using Addr = Register::Address<0x4006c01d,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> GTFD; 
    }
    namespace UART2_et7816{
        using Addr = Register::Address<0x4006c01e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> RXTHRESHOLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> TXTHRESHOLD; 
    }
    namespace UART2_tl7816{
        using Addr = Register::Address<0x4006c01f,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TLEN; 
    }
    namespace UART2_ap7816a_t0{
        using Addr = Register::Address<0x4006c03a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADTI_H; 
    }
    namespace UART2_ap7816b_t0{
        using Addr = Register::Address<0x4006c03b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADTI_L; 
    }
    namespace UART2_wp7816a_t0{
        using Addr = Register::Address<0x4006c03c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WI_H; 
    }
    namespace UART2_wp7816a_t1{
        using Addr = Register::Address<0x4006c03c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BWI_H; 
    }
    namespace UART2_wp7816b_t0{
        using Addr = Register::Address<0x4006c03d,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WI_L; 
    }
    namespace UART2_wp7816b_t1{
        using Addr = Register::Address<0x4006c03d,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BWI_L; 
    }
    namespace UART2_wgp7816_t1{
        using Addr = Register::Address<0x4006c03e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> BGI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CWI1; 
    }
    namespace UART2_wp7816c_t1{
        using Addr = Register::Address<0x4006c03f,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> CWI2; 
    }
}
