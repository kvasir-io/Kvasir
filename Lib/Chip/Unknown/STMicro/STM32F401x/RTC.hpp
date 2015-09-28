#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetr{
        using Addr = Register::Address<0x40002800,0xff808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> HT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> HU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> MNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> MNU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SU; 
    }
    namespace Nonedr{
        using Addr = Register::Address<0x40002804,0xff0000c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> YT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> YU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> WDU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> MU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DU; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x40002808,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> COE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> OSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> COSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BKP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> SUB1H; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADD1H; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TSIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> WUTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ALRBIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ALRAIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> WUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ALRBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ALRAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FMT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BYPSHAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> REFCKON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TSEDGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> WCKSEL; 
    }
    namespace Noneisr{
        using Addr = Register::Address<0x4000280c,0xfffe8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ALRAWF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALRBWF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WUTWF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SHPF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> INITS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INITF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> INIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ALRAF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ALRBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> WUTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TSOVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TAMP1F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TAMP2F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RECALPF; 
    }
    namespace Noneprer{
        using Addr = Register::Address<0x40002810,0xff808000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> PREDIV_A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> PREDIV_S; 
    }
    namespace Nonewutr{
        using Addr = Register::Address<0x40002814,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> WUT; 
    }
    namespace Nonecalibr{
        using Addr = Register::Address<0x40002818,0xffffff60>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> DC; 
    }
    namespace Nonealrmar{
        using Addr = Register::Address<0x4000281c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> MSK4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> WDSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> DU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MSK3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> HT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> HU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MSK2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> MNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> MNU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SU; 
    }
    namespace Nonealrmbr{
        using Addr = Register::Address<0x40002820,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> MSK4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> WDSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> DU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MSK3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> HT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> HU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MSK2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> MNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> MNU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SU; 
    }
    namespace Nonewpr{
        using Addr = Register::Address<0x40002824,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> KEY; 
    }
    namespace Nonessr{
        using Addr = Register::Address<0x40002828,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SS; 
    }
    namespace Noneshiftr{
        using Addr = Register::Address<0x4000282c,0x7fff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ADD1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> SUBFS; 
    }
    namespace Nonetstr{
        using Addr = Register::Address<0x40002830,0xff808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> HT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> HU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> MNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> MNU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SU; 
    }
    namespace Nonetsdr{
        using Addr = Register::Address<0x40002834,0xffff00c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> WDU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> MU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DU; 
    }
    namespace Nonetsssr{
        using Addr = Register::Address<0x40002838,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SS; 
    }
    namespace Nonecalr{
        using Addr = Register::Address<0x4000283c,0xffff1e00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CALP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CALW8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CALW16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CALM; 
    }
    namespace Nonetafcr{
        using Addr = Register::Address<0x40002840,0xfff80060>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ALARMOUTTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TSINSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TAMP1INSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TAMPPUDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> TAMPPRCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> TAMPFLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> TAMPFREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TAMPTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TAMP2TRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TAMP2E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TAMPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TAMP1TRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TAMP1E; 
    }
    namespace Nonealrmassr{
        using Addr = Register::Address<0x40002844,0xf0ff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> MASKSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> SS; 
    }
    namespace Nonealrmbssr{
        using Addr = Register::Address<0x40002848,0xf0ff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> MASKSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> SS; 
    }
    namespace Nonebkp0r{
        using Addr = Register::Address<0x40002850,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BKP; 
    }
    namespace Nonebkp1r{
        using Addr = Register::Address<0x40002854,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BKP; 
    }
    namespace Nonebkp2r{
        using Addr = Register::Address<0x40002858,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BKP; 
    }
    namespace Nonebkp3r{
        using Addr = Register::Address<0x4000285c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BKP; 
    }
    namespace Nonebkp4r{
        using Addr = Register::Address<0x40002860,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BKP; 
    }
    namespace Nonebkp5r{
        using Addr = Register::Address<0x40002864,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BKP; 
    }
    namespace Nonebkp6r{
        using Addr = Register::Address<0x40002868,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BKP; 
    }
    namespace Nonebkp7r{
        using Addr = Register::Address<0x4000286c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BKP; 
    }
    namespace Nonebkp8r{
        using Addr = Register::Address<0x40002870,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BKP; 
    }
    namespace Nonebkp9r{
        using Addr = Register::Address<0x40002874,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BKP; 
    }
    namespace Nonebkp10r{
        using Addr = Register::Address<0x40002878,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BKP; 
    }
    namespace Nonebkp11r{
        using Addr = Register::Address<0x4000287c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BKP; 
    }
    namespace Nonebkp12r{
        using Addr = Register::Address<0x40002880,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BKP; 
    }
    namespace Nonebkp13r{
        using Addr = Register::Address<0x40002884,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BKP; 
    }
    namespace Nonebkp14r{
        using Addr = Register::Address<0x40002888,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BKP; 
    }
    namespace Nonebkp15r{
        using Addr = Register::Address<0x4000288c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BKP; 
    }
    namespace Nonebkp16r{
        using Addr = Register::Address<0x40002890,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BKP; 
    }
    namespace Nonebkp17r{
        using Addr = Register::Address<0x40002894,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BKP; 
    }
    namespace Nonebkp18r{
        using Addr = Register::Address<0x40002898,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BKP; 
    }
    namespace Nonebkp19r{
        using Addr = Register::Address<0x4000289c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BKP; 
    }
}
