#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Block Protect
    namespace Noneconfig0{    ///<Block protect configuration register 0
        using Addr = Register::Address<0x40000600,0x00000000,0,unsigned>;
        ///Enable protection for region 0. Write '0' has no effect.
        enum class region0Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region0ValC{
            constexpr MPL::Value<region0Val,region0Val::disabled> disabled{};
            constexpr MPL::Value<region0Val,region0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,region0Val> region0{}; 
        ///Enable protection for region 1. Write '0' has no effect.
        enum class region1Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region1ValC{
            constexpr MPL::Value<region1Val,region1Val::disabled> disabled{};
            constexpr MPL::Value<region1Val,region1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,region1Val> region1{}; 
        ///Enable protection for region 2. Write '0' has no effect.
        enum class region2Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region2ValC{
            constexpr MPL::Value<region2Val,region2Val::disabled> disabled{};
            constexpr MPL::Value<region2Val,region2Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,region2Val> region2{}; 
        ///Enable protection for region 3. Write '0' has no effect.
        enum class region3Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region3ValC{
            constexpr MPL::Value<region3Val,region3Val::disabled> disabled{};
            constexpr MPL::Value<region3Val,region3Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,region3Val> region3{}; 
        ///Enable protection for region 4. Write '0' has no effect.
        enum class region4Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region4ValC{
            constexpr MPL::Value<region4Val,region4Val::disabled> disabled{};
            constexpr MPL::Value<region4Val,region4Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,region4Val> region4{}; 
        ///Enable protection for region 5. Write '0' has no effect.
        enum class region5Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region5ValC{
            constexpr MPL::Value<region5Val,region5Val::disabled> disabled{};
            constexpr MPL::Value<region5Val,region5Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,region5Val> region5{}; 
        ///Enable protection for region 6. Write '0' has no effect.
        enum class region6Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region6ValC{
            constexpr MPL::Value<region6Val,region6Val::disabled> disabled{};
            constexpr MPL::Value<region6Val,region6Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,region6Val> region6{}; 
        ///Enable protection for region 7. Write '0' has no effect.
        enum class region7Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region7ValC{
            constexpr MPL::Value<region7Val,region7Val::disabled> disabled{};
            constexpr MPL::Value<region7Val,region7Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,region7Val> region7{}; 
        ///Enable protection for region 8. Write '0' has no effect.
        enum class region8Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region8ValC{
            constexpr MPL::Value<region8Val,region8Val::disabled> disabled{};
            constexpr MPL::Value<region8Val,region8Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,region8Val> region8{}; 
        ///Enable protection for region 9. Write '0' has no effect.
        enum class region9Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region9ValC{
            constexpr MPL::Value<region9Val,region9Val::disabled> disabled{};
            constexpr MPL::Value<region9Val,region9Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,region9Val> region9{}; 
        ///Enable protection for region 10. Write '0' has no effect.
        enum class region10Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region10ValC{
            constexpr MPL::Value<region10Val,region10Val::disabled> disabled{};
            constexpr MPL::Value<region10Val,region10Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,region10Val> region10{}; 
        ///Enable protection for region 11. Write '0' has no effect.
        enum class region11Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region11ValC{
            constexpr MPL::Value<region11Val,region11Val::disabled> disabled{};
            constexpr MPL::Value<region11Val,region11Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,region11Val> region11{}; 
        ///Enable protection for region 12. Write '0' has no effect.
        enum class region12Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region12ValC{
            constexpr MPL::Value<region12Val,region12Val::disabled> disabled{};
            constexpr MPL::Value<region12Val,region12Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,region12Val> region12{}; 
        ///Enable protection for region 13. Write '0' has no effect.
        enum class region13Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region13ValC{
            constexpr MPL::Value<region13Val,region13Val::disabled> disabled{};
            constexpr MPL::Value<region13Val,region13Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,region13Val> region13{}; 
        ///Enable protection for region 14. Write '0' has no effect.
        enum class region14Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region14ValC{
            constexpr MPL::Value<region14Val,region14Val::disabled> disabled{};
            constexpr MPL::Value<region14Val,region14Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,region14Val> region14{}; 
        ///Enable protection for region 15. Write '0' has no effect.
        enum class region15Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region15ValC{
            constexpr MPL::Value<region15Val,region15Val::disabled> disabled{};
            constexpr MPL::Value<region15Val,region15Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,region15Val> region15{}; 
        ///Enable protection for region 16. Write '0' has no effect.
        enum class region16Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region16ValC{
            constexpr MPL::Value<region16Val,region16Val::disabled> disabled{};
            constexpr MPL::Value<region16Val,region16Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,region16Val> region16{}; 
        ///Enable protection for region 17. Write '0' has no effect.
        enum class region17Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region17ValC{
            constexpr MPL::Value<region17Val,region17Val::disabled> disabled{};
            constexpr MPL::Value<region17Val,region17Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,region17Val> region17{}; 
        ///Enable protection for region 18. Write '0' has no effect.
        enum class region18Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region18ValC{
            constexpr MPL::Value<region18Val,region18Val::disabled> disabled{};
            constexpr MPL::Value<region18Val,region18Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,region18Val> region18{}; 
        ///Enable protection for region 19. Write '0' has no effect.
        enum class region19Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region19ValC{
            constexpr MPL::Value<region19Val,region19Val::disabled> disabled{};
            constexpr MPL::Value<region19Val,region19Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,region19Val> region19{}; 
        ///Enable protection for region 20. Write '0' has no effect.
        enum class region20Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region20ValC{
            constexpr MPL::Value<region20Val,region20Val::disabled> disabled{};
            constexpr MPL::Value<region20Val,region20Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,region20Val> region20{}; 
        ///Enable protection for region 21. Write '0' has no effect.
        enum class region21Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region21ValC{
            constexpr MPL::Value<region21Val,region21Val::disabled> disabled{};
            constexpr MPL::Value<region21Val,region21Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,region21Val> region21{}; 
        ///Enable protection for region 22. Write '0' has no effect.
        enum class region22Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region22ValC{
            constexpr MPL::Value<region22Val,region22Val::disabled> disabled{};
            constexpr MPL::Value<region22Val,region22Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,region22Val> region22{}; 
        ///Enable protection for region 23. Write '0' has no effect.
        enum class region23Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region23ValC{
            constexpr MPL::Value<region23Val,region23Val::disabled> disabled{};
            constexpr MPL::Value<region23Val,region23Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,region23Val> region23{}; 
        ///Enable protection for region 24. Write '0' has no effect.
        enum class region24Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region24ValC{
            constexpr MPL::Value<region24Val,region24Val::disabled> disabled{};
            constexpr MPL::Value<region24Val,region24Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,region24Val> region24{}; 
        ///Enable protection for region 25. Write '0' has no effect.
        enum class region25Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region25ValC{
            constexpr MPL::Value<region25Val,region25Val::disabled> disabled{};
            constexpr MPL::Value<region25Val,region25Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,region25Val> region25{}; 
        ///Enable protection for region 26. Write '0' has no effect.
        enum class region26Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region26ValC{
            constexpr MPL::Value<region26Val,region26Val::disabled> disabled{};
            constexpr MPL::Value<region26Val,region26Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,region26Val> region26{}; 
        ///Enable protection for region 27. Write '0' has no effect.
        enum class region27Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region27ValC{
            constexpr MPL::Value<region27Val,region27Val::disabled> disabled{};
            constexpr MPL::Value<region27Val,region27Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,region27Val> region27{}; 
        ///Enable protection for region 28. Write '0' has no effect.
        enum class region28Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region28ValC{
            constexpr MPL::Value<region28Val,region28Val::disabled> disabled{};
            constexpr MPL::Value<region28Val,region28Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,region28Val> region28{}; 
        ///Enable protection for region 29. Write '0' has no effect.
        enum class region29Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region29ValC{
            constexpr MPL::Value<region29Val,region29Val::disabled> disabled{};
            constexpr MPL::Value<region29Val,region29Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,region29Val> region29{}; 
        ///Enable protection for region 30. Write '0' has no effect.
        enum class region30Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region30ValC{
            constexpr MPL::Value<region30Val,region30Val::disabled> disabled{};
            constexpr MPL::Value<region30Val,region30Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,region30Val> region30{}; 
        ///Enable protection for region 31. Write '0' has no effect.
        enum class region31Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        namespace region31ValC{
            constexpr MPL::Value<region31Val,region31Val::disabled> disabled{};
            constexpr MPL::Value<region31Val,region31Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,region31Val> region31{}; 
    }
    namespace Noneconfig1{    ///<Block protect configuration register 1
        using Addr = Register::Address<0x40000604,0x00000000,0,unsigned>;
        ///Enable protection for region 32. Write '0' has no effect.
        enum class region32Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region32ValC{
            constexpr MPL::Value<region32Val,region32Val::disabled> disabled{};
            constexpr MPL::Value<region32Val,region32Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,region32Val> region32{}; 
        ///Enable protection for region 33. Write '0' has no effect.
        enum class region33Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region33ValC{
            constexpr MPL::Value<region33Val,region33Val::disabled> disabled{};
            constexpr MPL::Value<region33Val,region33Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,region33Val> region33{}; 
        ///Enable protection for region 34. Write '0' has no effect.
        enum class region34Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region34ValC{
            constexpr MPL::Value<region34Val,region34Val::disabled> disabled{};
            constexpr MPL::Value<region34Val,region34Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,region34Val> region34{}; 
        ///Enable protection for region 35. Write '0' has no effect.
        enum class region35Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region35ValC{
            constexpr MPL::Value<region35Val,region35Val::disabled> disabled{};
            constexpr MPL::Value<region35Val,region35Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,region35Val> region35{}; 
        ///Enable protection for region 36. Write '0' has no effect.
        enum class region36Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region36ValC{
            constexpr MPL::Value<region36Val,region36Val::disabled> disabled{};
            constexpr MPL::Value<region36Val,region36Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,region36Val> region36{}; 
        ///Enable protection for region 37. Write '0' has no effect.
        enum class region37Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region37ValC{
            constexpr MPL::Value<region37Val,region37Val::disabled> disabled{};
            constexpr MPL::Value<region37Val,region37Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,region37Val> region37{}; 
        ///Enable protection for region 38. Write '0' has no effect.
        enum class region38Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region38ValC{
            constexpr MPL::Value<region38Val,region38Val::disabled> disabled{};
            constexpr MPL::Value<region38Val,region38Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,region38Val> region38{}; 
        ///Enable protection for region 39. Write '0' has no effect.
        enum class region39Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region39ValC{
            constexpr MPL::Value<region39Val,region39Val::disabled> disabled{};
            constexpr MPL::Value<region39Val,region39Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,region39Val> region39{}; 
        ///Enable protection for region 40. Write '0' has no effect.
        enum class region40Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region40ValC{
            constexpr MPL::Value<region40Val,region40Val::disabled> disabled{};
            constexpr MPL::Value<region40Val,region40Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,region40Val> region40{}; 
        ///Enable protection for region 41. Write '0' has no effect.
        enum class region41Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region41ValC{
            constexpr MPL::Value<region41Val,region41Val::disabled> disabled{};
            constexpr MPL::Value<region41Val,region41Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,region41Val> region41{}; 
        ///Enable protection for region 42. Write '0' has no effect.
        enum class region42Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region42ValC{
            constexpr MPL::Value<region42Val,region42Val::disabled> disabled{};
            constexpr MPL::Value<region42Val,region42Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,region42Val> region42{}; 
        ///Enable protection for region 43. Write '0' has no effect.
        enum class region43Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region43ValC{
            constexpr MPL::Value<region43Val,region43Val::disabled> disabled{};
            constexpr MPL::Value<region43Val,region43Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,region43Val> region43{}; 
        ///Enable protection for region 44. Write '0' has no effect.
        enum class region44Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region44ValC{
            constexpr MPL::Value<region44Val,region44Val::disabled> disabled{};
            constexpr MPL::Value<region44Val,region44Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,region44Val> region44{}; 
        ///Enable protection for region 45. Write '0' has no effect.
        enum class region45Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region45ValC{
            constexpr MPL::Value<region45Val,region45Val::disabled> disabled{};
            constexpr MPL::Value<region45Val,region45Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,region45Val> region45{}; 
        ///Enable protection for region 46. Write '0' has no effect.
        enum class region46Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region46ValC{
            constexpr MPL::Value<region46Val,region46Val::disabled> disabled{};
            constexpr MPL::Value<region46Val,region46Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,region46Val> region46{}; 
        ///Enable protection for region 47. Write '0' has no effect.
        enum class region47Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region47ValC{
            constexpr MPL::Value<region47Val,region47Val::disabled> disabled{};
            constexpr MPL::Value<region47Val,region47Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,region47Val> region47{}; 
        ///Enable protection for region 48. Write '0' has no effect.
        enum class region48Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region48ValC{
            constexpr MPL::Value<region48Val,region48Val::disabled> disabled{};
            constexpr MPL::Value<region48Val,region48Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,region48Val> region48{}; 
        ///Enable protection for region 49. Write '0' has no effect.
        enum class region49Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region49ValC{
            constexpr MPL::Value<region49Val,region49Val::disabled> disabled{};
            constexpr MPL::Value<region49Val,region49Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,region49Val> region49{}; 
        ///Enable protection for region 50. Write '0' has no effect.
        enum class region50Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region50ValC{
            constexpr MPL::Value<region50Val,region50Val::disabled> disabled{};
            constexpr MPL::Value<region50Val,region50Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,region50Val> region50{}; 
        ///Enable protection for region 51. Write '0' has no effect.
        enum class region51Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region51ValC{
            constexpr MPL::Value<region51Val,region51Val::disabled> disabled{};
            constexpr MPL::Value<region51Val,region51Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,region51Val> region51{}; 
        ///Enable protection for region 52. Write '0' has no effect.
        enum class region52Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region52ValC{
            constexpr MPL::Value<region52Val,region52Val::disabled> disabled{};
            constexpr MPL::Value<region52Val,region52Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,region52Val> region52{}; 
        ///Enable protection for region 53. Write '0' has no effect.
        enum class region53Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region53ValC{
            constexpr MPL::Value<region53Val,region53Val::disabled> disabled{};
            constexpr MPL::Value<region53Val,region53Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,region53Val> region53{}; 
        ///Enable protection for region 54. Write '0' has no effect.
        enum class region54Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region54ValC{
            constexpr MPL::Value<region54Val,region54Val::disabled> disabled{};
            constexpr MPL::Value<region54Val,region54Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,region54Val> region54{}; 
        ///Enable protection for region 55. Write '0' has no effect.
        enum class region55Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region55ValC{
            constexpr MPL::Value<region55Val,region55Val::disabled> disabled{};
            constexpr MPL::Value<region55Val,region55Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,region55Val> region55{}; 
        ///Enable protection for region 56. Write '0' has no effect.
        enum class region56Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region56ValC{
            constexpr MPL::Value<region56Val,region56Val::disabled> disabled{};
            constexpr MPL::Value<region56Val,region56Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,region56Val> region56{}; 
        ///Enable protection for region 57. Write '0' has no effect.
        enum class region57Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region57ValC{
            constexpr MPL::Value<region57Val,region57Val::disabled> disabled{};
            constexpr MPL::Value<region57Val,region57Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,region57Val> region57{}; 
        ///Enable protection for region 58. Write '0' has no effect.
        enum class region58Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region58ValC{
            constexpr MPL::Value<region58Val,region58Val::disabled> disabled{};
            constexpr MPL::Value<region58Val,region58Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,region58Val> region58{}; 
        ///Enable protection for region 59. Write '0' has no effect.
        enum class region59Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region59ValC{
            constexpr MPL::Value<region59Val,region59Val::disabled> disabled{};
            constexpr MPL::Value<region59Val,region59Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,region59Val> region59{}; 
        ///Enable protection for region 60. Write '0' has no effect.
        enum class region60Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region60ValC{
            constexpr MPL::Value<region60Val,region60Val::disabled> disabled{};
            constexpr MPL::Value<region60Val,region60Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,region60Val> region60{}; 
        ///Enable protection for region 61. Write '0' has no effect.
        enum class region61Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region61ValC{
            constexpr MPL::Value<region61Val,region61Val::disabled> disabled{};
            constexpr MPL::Value<region61Val,region61Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,region61Val> region61{}; 
        ///Enable protection for region 62. Write '0' has no effect.
        enum class region62Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region62ValC{
            constexpr MPL::Value<region62Val,region62Val::disabled> disabled{};
            constexpr MPL::Value<region62Val,region62Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,region62Val> region62{}; 
        ///Enable protection for region 63. Write '0' has no effect.
        enum class region63Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region63ValC{
            constexpr MPL::Value<region63Val,region63Val::disabled> disabled{};
            constexpr MPL::Value<region63Val,region63Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,region63Val> region63{}; 
    }
    namespace Nonedisableindebug{    ///<Disable protection mechanism in debug mode
        using Addr = Register::Address<0x40000608,0xfffffffe,0,unsigned>;
        ///Disable the protection mechanism for NVM regions while in debug mode. This register will only disable the protection mechanism if the device is in debug mode.
        enum class disableindebugVal {
            disabled=0x00000001,     ///<Disable in debug
            enabled=0x00000000,     ///<Enable in debug
        };
        namespace disableindebugValC{
            constexpr MPL::Value<disableindebugVal,disableindebugVal::disabled> disabled{};
            constexpr MPL::Value<disableindebugVal,disableindebugVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,disableindebugVal> disableindebug{}; 
    }
    namespace Noneunused0{    ///<Unspecified
        using Addr = Register::Address<0x4000060c,0xffffffff,0,unsigned>;
    }
    namespace Noneconfig2{    ///<Block protect configuration register 2
        using Addr = Register::Address<0x40000610,0x00000000,0,unsigned>;
        ///Enable protection for region 64. Write '0' has no effect.
        enum class region64Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region64ValC{
            constexpr MPL::Value<region64Val,region64Val::disabled> disabled{};
            constexpr MPL::Value<region64Val,region64Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,region64Val> region64{}; 
        ///Enable protection for region 65. Write '0' has no effect.
        enum class region65Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region65ValC{
            constexpr MPL::Value<region65Val,region65Val::disabled> disabled{};
            constexpr MPL::Value<region65Val,region65Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,region65Val> region65{}; 
        ///Enable protection for region 66. Write '0' has no effect.
        enum class region66Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region66ValC{
            constexpr MPL::Value<region66Val,region66Val::disabled> disabled{};
            constexpr MPL::Value<region66Val,region66Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,region66Val> region66{}; 
        ///Enable protection for region 67. Write '0' has no effect.
        enum class region67Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region67ValC{
            constexpr MPL::Value<region67Val,region67Val::disabled> disabled{};
            constexpr MPL::Value<region67Val,region67Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,region67Val> region67{}; 
        ///Enable protection for region 68. Write '0' has no effect.
        enum class region68Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region68ValC{
            constexpr MPL::Value<region68Val,region68Val::disabled> disabled{};
            constexpr MPL::Value<region68Val,region68Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,region68Val> region68{}; 
        ///Enable protection for region 69. Write '0' has no effect.
        enum class region69Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region69ValC{
            constexpr MPL::Value<region69Val,region69Val::disabled> disabled{};
            constexpr MPL::Value<region69Val,region69Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,region69Val> region69{}; 
        ///Enable protection for region 70. Write '0' has no effect.
        enum class region70Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region70ValC{
            constexpr MPL::Value<region70Val,region70Val::disabled> disabled{};
            constexpr MPL::Value<region70Val,region70Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,region70Val> region70{}; 
        ///Enable protection for region 71. Write '0' has no effect.
        enum class region71Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region71ValC{
            constexpr MPL::Value<region71Val,region71Val::disabled> disabled{};
            constexpr MPL::Value<region71Val,region71Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,region71Val> region71{}; 
        ///Enable protection for region 72. Write '0' has no effect.
        enum class region72Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region72ValC{
            constexpr MPL::Value<region72Val,region72Val::disabled> disabled{};
            constexpr MPL::Value<region72Val,region72Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,region72Val> region72{}; 
        ///Enable protection for region 73. Write '0' has no effect.
        enum class region73Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region73ValC{
            constexpr MPL::Value<region73Val,region73Val::disabled> disabled{};
            constexpr MPL::Value<region73Val,region73Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,region73Val> region73{}; 
        ///Enable protection for region 74. Write '0' has no effect.
        enum class region74Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region74ValC{
            constexpr MPL::Value<region74Val,region74Val::disabled> disabled{};
            constexpr MPL::Value<region74Val,region74Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,region74Val> region74{}; 
        ///Enable protection for region 75. Write '0' has no effect.
        enum class region75Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region75ValC{
            constexpr MPL::Value<region75Val,region75Val::disabled> disabled{};
            constexpr MPL::Value<region75Val,region75Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,region75Val> region75{}; 
        ///Enable protection for region 76. Write '0' has no effect.
        enum class region76Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region76ValC{
            constexpr MPL::Value<region76Val,region76Val::disabled> disabled{};
            constexpr MPL::Value<region76Val,region76Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,region76Val> region76{}; 
        ///Enable protection for region 77. Write '0' has no effect.
        enum class region77Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region77ValC{
            constexpr MPL::Value<region77Val,region77Val::disabled> disabled{};
            constexpr MPL::Value<region77Val,region77Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,region77Val> region77{}; 
        ///Enable protection for region 78. Write '0' has no effect.
        enum class region78Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region78ValC{
            constexpr MPL::Value<region78Val,region78Val::disabled> disabled{};
            constexpr MPL::Value<region78Val,region78Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,region78Val> region78{}; 
        ///Enable protection for region 79. Write '0' has no effect.
        enum class region79Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region79ValC{
            constexpr MPL::Value<region79Val,region79Val::disabled> disabled{};
            constexpr MPL::Value<region79Val,region79Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,region79Val> region79{}; 
        ///Enable protection for region 80. Write '0' has no effect.
        enum class region80Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region80ValC{
            constexpr MPL::Value<region80Val,region80Val::disabled> disabled{};
            constexpr MPL::Value<region80Val,region80Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,region80Val> region80{}; 
        ///Enable protection for region 81. Write '0' has no effect.
        enum class region81Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region81ValC{
            constexpr MPL::Value<region81Val,region81Val::disabled> disabled{};
            constexpr MPL::Value<region81Val,region81Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,region81Val> region81{}; 
        ///Enable protection for region 82. Write '0' has no effect.
        enum class region82Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region82ValC{
            constexpr MPL::Value<region82Val,region82Val::disabled> disabled{};
            constexpr MPL::Value<region82Val,region82Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,region82Val> region82{}; 
        ///Enable protection for region 83. Write '0' has no effect.
        enum class region83Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region83ValC{
            constexpr MPL::Value<region83Val,region83Val::disabled> disabled{};
            constexpr MPL::Value<region83Val,region83Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,region83Val> region83{}; 
        ///Enable protection for region 84. Write '0' has no effect.
        enum class region84Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region84ValC{
            constexpr MPL::Value<region84Val,region84Val::disabled> disabled{};
            constexpr MPL::Value<region84Val,region84Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,region84Val> region84{}; 
        ///Enable protection for region 85. Write '0' has no effect.
        enum class region85Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region85ValC{
            constexpr MPL::Value<region85Val,region85Val::disabled> disabled{};
            constexpr MPL::Value<region85Val,region85Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,region85Val> region85{}; 
        ///Enable protection for region 86. Write '0' has no effect.
        enum class region86Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region86ValC{
            constexpr MPL::Value<region86Val,region86Val::disabled> disabled{};
            constexpr MPL::Value<region86Val,region86Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,region86Val> region86{}; 
        ///Enable protection for region 87. Write '0' has no effect.
        enum class region87Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region87ValC{
            constexpr MPL::Value<region87Val,region87Val::disabled> disabled{};
            constexpr MPL::Value<region87Val,region87Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,region87Val> region87{}; 
        ///Enable protection for region 88. Write '0' has no effect.
        enum class region88Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region88ValC{
            constexpr MPL::Value<region88Val,region88Val::disabled> disabled{};
            constexpr MPL::Value<region88Val,region88Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,region88Val> region88{}; 
        ///Enable protection for region 89. Write '0' has no effect.
        enum class region89Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region89ValC{
            constexpr MPL::Value<region89Val,region89Val::disabled> disabled{};
            constexpr MPL::Value<region89Val,region89Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,region89Val> region89{}; 
        ///Enable protection for region 90. Write '0' has no effect.
        enum class region90Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region90ValC{
            constexpr MPL::Value<region90Val,region90Val::disabled> disabled{};
            constexpr MPL::Value<region90Val,region90Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,region90Val> region90{}; 
        ///Enable protection for region 91. Write '0' has no effect.
        enum class region91Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region91ValC{
            constexpr MPL::Value<region91Val,region91Val::disabled> disabled{};
            constexpr MPL::Value<region91Val,region91Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,region91Val> region91{}; 
        ///Enable protection for region 92. Write '0' has no effect.
        enum class region92Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region92ValC{
            constexpr MPL::Value<region92Val,region92Val::disabled> disabled{};
            constexpr MPL::Value<region92Val,region92Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,region92Val> region92{}; 
        ///Enable protection for region 93. Write '0' has no effect.
        enum class region93Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region93ValC{
            constexpr MPL::Value<region93Val,region93Val::disabled> disabled{};
            constexpr MPL::Value<region93Val,region93Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,region93Val> region93{}; 
        ///Enable protection for region 94. Write '0' has no effect.
        enum class region94Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region94ValC{
            constexpr MPL::Value<region94Val,region94Val::disabled> disabled{};
            constexpr MPL::Value<region94Val,region94Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,region94Val> region94{}; 
        ///Enable protection for region 95. Write '0' has no effect.
        enum class region95Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region95ValC{
            constexpr MPL::Value<region95Val,region95Val::disabled> disabled{};
            constexpr MPL::Value<region95Val,region95Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,region95Val> region95{}; 
    }
    namespace Noneconfig3{    ///<Block protect configuration register 3
        using Addr = Register::Address<0x40000614,0x00000000,0,unsigned>;
        ///Enable protection for region 96. Write '0' has no effect.
        enum class region96Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region96ValC{
            constexpr MPL::Value<region96Val,region96Val::disabled> disabled{};
            constexpr MPL::Value<region96Val,region96Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,region96Val> region96{}; 
        ///Enable protection for region 97. Write '0' has no effect.
        enum class region97Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region97ValC{
            constexpr MPL::Value<region97Val,region97Val::disabled> disabled{};
            constexpr MPL::Value<region97Val,region97Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,region97Val> region97{}; 
        ///Enable protection for region 98. Write '0' has no effect.
        enum class region98Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region98ValC{
            constexpr MPL::Value<region98Val,region98Val::disabled> disabled{};
            constexpr MPL::Value<region98Val,region98Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,region98Val> region98{}; 
        ///Enable protection for region 99. Write '0' has no effect.
        enum class region99Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region99ValC{
            constexpr MPL::Value<region99Val,region99Val::disabled> disabled{};
            constexpr MPL::Value<region99Val,region99Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,region99Val> region99{}; 
        ///Enable protection for region 100. Write '0' has no effect.
        enum class region100Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region100ValC{
            constexpr MPL::Value<region100Val,region100Val::disabled> disabled{};
            constexpr MPL::Value<region100Val,region100Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,region100Val> region100{}; 
        ///Enable protection for region 101. Write '0' has no effect.
        enum class region101Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region101ValC{
            constexpr MPL::Value<region101Val,region101Val::disabled> disabled{};
            constexpr MPL::Value<region101Val,region101Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,region101Val> region101{}; 
        ///Enable protection for region 102. Write '0' has no effect.
        enum class region102Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region102ValC{
            constexpr MPL::Value<region102Val,region102Val::disabled> disabled{};
            constexpr MPL::Value<region102Val,region102Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,region102Val> region102{}; 
        ///Enable protection for region 103. Write '0' has no effect.
        enum class region103Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region103ValC{
            constexpr MPL::Value<region103Val,region103Val::disabled> disabled{};
            constexpr MPL::Value<region103Val,region103Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,region103Val> region103{}; 
        ///Enable protection for region 104. Write '0' has no effect.
        enum class region104Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region104ValC{
            constexpr MPL::Value<region104Val,region104Val::disabled> disabled{};
            constexpr MPL::Value<region104Val,region104Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,region104Val> region104{}; 
        ///Enable protection for region 105. Write '0' has no effect.
        enum class region105Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region105ValC{
            constexpr MPL::Value<region105Val,region105Val::disabled> disabled{};
            constexpr MPL::Value<region105Val,region105Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,region105Val> region105{}; 
        ///Enable protection for region 106. Write '0' has no effect.
        enum class region106Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region106ValC{
            constexpr MPL::Value<region106Val,region106Val::disabled> disabled{};
            constexpr MPL::Value<region106Val,region106Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,region106Val> region106{}; 
        ///Enable protection for region 107. Write '0' has no effect.
        enum class region107Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region107ValC{
            constexpr MPL::Value<region107Val,region107Val::disabled> disabled{};
            constexpr MPL::Value<region107Val,region107Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,region107Val> region107{}; 
        ///Enable protection for region 108. Write '0' has no effect.
        enum class region108Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region108ValC{
            constexpr MPL::Value<region108Val,region108Val::disabled> disabled{};
            constexpr MPL::Value<region108Val,region108Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,region108Val> region108{}; 
        ///Enable protection for region 109. Write '0' has no effect.
        enum class region109Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region109ValC{
            constexpr MPL::Value<region109Val,region109Val::disabled> disabled{};
            constexpr MPL::Value<region109Val,region109Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,region109Val> region109{}; 
        ///Enable protection for region 110. Write '0' has no effect.
        enum class region110Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region110ValC{
            constexpr MPL::Value<region110Val,region110Val::disabled> disabled{};
            constexpr MPL::Value<region110Val,region110Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,region110Val> region110{}; 
        ///Enable protection for region 111. Write '0' has no effect.
        enum class region111Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region111ValC{
            constexpr MPL::Value<region111Val,region111Val::disabled> disabled{};
            constexpr MPL::Value<region111Val,region111Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,region111Val> region111{}; 
        ///Enable protection for region 112. Write '0' has no effect.
        enum class region112Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region112ValC{
            constexpr MPL::Value<region112Val,region112Val::disabled> disabled{};
            constexpr MPL::Value<region112Val,region112Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,region112Val> region112{}; 
        ///Enable protection for region 113. Write '0' has no effect.
        enum class region113Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region113ValC{
            constexpr MPL::Value<region113Val,region113Val::disabled> disabled{};
            constexpr MPL::Value<region113Val,region113Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,region113Val> region113{}; 
        ///Enable protection for region 114. Write '0' has no effect.
        enum class region114Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region114ValC{
            constexpr MPL::Value<region114Val,region114Val::disabled> disabled{};
            constexpr MPL::Value<region114Val,region114Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,region114Val> region114{}; 
        ///Enable protection for region 115. Write '0' has no effect.
        enum class region115Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region115ValC{
            constexpr MPL::Value<region115Val,region115Val::disabled> disabled{};
            constexpr MPL::Value<region115Val,region115Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,region115Val> region115{}; 
        ///Enable protection for region 116. Write '0' has no effect.
        enum class region116Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region116ValC{
            constexpr MPL::Value<region116Val,region116Val::disabled> disabled{};
            constexpr MPL::Value<region116Val,region116Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,region116Val> region116{}; 
        ///Enable protection for region 117. Write '0' has no effect.
        enum class region117Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region117ValC{
            constexpr MPL::Value<region117Val,region117Val::disabled> disabled{};
            constexpr MPL::Value<region117Val,region117Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,region117Val> region117{}; 
        ///Enable protection for region 118. Write '0' has no effect.
        enum class region118Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region118ValC{
            constexpr MPL::Value<region118Val,region118Val::disabled> disabled{};
            constexpr MPL::Value<region118Val,region118Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,region118Val> region118{}; 
        ///Enable protection for region 119. Write '0' has no effect.
        enum class region119Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region119ValC{
            constexpr MPL::Value<region119Val,region119Val::disabled> disabled{};
            constexpr MPL::Value<region119Val,region119Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,region119Val> region119{}; 
        ///Enable protection for region 120. Write '0' has no effect.
        enum class region120Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region120ValC{
            constexpr MPL::Value<region120Val,region120Val::disabled> disabled{};
            constexpr MPL::Value<region120Val,region120Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,region120Val> region120{}; 
        ///Enable protection for region 121. Write '0' has no effect.
        enum class region121Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region121ValC{
            constexpr MPL::Value<region121Val,region121Val::disabled> disabled{};
            constexpr MPL::Value<region121Val,region121Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,region121Val> region121{}; 
        ///Enable protection for region 122. Write '0' has no effect.
        enum class region122Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region122ValC{
            constexpr MPL::Value<region122Val,region122Val::disabled> disabled{};
            constexpr MPL::Value<region122Val,region122Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,region122Val> region122{}; 
        ///Enable protection for region 123. Write '0' has no effect.
        enum class region123Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region123ValC{
            constexpr MPL::Value<region123Val,region123Val::disabled> disabled{};
            constexpr MPL::Value<region123Val,region123Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,region123Val> region123{}; 
        ///Enable protection for region 124. Write '0' has no effect.
        enum class region124Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region124ValC{
            constexpr MPL::Value<region124Val,region124Val::disabled> disabled{};
            constexpr MPL::Value<region124Val,region124Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,region124Val> region124{}; 
        ///Enable protection for region 125. Write '0' has no effect.
        enum class region125Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region125ValC{
            constexpr MPL::Value<region125Val,region125Val::disabled> disabled{};
            constexpr MPL::Value<region125Val,region125Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,region125Val> region125{}; 
        ///Enable protection for region 126. Write '0' has no effect.
        enum class region126Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region126ValC{
            constexpr MPL::Value<region126Val,region126Val::disabled> disabled{};
            constexpr MPL::Value<region126Val,region126Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,region126Val> region126{}; 
        ///Enable protection for region 127. Write '0' has no effect.
        enum class region127Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        namespace region127ValC{
            constexpr MPL::Value<region127Val,region127Val::disabled> disabled{};
            constexpr MPL::Value<region127Val,region127Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,region127Val> region127{}; 
    }
}
