#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace AIC_smr0{
        using Addr = Register::Address<0xfffff000,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr1{
        using Addr = Register::Address<0xfffff004,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr2{
        using Addr = Register::Address<0xfffff008,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr3{
        using Addr = Register::Address<0xfffff00c,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr4{
        using Addr = Register::Address<0xfffff010,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr5{
        using Addr = Register::Address<0xfffff014,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr6{
        using Addr = Register::Address<0xfffff018,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr7{
        using Addr = Register::Address<0xfffff01c,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr8{
        using Addr = Register::Address<0xfffff020,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr9{
        using Addr = Register::Address<0xfffff024,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr10{
        using Addr = Register::Address<0xfffff028,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr11{
        using Addr = Register::Address<0xfffff02c,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr12{
        using Addr = Register::Address<0xfffff030,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr13{
        using Addr = Register::Address<0xfffff034,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr14{
        using Addr = Register::Address<0xfffff038,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr15{
        using Addr = Register::Address<0xfffff03c,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr16{
        using Addr = Register::Address<0xfffff040,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr17{
        using Addr = Register::Address<0xfffff044,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr18{
        using Addr = Register::Address<0xfffff048,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr19{
        using Addr = Register::Address<0xfffff04c,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr20{
        using Addr = Register::Address<0xfffff050,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr21{
        using Addr = Register::Address<0xfffff054,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr22{
        using Addr = Register::Address<0xfffff058,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr23{
        using Addr = Register::Address<0xfffff05c,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr24{
        using Addr = Register::Address<0xfffff060,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr25{
        using Addr = Register::Address<0xfffff064,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr26{
        using Addr = Register::Address<0xfffff068,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr27{
        using Addr = Register::Address<0xfffff06c,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr28{
        using Addr = Register::Address<0xfffff070,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr29{
        using Addr = Register::Address<0xfffff074,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr30{
        using Addr = Register::Address<0xfffff078,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_smr31{
        using Addr = Register::Address<0xfffff07c,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_svr0{
        using Addr = Register::Address<0xfffff080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr1{
        using Addr = Register::Address<0xfffff084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr2{
        using Addr = Register::Address<0xfffff088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr3{
        using Addr = Register::Address<0xfffff08c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr4{
        using Addr = Register::Address<0xfffff090,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr5{
        using Addr = Register::Address<0xfffff094,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr6{
        using Addr = Register::Address<0xfffff098,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr7{
        using Addr = Register::Address<0xfffff09c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr8{
        using Addr = Register::Address<0xfffff0a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr9{
        using Addr = Register::Address<0xfffff0a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr10{
        using Addr = Register::Address<0xfffff0a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr11{
        using Addr = Register::Address<0xfffff0ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr12{
        using Addr = Register::Address<0xfffff0b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr13{
        using Addr = Register::Address<0xfffff0b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr14{
        using Addr = Register::Address<0xfffff0b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr15{
        using Addr = Register::Address<0xfffff0bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr16{
        using Addr = Register::Address<0xfffff0c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr17{
        using Addr = Register::Address<0xfffff0c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr18{
        using Addr = Register::Address<0xfffff0c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr19{
        using Addr = Register::Address<0xfffff0cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr20{
        using Addr = Register::Address<0xfffff0d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr21{
        using Addr = Register::Address<0xfffff0d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr22{
        using Addr = Register::Address<0xfffff0d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr23{
        using Addr = Register::Address<0xfffff0dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr24{
        using Addr = Register::Address<0xfffff0e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr25{
        using Addr = Register::Address<0xfffff0e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr26{
        using Addr = Register::Address<0xfffff0e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr27{
        using Addr = Register::Address<0xfffff0ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr28{
        using Addr = Register::Address<0xfffff0f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr29{
        using Addr = Register::Address<0xfffff0f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr30{
        using Addr = Register::Address<0xfffff0f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_svr31{
        using Addr = Register::Address<0xfffff0fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_ivr{
        using Addr = Register::Address<0xfffff100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IRQV; 
    }
    namespace AIC_fvr{
        using Addr = Register::Address<0xfffff104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FIQV; 
    }
    namespace AIC_isr{
        using Addr = Register::Address<0xfffff108,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> IRQID; 
    }
    namespace AIC_ipr{
        using Addr = Register::Address<0xfffff10c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FIQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PID4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PID5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PID6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PID7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PID8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PID9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PID10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PID11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PID12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PID13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PID14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PID15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PID16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PID17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PID18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PID19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PID20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PID21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PID22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PID23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PID24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PID25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PID26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PID27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PID28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PID29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PID30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PID31; 
    }
    namespace AIC_imr{
        using Addr = Register::Address<0xfffff110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FIQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PID4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PID5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PID6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PID7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PID8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PID9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PID10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PID11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PID12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PID13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PID14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PID15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PID16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PID17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PID18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PID19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PID20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PID21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PID22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PID23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PID24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PID25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PID26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PID27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PID28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PID29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PID30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PID31; 
    }
    namespace AIC_cisr{
        using Addr = Register::Address<0xfffff114,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NFIQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NIRQ; 
    }
    namespace AIC_iecr{
        using Addr = Register::Address<0xfffff120,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FIQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PID4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PID5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PID6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PID7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PID8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PID9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PID10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PID11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PID12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PID13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PID14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PID15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PID16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PID17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PID18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PID19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PID20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PID21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PID22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PID23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PID24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PID25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PID26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PID27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PID28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PID29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PID30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PID31; 
    }
    namespace AIC_idcr{
        using Addr = Register::Address<0xfffff124,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FIQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PID4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PID5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PID6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PID7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PID8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PID9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PID10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PID11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PID12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PID13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PID14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PID15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PID16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PID17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PID18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PID19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PID20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PID21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PID22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PID23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PID24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PID25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PID26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PID27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PID28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PID29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PID30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PID31; 
    }
    namespace AIC_iccr{
        using Addr = Register::Address<0xfffff128,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FIQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PID4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PID5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PID6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PID7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PID8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PID9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PID10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PID11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PID12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PID13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PID14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PID15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PID16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PID17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PID18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PID19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PID20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PID21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PID22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PID23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PID24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PID25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PID26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PID27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PID28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PID29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PID30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PID31; 
    }
    namespace AIC_iscr{
        using Addr = Register::Address<0xfffff12c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FIQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PID4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PID5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PID6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PID7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PID8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PID9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PID10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PID11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PID12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PID13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PID14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PID15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PID16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PID17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PID18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PID19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PID20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PID21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PID22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PID23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PID24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PID25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PID26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PID27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PID28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PID29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PID30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PID31; 
    }
    namespace AIC_eoicr{
        using Addr = Register::Address<0xfffff130,0xffffffff>;
    }
    namespace AIC_spu{
        using Addr = Register::Address<0xfffff134,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SIVR; 
    }
    namespace AIC_dcr{
        using Addr = Register::Address<0xfffff138,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GMSK; 
    }
    namespace AIC_ffer{
        using Addr = Register::Address<0xfffff140,0x00000001>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PID4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PID5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PID6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PID7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PID8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PID9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PID10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PID11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PID12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PID13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PID14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PID15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PID16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PID17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PID18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PID19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PID20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PID21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PID22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PID23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PID24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PID25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PID26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PID27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PID28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PID29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PID30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PID31; 
    }
    namespace AIC_ffdr{
        using Addr = Register::Address<0xfffff144,0x00000001>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PID4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PID5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PID6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PID7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PID8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PID9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PID10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PID11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PID12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PID13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PID14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PID15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PID16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PID17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PID18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PID19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PID20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PID21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PID22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PID23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PID24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PID25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PID26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PID27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PID28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PID29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PID30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PID31; 
    }
    namespace AIC_ffsr{
        using Addr = Register::Address<0xfffff148,0x00000001>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PID4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PID5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PID6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PID7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PID8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PID9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PID10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PID11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PID12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PID13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PID14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PID15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PID16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PID17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PID18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PID19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PID20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PID21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PID22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PID23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PID24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PID25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PID26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PID27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PID28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PID29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PID30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PID31; 
    }
}
