#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//PPI controller.
    namespace Nonechen{    ///<Channel enable.
        using Addr = Register::Address<0x4001f500,0x000f0000,0,unsigned>;
        ///Enable PPI channel 0.
        enum class Ch0Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0Val> ch0{}; 
        namespace Ch0ValC{
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::enabled> enabled{};
        }
        ///Enable PPI channel 1.
        enum class Ch1Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1Val> ch1{}; 
        namespace Ch1ValC{
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::enabled> enabled{};
        }
        ///Enable PPI channel 2.
        enum class Ch2Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2Val> ch2{}; 
        namespace Ch2ValC{
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::enabled> enabled{};
        }
        ///Enable PPI channel 3.
        enum class Ch3Val {
            disabled=0x00000000,     ///<Channel disabled
            enabled=0x00000001,     ///<Channel enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3Val> ch3{}; 
        namespace Ch3ValC{
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::enabled> enabled{};
        }
        ///Enable PPI channel 4.
        enum class Ch4Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4Val> ch4{}; 
        namespace Ch4ValC{
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::enabled> enabled{};
        }
        ///Enable PPI channel 5.
        enum class Ch5Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5Val> ch5{}; 
        namespace Ch5ValC{
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::enabled> enabled{};
        }
        ///Enable PPI channel 6.
        enum class Ch6Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6Val> ch6{}; 
        namespace Ch6ValC{
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::enabled> enabled{};
        }
        ///Enable PPI channel 7.
        enum class Ch7Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7Val> ch7{}; 
        namespace Ch7ValC{
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::enabled> enabled{};
        }
        ///Enable PPI channel 8.
        enum class Ch8Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch8Val> ch8{}; 
        namespace Ch8ValC{
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::enabled> enabled{};
        }
        ///Enable PPI channel 9.
        enum class Ch9Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch9Val> ch9{}; 
        namespace Ch9ValC{
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::enabled> enabled{};
        }
        ///Enable PPI channel 10.
        enum class Ch10Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ch10Val> ch10{}; 
        namespace Ch10ValC{
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::enabled> enabled{};
        }
        ///Enable PPI channel 11.
        enum class Ch11Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ch11Val> ch11{}; 
        namespace Ch11ValC{
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::enabled> enabled{};
        }
        ///Enable PPI channel 12.
        enum class Ch12Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ch12Val> ch12{}; 
        namespace Ch12ValC{
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::enabled> enabled{};
        }
        ///Enable PPI channel 13.
        enum class Ch13Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ch13Val> ch13{}; 
        namespace Ch13ValC{
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::enabled> enabled{};
        }
        ///Enable PPI channel 14.
        enum class Ch14Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ch14Val> ch14{}; 
        namespace Ch14ValC{
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::enabled> enabled{};
        }
        ///Enable PPI channel 15.
        enum class Ch15Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ch15Val> ch15{}; 
        namespace Ch15ValC{
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::enabled> enabled{};
        }
        ///Enable PPI channel 20.
        enum class Ch20Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Ch20Val> ch20{}; 
        namespace Ch20ValC{
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::enabled> enabled{};
        }
        ///Enable PPI channel 21.
        enum class Ch21Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Ch21Val> ch21{}; 
        namespace Ch21ValC{
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::enabled> enabled{};
        }
        ///Enable PPI channel 22.
        enum class Ch22Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Ch22Val> ch22{}; 
        namespace Ch22ValC{
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::enabled> enabled{};
        }
        ///Enable PPI channel 23.
        enum class Ch23Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ch23Val> ch23{}; 
        namespace Ch23ValC{
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::enabled> enabled{};
        }
        ///Enable PPI channel 24.
        enum class Ch24Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ch24Val> ch24{}; 
        namespace Ch24ValC{
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::enabled> enabled{};
        }
        ///Enable PPI channel 25.
        enum class Ch25Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ch25Val> ch25{}; 
        namespace Ch25ValC{
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::enabled> enabled{};
        }
        ///Enable PPI channel 26.
        enum class Ch26Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ch26Val> ch26{}; 
        namespace Ch26ValC{
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::enabled> enabled{};
        }
        ///Enable PPI channel 27.
        enum class Ch27Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ch27Val> ch27{}; 
        namespace Ch27ValC{
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::enabled> enabled{};
        }
        ///Enable PPI channel 28.
        enum class Ch28Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Ch28Val> ch28{}; 
        namespace Ch28ValC{
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::enabled> enabled{};
        }
        ///Enable PPI channel 29.
        enum class Ch29Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Ch29Val> ch29{}; 
        namespace Ch29ValC{
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::enabled> enabled{};
        }
        ///Enable PPI channel 30.
        enum class Ch30Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Ch30Val> ch30{}; 
        namespace Ch30ValC{
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::enabled> enabled{};
        }
        ///Enable PPI channel 31.
        enum class Ch31Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ch31Val> ch31{}; 
        namespace Ch31ValC{
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::enabled> enabled{};
        }
    }
    namespace Nonechenset{    ///<Channel enable set.
        using Addr = Register::Address<0x4001f504,0x000f0000,0,unsigned>;
        ///Enable PPI channel 0.
        enum class Ch0Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0Val> ch0{}; 
        namespace Ch0ValC{
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::set> set{};
        }
        ///Enable PPI channel 1.
        enum class Ch1Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1Val> ch1{}; 
        namespace Ch1ValC{
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::set> set{};
        }
        ///Enable PPI channel 2.
        enum class Ch2Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2Val> ch2{}; 
        namespace Ch2ValC{
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::set> set{};
        }
        ///Enable PPI channel 3.
        enum class Ch3Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3Val> ch3{}; 
        namespace Ch3ValC{
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::set> set{};
        }
        ///Enable PPI channel 4.
        enum class Ch4Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4Val> ch4{}; 
        namespace Ch4ValC{
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::set> set{};
        }
        ///Enable PPI channel 5.
        enum class Ch5Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5Val> ch5{}; 
        namespace Ch5ValC{
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::set> set{};
        }
        ///Enable PPI channel 6.
        enum class Ch6Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6Val> ch6{}; 
        namespace Ch6ValC{
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::set> set{};
        }
        ///Enable PPI channel 7.
        enum class Ch7Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7Val> ch7{}; 
        namespace Ch7ValC{
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::set> set{};
        }
        ///Enable PPI channel 8.
        enum class Ch8Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch8Val> ch8{}; 
        namespace Ch8ValC{
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::set> set{};
        }
        ///Enable PPI channel 9.
        enum class Ch9Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch9Val> ch9{}; 
        namespace Ch9ValC{
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::set> set{};
        }
        ///Enable PPI channel 10.
        enum class Ch10Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ch10Val> ch10{}; 
        namespace Ch10ValC{
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::set> set{};
        }
        ///Enable PPI channel 11.
        enum class Ch11Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ch11Val> ch11{}; 
        namespace Ch11ValC{
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::set> set{};
        }
        ///Enable PPI channel 12.
        enum class Ch12Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ch12Val> ch12{}; 
        namespace Ch12ValC{
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::set> set{};
        }
        ///Enable PPI channel 13.
        enum class Ch13Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ch13Val> ch13{}; 
        namespace Ch13ValC{
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::set> set{};
        }
        ///Enable PPI channel 14.
        enum class Ch14Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ch14Val> ch14{}; 
        namespace Ch14ValC{
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::set> set{};
        }
        ///Enable PPI channel 15.
        enum class Ch15Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ch15Val> ch15{}; 
        namespace Ch15ValC{
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::set> set{};
        }
        ///Enable PPI channel 20.
        enum class Ch20Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Ch20Val> ch20{}; 
        namespace Ch20ValC{
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::set> set{};
        }
        ///Enable PPI channel 21.
        enum class Ch21Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Ch21Val> ch21{}; 
        namespace Ch21ValC{
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::set> set{};
        }
        ///Enable PPI channel 22.
        enum class Ch22Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Ch22Val> ch22{}; 
        namespace Ch22ValC{
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::set> set{};
        }
        ///Enable PPI channel 23.
        enum class Ch23Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ch23Val> ch23{}; 
        namespace Ch23ValC{
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::set> set{};
        }
        ///Enable PPI channel 24.
        enum class Ch24Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ch24Val> ch24{}; 
        namespace Ch24ValC{
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::set> set{};
        }
        ///Enable PPI channel 25.
        enum class Ch25Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ch25Val> ch25{}; 
        namespace Ch25ValC{
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::set> set{};
        }
        ///Enable PPI channel 26.
        enum class Ch26Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ch26Val> ch26{}; 
        namespace Ch26ValC{
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::set> set{};
        }
        ///Enable PPI channel 27.
        enum class Ch27Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ch27Val> ch27{}; 
        namespace Ch27ValC{
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::set> set{};
        }
        ///Enable PPI channel 28.
        enum class Ch28Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Ch28Val> ch28{}; 
        namespace Ch28ValC{
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::set> set{};
        }
        ///Enable PPI channel 29.
        enum class Ch29Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Ch29Val> ch29{}; 
        namespace Ch29ValC{
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::set> set{};
        }
        ///Enable PPI channel 30.
        enum class Ch30Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Ch30Val> ch30{}; 
        namespace Ch30ValC{
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::set> set{};
        }
        ///Enable PPI channel 31.
        enum class Ch31Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ch31Val> ch31{}; 
        namespace Ch31ValC{
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::set> set{};
        }
    }
    namespace Nonechenclr{    ///<Channel enable clear.
        using Addr = Register::Address<0x4001f508,0x000f0000,0,unsigned>;
        ///Disable PPI channel 0.
        enum class Ch0Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0Val> ch0{}; 
        namespace Ch0ValC{
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::clear> clear{};
        }
        ///Disable PPI channel 1.
        enum class Ch1Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1Val> ch1{}; 
        namespace Ch1ValC{
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::clear> clear{};
        }
        ///Disable PPI channel 2.
        enum class Ch2Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2Val> ch2{}; 
        namespace Ch2ValC{
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::clear> clear{};
        }
        ///Disable PPI channel 3.
        enum class Ch3Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3Val> ch3{}; 
        namespace Ch3ValC{
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::clear> clear{};
        }
        ///Disable PPI channel 4.
        enum class Ch4Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4Val> ch4{}; 
        namespace Ch4ValC{
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::clear> clear{};
        }
        ///Disable PPI channel 5.
        enum class Ch5Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5Val> ch5{}; 
        namespace Ch5ValC{
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::clear> clear{};
        }
        ///Disable PPI channel 6.
        enum class Ch6Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6Val> ch6{}; 
        namespace Ch6ValC{
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::clear> clear{};
        }
        ///Disable PPI channel 7.
        enum class Ch7Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7Val> ch7{}; 
        namespace Ch7ValC{
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::clear> clear{};
        }
        ///Disable PPI channel 8.
        enum class Ch8Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch8Val> ch8{}; 
        namespace Ch8ValC{
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::clear> clear{};
        }
        ///Disable PPI channel 9.
        enum class Ch9Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch9Val> ch9{}; 
        namespace Ch9ValC{
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::clear> clear{};
        }
        ///Disable PPI channel 10.
        enum class Ch10Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ch10Val> ch10{}; 
        namespace Ch10ValC{
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::clear> clear{};
        }
        ///Disable PPI channel 11.
        enum class Ch11Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ch11Val> ch11{}; 
        namespace Ch11ValC{
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::clear> clear{};
        }
        ///Disable PPI channel 12.
        enum class Ch12Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ch12Val> ch12{}; 
        namespace Ch12ValC{
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::clear> clear{};
        }
        ///Disable PPI channel 13.
        enum class Ch13Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ch13Val> ch13{}; 
        namespace Ch13ValC{
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::clear> clear{};
        }
        ///Disable PPI channel 14.
        enum class Ch14Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ch14Val> ch14{}; 
        namespace Ch14ValC{
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::clear> clear{};
        }
        ///Disable PPI channel 15.
        enum class Ch15Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ch15Val> ch15{}; 
        namespace Ch15ValC{
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::clear> clear{};
        }
        ///Disable PPI channel 20.
        enum class Ch20Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Ch20Val> ch20{}; 
        namespace Ch20ValC{
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::clear> clear{};
        }
        ///Disable PPI channel 21.
        enum class Ch21Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Ch21Val> ch21{}; 
        namespace Ch21ValC{
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::clear> clear{};
        }
        ///Disable PPI channel 22.
        enum class Ch22Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Ch22Val> ch22{}; 
        namespace Ch22ValC{
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::clear> clear{};
        }
        ///Disable PPI channel 23.
        enum class Ch23Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ch23Val> ch23{}; 
        namespace Ch23ValC{
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::clear> clear{};
        }
        ///Disable PPI channel 24.
        enum class Ch24Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ch24Val> ch24{}; 
        namespace Ch24ValC{
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::clear> clear{};
        }
        ///Disable PPI channel 25.
        enum class Ch25Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ch25Val> ch25{}; 
        namespace Ch25ValC{
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::clear> clear{};
        }
        ///Disable PPI channel 26.
        enum class Ch26Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ch26Val> ch26{}; 
        namespace Ch26ValC{
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::clear> clear{};
        }
        ///Disable PPI channel 27.
        enum class Ch27Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ch27Val> ch27{}; 
        namespace Ch27ValC{
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::clear> clear{};
        }
        ///Disable PPI channel 28.
        enum class Ch28Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Ch28Val> ch28{}; 
        namespace Ch28ValC{
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::clear> clear{};
        }
        ///Disable PPI channel 29.
        enum class Ch29Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Ch29Val> ch29{}; 
        namespace Ch29ValC{
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::clear> clear{};
        }
        ///Disable PPI channel 30.
        enum class Ch30Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Ch30Val> ch30{}; 
        namespace Ch30ValC{
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::clear> clear{};
        }
        ///Disable PPI channel 31.
        enum class Ch31Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ch31Val> ch31{}; 
        namespace Ch31ValC{
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::clear> clear{};
        }
    }
    namespace Nonechg0{    ///<Channel group configuration.
        using Addr = Register::Address<0x4001f800,0x000f0000,0,unsigned>;
        ///Include CH0 in channel group.
        enum class Ch0Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0Val> ch0{}; 
        namespace Ch0ValC{
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::included> included{};
        }
        ///Include CH1 in channel group.
        enum class Ch1Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1Val> ch1{}; 
        namespace Ch1ValC{
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::included> included{};
        }
        ///Include CH2 in channel group.
        enum class Ch2Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2Val> ch2{}; 
        namespace Ch2ValC{
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::included> included{};
        }
        ///Include CH3 in channel group.
        enum class Ch3Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3Val> ch3{}; 
        namespace Ch3ValC{
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::included> included{};
        }
        ///Include CH4 in channel group.
        enum class Ch4Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4Val> ch4{}; 
        namespace Ch4ValC{
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::included> included{};
        }
        ///Include CH5 in channel group.
        enum class Ch5Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5Val> ch5{}; 
        namespace Ch5ValC{
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::included> included{};
        }
        ///Include CH6 in channel group.
        enum class Ch6Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6Val> ch6{}; 
        namespace Ch6ValC{
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::included> included{};
        }
        ///Include CH7 in channel group.
        enum class Ch7Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7Val> ch7{}; 
        namespace Ch7ValC{
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::included> included{};
        }
        ///Include CH8 in channel group.
        enum class Ch8Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch8Val> ch8{}; 
        namespace Ch8ValC{
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::included> included{};
        }
        ///Include CH9 in channel group.
        enum class Ch9Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch9Val> ch9{}; 
        namespace Ch9ValC{
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::included> included{};
        }
        ///Include CH10 in channel group.
        enum class Ch10Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ch10Val> ch10{}; 
        namespace Ch10ValC{
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::included> included{};
        }
        ///Include CH11 in channel group.
        enum class Ch11Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ch11Val> ch11{}; 
        namespace Ch11ValC{
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::included> included{};
        }
        ///Include CH12 in channel group.
        enum class Ch12Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ch12Val> ch12{}; 
        namespace Ch12ValC{
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::included> included{};
        }
        ///Include CH13 in channel group.
        enum class Ch13Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ch13Val> ch13{}; 
        namespace Ch13ValC{
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::included> included{};
        }
        ///Include CH14 in channel group.
        enum class Ch14Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ch14Val> ch14{}; 
        namespace Ch14ValC{
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::included> included{};
        }
        ///Include CH15 in channel group.
        enum class Ch15Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ch15Val> ch15{}; 
        namespace Ch15ValC{
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::included> included{};
        }
        ///Include CH20 in channel group.
        enum class Ch20Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Ch20Val> ch20{}; 
        namespace Ch20ValC{
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::included> included{};
        }
        ///Include CH21 in channel group.
        enum class Ch21Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Ch21Val> ch21{}; 
        namespace Ch21ValC{
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::included> included{};
        }
        ///Include CH22 in channel group.
        enum class Ch22Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Ch22Val> ch22{}; 
        namespace Ch22ValC{
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::included> included{};
        }
        ///Include CH23 in channel group.
        enum class Ch23Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ch23Val> ch23{}; 
        namespace Ch23ValC{
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::included> included{};
        }
        ///Include CH24 in channel group.
        enum class Ch24Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ch24Val> ch24{}; 
        namespace Ch24ValC{
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::included> included{};
        }
        ///Include CH25 in channel group.
        enum class Ch25Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ch25Val> ch25{}; 
        namespace Ch25ValC{
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::included> included{};
        }
        ///Include CH26 in channel group.
        enum class Ch26Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ch26Val> ch26{}; 
        namespace Ch26ValC{
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::included> included{};
        }
        ///Include CH27 in channel group.
        enum class Ch27Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ch27Val> ch27{}; 
        namespace Ch27ValC{
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::included> included{};
        }
        ///Include CH28 in channel group.
        enum class Ch28Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Ch28Val> ch28{}; 
        namespace Ch28ValC{
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::included> included{};
        }
        ///Include CH29 in channel group.
        enum class Ch29Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Ch29Val> ch29{}; 
        namespace Ch29ValC{
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::included> included{};
        }
        ///Include CH30 in channel group.
        enum class Ch30Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Ch30Val> ch30{}; 
        namespace Ch30ValC{
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::included> included{};
        }
        ///Include CH31 in channel group.
        enum class Ch31Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ch31Val> ch31{}; 
        namespace Ch31ValC{
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::included> included{};
        }
    }
    namespace Nonechg1{    ///<Channel group configuration.
        using Addr = Register::Address<0x4001f804,0x000f0000,0,unsigned>;
        ///Include CH0 in channel group.
        enum class Ch0Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0Val> ch0{}; 
        namespace Ch0ValC{
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::included> included{};
        }
        ///Include CH1 in channel group.
        enum class Ch1Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1Val> ch1{}; 
        namespace Ch1ValC{
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::included> included{};
        }
        ///Include CH2 in channel group.
        enum class Ch2Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2Val> ch2{}; 
        namespace Ch2ValC{
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::included> included{};
        }
        ///Include CH3 in channel group.
        enum class Ch3Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3Val> ch3{}; 
        namespace Ch3ValC{
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::included> included{};
        }
        ///Include CH4 in channel group.
        enum class Ch4Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4Val> ch4{}; 
        namespace Ch4ValC{
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::included> included{};
        }
        ///Include CH5 in channel group.
        enum class Ch5Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5Val> ch5{}; 
        namespace Ch5ValC{
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::included> included{};
        }
        ///Include CH6 in channel group.
        enum class Ch6Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6Val> ch6{}; 
        namespace Ch6ValC{
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::included> included{};
        }
        ///Include CH7 in channel group.
        enum class Ch7Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7Val> ch7{}; 
        namespace Ch7ValC{
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::included> included{};
        }
        ///Include CH8 in channel group.
        enum class Ch8Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch8Val> ch8{}; 
        namespace Ch8ValC{
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::included> included{};
        }
        ///Include CH9 in channel group.
        enum class Ch9Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch9Val> ch9{}; 
        namespace Ch9ValC{
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::included> included{};
        }
        ///Include CH10 in channel group.
        enum class Ch10Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ch10Val> ch10{}; 
        namespace Ch10ValC{
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::included> included{};
        }
        ///Include CH11 in channel group.
        enum class Ch11Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ch11Val> ch11{}; 
        namespace Ch11ValC{
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::included> included{};
        }
        ///Include CH12 in channel group.
        enum class Ch12Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ch12Val> ch12{}; 
        namespace Ch12ValC{
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::included> included{};
        }
        ///Include CH13 in channel group.
        enum class Ch13Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ch13Val> ch13{}; 
        namespace Ch13ValC{
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::included> included{};
        }
        ///Include CH14 in channel group.
        enum class Ch14Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ch14Val> ch14{}; 
        namespace Ch14ValC{
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::included> included{};
        }
        ///Include CH15 in channel group.
        enum class Ch15Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ch15Val> ch15{}; 
        namespace Ch15ValC{
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::included> included{};
        }
        ///Include CH20 in channel group.
        enum class Ch20Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Ch20Val> ch20{}; 
        namespace Ch20ValC{
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::included> included{};
        }
        ///Include CH21 in channel group.
        enum class Ch21Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Ch21Val> ch21{}; 
        namespace Ch21ValC{
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::included> included{};
        }
        ///Include CH22 in channel group.
        enum class Ch22Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Ch22Val> ch22{}; 
        namespace Ch22ValC{
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::included> included{};
        }
        ///Include CH23 in channel group.
        enum class Ch23Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ch23Val> ch23{}; 
        namespace Ch23ValC{
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::included> included{};
        }
        ///Include CH24 in channel group.
        enum class Ch24Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ch24Val> ch24{}; 
        namespace Ch24ValC{
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::included> included{};
        }
        ///Include CH25 in channel group.
        enum class Ch25Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ch25Val> ch25{}; 
        namespace Ch25ValC{
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::included> included{};
        }
        ///Include CH26 in channel group.
        enum class Ch26Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ch26Val> ch26{}; 
        namespace Ch26ValC{
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::included> included{};
        }
        ///Include CH27 in channel group.
        enum class Ch27Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ch27Val> ch27{}; 
        namespace Ch27ValC{
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::included> included{};
        }
        ///Include CH28 in channel group.
        enum class Ch28Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Ch28Val> ch28{}; 
        namespace Ch28ValC{
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::included> included{};
        }
        ///Include CH29 in channel group.
        enum class Ch29Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Ch29Val> ch29{}; 
        namespace Ch29ValC{
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::included> included{};
        }
        ///Include CH30 in channel group.
        enum class Ch30Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Ch30Val> ch30{}; 
        namespace Ch30ValC{
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::included> included{};
        }
        ///Include CH31 in channel group.
        enum class Ch31Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ch31Val> ch31{}; 
        namespace Ch31ValC{
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::included> included{};
        }
    }
    namespace Nonechg2{    ///<Channel group configuration.
        using Addr = Register::Address<0x4001f808,0x000f0000,0,unsigned>;
        ///Include CH0 in channel group.
        enum class Ch0Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0Val> ch0{}; 
        namespace Ch0ValC{
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::included> included{};
        }
        ///Include CH1 in channel group.
        enum class Ch1Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1Val> ch1{}; 
        namespace Ch1ValC{
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::included> included{};
        }
        ///Include CH2 in channel group.
        enum class Ch2Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2Val> ch2{}; 
        namespace Ch2ValC{
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::included> included{};
        }
        ///Include CH3 in channel group.
        enum class Ch3Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3Val> ch3{}; 
        namespace Ch3ValC{
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::included> included{};
        }
        ///Include CH4 in channel group.
        enum class Ch4Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4Val> ch4{}; 
        namespace Ch4ValC{
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::included> included{};
        }
        ///Include CH5 in channel group.
        enum class Ch5Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5Val> ch5{}; 
        namespace Ch5ValC{
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::included> included{};
        }
        ///Include CH6 in channel group.
        enum class Ch6Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6Val> ch6{}; 
        namespace Ch6ValC{
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::included> included{};
        }
        ///Include CH7 in channel group.
        enum class Ch7Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7Val> ch7{}; 
        namespace Ch7ValC{
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::included> included{};
        }
        ///Include CH8 in channel group.
        enum class Ch8Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch8Val> ch8{}; 
        namespace Ch8ValC{
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::included> included{};
        }
        ///Include CH9 in channel group.
        enum class Ch9Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch9Val> ch9{}; 
        namespace Ch9ValC{
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::included> included{};
        }
        ///Include CH10 in channel group.
        enum class Ch10Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ch10Val> ch10{}; 
        namespace Ch10ValC{
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::included> included{};
        }
        ///Include CH11 in channel group.
        enum class Ch11Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ch11Val> ch11{}; 
        namespace Ch11ValC{
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::included> included{};
        }
        ///Include CH12 in channel group.
        enum class Ch12Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ch12Val> ch12{}; 
        namespace Ch12ValC{
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::included> included{};
        }
        ///Include CH13 in channel group.
        enum class Ch13Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ch13Val> ch13{}; 
        namespace Ch13ValC{
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::included> included{};
        }
        ///Include CH14 in channel group.
        enum class Ch14Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ch14Val> ch14{}; 
        namespace Ch14ValC{
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::included> included{};
        }
        ///Include CH15 in channel group.
        enum class Ch15Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ch15Val> ch15{}; 
        namespace Ch15ValC{
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::included> included{};
        }
        ///Include CH20 in channel group.
        enum class Ch20Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Ch20Val> ch20{}; 
        namespace Ch20ValC{
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::included> included{};
        }
        ///Include CH21 in channel group.
        enum class Ch21Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Ch21Val> ch21{}; 
        namespace Ch21ValC{
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::included> included{};
        }
        ///Include CH22 in channel group.
        enum class Ch22Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Ch22Val> ch22{}; 
        namespace Ch22ValC{
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::included> included{};
        }
        ///Include CH23 in channel group.
        enum class Ch23Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ch23Val> ch23{}; 
        namespace Ch23ValC{
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::included> included{};
        }
        ///Include CH24 in channel group.
        enum class Ch24Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ch24Val> ch24{}; 
        namespace Ch24ValC{
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::included> included{};
        }
        ///Include CH25 in channel group.
        enum class Ch25Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ch25Val> ch25{}; 
        namespace Ch25ValC{
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::included> included{};
        }
        ///Include CH26 in channel group.
        enum class Ch26Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ch26Val> ch26{}; 
        namespace Ch26ValC{
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::included> included{};
        }
        ///Include CH27 in channel group.
        enum class Ch27Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ch27Val> ch27{}; 
        namespace Ch27ValC{
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::included> included{};
        }
        ///Include CH28 in channel group.
        enum class Ch28Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Ch28Val> ch28{}; 
        namespace Ch28ValC{
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::included> included{};
        }
        ///Include CH29 in channel group.
        enum class Ch29Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Ch29Val> ch29{}; 
        namespace Ch29ValC{
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::included> included{};
        }
        ///Include CH30 in channel group.
        enum class Ch30Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Ch30Val> ch30{}; 
        namespace Ch30ValC{
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::included> included{};
        }
        ///Include CH31 in channel group.
        enum class Ch31Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ch31Val> ch31{}; 
        namespace Ch31ValC{
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::included> included{};
        }
    }
    namespace Nonechg3{    ///<Channel group configuration.
        using Addr = Register::Address<0x4001f80c,0x000f0000,0,unsigned>;
        ///Include CH0 in channel group.
        enum class Ch0Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0Val> ch0{}; 
        namespace Ch0ValC{
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::included> included{};
        }
        ///Include CH1 in channel group.
        enum class Ch1Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1Val> ch1{}; 
        namespace Ch1ValC{
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::included> included{};
        }
        ///Include CH2 in channel group.
        enum class Ch2Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2Val> ch2{}; 
        namespace Ch2ValC{
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::included> included{};
        }
        ///Include CH3 in channel group.
        enum class Ch3Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3Val> ch3{}; 
        namespace Ch3ValC{
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::included> included{};
        }
        ///Include CH4 in channel group.
        enum class Ch4Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4Val> ch4{}; 
        namespace Ch4ValC{
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::included> included{};
        }
        ///Include CH5 in channel group.
        enum class Ch5Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5Val> ch5{}; 
        namespace Ch5ValC{
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::included> included{};
        }
        ///Include CH6 in channel group.
        enum class Ch6Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6Val> ch6{}; 
        namespace Ch6ValC{
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::included> included{};
        }
        ///Include CH7 in channel group.
        enum class Ch7Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7Val> ch7{}; 
        namespace Ch7ValC{
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::included> included{};
        }
        ///Include CH8 in channel group.
        enum class Ch8Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch8Val> ch8{}; 
        namespace Ch8ValC{
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::included> included{};
        }
        ///Include CH9 in channel group.
        enum class Ch9Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch9Val> ch9{}; 
        namespace Ch9ValC{
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::included> included{};
        }
        ///Include CH10 in channel group.
        enum class Ch10Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ch10Val> ch10{}; 
        namespace Ch10ValC{
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::included> included{};
        }
        ///Include CH11 in channel group.
        enum class Ch11Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ch11Val> ch11{}; 
        namespace Ch11ValC{
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::included> included{};
        }
        ///Include CH12 in channel group.
        enum class Ch12Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ch12Val> ch12{}; 
        namespace Ch12ValC{
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::included> included{};
        }
        ///Include CH13 in channel group.
        enum class Ch13Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ch13Val> ch13{}; 
        namespace Ch13ValC{
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::included> included{};
        }
        ///Include CH14 in channel group.
        enum class Ch14Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ch14Val> ch14{}; 
        namespace Ch14ValC{
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::included> included{};
        }
        ///Include CH15 in channel group.
        enum class Ch15Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ch15Val> ch15{}; 
        namespace Ch15ValC{
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::included> included{};
        }
        ///Include CH20 in channel group.
        enum class Ch20Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Ch20Val> ch20{}; 
        namespace Ch20ValC{
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::included> included{};
        }
        ///Include CH21 in channel group.
        enum class Ch21Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Ch21Val> ch21{}; 
        namespace Ch21ValC{
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::included> included{};
        }
        ///Include CH22 in channel group.
        enum class Ch22Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Ch22Val> ch22{}; 
        namespace Ch22ValC{
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::included> included{};
        }
        ///Include CH23 in channel group.
        enum class Ch23Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ch23Val> ch23{}; 
        namespace Ch23ValC{
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::included> included{};
        }
        ///Include CH24 in channel group.
        enum class Ch24Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ch24Val> ch24{}; 
        namespace Ch24ValC{
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::included> included{};
        }
        ///Include CH25 in channel group.
        enum class Ch25Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ch25Val> ch25{}; 
        namespace Ch25ValC{
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::included> included{};
        }
        ///Include CH26 in channel group.
        enum class Ch26Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ch26Val> ch26{}; 
        namespace Ch26ValC{
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::included> included{};
        }
        ///Include CH27 in channel group.
        enum class Ch27Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ch27Val> ch27{}; 
        namespace Ch27ValC{
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::included> included{};
        }
        ///Include CH28 in channel group.
        enum class Ch28Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Ch28Val> ch28{}; 
        namespace Ch28ValC{
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::included> included{};
        }
        ///Include CH29 in channel group.
        enum class Ch29Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Ch29Val> ch29{}; 
        namespace Ch29ValC{
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::included> included{};
        }
        ///Include CH30 in channel group.
        enum class Ch30Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Ch30Val> ch30{}; 
        namespace Ch30ValC{
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::included> included{};
        }
        ///Include CH31 in channel group.
        enum class Ch31Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ch31Val> ch31{}; 
        namespace Ch31ValC{
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::included> included{};
        }
    }
}
