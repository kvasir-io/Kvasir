#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Block Protect
    namespace BprotConfig0{    ///<Block protect configuration register 0
        using Addr = Register::Address<0x40000600,0x00000000,0x00000000,unsigned>;
        ///Enable protection for region 0. Write '0' has no effect.
        enum class Region0Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Region0Val> region0{}; 
        namespace Region0ValC{
            constexpr Register::FieldValue<decltype(region0)::Type,Region0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region0)::Type,Region0Val::enabled> enabled{};
        }
        ///Enable protection for region 1. Write '0' has no effect.
        enum class Region1Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Region1Val> region1{}; 
        namespace Region1ValC{
            constexpr Register::FieldValue<decltype(region1)::Type,Region1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region1)::Type,Region1Val::enabled> enabled{};
        }
        ///Enable protection for region 2. Write '0' has no effect.
        enum class Region2Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Region2Val> region2{}; 
        namespace Region2ValC{
            constexpr Register::FieldValue<decltype(region2)::Type,Region2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region2)::Type,Region2Val::enabled> enabled{};
        }
        ///Enable protection for region 3. Write '0' has no effect.
        enum class Region3Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Region3Val> region3{}; 
        namespace Region3ValC{
            constexpr Register::FieldValue<decltype(region3)::Type,Region3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region3)::Type,Region3Val::enabled> enabled{};
        }
        ///Enable protection for region 4. Write '0' has no effect.
        enum class Region4Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Region4Val> region4{}; 
        namespace Region4ValC{
            constexpr Register::FieldValue<decltype(region4)::Type,Region4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region4)::Type,Region4Val::enabled> enabled{};
        }
        ///Enable protection for region 5. Write '0' has no effect.
        enum class Region5Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Region5Val> region5{}; 
        namespace Region5ValC{
            constexpr Register::FieldValue<decltype(region5)::Type,Region5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region5)::Type,Region5Val::enabled> enabled{};
        }
        ///Enable protection for region 6. Write '0' has no effect.
        enum class Region6Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Region6Val> region6{}; 
        namespace Region6ValC{
            constexpr Register::FieldValue<decltype(region6)::Type,Region6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region6)::Type,Region6Val::enabled> enabled{};
        }
        ///Enable protection for region 7. Write '0' has no effect.
        enum class Region7Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Region7Val> region7{}; 
        namespace Region7ValC{
            constexpr Register::FieldValue<decltype(region7)::Type,Region7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region7)::Type,Region7Val::enabled> enabled{};
        }
        ///Enable protection for region 8. Write '0' has no effect.
        enum class Region8Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Region8Val> region8{}; 
        namespace Region8ValC{
            constexpr Register::FieldValue<decltype(region8)::Type,Region8Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region8)::Type,Region8Val::enabled> enabled{};
        }
        ///Enable protection for region 9. Write '0' has no effect.
        enum class Region9Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Region9Val> region9{}; 
        namespace Region9ValC{
            constexpr Register::FieldValue<decltype(region9)::Type,Region9Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region9)::Type,Region9Val::enabled> enabled{};
        }
        ///Enable protection for region 10. Write '0' has no effect.
        enum class Region10Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Region10Val> region10{}; 
        namespace Region10ValC{
            constexpr Register::FieldValue<decltype(region10)::Type,Region10Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region10)::Type,Region10Val::enabled> enabled{};
        }
        ///Enable protection for region 11. Write '0' has no effect.
        enum class Region11Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Region11Val> region11{}; 
        namespace Region11ValC{
            constexpr Register::FieldValue<decltype(region11)::Type,Region11Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region11)::Type,Region11Val::enabled> enabled{};
        }
        ///Enable protection for region 12. Write '0' has no effect.
        enum class Region12Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Region12Val> region12{}; 
        namespace Region12ValC{
            constexpr Register::FieldValue<decltype(region12)::Type,Region12Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region12)::Type,Region12Val::enabled> enabled{};
        }
        ///Enable protection for region 13. Write '0' has no effect.
        enum class Region13Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Region13Val> region13{}; 
        namespace Region13ValC{
            constexpr Register::FieldValue<decltype(region13)::Type,Region13Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region13)::Type,Region13Val::enabled> enabled{};
        }
        ///Enable protection for region 14. Write '0' has no effect.
        enum class Region14Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Region14Val> region14{}; 
        namespace Region14ValC{
            constexpr Register::FieldValue<decltype(region14)::Type,Region14Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region14)::Type,Region14Val::enabled> enabled{};
        }
        ///Enable protection for region 15. Write '0' has no effect.
        enum class Region15Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Region15Val> region15{}; 
        namespace Region15ValC{
            constexpr Register::FieldValue<decltype(region15)::Type,Region15Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region15)::Type,Region15Val::enabled> enabled{};
        }
        ///Enable protection for region 16. Write '0' has no effect.
        enum class Region16Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Region16Val> region16{}; 
        namespace Region16ValC{
            constexpr Register::FieldValue<decltype(region16)::Type,Region16Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region16)::Type,Region16Val::enabled> enabled{};
        }
        ///Enable protection for region 17. Write '0' has no effect.
        enum class Region17Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Region17Val> region17{}; 
        namespace Region17ValC{
            constexpr Register::FieldValue<decltype(region17)::Type,Region17Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region17)::Type,Region17Val::enabled> enabled{};
        }
        ///Enable protection for region 18. Write '0' has no effect.
        enum class Region18Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Region18Val> region18{}; 
        namespace Region18ValC{
            constexpr Register::FieldValue<decltype(region18)::Type,Region18Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region18)::Type,Region18Val::enabled> enabled{};
        }
        ///Enable protection for region 19. Write '0' has no effect.
        enum class Region19Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Region19Val> region19{}; 
        namespace Region19ValC{
            constexpr Register::FieldValue<decltype(region19)::Type,Region19Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region19)::Type,Region19Val::enabled> enabled{};
        }
        ///Enable protection for region 20. Write '0' has no effect.
        enum class Region20Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Region20Val> region20{}; 
        namespace Region20ValC{
            constexpr Register::FieldValue<decltype(region20)::Type,Region20Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region20)::Type,Region20Val::enabled> enabled{};
        }
        ///Enable protection for region 21. Write '0' has no effect.
        enum class Region21Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Region21Val> region21{}; 
        namespace Region21ValC{
            constexpr Register::FieldValue<decltype(region21)::Type,Region21Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region21)::Type,Region21Val::enabled> enabled{};
        }
        ///Enable protection for region 22. Write '0' has no effect.
        enum class Region22Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Region22Val> region22{}; 
        namespace Region22ValC{
            constexpr Register::FieldValue<decltype(region22)::Type,Region22Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region22)::Type,Region22Val::enabled> enabled{};
        }
        ///Enable protection for region 23. Write '0' has no effect.
        enum class Region23Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Region23Val> region23{}; 
        namespace Region23ValC{
            constexpr Register::FieldValue<decltype(region23)::Type,Region23Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region23)::Type,Region23Val::enabled> enabled{};
        }
        ///Enable protection for region 24. Write '0' has no effect.
        enum class Region24Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Region24Val> region24{}; 
        namespace Region24ValC{
            constexpr Register::FieldValue<decltype(region24)::Type,Region24Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region24)::Type,Region24Val::enabled> enabled{};
        }
        ///Enable protection for region 25. Write '0' has no effect.
        enum class Region25Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Region25Val> region25{}; 
        namespace Region25ValC{
            constexpr Register::FieldValue<decltype(region25)::Type,Region25Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region25)::Type,Region25Val::enabled> enabled{};
        }
        ///Enable protection for region 26. Write '0' has no effect.
        enum class Region26Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Region26Val> region26{}; 
        namespace Region26ValC{
            constexpr Register::FieldValue<decltype(region26)::Type,Region26Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region26)::Type,Region26Val::enabled> enabled{};
        }
        ///Enable protection for region 27. Write '0' has no effect.
        enum class Region27Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Region27Val> region27{}; 
        namespace Region27ValC{
            constexpr Register::FieldValue<decltype(region27)::Type,Region27Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region27)::Type,Region27Val::enabled> enabled{};
        }
        ///Enable protection for region 28. Write '0' has no effect.
        enum class Region28Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Region28Val> region28{}; 
        namespace Region28ValC{
            constexpr Register::FieldValue<decltype(region28)::Type,Region28Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region28)::Type,Region28Val::enabled> enabled{};
        }
        ///Enable protection for region 29. Write '0' has no effect.
        enum class Region29Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Region29Val> region29{}; 
        namespace Region29ValC{
            constexpr Register::FieldValue<decltype(region29)::Type,Region29Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region29)::Type,Region29Val::enabled> enabled{};
        }
        ///Enable protection for region 30. Write '0' has no effect.
        enum class Region30Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Region30Val> region30{}; 
        namespace Region30ValC{
            constexpr Register::FieldValue<decltype(region30)::Type,Region30Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region30)::Type,Region30Val::enabled> enabled{};
        }
        ///Enable protection for region 31. Write '0' has no effect.
        enum class Region31Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Region31Val> region31{}; 
        namespace Region31ValC{
            constexpr Register::FieldValue<decltype(region31)::Type,Region31Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region31)::Type,Region31Val::enabled> enabled{};
        }
    }
    namespace BprotConfig1{    ///<Block protect configuration register 1
        using Addr = Register::Address<0x40000604,0x00000000,0x00000000,unsigned>;
        ///Enable protection for region 32. Write '0' has no effect.
        enum class Region32Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Region32Val> region32{}; 
        namespace Region32ValC{
            constexpr Register::FieldValue<decltype(region32)::Type,Region32Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region32)::Type,Region32Val::enabled> enabled{};
        }
        ///Enable protection for region 33. Write '0' has no effect.
        enum class Region33Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Region33Val> region33{}; 
        namespace Region33ValC{
            constexpr Register::FieldValue<decltype(region33)::Type,Region33Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region33)::Type,Region33Val::enabled> enabled{};
        }
        ///Enable protection for region 34. Write '0' has no effect.
        enum class Region34Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Region34Val> region34{}; 
        namespace Region34ValC{
            constexpr Register::FieldValue<decltype(region34)::Type,Region34Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region34)::Type,Region34Val::enabled> enabled{};
        }
        ///Enable protection for region 35. Write '0' has no effect.
        enum class Region35Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Region35Val> region35{}; 
        namespace Region35ValC{
            constexpr Register::FieldValue<decltype(region35)::Type,Region35Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region35)::Type,Region35Val::enabled> enabled{};
        }
        ///Enable protection for region 36. Write '0' has no effect.
        enum class Region36Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Region36Val> region36{}; 
        namespace Region36ValC{
            constexpr Register::FieldValue<decltype(region36)::Type,Region36Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region36)::Type,Region36Val::enabled> enabled{};
        }
        ///Enable protection for region 37. Write '0' has no effect.
        enum class Region37Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Region37Val> region37{}; 
        namespace Region37ValC{
            constexpr Register::FieldValue<decltype(region37)::Type,Region37Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region37)::Type,Region37Val::enabled> enabled{};
        }
        ///Enable protection for region 38. Write '0' has no effect.
        enum class Region38Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Region38Val> region38{}; 
        namespace Region38ValC{
            constexpr Register::FieldValue<decltype(region38)::Type,Region38Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region38)::Type,Region38Val::enabled> enabled{};
        }
        ///Enable protection for region 39. Write '0' has no effect.
        enum class Region39Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Region39Val> region39{}; 
        namespace Region39ValC{
            constexpr Register::FieldValue<decltype(region39)::Type,Region39Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region39)::Type,Region39Val::enabled> enabled{};
        }
        ///Enable protection for region 40. Write '0' has no effect.
        enum class Region40Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Region40Val> region40{}; 
        namespace Region40ValC{
            constexpr Register::FieldValue<decltype(region40)::Type,Region40Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region40)::Type,Region40Val::enabled> enabled{};
        }
        ///Enable protection for region 41. Write '0' has no effect.
        enum class Region41Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Region41Val> region41{}; 
        namespace Region41ValC{
            constexpr Register::FieldValue<decltype(region41)::Type,Region41Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region41)::Type,Region41Val::enabled> enabled{};
        }
        ///Enable protection for region 42. Write '0' has no effect.
        enum class Region42Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Region42Val> region42{}; 
        namespace Region42ValC{
            constexpr Register::FieldValue<decltype(region42)::Type,Region42Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region42)::Type,Region42Val::enabled> enabled{};
        }
        ///Enable protection for region 43. Write '0' has no effect.
        enum class Region43Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Region43Val> region43{}; 
        namespace Region43ValC{
            constexpr Register::FieldValue<decltype(region43)::Type,Region43Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region43)::Type,Region43Val::enabled> enabled{};
        }
        ///Enable protection for region 44. Write '0' has no effect.
        enum class Region44Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Region44Val> region44{}; 
        namespace Region44ValC{
            constexpr Register::FieldValue<decltype(region44)::Type,Region44Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region44)::Type,Region44Val::enabled> enabled{};
        }
        ///Enable protection for region 45. Write '0' has no effect.
        enum class Region45Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Region45Val> region45{}; 
        namespace Region45ValC{
            constexpr Register::FieldValue<decltype(region45)::Type,Region45Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region45)::Type,Region45Val::enabled> enabled{};
        }
        ///Enable protection for region 46. Write '0' has no effect.
        enum class Region46Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Region46Val> region46{}; 
        namespace Region46ValC{
            constexpr Register::FieldValue<decltype(region46)::Type,Region46Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region46)::Type,Region46Val::enabled> enabled{};
        }
        ///Enable protection for region 47. Write '0' has no effect.
        enum class Region47Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Region47Val> region47{}; 
        namespace Region47ValC{
            constexpr Register::FieldValue<decltype(region47)::Type,Region47Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region47)::Type,Region47Val::enabled> enabled{};
        }
        ///Enable protection for region 48. Write '0' has no effect.
        enum class Region48Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Region48Val> region48{}; 
        namespace Region48ValC{
            constexpr Register::FieldValue<decltype(region48)::Type,Region48Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region48)::Type,Region48Val::enabled> enabled{};
        }
        ///Enable protection for region 49. Write '0' has no effect.
        enum class Region49Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Region49Val> region49{}; 
        namespace Region49ValC{
            constexpr Register::FieldValue<decltype(region49)::Type,Region49Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region49)::Type,Region49Val::enabled> enabled{};
        }
        ///Enable protection for region 50. Write '0' has no effect.
        enum class Region50Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Region50Val> region50{}; 
        namespace Region50ValC{
            constexpr Register::FieldValue<decltype(region50)::Type,Region50Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region50)::Type,Region50Val::enabled> enabled{};
        }
        ///Enable protection for region 51. Write '0' has no effect.
        enum class Region51Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Region51Val> region51{}; 
        namespace Region51ValC{
            constexpr Register::FieldValue<decltype(region51)::Type,Region51Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region51)::Type,Region51Val::enabled> enabled{};
        }
        ///Enable protection for region 52. Write '0' has no effect.
        enum class Region52Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Region52Val> region52{}; 
        namespace Region52ValC{
            constexpr Register::FieldValue<decltype(region52)::Type,Region52Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region52)::Type,Region52Val::enabled> enabled{};
        }
        ///Enable protection for region 53. Write '0' has no effect.
        enum class Region53Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Region53Val> region53{}; 
        namespace Region53ValC{
            constexpr Register::FieldValue<decltype(region53)::Type,Region53Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region53)::Type,Region53Val::enabled> enabled{};
        }
        ///Enable protection for region 54. Write '0' has no effect.
        enum class Region54Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Region54Val> region54{}; 
        namespace Region54ValC{
            constexpr Register::FieldValue<decltype(region54)::Type,Region54Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region54)::Type,Region54Val::enabled> enabled{};
        }
        ///Enable protection for region 55. Write '0' has no effect.
        enum class Region55Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Region55Val> region55{}; 
        namespace Region55ValC{
            constexpr Register::FieldValue<decltype(region55)::Type,Region55Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region55)::Type,Region55Val::enabled> enabled{};
        }
        ///Enable protection for region 56. Write '0' has no effect.
        enum class Region56Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Region56Val> region56{}; 
        namespace Region56ValC{
            constexpr Register::FieldValue<decltype(region56)::Type,Region56Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region56)::Type,Region56Val::enabled> enabled{};
        }
        ///Enable protection for region 57. Write '0' has no effect.
        enum class Region57Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Region57Val> region57{}; 
        namespace Region57ValC{
            constexpr Register::FieldValue<decltype(region57)::Type,Region57Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region57)::Type,Region57Val::enabled> enabled{};
        }
        ///Enable protection for region 58. Write '0' has no effect.
        enum class Region58Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Region58Val> region58{}; 
        namespace Region58ValC{
            constexpr Register::FieldValue<decltype(region58)::Type,Region58Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region58)::Type,Region58Val::enabled> enabled{};
        }
        ///Enable protection for region 59. Write '0' has no effect.
        enum class Region59Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Region59Val> region59{}; 
        namespace Region59ValC{
            constexpr Register::FieldValue<decltype(region59)::Type,Region59Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region59)::Type,Region59Val::enabled> enabled{};
        }
        ///Enable protection for region 60. Write '0' has no effect.
        enum class Region60Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Region60Val> region60{}; 
        namespace Region60ValC{
            constexpr Register::FieldValue<decltype(region60)::Type,Region60Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region60)::Type,Region60Val::enabled> enabled{};
        }
        ///Enable protection for region 61. Write '0' has no effect.
        enum class Region61Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Region61Val> region61{}; 
        namespace Region61ValC{
            constexpr Register::FieldValue<decltype(region61)::Type,Region61Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region61)::Type,Region61Val::enabled> enabled{};
        }
        ///Enable protection for region 62. Write '0' has no effect.
        enum class Region62Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Region62Val> region62{}; 
        namespace Region62ValC{
            constexpr Register::FieldValue<decltype(region62)::Type,Region62Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region62)::Type,Region62Val::enabled> enabled{};
        }
        ///Enable protection for region 63. Write '0' has no effect.
        enum class Region63Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Region63Val> region63{}; 
        namespace Region63ValC{
            constexpr Register::FieldValue<decltype(region63)::Type,Region63Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region63)::Type,Region63Val::enabled> enabled{};
        }
    }
    namespace BprotDisableindebug{    ///<Disable protection mechanism in debug mode
        using Addr = Register::Address<0x40000608,0xfffffffe,0x00000000,unsigned>;
        ///Disable the protection mechanism for NVM regions while in debug mode. This register will only disable the protection mechanism if the device is in debug mode.
        enum class DisableindebugVal {
            disabled=0x00000001,     ///<Disable in debug
            enabled=0x00000000,     ///<Enable in debug
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DisableindebugVal> disableindebug{}; 
        namespace DisableindebugValC{
            constexpr Register::FieldValue<decltype(disableindebug)::Type,DisableindebugVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(disableindebug)::Type,DisableindebugVal::enabled> enabled{};
        }
    }
    namespace BprotUnused0{    ///<Unspecified
        using Addr = Register::Address<0x4000060c,0xffffffff,0x00000000,unsigned>;
    }
    namespace BprotConfig2{    ///<Block protect configuration register 2
        using Addr = Register::Address<0x40000610,0x00000000,0x00000000,unsigned>;
        ///Enable protection for region 64. Write '0' has no effect.
        enum class Region64Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Region64Val> region64{}; 
        namespace Region64ValC{
            constexpr Register::FieldValue<decltype(region64)::Type,Region64Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region64)::Type,Region64Val::enabled> enabled{};
        }
        ///Enable protection for region 65. Write '0' has no effect.
        enum class Region65Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Region65Val> region65{}; 
        namespace Region65ValC{
            constexpr Register::FieldValue<decltype(region65)::Type,Region65Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region65)::Type,Region65Val::enabled> enabled{};
        }
        ///Enable protection for region 66. Write '0' has no effect.
        enum class Region66Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Region66Val> region66{}; 
        namespace Region66ValC{
            constexpr Register::FieldValue<decltype(region66)::Type,Region66Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region66)::Type,Region66Val::enabled> enabled{};
        }
        ///Enable protection for region 67. Write '0' has no effect.
        enum class Region67Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Region67Val> region67{}; 
        namespace Region67ValC{
            constexpr Register::FieldValue<decltype(region67)::Type,Region67Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region67)::Type,Region67Val::enabled> enabled{};
        }
        ///Enable protection for region 68. Write '0' has no effect.
        enum class Region68Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Region68Val> region68{}; 
        namespace Region68ValC{
            constexpr Register::FieldValue<decltype(region68)::Type,Region68Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region68)::Type,Region68Val::enabled> enabled{};
        }
        ///Enable protection for region 69. Write '0' has no effect.
        enum class Region69Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Region69Val> region69{}; 
        namespace Region69ValC{
            constexpr Register::FieldValue<decltype(region69)::Type,Region69Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region69)::Type,Region69Val::enabled> enabled{};
        }
        ///Enable protection for region 70. Write '0' has no effect.
        enum class Region70Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Region70Val> region70{}; 
        namespace Region70ValC{
            constexpr Register::FieldValue<decltype(region70)::Type,Region70Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region70)::Type,Region70Val::enabled> enabled{};
        }
        ///Enable protection for region 71. Write '0' has no effect.
        enum class Region71Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Region71Val> region71{}; 
        namespace Region71ValC{
            constexpr Register::FieldValue<decltype(region71)::Type,Region71Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region71)::Type,Region71Val::enabled> enabled{};
        }
        ///Enable protection for region 72. Write '0' has no effect.
        enum class Region72Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Region72Val> region72{}; 
        namespace Region72ValC{
            constexpr Register::FieldValue<decltype(region72)::Type,Region72Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region72)::Type,Region72Val::enabled> enabled{};
        }
        ///Enable protection for region 73. Write '0' has no effect.
        enum class Region73Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Region73Val> region73{}; 
        namespace Region73ValC{
            constexpr Register::FieldValue<decltype(region73)::Type,Region73Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region73)::Type,Region73Val::enabled> enabled{};
        }
        ///Enable protection for region 74. Write '0' has no effect.
        enum class Region74Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Region74Val> region74{}; 
        namespace Region74ValC{
            constexpr Register::FieldValue<decltype(region74)::Type,Region74Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region74)::Type,Region74Val::enabled> enabled{};
        }
        ///Enable protection for region 75. Write '0' has no effect.
        enum class Region75Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Region75Val> region75{}; 
        namespace Region75ValC{
            constexpr Register::FieldValue<decltype(region75)::Type,Region75Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region75)::Type,Region75Val::enabled> enabled{};
        }
        ///Enable protection for region 76. Write '0' has no effect.
        enum class Region76Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Region76Val> region76{}; 
        namespace Region76ValC{
            constexpr Register::FieldValue<decltype(region76)::Type,Region76Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region76)::Type,Region76Val::enabled> enabled{};
        }
        ///Enable protection for region 77. Write '0' has no effect.
        enum class Region77Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Region77Val> region77{}; 
        namespace Region77ValC{
            constexpr Register::FieldValue<decltype(region77)::Type,Region77Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region77)::Type,Region77Val::enabled> enabled{};
        }
        ///Enable protection for region 78. Write '0' has no effect.
        enum class Region78Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Region78Val> region78{}; 
        namespace Region78ValC{
            constexpr Register::FieldValue<decltype(region78)::Type,Region78Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region78)::Type,Region78Val::enabled> enabled{};
        }
        ///Enable protection for region 79. Write '0' has no effect.
        enum class Region79Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Region79Val> region79{}; 
        namespace Region79ValC{
            constexpr Register::FieldValue<decltype(region79)::Type,Region79Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region79)::Type,Region79Val::enabled> enabled{};
        }
        ///Enable protection for region 80. Write '0' has no effect.
        enum class Region80Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Region80Val> region80{}; 
        namespace Region80ValC{
            constexpr Register::FieldValue<decltype(region80)::Type,Region80Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region80)::Type,Region80Val::enabled> enabled{};
        }
        ///Enable protection for region 81. Write '0' has no effect.
        enum class Region81Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Region81Val> region81{}; 
        namespace Region81ValC{
            constexpr Register::FieldValue<decltype(region81)::Type,Region81Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region81)::Type,Region81Val::enabled> enabled{};
        }
        ///Enable protection for region 82. Write '0' has no effect.
        enum class Region82Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Region82Val> region82{}; 
        namespace Region82ValC{
            constexpr Register::FieldValue<decltype(region82)::Type,Region82Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region82)::Type,Region82Val::enabled> enabled{};
        }
        ///Enable protection for region 83. Write '0' has no effect.
        enum class Region83Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Region83Val> region83{}; 
        namespace Region83ValC{
            constexpr Register::FieldValue<decltype(region83)::Type,Region83Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region83)::Type,Region83Val::enabled> enabled{};
        }
        ///Enable protection for region 84. Write '0' has no effect.
        enum class Region84Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Region84Val> region84{}; 
        namespace Region84ValC{
            constexpr Register::FieldValue<decltype(region84)::Type,Region84Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region84)::Type,Region84Val::enabled> enabled{};
        }
        ///Enable protection for region 85. Write '0' has no effect.
        enum class Region85Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Region85Val> region85{}; 
        namespace Region85ValC{
            constexpr Register::FieldValue<decltype(region85)::Type,Region85Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region85)::Type,Region85Val::enabled> enabled{};
        }
        ///Enable protection for region 86. Write '0' has no effect.
        enum class Region86Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Region86Val> region86{}; 
        namespace Region86ValC{
            constexpr Register::FieldValue<decltype(region86)::Type,Region86Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region86)::Type,Region86Val::enabled> enabled{};
        }
        ///Enable protection for region 87. Write '0' has no effect.
        enum class Region87Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Region87Val> region87{}; 
        namespace Region87ValC{
            constexpr Register::FieldValue<decltype(region87)::Type,Region87Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region87)::Type,Region87Val::enabled> enabled{};
        }
        ///Enable protection for region 88. Write '0' has no effect.
        enum class Region88Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Region88Val> region88{}; 
        namespace Region88ValC{
            constexpr Register::FieldValue<decltype(region88)::Type,Region88Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region88)::Type,Region88Val::enabled> enabled{};
        }
        ///Enable protection for region 89. Write '0' has no effect.
        enum class Region89Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Region89Val> region89{}; 
        namespace Region89ValC{
            constexpr Register::FieldValue<decltype(region89)::Type,Region89Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region89)::Type,Region89Val::enabled> enabled{};
        }
        ///Enable protection for region 90. Write '0' has no effect.
        enum class Region90Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Region90Val> region90{}; 
        namespace Region90ValC{
            constexpr Register::FieldValue<decltype(region90)::Type,Region90Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region90)::Type,Region90Val::enabled> enabled{};
        }
        ///Enable protection for region 91. Write '0' has no effect.
        enum class Region91Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Region91Val> region91{}; 
        namespace Region91ValC{
            constexpr Register::FieldValue<decltype(region91)::Type,Region91Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region91)::Type,Region91Val::enabled> enabled{};
        }
        ///Enable protection for region 92. Write '0' has no effect.
        enum class Region92Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Region92Val> region92{}; 
        namespace Region92ValC{
            constexpr Register::FieldValue<decltype(region92)::Type,Region92Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region92)::Type,Region92Val::enabled> enabled{};
        }
        ///Enable protection for region 93. Write '0' has no effect.
        enum class Region93Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Region93Val> region93{}; 
        namespace Region93ValC{
            constexpr Register::FieldValue<decltype(region93)::Type,Region93Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region93)::Type,Region93Val::enabled> enabled{};
        }
        ///Enable protection for region 94. Write '0' has no effect.
        enum class Region94Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Region94Val> region94{}; 
        namespace Region94ValC{
            constexpr Register::FieldValue<decltype(region94)::Type,Region94Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region94)::Type,Region94Val::enabled> enabled{};
        }
        ///Enable protection for region 95. Write '0' has no effect.
        enum class Region95Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Region95Val> region95{}; 
        namespace Region95ValC{
            constexpr Register::FieldValue<decltype(region95)::Type,Region95Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region95)::Type,Region95Val::enabled> enabled{};
        }
    }
    namespace BprotConfig3{    ///<Block protect configuration register 3
        using Addr = Register::Address<0x40000614,0x00000000,0x00000000,unsigned>;
        ///Enable protection for region 96. Write '0' has no effect.
        enum class Region96Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Region96Val> region96{}; 
        namespace Region96ValC{
            constexpr Register::FieldValue<decltype(region96)::Type,Region96Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region96)::Type,Region96Val::enabled> enabled{};
        }
        ///Enable protection for region 97. Write '0' has no effect.
        enum class Region97Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Region97Val> region97{}; 
        namespace Region97ValC{
            constexpr Register::FieldValue<decltype(region97)::Type,Region97Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region97)::Type,Region97Val::enabled> enabled{};
        }
        ///Enable protection for region 98. Write '0' has no effect.
        enum class Region98Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Region98Val> region98{}; 
        namespace Region98ValC{
            constexpr Register::FieldValue<decltype(region98)::Type,Region98Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region98)::Type,Region98Val::enabled> enabled{};
        }
        ///Enable protection for region 99. Write '0' has no effect.
        enum class Region99Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Region99Val> region99{}; 
        namespace Region99ValC{
            constexpr Register::FieldValue<decltype(region99)::Type,Region99Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region99)::Type,Region99Val::enabled> enabled{};
        }
        ///Enable protection for region 100. Write '0' has no effect.
        enum class Region100Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Region100Val> region100{}; 
        namespace Region100ValC{
            constexpr Register::FieldValue<decltype(region100)::Type,Region100Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region100)::Type,Region100Val::enabled> enabled{};
        }
        ///Enable protection for region 101. Write '0' has no effect.
        enum class Region101Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Region101Val> region101{}; 
        namespace Region101ValC{
            constexpr Register::FieldValue<decltype(region101)::Type,Region101Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region101)::Type,Region101Val::enabled> enabled{};
        }
        ///Enable protection for region 102. Write '0' has no effect.
        enum class Region102Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Region102Val> region102{}; 
        namespace Region102ValC{
            constexpr Register::FieldValue<decltype(region102)::Type,Region102Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region102)::Type,Region102Val::enabled> enabled{};
        }
        ///Enable protection for region 103. Write '0' has no effect.
        enum class Region103Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Region103Val> region103{}; 
        namespace Region103ValC{
            constexpr Register::FieldValue<decltype(region103)::Type,Region103Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region103)::Type,Region103Val::enabled> enabled{};
        }
        ///Enable protection for region 104. Write '0' has no effect.
        enum class Region104Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Region104Val> region104{}; 
        namespace Region104ValC{
            constexpr Register::FieldValue<decltype(region104)::Type,Region104Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region104)::Type,Region104Val::enabled> enabled{};
        }
        ///Enable protection for region 105. Write '0' has no effect.
        enum class Region105Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Region105Val> region105{}; 
        namespace Region105ValC{
            constexpr Register::FieldValue<decltype(region105)::Type,Region105Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region105)::Type,Region105Val::enabled> enabled{};
        }
        ///Enable protection for region 106. Write '0' has no effect.
        enum class Region106Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Region106Val> region106{}; 
        namespace Region106ValC{
            constexpr Register::FieldValue<decltype(region106)::Type,Region106Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region106)::Type,Region106Val::enabled> enabled{};
        }
        ///Enable protection for region 107. Write '0' has no effect.
        enum class Region107Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Region107Val> region107{}; 
        namespace Region107ValC{
            constexpr Register::FieldValue<decltype(region107)::Type,Region107Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region107)::Type,Region107Val::enabled> enabled{};
        }
        ///Enable protection for region 108. Write '0' has no effect.
        enum class Region108Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Region108Val> region108{}; 
        namespace Region108ValC{
            constexpr Register::FieldValue<decltype(region108)::Type,Region108Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region108)::Type,Region108Val::enabled> enabled{};
        }
        ///Enable protection for region 109. Write '0' has no effect.
        enum class Region109Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Region109Val> region109{}; 
        namespace Region109ValC{
            constexpr Register::FieldValue<decltype(region109)::Type,Region109Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region109)::Type,Region109Val::enabled> enabled{};
        }
        ///Enable protection for region 110. Write '0' has no effect.
        enum class Region110Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Region110Val> region110{}; 
        namespace Region110ValC{
            constexpr Register::FieldValue<decltype(region110)::Type,Region110Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region110)::Type,Region110Val::enabled> enabled{};
        }
        ///Enable protection for region 111. Write '0' has no effect.
        enum class Region111Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Region111Val> region111{}; 
        namespace Region111ValC{
            constexpr Register::FieldValue<decltype(region111)::Type,Region111Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region111)::Type,Region111Val::enabled> enabled{};
        }
        ///Enable protection for region 112. Write '0' has no effect.
        enum class Region112Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Region112Val> region112{}; 
        namespace Region112ValC{
            constexpr Register::FieldValue<decltype(region112)::Type,Region112Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region112)::Type,Region112Val::enabled> enabled{};
        }
        ///Enable protection for region 113. Write '0' has no effect.
        enum class Region113Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Region113Val> region113{}; 
        namespace Region113ValC{
            constexpr Register::FieldValue<decltype(region113)::Type,Region113Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region113)::Type,Region113Val::enabled> enabled{};
        }
        ///Enable protection for region 114. Write '0' has no effect.
        enum class Region114Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Region114Val> region114{}; 
        namespace Region114ValC{
            constexpr Register::FieldValue<decltype(region114)::Type,Region114Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region114)::Type,Region114Val::enabled> enabled{};
        }
        ///Enable protection for region 115. Write '0' has no effect.
        enum class Region115Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Region115Val> region115{}; 
        namespace Region115ValC{
            constexpr Register::FieldValue<decltype(region115)::Type,Region115Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region115)::Type,Region115Val::enabled> enabled{};
        }
        ///Enable protection for region 116. Write '0' has no effect.
        enum class Region116Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Region116Val> region116{}; 
        namespace Region116ValC{
            constexpr Register::FieldValue<decltype(region116)::Type,Region116Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region116)::Type,Region116Val::enabled> enabled{};
        }
        ///Enable protection for region 117. Write '0' has no effect.
        enum class Region117Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Region117Val> region117{}; 
        namespace Region117ValC{
            constexpr Register::FieldValue<decltype(region117)::Type,Region117Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region117)::Type,Region117Val::enabled> enabled{};
        }
        ///Enable protection for region 118. Write '0' has no effect.
        enum class Region118Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Region118Val> region118{}; 
        namespace Region118ValC{
            constexpr Register::FieldValue<decltype(region118)::Type,Region118Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region118)::Type,Region118Val::enabled> enabled{};
        }
        ///Enable protection for region 119. Write '0' has no effect.
        enum class Region119Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Region119Val> region119{}; 
        namespace Region119ValC{
            constexpr Register::FieldValue<decltype(region119)::Type,Region119Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region119)::Type,Region119Val::enabled> enabled{};
        }
        ///Enable protection for region 120. Write '0' has no effect.
        enum class Region120Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Region120Val> region120{}; 
        namespace Region120ValC{
            constexpr Register::FieldValue<decltype(region120)::Type,Region120Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region120)::Type,Region120Val::enabled> enabled{};
        }
        ///Enable protection for region 121. Write '0' has no effect.
        enum class Region121Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Region121Val> region121{}; 
        namespace Region121ValC{
            constexpr Register::FieldValue<decltype(region121)::Type,Region121Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region121)::Type,Region121Val::enabled> enabled{};
        }
        ///Enable protection for region 122. Write '0' has no effect.
        enum class Region122Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Region122Val> region122{}; 
        namespace Region122ValC{
            constexpr Register::FieldValue<decltype(region122)::Type,Region122Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region122)::Type,Region122Val::enabled> enabled{};
        }
        ///Enable protection for region 123. Write '0' has no effect.
        enum class Region123Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Region123Val> region123{}; 
        namespace Region123ValC{
            constexpr Register::FieldValue<decltype(region123)::Type,Region123Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region123)::Type,Region123Val::enabled> enabled{};
        }
        ///Enable protection for region 124. Write '0' has no effect.
        enum class Region124Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Region124Val> region124{}; 
        namespace Region124ValC{
            constexpr Register::FieldValue<decltype(region124)::Type,Region124Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region124)::Type,Region124Val::enabled> enabled{};
        }
        ///Enable protection for region 125. Write '0' has no effect.
        enum class Region125Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Region125Val> region125{}; 
        namespace Region125ValC{
            constexpr Register::FieldValue<decltype(region125)::Type,Region125Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region125)::Type,Region125Val::enabled> enabled{};
        }
        ///Enable protection for region 126. Write '0' has no effect.
        enum class Region126Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Region126Val> region126{}; 
        namespace Region126ValC{
            constexpr Register::FieldValue<decltype(region126)::Type,Region126Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region126)::Type,Region126Val::enabled> enabled{};
        }
        ///Enable protection for region 127. Write '0' has no effect.
        enum class Region127Val {
            disabled=0x00000000,     ///<Protection disabled
            enabled=0x00000001,     ///<Protection enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Region127Val> region127{}; 
        namespace Region127ValC{
            constexpr Register::FieldValue<decltype(region127)::Type,Region127Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(region127)::Type,Region127Val::enabled> enabled{};
        }
    }
}
