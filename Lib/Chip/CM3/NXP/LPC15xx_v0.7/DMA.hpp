#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonectrl{
        using Addr = Register::Address<0x1c004000,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE; 
    }
    namespace Noneintstat{
        using Addr = Register::Address<0x1c004004,0xfffffff9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ACTIVEINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ACTIVEERRINT; 
    }
    namespace Nonesrambase{
        using Addr = Register::Address<0x1c004008,0x000003ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,10)> OFFSET; 
    }
    namespace Noneenableset0{
        using Addr = Register::Address<0x1c004020,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ENA8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ENA9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ENA10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ENA11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENA12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ENA13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ENA14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ENA15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ENA16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ENA17; 
    }
    namespace Noneenableclr0{
        using Addr = Register::Address<0x1c004028,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CLR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CLR15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CLR16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CLR17; 
    }
    namespace Noneactive0{
        using Addr = Register::Address<0x1c004030,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ACT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ACT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ACT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ACT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ACT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ACT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ACT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ACT9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ACT10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ACT11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ACT12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ACT13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ACT14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ACT15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ACT16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ACT17; 
    }
    namespace Nonebusy0{
        using Addr = Register::Address<0x1c004038,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BSY0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BSY1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BSY2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BSY3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BSY4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BSY5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BSY6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BSY7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BSY8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BSY9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BSY10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> BSY11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> BSY12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> BSY13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> BSY14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BSY15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> BSY16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> BSY17; 
    }
    namespace Noneerrint0{
        using Addr = Register::Address<0x1c004040,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ERR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ERR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ERR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ERR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ERR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ERR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ERR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ERR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ERR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ERR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ERR15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ERR16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ERR17; 
    }
    namespace Noneintenset0{
        using Addr = Register::Address<0x1c004048,0xfffc0000>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SET16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> SET17; 
    }
    namespace Noneintenclr0{
        using Addr = Register::Address<0x1c004050,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CLR13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLR14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CLR15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CLR16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CLR17; 
    }
    namespace Noneinta0{
        using Addr = Register::Address<0x1c004058,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> IA8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> IA9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> IA10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> IA11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> IA12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> IA13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IA14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> IA15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> IA16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> IA17; 
    }
    namespace Noneintb0{
        using Addr = Register::Address<0x1c004060,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IB4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IB5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IB6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IB7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> IB8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> IB9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> IB10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> IB11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> IB12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> IB13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IB14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> IB15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> IB16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> IB17; 
    }
    namespace Nonesetvalid0{
        using Addr = Register::Address<0x1c004068,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SV0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SV1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SV2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SV3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SV4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SV5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SV6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SV7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SV8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SV9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SV10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SV11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SV12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SV13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SV14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SV15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SV16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> SV17; 
    }
    namespace Nonesettrig0{
        using Addr = Register::Address<0x1c004070,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SETTRIG0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SETTRIG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SETTRIG2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SETTRIG3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETTRIG4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETTRIG5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SETTRIG6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SETTRIG7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SETTRIG8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SETTRIG9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SETTRIG10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETTRIG11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SETTRIG12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SETTRIG13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SETTRIG14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SETTRIG15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SETTRIG16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> SETTRIG17; 
    }
    namespace Noneabort0{
        using Addr = Register::Address<0x1c004078,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AORTCTRL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AORTCTRL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AORTCTRL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> AORTCTRL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AORTCTRL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AORTCTRL5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AORTCTRL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> AORTCTRL7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> AORTCTRL8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> AORTCTRL9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> AORTCTRL10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AORTCTRL11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> AORTCTRL12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> AORTCTRL13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AORTCTRL14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> AORTCTRL15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> AORTCTRL16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> AORTCTRL17; 
    }
    namespace Nonecfg0{
        using Addr = Register::Address<0x1c004400,0xfff8308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> CHPRIORITY; 
    }
    namespace Nonecfg1{
        using Addr = Register::Address<0x1c004410,0xfff8308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> CHPRIORITY; 
    }
    namespace Nonecfg2{
        using Addr = Register::Address<0x1c004420,0xfff8308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> CHPRIORITY; 
    }
    namespace Nonecfg3{
        using Addr = Register::Address<0x1c004430,0xfff8308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> CHPRIORITY; 
    }
    namespace Nonecfg4{
        using Addr = Register::Address<0x1c004440,0xfff8308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> CHPRIORITY; 
    }
    namespace Nonecfg5{
        using Addr = Register::Address<0x1c004450,0xfff8308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> CHPRIORITY; 
    }
    namespace Nonecfg6{
        using Addr = Register::Address<0x1c004460,0xfff8308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> CHPRIORITY; 
    }
    namespace Nonecfg7{
        using Addr = Register::Address<0x1c004470,0xfff8308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> CHPRIORITY; 
    }
    namespace Nonecfg8{
        using Addr = Register::Address<0x1c004480,0xfff8308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> CHPRIORITY; 
    }
    namespace Nonecfg9{
        using Addr = Register::Address<0x1c004490,0xfff8308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> CHPRIORITY; 
    }
    namespace Nonecfg10{
        using Addr = Register::Address<0x1c0044a0,0xfff8308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> CHPRIORITY; 
    }
    namespace Nonecfg11{
        using Addr = Register::Address<0x1c0044b0,0xfff8308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> CHPRIORITY; 
    }
    namespace Nonecfg12{
        using Addr = Register::Address<0x1c0044c0,0xfff8308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> CHPRIORITY; 
    }
    namespace Nonecfg13{
        using Addr = Register::Address<0x1c0044d0,0xfff8308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> CHPRIORITY; 
    }
    namespace Nonecfg14{
        using Addr = Register::Address<0x1c0044e0,0xfff8308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> CHPRIORITY; 
    }
    namespace Nonecfg15{
        using Addr = Register::Address<0x1c0044f0,0xfff8308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> CHPRIORITY; 
    }
    namespace Nonecfg16{
        using Addr = Register::Address<0x1c004500,0xfff8308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> CHPRIORITY; 
    }
    namespace Nonecfg17{
        using Addr = Register::Address<0x1c004510,0xfff8308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> CHPRIORITY; 
    }
    namespace Nonectlstat0{
        using Addr = Register::Address<0x1c004404,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat1{
        using Addr = Register::Address<0x1c004414,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat2{
        using Addr = Register::Address<0x1c004424,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat3{
        using Addr = Register::Address<0x1c004434,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat4{
        using Addr = Register::Address<0x1c004444,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat5{
        using Addr = Register::Address<0x1c004454,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat6{
        using Addr = Register::Address<0x1c004464,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat7{
        using Addr = Register::Address<0x1c004474,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat8{
        using Addr = Register::Address<0x1c004484,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat9{
        using Addr = Register::Address<0x1c004494,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat10{
        using Addr = Register::Address<0x1c0044a4,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat11{
        using Addr = Register::Address<0x1c0044b4,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat12{
        using Addr = Register::Address<0x1c0044c4,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat13{
        using Addr = Register::Address<0x1c0044d4,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat14{
        using Addr = Register::Address<0x1c0044e4,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat15{
        using Addr = Register::Address<0x1c0044f4,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat16{
        using Addr = Register::Address<0x1c004504,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat17{
        using Addr = Register::Address<0x1c004514,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonexfercfg0{
        using Addr = Register::Address<0x1c004408,0xfc000cc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CFGVALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RELOAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETINTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETINTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SRCINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DSTINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> XFERCOUNT; 
    }
    namespace Nonexfercfg1{
        using Addr = Register::Address<0x1c004418,0xfc000cc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CFGVALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RELOAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETINTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETINTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SRCINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DSTINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> XFERCOUNT; 
    }
    namespace Nonexfercfg2{
        using Addr = Register::Address<0x1c004428,0xfc000cc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CFGVALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RELOAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETINTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETINTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SRCINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DSTINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> XFERCOUNT; 
    }
    namespace Nonexfercfg3{
        using Addr = Register::Address<0x1c004438,0xfc000cc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CFGVALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RELOAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETINTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETINTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SRCINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DSTINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> XFERCOUNT; 
    }
    namespace Nonexfercfg4{
        using Addr = Register::Address<0x1c004448,0xfc000cc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CFGVALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RELOAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETINTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETINTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SRCINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DSTINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> XFERCOUNT; 
    }
    namespace Nonexfercfg5{
        using Addr = Register::Address<0x1c004458,0xfc000cc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CFGVALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RELOAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETINTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETINTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SRCINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DSTINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> XFERCOUNT; 
    }
    namespace Nonexfercfg6{
        using Addr = Register::Address<0x1c004468,0xfc000cc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CFGVALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RELOAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETINTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETINTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SRCINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DSTINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> XFERCOUNT; 
    }
    namespace Nonexfercfg7{
        using Addr = Register::Address<0x1c004478,0xfc000cc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CFGVALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RELOAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETINTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETINTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SRCINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DSTINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> XFERCOUNT; 
    }
    namespace Nonexfercfg8{
        using Addr = Register::Address<0x1c004488,0xfc000cc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CFGVALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RELOAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETINTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETINTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SRCINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DSTINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> XFERCOUNT; 
    }
    namespace Nonexfercfg9{
        using Addr = Register::Address<0x1c004498,0xfc000cc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CFGVALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RELOAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETINTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETINTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SRCINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DSTINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> XFERCOUNT; 
    }
    namespace Nonexfercfg10{
        using Addr = Register::Address<0x1c0044a8,0xfc000cc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CFGVALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RELOAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETINTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETINTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SRCINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DSTINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> XFERCOUNT; 
    }
    namespace Nonexfercfg11{
        using Addr = Register::Address<0x1c0044b8,0xfc000cc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CFGVALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RELOAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETINTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETINTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SRCINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DSTINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> XFERCOUNT; 
    }
    namespace Nonexfercfg12{
        using Addr = Register::Address<0x1c0044c8,0xfc000cc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CFGVALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RELOAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETINTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETINTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SRCINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DSTINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> XFERCOUNT; 
    }
    namespace Nonexfercfg13{
        using Addr = Register::Address<0x1c0044d8,0xfc000cc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CFGVALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RELOAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETINTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETINTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SRCINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DSTINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> XFERCOUNT; 
    }
    namespace Nonexfercfg14{
        using Addr = Register::Address<0x1c0044e8,0xfc000cc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CFGVALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RELOAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETINTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETINTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SRCINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DSTINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> XFERCOUNT; 
    }
    namespace Nonexfercfg15{
        using Addr = Register::Address<0x1c0044f8,0xfc000cc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CFGVALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RELOAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETINTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETINTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SRCINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DSTINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> XFERCOUNT; 
    }
    namespace Nonexfercfg16{
        using Addr = Register::Address<0x1c004508,0xfc000cc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CFGVALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RELOAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETINTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETINTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SRCINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DSTINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> XFERCOUNT; 
    }
    namespace Nonexfercfg17{
        using Addr = Register::Address<0x1c004518,0xfc000cc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CFGVALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RELOAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETINTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETINTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SRCINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DSTINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> XFERCOUNT; 
    }
}
