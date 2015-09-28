#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepmc_scer{
        using Addr = Register::Address<0xfffffc00,0xfffffc2b>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DDRCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SMDCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> UHP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UDP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PCK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PCK1; 
    }
    namespace Nonepmc_scdr{
        using Addr = Register::Address<0xfffffc04,0xfffffc2a>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DDRCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SMDCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> UHP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UDP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PCK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PCK1; 
    }
    namespace Nonepmc_scsr{
        using Addr = Register::Address<0xfffffc08,0xfffffc2a>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DDRCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SMDCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> UHP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UDP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PCK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PCK1; 
    }
    namespace Nonepmc_pcer{
        using Addr = Register::Address<0xfffffc10,0x00000003>;
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
    namespace Nonepmc_pcdr{
        using Addr = Register::Address<0xfffffc14,0x00000003>;
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
    namespace Nonepmc_pcsr{
        using Addr = Register::Address<0xfffffc18,0x00000003>;
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
    namespace Noneckgr_uckr{
        using Addr = Register::Address<0xfffffc1c,0x0e0effff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> UPLLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> UPLLCOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> BIASEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> BIASCOUNT; 
    }
    namespace Noneckgr_mor{
        using Addr = Register::Address<0xfffffc20,0xfc0000f4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MOSCXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MOSCXTBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MOSCRCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> MOSCXTST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> KEY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MOSCSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CFDEN; 
    }
    namespace Noneckgr_mcfr{
        using Addr = Register::Address<0xfffffc24,0xfffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MAINF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MAINFRDY; 
    }
    namespace Noneckgr_pllar{
        using Addr = Register::Address<0xfffffc28,0xd8000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIVA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> PLLACOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> OUTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> MULA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> STUCKTO1; 
    }
    namespace Nonepmc_mckr{
        using Addr = Register::Address<0xfffffc30,0xffffec8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> MDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PLLADIV2; 
    }
    namespace Nonepmc_usb{
        using Addr = Register::Address<0xfffffc38,0xfffff0fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> USBDIV; 
    }
    namespace Nonepmc_smd{
        using Addr = Register::Address<0xfffffc3c,0xffffe0fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SMDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> SMDDIV; 
    }
    namespace Nonepmc_pck0{
        using Addr = Register::Address<0xfffffc40,0xffffff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PRES; 
    }
    namespace Nonepmc_pck1{
        using Addr = Register::Address<0xfffffc44,0xffffff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PRES; 
    }
    namespace Nonepmc_ier{
        using Addr = Register::Address<0xfffffc60,0xfff8fcb4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MOSCXTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOCKA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MCKRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LOCKU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PCKRDY0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PCKRDY1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MOSCSELS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MOSCRCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFDEV; 
    }
    namespace Nonepmc_idr{
        using Addr = Register::Address<0xfffffc64,0xfff8fcb4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MOSCXTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOCKA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MCKRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LOCKU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PCKRDY0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PCKRDY1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MOSCSELS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MOSCRCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFDEV; 
    }
    namespace Nonepmc_sr{
        using Addr = Register::Address<0xfffffc68,0xffe0fc34>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MOSCXTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOCKA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MCKRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LOCKU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OSCSELS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PCKRDY0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PCKRDY1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MOSCSELS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MOSCRCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFDEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CFDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> FOS; 
    }
    namespace Nonepmc_imr{
        using Addr = Register::Address<0xfffffc6c,0xfff8fcf4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MOSCXTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOCKA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MCKRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PCKRDY0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PCKRDY1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MOSCSELS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MOSCRCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFDEV; 
    }
    namespace Nonepmc_pllicpr{
        using Addr = Register::Address<0xfffffc80,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ICPLLA; 
    }
    namespace Nonepmc_wpmr{
        using Addr = Register::Address<0xfffffce4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace Nonepmc_wpsr{
        using Addr = Register::Address<0xfffffce8,0xff0000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WPVSRC; 
    }
    namespace Nonepmc_pcr{
        using Addr = Register::Address<0xfffffd0c,0xeffcefc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> PID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EN; 
    }
}
