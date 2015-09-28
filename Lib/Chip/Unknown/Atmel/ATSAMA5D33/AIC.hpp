#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace AIC_ssr{
        using Addr = Register::Address<0xfffff000,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> INTSEL; 
    }
    namespace AIC_smr{
        using Addr = Register::Address<0xfffff004,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PRIOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> SRCTYPE; 
    }
    namespace AIC_svr{
        using Addr = Register::Address<0xfffff008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VECTOR; 
    }
    namespace AIC_ivr{
        using Addr = Register::Address<0xfffff010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IRQV; 
    }
    namespace AIC_fvr{
        using Addr = Register::Address<0xfffff014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FIQV; 
    }
    namespace AIC_isr{
        using Addr = Register::Address<0xfffff018,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> IRQID; 
    }
    namespace AIC_ipr0{
        using Addr = Register::Address<0xfffff020,0x00000000>;
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
    namespace AIC_ipr1{
        using Addr = Register::Address<0xfffff024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PID32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PID33; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PID34; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PID35; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PID36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PID37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PID38; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PID39; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PID40; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PID41; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PID42; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PID43; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PID44; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PID45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PID46; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PID47; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PID48; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PID49; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PID50; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PID51; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PID52; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PID53; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PID54; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PID55; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PID56; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PID57; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PID58; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PID59; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PID60; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PID61; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PID62; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PID63; 
    }
    namespace AIC_ipr2{
        using Addr = Register::Address<0xfffff028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PID64; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PID65; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PID66; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PID67; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PID68; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PID69; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PID70; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PID71; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PID72; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PID73; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PID74; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PID75; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PID76; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PID77; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PID78; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PID79; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PID80; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PID81; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PID82; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PID83; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PID84; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PID85; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PID86; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PID87; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PID88; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PID89; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PID90; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PID91; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PID92; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PID93; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PID94; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PID95; 
    }
    namespace AIC_ipr3{
        using Addr = Register::Address<0xfffff02c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PID96; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PID97; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PID98; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PID99; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PID100; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PID101; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PID102; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PID103; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PID104; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PID105; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PID106; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PID107; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PID108; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PID109; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PID110; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PID111; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PID112; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PID113; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PID114; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PID115; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PID116; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PID117; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PID118; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PID119; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PID120; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PID121; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PID122; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PID123; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PID124; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PID125; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PID126; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PID127; 
    }
    namespace AIC_imr{
        using Addr = Register::Address<0xfffff030,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTM; 
    }
    namespace AIC_cisr{
        using Addr = Register::Address<0xfffff034,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NFIQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NIRQ; 
    }
    namespace AIC_eoicr{
        using Addr = Register::Address<0xfffff038,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENDIT; 
    }
    namespace AIC_spu{
        using Addr = Register::Address<0xfffff03c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SIVR; 
    }
    namespace AIC_iecr{
        using Addr = Register::Address<0xfffff040,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTEN; 
    }
    namespace AIC_idcr{
        using Addr = Register::Address<0xfffff044,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTD; 
    }
    namespace AIC_iccr{
        using Addr = Register::Address<0xfffff048,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTCLR; 
    }
    namespace AIC_iscr{
        using Addr = Register::Address<0xfffff04c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTSET; 
    }
    namespace AIC_ffer{
        using Addr = Register::Address<0xfffff050,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FFEN; 
    }
    namespace AIC_ffdr{
        using Addr = Register::Address<0xfffff054,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FFDIS; 
    }
    namespace AIC_ffsr{
        using Addr = Register::Address<0xfffff058,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FFS; 
    }
    namespace AIC_dcr{
        using Addr = Register::Address<0xfffff06c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GMSK; 
    }
    namespace AIC_wpmr{
        using Addr = Register::Address<0xfffff0e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace AIC_wpsr{
        using Addr = Register::Address<0xfffff0e8,0xff0000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WPVSRC; 
    }
}
