#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonectrl{
        using Addr = Register::Address<0x50004000,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE; 
    }
    namespace Noneintstat{
        using Addr = Register::Address<0x50004004,0xfffffff9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ACTIVEINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ACTIVEERRINT; 
    }
    namespace Nonesrambase{
        using Addr = Register::Address<0x50004008,0x000003ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,10)> OFFSET; 
    }
    namespace Noneenableset0{
        using Addr = Register::Address<0x50004020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ENA; 
    }
    namespace Noneenableclr0{
        using Addr = Register::Address<0x50004028,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CLR; 
    }
    namespace Noneactive0{
        using Addr = Register::Address<0x50004030,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ACT; 
    }
    namespace Nonebusy0{
        using Addr = Register::Address<0x50004038,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BSY; 
    }
    namespace Noneerrint0{
        using Addr = Register::Address<0x50004040,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ERR; 
    }
    namespace Noneintenset0{
        using Addr = Register::Address<0x50004048,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INTEN; 
    }
    namespace Noneintenclr0{
        using Addr = Register::Address<0x50004050,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CLR; 
    }
    namespace Noneinta0{
        using Addr = Register::Address<0x50004058,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> IA; 
    }
    namespace Noneintb0{
        using Addr = Register::Address<0x50004060,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> IB; 
    }
    namespace Nonesetvalid0{
        using Addr = Register::Address<0x50004068,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SV; 
    }
    namespace Nonesettrig0{
        using Addr = Register::Address<0x50004070,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TRIG; 
    }
    namespace Noneabort0{
        using Addr = Register::Address<0x50004078,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> AORTCTRL; 
    }
    namespace Nonecfg0{
        using Addr = Register::Address<0x50004400,0xfffc308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CHPRIORITY; 
    }
    namespace Nonecfg1{
        using Addr = Register::Address<0x50004410,0xfffc308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CHPRIORITY; 
    }
    namespace Nonecfg2{
        using Addr = Register::Address<0x50004420,0xfffc308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CHPRIORITY; 
    }
    namespace Nonecfg3{
        using Addr = Register::Address<0x50004430,0xfffc308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CHPRIORITY; 
    }
    namespace Nonecfg4{
        using Addr = Register::Address<0x50004440,0xfffc308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CHPRIORITY; 
    }
    namespace Nonecfg5{
        using Addr = Register::Address<0x50004450,0xfffc308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CHPRIORITY; 
    }
    namespace Nonecfg6{
        using Addr = Register::Address<0x50004460,0xfffc308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CHPRIORITY; 
    }
    namespace Nonecfg7{
        using Addr = Register::Address<0x50004470,0xfffc308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CHPRIORITY; 
    }
    namespace Nonecfg8{
        using Addr = Register::Address<0x50004480,0xfffc308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CHPRIORITY; 
    }
    namespace Nonecfg9{
        using Addr = Register::Address<0x50004490,0xfffc308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CHPRIORITY; 
    }
    namespace Nonecfg10{
        using Addr = Register::Address<0x500044a0,0xfffc308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CHPRIORITY; 
    }
    namespace Nonecfg11{
        using Addr = Register::Address<0x500044b0,0xfffc308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CHPRIORITY; 
    }
    namespace Nonecfg12{
        using Addr = Register::Address<0x500044c0,0xfffc308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CHPRIORITY; 
    }
    namespace Nonecfg13{
        using Addr = Register::Address<0x500044d0,0xfffc308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CHPRIORITY; 
    }
    namespace Nonecfg14{
        using Addr = Register::Address<0x500044e0,0xfffc308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CHPRIORITY; 
    }
    namespace Nonecfg15{
        using Addr = Register::Address<0x500044f0,0xfffc308c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PERIPHREQEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWTRIGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGBURST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BURSTPOWER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SRCBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSTBURSTWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CHPRIORITY; 
    }
    namespace Nonectlstat0{
        using Addr = Register::Address<0x50004404,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat1{
        using Addr = Register::Address<0x50004414,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat2{
        using Addr = Register::Address<0x50004424,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat3{
        using Addr = Register::Address<0x50004434,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat4{
        using Addr = Register::Address<0x50004444,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat5{
        using Addr = Register::Address<0x50004454,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat6{
        using Addr = Register::Address<0x50004464,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat7{
        using Addr = Register::Address<0x50004474,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat8{
        using Addr = Register::Address<0x50004484,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat9{
        using Addr = Register::Address<0x50004494,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat10{
        using Addr = Register::Address<0x500044a4,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat11{
        using Addr = Register::Address<0x500044b4,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat12{
        using Addr = Register::Address<0x500044c4,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat13{
        using Addr = Register::Address<0x500044d4,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat14{
        using Addr = Register::Address<0x500044e4,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonectlstat15{
        using Addr = Register::Address<0x500044f4,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> VALIDPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIG; 
    }
    namespace Nonexfercfg0{
        using Addr = Register::Address<0x50004408,0xfc000cc0>;
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
        using Addr = Register::Address<0x50004418,0xfc000cc0>;
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
        using Addr = Register::Address<0x50004428,0xfc000cc0>;
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
        using Addr = Register::Address<0x50004438,0xfc000cc0>;
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
        using Addr = Register::Address<0x50004448,0xfc000cc0>;
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
        using Addr = Register::Address<0x50004458,0xfc000cc0>;
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
        using Addr = Register::Address<0x50004468,0xfc000cc0>;
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
        using Addr = Register::Address<0x50004478,0xfc000cc0>;
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
        using Addr = Register::Address<0x50004488,0xfc000cc0>;
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
        using Addr = Register::Address<0x50004498,0xfc000cc0>;
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
        using Addr = Register::Address<0x500044a8,0xfc000cc0>;
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
        using Addr = Register::Address<0x500044b8,0xfc000cc0>;
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
        using Addr = Register::Address<0x500044c8,0xfc000cc0>;
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
        using Addr = Register::Address<0x500044d8,0xfc000cc0>;
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
        using Addr = Register::Address<0x500044e8,0xfc000cc0>;
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
        using Addr = Register::Address<0x500044f8,0xfc000cc0>;
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
