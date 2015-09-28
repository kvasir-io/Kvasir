#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonestatus{
        using Addr = Register::Address<0x40036000,0xffe0ff0e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMAENSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> STATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> NUMCHAN; 
    }
    namespace Noneconfig{
        using Addr = Register::Address<0x40036004,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMAEN; 
    }
    namespace Nonebaseptr{
        using Addr = Register::Address<0x40036008,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5)> BASEPTR; 
    }
    namespace Noneabaseptr{
        using Addr = Register::Address<0x4003600c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ABASEPTR; 
    }
    namespace Nonechstatus{
        using Addr = Register::Address<0x40036010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CH8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CH9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CH10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CH11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CH12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CH13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CH14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CH15; 
    }
    namespace Nonechswrcn{
        using Addr = Register::Address<0x40036014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CH8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CH9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CH10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CH11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CH12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CH13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CH14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CH15; 
    }
    namespace Nonechreqmset{
        using Addr = Register::Address<0x40036020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CH8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CH9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CH10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CH11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CH12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CH13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CH14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CH15; 
    }
    namespace Nonechreqmclr{
        using Addr = Register::Address<0x40036024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CH8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CH9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CH10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CH11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CH12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CH13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CH14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CH15; 
    }
    namespace Nonechenset{
        using Addr = Register::Address<0x40036028,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CH8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CH9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CH10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CH11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CH12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CH13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CH14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CH15; 
    }
    namespace Nonechenclr{
        using Addr = Register::Address<0x4003602c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CH8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CH9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CH10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CH11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CH12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CH13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CH14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CH15; 
    }
    namespace Nonechaltset{
        using Addr = Register::Address<0x40036030,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CH8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CH9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CH10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CH11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CH12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CH13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CH14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CH15; 
    }
    namespace Nonechaltclr{
        using Addr = Register::Address<0x40036034,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CH8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CH9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CH10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CH11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CH12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CH13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CH14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CH15; 
    }
    namespace Nonechhpset{
        using Addr = Register::Address<0x40036038,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CH8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CH9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CH10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CH11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CH12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CH13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CH14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CH15; 
    }
    namespace Nonechhpclr{
        using Addr = Register::Address<0x4003603c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CH8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CH9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CH10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CH11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CH12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CH13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CH14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CH15; 
    }
    namespace Noneberrclr{
        using Addr = Register::Address<0x4003604c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERROR; 
    }
}
