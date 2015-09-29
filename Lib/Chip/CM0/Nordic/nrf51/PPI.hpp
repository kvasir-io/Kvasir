#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//PPI controller.
    namespace Nonechen{    ///<Channel enable.
        using Addr = Register::Address<0x4001f500,0x000f0000,0,unsigned>;
        ///Enable PPI channel 0.
        enum class ch0Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        namespace ch0ValC{
            constexpr MPL::Value<ch0Val,ch0Val::disabled> disabled{};
            constexpr MPL::Value<ch0Val,ch0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0Val> ch0{}; 
        ///Enable PPI channel 1.
        enum class ch1Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        namespace ch1ValC{
            constexpr MPL::Value<ch1Val,ch1Val::disabled> disabled{};
            constexpr MPL::Value<ch1Val,ch1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1Val> ch1{}; 
        ///Enable PPI channel 2.
        enum class ch2Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        namespace ch2ValC{
            constexpr MPL::Value<ch2Val,ch2Val::disabled> disabled{};
            constexpr MPL::Value<ch2Val,ch2Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2Val> ch2{}; 
        ///Enable PPI channel 3.
        enum class ch3Val {
            disabled=0x00000000,     ///<Channel disabled
            enabled=0x00000001,     ///<Channel enabled
        };
        namespace ch3ValC{
            constexpr MPL::Value<ch3Val,ch3Val::disabled> disabled{};
            constexpr MPL::Value<ch3Val,ch3Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3Val> ch3{}; 
        ///Enable PPI channel 4.
        enum class ch4Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        namespace ch4ValC{
            constexpr MPL::Value<ch4Val,ch4Val::disabled> disabled{};
            constexpr MPL::Value<ch4Val,ch4Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4Val> ch4{}; 
        ///Enable PPI channel 5.
        enum class ch5Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        namespace ch5ValC{
            constexpr MPL::Value<ch5Val,ch5Val::disabled> disabled{};
            constexpr MPL::Value<ch5Val,ch5Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5Val> ch5{}; 
        ///Enable PPI channel 6.
        enum class ch6Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        namespace ch6ValC{
            constexpr MPL::Value<ch6Val,ch6Val::disabled> disabled{};
            constexpr MPL::Value<ch6Val,ch6Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6Val> ch6{}; 
        ///Enable PPI channel 7.
        enum class ch7Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        namespace ch7ValC{
            constexpr MPL::Value<ch7Val,ch7Val::disabled> disabled{};
            constexpr MPL::Value<ch7Val,ch7Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7Val> ch7{}; 
        ///Enable PPI channel 8.
        enum class ch8Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        namespace ch8ValC{
            constexpr MPL::Value<ch8Val,ch8Val::disabled> disabled{};
            constexpr MPL::Value<ch8Val,ch8Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch8Val> ch8{}; 
        ///Enable PPI channel 9.
        enum class ch9Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        namespace ch9ValC{
            constexpr MPL::Value<ch9Val,ch9Val::disabled> disabled{};
            constexpr MPL::Value<ch9Val,ch9Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch9Val> ch9{}; 
        ///Enable PPI channel 10.
        enum class ch10Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        namespace ch10ValC{
            constexpr MPL::Value<ch10Val,ch10Val::disabled> disabled{};
            constexpr MPL::Value<ch10Val,ch10Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ch10Val> ch10{}; 
        ///Enable PPI channel 11.
        enum class ch11Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        namespace ch11ValC{
            constexpr MPL::Value<ch11Val,ch11Val::disabled> disabled{};
            constexpr MPL::Value<ch11Val,ch11Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ch11Val> ch11{}; 
        ///Enable PPI channel 12.
        enum class ch12Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        namespace ch12ValC{
            constexpr MPL::Value<ch12Val,ch12Val::disabled> disabled{};
            constexpr MPL::Value<ch12Val,ch12Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ch12Val> ch12{}; 
        ///Enable PPI channel 13.
        enum class ch13Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        namespace ch13ValC{
            constexpr MPL::Value<ch13Val,ch13Val::disabled> disabled{};
            constexpr MPL::Value<ch13Val,ch13Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ch13Val> ch13{}; 
        ///Enable PPI channel 14.
        enum class ch14Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        namespace ch14ValC{
            constexpr MPL::Value<ch14Val,ch14Val::disabled> disabled{};
            constexpr MPL::Value<ch14Val,ch14Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ch14Val> ch14{}; 
        ///Enable PPI channel 15.
        enum class ch15Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        namespace ch15ValC{
            constexpr MPL::Value<ch15Val,ch15Val::disabled> disabled{};
            constexpr MPL::Value<ch15Val,ch15Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ch15Val> ch15{}; 
        ///Enable PPI channel 20.
        enum class ch20Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        namespace ch20ValC{
            constexpr MPL::Value<ch20Val,ch20Val::disabled> disabled{};
            constexpr MPL::Value<ch20Val,ch20Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ch20Val> ch20{}; 
        ///Enable PPI channel 21.
        enum class ch21Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        namespace ch21ValC{
            constexpr MPL::Value<ch21Val,ch21Val::disabled> disabled{};
            constexpr MPL::Value<ch21Val,ch21Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ch21Val> ch21{}; 
        ///Enable PPI channel 22.
        enum class ch22Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        namespace ch22ValC{
            constexpr MPL::Value<ch22Val,ch22Val::disabled> disabled{};
            constexpr MPL::Value<ch22Val,ch22Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ch22Val> ch22{}; 
        ///Enable PPI channel 23.
        enum class ch23Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        namespace ch23ValC{
            constexpr MPL::Value<ch23Val,ch23Val::disabled> disabled{};
            constexpr MPL::Value<ch23Val,ch23Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ch23Val> ch23{}; 
        ///Enable PPI channel 24.
        enum class ch24Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        namespace ch24ValC{
            constexpr MPL::Value<ch24Val,ch24Val::disabled> disabled{};
            constexpr MPL::Value<ch24Val,ch24Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ch24Val> ch24{}; 
        ///Enable PPI channel 25.
        enum class ch25Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        namespace ch25ValC{
            constexpr MPL::Value<ch25Val,ch25Val::disabled> disabled{};
            constexpr MPL::Value<ch25Val,ch25Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,ch25Val> ch25{}; 
        ///Enable PPI channel 26.
        enum class ch26Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        namespace ch26ValC{
            constexpr MPL::Value<ch26Val,ch26Val::disabled> disabled{};
            constexpr MPL::Value<ch26Val,ch26Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ch26Val> ch26{}; 
        ///Enable PPI channel 27.
        enum class ch27Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        namespace ch27ValC{
            constexpr MPL::Value<ch27Val,ch27Val::disabled> disabled{};
            constexpr MPL::Value<ch27Val,ch27Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ch27Val> ch27{}; 
        ///Enable PPI channel 28.
        enum class ch28Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        namespace ch28ValC{
            constexpr MPL::Value<ch28Val,ch28Val::disabled> disabled{};
            constexpr MPL::Value<ch28Val,ch28Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,ch28Val> ch28{}; 
        ///Enable PPI channel 29.
        enum class ch29Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        namespace ch29ValC{
            constexpr MPL::Value<ch29Val,ch29Val::disabled> disabled{};
            constexpr MPL::Value<ch29Val,ch29Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,ch29Val> ch29{}; 
        ///Enable PPI channel 30.
        enum class ch30Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        namespace ch30ValC{
            constexpr MPL::Value<ch30Val,ch30Val::disabled> disabled{};
            constexpr MPL::Value<ch30Val,ch30Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ch30Val> ch30{}; 
        ///Enable PPI channel 31.
        enum class ch31Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
        };
        namespace ch31ValC{
            constexpr MPL::Value<ch31Val,ch31Val::disabled> disabled{};
            constexpr MPL::Value<ch31Val,ch31Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ch31Val> ch31{}; 
    }
    namespace Nonechenset{    ///<Channel enable set.
        using Addr = Register::Address<0x4001f504,0x000f0000,0,unsigned>;
        ///Enable PPI channel 0.
        enum class ch0Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        namespace ch0ValC{
            constexpr MPL::Value<ch0Val,ch0Val::disabled> disabled{};
            constexpr MPL::Value<ch0Val,ch0Val::enabled> enabled{};
            constexpr MPL::Value<ch0Val,ch0Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0Val> ch0{}; 
        ///Enable PPI channel 1.
        enum class ch1Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        namespace ch1ValC{
            constexpr MPL::Value<ch1Val,ch1Val::disabled> disabled{};
            constexpr MPL::Value<ch1Val,ch1Val::enabled> enabled{};
            constexpr MPL::Value<ch1Val,ch1Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1Val> ch1{}; 
        ///Enable PPI channel 2.
        enum class ch2Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        namespace ch2ValC{
            constexpr MPL::Value<ch2Val,ch2Val::disabled> disabled{};
            constexpr MPL::Value<ch2Val,ch2Val::enabled> enabled{};
            constexpr MPL::Value<ch2Val,ch2Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2Val> ch2{}; 
        ///Enable PPI channel 3.
        enum class ch3Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        namespace ch3ValC{
            constexpr MPL::Value<ch3Val,ch3Val::disabled> disabled{};
            constexpr MPL::Value<ch3Val,ch3Val::enabled> enabled{};
            constexpr MPL::Value<ch3Val,ch3Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3Val> ch3{}; 
        ///Enable PPI channel 4.
        enum class ch4Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        namespace ch4ValC{
            constexpr MPL::Value<ch4Val,ch4Val::disabled> disabled{};
            constexpr MPL::Value<ch4Val,ch4Val::enabled> enabled{};
            constexpr MPL::Value<ch4Val,ch4Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4Val> ch4{}; 
        ///Enable PPI channel 5.
        enum class ch5Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        namespace ch5ValC{
            constexpr MPL::Value<ch5Val,ch5Val::disabled> disabled{};
            constexpr MPL::Value<ch5Val,ch5Val::enabled> enabled{};
            constexpr MPL::Value<ch5Val,ch5Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5Val> ch5{}; 
        ///Enable PPI channel 6.
        enum class ch6Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        namespace ch6ValC{
            constexpr MPL::Value<ch6Val,ch6Val::disabled> disabled{};
            constexpr MPL::Value<ch6Val,ch6Val::enabled> enabled{};
            constexpr MPL::Value<ch6Val,ch6Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6Val> ch6{}; 
        ///Enable PPI channel 7.
        enum class ch7Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        namespace ch7ValC{
            constexpr MPL::Value<ch7Val,ch7Val::disabled> disabled{};
            constexpr MPL::Value<ch7Val,ch7Val::enabled> enabled{};
            constexpr MPL::Value<ch7Val,ch7Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7Val> ch7{}; 
        ///Enable PPI channel 8.
        enum class ch8Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        namespace ch8ValC{
            constexpr MPL::Value<ch8Val,ch8Val::disabled> disabled{};
            constexpr MPL::Value<ch8Val,ch8Val::enabled> enabled{};
            constexpr MPL::Value<ch8Val,ch8Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch8Val> ch8{}; 
        ///Enable PPI channel 9.
        enum class ch9Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        namespace ch9ValC{
            constexpr MPL::Value<ch9Val,ch9Val::disabled> disabled{};
            constexpr MPL::Value<ch9Val,ch9Val::enabled> enabled{};
            constexpr MPL::Value<ch9Val,ch9Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch9Val> ch9{}; 
        ///Enable PPI channel 10.
        enum class ch10Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        namespace ch10ValC{
            constexpr MPL::Value<ch10Val,ch10Val::disabled> disabled{};
            constexpr MPL::Value<ch10Val,ch10Val::enabled> enabled{};
            constexpr MPL::Value<ch10Val,ch10Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ch10Val> ch10{}; 
        ///Enable PPI channel 11.
        enum class ch11Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        namespace ch11ValC{
            constexpr MPL::Value<ch11Val,ch11Val::disabled> disabled{};
            constexpr MPL::Value<ch11Val,ch11Val::enabled> enabled{};
            constexpr MPL::Value<ch11Val,ch11Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ch11Val> ch11{}; 
        ///Enable PPI channel 12.
        enum class ch12Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        namespace ch12ValC{
            constexpr MPL::Value<ch12Val,ch12Val::disabled> disabled{};
            constexpr MPL::Value<ch12Val,ch12Val::enabled> enabled{};
            constexpr MPL::Value<ch12Val,ch12Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ch12Val> ch12{}; 
        ///Enable PPI channel 13.
        enum class ch13Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        namespace ch13ValC{
            constexpr MPL::Value<ch13Val,ch13Val::disabled> disabled{};
            constexpr MPL::Value<ch13Val,ch13Val::enabled> enabled{};
            constexpr MPL::Value<ch13Val,ch13Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ch13Val> ch13{}; 
        ///Enable PPI channel 14.
        enum class ch14Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        namespace ch14ValC{
            constexpr MPL::Value<ch14Val,ch14Val::disabled> disabled{};
            constexpr MPL::Value<ch14Val,ch14Val::enabled> enabled{};
            constexpr MPL::Value<ch14Val,ch14Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ch14Val> ch14{}; 
        ///Enable PPI channel 15.
        enum class ch15Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        namespace ch15ValC{
            constexpr MPL::Value<ch15Val,ch15Val::disabled> disabled{};
            constexpr MPL::Value<ch15Val,ch15Val::enabled> enabled{};
            constexpr MPL::Value<ch15Val,ch15Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ch15Val> ch15{}; 
        ///Enable PPI channel 20.
        enum class ch20Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        namespace ch20ValC{
            constexpr MPL::Value<ch20Val,ch20Val::disabled> disabled{};
            constexpr MPL::Value<ch20Val,ch20Val::enabled> enabled{};
            constexpr MPL::Value<ch20Val,ch20Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ch20Val> ch20{}; 
        ///Enable PPI channel 21.
        enum class ch21Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        namespace ch21ValC{
            constexpr MPL::Value<ch21Val,ch21Val::disabled> disabled{};
            constexpr MPL::Value<ch21Val,ch21Val::enabled> enabled{};
            constexpr MPL::Value<ch21Val,ch21Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ch21Val> ch21{}; 
        ///Enable PPI channel 22.
        enum class ch22Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        namespace ch22ValC{
            constexpr MPL::Value<ch22Val,ch22Val::disabled> disabled{};
            constexpr MPL::Value<ch22Val,ch22Val::enabled> enabled{};
            constexpr MPL::Value<ch22Val,ch22Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ch22Val> ch22{}; 
        ///Enable PPI channel 23.
        enum class ch23Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        namespace ch23ValC{
            constexpr MPL::Value<ch23Val,ch23Val::disabled> disabled{};
            constexpr MPL::Value<ch23Val,ch23Val::enabled> enabled{};
            constexpr MPL::Value<ch23Val,ch23Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ch23Val> ch23{}; 
        ///Enable PPI channel 24.
        enum class ch24Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        namespace ch24ValC{
            constexpr MPL::Value<ch24Val,ch24Val::disabled> disabled{};
            constexpr MPL::Value<ch24Val,ch24Val::enabled> enabled{};
            constexpr MPL::Value<ch24Val,ch24Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ch24Val> ch24{}; 
        ///Enable PPI channel 25.
        enum class ch25Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        namespace ch25ValC{
            constexpr MPL::Value<ch25Val,ch25Val::disabled> disabled{};
            constexpr MPL::Value<ch25Val,ch25Val::enabled> enabled{};
            constexpr MPL::Value<ch25Val,ch25Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,ch25Val> ch25{}; 
        ///Enable PPI channel 26.
        enum class ch26Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        namespace ch26ValC{
            constexpr MPL::Value<ch26Val,ch26Val::disabled> disabled{};
            constexpr MPL::Value<ch26Val,ch26Val::enabled> enabled{};
            constexpr MPL::Value<ch26Val,ch26Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ch26Val> ch26{}; 
        ///Enable PPI channel 27.
        enum class ch27Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        namespace ch27ValC{
            constexpr MPL::Value<ch27Val,ch27Val::disabled> disabled{};
            constexpr MPL::Value<ch27Val,ch27Val::enabled> enabled{};
            constexpr MPL::Value<ch27Val,ch27Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ch27Val> ch27{}; 
        ///Enable PPI channel 28.
        enum class ch28Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        namespace ch28ValC{
            constexpr MPL::Value<ch28Val,ch28Val::disabled> disabled{};
            constexpr MPL::Value<ch28Val,ch28Val::enabled> enabled{};
            constexpr MPL::Value<ch28Val,ch28Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,ch28Val> ch28{}; 
        ///Enable PPI channel 29.
        enum class ch29Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        namespace ch29ValC{
            constexpr MPL::Value<ch29Val,ch29Val::disabled> disabled{};
            constexpr MPL::Value<ch29Val,ch29Val::enabled> enabled{};
            constexpr MPL::Value<ch29Val,ch29Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,ch29Val> ch29{}; 
        ///Enable PPI channel 30.
        enum class ch30Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        namespace ch30ValC{
            constexpr MPL::Value<ch30Val,ch30Val::disabled> disabled{};
            constexpr MPL::Value<ch30Val,ch30Val::enabled> enabled{};
            constexpr MPL::Value<ch30Val,ch30Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ch30Val> ch30{}; 
        ///Enable PPI channel 31.
        enum class ch31Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            set=0x00000001,     ///<Enable channel on write.
        };
        namespace ch31ValC{
            constexpr MPL::Value<ch31Val,ch31Val::disabled> disabled{};
            constexpr MPL::Value<ch31Val,ch31Val::enabled> enabled{};
            constexpr MPL::Value<ch31Val,ch31Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ch31Val> ch31{}; 
    }
    namespace Nonechenclr{    ///<Channel enable clear.
        using Addr = Register::Address<0x4001f508,0x000f0000,0,unsigned>;
        ///Disable PPI channel 0.
        enum class ch0Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        namespace ch0ValC{
            constexpr MPL::Value<ch0Val,ch0Val::disabled> disabled{};
            constexpr MPL::Value<ch0Val,ch0Val::enabled> enabled{};
            constexpr MPL::Value<ch0Val,ch0Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0Val> ch0{}; 
        ///Disable PPI channel 1.
        enum class ch1Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        namespace ch1ValC{
            constexpr MPL::Value<ch1Val,ch1Val::disabled> disabled{};
            constexpr MPL::Value<ch1Val,ch1Val::enabled> enabled{};
            constexpr MPL::Value<ch1Val,ch1Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1Val> ch1{}; 
        ///Disable PPI channel 2.
        enum class ch2Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        namespace ch2ValC{
            constexpr MPL::Value<ch2Val,ch2Val::disabled> disabled{};
            constexpr MPL::Value<ch2Val,ch2Val::enabled> enabled{};
            constexpr MPL::Value<ch2Val,ch2Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2Val> ch2{}; 
        ///Disable PPI channel 3.
        enum class ch3Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        namespace ch3ValC{
            constexpr MPL::Value<ch3Val,ch3Val::disabled> disabled{};
            constexpr MPL::Value<ch3Val,ch3Val::enabled> enabled{};
            constexpr MPL::Value<ch3Val,ch3Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3Val> ch3{}; 
        ///Disable PPI channel 4.
        enum class ch4Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        namespace ch4ValC{
            constexpr MPL::Value<ch4Val,ch4Val::disabled> disabled{};
            constexpr MPL::Value<ch4Val,ch4Val::enabled> enabled{};
            constexpr MPL::Value<ch4Val,ch4Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4Val> ch4{}; 
        ///Disable PPI channel 5.
        enum class ch5Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        namespace ch5ValC{
            constexpr MPL::Value<ch5Val,ch5Val::disabled> disabled{};
            constexpr MPL::Value<ch5Val,ch5Val::enabled> enabled{};
            constexpr MPL::Value<ch5Val,ch5Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5Val> ch5{}; 
        ///Disable PPI channel 6.
        enum class ch6Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        namespace ch6ValC{
            constexpr MPL::Value<ch6Val,ch6Val::disabled> disabled{};
            constexpr MPL::Value<ch6Val,ch6Val::enabled> enabled{};
            constexpr MPL::Value<ch6Val,ch6Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6Val> ch6{}; 
        ///Disable PPI channel 7.
        enum class ch7Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        namespace ch7ValC{
            constexpr MPL::Value<ch7Val,ch7Val::disabled> disabled{};
            constexpr MPL::Value<ch7Val,ch7Val::enabled> enabled{};
            constexpr MPL::Value<ch7Val,ch7Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7Val> ch7{}; 
        ///Disable PPI channel 8.
        enum class ch8Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        namespace ch8ValC{
            constexpr MPL::Value<ch8Val,ch8Val::disabled> disabled{};
            constexpr MPL::Value<ch8Val,ch8Val::enabled> enabled{};
            constexpr MPL::Value<ch8Val,ch8Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch8Val> ch8{}; 
        ///Disable PPI channel 9.
        enum class ch9Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        namespace ch9ValC{
            constexpr MPL::Value<ch9Val,ch9Val::disabled> disabled{};
            constexpr MPL::Value<ch9Val,ch9Val::enabled> enabled{};
            constexpr MPL::Value<ch9Val,ch9Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch9Val> ch9{}; 
        ///Disable PPI channel 10.
        enum class ch10Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        namespace ch10ValC{
            constexpr MPL::Value<ch10Val,ch10Val::disabled> disabled{};
            constexpr MPL::Value<ch10Val,ch10Val::enabled> enabled{};
            constexpr MPL::Value<ch10Val,ch10Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ch10Val> ch10{}; 
        ///Disable PPI channel 11.
        enum class ch11Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        namespace ch11ValC{
            constexpr MPL::Value<ch11Val,ch11Val::disabled> disabled{};
            constexpr MPL::Value<ch11Val,ch11Val::enabled> enabled{};
            constexpr MPL::Value<ch11Val,ch11Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ch11Val> ch11{}; 
        ///Disable PPI channel 12.
        enum class ch12Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        namespace ch12ValC{
            constexpr MPL::Value<ch12Val,ch12Val::disabled> disabled{};
            constexpr MPL::Value<ch12Val,ch12Val::enabled> enabled{};
            constexpr MPL::Value<ch12Val,ch12Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ch12Val> ch12{}; 
        ///Disable PPI channel 13.
        enum class ch13Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        namespace ch13ValC{
            constexpr MPL::Value<ch13Val,ch13Val::disabled> disabled{};
            constexpr MPL::Value<ch13Val,ch13Val::enabled> enabled{};
            constexpr MPL::Value<ch13Val,ch13Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ch13Val> ch13{}; 
        ///Disable PPI channel 14.
        enum class ch14Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        namespace ch14ValC{
            constexpr MPL::Value<ch14Val,ch14Val::disabled> disabled{};
            constexpr MPL::Value<ch14Val,ch14Val::enabled> enabled{};
            constexpr MPL::Value<ch14Val,ch14Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ch14Val> ch14{}; 
        ///Disable PPI channel 15.
        enum class ch15Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        namespace ch15ValC{
            constexpr MPL::Value<ch15Val,ch15Val::disabled> disabled{};
            constexpr MPL::Value<ch15Val,ch15Val::enabled> enabled{};
            constexpr MPL::Value<ch15Val,ch15Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ch15Val> ch15{}; 
        ///Disable PPI channel 20.
        enum class ch20Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        namespace ch20ValC{
            constexpr MPL::Value<ch20Val,ch20Val::disabled> disabled{};
            constexpr MPL::Value<ch20Val,ch20Val::enabled> enabled{};
            constexpr MPL::Value<ch20Val,ch20Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ch20Val> ch20{}; 
        ///Disable PPI channel 21.
        enum class ch21Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        namespace ch21ValC{
            constexpr MPL::Value<ch21Val,ch21Val::disabled> disabled{};
            constexpr MPL::Value<ch21Val,ch21Val::enabled> enabled{};
            constexpr MPL::Value<ch21Val,ch21Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ch21Val> ch21{}; 
        ///Disable PPI channel 22.
        enum class ch22Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        namespace ch22ValC{
            constexpr MPL::Value<ch22Val,ch22Val::disabled> disabled{};
            constexpr MPL::Value<ch22Val,ch22Val::enabled> enabled{};
            constexpr MPL::Value<ch22Val,ch22Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ch22Val> ch22{}; 
        ///Disable PPI channel 23.
        enum class ch23Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        namespace ch23ValC{
            constexpr MPL::Value<ch23Val,ch23Val::disabled> disabled{};
            constexpr MPL::Value<ch23Val,ch23Val::enabled> enabled{};
            constexpr MPL::Value<ch23Val,ch23Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ch23Val> ch23{}; 
        ///Disable PPI channel 24.
        enum class ch24Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        namespace ch24ValC{
            constexpr MPL::Value<ch24Val,ch24Val::disabled> disabled{};
            constexpr MPL::Value<ch24Val,ch24Val::enabled> enabled{};
            constexpr MPL::Value<ch24Val,ch24Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ch24Val> ch24{}; 
        ///Disable PPI channel 25.
        enum class ch25Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        namespace ch25ValC{
            constexpr MPL::Value<ch25Val,ch25Val::disabled> disabled{};
            constexpr MPL::Value<ch25Val,ch25Val::enabled> enabled{};
            constexpr MPL::Value<ch25Val,ch25Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,ch25Val> ch25{}; 
        ///Disable PPI channel 26.
        enum class ch26Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        namespace ch26ValC{
            constexpr MPL::Value<ch26Val,ch26Val::disabled> disabled{};
            constexpr MPL::Value<ch26Val,ch26Val::enabled> enabled{};
            constexpr MPL::Value<ch26Val,ch26Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ch26Val> ch26{}; 
        ///Disable PPI channel 27.
        enum class ch27Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        namespace ch27ValC{
            constexpr MPL::Value<ch27Val,ch27Val::disabled> disabled{};
            constexpr MPL::Value<ch27Val,ch27Val::enabled> enabled{};
            constexpr MPL::Value<ch27Val,ch27Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ch27Val> ch27{}; 
        ///Disable PPI channel 28.
        enum class ch28Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        namespace ch28ValC{
            constexpr MPL::Value<ch28Val,ch28Val::disabled> disabled{};
            constexpr MPL::Value<ch28Val,ch28Val::enabled> enabled{};
            constexpr MPL::Value<ch28Val,ch28Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,ch28Val> ch28{}; 
        ///Disable PPI channel 29.
        enum class ch29Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        namespace ch29ValC{
            constexpr MPL::Value<ch29Val,ch29Val::disabled> disabled{};
            constexpr MPL::Value<ch29Val,ch29Val::enabled> enabled{};
            constexpr MPL::Value<ch29Val,ch29Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,ch29Val> ch29{}; 
        ///Disable PPI channel 30.
        enum class ch30Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        namespace ch30ValC{
            constexpr MPL::Value<ch30Val,ch30Val::disabled> disabled{};
            constexpr MPL::Value<ch30Val,ch30Val::enabled> enabled{};
            constexpr MPL::Value<ch30Val,ch30Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ch30Val> ch30{}; 
        ///Disable PPI channel 31.
        enum class ch31Val {
            disabled=0x00000000,     ///<Channel disabled.
            enabled=0x00000001,     ///<Channel enabled.
            clear=0x00000001,     ///<Disable channel on write.
        };
        namespace ch31ValC{
            constexpr MPL::Value<ch31Val,ch31Val::disabled> disabled{};
            constexpr MPL::Value<ch31Val,ch31Val::enabled> enabled{};
            constexpr MPL::Value<ch31Val,ch31Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ch31Val> ch31{}; 
    }
    namespace Nonechg0{    ///<Channel group configuration.
        using Addr = Register::Address<0x4001f800,0x000f0000,0,unsigned>;
        ///Include CH0 in channel group.
        enum class ch0Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch0ValC{
            constexpr MPL::Value<ch0Val,ch0Val::excluded> excluded{};
            constexpr MPL::Value<ch0Val,ch0Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0Val> ch0{}; 
        ///Include CH1 in channel group.
        enum class ch1Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch1ValC{
            constexpr MPL::Value<ch1Val,ch1Val::excluded> excluded{};
            constexpr MPL::Value<ch1Val,ch1Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1Val> ch1{}; 
        ///Include CH2 in channel group.
        enum class ch2Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch2ValC{
            constexpr MPL::Value<ch2Val,ch2Val::excluded> excluded{};
            constexpr MPL::Value<ch2Val,ch2Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2Val> ch2{}; 
        ///Include CH3 in channel group.
        enum class ch3Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch3ValC{
            constexpr MPL::Value<ch3Val,ch3Val::excluded> excluded{};
            constexpr MPL::Value<ch3Val,ch3Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3Val> ch3{}; 
        ///Include CH4 in channel group.
        enum class ch4Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch4ValC{
            constexpr MPL::Value<ch4Val,ch4Val::excluded> excluded{};
            constexpr MPL::Value<ch4Val,ch4Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4Val> ch4{}; 
        ///Include CH5 in channel group.
        enum class ch5Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch5ValC{
            constexpr MPL::Value<ch5Val,ch5Val::excluded> excluded{};
            constexpr MPL::Value<ch5Val,ch5Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5Val> ch5{}; 
        ///Include CH6 in channel group.
        enum class ch6Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch6ValC{
            constexpr MPL::Value<ch6Val,ch6Val::excluded> excluded{};
            constexpr MPL::Value<ch6Val,ch6Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6Val> ch6{}; 
        ///Include CH7 in channel group.
        enum class ch7Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch7ValC{
            constexpr MPL::Value<ch7Val,ch7Val::excluded> excluded{};
            constexpr MPL::Value<ch7Val,ch7Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7Val> ch7{}; 
        ///Include CH8 in channel group.
        enum class ch8Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch8ValC{
            constexpr MPL::Value<ch8Val,ch8Val::excluded> excluded{};
            constexpr MPL::Value<ch8Val,ch8Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch8Val> ch8{}; 
        ///Include CH9 in channel group.
        enum class ch9Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch9ValC{
            constexpr MPL::Value<ch9Val,ch9Val::excluded> excluded{};
            constexpr MPL::Value<ch9Val,ch9Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch9Val> ch9{}; 
        ///Include CH10 in channel group.
        enum class ch10Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch10ValC{
            constexpr MPL::Value<ch10Val,ch10Val::excluded> excluded{};
            constexpr MPL::Value<ch10Val,ch10Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ch10Val> ch10{}; 
        ///Include CH11 in channel group.
        enum class ch11Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch11ValC{
            constexpr MPL::Value<ch11Val,ch11Val::excluded> excluded{};
            constexpr MPL::Value<ch11Val,ch11Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ch11Val> ch11{}; 
        ///Include CH12 in channel group.
        enum class ch12Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch12ValC{
            constexpr MPL::Value<ch12Val,ch12Val::excluded> excluded{};
            constexpr MPL::Value<ch12Val,ch12Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ch12Val> ch12{}; 
        ///Include CH13 in channel group.
        enum class ch13Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch13ValC{
            constexpr MPL::Value<ch13Val,ch13Val::excluded> excluded{};
            constexpr MPL::Value<ch13Val,ch13Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ch13Val> ch13{}; 
        ///Include CH14 in channel group.
        enum class ch14Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch14ValC{
            constexpr MPL::Value<ch14Val,ch14Val::excluded> excluded{};
            constexpr MPL::Value<ch14Val,ch14Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ch14Val> ch14{}; 
        ///Include CH15 in channel group.
        enum class ch15Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch15ValC{
            constexpr MPL::Value<ch15Val,ch15Val::excluded> excluded{};
            constexpr MPL::Value<ch15Val,ch15Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ch15Val> ch15{}; 
        ///Include CH20 in channel group.
        enum class ch20Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch20ValC{
            constexpr MPL::Value<ch20Val,ch20Val::excluded> excluded{};
            constexpr MPL::Value<ch20Val,ch20Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ch20Val> ch20{}; 
        ///Include CH21 in channel group.
        enum class ch21Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch21ValC{
            constexpr MPL::Value<ch21Val,ch21Val::excluded> excluded{};
            constexpr MPL::Value<ch21Val,ch21Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ch21Val> ch21{}; 
        ///Include CH22 in channel group.
        enum class ch22Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch22ValC{
            constexpr MPL::Value<ch22Val,ch22Val::excluded> excluded{};
            constexpr MPL::Value<ch22Val,ch22Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ch22Val> ch22{}; 
        ///Include CH23 in channel group.
        enum class ch23Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch23ValC{
            constexpr MPL::Value<ch23Val,ch23Val::excluded> excluded{};
            constexpr MPL::Value<ch23Val,ch23Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ch23Val> ch23{}; 
        ///Include CH24 in channel group.
        enum class ch24Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch24ValC{
            constexpr MPL::Value<ch24Val,ch24Val::excluded> excluded{};
            constexpr MPL::Value<ch24Val,ch24Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ch24Val> ch24{}; 
        ///Include CH25 in channel group.
        enum class ch25Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch25ValC{
            constexpr MPL::Value<ch25Val,ch25Val::excluded> excluded{};
            constexpr MPL::Value<ch25Val,ch25Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,ch25Val> ch25{}; 
        ///Include CH26 in channel group.
        enum class ch26Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch26ValC{
            constexpr MPL::Value<ch26Val,ch26Val::excluded> excluded{};
            constexpr MPL::Value<ch26Val,ch26Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ch26Val> ch26{}; 
        ///Include CH27 in channel group.
        enum class ch27Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch27ValC{
            constexpr MPL::Value<ch27Val,ch27Val::excluded> excluded{};
            constexpr MPL::Value<ch27Val,ch27Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ch27Val> ch27{}; 
        ///Include CH28 in channel group.
        enum class ch28Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch28ValC{
            constexpr MPL::Value<ch28Val,ch28Val::excluded> excluded{};
            constexpr MPL::Value<ch28Val,ch28Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,ch28Val> ch28{}; 
        ///Include CH29 in channel group.
        enum class ch29Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch29ValC{
            constexpr MPL::Value<ch29Val,ch29Val::excluded> excluded{};
            constexpr MPL::Value<ch29Val,ch29Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,ch29Val> ch29{}; 
        ///Include CH30 in channel group.
        enum class ch30Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch30ValC{
            constexpr MPL::Value<ch30Val,ch30Val::excluded> excluded{};
            constexpr MPL::Value<ch30Val,ch30Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ch30Val> ch30{}; 
        ///Include CH31 in channel group.
        enum class ch31Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch31ValC{
            constexpr MPL::Value<ch31Val,ch31Val::excluded> excluded{};
            constexpr MPL::Value<ch31Val,ch31Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ch31Val> ch31{}; 
    }
    namespace Nonechg1{    ///<Channel group configuration.
        using Addr = Register::Address<0x4001f804,0x000f0000,0,unsigned>;
        ///Include CH0 in channel group.
        enum class ch0Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch0ValC{
            constexpr MPL::Value<ch0Val,ch0Val::excluded> excluded{};
            constexpr MPL::Value<ch0Val,ch0Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0Val> ch0{}; 
        ///Include CH1 in channel group.
        enum class ch1Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch1ValC{
            constexpr MPL::Value<ch1Val,ch1Val::excluded> excluded{};
            constexpr MPL::Value<ch1Val,ch1Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1Val> ch1{}; 
        ///Include CH2 in channel group.
        enum class ch2Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch2ValC{
            constexpr MPL::Value<ch2Val,ch2Val::excluded> excluded{};
            constexpr MPL::Value<ch2Val,ch2Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2Val> ch2{}; 
        ///Include CH3 in channel group.
        enum class ch3Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch3ValC{
            constexpr MPL::Value<ch3Val,ch3Val::excluded> excluded{};
            constexpr MPL::Value<ch3Val,ch3Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3Val> ch3{}; 
        ///Include CH4 in channel group.
        enum class ch4Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch4ValC{
            constexpr MPL::Value<ch4Val,ch4Val::excluded> excluded{};
            constexpr MPL::Value<ch4Val,ch4Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4Val> ch4{}; 
        ///Include CH5 in channel group.
        enum class ch5Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch5ValC{
            constexpr MPL::Value<ch5Val,ch5Val::excluded> excluded{};
            constexpr MPL::Value<ch5Val,ch5Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5Val> ch5{}; 
        ///Include CH6 in channel group.
        enum class ch6Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch6ValC{
            constexpr MPL::Value<ch6Val,ch6Val::excluded> excluded{};
            constexpr MPL::Value<ch6Val,ch6Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6Val> ch6{}; 
        ///Include CH7 in channel group.
        enum class ch7Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch7ValC{
            constexpr MPL::Value<ch7Val,ch7Val::excluded> excluded{};
            constexpr MPL::Value<ch7Val,ch7Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7Val> ch7{}; 
        ///Include CH8 in channel group.
        enum class ch8Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch8ValC{
            constexpr MPL::Value<ch8Val,ch8Val::excluded> excluded{};
            constexpr MPL::Value<ch8Val,ch8Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch8Val> ch8{}; 
        ///Include CH9 in channel group.
        enum class ch9Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch9ValC{
            constexpr MPL::Value<ch9Val,ch9Val::excluded> excluded{};
            constexpr MPL::Value<ch9Val,ch9Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch9Val> ch9{}; 
        ///Include CH10 in channel group.
        enum class ch10Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch10ValC{
            constexpr MPL::Value<ch10Val,ch10Val::excluded> excluded{};
            constexpr MPL::Value<ch10Val,ch10Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ch10Val> ch10{}; 
        ///Include CH11 in channel group.
        enum class ch11Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch11ValC{
            constexpr MPL::Value<ch11Val,ch11Val::excluded> excluded{};
            constexpr MPL::Value<ch11Val,ch11Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ch11Val> ch11{}; 
        ///Include CH12 in channel group.
        enum class ch12Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch12ValC{
            constexpr MPL::Value<ch12Val,ch12Val::excluded> excluded{};
            constexpr MPL::Value<ch12Val,ch12Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ch12Val> ch12{}; 
        ///Include CH13 in channel group.
        enum class ch13Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch13ValC{
            constexpr MPL::Value<ch13Val,ch13Val::excluded> excluded{};
            constexpr MPL::Value<ch13Val,ch13Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ch13Val> ch13{}; 
        ///Include CH14 in channel group.
        enum class ch14Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch14ValC{
            constexpr MPL::Value<ch14Val,ch14Val::excluded> excluded{};
            constexpr MPL::Value<ch14Val,ch14Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ch14Val> ch14{}; 
        ///Include CH15 in channel group.
        enum class ch15Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch15ValC{
            constexpr MPL::Value<ch15Val,ch15Val::excluded> excluded{};
            constexpr MPL::Value<ch15Val,ch15Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ch15Val> ch15{}; 
        ///Include CH20 in channel group.
        enum class ch20Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch20ValC{
            constexpr MPL::Value<ch20Val,ch20Val::excluded> excluded{};
            constexpr MPL::Value<ch20Val,ch20Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ch20Val> ch20{}; 
        ///Include CH21 in channel group.
        enum class ch21Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch21ValC{
            constexpr MPL::Value<ch21Val,ch21Val::excluded> excluded{};
            constexpr MPL::Value<ch21Val,ch21Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ch21Val> ch21{}; 
        ///Include CH22 in channel group.
        enum class ch22Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch22ValC{
            constexpr MPL::Value<ch22Val,ch22Val::excluded> excluded{};
            constexpr MPL::Value<ch22Val,ch22Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ch22Val> ch22{}; 
        ///Include CH23 in channel group.
        enum class ch23Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch23ValC{
            constexpr MPL::Value<ch23Val,ch23Val::excluded> excluded{};
            constexpr MPL::Value<ch23Val,ch23Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ch23Val> ch23{}; 
        ///Include CH24 in channel group.
        enum class ch24Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch24ValC{
            constexpr MPL::Value<ch24Val,ch24Val::excluded> excluded{};
            constexpr MPL::Value<ch24Val,ch24Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ch24Val> ch24{}; 
        ///Include CH25 in channel group.
        enum class ch25Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch25ValC{
            constexpr MPL::Value<ch25Val,ch25Val::excluded> excluded{};
            constexpr MPL::Value<ch25Val,ch25Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,ch25Val> ch25{}; 
        ///Include CH26 in channel group.
        enum class ch26Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch26ValC{
            constexpr MPL::Value<ch26Val,ch26Val::excluded> excluded{};
            constexpr MPL::Value<ch26Val,ch26Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ch26Val> ch26{}; 
        ///Include CH27 in channel group.
        enum class ch27Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch27ValC{
            constexpr MPL::Value<ch27Val,ch27Val::excluded> excluded{};
            constexpr MPL::Value<ch27Val,ch27Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ch27Val> ch27{}; 
        ///Include CH28 in channel group.
        enum class ch28Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch28ValC{
            constexpr MPL::Value<ch28Val,ch28Val::excluded> excluded{};
            constexpr MPL::Value<ch28Val,ch28Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,ch28Val> ch28{}; 
        ///Include CH29 in channel group.
        enum class ch29Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch29ValC{
            constexpr MPL::Value<ch29Val,ch29Val::excluded> excluded{};
            constexpr MPL::Value<ch29Val,ch29Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,ch29Val> ch29{}; 
        ///Include CH30 in channel group.
        enum class ch30Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch30ValC{
            constexpr MPL::Value<ch30Val,ch30Val::excluded> excluded{};
            constexpr MPL::Value<ch30Val,ch30Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ch30Val> ch30{}; 
        ///Include CH31 in channel group.
        enum class ch31Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch31ValC{
            constexpr MPL::Value<ch31Val,ch31Val::excluded> excluded{};
            constexpr MPL::Value<ch31Val,ch31Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ch31Val> ch31{}; 
    }
    namespace Nonechg2{    ///<Channel group configuration.
        using Addr = Register::Address<0x4001f808,0x000f0000,0,unsigned>;
        ///Include CH0 in channel group.
        enum class ch0Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch0ValC{
            constexpr MPL::Value<ch0Val,ch0Val::excluded> excluded{};
            constexpr MPL::Value<ch0Val,ch0Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0Val> ch0{}; 
        ///Include CH1 in channel group.
        enum class ch1Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch1ValC{
            constexpr MPL::Value<ch1Val,ch1Val::excluded> excluded{};
            constexpr MPL::Value<ch1Val,ch1Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1Val> ch1{}; 
        ///Include CH2 in channel group.
        enum class ch2Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch2ValC{
            constexpr MPL::Value<ch2Val,ch2Val::excluded> excluded{};
            constexpr MPL::Value<ch2Val,ch2Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2Val> ch2{}; 
        ///Include CH3 in channel group.
        enum class ch3Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch3ValC{
            constexpr MPL::Value<ch3Val,ch3Val::excluded> excluded{};
            constexpr MPL::Value<ch3Val,ch3Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3Val> ch3{}; 
        ///Include CH4 in channel group.
        enum class ch4Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch4ValC{
            constexpr MPL::Value<ch4Val,ch4Val::excluded> excluded{};
            constexpr MPL::Value<ch4Val,ch4Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4Val> ch4{}; 
        ///Include CH5 in channel group.
        enum class ch5Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch5ValC{
            constexpr MPL::Value<ch5Val,ch5Val::excluded> excluded{};
            constexpr MPL::Value<ch5Val,ch5Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5Val> ch5{}; 
        ///Include CH6 in channel group.
        enum class ch6Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch6ValC{
            constexpr MPL::Value<ch6Val,ch6Val::excluded> excluded{};
            constexpr MPL::Value<ch6Val,ch6Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6Val> ch6{}; 
        ///Include CH7 in channel group.
        enum class ch7Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch7ValC{
            constexpr MPL::Value<ch7Val,ch7Val::excluded> excluded{};
            constexpr MPL::Value<ch7Val,ch7Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7Val> ch7{}; 
        ///Include CH8 in channel group.
        enum class ch8Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch8ValC{
            constexpr MPL::Value<ch8Val,ch8Val::excluded> excluded{};
            constexpr MPL::Value<ch8Val,ch8Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch8Val> ch8{}; 
        ///Include CH9 in channel group.
        enum class ch9Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch9ValC{
            constexpr MPL::Value<ch9Val,ch9Val::excluded> excluded{};
            constexpr MPL::Value<ch9Val,ch9Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch9Val> ch9{}; 
        ///Include CH10 in channel group.
        enum class ch10Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch10ValC{
            constexpr MPL::Value<ch10Val,ch10Val::excluded> excluded{};
            constexpr MPL::Value<ch10Val,ch10Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ch10Val> ch10{}; 
        ///Include CH11 in channel group.
        enum class ch11Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch11ValC{
            constexpr MPL::Value<ch11Val,ch11Val::excluded> excluded{};
            constexpr MPL::Value<ch11Val,ch11Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ch11Val> ch11{}; 
        ///Include CH12 in channel group.
        enum class ch12Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch12ValC{
            constexpr MPL::Value<ch12Val,ch12Val::excluded> excluded{};
            constexpr MPL::Value<ch12Val,ch12Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ch12Val> ch12{}; 
        ///Include CH13 in channel group.
        enum class ch13Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch13ValC{
            constexpr MPL::Value<ch13Val,ch13Val::excluded> excluded{};
            constexpr MPL::Value<ch13Val,ch13Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ch13Val> ch13{}; 
        ///Include CH14 in channel group.
        enum class ch14Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch14ValC{
            constexpr MPL::Value<ch14Val,ch14Val::excluded> excluded{};
            constexpr MPL::Value<ch14Val,ch14Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ch14Val> ch14{}; 
        ///Include CH15 in channel group.
        enum class ch15Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch15ValC{
            constexpr MPL::Value<ch15Val,ch15Val::excluded> excluded{};
            constexpr MPL::Value<ch15Val,ch15Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ch15Val> ch15{}; 
        ///Include CH20 in channel group.
        enum class ch20Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch20ValC{
            constexpr MPL::Value<ch20Val,ch20Val::excluded> excluded{};
            constexpr MPL::Value<ch20Val,ch20Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ch20Val> ch20{}; 
        ///Include CH21 in channel group.
        enum class ch21Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch21ValC{
            constexpr MPL::Value<ch21Val,ch21Val::excluded> excluded{};
            constexpr MPL::Value<ch21Val,ch21Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ch21Val> ch21{}; 
        ///Include CH22 in channel group.
        enum class ch22Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch22ValC{
            constexpr MPL::Value<ch22Val,ch22Val::excluded> excluded{};
            constexpr MPL::Value<ch22Val,ch22Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ch22Val> ch22{}; 
        ///Include CH23 in channel group.
        enum class ch23Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch23ValC{
            constexpr MPL::Value<ch23Val,ch23Val::excluded> excluded{};
            constexpr MPL::Value<ch23Val,ch23Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ch23Val> ch23{}; 
        ///Include CH24 in channel group.
        enum class ch24Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch24ValC{
            constexpr MPL::Value<ch24Val,ch24Val::excluded> excluded{};
            constexpr MPL::Value<ch24Val,ch24Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ch24Val> ch24{}; 
        ///Include CH25 in channel group.
        enum class ch25Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch25ValC{
            constexpr MPL::Value<ch25Val,ch25Val::excluded> excluded{};
            constexpr MPL::Value<ch25Val,ch25Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,ch25Val> ch25{}; 
        ///Include CH26 in channel group.
        enum class ch26Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch26ValC{
            constexpr MPL::Value<ch26Val,ch26Val::excluded> excluded{};
            constexpr MPL::Value<ch26Val,ch26Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ch26Val> ch26{}; 
        ///Include CH27 in channel group.
        enum class ch27Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch27ValC{
            constexpr MPL::Value<ch27Val,ch27Val::excluded> excluded{};
            constexpr MPL::Value<ch27Val,ch27Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ch27Val> ch27{}; 
        ///Include CH28 in channel group.
        enum class ch28Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch28ValC{
            constexpr MPL::Value<ch28Val,ch28Val::excluded> excluded{};
            constexpr MPL::Value<ch28Val,ch28Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,ch28Val> ch28{}; 
        ///Include CH29 in channel group.
        enum class ch29Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch29ValC{
            constexpr MPL::Value<ch29Val,ch29Val::excluded> excluded{};
            constexpr MPL::Value<ch29Val,ch29Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,ch29Val> ch29{}; 
        ///Include CH30 in channel group.
        enum class ch30Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch30ValC{
            constexpr MPL::Value<ch30Val,ch30Val::excluded> excluded{};
            constexpr MPL::Value<ch30Val,ch30Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ch30Val> ch30{}; 
        ///Include CH31 in channel group.
        enum class ch31Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch31ValC{
            constexpr MPL::Value<ch31Val,ch31Val::excluded> excluded{};
            constexpr MPL::Value<ch31Val,ch31Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ch31Val> ch31{}; 
    }
    namespace Nonechg3{    ///<Channel group configuration.
        using Addr = Register::Address<0x4001f80c,0x000f0000,0,unsigned>;
        ///Include CH0 in channel group.
        enum class ch0Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch0ValC{
            constexpr MPL::Value<ch0Val,ch0Val::excluded> excluded{};
            constexpr MPL::Value<ch0Val,ch0Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0Val> ch0{}; 
        ///Include CH1 in channel group.
        enum class ch1Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch1ValC{
            constexpr MPL::Value<ch1Val,ch1Val::excluded> excluded{};
            constexpr MPL::Value<ch1Val,ch1Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1Val> ch1{}; 
        ///Include CH2 in channel group.
        enum class ch2Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch2ValC{
            constexpr MPL::Value<ch2Val,ch2Val::excluded> excluded{};
            constexpr MPL::Value<ch2Val,ch2Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2Val> ch2{}; 
        ///Include CH3 in channel group.
        enum class ch3Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch3ValC{
            constexpr MPL::Value<ch3Val,ch3Val::excluded> excluded{};
            constexpr MPL::Value<ch3Val,ch3Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3Val> ch3{}; 
        ///Include CH4 in channel group.
        enum class ch4Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch4ValC{
            constexpr MPL::Value<ch4Val,ch4Val::excluded> excluded{};
            constexpr MPL::Value<ch4Val,ch4Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4Val> ch4{}; 
        ///Include CH5 in channel group.
        enum class ch5Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch5ValC{
            constexpr MPL::Value<ch5Val,ch5Val::excluded> excluded{};
            constexpr MPL::Value<ch5Val,ch5Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5Val> ch5{}; 
        ///Include CH6 in channel group.
        enum class ch6Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch6ValC{
            constexpr MPL::Value<ch6Val,ch6Val::excluded> excluded{};
            constexpr MPL::Value<ch6Val,ch6Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6Val> ch6{}; 
        ///Include CH7 in channel group.
        enum class ch7Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch7ValC{
            constexpr MPL::Value<ch7Val,ch7Val::excluded> excluded{};
            constexpr MPL::Value<ch7Val,ch7Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7Val> ch7{}; 
        ///Include CH8 in channel group.
        enum class ch8Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch8ValC{
            constexpr MPL::Value<ch8Val,ch8Val::excluded> excluded{};
            constexpr MPL::Value<ch8Val,ch8Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch8Val> ch8{}; 
        ///Include CH9 in channel group.
        enum class ch9Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch9ValC{
            constexpr MPL::Value<ch9Val,ch9Val::excluded> excluded{};
            constexpr MPL::Value<ch9Val,ch9Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch9Val> ch9{}; 
        ///Include CH10 in channel group.
        enum class ch10Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch10ValC{
            constexpr MPL::Value<ch10Val,ch10Val::excluded> excluded{};
            constexpr MPL::Value<ch10Val,ch10Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ch10Val> ch10{}; 
        ///Include CH11 in channel group.
        enum class ch11Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch11ValC{
            constexpr MPL::Value<ch11Val,ch11Val::excluded> excluded{};
            constexpr MPL::Value<ch11Val,ch11Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ch11Val> ch11{}; 
        ///Include CH12 in channel group.
        enum class ch12Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch12ValC{
            constexpr MPL::Value<ch12Val,ch12Val::excluded> excluded{};
            constexpr MPL::Value<ch12Val,ch12Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ch12Val> ch12{}; 
        ///Include CH13 in channel group.
        enum class ch13Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch13ValC{
            constexpr MPL::Value<ch13Val,ch13Val::excluded> excluded{};
            constexpr MPL::Value<ch13Val,ch13Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ch13Val> ch13{}; 
        ///Include CH14 in channel group.
        enum class ch14Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch14ValC{
            constexpr MPL::Value<ch14Val,ch14Val::excluded> excluded{};
            constexpr MPL::Value<ch14Val,ch14Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ch14Val> ch14{}; 
        ///Include CH15 in channel group.
        enum class ch15Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch15ValC{
            constexpr MPL::Value<ch15Val,ch15Val::excluded> excluded{};
            constexpr MPL::Value<ch15Val,ch15Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ch15Val> ch15{}; 
        ///Include CH20 in channel group.
        enum class ch20Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch20ValC{
            constexpr MPL::Value<ch20Val,ch20Val::excluded> excluded{};
            constexpr MPL::Value<ch20Val,ch20Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ch20Val> ch20{}; 
        ///Include CH21 in channel group.
        enum class ch21Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch21ValC{
            constexpr MPL::Value<ch21Val,ch21Val::excluded> excluded{};
            constexpr MPL::Value<ch21Val,ch21Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ch21Val> ch21{}; 
        ///Include CH22 in channel group.
        enum class ch22Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch22ValC{
            constexpr MPL::Value<ch22Val,ch22Val::excluded> excluded{};
            constexpr MPL::Value<ch22Val,ch22Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ch22Val> ch22{}; 
        ///Include CH23 in channel group.
        enum class ch23Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch23ValC{
            constexpr MPL::Value<ch23Val,ch23Val::excluded> excluded{};
            constexpr MPL::Value<ch23Val,ch23Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ch23Val> ch23{}; 
        ///Include CH24 in channel group.
        enum class ch24Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch24ValC{
            constexpr MPL::Value<ch24Val,ch24Val::excluded> excluded{};
            constexpr MPL::Value<ch24Val,ch24Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ch24Val> ch24{}; 
        ///Include CH25 in channel group.
        enum class ch25Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch25ValC{
            constexpr MPL::Value<ch25Val,ch25Val::excluded> excluded{};
            constexpr MPL::Value<ch25Val,ch25Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,ch25Val> ch25{}; 
        ///Include CH26 in channel group.
        enum class ch26Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch26ValC{
            constexpr MPL::Value<ch26Val,ch26Val::excluded> excluded{};
            constexpr MPL::Value<ch26Val,ch26Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ch26Val> ch26{}; 
        ///Include CH27 in channel group.
        enum class ch27Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch27ValC{
            constexpr MPL::Value<ch27Val,ch27Val::excluded> excluded{};
            constexpr MPL::Value<ch27Val,ch27Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ch27Val> ch27{}; 
        ///Include CH28 in channel group.
        enum class ch28Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch28ValC{
            constexpr MPL::Value<ch28Val,ch28Val::excluded> excluded{};
            constexpr MPL::Value<ch28Val,ch28Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,ch28Val> ch28{}; 
        ///Include CH29 in channel group.
        enum class ch29Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch29ValC{
            constexpr MPL::Value<ch29Val,ch29Val::excluded> excluded{};
            constexpr MPL::Value<ch29Val,ch29Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,ch29Val> ch29{}; 
        ///Include CH30 in channel group.
        enum class ch30Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch30ValC{
            constexpr MPL::Value<ch30Val,ch30Val::excluded> excluded{};
            constexpr MPL::Value<ch30Val,ch30Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ch30Val> ch30{}; 
        ///Include CH31 in channel group.
        enum class ch31Val {
            excluded=0x00000000,     ///<Channel excluded.
            included=0x00000001,     ///<Channel included.
        };
        namespace ch31ValC{
            constexpr MPL::Value<ch31Val,ch31Val::excluded> excluded{};
            constexpr MPL::Value<ch31Val,ch31Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ch31Val> ch31{}; 
    }
}
