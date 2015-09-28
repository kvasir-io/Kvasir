#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepmc_scer{
        using Addr = Register::Address<0x400e0400,0xfffff8ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PCK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PCK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PCK2; 
    }
    namespace Nonepmc_scdr{
        using Addr = Register::Address<0x400e0404,0xfffff8ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PCK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PCK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PCK2; 
    }
    namespace Nonepmc_scsr{
        using Addr = Register::Address<0x400e0408,0xfffff8ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PCK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PCK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PCK2; 
    }
    namespace Nonepmc_pcer0{
        using Addr = Register::Address<0x400e0410,0x00470003>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PID19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PID20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PID21; 
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
    namespace Nonepmc_pcdr0{
        using Addr = Register::Address<0x400e0414,0x00470003>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PID19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PID20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PID21; 
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
    namespace Nonepmc_pcsr0{
        using Addr = Register::Address<0x400e0418,0x00470003>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PID19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PID20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PID21; 
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
    namespace Noneckgr_mor{
        using Addr = Register::Address<0x400e0420,0xfc000084>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MOSCXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MOSCXTBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MOSCRCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> MOSCRCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> MOSCXTST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> KEY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MOSCSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CFDEN; 
    }
    namespace Noneckgr_mcfr{
        using Addr = Register::Address<0x400e0424,0xfffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MAINF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MAINFRDY; 
    }
    namespace Noneckgr_pllar{
        using Addr = Register::Address<0x400e0428,0xd800c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIVA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> PLLACOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> MULA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ONE; 
    }
    namespace Nonepmc_mckr{
        using Addr = Register::Address<0x400e0430,0xffffef8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PLLADIV2; 
    }
    namespace Nonepmc_pck0{
        using Addr = Register::Address<0x400e0440,0xffffff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PRES; 
    }
    namespace Nonepmc_pck1{
        using Addr = Register::Address<0x400e0444,0xffffff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PRES; 
    }
    namespace Nonepmc_pck2{
        using Addr = Register::Address<0x400e0448,0xffffff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PRES; 
    }
    namespace Nonepmc_ier{
        using Addr = Register::Address<0x400e0460,0xfff8f8f4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MOSCXTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOCKA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MCKRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PCKRDY0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PCKRDY1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PCKRDY2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MOSCSELS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MOSCRCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFDEV; 
    }
    namespace Nonepmc_idr{
        using Addr = Register::Address<0x400e0464,0xfff8f8f4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MOSCXTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOCKA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MCKRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PCKRDY0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PCKRDY1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PCKRDY2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MOSCSELS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MOSCRCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFDEV; 
    }
    namespace Nonepmc_sr{
        using Addr = Register::Address<0x400e0468,0xffe0f874>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MOSCXTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOCKA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MCKRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OSCSELS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PCKRDY0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PCKRDY1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PCKRDY2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MOSCSELS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MOSCRCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFDEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CFDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> FOS; 
    }
    namespace Nonepmc_imr{
        using Addr = Register::Address<0x400e046c,0xfff8f8f4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MOSCXTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOCKA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MCKRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PCKRDY0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PCKRDY1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PCKRDY2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MOSCSELS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MOSCRCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFDEV; 
    }
    namespace Nonepmc_fsmr{
        using Addr = Register::Address<0x400e0470,0xffec0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FSTT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FSTT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FSTT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FSTT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FSTT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FSTT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FSTT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FSTT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FSTT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FSTT9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FSTT10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FSTT11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FSTT12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FSTT13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FSTT14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FSTT15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RTTAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RTCAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> LPM; 
    }
    namespace Nonepmc_fspr{
        using Addr = Register::Address<0x400e0474,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FSTP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FSTP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FSTP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FSTP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FSTP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FSTP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FSTP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FSTP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FSTP8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FSTP9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FSTP10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FSTP11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FSTP12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FSTP13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FSTP14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FSTP15; 
    }
    namespace Nonepmc_focr{
        using Addr = Register::Address<0x400e0478,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FOCLR; 
    }
    namespace Nonepmc_wpmr{
        using Addr = Register::Address<0x400e04e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace Nonepmc_wpsr{
        using Addr = Register::Address<0x400e04e8,0xff0000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WPVSRC; 
    }
}
