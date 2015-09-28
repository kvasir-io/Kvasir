#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneclk{
        using Addr = Register::Address<0x40051000,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ADCLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> ADSH; 
    }
    namespace Nonemod0{
        using Addr = Register::Address<0x40051004,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HPADS; 
    }
    namespace Nonemod1{
        using Addr = Register::Address<0x40051008,0xffffff10>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADHWE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADHWS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HPADHWE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HPADHWS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RCUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> I2AD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DACON; 
    }
    namespace Nonemod2{
        using Addr = Register::Address<0x4005100c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ADCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> HPADCH; 
    }
    namespace Nonemod3{
        using Addr = Register::Address<0x40051010,0xffffff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SCAN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REPEAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> ITM; 
    }
    namespace Nonemod4{
        using Addr = Register::Address<0x40051014,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SCANSTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> SCANAREA; 
    }
    namespace Nonemod5{
        using Addr = Register::Address<0x40051018,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HPADBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HPEOCF; 
    }
    namespace Nonemod6{
        using Addr = Register::Address<0x4005101c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ADRST; 
    }
    namespace Nonecmpcr0{
        using Addr = Register::Address<0x40051024,0xfffff040>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> AINS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADBIG0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CMPCOND0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CMP0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CMPCMT0; 
    }
    namespace Nonecmpcr1{
        using Addr = Register::Address<0x40051028,0xfffff040>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> AINS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADBIG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CMPCOND1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CMP1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CMPCMT1; 
    }
    namespace Nonecmp0{
        using Addr = Register::Address<0x4005102c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> AD0CMP; 
    }
    namespace Nonecmp1{
        using Addr = Register::Address<0x40051030,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> AD1CMP; 
    }
    namespace Nonereg00{
        using Addr = Register::Address<0x40051034,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> _ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> _ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> _ADR; 
    }
    namespace Nonereg01{
        using Addr = Register::Address<0x40051038,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> _ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> _ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> _ADR; 
    }
    namespace Nonereg02{
        using Addr = Register::Address<0x4005103c,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> _ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> _ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> _ADR; 
    }
    namespace Nonereg03{
        using Addr = Register::Address<0x40051040,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> _ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> _ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> _ADR; 
    }
    namespace Nonereg04{
        using Addr = Register::Address<0x40051044,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> _ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> _ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> _ADR; 
    }
    namespace Nonereg05{
        using Addr = Register::Address<0x40051048,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> _ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> _ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> _ADR; 
    }
    namespace Nonereg06{
        using Addr = Register::Address<0x4005104c,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> _ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> _ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> _ADR; 
    }
    namespace Nonereg07{
        using Addr = Register::Address<0x40051050,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> _ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> _ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> _ADR; 
    }
    namespace Nonereg08{
        using Addr = Register::Address<0x40051054,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> _ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> _ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> _ADR; 
    }
    namespace Nonereg09{
        using Addr = Register::Address<0x40051058,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> _ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> _ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> _ADR; 
    }
    namespace Nonereg10{
        using Addr = Register::Address<0x4005105c,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> _ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> _ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> _ADR; 
    }
    namespace Nonereg11{
        using Addr = Register::Address<0x40051060,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> _ADRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> _ADOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> _ADR; 
    }
    namespace Noneregsp{
        using Addr = Register::Address<0x40051074,0x000cc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADSPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ADSPRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ADOVRSPF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> _ADSPRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> _ADOVRSPF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> _ADSPR; 
    }
}
