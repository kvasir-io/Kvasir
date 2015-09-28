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
        using Addr = Register::Address<0x1c004008,0x000001ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,9)> OFFSET; 
    }
    namespace Noneenableset0{
        using Addr = Register::Address<0x1c004020,0xffc00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,0)> ENA; 
    }
    namespace Noneenableclr0{
        using Addr = Register::Address<0x1c004028,0xffc00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,0)> CLR; 
    }
    namespace Noneactive0{
        using Addr = Register::Address<0x1c004030,0xffc00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,0)> ACT; 
    }
    namespace Nonebusy0{
        using Addr = Register::Address<0x1c004038,0xffc00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,0)> BSY; 
    }
    namespace Noneerrint0{
        using Addr = Register::Address<0x1c004040,0xffc00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,0)> ERR; 
    }
    namespace Noneintenset0{
        using Addr = Register::Address<0x1c004048,0xffc00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,0)> INTEN; 
    }
    namespace Noneintenclr0{
        using Addr = Register::Address<0x1c004050,0xffc00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,0)> CLR; 
    }
    namespace Noneinta0{
        using Addr = Register::Address<0x1c004058,0xffc00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,0)> IA; 
    }
    namespace Noneintb0{
        using Addr = Register::Address<0x1c004060,0xffc00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,0)> IB; 
    }
    namespace Nonesetvalid0{
        using Addr = Register::Address<0x1c004068,0xffc00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,0)> SV; 
    }
    namespace Nonesettrig0{
        using Addr = Register::Address<0x1c004070,0xffc00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,0)> TRIG; 
    }
    namespace Noneabort0{
        using Addr = Register::Address<0x1c004078,0xffc00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,0)> ABORTCTRL; 
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
    namespace Nonecfg18{
        using Addr = Register::Address<0x1c004520,0xfff8308c>;
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
    namespace Nonecfg19{
        using Addr = Register::Address<0x1c004530,0xfff8308c>;
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
    namespace Nonecfg20{
        using Addr = Register::Address<0x1c004540,0xfff8308c>;
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
    namespace Nonecfg21{
        using Addr = Register::Address<0x1c004550,0xfff8308c>;
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
    namespace Nonectlstat18{
        using Addr = Register::Address<0x1c004524,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat19{
        using Addr = Register::Address<0x1c004534,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat20{
        using Addr = Register::Address<0x1c004544,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat21{
        using Addr = Register::Address<0x1c004554,0xfffffffa>;
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
    namespace Nonexfercfg18{
        using Addr = Register::Address<0x1c004528,0xfc000cc0>;
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
    namespace Nonexfercfg19{
        using Addr = Register::Address<0x1c004538,0xfc000cc0>;
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
    namespace Nonexfercfg20{
        using Addr = Register::Address<0x1c004548,0xfc000cc0>;
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
    namespace Nonexfercfg21{
        using Addr = Register::Address<0x1c004558,0xfc000cc0>;
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
