#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace EIC_config0{
        using Addr = Register::Address<0x40001818,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> SENSE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FILTEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> SENSE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FILTEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SENSE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FILTEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> SENSE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FILTEN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SENSE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> FILTEN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> SENSE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> FILTEN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> SENSE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> FILTEN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> SENSE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> FILTEN7; 
    }
    namespace EIC_config1{
        using Addr = Register::Address<0x4000181c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> SENSE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FILTEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> SENSE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FILTEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SENSE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FILTEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> SENSE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FILTEN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SENSE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> FILTEN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> SENSE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> FILTEN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> SENSE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> FILTEN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> SENSE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> FILTEN7; 
    }
    namespace EIC_ctrl{
        using Addr = Register::Address<0x40001800,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENABLE; 
    }
    namespace EIC_evctrl{
        using Addr = Register::Address<0x40001804,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTINTEO0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXTINTEO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EXTINTEO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EXTINTEO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EXTINTEO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EXTINTEO5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EXTINTEO6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EXTINTEO7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EXTINTEO8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EXTINTEO9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EXTINTEO10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EXTINTEO11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EXTINTEO12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EXTINTEO13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EXTINTEO14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EXTINTEO15; 
    }
    namespace EIC_intenclr{
        using Addr = Register::Address<0x40001808,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTINT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXTINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EXTINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EXTINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EXTINT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EXTINT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EXTINT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EXTINT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EXTINT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EXTINT9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EXTINT10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EXTINT11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EXTINT12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EXTINT13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EXTINT14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EXTINT15; 
    }
    namespace EIC_intenset{
        using Addr = Register::Address<0x4000180c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTINT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXTINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EXTINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EXTINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EXTINT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EXTINT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EXTINT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EXTINT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EXTINT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EXTINT9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EXTINT10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EXTINT11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EXTINT12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EXTINT13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EXTINT14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EXTINT15; 
    }
    namespace EIC_intflag{
        using Addr = Register::Address<0x40001810,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTINT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXTINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EXTINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EXTINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EXTINT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EXTINT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EXTINT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EXTINT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EXTINT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EXTINT9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EXTINT10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EXTINT11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EXTINT12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EXTINT13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EXTINT14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EXTINT15; 
    }
    namespace EIC_nmictrl{
        using Addr = Register::Address<0x40001802,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> NMISENSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NMIFILTEN; 
    }
    namespace EIC_nmiflag{
        using Addr = Register::Address<0x40001803,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NMI; 
    }
    namespace EIC_status{
        using Addr = Register::Address<0x40001801,0xffffff7f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SYNCBUSY; 
    }
    namespace EIC_wakeup{
        using Addr = Register::Address<0x40001814,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WAKEUPEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WAKEUPEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAKEUPEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WAKEUPEN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WAKEUPEN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WAKEUPEN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WAKEUPEN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WAKEUPEN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> WAKEUPEN8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WAKEUPEN9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> WAKEUPEN10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WAKEUPEN11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WAKEUPEN12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WAKEUPEN13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> WAKEUPEN14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> WAKEUPEN15; 
    }
}
