#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemode{
        using Addr = Register::Address<0x4000e180,0xe400e000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10)> CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> DEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,19)> DPTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,22)> DSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DBUSYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,27)> STDOSEL; 
    }
    namespace Nonecontrol{
        using Addr = Register::Address<0x4000e190,0x001f87a8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OVFIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVFDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OVFSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NOUPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DBGMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> STSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STESEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DIVST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,22)> DIV; 
    }
    namespace Nonestatus{
        using Addr = Register::Address<0x4000e1a0,0xffff0200>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> C0CCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> C1CCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> C2CCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> C3CCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> C4CCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> C5CCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OVFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> UPDCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> C0IOVFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> C1IOVFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> C2IOVFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> C3IOVFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> C4IOVFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> C5IOVFI; 
    }
    namespace Nonecounter{
        using Addr = Register::Address<0x4000e1b0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> COUNTER; 
    }
    namespace Nonelimit{
        using Addr = Register::Address<0x4000e1c0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> LIMIT; 
    }
    namespace Nonelimitupd{
        using Addr = Register::Address<0x4000e1d0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> LIMITUPD; 
    }
    namespace Nonedtime{
        using Addr = Register::Address<0x4000e1e0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DTIMEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DTIMEY; 
    }
    namespace Nonedtarget{
        using Addr = Register::Address<0x4000e200,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DTARGET; 
    }
    namespace Nonemode_0{
        using Addr = Register::Address<0x4000e000,0xfffff880>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> COSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2)> PWMMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DIFGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> CMD; 
    }
    namespace Nonecontrol_0{
        using Addr = Register::Address<0x4000e010,0xffffc010>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COUTST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CPCAPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CNCAPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CUPDCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> YPHST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVEPH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> XPHST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CCIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CCDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CCSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CIOVFIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CIOVFDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CIOVFSEN; 
    }
    namespace Noneccapv_0{
        using Addr = Register::Address<0x4000e020,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> CCAPV; 
    }
    namespace Noneccapvupd_0{
        using Addr = Register::Address<0x4000e030,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> CCAPVUPD; 
    }
    namespace Nonemode_1{
        using Addr = Register::Address<0x4000e040,0xfffff880>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> COSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2)> PWMMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DIFGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> CMD; 
    }
    namespace Nonecontrol_1{
        using Addr = Register::Address<0x4000e050,0xffffc010>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COUTST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CPCAPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CNCAPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CUPDCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> YPHST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVEPH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> XPHST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CCIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CCDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CCSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CIOVFIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CIOVFDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CIOVFSEN; 
    }
    namespace Noneccapv_1{
        using Addr = Register::Address<0x4000e060,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> CCAPV; 
    }
    namespace Noneccapvupd_1{
        using Addr = Register::Address<0x4000e070,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> CCAPVUPD; 
    }
    namespace Nonemode_2{
        using Addr = Register::Address<0x4000e080,0xfffff880>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> COSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2)> PWMMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DIFGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> CMD; 
    }
    namespace Nonecontrol_2{
        using Addr = Register::Address<0x4000e090,0xffffc010>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COUTST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CPCAPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CNCAPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CUPDCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> YPHST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVEPH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> XPHST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CCIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CCDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CCSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CIOVFIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CIOVFDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CIOVFSEN; 
    }
    namespace Noneccapv_2{
        using Addr = Register::Address<0x4000e0a0,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> CCAPV; 
    }
    namespace Noneccapvupd_2{
        using Addr = Register::Address<0x4000e0b0,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> CCAPVUPD; 
    }
    namespace Nonemode_3{
        using Addr = Register::Address<0x4000e0c0,0xfffff880>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> COSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2)> PWMMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DIFGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> CMD; 
    }
    namespace Nonecontrol_3{
        using Addr = Register::Address<0x4000e0d0,0xffffc010>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COUTST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CPCAPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CNCAPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CUPDCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> YPHST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVEPH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> XPHST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CCIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CCDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CCSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CIOVFIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CIOVFDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CIOVFSEN; 
    }
    namespace Noneccapv_3{
        using Addr = Register::Address<0x4000e0e0,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> CCAPV; 
    }
    namespace Noneccapvupd_3{
        using Addr = Register::Address<0x4000e0f0,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> CCAPVUPD; 
    }
    namespace Nonemode_4{
        using Addr = Register::Address<0x4000e100,0xfffff880>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> COSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2)> PWMMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DIFGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> CMD; 
    }
    namespace Nonecontrol_4{
        using Addr = Register::Address<0x4000e110,0xffffc010>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COUTST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CPCAPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CNCAPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CUPDCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> YPHST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVEPH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> XPHST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CCIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CCDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CCSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CIOVFIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CIOVFDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CIOVFSEN; 
    }
    namespace Noneccapv_4{
        using Addr = Register::Address<0x4000e120,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> CCAPV; 
    }
    namespace Noneccapvupd_4{
        using Addr = Register::Address<0x4000e130,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> CCAPVUPD; 
    }
    namespace Nonemode_5{
        using Addr = Register::Address<0x4000e140,0xfffff880>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> COSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2)> PWMMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DIFGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> CMD; 
    }
    namespace Nonecontrol_5{
        using Addr = Register::Address<0x4000e150,0xffffc010>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COUTST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CPCAPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CNCAPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CUPDCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> YPHST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVEPH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> XPHST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CCIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CCDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CCSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CIOVFIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CIOVFDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CIOVFSEN; 
    }
    namespace Noneccapv_5{
        using Addr = Register::Address<0x4000e160,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> CCAPV; 
    }
    namespace Noneccapvupd_5{
        using Addr = Register::Address<0x4000e170,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> CCAPVUPD; 
    }
}
