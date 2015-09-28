#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonegpioc_dircr{
        using Addr = Register::Address<0x4001c000,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DIR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DIR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DIR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DIR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DIR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DIR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DIR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DIR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DIR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DIR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DIR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DIR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DIR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DIR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DIR15; 
    }
    namespace Nonegpioc_iner{
        using Addr = Register::Address<0x4001c004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INEN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> INEN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> INEN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INEN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> INEN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INEN8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> INEN9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> INEN10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> INEN11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> INEN12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> INEN13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> INEN14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> INEN15; 
    }
    namespace Nonegpioc_pur{
        using Addr = Register::Address<0x4001c008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PU0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PU1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PU2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PU3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PU4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PU5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PU6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PU7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PU8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PU9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PU10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PU11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PU12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PU13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PU14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PU15; 
    }
    namespace Nonegpioc_pdr{
        using Addr = Register::Address<0x4001c00c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PD7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PD8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PD9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PD10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PD11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PD12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PD13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PD14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PD15; 
    }
    namespace Nonegpioc_odr{
        using Addr = Register::Address<0x4001c010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OD0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OD7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OD8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> OD9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OD11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> OD12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> OD13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> OD14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> OD15; 
    }
    namespace Nonegpioc_lockr{
        using Addr = Register::Address<0x4001c018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LOCK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOCK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LOCK2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LOCK3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LOCK4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LOCK5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LOCK6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LOCK7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LOCK8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LOCK9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> LOCK10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> LOCK11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> LOCK12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> LOCK13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> LOCK14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LOCK15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> LKEY; 
    }
    namespace Nonegpioc_dinr{
        using Addr = Register::Address<0x4001c01c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DIN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DIN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DIN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DIN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DIN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DIN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DIN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DIN8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DIN9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DIN10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DIN11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DIN12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DIN13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DIN14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DIN15; 
    }
    namespace Nonegpioc_doutr{
        using Addr = Register::Address<0x4001c020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DOUT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DOUT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DOUT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DOUT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DOUT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DOUT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DOUT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DOUT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DOUT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DOUT9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DOUT10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DOUT11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DOUT12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DOUT13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DOUT14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DOUT15; 
    }
    namespace Nonegpioc_srr{
        using Addr = Register::Address<0x4001c024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SET0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SET1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SET2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SET3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SET4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SET5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SET6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SET7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SET8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SET9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SET10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SET11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SET12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SET13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SET14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SET15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RST2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RST3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RST4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> RST5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> RST6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RST7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RST8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> RST9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> RST10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> RST11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> RST12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> RST13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> RST14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RST15; 
    }
    namespace Nonegpioc_rr{
        using Addr = Register::Address<0x4001c028,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RST2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RST3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RST4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RST5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RST6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RST7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RST8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RST9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RST10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RST11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RST12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RST13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RST14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RST15; 
    }
}
