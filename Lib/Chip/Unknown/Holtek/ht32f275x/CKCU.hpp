#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneckcu_gcfgr{
        using Addr = Register::Address<0x40088000,0x000ffef0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CKOUTSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WDTSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PLLSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> URPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> USBPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> CSIFMPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> LPMOD; 
    }
    namespace Noneckcu_gccr{
        using Addr = Register::Address<0x40088004,0xfffcf1fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PLLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> HSEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HSIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CKMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PSRCEN; 
    }
    namespace Noneckcu_gcsr{
        using Addr = Register::Address<0x40088008,0xffffffc1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PLLRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HSERDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HSIRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LSERDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LSIRDY; 
    }
    namespace Noneckcu_gcir{
        using Addr = Register::Address<0x4008800c,0xff82ff82>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CKSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PLLRDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HSERDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HSIRDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LSERDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LSIRDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CKSIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PLLRDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> HSERDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> HSIRDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> LSERDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> LSIRDYIE; 
    }
    namespace Noneckcu_pllcfgr{
        using Addr = Register::Address<0x40088018,0xe01fffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> POTD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,23)> PFBD; 
    }
    namespace Noneckcu_pllcr{
        using Addr = Register::Address<0x4008801c,0x7fffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PLLBPS; 
    }
    namespace Noneckcu_ahbcfgr{
        using Addr = Register::Address<0x40088020,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> AHBPRE; 
    }
    namespace Noneckcu_ahbccr{
        using Addr = Register::Address<0x40088024,0xfffffc0a>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FMCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRAMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PDMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> APB0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> APB1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CSIFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CSIFMEN; 
    }
    namespace Noneckcu_apbcfgr{
        using Addr = Register::Address<0x40088028,0xfff8ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> ADCDIV; 
    }
    namespace Noneckcu_apbccr0{
        using Addr = Register::Address<0x4008802c,0xfee03ccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> I2C0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> I2C1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SPI0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SPI1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> UR0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> UR1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AFIOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EXTIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PBEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> SCIEN; 
    }
    namespace Noneckcu_apbccr1{
        using Addr = Register::Address<0x40088030,0xfe3cbcae>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MCTMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WDTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RTCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> GPTM0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> GPTM1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> USBEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> BFTM0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> BFTM1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> OPA0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> OPA1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ADCEN; 
    }
    namespace Noneckcu_ckst{
        using Addr = Register::Address<0x40088034,0x38fcf0ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> PLLST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> HSEST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> HSIST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> CKSWST; 
    }
    namespace Noneckcu_lpcr{
        using Addr = Register::Address<0x40088300,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BKISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> USBSLEEP; 
    }
    namespace Noneckcu_mcudbgcr{
        using Addr = Register::Address<0x40088304,0xfffc0020>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DBSLP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DBDSLP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DBPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DBWDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DBMCTM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DBGPTM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DBGPTM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DBUR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DBUR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DBSPI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DBSPI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DBI2C0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DBI2C1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DBDSLP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DBDSCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DBBFTM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DBBFTM1; 
    }
}
