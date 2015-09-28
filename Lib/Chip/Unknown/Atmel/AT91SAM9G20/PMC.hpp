#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepmc_scer{
        using Addr = Register::Address<0xfffffc00,0xfffffc3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> UHP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UDP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PCK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PCK1; 
    }
    namespace Nonepmc_scdr{
        using Addr = Register::Address<0xfffffc04,0xfffffc3e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> UHP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UDP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PCK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PCK1; 
    }
    namespace Nonepmc_scsr{
        using Addr = Register::Address<0xfffffc08,0xfffffc3e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PCK; 
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
    namespace Noneckgr_mor{
        using Addr = Register::Address<0xfffffc20,0xffff00fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MOSCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OSCBYPASS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> OSCOUNT; 
    }
    namespace Noneckgr_mcfr{
        using Addr = Register::Address<0xfffffc24,0xfffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MAINF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MAINRDY; 
    }
    namespace Noneckgr_pllar{
        using Addr = Register::Address<0xfffffc28,0xdf000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIVA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> PLLACOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> OUTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> MULA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> STUCKTO1; 
    }
    namespace Noneckgr_pllbr{
        using Addr = Register::Address<0xfffffc2c,0xcfc00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIVB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> PLLBCOUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> OUTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> MULB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> USBDIV; 
    }
    namespace Nonepmc_mckr{
        using Addr = Register::Address<0xfffffc30,0xffffece0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2)> PRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> MDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PDIV; 
    }
    namespace Nonepmc_pck0{
        using Addr = Register::Address<0xfffffc40,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2)> PRES; 
    }
    namespace Nonepmc_pck1{
        using Addr = Register::Address<0xfffffc44,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2)> PRES; 
    }
    namespace Nonepmc_ier{
        using Addr = Register::Address<0xfffffc60,0xfffffcf0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MOSCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOCKA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LOCKB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MCKRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PCKRDY0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PCKRDY1; 
    }
    namespace Nonepmc_idr{
        using Addr = Register::Address<0xfffffc64,0xfffffcf0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MOSCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOCKA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LOCKB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MCKRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PCKRDY0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PCKRDY1; 
    }
    namespace Nonepmc_sr{
        using Addr = Register::Address<0xfffffc68,0xfffffc70>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MOSCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOCKA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LOCKB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MCKRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OSC_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PCKRDY0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PCKRDY1; 
    }
    namespace Nonepmc_imr{
        using Addr = Register::Address<0xfffffc6c,0xfffffcf0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MOSCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOCKA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LOCKB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MCKRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PCKRDY0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PCKRDY1; 
    }
    namespace Nonepmc_pllicpr{
        using Addr = Register::Address<0xfffffc80,0xfffefffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ICPLLA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ICPLLB; 
    }
}
