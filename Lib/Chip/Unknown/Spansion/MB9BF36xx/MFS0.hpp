#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneuart_scr{
        using Addr = Register::Address<0x40038001,0xffffff60>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UPCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TBIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXE; 
    }
    namespace Noneuart_smr{
        using Addr = Register::Address<0x40038000,0xffffff12>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> MD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SBL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOE; 
    }
    namespace Noneuart_ssr{
        using Addr = Register::Address<0x40038005,0xffffff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> REC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ORE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RDRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TDRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TBI; 
    }
    namespace Noneuart_escr{
        using Addr = Register::Address<0x40038004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FLWEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ESBL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> L; 
    }
    namespace Noneuart_rdr{
        using Addr = Register::Address<0x40038008,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> D; 
    }
    namespace Noneuart_tdr{
        using Addr = Register::Address<0x40038008,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> D; 
    }
    namespace Noneuart_bgr{
        using Addr = Register::Address<0x4003800c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> BGR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BGR0; 
    }
    namespace Noneuart_fcr1{
        using Addr = Register::Address<0x40038015,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FLSTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FRIIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FDRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FSEL; 
    }
    namespace Noneuart_fcr0{
        using Addr = Register::Address<0x40038014,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FLST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FCL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FCL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FE1; 
    }
    namespace Noneuart_fbyte1{
        using Addr = Register::Address<0x40038018,0xffffffff>;
    }
    namespace Noneuart_fbyte2{
        using Addr = Register::Address<0x40038019,0xffffffff>;
    }
    namespace Nonecsio_scr{
        using Addr = Register::Address<0x40038001,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UPCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TBIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXE; 
    }
    namespace Nonecsio_smr{
        using Addr = Register::Address<0x40038000,0xffffff10>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> MD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SCINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SCKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOE; 
    }
    namespace Nonecsio_ssr{
        using Addr = Register::Address<0x40038005,0xffffff60>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> REC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AWC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ORE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RDRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TDRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TBI; 
    }
    namespace Nonecsio_escr{
        using Addr = Register::Address<0x40038004,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> L3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> WT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> L; 
    }
    namespace Nonecsio_rdr{
        using Addr = Register::Address<0x40038008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> D; 
    }
    namespace Nonecsio_tdr{
        using Addr = Register::Address<0x40038008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> D; 
    }
    namespace Nonecsio_bgr{
        using Addr = Register::Address<0x4003800c,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> BGR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BGR0; 
    }
    namespace Nonecsio_fcr1{
        using Addr = Register::Address<0x40038015,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FLSTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FRIIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FDRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FSEL; 
    }
    namespace Nonecsio_fcr0{
        using Addr = Register::Address<0x40038014,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FLST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FCL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FCL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FE1; 
    }
    namespace Nonecsio_fbyte1{
        using Addr = Register::Address<0x40038018,0xffffffff>;
    }
    namespace Nonecsio_fbyte2{
        using Addr = Register::Address<0x40038019,0xffffffff>;
    }
    namespace Nonecsio_scstr0{
        using Addr = Register::Address<0x4003801c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CSHD; 
    }
    namespace Nonecsio_scstr1{
        using Addr = Register::Address<0x4003801d,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CSSU; 
    }
    namespace Nonecsio_scstr2{
        using Addr = Register::Address<0x40038020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CSDS; 
    }
    namespace Nonecsio_scstr3{
        using Addr = Register::Address<0x40038021,0xffffffff>;
    }
    namespace Nonecsio_sacsr{
        using Addr = Register::Address<0x40038024,0xffffc620>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TBEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CSEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TINTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TSYNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,1)> TDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TMRE; 
    }
    namespace Nonecsio_stmr{
        using Addr = Register::Address<0x40038028,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TM; 
    }
    namespace Nonecsio_stmcr{
        using Addr = Register::Address<0x4003802c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TC; 
    }
    namespace Nonecsio_scscr{
        using Addr = Register::Address<0x40038030,0xfffffc1c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SCAM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> CDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CSLVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CSEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CSOE; 
    }
    namespace Nonecsio_tbyte0{
        using Addr = Register::Address<0x4003803c,0xffffffff>;
    }
    namespace Nonecsio_tbyte1{
        using Addr = Register::Address<0x4003803d,0xffffffff>;
    }
    namespace Nonecsio_tbyte2{
        using Addr = Register::Address<0x40038040,0xffffffff>;
    }
    namespace Nonecsio_tbyte3{
        using Addr = Register::Address<0x40038041,0xffffffff>;
    }
    namespace Nonelin_scr{
        using Addr = Register::Address<0x40038001,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UPCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TBIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXE; 
    }
    namespace Nonelin_smr{
        using Addr = Register::Address<0x40038000,0xffffff06>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> MD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WUCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SBL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOE; 
    }
    namespace Nonelin_ssr{
        using Addr = Register::Address<0x40038005,0xffffff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> REC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LBD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ORE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RDRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TDRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TBI; 
    }
    namespace Nonelin_escr{
        using Addr = Register::Address<0x40038004,0xffffffa0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ESBL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LBIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> LBL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DEL; 
    }
    namespace Nonelin_rdr{
        using Addr = Register::Address<0x40038008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> D; 
    }
    namespace Nonelin_tdr{
        using Addr = Register::Address<0x40038008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> D; 
    }
    namespace Nonelin_bgr{
        using Addr = Register::Address<0x4003800c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> BGR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BGR0; 
    }
    namespace Nonelin_fcr1{
        using Addr = Register::Address<0x40038015,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FLSTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FRIIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FDRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FSEL; 
    }
    namespace Nonelin_fcr0{
        using Addr = Register::Address<0x40038014,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FLST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FCL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FCL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FE1; 
    }
    namespace Nonelin_fbyte1{
        using Addr = Register::Address<0x40038018,0xffffffff>;
    }
    namespace Nonelin_fbyte2{
        using Addr = Register::Address<0x40038019,0xffffffff>;
    }
    namespace Nonei2c_ibcr{
        using Addr = Register::Address<0x40038001,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACT_SCC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CNDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INT; 
    }
    namespace Nonei2c_smr{
        using Addr = Register::Address<0x40038000,0xffffff13>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> MD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TIE; 
    }
    namespace Nonei2c_ibsr{
        using Addr = Register::Address<0x40038004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FBT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> AL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SPC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BB; 
    }
    namespace Nonei2c_ssr{
        using Addr = Register::Address<0x40038005,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> REC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TBIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ORE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RDRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TDRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TBI; 
    }
    namespace Nonei2c_rdr{
        using Addr = Register::Address<0x40038008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> D; 
    }
    namespace Nonei2c_tdr{
        using Addr = Register::Address<0x40038008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> D; 
    }
    namespace Nonei2c_bgr{
        using Addr = Register::Address<0x4003800c,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> BGR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BGR0; 
    }
    namespace Nonei2c_ismk{
        using Addr = Register::Address<0x40038011,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> SM; 
    }
    namespace Nonei2c_isba{
        using Addr = Register::Address<0x40038010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> SA; 
    }
    namespace Nonei2c_fcr1{
        using Addr = Register::Address<0x40038015,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FLSTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FRIIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FDRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FSEL; 
    }
    namespace Nonei2c_fcr0{
        using Addr = Register::Address<0x40038014,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FLST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FCL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FCL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FE1; 
    }
    namespace Nonei2c_fbyte1{
        using Addr = Register::Address<0x40038018,0xffffffff>;
    }
    namespace Nonei2c_fbyte2{
        using Addr = Register::Address<0x40038019,0xffffffff>;
    }
    namespace Nonei2c_nfcr{
        using Addr = Register::Address<0x4003801c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> NFT; 
    }
    namespace Nonei2c_eibcr{
        using Addr = Register::Address<0x4003801d,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SDAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SCLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SDAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SCLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SOCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BEC; 
    }
}
