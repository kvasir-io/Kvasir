#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Programmable Peripheral Interconnect
    namespace Nonechen{    ///<Channel enable register
        using Addr = Register::Address<0x4001f500,0x00000000,0,unsigned>;
        ///Enable or disable channel 0
        enum class ch0Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch0ValC{
            constexpr MPL::Value<ch0Val,ch0Val::disabled> disabled{};
            constexpr MPL::Value<ch0Val,ch0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0Val> ch0{}; 
        ///Enable or disable channel 1
        enum class ch1Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch1ValC{
            constexpr MPL::Value<ch1Val,ch1Val::disabled> disabled{};
            constexpr MPL::Value<ch1Val,ch1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1Val> ch1{}; 
        ///Enable or disable channel 2
        enum class ch2Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch2ValC{
            constexpr MPL::Value<ch2Val,ch2Val::disabled> disabled{};
            constexpr MPL::Value<ch2Val,ch2Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2Val> ch2{}; 
        ///Enable or disable channel 3
        enum class ch3Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch3ValC{
            constexpr MPL::Value<ch3Val,ch3Val::disabled> disabled{};
            constexpr MPL::Value<ch3Val,ch3Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3Val> ch3{}; 
        ///Enable or disable channel 4
        enum class ch4Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch4ValC{
            constexpr MPL::Value<ch4Val,ch4Val::disabled> disabled{};
            constexpr MPL::Value<ch4Val,ch4Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4Val> ch4{}; 
        ///Enable or disable channel 5
        enum class ch5Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch5ValC{
            constexpr MPL::Value<ch5Val,ch5Val::disabled> disabled{};
            constexpr MPL::Value<ch5Val,ch5Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5Val> ch5{}; 
        ///Enable or disable channel 6
        enum class ch6Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch6ValC{
            constexpr MPL::Value<ch6Val,ch6Val::disabled> disabled{};
            constexpr MPL::Value<ch6Val,ch6Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6Val> ch6{}; 
        ///Enable or disable channel 7
        enum class ch7Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch7ValC{
            constexpr MPL::Value<ch7Val,ch7Val::disabled> disabled{};
            constexpr MPL::Value<ch7Val,ch7Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7Val> ch7{}; 
        ///Enable or disable channel 8
        enum class ch8Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch8ValC{
            constexpr MPL::Value<ch8Val,ch8Val::disabled> disabled{};
            constexpr MPL::Value<ch8Val,ch8Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch8Val> ch8{}; 
        ///Enable or disable channel 9
        enum class ch9Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch9ValC{
            constexpr MPL::Value<ch9Val,ch9Val::disabled> disabled{};
            constexpr MPL::Value<ch9Val,ch9Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch9Val> ch9{}; 
        ///Enable or disable channel 10
        enum class ch10Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch10ValC{
            constexpr MPL::Value<ch10Val,ch10Val::disabled> disabled{};
            constexpr MPL::Value<ch10Val,ch10Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ch10Val> ch10{}; 
        ///Enable or disable channel 11
        enum class ch11Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch11ValC{
            constexpr MPL::Value<ch11Val,ch11Val::disabled> disabled{};
            constexpr MPL::Value<ch11Val,ch11Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ch11Val> ch11{}; 
        ///Enable or disable channel 12
        enum class ch12Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch12ValC{
            constexpr MPL::Value<ch12Val,ch12Val::disabled> disabled{};
            constexpr MPL::Value<ch12Val,ch12Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ch12Val> ch12{}; 
        ///Enable or disable channel 13
        enum class ch13Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch13ValC{
            constexpr MPL::Value<ch13Val,ch13Val::disabled> disabled{};
            constexpr MPL::Value<ch13Val,ch13Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ch13Val> ch13{}; 
        ///Enable or disable channel 14
        enum class ch14Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch14ValC{
            constexpr MPL::Value<ch14Val,ch14Val::disabled> disabled{};
            constexpr MPL::Value<ch14Val,ch14Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ch14Val> ch14{}; 
        ///Enable or disable channel 15
        enum class ch15Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch15ValC{
            constexpr MPL::Value<ch15Val,ch15Val::disabled> disabled{};
            constexpr MPL::Value<ch15Val,ch15Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ch15Val> ch15{}; 
        ///Enable or disable channel 16
        enum class ch16Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch16ValC{
            constexpr MPL::Value<ch16Val,ch16Val::disabled> disabled{};
            constexpr MPL::Value<ch16Val,ch16Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ch16Val> ch16{}; 
        ///Enable or disable channel 17
        enum class ch17Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch17ValC{
            constexpr MPL::Value<ch17Val,ch17Val::disabled> disabled{};
            constexpr MPL::Value<ch17Val,ch17Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,ch17Val> ch17{}; 
        ///Enable or disable channel 18
        enum class ch18Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch18ValC{
            constexpr MPL::Value<ch18Val,ch18Val::disabled> disabled{};
            constexpr MPL::Value<ch18Val,ch18Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ch18Val> ch18{}; 
        ///Enable or disable channel 19
        enum class ch19Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch19ValC{
            constexpr MPL::Value<ch19Val,ch19Val::disabled> disabled{};
            constexpr MPL::Value<ch19Val,ch19Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ch19Val> ch19{}; 
        ///Enable or disable channel 20
        enum class ch20Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch20ValC{
            constexpr MPL::Value<ch20Val,ch20Val::disabled> disabled{};
            constexpr MPL::Value<ch20Val,ch20Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ch20Val> ch20{}; 
        ///Enable or disable channel 21
        enum class ch21Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch21ValC{
            constexpr MPL::Value<ch21Val,ch21Val::disabled> disabled{};
            constexpr MPL::Value<ch21Val,ch21Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ch21Val> ch21{}; 
        ///Enable or disable channel 22
        enum class ch22Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch22ValC{
            constexpr MPL::Value<ch22Val,ch22Val::disabled> disabled{};
            constexpr MPL::Value<ch22Val,ch22Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ch22Val> ch22{}; 
        ///Enable or disable channel 23
        enum class ch23Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch23ValC{
            constexpr MPL::Value<ch23Val,ch23Val::disabled> disabled{};
            constexpr MPL::Value<ch23Val,ch23Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ch23Val> ch23{}; 
        ///Enable or disable channel 24
        enum class ch24Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch24ValC{
            constexpr MPL::Value<ch24Val,ch24Val::disabled> disabled{};
            constexpr MPL::Value<ch24Val,ch24Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ch24Val> ch24{}; 
        ///Enable or disable channel 25
        enum class ch25Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch25ValC{
            constexpr MPL::Value<ch25Val,ch25Val::disabled> disabled{};
            constexpr MPL::Value<ch25Val,ch25Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,ch25Val> ch25{}; 
        ///Enable or disable channel 26
        enum class ch26Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch26ValC{
            constexpr MPL::Value<ch26Val,ch26Val::disabled> disabled{};
            constexpr MPL::Value<ch26Val,ch26Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ch26Val> ch26{}; 
        ///Enable or disable channel 27
        enum class ch27Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch27ValC{
            constexpr MPL::Value<ch27Val,ch27Val::disabled> disabled{};
            constexpr MPL::Value<ch27Val,ch27Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ch27Val> ch27{}; 
        ///Enable or disable channel 28
        enum class ch28Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch28ValC{
            constexpr MPL::Value<ch28Val,ch28Val::disabled> disabled{};
            constexpr MPL::Value<ch28Val,ch28Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,ch28Val> ch28{}; 
        ///Enable or disable channel 29
        enum class ch29Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch29ValC{
            constexpr MPL::Value<ch29Val,ch29Val::disabled> disabled{};
            constexpr MPL::Value<ch29Val,ch29Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,ch29Val> ch29{}; 
        ///Enable or disable channel 30
        enum class ch30Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch30ValC{
            constexpr MPL::Value<ch30Val,ch30Val::disabled> disabled{};
            constexpr MPL::Value<ch30Val,ch30Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ch30Val> ch30{}; 
        ///Enable or disable channel 31
        enum class ch31Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        namespace ch31ValC{
            constexpr MPL::Value<ch31Val,ch31Val::disabled> disabled{};
            constexpr MPL::Value<ch31Val,ch31Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ch31Val> ch31{}; 
    }
    namespace Nonechenset{    ///<Channel enable set register
        using Addr = Register::Address<0x4001f504,0x00000000,0,unsigned>;
        ///Channel 0 enable set register.  Writing '0' has no effect
        enum class ch0Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch0ValC{
            constexpr MPL::Value<ch0Val,ch0Val::disabled> disabled{};
            constexpr MPL::Value<ch0Val,ch0Val::enabled> enabled{};
            constexpr MPL::Value<ch0Val,ch0Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0Val> ch0{}; 
        ///Channel 1 enable set register.  Writing '0' has no effect
        enum class ch1Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch1ValC{
            constexpr MPL::Value<ch1Val,ch1Val::disabled> disabled{};
            constexpr MPL::Value<ch1Val,ch1Val::enabled> enabled{};
            constexpr MPL::Value<ch1Val,ch1Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1Val> ch1{}; 
        ///Channel 2 enable set register.  Writing '0' has no effect
        enum class ch2Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch2ValC{
            constexpr MPL::Value<ch2Val,ch2Val::disabled> disabled{};
            constexpr MPL::Value<ch2Val,ch2Val::enabled> enabled{};
            constexpr MPL::Value<ch2Val,ch2Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2Val> ch2{}; 
        ///Channel 3 enable set register.  Writing '0' has no effect
        enum class ch3Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch3ValC{
            constexpr MPL::Value<ch3Val,ch3Val::disabled> disabled{};
            constexpr MPL::Value<ch3Val,ch3Val::enabled> enabled{};
            constexpr MPL::Value<ch3Val,ch3Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3Val> ch3{}; 
        ///Channel 4 enable set register.  Writing '0' has no effect
        enum class ch4Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch4ValC{
            constexpr MPL::Value<ch4Val,ch4Val::disabled> disabled{};
            constexpr MPL::Value<ch4Val,ch4Val::enabled> enabled{};
            constexpr MPL::Value<ch4Val,ch4Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4Val> ch4{}; 
        ///Channel 5 enable set register.  Writing '0' has no effect
        enum class ch5Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch5ValC{
            constexpr MPL::Value<ch5Val,ch5Val::disabled> disabled{};
            constexpr MPL::Value<ch5Val,ch5Val::enabled> enabled{};
            constexpr MPL::Value<ch5Val,ch5Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5Val> ch5{}; 
        ///Channel 6 enable set register.  Writing '0' has no effect
        enum class ch6Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch6ValC{
            constexpr MPL::Value<ch6Val,ch6Val::disabled> disabled{};
            constexpr MPL::Value<ch6Val,ch6Val::enabled> enabled{};
            constexpr MPL::Value<ch6Val,ch6Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6Val> ch6{}; 
        ///Channel 7 enable set register.  Writing '0' has no effect
        enum class ch7Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch7ValC{
            constexpr MPL::Value<ch7Val,ch7Val::disabled> disabled{};
            constexpr MPL::Value<ch7Val,ch7Val::enabled> enabled{};
            constexpr MPL::Value<ch7Val,ch7Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7Val> ch7{}; 
        ///Channel 8 enable set register.  Writing '0' has no effect
        enum class ch8Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch8ValC{
            constexpr MPL::Value<ch8Val,ch8Val::disabled> disabled{};
            constexpr MPL::Value<ch8Val,ch8Val::enabled> enabled{};
            constexpr MPL::Value<ch8Val,ch8Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch8Val> ch8{}; 
        ///Channel 9 enable set register.  Writing '0' has no effect
        enum class ch9Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch9ValC{
            constexpr MPL::Value<ch9Val,ch9Val::disabled> disabled{};
            constexpr MPL::Value<ch9Val,ch9Val::enabled> enabled{};
            constexpr MPL::Value<ch9Val,ch9Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch9Val> ch9{}; 
        ///Channel 10 enable set register.  Writing '0' has no effect
        enum class ch10Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch10ValC{
            constexpr MPL::Value<ch10Val,ch10Val::disabled> disabled{};
            constexpr MPL::Value<ch10Val,ch10Val::enabled> enabled{};
            constexpr MPL::Value<ch10Val,ch10Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ch10Val> ch10{}; 
        ///Channel 11 enable set register.  Writing '0' has no effect
        enum class ch11Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch11ValC{
            constexpr MPL::Value<ch11Val,ch11Val::disabled> disabled{};
            constexpr MPL::Value<ch11Val,ch11Val::enabled> enabled{};
            constexpr MPL::Value<ch11Val,ch11Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ch11Val> ch11{}; 
        ///Channel 12 enable set register.  Writing '0' has no effect
        enum class ch12Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch12ValC{
            constexpr MPL::Value<ch12Val,ch12Val::disabled> disabled{};
            constexpr MPL::Value<ch12Val,ch12Val::enabled> enabled{};
            constexpr MPL::Value<ch12Val,ch12Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ch12Val> ch12{}; 
        ///Channel 13 enable set register.  Writing '0' has no effect
        enum class ch13Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch13ValC{
            constexpr MPL::Value<ch13Val,ch13Val::disabled> disabled{};
            constexpr MPL::Value<ch13Val,ch13Val::enabled> enabled{};
            constexpr MPL::Value<ch13Val,ch13Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ch13Val> ch13{}; 
        ///Channel 14 enable set register.  Writing '0' has no effect
        enum class ch14Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch14ValC{
            constexpr MPL::Value<ch14Val,ch14Val::disabled> disabled{};
            constexpr MPL::Value<ch14Val,ch14Val::enabled> enabled{};
            constexpr MPL::Value<ch14Val,ch14Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ch14Val> ch14{}; 
        ///Channel 15 enable set register.  Writing '0' has no effect
        enum class ch15Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch15ValC{
            constexpr MPL::Value<ch15Val,ch15Val::disabled> disabled{};
            constexpr MPL::Value<ch15Val,ch15Val::enabled> enabled{};
            constexpr MPL::Value<ch15Val,ch15Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ch15Val> ch15{}; 
        ///Channel 16 enable set register.  Writing '0' has no effect
        enum class ch16Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch16ValC{
            constexpr MPL::Value<ch16Val,ch16Val::disabled> disabled{};
            constexpr MPL::Value<ch16Val,ch16Val::enabled> enabled{};
            constexpr MPL::Value<ch16Val,ch16Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ch16Val> ch16{}; 
        ///Channel 17 enable set register.  Writing '0' has no effect
        enum class ch17Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch17ValC{
            constexpr MPL::Value<ch17Val,ch17Val::disabled> disabled{};
            constexpr MPL::Value<ch17Val,ch17Val::enabled> enabled{};
            constexpr MPL::Value<ch17Val,ch17Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,ch17Val> ch17{}; 
        ///Channel 18 enable set register.  Writing '0' has no effect
        enum class ch18Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch18ValC{
            constexpr MPL::Value<ch18Val,ch18Val::disabled> disabled{};
            constexpr MPL::Value<ch18Val,ch18Val::enabled> enabled{};
            constexpr MPL::Value<ch18Val,ch18Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ch18Val> ch18{}; 
        ///Channel 19 enable set register.  Writing '0' has no effect
        enum class ch19Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch19ValC{
            constexpr MPL::Value<ch19Val,ch19Val::disabled> disabled{};
            constexpr MPL::Value<ch19Val,ch19Val::enabled> enabled{};
            constexpr MPL::Value<ch19Val,ch19Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ch19Val> ch19{}; 
        ///Channel 20 enable set register.  Writing '0' has no effect
        enum class ch20Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch20ValC{
            constexpr MPL::Value<ch20Val,ch20Val::disabled> disabled{};
            constexpr MPL::Value<ch20Val,ch20Val::enabled> enabled{};
            constexpr MPL::Value<ch20Val,ch20Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ch20Val> ch20{}; 
        ///Channel 21 enable set register.  Writing '0' has no effect
        enum class ch21Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch21ValC{
            constexpr MPL::Value<ch21Val,ch21Val::disabled> disabled{};
            constexpr MPL::Value<ch21Val,ch21Val::enabled> enabled{};
            constexpr MPL::Value<ch21Val,ch21Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ch21Val> ch21{}; 
        ///Channel 22 enable set register.  Writing '0' has no effect
        enum class ch22Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch22ValC{
            constexpr MPL::Value<ch22Val,ch22Val::disabled> disabled{};
            constexpr MPL::Value<ch22Val,ch22Val::enabled> enabled{};
            constexpr MPL::Value<ch22Val,ch22Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ch22Val> ch22{}; 
        ///Channel 23 enable set register.  Writing '0' has no effect
        enum class ch23Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch23ValC{
            constexpr MPL::Value<ch23Val,ch23Val::disabled> disabled{};
            constexpr MPL::Value<ch23Val,ch23Val::enabled> enabled{};
            constexpr MPL::Value<ch23Val,ch23Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ch23Val> ch23{}; 
        ///Channel 24 enable set register.  Writing '0' has no effect
        enum class ch24Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch24ValC{
            constexpr MPL::Value<ch24Val,ch24Val::disabled> disabled{};
            constexpr MPL::Value<ch24Val,ch24Val::enabled> enabled{};
            constexpr MPL::Value<ch24Val,ch24Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ch24Val> ch24{}; 
        ///Channel 25 enable set register.  Writing '0' has no effect
        enum class ch25Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch25ValC{
            constexpr MPL::Value<ch25Val,ch25Val::disabled> disabled{};
            constexpr MPL::Value<ch25Val,ch25Val::enabled> enabled{};
            constexpr MPL::Value<ch25Val,ch25Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,ch25Val> ch25{}; 
        ///Channel 26 enable set register.  Writing '0' has no effect
        enum class ch26Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch26ValC{
            constexpr MPL::Value<ch26Val,ch26Val::disabled> disabled{};
            constexpr MPL::Value<ch26Val,ch26Val::enabled> enabled{};
            constexpr MPL::Value<ch26Val,ch26Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ch26Val> ch26{}; 
        ///Channel 27 enable set register.  Writing '0' has no effect
        enum class ch27Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch27ValC{
            constexpr MPL::Value<ch27Val,ch27Val::disabled> disabled{};
            constexpr MPL::Value<ch27Val,ch27Val::enabled> enabled{};
            constexpr MPL::Value<ch27Val,ch27Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ch27Val> ch27{}; 
        ///Channel 28 enable set register.  Writing '0' has no effect
        enum class ch28Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch28ValC{
            constexpr MPL::Value<ch28Val,ch28Val::disabled> disabled{};
            constexpr MPL::Value<ch28Val,ch28Val::enabled> enabled{};
            constexpr MPL::Value<ch28Val,ch28Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,ch28Val> ch28{}; 
        ///Channel 29 enable set register.  Writing '0' has no effect
        enum class ch29Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch29ValC{
            constexpr MPL::Value<ch29Val,ch29Val::disabled> disabled{};
            constexpr MPL::Value<ch29Val,ch29Val::enabled> enabled{};
            constexpr MPL::Value<ch29Val,ch29Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,ch29Val> ch29{}; 
        ///Channel 30 enable set register.  Writing '0' has no effect
        enum class ch30Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch30ValC{
            constexpr MPL::Value<ch30Val,ch30Val::disabled> disabled{};
            constexpr MPL::Value<ch30Val,ch30Val::enabled> enabled{};
            constexpr MPL::Value<ch30Val,ch30Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ch30Val> ch30{}; 
        ///Channel 31 enable set register.  Writing '0' has no effect
        enum class ch31Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        namespace ch31ValC{
            constexpr MPL::Value<ch31Val,ch31Val::disabled> disabled{};
            constexpr MPL::Value<ch31Val,ch31Val::enabled> enabled{};
            constexpr MPL::Value<ch31Val,ch31Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ch31Val> ch31{}; 
    }
    namespace Nonechenclr{    ///<Channel enable clear register
        using Addr = Register::Address<0x4001f508,0x00000000,0,unsigned>;
        ///Channel 0 enable clear register.  Writing '0' has no effect
        enum class ch0Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch0ValC{
            constexpr MPL::Value<ch0Val,ch0Val::disabled> disabled{};
            constexpr MPL::Value<ch0Val,ch0Val::enabled> enabled{};
            constexpr MPL::Value<ch0Val,ch0Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0Val> ch0{}; 
        ///Channel 1 enable clear register.  Writing '0' has no effect
        enum class ch1Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch1ValC{
            constexpr MPL::Value<ch1Val,ch1Val::disabled> disabled{};
            constexpr MPL::Value<ch1Val,ch1Val::enabled> enabled{};
            constexpr MPL::Value<ch1Val,ch1Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1Val> ch1{}; 
        ///Channel 2 enable clear register.  Writing '0' has no effect
        enum class ch2Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch2ValC{
            constexpr MPL::Value<ch2Val,ch2Val::disabled> disabled{};
            constexpr MPL::Value<ch2Val,ch2Val::enabled> enabled{};
            constexpr MPL::Value<ch2Val,ch2Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2Val> ch2{}; 
        ///Channel 3 enable clear register.  Writing '0' has no effect
        enum class ch3Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch3ValC{
            constexpr MPL::Value<ch3Val,ch3Val::disabled> disabled{};
            constexpr MPL::Value<ch3Val,ch3Val::enabled> enabled{};
            constexpr MPL::Value<ch3Val,ch3Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3Val> ch3{}; 
        ///Channel 4 enable clear register.  Writing '0' has no effect
        enum class ch4Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch4ValC{
            constexpr MPL::Value<ch4Val,ch4Val::disabled> disabled{};
            constexpr MPL::Value<ch4Val,ch4Val::enabled> enabled{};
            constexpr MPL::Value<ch4Val,ch4Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4Val> ch4{}; 
        ///Channel 5 enable clear register.  Writing '0' has no effect
        enum class ch5Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch5ValC{
            constexpr MPL::Value<ch5Val,ch5Val::disabled> disabled{};
            constexpr MPL::Value<ch5Val,ch5Val::enabled> enabled{};
            constexpr MPL::Value<ch5Val,ch5Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5Val> ch5{}; 
        ///Channel 6 enable clear register.  Writing '0' has no effect
        enum class ch6Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch6ValC{
            constexpr MPL::Value<ch6Val,ch6Val::disabled> disabled{};
            constexpr MPL::Value<ch6Val,ch6Val::enabled> enabled{};
            constexpr MPL::Value<ch6Val,ch6Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6Val> ch6{}; 
        ///Channel 7 enable clear register.  Writing '0' has no effect
        enum class ch7Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch7ValC{
            constexpr MPL::Value<ch7Val,ch7Val::disabled> disabled{};
            constexpr MPL::Value<ch7Val,ch7Val::enabled> enabled{};
            constexpr MPL::Value<ch7Val,ch7Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7Val> ch7{}; 
        ///Channel 8 enable clear register.  Writing '0' has no effect
        enum class ch8Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch8ValC{
            constexpr MPL::Value<ch8Val,ch8Val::disabled> disabled{};
            constexpr MPL::Value<ch8Val,ch8Val::enabled> enabled{};
            constexpr MPL::Value<ch8Val,ch8Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch8Val> ch8{}; 
        ///Channel 9 enable clear register.  Writing '0' has no effect
        enum class ch9Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch9ValC{
            constexpr MPL::Value<ch9Val,ch9Val::disabled> disabled{};
            constexpr MPL::Value<ch9Val,ch9Val::enabled> enabled{};
            constexpr MPL::Value<ch9Val,ch9Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch9Val> ch9{}; 
        ///Channel 10 enable clear register.  Writing '0' has no effect
        enum class ch10Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch10ValC{
            constexpr MPL::Value<ch10Val,ch10Val::disabled> disabled{};
            constexpr MPL::Value<ch10Val,ch10Val::enabled> enabled{};
            constexpr MPL::Value<ch10Val,ch10Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ch10Val> ch10{}; 
        ///Channel 11 enable clear register.  Writing '0' has no effect
        enum class ch11Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch11ValC{
            constexpr MPL::Value<ch11Val,ch11Val::disabled> disabled{};
            constexpr MPL::Value<ch11Val,ch11Val::enabled> enabled{};
            constexpr MPL::Value<ch11Val,ch11Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ch11Val> ch11{}; 
        ///Channel 12 enable clear register.  Writing '0' has no effect
        enum class ch12Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch12ValC{
            constexpr MPL::Value<ch12Val,ch12Val::disabled> disabled{};
            constexpr MPL::Value<ch12Val,ch12Val::enabled> enabled{};
            constexpr MPL::Value<ch12Val,ch12Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ch12Val> ch12{}; 
        ///Channel 13 enable clear register.  Writing '0' has no effect
        enum class ch13Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch13ValC{
            constexpr MPL::Value<ch13Val,ch13Val::disabled> disabled{};
            constexpr MPL::Value<ch13Val,ch13Val::enabled> enabled{};
            constexpr MPL::Value<ch13Val,ch13Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ch13Val> ch13{}; 
        ///Channel 14 enable clear register.  Writing '0' has no effect
        enum class ch14Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch14ValC{
            constexpr MPL::Value<ch14Val,ch14Val::disabled> disabled{};
            constexpr MPL::Value<ch14Val,ch14Val::enabled> enabled{};
            constexpr MPL::Value<ch14Val,ch14Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ch14Val> ch14{}; 
        ///Channel 15 enable clear register.  Writing '0' has no effect
        enum class ch15Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch15ValC{
            constexpr MPL::Value<ch15Val,ch15Val::disabled> disabled{};
            constexpr MPL::Value<ch15Val,ch15Val::enabled> enabled{};
            constexpr MPL::Value<ch15Val,ch15Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ch15Val> ch15{}; 
        ///Channel 16 enable clear register.  Writing '0' has no effect
        enum class ch16Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch16ValC{
            constexpr MPL::Value<ch16Val,ch16Val::disabled> disabled{};
            constexpr MPL::Value<ch16Val,ch16Val::enabled> enabled{};
            constexpr MPL::Value<ch16Val,ch16Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ch16Val> ch16{}; 
        ///Channel 17 enable clear register.  Writing '0' has no effect
        enum class ch17Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch17ValC{
            constexpr MPL::Value<ch17Val,ch17Val::disabled> disabled{};
            constexpr MPL::Value<ch17Val,ch17Val::enabled> enabled{};
            constexpr MPL::Value<ch17Val,ch17Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,ch17Val> ch17{}; 
        ///Channel 18 enable clear register.  Writing '0' has no effect
        enum class ch18Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch18ValC{
            constexpr MPL::Value<ch18Val,ch18Val::disabled> disabled{};
            constexpr MPL::Value<ch18Val,ch18Val::enabled> enabled{};
            constexpr MPL::Value<ch18Val,ch18Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ch18Val> ch18{}; 
        ///Channel 19 enable clear register.  Writing '0' has no effect
        enum class ch19Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch19ValC{
            constexpr MPL::Value<ch19Val,ch19Val::disabled> disabled{};
            constexpr MPL::Value<ch19Val,ch19Val::enabled> enabled{};
            constexpr MPL::Value<ch19Val,ch19Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ch19Val> ch19{}; 
        ///Channel 20 enable clear register.  Writing '0' has no effect
        enum class ch20Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch20ValC{
            constexpr MPL::Value<ch20Val,ch20Val::disabled> disabled{};
            constexpr MPL::Value<ch20Val,ch20Val::enabled> enabled{};
            constexpr MPL::Value<ch20Val,ch20Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ch20Val> ch20{}; 
        ///Channel 21 enable clear register.  Writing '0' has no effect
        enum class ch21Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch21ValC{
            constexpr MPL::Value<ch21Val,ch21Val::disabled> disabled{};
            constexpr MPL::Value<ch21Val,ch21Val::enabled> enabled{};
            constexpr MPL::Value<ch21Val,ch21Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ch21Val> ch21{}; 
        ///Channel 22 enable clear register.  Writing '0' has no effect
        enum class ch22Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch22ValC{
            constexpr MPL::Value<ch22Val,ch22Val::disabled> disabled{};
            constexpr MPL::Value<ch22Val,ch22Val::enabled> enabled{};
            constexpr MPL::Value<ch22Val,ch22Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ch22Val> ch22{}; 
        ///Channel 23 enable clear register.  Writing '0' has no effect
        enum class ch23Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch23ValC{
            constexpr MPL::Value<ch23Val,ch23Val::disabled> disabled{};
            constexpr MPL::Value<ch23Val,ch23Val::enabled> enabled{};
            constexpr MPL::Value<ch23Val,ch23Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ch23Val> ch23{}; 
        ///Channel 24 enable clear register.  Writing '0' has no effect
        enum class ch24Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch24ValC{
            constexpr MPL::Value<ch24Val,ch24Val::disabled> disabled{};
            constexpr MPL::Value<ch24Val,ch24Val::enabled> enabled{};
            constexpr MPL::Value<ch24Val,ch24Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ch24Val> ch24{}; 
        ///Channel 25 enable clear register.  Writing '0' has no effect
        enum class ch25Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch25ValC{
            constexpr MPL::Value<ch25Val,ch25Val::disabled> disabled{};
            constexpr MPL::Value<ch25Val,ch25Val::enabled> enabled{};
            constexpr MPL::Value<ch25Val,ch25Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,ch25Val> ch25{}; 
        ///Channel 26 enable clear register.  Writing '0' has no effect
        enum class ch26Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch26ValC{
            constexpr MPL::Value<ch26Val,ch26Val::disabled> disabled{};
            constexpr MPL::Value<ch26Val,ch26Val::enabled> enabled{};
            constexpr MPL::Value<ch26Val,ch26Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ch26Val> ch26{}; 
        ///Channel 27 enable clear register.  Writing '0' has no effect
        enum class ch27Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch27ValC{
            constexpr MPL::Value<ch27Val,ch27Val::disabled> disabled{};
            constexpr MPL::Value<ch27Val,ch27Val::enabled> enabled{};
            constexpr MPL::Value<ch27Val,ch27Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ch27Val> ch27{}; 
        ///Channel 28 enable clear register.  Writing '0' has no effect
        enum class ch28Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch28ValC{
            constexpr MPL::Value<ch28Val,ch28Val::disabled> disabled{};
            constexpr MPL::Value<ch28Val,ch28Val::enabled> enabled{};
            constexpr MPL::Value<ch28Val,ch28Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,ch28Val> ch28{}; 
        ///Channel 29 enable clear register.  Writing '0' has no effect
        enum class ch29Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch29ValC{
            constexpr MPL::Value<ch29Val,ch29Val::disabled> disabled{};
            constexpr MPL::Value<ch29Val,ch29Val::enabled> enabled{};
            constexpr MPL::Value<ch29Val,ch29Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,ch29Val> ch29{}; 
        ///Channel 30 enable clear register.  Writing '0' has no effect
        enum class ch30Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch30ValC{
            constexpr MPL::Value<ch30Val,ch30Val::disabled> disabled{};
            constexpr MPL::Value<ch30Val,ch30Val::enabled> enabled{};
            constexpr MPL::Value<ch30Val,ch30Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ch30Val> ch30{}; 
        ///Channel 31 enable clear register.  Writing '0' has no effect
        enum class ch31Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        namespace ch31ValC{
            constexpr MPL::Value<ch31Val,ch31Val::disabled> disabled{};
            constexpr MPL::Value<ch31Val,ch31Val::enabled> enabled{};
            constexpr MPL::Value<ch31Val,ch31Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ch31Val> ch31{}; 
    }
    namespace Nonechg0{    ///<Description collection[0]:  Channel group 0
        using Addr = Register::Address<0x4001f800,0x00000000,0,unsigned>;
        ///Include or exclude channel 0
        enum class ch0Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch0ValC{
            constexpr MPL::Value<ch0Val,ch0Val::excluded> excluded{};
            constexpr MPL::Value<ch0Val,ch0Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0Val> ch0{}; 
        ///Include or exclude channel 1
        enum class ch1Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch1ValC{
            constexpr MPL::Value<ch1Val,ch1Val::excluded> excluded{};
            constexpr MPL::Value<ch1Val,ch1Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1Val> ch1{}; 
        ///Include or exclude channel 2
        enum class ch2Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch2ValC{
            constexpr MPL::Value<ch2Val,ch2Val::excluded> excluded{};
            constexpr MPL::Value<ch2Val,ch2Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2Val> ch2{}; 
        ///Include or exclude channel 3
        enum class ch3Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch3ValC{
            constexpr MPL::Value<ch3Val,ch3Val::excluded> excluded{};
            constexpr MPL::Value<ch3Val,ch3Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3Val> ch3{}; 
        ///Include or exclude channel 4
        enum class ch4Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch4ValC{
            constexpr MPL::Value<ch4Val,ch4Val::excluded> excluded{};
            constexpr MPL::Value<ch4Val,ch4Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4Val> ch4{}; 
        ///Include or exclude channel 5
        enum class ch5Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch5ValC{
            constexpr MPL::Value<ch5Val,ch5Val::excluded> excluded{};
            constexpr MPL::Value<ch5Val,ch5Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5Val> ch5{}; 
        ///Include or exclude channel 6
        enum class ch6Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch6ValC{
            constexpr MPL::Value<ch6Val,ch6Val::excluded> excluded{};
            constexpr MPL::Value<ch6Val,ch6Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6Val> ch6{}; 
        ///Include or exclude channel 7
        enum class ch7Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch7ValC{
            constexpr MPL::Value<ch7Val,ch7Val::excluded> excluded{};
            constexpr MPL::Value<ch7Val,ch7Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7Val> ch7{}; 
        ///Include or exclude channel 8
        enum class ch8Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch8ValC{
            constexpr MPL::Value<ch8Val,ch8Val::excluded> excluded{};
            constexpr MPL::Value<ch8Val,ch8Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch8Val> ch8{}; 
        ///Include or exclude channel 9
        enum class ch9Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch9ValC{
            constexpr MPL::Value<ch9Val,ch9Val::excluded> excluded{};
            constexpr MPL::Value<ch9Val,ch9Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch9Val> ch9{}; 
        ///Include or exclude channel 10
        enum class ch10Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch10ValC{
            constexpr MPL::Value<ch10Val,ch10Val::excluded> excluded{};
            constexpr MPL::Value<ch10Val,ch10Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ch10Val> ch10{}; 
        ///Include or exclude channel 11
        enum class ch11Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch11ValC{
            constexpr MPL::Value<ch11Val,ch11Val::excluded> excluded{};
            constexpr MPL::Value<ch11Val,ch11Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ch11Val> ch11{}; 
        ///Include or exclude channel 12
        enum class ch12Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch12ValC{
            constexpr MPL::Value<ch12Val,ch12Val::excluded> excluded{};
            constexpr MPL::Value<ch12Val,ch12Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ch12Val> ch12{}; 
        ///Include or exclude channel 13
        enum class ch13Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch13ValC{
            constexpr MPL::Value<ch13Val,ch13Val::excluded> excluded{};
            constexpr MPL::Value<ch13Val,ch13Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ch13Val> ch13{}; 
        ///Include or exclude channel 14
        enum class ch14Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch14ValC{
            constexpr MPL::Value<ch14Val,ch14Val::excluded> excluded{};
            constexpr MPL::Value<ch14Val,ch14Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ch14Val> ch14{}; 
        ///Include or exclude channel 15
        enum class ch15Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch15ValC{
            constexpr MPL::Value<ch15Val,ch15Val::excluded> excluded{};
            constexpr MPL::Value<ch15Val,ch15Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ch15Val> ch15{}; 
        ///Include or exclude channel 16
        enum class ch16Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch16ValC{
            constexpr MPL::Value<ch16Val,ch16Val::excluded> excluded{};
            constexpr MPL::Value<ch16Val,ch16Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ch16Val> ch16{}; 
        ///Include or exclude channel 17
        enum class ch17Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch17ValC{
            constexpr MPL::Value<ch17Val,ch17Val::excluded> excluded{};
            constexpr MPL::Value<ch17Val,ch17Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,ch17Val> ch17{}; 
        ///Include or exclude channel 18
        enum class ch18Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch18ValC{
            constexpr MPL::Value<ch18Val,ch18Val::excluded> excluded{};
            constexpr MPL::Value<ch18Val,ch18Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ch18Val> ch18{}; 
        ///Include or exclude channel 19
        enum class ch19Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch19ValC{
            constexpr MPL::Value<ch19Val,ch19Val::excluded> excluded{};
            constexpr MPL::Value<ch19Val,ch19Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ch19Val> ch19{}; 
        ///Include or exclude channel 20
        enum class ch20Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch20ValC{
            constexpr MPL::Value<ch20Val,ch20Val::excluded> excluded{};
            constexpr MPL::Value<ch20Val,ch20Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ch20Val> ch20{}; 
        ///Include or exclude channel 21
        enum class ch21Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch21ValC{
            constexpr MPL::Value<ch21Val,ch21Val::excluded> excluded{};
            constexpr MPL::Value<ch21Val,ch21Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ch21Val> ch21{}; 
        ///Include or exclude channel 22
        enum class ch22Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch22ValC{
            constexpr MPL::Value<ch22Val,ch22Val::excluded> excluded{};
            constexpr MPL::Value<ch22Val,ch22Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ch22Val> ch22{}; 
        ///Include or exclude channel 23
        enum class ch23Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch23ValC{
            constexpr MPL::Value<ch23Val,ch23Val::excluded> excluded{};
            constexpr MPL::Value<ch23Val,ch23Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ch23Val> ch23{}; 
        ///Include or exclude channel 24
        enum class ch24Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch24ValC{
            constexpr MPL::Value<ch24Val,ch24Val::excluded> excluded{};
            constexpr MPL::Value<ch24Val,ch24Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ch24Val> ch24{}; 
        ///Include or exclude channel 25
        enum class ch25Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch25ValC{
            constexpr MPL::Value<ch25Val,ch25Val::excluded> excluded{};
            constexpr MPL::Value<ch25Val,ch25Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,ch25Val> ch25{}; 
        ///Include or exclude channel 26
        enum class ch26Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch26ValC{
            constexpr MPL::Value<ch26Val,ch26Val::excluded> excluded{};
            constexpr MPL::Value<ch26Val,ch26Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ch26Val> ch26{}; 
        ///Include or exclude channel 27
        enum class ch27Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch27ValC{
            constexpr MPL::Value<ch27Val,ch27Val::excluded> excluded{};
            constexpr MPL::Value<ch27Val,ch27Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ch27Val> ch27{}; 
        ///Include or exclude channel 28
        enum class ch28Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch28ValC{
            constexpr MPL::Value<ch28Val,ch28Val::excluded> excluded{};
            constexpr MPL::Value<ch28Val,ch28Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,ch28Val> ch28{}; 
        ///Include or exclude channel 29
        enum class ch29Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch29ValC{
            constexpr MPL::Value<ch29Val,ch29Val::excluded> excluded{};
            constexpr MPL::Value<ch29Val,ch29Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,ch29Val> ch29{}; 
        ///Include or exclude channel 30
        enum class ch30Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch30ValC{
            constexpr MPL::Value<ch30Val,ch30Val::excluded> excluded{};
            constexpr MPL::Value<ch30Val,ch30Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ch30Val> ch30{}; 
        ///Include or exclude channel 31
        enum class ch31Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch31ValC{
            constexpr MPL::Value<ch31Val,ch31Val::excluded> excluded{};
            constexpr MPL::Value<ch31Val,ch31Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ch31Val> ch31{}; 
    }
    namespace Nonechg1{    ///<Description collection[0]:  Channel group 0
        using Addr = Register::Address<0x4001f804,0x00000000,0,unsigned>;
        ///Include or exclude channel 0
        enum class ch0Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch0ValC{
            constexpr MPL::Value<ch0Val,ch0Val::excluded> excluded{};
            constexpr MPL::Value<ch0Val,ch0Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0Val> ch0{}; 
        ///Include or exclude channel 1
        enum class ch1Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch1ValC{
            constexpr MPL::Value<ch1Val,ch1Val::excluded> excluded{};
            constexpr MPL::Value<ch1Val,ch1Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1Val> ch1{}; 
        ///Include or exclude channel 2
        enum class ch2Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch2ValC{
            constexpr MPL::Value<ch2Val,ch2Val::excluded> excluded{};
            constexpr MPL::Value<ch2Val,ch2Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2Val> ch2{}; 
        ///Include or exclude channel 3
        enum class ch3Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch3ValC{
            constexpr MPL::Value<ch3Val,ch3Val::excluded> excluded{};
            constexpr MPL::Value<ch3Val,ch3Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3Val> ch3{}; 
        ///Include or exclude channel 4
        enum class ch4Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch4ValC{
            constexpr MPL::Value<ch4Val,ch4Val::excluded> excluded{};
            constexpr MPL::Value<ch4Val,ch4Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4Val> ch4{}; 
        ///Include or exclude channel 5
        enum class ch5Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch5ValC{
            constexpr MPL::Value<ch5Val,ch5Val::excluded> excluded{};
            constexpr MPL::Value<ch5Val,ch5Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5Val> ch5{}; 
        ///Include or exclude channel 6
        enum class ch6Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch6ValC{
            constexpr MPL::Value<ch6Val,ch6Val::excluded> excluded{};
            constexpr MPL::Value<ch6Val,ch6Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6Val> ch6{}; 
        ///Include or exclude channel 7
        enum class ch7Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch7ValC{
            constexpr MPL::Value<ch7Val,ch7Val::excluded> excluded{};
            constexpr MPL::Value<ch7Val,ch7Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7Val> ch7{}; 
        ///Include or exclude channel 8
        enum class ch8Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch8ValC{
            constexpr MPL::Value<ch8Val,ch8Val::excluded> excluded{};
            constexpr MPL::Value<ch8Val,ch8Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch8Val> ch8{}; 
        ///Include or exclude channel 9
        enum class ch9Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch9ValC{
            constexpr MPL::Value<ch9Val,ch9Val::excluded> excluded{};
            constexpr MPL::Value<ch9Val,ch9Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch9Val> ch9{}; 
        ///Include or exclude channel 10
        enum class ch10Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch10ValC{
            constexpr MPL::Value<ch10Val,ch10Val::excluded> excluded{};
            constexpr MPL::Value<ch10Val,ch10Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ch10Val> ch10{}; 
        ///Include or exclude channel 11
        enum class ch11Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch11ValC{
            constexpr MPL::Value<ch11Val,ch11Val::excluded> excluded{};
            constexpr MPL::Value<ch11Val,ch11Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ch11Val> ch11{}; 
        ///Include or exclude channel 12
        enum class ch12Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch12ValC{
            constexpr MPL::Value<ch12Val,ch12Val::excluded> excluded{};
            constexpr MPL::Value<ch12Val,ch12Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ch12Val> ch12{}; 
        ///Include or exclude channel 13
        enum class ch13Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch13ValC{
            constexpr MPL::Value<ch13Val,ch13Val::excluded> excluded{};
            constexpr MPL::Value<ch13Val,ch13Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ch13Val> ch13{}; 
        ///Include or exclude channel 14
        enum class ch14Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch14ValC{
            constexpr MPL::Value<ch14Val,ch14Val::excluded> excluded{};
            constexpr MPL::Value<ch14Val,ch14Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ch14Val> ch14{}; 
        ///Include or exclude channel 15
        enum class ch15Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch15ValC{
            constexpr MPL::Value<ch15Val,ch15Val::excluded> excluded{};
            constexpr MPL::Value<ch15Val,ch15Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ch15Val> ch15{}; 
        ///Include or exclude channel 16
        enum class ch16Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch16ValC{
            constexpr MPL::Value<ch16Val,ch16Val::excluded> excluded{};
            constexpr MPL::Value<ch16Val,ch16Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ch16Val> ch16{}; 
        ///Include or exclude channel 17
        enum class ch17Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch17ValC{
            constexpr MPL::Value<ch17Val,ch17Val::excluded> excluded{};
            constexpr MPL::Value<ch17Val,ch17Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,ch17Val> ch17{}; 
        ///Include or exclude channel 18
        enum class ch18Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch18ValC{
            constexpr MPL::Value<ch18Val,ch18Val::excluded> excluded{};
            constexpr MPL::Value<ch18Val,ch18Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ch18Val> ch18{}; 
        ///Include or exclude channel 19
        enum class ch19Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch19ValC{
            constexpr MPL::Value<ch19Val,ch19Val::excluded> excluded{};
            constexpr MPL::Value<ch19Val,ch19Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ch19Val> ch19{}; 
        ///Include or exclude channel 20
        enum class ch20Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch20ValC{
            constexpr MPL::Value<ch20Val,ch20Val::excluded> excluded{};
            constexpr MPL::Value<ch20Val,ch20Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ch20Val> ch20{}; 
        ///Include or exclude channel 21
        enum class ch21Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch21ValC{
            constexpr MPL::Value<ch21Val,ch21Val::excluded> excluded{};
            constexpr MPL::Value<ch21Val,ch21Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ch21Val> ch21{}; 
        ///Include or exclude channel 22
        enum class ch22Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch22ValC{
            constexpr MPL::Value<ch22Val,ch22Val::excluded> excluded{};
            constexpr MPL::Value<ch22Val,ch22Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ch22Val> ch22{}; 
        ///Include or exclude channel 23
        enum class ch23Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch23ValC{
            constexpr MPL::Value<ch23Val,ch23Val::excluded> excluded{};
            constexpr MPL::Value<ch23Val,ch23Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ch23Val> ch23{}; 
        ///Include or exclude channel 24
        enum class ch24Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch24ValC{
            constexpr MPL::Value<ch24Val,ch24Val::excluded> excluded{};
            constexpr MPL::Value<ch24Val,ch24Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ch24Val> ch24{}; 
        ///Include or exclude channel 25
        enum class ch25Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch25ValC{
            constexpr MPL::Value<ch25Val,ch25Val::excluded> excluded{};
            constexpr MPL::Value<ch25Val,ch25Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,ch25Val> ch25{}; 
        ///Include or exclude channel 26
        enum class ch26Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch26ValC{
            constexpr MPL::Value<ch26Val,ch26Val::excluded> excluded{};
            constexpr MPL::Value<ch26Val,ch26Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ch26Val> ch26{}; 
        ///Include or exclude channel 27
        enum class ch27Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch27ValC{
            constexpr MPL::Value<ch27Val,ch27Val::excluded> excluded{};
            constexpr MPL::Value<ch27Val,ch27Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ch27Val> ch27{}; 
        ///Include or exclude channel 28
        enum class ch28Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch28ValC{
            constexpr MPL::Value<ch28Val,ch28Val::excluded> excluded{};
            constexpr MPL::Value<ch28Val,ch28Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,ch28Val> ch28{}; 
        ///Include or exclude channel 29
        enum class ch29Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch29ValC{
            constexpr MPL::Value<ch29Val,ch29Val::excluded> excluded{};
            constexpr MPL::Value<ch29Val,ch29Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,ch29Val> ch29{}; 
        ///Include or exclude channel 30
        enum class ch30Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch30ValC{
            constexpr MPL::Value<ch30Val,ch30Val::excluded> excluded{};
            constexpr MPL::Value<ch30Val,ch30Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ch30Val> ch30{}; 
        ///Include or exclude channel 31
        enum class ch31Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch31ValC{
            constexpr MPL::Value<ch31Val,ch31Val::excluded> excluded{};
            constexpr MPL::Value<ch31Val,ch31Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ch31Val> ch31{}; 
    }
    namespace Nonechg2{    ///<Description collection[0]:  Channel group 0
        using Addr = Register::Address<0x4001f808,0x00000000,0,unsigned>;
        ///Include or exclude channel 0
        enum class ch0Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch0ValC{
            constexpr MPL::Value<ch0Val,ch0Val::excluded> excluded{};
            constexpr MPL::Value<ch0Val,ch0Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0Val> ch0{}; 
        ///Include or exclude channel 1
        enum class ch1Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch1ValC{
            constexpr MPL::Value<ch1Val,ch1Val::excluded> excluded{};
            constexpr MPL::Value<ch1Val,ch1Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1Val> ch1{}; 
        ///Include or exclude channel 2
        enum class ch2Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch2ValC{
            constexpr MPL::Value<ch2Val,ch2Val::excluded> excluded{};
            constexpr MPL::Value<ch2Val,ch2Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2Val> ch2{}; 
        ///Include or exclude channel 3
        enum class ch3Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch3ValC{
            constexpr MPL::Value<ch3Val,ch3Val::excluded> excluded{};
            constexpr MPL::Value<ch3Val,ch3Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3Val> ch3{}; 
        ///Include or exclude channel 4
        enum class ch4Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch4ValC{
            constexpr MPL::Value<ch4Val,ch4Val::excluded> excluded{};
            constexpr MPL::Value<ch4Val,ch4Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4Val> ch4{}; 
        ///Include or exclude channel 5
        enum class ch5Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch5ValC{
            constexpr MPL::Value<ch5Val,ch5Val::excluded> excluded{};
            constexpr MPL::Value<ch5Val,ch5Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5Val> ch5{}; 
        ///Include or exclude channel 6
        enum class ch6Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch6ValC{
            constexpr MPL::Value<ch6Val,ch6Val::excluded> excluded{};
            constexpr MPL::Value<ch6Val,ch6Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6Val> ch6{}; 
        ///Include or exclude channel 7
        enum class ch7Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch7ValC{
            constexpr MPL::Value<ch7Val,ch7Val::excluded> excluded{};
            constexpr MPL::Value<ch7Val,ch7Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7Val> ch7{}; 
        ///Include or exclude channel 8
        enum class ch8Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch8ValC{
            constexpr MPL::Value<ch8Val,ch8Val::excluded> excluded{};
            constexpr MPL::Value<ch8Val,ch8Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch8Val> ch8{}; 
        ///Include or exclude channel 9
        enum class ch9Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch9ValC{
            constexpr MPL::Value<ch9Val,ch9Val::excluded> excluded{};
            constexpr MPL::Value<ch9Val,ch9Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch9Val> ch9{}; 
        ///Include or exclude channel 10
        enum class ch10Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch10ValC{
            constexpr MPL::Value<ch10Val,ch10Val::excluded> excluded{};
            constexpr MPL::Value<ch10Val,ch10Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ch10Val> ch10{}; 
        ///Include or exclude channel 11
        enum class ch11Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch11ValC{
            constexpr MPL::Value<ch11Val,ch11Val::excluded> excluded{};
            constexpr MPL::Value<ch11Val,ch11Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ch11Val> ch11{}; 
        ///Include or exclude channel 12
        enum class ch12Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch12ValC{
            constexpr MPL::Value<ch12Val,ch12Val::excluded> excluded{};
            constexpr MPL::Value<ch12Val,ch12Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ch12Val> ch12{}; 
        ///Include or exclude channel 13
        enum class ch13Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch13ValC{
            constexpr MPL::Value<ch13Val,ch13Val::excluded> excluded{};
            constexpr MPL::Value<ch13Val,ch13Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ch13Val> ch13{}; 
        ///Include or exclude channel 14
        enum class ch14Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch14ValC{
            constexpr MPL::Value<ch14Val,ch14Val::excluded> excluded{};
            constexpr MPL::Value<ch14Val,ch14Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ch14Val> ch14{}; 
        ///Include or exclude channel 15
        enum class ch15Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch15ValC{
            constexpr MPL::Value<ch15Val,ch15Val::excluded> excluded{};
            constexpr MPL::Value<ch15Val,ch15Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ch15Val> ch15{}; 
        ///Include or exclude channel 16
        enum class ch16Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch16ValC{
            constexpr MPL::Value<ch16Val,ch16Val::excluded> excluded{};
            constexpr MPL::Value<ch16Val,ch16Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ch16Val> ch16{}; 
        ///Include or exclude channel 17
        enum class ch17Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch17ValC{
            constexpr MPL::Value<ch17Val,ch17Val::excluded> excluded{};
            constexpr MPL::Value<ch17Val,ch17Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,ch17Val> ch17{}; 
        ///Include or exclude channel 18
        enum class ch18Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch18ValC{
            constexpr MPL::Value<ch18Val,ch18Val::excluded> excluded{};
            constexpr MPL::Value<ch18Val,ch18Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ch18Val> ch18{}; 
        ///Include or exclude channel 19
        enum class ch19Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch19ValC{
            constexpr MPL::Value<ch19Val,ch19Val::excluded> excluded{};
            constexpr MPL::Value<ch19Val,ch19Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ch19Val> ch19{}; 
        ///Include or exclude channel 20
        enum class ch20Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch20ValC{
            constexpr MPL::Value<ch20Val,ch20Val::excluded> excluded{};
            constexpr MPL::Value<ch20Val,ch20Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ch20Val> ch20{}; 
        ///Include or exclude channel 21
        enum class ch21Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch21ValC{
            constexpr MPL::Value<ch21Val,ch21Val::excluded> excluded{};
            constexpr MPL::Value<ch21Val,ch21Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ch21Val> ch21{}; 
        ///Include or exclude channel 22
        enum class ch22Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch22ValC{
            constexpr MPL::Value<ch22Val,ch22Val::excluded> excluded{};
            constexpr MPL::Value<ch22Val,ch22Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ch22Val> ch22{}; 
        ///Include or exclude channel 23
        enum class ch23Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch23ValC{
            constexpr MPL::Value<ch23Val,ch23Val::excluded> excluded{};
            constexpr MPL::Value<ch23Val,ch23Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ch23Val> ch23{}; 
        ///Include or exclude channel 24
        enum class ch24Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch24ValC{
            constexpr MPL::Value<ch24Val,ch24Val::excluded> excluded{};
            constexpr MPL::Value<ch24Val,ch24Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ch24Val> ch24{}; 
        ///Include or exclude channel 25
        enum class ch25Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch25ValC{
            constexpr MPL::Value<ch25Val,ch25Val::excluded> excluded{};
            constexpr MPL::Value<ch25Val,ch25Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,ch25Val> ch25{}; 
        ///Include or exclude channel 26
        enum class ch26Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch26ValC{
            constexpr MPL::Value<ch26Val,ch26Val::excluded> excluded{};
            constexpr MPL::Value<ch26Val,ch26Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ch26Val> ch26{}; 
        ///Include or exclude channel 27
        enum class ch27Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch27ValC{
            constexpr MPL::Value<ch27Val,ch27Val::excluded> excluded{};
            constexpr MPL::Value<ch27Val,ch27Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ch27Val> ch27{}; 
        ///Include or exclude channel 28
        enum class ch28Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch28ValC{
            constexpr MPL::Value<ch28Val,ch28Val::excluded> excluded{};
            constexpr MPL::Value<ch28Val,ch28Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,ch28Val> ch28{}; 
        ///Include or exclude channel 29
        enum class ch29Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch29ValC{
            constexpr MPL::Value<ch29Val,ch29Val::excluded> excluded{};
            constexpr MPL::Value<ch29Val,ch29Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,ch29Val> ch29{}; 
        ///Include or exclude channel 30
        enum class ch30Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch30ValC{
            constexpr MPL::Value<ch30Val,ch30Val::excluded> excluded{};
            constexpr MPL::Value<ch30Val,ch30Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ch30Val> ch30{}; 
        ///Include or exclude channel 31
        enum class ch31Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch31ValC{
            constexpr MPL::Value<ch31Val,ch31Val::excluded> excluded{};
            constexpr MPL::Value<ch31Val,ch31Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ch31Val> ch31{}; 
    }
    namespace Nonechg3{    ///<Description collection[0]:  Channel group 0
        using Addr = Register::Address<0x4001f80c,0x00000000,0,unsigned>;
        ///Include or exclude channel 0
        enum class ch0Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch0ValC{
            constexpr MPL::Value<ch0Val,ch0Val::excluded> excluded{};
            constexpr MPL::Value<ch0Val,ch0Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0Val> ch0{}; 
        ///Include or exclude channel 1
        enum class ch1Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch1ValC{
            constexpr MPL::Value<ch1Val,ch1Val::excluded> excluded{};
            constexpr MPL::Value<ch1Val,ch1Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1Val> ch1{}; 
        ///Include or exclude channel 2
        enum class ch2Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch2ValC{
            constexpr MPL::Value<ch2Val,ch2Val::excluded> excluded{};
            constexpr MPL::Value<ch2Val,ch2Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2Val> ch2{}; 
        ///Include or exclude channel 3
        enum class ch3Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch3ValC{
            constexpr MPL::Value<ch3Val,ch3Val::excluded> excluded{};
            constexpr MPL::Value<ch3Val,ch3Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3Val> ch3{}; 
        ///Include or exclude channel 4
        enum class ch4Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch4ValC{
            constexpr MPL::Value<ch4Val,ch4Val::excluded> excluded{};
            constexpr MPL::Value<ch4Val,ch4Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4Val> ch4{}; 
        ///Include or exclude channel 5
        enum class ch5Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch5ValC{
            constexpr MPL::Value<ch5Val,ch5Val::excluded> excluded{};
            constexpr MPL::Value<ch5Val,ch5Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5Val> ch5{}; 
        ///Include or exclude channel 6
        enum class ch6Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch6ValC{
            constexpr MPL::Value<ch6Val,ch6Val::excluded> excluded{};
            constexpr MPL::Value<ch6Val,ch6Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6Val> ch6{}; 
        ///Include or exclude channel 7
        enum class ch7Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch7ValC{
            constexpr MPL::Value<ch7Val,ch7Val::excluded> excluded{};
            constexpr MPL::Value<ch7Val,ch7Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7Val> ch7{}; 
        ///Include or exclude channel 8
        enum class ch8Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch8ValC{
            constexpr MPL::Value<ch8Val,ch8Val::excluded> excluded{};
            constexpr MPL::Value<ch8Val,ch8Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch8Val> ch8{}; 
        ///Include or exclude channel 9
        enum class ch9Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch9ValC{
            constexpr MPL::Value<ch9Val,ch9Val::excluded> excluded{};
            constexpr MPL::Value<ch9Val,ch9Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch9Val> ch9{}; 
        ///Include or exclude channel 10
        enum class ch10Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch10ValC{
            constexpr MPL::Value<ch10Val,ch10Val::excluded> excluded{};
            constexpr MPL::Value<ch10Val,ch10Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ch10Val> ch10{}; 
        ///Include or exclude channel 11
        enum class ch11Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch11ValC{
            constexpr MPL::Value<ch11Val,ch11Val::excluded> excluded{};
            constexpr MPL::Value<ch11Val,ch11Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ch11Val> ch11{}; 
        ///Include or exclude channel 12
        enum class ch12Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch12ValC{
            constexpr MPL::Value<ch12Val,ch12Val::excluded> excluded{};
            constexpr MPL::Value<ch12Val,ch12Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ch12Val> ch12{}; 
        ///Include or exclude channel 13
        enum class ch13Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch13ValC{
            constexpr MPL::Value<ch13Val,ch13Val::excluded> excluded{};
            constexpr MPL::Value<ch13Val,ch13Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ch13Val> ch13{}; 
        ///Include or exclude channel 14
        enum class ch14Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch14ValC{
            constexpr MPL::Value<ch14Val,ch14Val::excluded> excluded{};
            constexpr MPL::Value<ch14Val,ch14Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ch14Val> ch14{}; 
        ///Include or exclude channel 15
        enum class ch15Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch15ValC{
            constexpr MPL::Value<ch15Val,ch15Val::excluded> excluded{};
            constexpr MPL::Value<ch15Val,ch15Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ch15Val> ch15{}; 
        ///Include or exclude channel 16
        enum class ch16Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch16ValC{
            constexpr MPL::Value<ch16Val,ch16Val::excluded> excluded{};
            constexpr MPL::Value<ch16Val,ch16Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ch16Val> ch16{}; 
        ///Include or exclude channel 17
        enum class ch17Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch17ValC{
            constexpr MPL::Value<ch17Val,ch17Val::excluded> excluded{};
            constexpr MPL::Value<ch17Val,ch17Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,ch17Val> ch17{}; 
        ///Include or exclude channel 18
        enum class ch18Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch18ValC{
            constexpr MPL::Value<ch18Val,ch18Val::excluded> excluded{};
            constexpr MPL::Value<ch18Val,ch18Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ch18Val> ch18{}; 
        ///Include or exclude channel 19
        enum class ch19Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch19ValC{
            constexpr MPL::Value<ch19Val,ch19Val::excluded> excluded{};
            constexpr MPL::Value<ch19Val,ch19Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ch19Val> ch19{}; 
        ///Include or exclude channel 20
        enum class ch20Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch20ValC{
            constexpr MPL::Value<ch20Val,ch20Val::excluded> excluded{};
            constexpr MPL::Value<ch20Val,ch20Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ch20Val> ch20{}; 
        ///Include or exclude channel 21
        enum class ch21Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch21ValC{
            constexpr MPL::Value<ch21Val,ch21Val::excluded> excluded{};
            constexpr MPL::Value<ch21Val,ch21Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ch21Val> ch21{}; 
        ///Include or exclude channel 22
        enum class ch22Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch22ValC{
            constexpr MPL::Value<ch22Val,ch22Val::excluded> excluded{};
            constexpr MPL::Value<ch22Val,ch22Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ch22Val> ch22{}; 
        ///Include or exclude channel 23
        enum class ch23Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch23ValC{
            constexpr MPL::Value<ch23Val,ch23Val::excluded> excluded{};
            constexpr MPL::Value<ch23Val,ch23Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ch23Val> ch23{}; 
        ///Include or exclude channel 24
        enum class ch24Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch24ValC{
            constexpr MPL::Value<ch24Val,ch24Val::excluded> excluded{};
            constexpr MPL::Value<ch24Val,ch24Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ch24Val> ch24{}; 
        ///Include or exclude channel 25
        enum class ch25Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch25ValC{
            constexpr MPL::Value<ch25Val,ch25Val::excluded> excluded{};
            constexpr MPL::Value<ch25Val,ch25Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,ch25Val> ch25{}; 
        ///Include or exclude channel 26
        enum class ch26Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch26ValC{
            constexpr MPL::Value<ch26Val,ch26Val::excluded> excluded{};
            constexpr MPL::Value<ch26Val,ch26Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ch26Val> ch26{}; 
        ///Include or exclude channel 27
        enum class ch27Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch27ValC{
            constexpr MPL::Value<ch27Val,ch27Val::excluded> excluded{};
            constexpr MPL::Value<ch27Val,ch27Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ch27Val> ch27{}; 
        ///Include or exclude channel 28
        enum class ch28Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch28ValC{
            constexpr MPL::Value<ch28Val,ch28Val::excluded> excluded{};
            constexpr MPL::Value<ch28Val,ch28Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,ch28Val> ch28{}; 
        ///Include or exclude channel 29
        enum class ch29Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch29ValC{
            constexpr MPL::Value<ch29Val,ch29Val::excluded> excluded{};
            constexpr MPL::Value<ch29Val,ch29Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,ch29Val> ch29{}; 
        ///Include or exclude channel 30
        enum class ch30Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch30ValC{
            constexpr MPL::Value<ch30Val,ch30Val::excluded> excluded{};
            constexpr MPL::Value<ch30Val,ch30Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ch30Val> ch30{}; 
        ///Include or exclude channel 31
        enum class ch31Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch31ValC{
            constexpr MPL::Value<ch31Val,ch31Val::excluded> excluded{};
            constexpr MPL::Value<ch31Val,ch31Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ch31Val> ch31{}; 
    }
    namespace Nonechg4{    ///<Description collection[0]:  Channel group 0
        using Addr = Register::Address<0x4001f810,0x00000000,0,unsigned>;
        ///Include or exclude channel 0
        enum class ch0Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch0ValC{
            constexpr MPL::Value<ch0Val,ch0Val::excluded> excluded{};
            constexpr MPL::Value<ch0Val,ch0Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0Val> ch0{}; 
        ///Include or exclude channel 1
        enum class ch1Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch1ValC{
            constexpr MPL::Value<ch1Val,ch1Val::excluded> excluded{};
            constexpr MPL::Value<ch1Val,ch1Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1Val> ch1{}; 
        ///Include or exclude channel 2
        enum class ch2Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch2ValC{
            constexpr MPL::Value<ch2Val,ch2Val::excluded> excluded{};
            constexpr MPL::Value<ch2Val,ch2Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2Val> ch2{}; 
        ///Include or exclude channel 3
        enum class ch3Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch3ValC{
            constexpr MPL::Value<ch3Val,ch3Val::excluded> excluded{};
            constexpr MPL::Value<ch3Val,ch3Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3Val> ch3{}; 
        ///Include or exclude channel 4
        enum class ch4Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch4ValC{
            constexpr MPL::Value<ch4Val,ch4Val::excluded> excluded{};
            constexpr MPL::Value<ch4Val,ch4Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4Val> ch4{}; 
        ///Include or exclude channel 5
        enum class ch5Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch5ValC{
            constexpr MPL::Value<ch5Val,ch5Val::excluded> excluded{};
            constexpr MPL::Value<ch5Val,ch5Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5Val> ch5{}; 
        ///Include or exclude channel 6
        enum class ch6Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch6ValC{
            constexpr MPL::Value<ch6Val,ch6Val::excluded> excluded{};
            constexpr MPL::Value<ch6Val,ch6Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6Val> ch6{}; 
        ///Include or exclude channel 7
        enum class ch7Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch7ValC{
            constexpr MPL::Value<ch7Val,ch7Val::excluded> excluded{};
            constexpr MPL::Value<ch7Val,ch7Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7Val> ch7{}; 
        ///Include or exclude channel 8
        enum class ch8Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch8ValC{
            constexpr MPL::Value<ch8Val,ch8Val::excluded> excluded{};
            constexpr MPL::Value<ch8Val,ch8Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch8Val> ch8{}; 
        ///Include or exclude channel 9
        enum class ch9Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch9ValC{
            constexpr MPL::Value<ch9Val,ch9Val::excluded> excluded{};
            constexpr MPL::Value<ch9Val,ch9Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch9Val> ch9{}; 
        ///Include or exclude channel 10
        enum class ch10Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch10ValC{
            constexpr MPL::Value<ch10Val,ch10Val::excluded> excluded{};
            constexpr MPL::Value<ch10Val,ch10Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ch10Val> ch10{}; 
        ///Include or exclude channel 11
        enum class ch11Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch11ValC{
            constexpr MPL::Value<ch11Val,ch11Val::excluded> excluded{};
            constexpr MPL::Value<ch11Val,ch11Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ch11Val> ch11{}; 
        ///Include or exclude channel 12
        enum class ch12Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch12ValC{
            constexpr MPL::Value<ch12Val,ch12Val::excluded> excluded{};
            constexpr MPL::Value<ch12Val,ch12Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ch12Val> ch12{}; 
        ///Include or exclude channel 13
        enum class ch13Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch13ValC{
            constexpr MPL::Value<ch13Val,ch13Val::excluded> excluded{};
            constexpr MPL::Value<ch13Val,ch13Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ch13Val> ch13{}; 
        ///Include or exclude channel 14
        enum class ch14Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch14ValC{
            constexpr MPL::Value<ch14Val,ch14Val::excluded> excluded{};
            constexpr MPL::Value<ch14Val,ch14Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ch14Val> ch14{}; 
        ///Include or exclude channel 15
        enum class ch15Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch15ValC{
            constexpr MPL::Value<ch15Val,ch15Val::excluded> excluded{};
            constexpr MPL::Value<ch15Val,ch15Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ch15Val> ch15{}; 
        ///Include or exclude channel 16
        enum class ch16Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch16ValC{
            constexpr MPL::Value<ch16Val,ch16Val::excluded> excluded{};
            constexpr MPL::Value<ch16Val,ch16Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ch16Val> ch16{}; 
        ///Include or exclude channel 17
        enum class ch17Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch17ValC{
            constexpr MPL::Value<ch17Val,ch17Val::excluded> excluded{};
            constexpr MPL::Value<ch17Val,ch17Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,ch17Val> ch17{}; 
        ///Include or exclude channel 18
        enum class ch18Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch18ValC{
            constexpr MPL::Value<ch18Val,ch18Val::excluded> excluded{};
            constexpr MPL::Value<ch18Val,ch18Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ch18Val> ch18{}; 
        ///Include or exclude channel 19
        enum class ch19Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch19ValC{
            constexpr MPL::Value<ch19Val,ch19Val::excluded> excluded{};
            constexpr MPL::Value<ch19Val,ch19Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ch19Val> ch19{}; 
        ///Include or exclude channel 20
        enum class ch20Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch20ValC{
            constexpr MPL::Value<ch20Val,ch20Val::excluded> excluded{};
            constexpr MPL::Value<ch20Val,ch20Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ch20Val> ch20{}; 
        ///Include or exclude channel 21
        enum class ch21Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch21ValC{
            constexpr MPL::Value<ch21Val,ch21Val::excluded> excluded{};
            constexpr MPL::Value<ch21Val,ch21Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ch21Val> ch21{}; 
        ///Include or exclude channel 22
        enum class ch22Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch22ValC{
            constexpr MPL::Value<ch22Val,ch22Val::excluded> excluded{};
            constexpr MPL::Value<ch22Val,ch22Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ch22Val> ch22{}; 
        ///Include or exclude channel 23
        enum class ch23Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch23ValC{
            constexpr MPL::Value<ch23Val,ch23Val::excluded> excluded{};
            constexpr MPL::Value<ch23Val,ch23Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ch23Val> ch23{}; 
        ///Include or exclude channel 24
        enum class ch24Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch24ValC{
            constexpr MPL::Value<ch24Val,ch24Val::excluded> excluded{};
            constexpr MPL::Value<ch24Val,ch24Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ch24Val> ch24{}; 
        ///Include or exclude channel 25
        enum class ch25Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch25ValC{
            constexpr MPL::Value<ch25Val,ch25Val::excluded> excluded{};
            constexpr MPL::Value<ch25Val,ch25Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,ch25Val> ch25{}; 
        ///Include or exclude channel 26
        enum class ch26Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch26ValC{
            constexpr MPL::Value<ch26Val,ch26Val::excluded> excluded{};
            constexpr MPL::Value<ch26Val,ch26Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ch26Val> ch26{}; 
        ///Include or exclude channel 27
        enum class ch27Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch27ValC{
            constexpr MPL::Value<ch27Val,ch27Val::excluded> excluded{};
            constexpr MPL::Value<ch27Val,ch27Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ch27Val> ch27{}; 
        ///Include or exclude channel 28
        enum class ch28Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch28ValC{
            constexpr MPL::Value<ch28Val,ch28Val::excluded> excluded{};
            constexpr MPL::Value<ch28Val,ch28Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,ch28Val> ch28{}; 
        ///Include or exclude channel 29
        enum class ch29Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch29ValC{
            constexpr MPL::Value<ch29Val,ch29Val::excluded> excluded{};
            constexpr MPL::Value<ch29Val,ch29Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,ch29Val> ch29{}; 
        ///Include or exclude channel 30
        enum class ch30Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch30ValC{
            constexpr MPL::Value<ch30Val,ch30Val::excluded> excluded{};
            constexpr MPL::Value<ch30Val,ch30Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ch30Val> ch30{}; 
        ///Include or exclude channel 31
        enum class ch31Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch31ValC{
            constexpr MPL::Value<ch31Val,ch31Val::excluded> excluded{};
            constexpr MPL::Value<ch31Val,ch31Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ch31Val> ch31{}; 
    }
    namespace Nonechg5{    ///<Description collection[0]:  Channel group 0
        using Addr = Register::Address<0x4001f814,0x00000000,0,unsigned>;
        ///Include or exclude channel 0
        enum class ch0Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch0ValC{
            constexpr MPL::Value<ch0Val,ch0Val::excluded> excluded{};
            constexpr MPL::Value<ch0Val,ch0Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0Val> ch0{}; 
        ///Include or exclude channel 1
        enum class ch1Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch1ValC{
            constexpr MPL::Value<ch1Val,ch1Val::excluded> excluded{};
            constexpr MPL::Value<ch1Val,ch1Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1Val> ch1{}; 
        ///Include or exclude channel 2
        enum class ch2Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch2ValC{
            constexpr MPL::Value<ch2Val,ch2Val::excluded> excluded{};
            constexpr MPL::Value<ch2Val,ch2Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2Val> ch2{}; 
        ///Include or exclude channel 3
        enum class ch3Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch3ValC{
            constexpr MPL::Value<ch3Val,ch3Val::excluded> excluded{};
            constexpr MPL::Value<ch3Val,ch3Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3Val> ch3{}; 
        ///Include or exclude channel 4
        enum class ch4Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch4ValC{
            constexpr MPL::Value<ch4Val,ch4Val::excluded> excluded{};
            constexpr MPL::Value<ch4Val,ch4Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4Val> ch4{}; 
        ///Include or exclude channel 5
        enum class ch5Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch5ValC{
            constexpr MPL::Value<ch5Val,ch5Val::excluded> excluded{};
            constexpr MPL::Value<ch5Val,ch5Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5Val> ch5{}; 
        ///Include or exclude channel 6
        enum class ch6Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch6ValC{
            constexpr MPL::Value<ch6Val,ch6Val::excluded> excluded{};
            constexpr MPL::Value<ch6Val,ch6Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6Val> ch6{}; 
        ///Include or exclude channel 7
        enum class ch7Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch7ValC{
            constexpr MPL::Value<ch7Val,ch7Val::excluded> excluded{};
            constexpr MPL::Value<ch7Val,ch7Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7Val> ch7{}; 
        ///Include or exclude channel 8
        enum class ch8Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch8ValC{
            constexpr MPL::Value<ch8Val,ch8Val::excluded> excluded{};
            constexpr MPL::Value<ch8Val,ch8Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch8Val> ch8{}; 
        ///Include or exclude channel 9
        enum class ch9Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch9ValC{
            constexpr MPL::Value<ch9Val,ch9Val::excluded> excluded{};
            constexpr MPL::Value<ch9Val,ch9Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch9Val> ch9{}; 
        ///Include or exclude channel 10
        enum class ch10Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch10ValC{
            constexpr MPL::Value<ch10Val,ch10Val::excluded> excluded{};
            constexpr MPL::Value<ch10Val,ch10Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ch10Val> ch10{}; 
        ///Include or exclude channel 11
        enum class ch11Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch11ValC{
            constexpr MPL::Value<ch11Val,ch11Val::excluded> excluded{};
            constexpr MPL::Value<ch11Val,ch11Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ch11Val> ch11{}; 
        ///Include or exclude channel 12
        enum class ch12Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch12ValC{
            constexpr MPL::Value<ch12Val,ch12Val::excluded> excluded{};
            constexpr MPL::Value<ch12Val,ch12Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ch12Val> ch12{}; 
        ///Include or exclude channel 13
        enum class ch13Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch13ValC{
            constexpr MPL::Value<ch13Val,ch13Val::excluded> excluded{};
            constexpr MPL::Value<ch13Val,ch13Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ch13Val> ch13{}; 
        ///Include or exclude channel 14
        enum class ch14Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch14ValC{
            constexpr MPL::Value<ch14Val,ch14Val::excluded> excluded{};
            constexpr MPL::Value<ch14Val,ch14Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ch14Val> ch14{}; 
        ///Include or exclude channel 15
        enum class ch15Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch15ValC{
            constexpr MPL::Value<ch15Val,ch15Val::excluded> excluded{};
            constexpr MPL::Value<ch15Val,ch15Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ch15Val> ch15{}; 
        ///Include or exclude channel 16
        enum class ch16Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch16ValC{
            constexpr MPL::Value<ch16Val,ch16Val::excluded> excluded{};
            constexpr MPL::Value<ch16Val,ch16Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ch16Val> ch16{}; 
        ///Include or exclude channel 17
        enum class ch17Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch17ValC{
            constexpr MPL::Value<ch17Val,ch17Val::excluded> excluded{};
            constexpr MPL::Value<ch17Val,ch17Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,ch17Val> ch17{}; 
        ///Include or exclude channel 18
        enum class ch18Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch18ValC{
            constexpr MPL::Value<ch18Val,ch18Val::excluded> excluded{};
            constexpr MPL::Value<ch18Val,ch18Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ch18Val> ch18{}; 
        ///Include or exclude channel 19
        enum class ch19Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch19ValC{
            constexpr MPL::Value<ch19Val,ch19Val::excluded> excluded{};
            constexpr MPL::Value<ch19Val,ch19Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ch19Val> ch19{}; 
        ///Include or exclude channel 20
        enum class ch20Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch20ValC{
            constexpr MPL::Value<ch20Val,ch20Val::excluded> excluded{};
            constexpr MPL::Value<ch20Val,ch20Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ch20Val> ch20{}; 
        ///Include or exclude channel 21
        enum class ch21Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch21ValC{
            constexpr MPL::Value<ch21Val,ch21Val::excluded> excluded{};
            constexpr MPL::Value<ch21Val,ch21Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ch21Val> ch21{}; 
        ///Include or exclude channel 22
        enum class ch22Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch22ValC{
            constexpr MPL::Value<ch22Val,ch22Val::excluded> excluded{};
            constexpr MPL::Value<ch22Val,ch22Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ch22Val> ch22{}; 
        ///Include or exclude channel 23
        enum class ch23Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch23ValC{
            constexpr MPL::Value<ch23Val,ch23Val::excluded> excluded{};
            constexpr MPL::Value<ch23Val,ch23Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ch23Val> ch23{}; 
        ///Include or exclude channel 24
        enum class ch24Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch24ValC{
            constexpr MPL::Value<ch24Val,ch24Val::excluded> excluded{};
            constexpr MPL::Value<ch24Val,ch24Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ch24Val> ch24{}; 
        ///Include or exclude channel 25
        enum class ch25Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch25ValC{
            constexpr MPL::Value<ch25Val,ch25Val::excluded> excluded{};
            constexpr MPL::Value<ch25Val,ch25Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,ch25Val> ch25{}; 
        ///Include or exclude channel 26
        enum class ch26Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch26ValC{
            constexpr MPL::Value<ch26Val,ch26Val::excluded> excluded{};
            constexpr MPL::Value<ch26Val,ch26Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ch26Val> ch26{}; 
        ///Include or exclude channel 27
        enum class ch27Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch27ValC{
            constexpr MPL::Value<ch27Val,ch27Val::excluded> excluded{};
            constexpr MPL::Value<ch27Val,ch27Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ch27Val> ch27{}; 
        ///Include or exclude channel 28
        enum class ch28Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch28ValC{
            constexpr MPL::Value<ch28Val,ch28Val::excluded> excluded{};
            constexpr MPL::Value<ch28Val,ch28Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,ch28Val> ch28{}; 
        ///Include or exclude channel 29
        enum class ch29Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch29ValC{
            constexpr MPL::Value<ch29Val,ch29Val::excluded> excluded{};
            constexpr MPL::Value<ch29Val,ch29Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,ch29Val> ch29{}; 
        ///Include or exclude channel 30
        enum class ch30Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch30ValC{
            constexpr MPL::Value<ch30Val,ch30Val::excluded> excluded{};
            constexpr MPL::Value<ch30Val,ch30Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ch30Val> ch30{}; 
        ///Include or exclude channel 31
        enum class ch31Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        namespace ch31ValC{
            constexpr MPL::Value<ch31Val,ch31Val::excluded> excluded{};
            constexpr MPL::Value<ch31Val,ch31Val::included> included{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ch31Val> ch31{}; 
    }
}
