#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecrel{
        using Addr = Register::Address<0x40070000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> REL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> STEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> SUBSTEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> YEAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> MON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DAY; 
    }
    namespace Noneendn{
        using Addr = Register::Address<0x40070004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ETV; 
    }
    namespace Nonefbtp{
        using Addr = Register::Address<0x4007000c,0xe060f08c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> TDCO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TDC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> FBRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> FTSEG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> FTSEG2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> FSJW; 
    }
    namespace Nonetest{
        using Addr = Register::Address<0x40070010,0xffffc00f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> TDCV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LBCK; 
    }
    namespace Nonerwd{
        using Addr = Register::Address<0x40070014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> WDV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> WDC; 
    }
    namespace Nonecccr{
        using Addr = Register::Address<0x40070018,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TXP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FDBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FDO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> CMR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TEST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ASM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INIT; 
    }
    namespace Nonebtp{
        using Addr = Register::Address<0x4007001c,0xfc00c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> BRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> TSEG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> TSEG2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SJW; 
    }
    namespace Nonetscc{
        using Addr = Register::Address<0x40070020,0xfff0fffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TCP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> TSS; 
    }
    namespace Nonetscv{
        using Addr = Register::Address<0x40070024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TSC; 
    }
    namespace Nonetocc{
        using Addr = Register::Address<0x40070028,0x0000fff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> TOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> TOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ETOC; 
    }
    namespace Nonetocv{
        using Addr = Register::Address<0x4007002c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TOC; 
    }
    namespace Noneecr{
        using Addr = Register::Address<0x40070040,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> CEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> REC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TEC; 
    }
    namespace Nonepsr{
        using Addr = Register::Address<0x40070044,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> REDL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RBRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RESI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> FLEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> LEC; 
    }
    namespace Noneir{
        using Addr = Register::Address<0x40070050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> STE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> FOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ACKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> BE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> CRCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> WDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> BO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ELO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> BEU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> BEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> DRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TOO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MRAF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TEFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TEFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TEFW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TEFN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> HPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RF1L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RF1F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RF1W; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RF1N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RF0L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RF0F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RF0W; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RF0N; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x40070054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> STEE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> FOEE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ACKEE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> BEE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> CRCEE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> WDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> BOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EWE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ELOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> BEUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> BECE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> DRXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TOOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MRAFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TSWE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TEFLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TEFFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TEFWE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TEFNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TFEE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TCFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> HPME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RF1LE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RF1FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RF1WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RF1NE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RF0LE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RF0FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RF0WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RF0NE; 
    }
    namespace Noneils{
        using Addr = Register::Address<0x40070058,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> STEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> FOEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ACKEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> BEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> CRCEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> WDIL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> BOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EWL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EPL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ELOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> BEUL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> BECL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> DRXL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TOOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MRAFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TSWL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TEFLL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TEFFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TEFWL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TEFNL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TFEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TCFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> HPML; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RF1LL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RF1FL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RF1WL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RF1NL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RF0LL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RF0FL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RF0WL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RF0NL; 
    }
    namespace Noneile{
        using Addr = Register::Address<0x4007005c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EINT0; 
    }
    namespace Nonegfc{
        using Addr = Register::Address<0x40070080,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> ANFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> ANFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RRFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RRFE; 
    }
    namespace Nonesidfc{
        using Addr = Register::Address<0x40070084,0xff000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> LSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,2)> FLSSA; 
    }
    namespace Nonexidfc{
        using Addr = Register::Address<0x40070088,0xff800003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> LSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,2)> FLESA; 
    }
    namespace Nonexidam{
        using Addr = Register::Address<0x40070090,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0)> EIDM; 
    }
    namespace Nonehpms{
        using Addr = Register::Address<0x40070094,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FLST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> FIDX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> MSI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> BIDX; 
    }
    namespace Nonendat1{
        using Addr = Register::Address<0x40070098,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ND31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> ND30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ND29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ND28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ND27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> ND26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> ND25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ND24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> ND23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ND22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ND21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ND20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ND19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ND18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ND17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ND16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ND15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ND14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ND13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ND12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ND11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ND10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ND9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ND8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ND7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ND6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ND5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ND4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ND3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ND2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ND1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ND0; 
    }
    namespace Nonendat2{
        using Addr = Register::Address<0x4007009c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ND63; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> ND62; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ND61; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ND60; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ND59; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> ND58; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> ND57; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ND56; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> ND55; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ND54; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ND53; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ND52; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ND51; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ND50; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ND49; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ND48; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ND47; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ND46; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ND45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ND44; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ND43; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ND42; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ND41; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ND40; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ND39; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ND38; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ND37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ND36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ND35; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ND34; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ND33; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ND32; 
    }
    namespace Nonerxf0c{
        using Addr = Register::Address<0x400700a0,0x00800003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> F0OM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> F0WM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> F0S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,2)> F0SA; 
    }
    namespace Nonerxf0s{
        using Addr = Register::Address<0x400700a4,0xfcc0c080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> RF0L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> F0F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> F0PI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> F0GI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> F0FL; 
    }
    namespace Nonerxf0a{
        using Addr = Register::Address<0x400700a8,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> F0AI; 
    }
    namespace Nonerxbc{
        using Addr = Register::Address<0x400700ac,0xffff0003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,2)> RBSA; 
    }
    namespace Nonerxf1c{
        using Addr = Register::Address<0x400700b0,0x00800003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> F1OM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> F1WM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> F1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,2)> F1SA; 
    }
    namespace Nonerxf1s{
        using Addr = Register::Address<0x400700b4,0x3cc0c080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> DMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> RF1L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> F1F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> F1PI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> F1GI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> F1FL; 
    }
    namespace Nonerxf1a{
        using Addr = Register::Address<0x400700b8,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> F1AI; 
    }
    namespace Nonerxesc{
        using Addr = Register::Address<0x400700bc,0xfffff888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> RBDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> F1DS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> F0DS; 
    }
    namespace Nonetxbc{
        using Addr = Register::Address<0x400700c0,0x80c00003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> TFQM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> TFQS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> NDTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,2)> TBSA; 
    }
    namespace Nonetxfqs{
        using Addr = Register::Address<0x400700c4,0xffc0e0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TFQF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> TFQPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> TFGI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> TFFL; 
    }
    namespace Nonetxesc{
        using Addr = Register::Address<0x400700c8,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TBDS; 
    }
    namespace Nonetxbrp{
        using Addr = Register::Address<0x400700cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> TRP31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> TRP30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> TRP29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TRP28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> TRP27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> TRP26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> TRP25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TRP24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TRP23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TRP22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TRP21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TRP20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TRP19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TRP18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TRP17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TRP16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TRP15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TRP14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TRP13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TRP12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TRP11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TRP10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TRP9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TRP8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TRP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TRP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TRP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TRP0; 
    }
    namespace Nonetxbar{
        using Addr = Register::Address<0x400700d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AR31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> AR30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> AR29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> AR28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> AR27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> AR26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> AR25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> AR24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> AR23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> AR22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> AR21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> AR20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> AR19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> AR18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> AR17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> AR16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> AR15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> AR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> AR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> AR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> AR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> AR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> AR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> AR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AR0; 
    }
    namespace Nonetxbcr{
        using Addr = Register::Address<0x400700d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CR31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CR30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> CR29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> CR28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> CR27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CR26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CR25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CR24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CR23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> CR22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CR21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CR20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CR19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CR18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CR17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CR16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CR15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CR0; 
    }
    namespace Nonetxbto{
        using Addr = Register::Address<0x400700d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> TO31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> TO30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> TO29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TO28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> TO27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> TO26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> TO25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TO24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TO23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TO22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TO21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TO20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TO19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TO18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TO17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TO16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TO15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TO14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TO13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TO12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TO11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TO10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TO9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TO8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TO7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TO6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TO5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TO0; 
    }
    namespace Nonetxbcf{
        using Addr = Register::Address<0x400700dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CF31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CF30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> CF29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> CF28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> CF27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CF26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CF25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CF24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CF23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> CF22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CF21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CF20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CF19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CF18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CF17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CF16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CF15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CF14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CF13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CF12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CF11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CF10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CF9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CF8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CF7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CF0; 
    }
    namespace Nonetxbtie{
        using Addr = Register::Address<0x400700e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> TIE31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> TIE30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> TIE29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TIE28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> TIE27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> TIE26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> TIE25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TIE24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TIE23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TIE22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TIE21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TIE20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TIE19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TIE18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TIE17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TIE16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TIE15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TIE14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TIE13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TIE12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TIE11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TIE10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TIE9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TIE8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TIE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TIE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TIE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TIE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIE0; 
    }
    namespace Nonetxbcie{
        using Addr = Register::Address<0x400700e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CFIE31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CFIE30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> CFIE29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> CFIE28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> CFIE27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CFIE26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CFIE25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CFIE24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CFIE23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> CFIE22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CFIE21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CFIE20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CFIE19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFIE18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CFIE17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CFIE16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CFIE15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CFIE14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CFIE13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CFIE12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CFIE11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CFIE10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CFIE9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CFIE8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CFIE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CFIE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CFIE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CFIE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CFIE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CFIE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CFIE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CFIE0; 
    }
    namespace Nonetxefc{
        using Addr = Register::Address<0x400700f0,0xc0c00003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> EFWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> EFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,2)> EFSA; 
    }
    namespace Nonetxfs{
        using Addr = Register::Address<0x400700f4,0xfce0e0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> TEFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> EFPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> EFGI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> EFFL; 
    }
    namespace Nonetxfa{
        using Addr = Register::Address<0x400700f8,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> EFAI; 
    }
    namespace Nonefdecr{
        using Addr = Register::Address<0x40070200,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CEIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CEREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SEIE; 
    }
    namespace Nonefdesr{
        using Addr = Register::Address<0x40070201,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SEI; 
    }
    namespace Nonefdsear{
        using Addr = Register::Address<0x40070202,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SRA; 
    }
    namespace Nonefdescr{
        using Addr = Register::Address<0x40070205,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DEIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SEIC; 
    }
    namespace Nonefddear{
        using Addr = Register::Address<0x40070206,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DRA; 
    }
    namespace Nonetscntr{
        using Addr = Register::Address<0x40070210,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CCLR; 
    }
    namespace Nonetsmdr{
        using Addr = Register::Address<0x40070212,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CNTEN; 
    }
    namespace Nonetsdivr{
        using Addr = Register::Address<0x40070214,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CDIV; 
    }
    namespace Nonetscdtr{
        using Addr = Register::Address<0x40070218,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNT; 
    }
    namespace Nonetscpclr{
        using Addr = Register::Address<0x4007021a,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CMP; 
    }
}
