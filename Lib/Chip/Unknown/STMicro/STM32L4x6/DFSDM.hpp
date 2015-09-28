#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonechcfg0r1{
        using Addr = Register::Address<0x40016000,0x3f000e10>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DFSDMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CKOUTSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> CKOUTDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DATPACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> DATMPX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CHINSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CKABEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SCDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> SPICKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SITP; 
    }
    namespace Nonechcfg0r2{
        using Addr = Register::Address<0x40016004,0x00000007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> OFFSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DTRBS; 
    }
    namespace Noneawscd0r{
        using Addr = Register::Address<0x40016008,0xff200f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> AWFORD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> AWFOSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> BKSCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SCDT; 
    }
    namespace Nonechwdat0r{
        using Addr = Register::Address<0x4001600c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> WDATA; 
    }
    namespace Nonechdatin0r{
        using Addr = Register::Address<0x40016010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> INDAT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INDAT0; 
    }
    namespace Nonechcfg1r1{
        using Addr = Register::Address<0x40016020,0xffff0e10>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DATPACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> DATMPX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CHINSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CKABEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SCDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> SPICKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SITP; 
    }
    namespace Nonechcfg1r2{
        using Addr = Register::Address<0x40016024,0x00000007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> OFFSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DTRBS; 
    }
    namespace Noneawscd1r{
        using Addr = Register::Address<0x40016028,0xff200f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> AWFORD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> AWFOSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> BKSCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SCDT; 
    }
    namespace Nonechwdat1r{
        using Addr = Register::Address<0x4001602c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> WDATA; 
    }
    namespace Nonechdatin1r{
        using Addr = Register::Address<0x40016030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> INDAT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INDAT0; 
    }
    namespace Nonechcfg2r1{
        using Addr = Register::Address<0x40016040,0xffff0e10>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DATPACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> DATMPX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CHINSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CKABEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SCDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> SPICKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SITP; 
    }
    namespace Nonechcfg2r2{
        using Addr = Register::Address<0x40016044,0x00000007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> OFFSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DTRBS; 
    }
    namespace Noneawscd2r{
        using Addr = Register::Address<0x40016048,0xff200f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> AWFORD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> AWFOSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> BKSCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SCDT; 
    }
    namespace Nonechwdat2r{
        using Addr = Register::Address<0x4001604c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> WDATA; 
    }
    namespace Nonechdatin2r{
        using Addr = Register::Address<0x40016050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> INDAT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INDAT0; 
    }
    namespace Nonechcfg3r1{
        using Addr = Register::Address<0x40016060,0xffff0e10>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DATPACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> DATMPX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CHINSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CKABEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SCDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> SPICKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SITP; 
    }
    namespace Nonechcfg3r2{
        using Addr = Register::Address<0x40016064,0x00000007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> OFFSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DTRBS; 
    }
    namespace Noneawscd3r{
        using Addr = Register::Address<0x40016068,0xff200f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> AWFORD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> AWFOSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> BKSCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SCDT; 
    }
    namespace Nonechwdat3r{
        using Addr = Register::Address<0x4001606c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> WDATA; 
    }
    namespace Nonechdatin3r{
        using Addr = Register::Address<0x40016070,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> INDAT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INDAT0; 
    }
    namespace Nonechcfg4r1{
        using Addr = Register::Address<0x40016080,0xffff0e10>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DATPACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> DATMPX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CHINSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CKABEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SCDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> SPICKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SITP; 
    }
    namespace Nonechcfg4r2{
        using Addr = Register::Address<0x40016084,0x00000007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> OFFSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DTRBS; 
    }
    namespace Noneawscd4r{
        using Addr = Register::Address<0x40016088,0xff200f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> AWFORD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> AWFOSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> BKSCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SCDT; 
    }
    namespace Nonechwdat4r{
        using Addr = Register::Address<0x4001608c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> WDATA; 
    }
    namespace Nonechdatin4r{
        using Addr = Register::Address<0x40016090,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> INDAT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INDAT0; 
    }
    namespace Nonechcfg5r1{
        using Addr = Register::Address<0x400160a0,0xffff0e10>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DATPACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> DATMPX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CHINSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CKABEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SCDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> SPICKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SITP; 
    }
    namespace Nonechcfg5r2{
        using Addr = Register::Address<0x400160a4,0x00000007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> OFFSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DTRBS; 
    }
    namespace Noneawscd5r{
        using Addr = Register::Address<0x400160a8,0xff200f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> AWFORD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> AWFOSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> BKSCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SCDT; 
    }
    namespace Nonechwdat5r{
        using Addr = Register::Address<0x400160ac,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> WDATA; 
    }
    namespace Nonechdatin5r{
        using Addr = Register::Address<0x400160b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> INDAT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INDAT0; 
    }
    namespace Nonechcfg6r1{
        using Addr = Register::Address<0x400160c0,0xffff0e10>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DATPACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> DATMPX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CHINSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CKABEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SCDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> SPICKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SITP; 
    }
    namespace Nonechcfg6r2{
        using Addr = Register::Address<0x400160c4,0x00000007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> OFFSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DTRBS; 
    }
    namespace Noneawscd6r{
        using Addr = Register::Address<0x400160c8,0xff200f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> AWFORD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> AWFOSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> BKSCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SCDT; 
    }
    namespace Nonechwdat6r{
        using Addr = Register::Address<0x400160cc,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> WDATA; 
    }
    namespace Nonechdatin6r{
        using Addr = Register::Address<0x400160d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> INDAT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INDAT0; 
    }
    namespace Nonechcfg7r1{
        using Addr = Register::Address<0x400160e0,0xffff0e10>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DATPACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> DATMPX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CHINSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CKABEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SCDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> SPICKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SITP; 
    }
    namespace Nonechcfg7r2{
        using Addr = Register::Address<0x400160e4,0x00000007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> OFFSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DTRBS; 
    }
    namespace Noneawscd7r{
        using Addr = Register::Address<0x400160e8,0xff200f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> AWFORD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> AWFOSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> BKSCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SCDT; 
    }
    namespace Nonechwdat7r{
        using Addr = Register::Address<0x400160ec,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> WDATA; 
    }
    namespace Nonechdatin7r{
        using Addr = Register::Address<0x400160f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> INDAT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INDAT0; 
    }
    namespace Nonedfsdm0_cr1{
        using Addr = Register::Address<0x40016100,0x98d198c4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> AWFSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> FAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> RCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> RDMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RCONT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RSWSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> JEXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> JEXTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> JDMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> JSCAN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> JSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> JSWSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DFEN; 
    }
    namespace Nonedfsdm0_cr2{
        using Addr = Register::Address<0x40016104,0xff000080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> AWDCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> EXCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CKABIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SCDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AWDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ROVRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> JOVRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REOCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> JEOCIE; 
    }
    namespace Nonedfsdm0_isr{
        using Addr = Register::Address<0x40016108,0x00009fe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> SCDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> CKABF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RCIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> JCIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AWDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ROVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> JOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REOCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> JEOCF; 
    }
    namespace Nonedfsdm0_icr{
        using Addr = Register::Address<0x4001610c,0x0000fff3>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> CLRSCDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> CLRCKABF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRROVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLRJOVRF; 
    }
    namespace Nonedfsdm0_jchgr{
        using Addr = Register::Address<0x40016110,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> JCHG; 
    }
    namespace Nonedfsdm0_fcr{
        using Addr = Register::Address<0x40016114,0x1c00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> FORD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> FOSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> IOSR; 
    }
    namespace Nonedfsdm0_jdatar{
        using Addr = Register::Address<0x40016118,0x000000f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> JDATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> JDATACH; 
    }
    namespace Nonedfsdm0_rdatar{
        using Addr = Register::Address<0x4001611c,0x000000e8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> RDATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RPEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> RDATACH; 
    }
    namespace Nonedfsdm0_awhtr{
        using Addr = Register::Address<0x40016120,0x000000f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> AWHT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> BKAWH; 
    }
    namespace Nonedfsdm0_awltr{
        using Addr = Register::Address<0x40016124,0x000000f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> AWLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> BKAWL; 
    }
    namespace Nonedfsdm0_awsr{
        using Addr = Register::Address<0x40016128,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> AWHTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AWLTF; 
    }
    namespace Nonedfsdm0_awcfr{
        using Addr = Register::Address<0x4001612c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> CLRAWHTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CLRAWLTF; 
    }
    namespace Nonedfsdm0_exmax{
        using Addr = Register::Address<0x40016130,0x000000f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> EXMAX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EXMAXCH; 
    }
    namespace Nonedfsdm0_exmin{
        using Addr = Register::Address<0x40016134,0x000000f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> EXMIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EXMINCH; 
    }
    namespace Nonedfsdm0_cnvtimr{
        using Addr = Register::Address<0x40016138,0x0000000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,4)> CNVCNT; 
    }
    namespace Nonedfsdm1_cr1{
        using Addr = Register::Address<0x40016200,0x98d198c4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> AWFSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> FAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> RCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> RDMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RCONT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RSWSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> JEXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> JEXTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> JDMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> JSCAN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> JSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> JSWSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DFEN; 
    }
    namespace Nonedfsdm1_cr2{
        using Addr = Register::Address<0x40016204,0xff000080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> AWDCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> EXCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CKABIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SCDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AWDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ROVRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> JOVRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REOCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> JEOCIE; 
    }
    namespace Nonedfsdm1_isr{
        using Addr = Register::Address<0x40016208,0x00009fe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> SCDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> CKABF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RCIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> JCIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AWDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ROVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> JOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REOCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> JEOCF; 
    }
    namespace Nonedfsdm1_icr{
        using Addr = Register::Address<0x4001620c,0x0000fff3>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> CLRSCDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> CLRCKABF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRROVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLRJOVRF; 
    }
    namespace Nonedfsdm1_jchgr{
        using Addr = Register::Address<0x40016210,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> JCHG; 
    }
    namespace Nonedfsdm1_fcr{
        using Addr = Register::Address<0x40016214,0x1c00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> FORD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> FOSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> IOSR; 
    }
    namespace Nonedfsdm1_jdatar{
        using Addr = Register::Address<0x40016218,0x000000f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> JDATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> JDATACH; 
    }
    namespace Nonedfsdm1_rdatar{
        using Addr = Register::Address<0x4001621c,0x000000e8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> RDATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RPEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> RDATACH; 
    }
    namespace Nonedfsdm1_awhtr{
        using Addr = Register::Address<0x40016220,0x000000f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> AWHT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> BKAWH; 
    }
    namespace Nonedfsdm1_awltr{
        using Addr = Register::Address<0x40016224,0x000000f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> AWLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> BKAWL; 
    }
    namespace Nonedfsdm1_awsr{
        using Addr = Register::Address<0x40016228,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> AWHTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AWLTF; 
    }
    namespace Nonedfsdm1_awcfr{
        using Addr = Register::Address<0x4001622c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> CLRAWHTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CLRAWLTF; 
    }
    namespace Nonedfsdm1_exmax{
        using Addr = Register::Address<0x40016230,0x000000f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> EXMAX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EXMAXCH; 
    }
    namespace Nonedfsdm1_exmin{
        using Addr = Register::Address<0x40016234,0x000000f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> EXMIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EXMINCH; 
    }
    namespace Nonedfsdm1_cnvtimr{
        using Addr = Register::Address<0x40016238,0x0000000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,4)> CNVCNT; 
    }
    namespace Nonedfsdm2_cr1{
        using Addr = Register::Address<0x40016300,0x98d198c4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> AWFSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> FAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> RCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> RDMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RCONT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RSWSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> JEXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> JEXTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> JDMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> JSCAN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> JSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> JSWSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DFEN; 
    }
    namespace Nonedfsdm2_cr2{
        using Addr = Register::Address<0x40016304,0xff000080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> AWDCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> EXCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CKABIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SCDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AWDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ROVRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> JOVRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REOCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> JEOCIE; 
    }
    namespace Nonedfsdm2_isr{
        using Addr = Register::Address<0x40016308,0x00009fe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> SCDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> CKABF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RCIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> JCIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AWDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ROVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> JOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REOCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> JEOCF; 
    }
    namespace Nonedfsdm2_icr{
        using Addr = Register::Address<0x4001630c,0x0000fff3>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> CLRSCDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> CLRCKABF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRROVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLRJOVRF; 
    }
    namespace Nonedfsdm2_jchgr{
        using Addr = Register::Address<0x40016310,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> JCHG; 
    }
    namespace Nonedfsdm2_fcr{
        using Addr = Register::Address<0x40016314,0x1c00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> FORD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> FOSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> IOSR; 
    }
    namespace Nonedfsdm2_jdatar{
        using Addr = Register::Address<0x40016318,0x000000f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> JDATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> JDATACH; 
    }
    namespace Nonedfsdm2_rdatar{
        using Addr = Register::Address<0x4001631c,0x000000e8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> RDATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RPEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> RDATACH; 
    }
    namespace Nonedfsdm2_awhtr{
        using Addr = Register::Address<0x40016320,0x000000f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> AWHT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> BKAWH; 
    }
    namespace Nonedfsdm2_awltr{
        using Addr = Register::Address<0x40016324,0x000000f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> AWLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> BKAWL; 
    }
    namespace Nonedfsdm2_awsr{
        using Addr = Register::Address<0x40016328,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> AWHTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AWLTF; 
    }
    namespace Nonedfsdm2_awcfr{
        using Addr = Register::Address<0x4001632c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> CLRAWHTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CLRAWLTF; 
    }
    namespace Nonedfsdm2_exmax{
        using Addr = Register::Address<0x40016330,0x000000f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> EXMAX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EXMAXCH; 
    }
    namespace Nonedfsdm2_exmin{
        using Addr = Register::Address<0x40016334,0x000000f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> EXMIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EXMINCH; 
    }
    namespace Nonedfsdm2_cnvtimr{
        using Addr = Register::Address<0x40016338,0x0000000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,4)> CNVCNT; 
    }
    namespace Nonedfsdm3_cr1{
        using Addr = Register::Address<0x40016400,0x98d198c4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> AWFSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> FAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> RCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> RDMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RCONT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RSWSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> JEXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> JEXTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> JDMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> JSCAN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> JSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> JSWSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DFEN; 
    }
    namespace Nonedfsdm3_cr2{
        using Addr = Register::Address<0x40016404,0xff000080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> AWDCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> EXCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CKABIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SCDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AWDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ROVRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> JOVRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REOCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> JEOCIE; 
    }
    namespace Nonedfsdm3_isr{
        using Addr = Register::Address<0x40016408,0x00009fe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> SCDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> CKABF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RCIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> JCIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AWDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ROVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> JOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REOCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> JEOCF; 
    }
    namespace Nonedfsdm3_icr{
        using Addr = Register::Address<0x4001640c,0x0000fff3>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> CLRSCDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> CLRCKABF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRROVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLRJOVRF; 
    }
    namespace Nonedfsdm3_jchgr{
        using Addr = Register::Address<0x40016410,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> JCHG; 
    }
    namespace Nonedfsdm3_fcr{
        using Addr = Register::Address<0x40016414,0x1c00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> FORD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> FOSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> IOSR; 
    }
    namespace Nonedfsdm3_jdatar{
        using Addr = Register::Address<0x40016418,0x000000f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> JDATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> JDATACH; 
    }
    namespace Nonedfsdm3_rdatar{
        using Addr = Register::Address<0x4001641c,0x000000e8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> RDATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RPEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> RDATACH; 
    }
    namespace Nonedfsdm3_awhtr{
        using Addr = Register::Address<0x40016420,0x000000f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> AWHT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> BKAWH; 
    }
    namespace Nonedfsdm3_awltr{
        using Addr = Register::Address<0x40016424,0x000000f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> AWLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> BKAWL; 
    }
    namespace Nonedfsdm3_awsr{
        using Addr = Register::Address<0x40016428,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> AWHTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AWLTF; 
    }
    namespace Nonedfsdm3_awcfr{
        using Addr = Register::Address<0x4001642c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> CLRAWHTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CLRAWLTF; 
    }
    namespace Nonedfsdm3_exmax{
        using Addr = Register::Address<0x40016430,0x000000f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> EXMAX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EXMAXCH; 
    }
    namespace Nonedfsdm3_exmin{
        using Addr = Register::Address<0x40016434,0x000000f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> EXMIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EXMINCH; 
    }
    namespace Nonedfsdm3_cnvtimr{
        using Addr = Register::Address<0x40016438,0x0000000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,4)> CNVCNT; 
    }
}
