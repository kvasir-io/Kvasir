#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace DMAC_active{
        using Addr = Register::Address<0x41004830,0x000060f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LVLEX0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LVLEX1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LVLEX2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LVLEX3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> ID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ABUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BTCNT; 
    }
    namespace DMAC_baseaddr{
        using Addr = Register::Address<0x41004834,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BASEADDR; 
    }
    namespace DMAC_busych{
        using Addr = Register::Address<0x41004828,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BUSYCH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BUSYCH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BUSYCH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BUSYCH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BUSYCH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BUSYCH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BUSYCH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BUSYCH7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BUSYCH8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BUSYCH9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BUSYCH10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> BUSYCH11; 
    }
    namespace DMAC_chctrla{
        using Addr = Register::Address<0x41004840,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENABLE; 
    }
    namespace DMAC_chctrlb{
        using Addr = Register::Address<0x41004844,0xfc3fc080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EVACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EVIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EVOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> LVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> TRIGSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> TRIGACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> CMD; 
    }
    namespace DMAC_chid{
        using Addr = Register::Address<0x4100483f,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ID; 
    }
    namespace DMAC_chintenclr{
        using Addr = Register::Address<0x4100484c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TCMPL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SUSP; 
    }
    namespace DMAC_chintenset{
        using Addr = Register::Address<0x4100484d,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TCMPL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SUSP; 
    }
    namespace DMAC_chintflag{
        using Addr = Register::Address<0x4100484e,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TCMPL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SUSP; 
    }
    namespace DMAC_chstatus{
        using Addr = Register::Address<0x4100484f,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FERR; 
    }
    namespace DMAC_crcchksum{
        using Addr = Register::Address<0x41004808,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRCCHKSUM; 
    }
    namespace DMAC_crcctrl{
        using Addr = Register::Address<0x41004802,0xffffc0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CRCBEATSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> CRCPOLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> CRCSRC; 
    }
    namespace DMAC_crcdatain{
        using Addr = Register::Address<0x41004804,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRCDATAIN; 
    }
    namespace DMAC_crcstatus{
        using Addr = Register::Address<0x4100480c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CRCBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CRCZERO; 
    }
    namespace DMAC_ctrl{
        using Addr = Register::Address<0x41004800,0xfffff0f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMAENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CRCENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LVLEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LVLEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> LVLEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> LVLEN3; 
    }
    namespace DMAC_dbgctrl{
        using Addr = Register::Address<0x4100480d,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DBGRUN; 
    }
    namespace DMAC_intpend{
        using Addr = Register::Address<0x41004820,0xffff18f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TCMPL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> BUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PEND; 
    }
    namespace DMAC_intstatus{
        using Addr = Register::Address<0x41004824,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHINT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CHINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CHINT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CHINT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHINT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHINT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CHINT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CHINT9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CHINT10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CHINT11; 
    }
    namespace DMAC_pendch{
        using Addr = Register::Address<0x4100482c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PENDCH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PENDCH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PENDCH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PENDCH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PENDCH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PENDCH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PENDCH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PENDCH7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PENDCH8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PENDCH9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PENDCH10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PENDCH11; 
    }
    namespace DMAC_prictrl0{
        using Addr = Register::Address<0x41004814,0x70707070>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> LVLPRI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RRLVLEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> LVLPRI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RRLVLEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> LVLPRI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RRLVLEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> LVLPRI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RRLVLEN3; 
    }
    namespace DMAC_swtrigctrl{
        using Addr = Register::Address<0x41004810,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWTRIG0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SWTRIG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWTRIG2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SWTRIG3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SWTRIG4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SWTRIG5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SWTRIG6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SWTRIG7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SWTRIG8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SWTRIG9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SWTRIG10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SWTRIG11; 
    }
    namespace DMAC_wrbaddr{
        using Addr = Register::Address<0x41004838,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> WRBADDR; 
    }
}
