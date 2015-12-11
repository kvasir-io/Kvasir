#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Programmable Peripheral Interconnect
    namespace Nonechen{    ///<Channel enable register
        using Addr = Register::Address<0x4001f500,0x00000000,0,unsigned>;
        ///Enable or disable channel 0
        enum class Ch0Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0Val> ch0{}; 
        namespace Ch0ValC{
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 1
        enum class Ch1Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1Val> ch1{}; 
        namespace Ch1ValC{
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 2
        enum class Ch2Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2Val> ch2{}; 
        namespace Ch2ValC{
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 3
        enum class Ch3Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3Val> ch3{}; 
        namespace Ch3ValC{
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 4
        enum class Ch4Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4Val> ch4{}; 
        namespace Ch4ValC{
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 5
        enum class Ch5Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5Val> ch5{}; 
        namespace Ch5ValC{
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 6
        enum class Ch6Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6Val> ch6{}; 
        namespace Ch6ValC{
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 7
        enum class Ch7Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7Val> ch7{}; 
        namespace Ch7ValC{
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 8
        enum class Ch8Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch8Val> ch8{}; 
        namespace Ch8ValC{
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 9
        enum class Ch9Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch9Val> ch9{}; 
        namespace Ch9ValC{
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 10
        enum class Ch10Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ch10Val> ch10{}; 
        namespace Ch10ValC{
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 11
        enum class Ch11Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ch11Val> ch11{}; 
        namespace Ch11ValC{
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 12
        enum class Ch12Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ch12Val> ch12{}; 
        namespace Ch12ValC{
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 13
        enum class Ch13Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ch13Val> ch13{}; 
        namespace Ch13ValC{
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 14
        enum class Ch14Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ch14Val> ch14{}; 
        namespace Ch14ValC{
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 15
        enum class Ch15Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ch15Val> ch15{}; 
        namespace Ch15ValC{
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 16
        enum class Ch16Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Ch16Val> ch16{}; 
        namespace Ch16ValC{
            constexpr Register::FieldValue<decltype(ch16)::Type,Ch16Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch16)::Type,Ch16Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 17
        enum class Ch17Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Ch17Val> ch17{}; 
        namespace Ch17ValC{
            constexpr Register::FieldValue<decltype(ch17)::Type,Ch17Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch17)::Type,Ch17Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 18
        enum class Ch18Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ch18Val> ch18{}; 
        namespace Ch18ValC{
            constexpr Register::FieldValue<decltype(ch18)::Type,Ch18Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch18)::Type,Ch18Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 19
        enum class Ch19Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ch19Val> ch19{}; 
        namespace Ch19ValC{
            constexpr Register::FieldValue<decltype(ch19)::Type,Ch19Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch19)::Type,Ch19Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 20
        enum class Ch20Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Ch20Val> ch20{}; 
        namespace Ch20ValC{
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 21
        enum class Ch21Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Ch21Val> ch21{}; 
        namespace Ch21ValC{
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 22
        enum class Ch22Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Ch22Val> ch22{}; 
        namespace Ch22ValC{
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 23
        enum class Ch23Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ch23Val> ch23{}; 
        namespace Ch23ValC{
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 24
        enum class Ch24Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ch24Val> ch24{}; 
        namespace Ch24ValC{
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 25
        enum class Ch25Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ch25Val> ch25{}; 
        namespace Ch25ValC{
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 26
        enum class Ch26Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ch26Val> ch26{}; 
        namespace Ch26ValC{
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 27
        enum class Ch27Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ch27Val> ch27{}; 
        namespace Ch27ValC{
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 28
        enum class Ch28Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Ch28Val> ch28{}; 
        namespace Ch28ValC{
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 29
        enum class Ch29Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Ch29Val> ch29{}; 
        namespace Ch29ValC{
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 30
        enum class Ch30Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Ch30Val> ch30{}; 
        namespace Ch30ValC{
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::enabled> enabled{};
        }
        }
        ///Enable or disable channel 31
        enum class Ch31Val {
            disabled=0x00000000,     ///<Disable channel
            enabled=0x00000001,     ///<Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ch31Val> ch31{}; 
        namespace Ch31ValC{
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::enabled> enabled{};
        }
        }
    }
    namespace Nonechenset{    ///<Channel enable set register
        using Addr = Register::Address<0x4001f504,0x00000000,0,unsigned>;
        ///Channel 0 enable set register.  Writing '0' has no effect
        enum class Ch0Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0Val> ch0{}; 
        namespace Ch0ValC{
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::set> set{};
        }
        }
        ///Channel 1 enable set register.  Writing '0' has no effect
        enum class Ch1Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1Val> ch1{}; 
        namespace Ch1ValC{
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::set> set{};
        }
        }
        ///Channel 2 enable set register.  Writing '0' has no effect
        enum class Ch2Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2Val> ch2{}; 
        namespace Ch2ValC{
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::set> set{};
        }
        }
        ///Channel 3 enable set register.  Writing '0' has no effect
        enum class Ch3Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3Val> ch3{}; 
        namespace Ch3ValC{
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::set> set{};
        }
        }
        ///Channel 4 enable set register.  Writing '0' has no effect
        enum class Ch4Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4Val> ch4{}; 
        namespace Ch4ValC{
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::set> set{};
        }
        }
        ///Channel 5 enable set register.  Writing '0' has no effect
        enum class Ch5Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5Val> ch5{}; 
        namespace Ch5ValC{
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::set> set{};
        }
        }
        ///Channel 6 enable set register.  Writing '0' has no effect
        enum class Ch6Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6Val> ch6{}; 
        namespace Ch6ValC{
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::set> set{};
        }
        }
        ///Channel 7 enable set register.  Writing '0' has no effect
        enum class Ch7Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7Val> ch7{}; 
        namespace Ch7ValC{
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::set> set{};
        }
        }
        ///Channel 8 enable set register.  Writing '0' has no effect
        enum class Ch8Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch8Val> ch8{}; 
        namespace Ch8ValC{
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::set> set{};
        }
        }
        ///Channel 9 enable set register.  Writing '0' has no effect
        enum class Ch9Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch9Val> ch9{}; 
        namespace Ch9ValC{
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::set> set{};
        }
        }
        ///Channel 10 enable set register.  Writing '0' has no effect
        enum class Ch10Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ch10Val> ch10{}; 
        namespace Ch10ValC{
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::set> set{};
        }
        }
        ///Channel 11 enable set register.  Writing '0' has no effect
        enum class Ch11Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ch11Val> ch11{}; 
        namespace Ch11ValC{
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::set> set{};
        }
        }
        ///Channel 12 enable set register.  Writing '0' has no effect
        enum class Ch12Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ch12Val> ch12{}; 
        namespace Ch12ValC{
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::set> set{};
        }
        }
        ///Channel 13 enable set register.  Writing '0' has no effect
        enum class Ch13Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ch13Val> ch13{}; 
        namespace Ch13ValC{
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::set> set{};
        }
        }
        ///Channel 14 enable set register.  Writing '0' has no effect
        enum class Ch14Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ch14Val> ch14{}; 
        namespace Ch14ValC{
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::set> set{};
        }
        }
        ///Channel 15 enable set register.  Writing '0' has no effect
        enum class Ch15Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ch15Val> ch15{}; 
        namespace Ch15ValC{
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::set> set{};
        }
        }
        ///Channel 16 enable set register.  Writing '0' has no effect
        enum class Ch16Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Ch16Val> ch16{}; 
        namespace Ch16ValC{
            constexpr Register::FieldValue<decltype(ch16)::Type,Ch16Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch16)::Type,Ch16Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch16)::Type,Ch16Val::set> set{};
        }
        }
        ///Channel 17 enable set register.  Writing '0' has no effect
        enum class Ch17Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Ch17Val> ch17{}; 
        namespace Ch17ValC{
            constexpr Register::FieldValue<decltype(ch17)::Type,Ch17Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch17)::Type,Ch17Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch17)::Type,Ch17Val::set> set{};
        }
        }
        ///Channel 18 enable set register.  Writing '0' has no effect
        enum class Ch18Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ch18Val> ch18{}; 
        namespace Ch18ValC{
            constexpr Register::FieldValue<decltype(ch18)::Type,Ch18Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch18)::Type,Ch18Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch18)::Type,Ch18Val::set> set{};
        }
        }
        ///Channel 19 enable set register.  Writing '0' has no effect
        enum class Ch19Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ch19Val> ch19{}; 
        namespace Ch19ValC{
            constexpr Register::FieldValue<decltype(ch19)::Type,Ch19Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch19)::Type,Ch19Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch19)::Type,Ch19Val::set> set{};
        }
        }
        ///Channel 20 enable set register.  Writing '0' has no effect
        enum class Ch20Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Ch20Val> ch20{}; 
        namespace Ch20ValC{
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::set> set{};
        }
        }
        ///Channel 21 enable set register.  Writing '0' has no effect
        enum class Ch21Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Ch21Val> ch21{}; 
        namespace Ch21ValC{
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::set> set{};
        }
        }
        ///Channel 22 enable set register.  Writing '0' has no effect
        enum class Ch22Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Ch22Val> ch22{}; 
        namespace Ch22ValC{
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::set> set{};
        }
        }
        ///Channel 23 enable set register.  Writing '0' has no effect
        enum class Ch23Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ch23Val> ch23{}; 
        namespace Ch23ValC{
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::set> set{};
        }
        }
        ///Channel 24 enable set register.  Writing '0' has no effect
        enum class Ch24Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ch24Val> ch24{}; 
        namespace Ch24ValC{
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::set> set{};
        }
        }
        ///Channel 25 enable set register.  Writing '0' has no effect
        enum class Ch25Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ch25Val> ch25{}; 
        namespace Ch25ValC{
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::set> set{};
        }
        }
        ///Channel 26 enable set register.  Writing '0' has no effect
        enum class Ch26Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ch26Val> ch26{}; 
        namespace Ch26ValC{
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::set> set{};
        }
        }
        ///Channel 27 enable set register.  Writing '0' has no effect
        enum class Ch27Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ch27Val> ch27{}; 
        namespace Ch27ValC{
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::set> set{};
        }
        }
        ///Channel 28 enable set register.  Writing '0' has no effect
        enum class Ch28Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Ch28Val> ch28{}; 
        namespace Ch28ValC{
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::set> set{};
        }
        }
        ///Channel 29 enable set register.  Writing '0' has no effect
        enum class Ch29Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Ch29Val> ch29{}; 
        namespace Ch29ValC{
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::set> set{};
        }
        }
        ///Channel 30 enable set register.  Writing '0' has no effect
        enum class Ch30Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Ch30Val> ch30{}; 
        namespace Ch30ValC{
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::set> set{};
        }
        }
        ///Channel 31 enable set register.  Writing '0' has no effect
        enum class Ch31Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            set=0x00000001,     ///<Write: Enable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ch31Val> ch31{}; 
        namespace Ch31ValC{
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::set> set{};
        }
        }
    }
    namespace Nonechenclr{    ///<Channel enable clear register
        using Addr = Register::Address<0x4001f508,0x00000000,0,unsigned>;
        ///Channel 0 enable clear register.  Writing '0' has no effect
        enum class Ch0Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0Val> ch0{}; 
        namespace Ch0ValC{
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::clear> clear{};
        }
        }
        ///Channel 1 enable clear register.  Writing '0' has no effect
        enum class Ch1Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1Val> ch1{}; 
        namespace Ch1ValC{
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::clear> clear{};
        }
        }
        ///Channel 2 enable clear register.  Writing '0' has no effect
        enum class Ch2Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2Val> ch2{}; 
        namespace Ch2ValC{
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::clear> clear{};
        }
        }
        ///Channel 3 enable clear register.  Writing '0' has no effect
        enum class Ch3Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3Val> ch3{}; 
        namespace Ch3ValC{
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::clear> clear{};
        }
        }
        ///Channel 4 enable clear register.  Writing '0' has no effect
        enum class Ch4Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4Val> ch4{}; 
        namespace Ch4ValC{
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::clear> clear{};
        }
        }
        ///Channel 5 enable clear register.  Writing '0' has no effect
        enum class Ch5Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5Val> ch5{}; 
        namespace Ch5ValC{
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::clear> clear{};
        }
        }
        ///Channel 6 enable clear register.  Writing '0' has no effect
        enum class Ch6Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6Val> ch6{}; 
        namespace Ch6ValC{
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::clear> clear{};
        }
        }
        ///Channel 7 enable clear register.  Writing '0' has no effect
        enum class Ch7Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7Val> ch7{}; 
        namespace Ch7ValC{
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::clear> clear{};
        }
        }
        ///Channel 8 enable clear register.  Writing '0' has no effect
        enum class Ch8Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch8Val> ch8{}; 
        namespace Ch8ValC{
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::clear> clear{};
        }
        }
        ///Channel 9 enable clear register.  Writing '0' has no effect
        enum class Ch9Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch9Val> ch9{}; 
        namespace Ch9ValC{
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::clear> clear{};
        }
        }
        ///Channel 10 enable clear register.  Writing '0' has no effect
        enum class Ch10Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ch10Val> ch10{}; 
        namespace Ch10ValC{
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::clear> clear{};
        }
        }
        ///Channel 11 enable clear register.  Writing '0' has no effect
        enum class Ch11Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ch11Val> ch11{}; 
        namespace Ch11ValC{
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::clear> clear{};
        }
        }
        ///Channel 12 enable clear register.  Writing '0' has no effect
        enum class Ch12Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ch12Val> ch12{}; 
        namespace Ch12ValC{
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::clear> clear{};
        }
        }
        ///Channel 13 enable clear register.  Writing '0' has no effect
        enum class Ch13Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ch13Val> ch13{}; 
        namespace Ch13ValC{
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::clear> clear{};
        }
        }
        ///Channel 14 enable clear register.  Writing '0' has no effect
        enum class Ch14Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ch14Val> ch14{}; 
        namespace Ch14ValC{
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::clear> clear{};
        }
        }
        ///Channel 15 enable clear register.  Writing '0' has no effect
        enum class Ch15Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ch15Val> ch15{}; 
        namespace Ch15ValC{
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::clear> clear{};
        }
        }
        ///Channel 16 enable clear register.  Writing '0' has no effect
        enum class Ch16Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Ch16Val> ch16{}; 
        namespace Ch16ValC{
            constexpr Register::FieldValue<decltype(ch16)::Type,Ch16Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch16)::Type,Ch16Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch16)::Type,Ch16Val::clear> clear{};
        }
        }
        ///Channel 17 enable clear register.  Writing '0' has no effect
        enum class Ch17Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Ch17Val> ch17{}; 
        namespace Ch17ValC{
            constexpr Register::FieldValue<decltype(ch17)::Type,Ch17Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch17)::Type,Ch17Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch17)::Type,Ch17Val::clear> clear{};
        }
        }
        ///Channel 18 enable clear register.  Writing '0' has no effect
        enum class Ch18Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ch18Val> ch18{}; 
        namespace Ch18ValC{
            constexpr Register::FieldValue<decltype(ch18)::Type,Ch18Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch18)::Type,Ch18Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch18)::Type,Ch18Val::clear> clear{};
        }
        }
        ///Channel 19 enable clear register.  Writing '0' has no effect
        enum class Ch19Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ch19Val> ch19{}; 
        namespace Ch19ValC{
            constexpr Register::FieldValue<decltype(ch19)::Type,Ch19Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch19)::Type,Ch19Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch19)::Type,Ch19Val::clear> clear{};
        }
        }
        ///Channel 20 enable clear register.  Writing '0' has no effect
        enum class Ch20Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Ch20Val> ch20{}; 
        namespace Ch20ValC{
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::clear> clear{};
        }
        }
        ///Channel 21 enable clear register.  Writing '0' has no effect
        enum class Ch21Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Ch21Val> ch21{}; 
        namespace Ch21ValC{
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::clear> clear{};
        }
        }
        ///Channel 22 enable clear register.  Writing '0' has no effect
        enum class Ch22Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Ch22Val> ch22{}; 
        namespace Ch22ValC{
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::clear> clear{};
        }
        }
        ///Channel 23 enable clear register.  Writing '0' has no effect
        enum class Ch23Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ch23Val> ch23{}; 
        namespace Ch23ValC{
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::clear> clear{};
        }
        }
        ///Channel 24 enable clear register.  Writing '0' has no effect
        enum class Ch24Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ch24Val> ch24{}; 
        namespace Ch24ValC{
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::clear> clear{};
        }
        }
        ///Channel 25 enable clear register.  Writing '0' has no effect
        enum class Ch25Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ch25Val> ch25{}; 
        namespace Ch25ValC{
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::clear> clear{};
        }
        }
        ///Channel 26 enable clear register.  Writing '0' has no effect
        enum class Ch26Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ch26Val> ch26{}; 
        namespace Ch26ValC{
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::clear> clear{};
        }
        }
        ///Channel 27 enable clear register.  Writing '0' has no effect
        enum class Ch27Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ch27Val> ch27{}; 
        namespace Ch27ValC{
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::clear> clear{};
        }
        }
        ///Channel 28 enable clear register.  Writing '0' has no effect
        enum class Ch28Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Ch28Val> ch28{}; 
        namespace Ch28ValC{
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::clear> clear{};
        }
        }
        ///Channel 29 enable clear register.  Writing '0' has no effect
        enum class Ch29Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Ch29Val> ch29{}; 
        namespace Ch29ValC{
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::clear> clear{};
        }
        }
        ///Channel 30 enable clear register.  Writing '0' has no effect
        enum class Ch30Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Ch30Val> ch30{}; 
        namespace Ch30ValC{
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::clear> clear{};
        }
        }
        ///Channel 31 enable clear register.  Writing '0' has no effect
        enum class Ch31Val {
            disabled=0x00000000,     ///<Read: channel disabled
            enabled=0x00000001,     ///<Read: channel enabled
            clear=0x00000001,     ///<Write: disable channel
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ch31Val> ch31{}; 
        namespace Ch31ValC{
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::clear> clear{};
        }
        }
    }
    namespace Nonechg0{    ///<Description collection[0]:  Channel group 0
        using Addr = Register::Address<0x4001f800,0x00000000,0,unsigned>;
        ///Include or exclude channel 0
        enum class Ch0Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0Val> ch0{}; 
        namespace Ch0ValC{
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::included> included{};
        }
        }
        ///Include or exclude channel 1
        enum class Ch1Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1Val> ch1{}; 
        namespace Ch1ValC{
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::included> included{};
        }
        }
        ///Include or exclude channel 2
        enum class Ch2Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2Val> ch2{}; 
        namespace Ch2ValC{
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::included> included{};
        }
        }
        ///Include or exclude channel 3
        enum class Ch3Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3Val> ch3{}; 
        namespace Ch3ValC{
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::included> included{};
        }
        }
        ///Include or exclude channel 4
        enum class Ch4Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4Val> ch4{}; 
        namespace Ch4ValC{
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::included> included{};
        }
        }
        ///Include or exclude channel 5
        enum class Ch5Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5Val> ch5{}; 
        namespace Ch5ValC{
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::included> included{};
        }
        }
        ///Include or exclude channel 6
        enum class Ch6Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6Val> ch6{}; 
        namespace Ch6ValC{
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::included> included{};
        }
        }
        ///Include or exclude channel 7
        enum class Ch7Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7Val> ch7{}; 
        namespace Ch7ValC{
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::included> included{};
        }
        }
        ///Include or exclude channel 8
        enum class Ch8Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch8Val> ch8{}; 
        namespace Ch8ValC{
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::included> included{};
        }
        }
        ///Include or exclude channel 9
        enum class Ch9Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch9Val> ch9{}; 
        namespace Ch9ValC{
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::included> included{};
        }
        }
        ///Include or exclude channel 10
        enum class Ch10Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ch10Val> ch10{}; 
        namespace Ch10ValC{
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::included> included{};
        }
        }
        ///Include or exclude channel 11
        enum class Ch11Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ch11Val> ch11{}; 
        namespace Ch11ValC{
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::included> included{};
        }
        }
        ///Include or exclude channel 12
        enum class Ch12Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ch12Val> ch12{}; 
        namespace Ch12ValC{
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::included> included{};
        }
        }
        ///Include or exclude channel 13
        enum class Ch13Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ch13Val> ch13{}; 
        namespace Ch13ValC{
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::included> included{};
        }
        }
        ///Include or exclude channel 14
        enum class Ch14Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ch14Val> ch14{}; 
        namespace Ch14ValC{
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::included> included{};
        }
        }
        ///Include or exclude channel 15
        enum class Ch15Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ch15Val> ch15{}; 
        namespace Ch15ValC{
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::included> included{};
        }
        }
        ///Include or exclude channel 16
        enum class Ch16Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Ch16Val> ch16{}; 
        namespace Ch16ValC{
            constexpr Register::FieldValue<decltype(ch16)::Type,Ch16Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch16)::Type,Ch16Val::included> included{};
        }
        }
        ///Include or exclude channel 17
        enum class Ch17Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Ch17Val> ch17{}; 
        namespace Ch17ValC{
            constexpr Register::FieldValue<decltype(ch17)::Type,Ch17Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch17)::Type,Ch17Val::included> included{};
        }
        }
        ///Include or exclude channel 18
        enum class Ch18Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ch18Val> ch18{}; 
        namespace Ch18ValC{
            constexpr Register::FieldValue<decltype(ch18)::Type,Ch18Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch18)::Type,Ch18Val::included> included{};
        }
        }
        ///Include or exclude channel 19
        enum class Ch19Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ch19Val> ch19{}; 
        namespace Ch19ValC{
            constexpr Register::FieldValue<decltype(ch19)::Type,Ch19Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch19)::Type,Ch19Val::included> included{};
        }
        }
        ///Include or exclude channel 20
        enum class Ch20Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Ch20Val> ch20{}; 
        namespace Ch20ValC{
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::included> included{};
        }
        }
        ///Include or exclude channel 21
        enum class Ch21Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Ch21Val> ch21{}; 
        namespace Ch21ValC{
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::included> included{};
        }
        }
        ///Include or exclude channel 22
        enum class Ch22Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Ch22Val> ch22{}; 
        namespace Ch22ValC{
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::included> included{};
        }
        }
        ///Include or exclude channel 23
        enum class Ch23Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ch23Val> ch23{}; 
        namespace Ch23ValC{
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::included> included{};
        }
        }
        ///Include or exclude channel 24
        enum class Ch24Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ch24Val> ch24{}; 
        namespace Ch24ValC{
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::included> included{};
        }
        }
        ///Include or exclude channel 25
        enum class Ch25Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ch25Val> ch25{}; 
        namespace Ch25ValC{
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::included> included{};
        }
        }
        ///Include or exclude channel 26
        enum class Ch26Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ch26Val> ch26{}; 
        namespace Ch26ValC{
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::included> included{};
        }
        }
        ///Include or exclude channel 27
        enum class Ch27Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ch27Val> ch27{}; 
        namespace Ch27ValC{
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::included> included{};
        }
        }
        ///Include or exclude channel 28
        enum class Ch28Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Ch28Val> ch28{}; 
        namespace Ch28ValC{
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::included> included{};
        }
        }
        ///Include or exclude channel 29
        enum class Ch29Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Ch29Val> ch29{}; 
        namespace Ch29ValC{
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::included> included{};
        }
        }
        ///Include or exclude channel 30
        enum class Ch30Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Ch30Val> ch30{}; 
        namespace Ch30ValC{
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::included> included{};
        }
        }
        ///Include or exclude channel 31
        enum class Ch31Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ch31Val> ch31{}; 
        namespace Ch31ValC{
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::included> included{};
        }
        }
    }
    namespace Nonechg1{    ///<Description collection[0]:  Channel group 0
        using Addr = Register::Address<0x4001f804,0x00000000,0,unsigned>;
        ///Include or exclude channel 0
        enum class Ch0Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0Val> ch0{}; 
        namespace Ch0ValC{
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::included> included{};
        }
        }
        ///Include or exclude channel 1
        enum class Ch1Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1Val> ch1{}; 
        namespace Ch1ValC{
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::included> included{};
        }
        }
        ///Include or exclude channel 2
        enum class Ch2Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2Val> ch2{}; 
        namespace Ch2ValC{
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::included> included{};
        }
        }
        ///Include or exclude channel 3
        enum class Ch3Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3Val> ch3{}; 
        namespace Ch3ValC{
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::included> included{};
        }
        }
        ///Include or exclude channel 4
        enum class Ch4Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4Val> ch4{}; 
        namespace Ch4ValC{
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::included> included{};
        }
        }
        ///Include or exclude channel 5
        enum class Ch5Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5Val> ch5{}; 
        namespace Ch5ValC{
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::included> included{};
        }
        }
        ///Include or exclude channel 6
        enum class Ch6Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6Val> ch6{}; 
        namespace Ch6ValC{
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::included> included{};
        }
        }
        ///Include or exclude channel 7
        enum class Ch7Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7Val> ch7{}; 
        namespace Ch7ValC{
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::included> included{};
        }
        }
        ///Include or exclude channel 8
        enum class Ch8Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch8Val> ch8{}; 
        namespace Ch8ValC{
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::included> included{};
        }
        }
        ///Include or exclude channel 9
        enum class Ch9Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch9Val> ch9{}; 
        namespace Ch9ValC{
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::included> included{};
        }
        }
        ///Include or exclude channel 10
        enum class Ch10Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ch10Val> ch10{}; 
        namespace Ch10ValC{
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::included> included{};
        }
        }
        ///Include or exclude channel 11
        enum class Ch11Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ch11Val> ch11{}; 
        namespace Ch11ValC{
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::included> included{};
        }
        }
        ///Include or exclude channel 12
        enum class Ch12Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ch12Val> ch12{}; 
        namespace Ch12ValC{
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::included> included{};
        }
        }
        ///Include or exclude channel 13
        enum class Ch13Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ch13Val> ch13{}; 
        namespace Ch13ValC{
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::included> included{};
        }
        }
        ///Include or exclude channel 14
        enum class Ch14Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ch14Val> ch14{}; 
        namespace Ch14ValC{
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::included> included{};
        }
        }
        ///Include or exclude channel 15
        enum class Ch15Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ch15Val> ch15{}; 
        namespace Ch15ValC{
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::included> included{};
        }
        }
        ///Include or exclude channel 16
        enum class Ch16Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Ch16Val> ch16{}; 
        namespace Ch16ValC{
            constexpr Register::FieldValue<decltype(ch16)::Type,Ch16Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch16)::Type,Ch16Val::included> included{};
        }
        }
        ///Include or exclude channel 17
        enum class Ch17Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Ch17Val> ch17{}; 
        namespace Ch17ValC{
            constexpr Register::FieldValue<decltype(ch17)::Type,Ch17Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch17)::Type,Ch17Val::included> included{};
        }
        }
        ///Include or exclude channel 18
        enum class Ch18Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ch18Val> ch18{}; 
        namespace Ch18ValC{
            constexpr Register::FieldValue<decltype(ch18)::Type,Ch18Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch18)::Type,Ch18Val::included> included{};
        }
        }
        ///Include or exclude channel 19
        enum class Ch19Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ch19Val> ch19{}; 
        namespace Ch19ValC{
            constexpr Register::FieldValue<decltype(ch19)::Type,Ch19Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch19)::Type,Ch19Val::included> included{};
        }
        }
        ///Include or exclude channel 20
        enum class Ch20Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Ch20Val> ch20{}; 
        namespace Ch20ValC{
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::included> included{};
        }
        }
        ///Include or exclude channel 21
        enum class Ch21Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Ch21Val> ch21{}; 
        namespace Ch21ValC{
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::included> included{};
        }
        }
        ///Include or exclude channel 22
        enum class Ch22Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Ch22Val> ch22{}; 
        namespace Ch22ValC{
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::included> included{};
        }
        }
        ///Include or exclude channel 23
        enum class Ch23Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ch23Val> ch23{}; 
        namespace Ch23ValC{
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::included> included{};
        }
        }
        ///Include or exclude channel 24
        enum class Ch24Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ch24Val> ch24{}; 
        namespace Ch24ValC{
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::included> included{};
        }
        }
        ///Include or exclude channel 25
        enum class Ch25Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ch25Val> ch25{}; 
        namespace Ch25ValC{
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::included> included{};
        }
        }
        ///Include or exclude channel 26
        enum class Ch26Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ch26Val> ch26{}; 
        namespace Ch26ValC{
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::included> included{};
        }
        }
        ///Include or exclude channel 27
        enum class Ch27Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ch27Val> ch27{}; 
        namespace Ch27ValC{
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::included> included{};
        }
        }
        ///Include or exclude channel 28
        enum class Ch28Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Ch28Val> ch28{}; 
        namespace Ch28ValC{
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::included> included{};
        }
        }
        ///Include or exclude channel 29
        enum class Ch29Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Ch29Val> ch29{}; 
        namespace Ch29ValC{
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::included> included{};
        }
        }
        ///Include or exclude channel 30
        enum class Ch30Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Ch30Val> ch30{}; 
        namespace Ch30ValC{
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::included> included{};
        }
        }
        ///Include or exclude channel 31
        enum class Ch31Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ch31Val> ch31{}; 
        namespace Ch31ValC{
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::included> included{};
        }
        }
    }
    namespace Nonechg2{    ///<Description collection[0]:  Channel group 0
        using Addr = Register::Address<0x4001f808,0x00000000,0,unsigned>;
        ///Include or exclude channel 0
        enum class Ch0Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0Val> ch0{}; 
        namespace Ch0ValC{
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::included> included{};
        }
        }
        ///Include or exclude channel 1
        enum class Ch1Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1Val> ch1{}; 
        namespace Ch1ValC{
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::included> included{};
        }
        }
        ///Include or exclude channel 2
        enum class Ch2Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2Val> ch2{}; 
        namespace Ch2ValC{
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::included> included{};
        }
        }
        ///Include or exclude channel 3
        enum class Ch3Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3Val> ch3{}; 
        namespace Ch3ValC{
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::included> included{};
        }
        }
        ///Include or exclude channel 4
        enum class Ch4Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4Val> ch4{}; 
        namespace Ch4ValC{
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::included> included{};
        }
        }
        ///Include or exclude channel 5
        enum class Ch5Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5Val> ch5{}; 
        namespace Ch5ValC{
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::included> included{};
        }
        }
        ///Include or exclude channel 6
        enum class Ch6Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6Val> ch6{}; 
        namespace Ch6ValC{
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::included> included{};
        }
        }
        ///Include or exclude channel 7
        enum class Ch7Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7Val> ch7{}; 
        namespace Ch7ValC{
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::included> included{};
        }
        }
        ///Include or exclude channel 8
        enum class Ch8Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch8Val> ch8{}; 
        namespace Ch8ValC{
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::included> included{};
        }
        }
        ///Include or exclude channel 9
        enum class Ch9Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch9Val> ch9{}; 
        namespace Ch9ValC{
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::included> included{};
        }
        }
        ///Include or exclude channel 10
        enum class Ch10Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ch10Val> ch10{}; 
        namespace Ch10ValC{
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::included> included{};
        }
        }
        ///Include or exclude channel 11
        enum class Ch11Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ch11Val> ch11{}; 
        namespace Ch11ValC{
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::included> included{};
        }
        }
        ///Include or exclude channel 12
        enum class Ch12Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ch12Val> ch12{}; 
        namespace Ch12ValC{
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::included> included{};
        }
        }
        ///Include or exclude channel 13
        enum class Ch13Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ch13Val> ch13{}; 
        namespace Ch13ValC{
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::included> included{};
        }
        }
        ///Include or exclude channel 14
        enum class Ch14Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ch14Val> ch14{}; 
        namespace Ch14ValC{
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::included> included{};
        }
        }
        ///Include or exclude channel 15
        enum class Ch15Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ch15Val> ch15{}; 
        namespace Ch15ValC{
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::included> included{};
        }
        }
        ///Include or exclude channel 16
        enum class Ch16Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Ch16Val> ch16{}; 
        namespace Ch16ValC{
            constexpr Register::FieldValue<decltype(ch16)::Type,Ch16Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch16)::Type,Ch16Val::included> included{};
        }
        }
        ///Include or exclude channel 17
        enum class Ch17Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Ch17Val> ch17{}; 
        namespace Ch17ValC{
            constexpr Register::FieldValue<decltype(ch17)::Type,Ch17Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch17)::Type,Ch17Val::included> included{};
        }
        }
        ///Include or exclude channel 18
        enum class Ch18Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ch18Val> ch18{}; 
        namespace Ch18ValC{
            constexpr Register::FieldValue<decltype(ch18)::Type,Ch18Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch18)::Type,Ch18Val::included> included{};
        }
        }
        ///Include or exclude channel 19
        enum class Ch19Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ch19Val> ch19{}; 
        namespace Ch19ValC{
            constexpr Register::FieldValue<decltype(ch19)::Type,Ch19Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch19)::Type,Ch19Val::included> included{};
        }
        }
        ///Include or exclude channel 20
        enum class Ch20Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Ch20Val> ch20{}; 
        namespace Ch20ValC{
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::included> included{};
        }
        }
        ///Include or exclude channel 21
        enum class Ch21Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Ch21Val> ch21{}; 
        namespace Ch21ValC{
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::included> included{};
        }
        }
        ///Include or exclude channel 22
        enum class Ch22Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Ch22Val> ch22{}; 
        namespace Ch22ValC{
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::included> included{};
        }
        }
        ///Include or exclude channel 23
        enum class Ch23Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ch23Val> ch23{}; 
        namespace Ch23ValC{
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::included> included{};
        }
        }
        ///Include or exclude channel 24
        enum class Ch24Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ch24Val> ch24{}; 
        namespace Ch24ValC{
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::included> included{};
        }
        }
        ///Include or exclude channel 25
        enum class Ch25Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ch25Val> ch25{}; 
        namespace Ch25ValC{
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::included> included{};
        }
        }
        ///Include or exclude channel 26
        enum class Ch26Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ch26Val> ch26{}; 
        namespace Ch26ValC{
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::included> included{};
        }
        }
        ///Include or exclude channel 27
        enum class Ch27Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ch27Val> ch27{}; 
        namespace Ch27ValC{
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::included> included{};
        }
        }
        ///Include or exclude channel 28
        enum class Ch28Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Ch28Val> ch28{}; 
        namespace Ch28ValC{
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::included> included{};
        }
        }
        ///Include or exclude channel 29
        enum class Ch29Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Ch29Val> ch29{}; 
        namespace Ch29ValC{
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::included> included{};
        }
        }
        ///Include or exclude channel 30
        enum class Ch30Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Ch30Val> ch30{}; 
        namespace Ch30ValC{
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::included> included{};
        }
        }
        ///Include or exclude channel 31
        enum class Ch31Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ch31Val> ch31{}; 
        namespace Ch31ValC{
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::included> included{};
        }
        }
    }
    namespace Nonechg3{    ///<Description collection[0]:  Channel group 0
        using Addr = Register::Address<0x4001f80c,0x00000000,0,unsigned>;
        ///Include or exclude channel 0
        enum class Ch0Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0Val> ch0{}; 
        namespace Ch0ValC{
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::included> included{};
        }
        }
        ///Include or exclude channel 1
        enum class Ch1Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1Val> ch1{}; 
        namespace Ch1ValC{
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::included> included{};
        }
        }
        ///Include or exclude channel 2
        enum class Ch2Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2Val> ch2{}; 
        namespace Ch2ValC{
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::included> included{};
        }
        }
        ///Include or exclude channel 3
        enum class Ch3Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3Val> ch3{}; 
        namespace Ch3ValC{
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::included> included{};
        }
        }
        ///Include or exclude channel 4
        enum class Ch4Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4Val> ch4{}; 
        namespace Ch4ValC{
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::included> included{};
        }
        }
        ///Include or exclude channel 5
        enum class Ch5Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5Val> ch5{}; 
        namespace Ch5ValC{
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::included> included{};
        }
        }
        ///Include or exclude channel 6
        enum class Ch6Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6Val> ch6{}; 
        namespace Ch6ValC{
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::included> included{};
        }
        }
        ///Include or exclude channel 7
        enum class Ch7Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7Val> ch7{}; 
        namespace Ch7ValC{
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::included> included{};
        }
        }
        ///Include or exclude channel 8
        enum class Ch8Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch8Val> ch8{}; 
        namespace Ch8ValC{
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::included> included{};
        }
        }
        ///Include or exclude channel 9
        enum class Ch9Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch9Val> ch9{}; 
        namespace Ch9ValC{
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::included> included{};
        }
        }
        ///Include or exclude channel 10
        enum class Ch10Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ch10Val> ch10{}; 
        namespace Ch10ValC{
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::included> included{};
        }
        }
        ///Include or exclude channel 11
        enum class Ch11Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ch11Val> ch11{}; 
        namespace Ch11ValC{
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::included> included{};
        }
        }
        ///Include or exclude channel 12
        enum class Ch12Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ch12Val> ch12{}; 
        namespace Ch12ValC{
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::included> included{};
        }
        }
        ///Include or exclude channel 13
        enum class Ch13Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ch13Val> ch13{}; 
        namespace Ch13ValC{
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::included> included{};
        }
        }
        ///Include or exclude channel 14
        enum class Ch14Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ch14Val> ch14{}; 
        namespace Ch14ValC{
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::included> included{};
        }
        }
        ///Include or exclude channel 15
        enum class Ch15Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ch15Val> ch15{}; 
        namespace Ch15ValC{
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::included> included{};
        }
        }
        ///Include or exclude channel 16
        enum class Ch16Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Ch16Val> ch16{}; 
        namespace Ch16ValC{
            constexpr Register::FieldValue<decltype(ch16)::Type,Ch16Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch16)::Type,Ch16Val::included> included{};
        }
        }
        ///Include or exclude channel 17
        enum class Ch17Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Ch17Val> ch17{}; 
        namespace Ch17ValC{
            constexpr Register::FieldValue<decltype(ch17)::Type,Ch17Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch17)::Type,Ch17Val::included> included{};
        }
        }
        ///Include or exclude channel 18
        enum class Ch18Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ch18Val> ch18{}; 
        namespace Ch18ValC{
            constexpr Register::FieldValue<decltype(ch18)::Type,Ch18Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch18)::Type,Ch18Val::included> included{};
        }
        }
        ///Include or exclude channel 19
        enum class Ch19Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ch19Val> ch19{}; 
        namespace Ch19ValC{
            constexpr Register::FieldValue<decltype(ch19)::Type,Ch19Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch19)::Type,Ch19Val::included> included{};
        }
        }
        ///Include or exclude channel 20
        enum class Ch20Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Ch20Val> ch20{}; 
        namespace Ch20ValC{
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::included> included{};
        }
        }
        ///Include or exclude channel 21
        enum class Ch21Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Ch21Val> ch21{}; 
        namespace Ch21ValC{
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::included> included{};
        }
        }
        ///Include or exclude channel 22
        enum class Ch22Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Ch22Val> ch22{}; 
        namespace Ch22ValC{
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::included> included{};
        }
        }
        ///Include or exclude channel 23
        enum class Ch23Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ch23Val> ch23{}; 
        namespace Ch23ValC{
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::included> included{};
        }
        }
        ///Include or exclude channel 24
        enum class Ch24Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ch24Val> ch24{}; 
        namespace Ch24ValC{
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::included> included{};
        }
        }
        ///Include or exclude channel 25
        enum class Ch25Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ch25Val> ch25{}; 
        namespace Ch25ValC{
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::included> included{};
        }
        }
        ///Include or exclude channel 26
        enum class Ch26Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ch26Val> ch26{}; 
        namespace Ch26ValC{
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::included> included{};
        }
        }
        ///Include or exclude channel 27
        enum class Ch27Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ch27Val> ch27{}; 
        namespace Ch27ValC{
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::included> included{};
        }
        }
        ///Include or exclude channel 28
        enum class Ch28Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Ch28Val> ch28{}; 
        namespace Ch28ValC{
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::included> included{};
        }
        }
        ///Include or exclude channel 29
        enum class Ch29Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Ch29Val> ch29{}; 
        namespace Ch29ValC{
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::included> included{};
        }
        }
        ///Include or exclude channel 30
        enum class Ch30Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Ch30Val> ch30{}; 
        namespace Ch30ValC{
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::included> included{};
        }
        }
        ///Include or exclude channel 31
        enum class Ch31Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ch31Val> ch31{}; 
        namespace Ch31ValC{
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::included> included{};
        }
        }
    }
    namespace Nonechg4{    ///<Description collection[0]:  Channel group 0
        using Addr = Register::Address<0x4001f810,0x00000000,0,unsigned>;
        ///Include or exclude channel 0
        enum class Ch0Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0Val> ch0{}; 
        namespace Ch0ValC{
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::included> included{};
        }
        }
        ///Include or exclude channel 1
        enum class Ch1Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1Val> ch1{}; 
        namespace Ch1ValC{
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::included> included{};
        }
        }
        ///Include or exclude channel 2
        enum class Ch2Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2Val> ch2{}; 
        namespace Ch2ValC{
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::included> included{};
        }
        }
        ///Include or exclude channel 3
        enum class Ch3Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3Val> ch3{}; 
        namespace Ch3ValC{
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::included> included{};
        }
        }
        ///Include or exclude channel 4
        enum class Ch4Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4Val> ch4{}; 
        namespace Ch4ValC{
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::included> included{};
        }
        }
        ///Include or exclude channel 5
        enum class Ch5Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5Val> ch5{}; 
        namespace Ch5ValC{
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::included> included{};
        }
        }
        ///Include or exclude channel 6
        enum class Ch6Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6Val> ch6{}; 
        namespace Ch6ValC{
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::included> included{};
        }
        }
        ///Include or exclude channel 7
        enum class Ch7Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7Val> ch7{}; 
        namespace Ch7ValC{
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::included> included{};
        }
        }
        ///Include or exclude channel 8
        enum class Ch8Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch8Val> ch8{}; 
        namespace Ch8ValC{
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::included> included{};
        }
        }
        ///Include or exclude channel 9
        enum class Ch9Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch9Val> ch9{}; 
        namespace Ch9ValC{
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::included> included{};
        }
        }
        ///Include or exclude channel 10
        enum class Ch10Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ch10Val> ch10{}; 
        namespace Ch10ValC{
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::included> included{};
        }
        }
        ///Include or exclude channel 11
        enum class Ch11Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ch11Val> ch11{}; 
        namespace Ch11ValC{
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::included> included{};
        }
        }
        ///Include or exclude channel 12
        enum class Ch12Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ch12Val> ch12{}; 
        namespace Ch12ValC{
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::included> included{};
        }
        }
        ///Include or exclude channel 13
        enum class Ch13Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ch13Val> ch13{}; 
        namespace Ch13ValC{
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::included> included{};
        }
        }
        ///Include or exclude channel 14
        enum class Ch14Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ch14Val> ch14{}; 
        namespace Ch14ValC{
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::included> included{};
        }
        }
        ///Include or exclude channel 15
        enum class Ch15Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ch15Val> ch15{}; 
        namespace Ch15ValC{
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::included> included{};
        }
        }
        ///Include or exclude channel 16
        enum class Ch16Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Ch16Val> ch16{}; 
        namespace Ch16ValC{
            constexpr Register::FieldValue<decltype(ch16)::Type,Ch16Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch16)::Type,Ch16Val::included> included{};
        }
        }
        ///Include or exclude channel 17
        enum class Ch17Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Ch17Val> ch17{}; 
        namespace Ch17ValC{
            constexpr Register::FieldValue<decltype(ch17)::Type,Ch17Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch17)::Type,Ch17Val::included> included{};
        }
        }
        ///Include or exclude channel 18
        enum class Ch18Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ch18Val> ch18{}; 
        namespace Ch18ValC{
            constexpr Register::FieldValue<decltype(ch18)::Type,Ch18Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch18)::Type,Ch18Val::included> included{};
        }
        }
        ///Include or exclude channel 19
        enum class Ch19Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ch19Val> ch19{}; 
        namespace Ch19ValC{
            constexpr Register::FieldValue<decltype(ch19)::Type,Ch19Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch19)::Type,Ch19Val::included> included{};
        }
        }
        ///Include or exclude channel 20
        enum class Ch20Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Ch20Val> ch20{}; 
        namespace Ch20ValC{
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::included> included{};
        }
        }
        ///Include or exclude channel 21
        enum class Ch21Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Ch21Val> ch21{}; 
        namespace Ch21ValC{
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::included> included{};
        }
        }
        ///Include or exclude channel 22
        enum class Ch22Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Ch22Val> ch22{}; 
        namespace Ch22ValC{
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::included> included{};
        }
        }
        ///Include or exclude channel 23
        enum class Ch23Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ch23Val> ch23{}; 
        namespace Ch23ValC{
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::included> included{};
        }
        }
        ///Include or exclude channel 24
        enum class Ch24Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ch24Val> ch24{}; 
        namespace Ch24ValC{
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::included> included{};
        }
        }
        ///Include or exclude channel 25
        enum class Ch25Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ch25Val> ch25{}; 
        namespace Ch25ValC{
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::included> included{};
        }
        }
        ///Include or exclude channel 26
        enum class Ch26Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ch26Val> ch26{}; 
        namespace Ch26ValC{
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::included> included{};
        }
        }
        ///Include or exclude channel 27
        enum class Ch27Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ch27Val> ch27{}; 
        namespace Ch27ValC{
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::included> included{};
        }
        }
        ///Include or exclude channel 28
        enum class Ch28Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Ch28Val> ch28{}; 
        namespace Ch28ValC{
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::included> included{};
        }
        }
        ///Include or exclude channel 29
        enum class Ch29Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Ch29Val> ch29{}; 
        namespace Ch29ValC{
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::included> included{};
        }
        }
        ///Include or exclude channel 30
        enum class Ch30Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Ch30Val> ch30{}; 
        namespace Ch30ValC{
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::included> included{};
        }
        }
        ///Include or exclude channel 31
        enum class Ch31Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ch31Val> ch31{}; 
        namespace Ch31ValC{
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::included> included{};
        }
        }
    }
    namespace Nonechg5{    ///<Description collection[0]:  Channel group 0
        using Addr = Register::Address<0x4001f814,0x00000000,0,unsigned>;
        ///Include or exclude channel 0
        enum class Ch0Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0Val> ch0{}; 
        namespace Ch0ValC{
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::included> included{};
        }
        }
        ///Include or exclude channel 1
        enum class Ch1Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1Val> ch1{}; 
        namespace Ch1ValC{
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::included> included{};
        }
        }
        ///Include or exclude channel 2
        enum class Ch2Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2Val> ch2{}; 
        namespace Ch2ValC{
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::included> included{};
        }
        }
        ///Include or exclude channel 3
        enum class Ch3Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3Val> ch3{}; 
        namespace Ch3ValC{
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::included> included{};
        }
        }
        ///Include or exclude channel 4
        enum class Ch4Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4Val> ch4{}; 
        namespace Ch4ValC{
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::included> included{};
        }
        }
        ///Include or exclude channel 5
        enum class Ch5Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5Val> ch5{}; 
        namespace Ch5ValC{
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::included> included{};
        }
        }
        ///Include or exclude channel 6
        enum class Ch6Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6Val> ch6{}; 
        namespace Ch6ValC{
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::included> included{};
        }
        }
        ///Include or exclude channel 7
        enum class Ch7Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7Val> ch7{}; 
        namespace Ch7ValC{
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::included> included{};
        }
        }
        ///Include or exclude channel 8
        enum class Ch8Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch8Val> ch8{}; 
        namespace Ch8ValC{
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::included> included{};
        }
        }
        ///Include or exclude channel 9
        enum class Ch9Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch9Val> ch9{}; 
        namespace Ch9ValC{
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::included> included{};
        }
        }
        ///Include or exclude channel 10
        enum class Ch10Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ch10Val> ch10{}; 
        namespace Ch10ValC{
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch10)::Type,Ch10Val::included> included{};
        }
        }
        ///Include or exclude channel 11
        enum class Ch11Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ch11Val> ch11{}; 
        namespace Ch11ValC{
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch11)::Type,Ch11Val::included> included{};
        }
        }
        ///Include or exclude channel 12
        enum class Ch12Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ch12Val> ch12{}; 
        namespace Ch12ValC{
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch12)::Type,Ch12Val::included> included{};
        }
        }
        ///Include or exclude channel 13
        enum class Ch13Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ch13Val> ch13{}; 
        namespace Ch13ValC{
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch13)::Type,Ch13Val::included> included{};
        }
        }
        ///Include or exclude channel 14
        enum class Ch14Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ch14Val> ch14{}; 
        namespace Ch14ValC{
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch14)::Type,Ch14Val::included> included{};
        }
        }
        ///Include or exclude channel 15
        enum class Ch15Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ch15Val> ch15{}; 
        namespace Ch15ValC{
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch15)::Type,Ch15Val::included> included{};
        }
        }
        ///Include or exclude channel 16
        enum class Ch16Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Ch16Val> ch16{}; 
        namespace Ch16ValC{
            constexpr Register::FieldValue<decltype(ch16)::Type,Ch16Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch16)::Type,Ch16Val::included> included{};
        }
        }
        ///Include or exclude channel 17
        enum class Ch17Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Ch17Val> ch17{}; 
        namespace Ch17ValC{
            constexpr Register::FieldValue<decltype(ch17)::Type,Ch17Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch17)::Type,Ch17Val::included> included{};
        }
        }
        ///Include or exclude channel 18
        enum class Ch18Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ch18Val> ch18{}; 
        namespace Ch18ValC{
            constexpr Register::FieldValue<decltype(ch18)::Type,Ch18Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch18)::Type,Ch18Val::included> included{};
        }
        }
        ///Include or exclude channel 19
        enum class Ch19Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ch19Val> ch19{}; 
        namespace Ch19ValC{
            constexpr Register::FieldValue<decltype(ch19)::Type,Ch19Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch19)::Type,Ch19Val::included> included{};
        }
        }
        ///Include or exclude channel 20
        enum class Ch20Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Ch20Val> ch20{}; 
        namespace Ch20ValC{
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch20)::Type,Ch20Val::included> included{};
        }
        }
        ///Include or exclude channel 21
        enum class Ch21Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Ch21Val> ch21{}; 
        namespace Ch21ValC{
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch21)::Type,Ch21Val::included> included{};
        }
        }
        ///Include or exclude channel 22
        enum class Ch22Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Ch22Val> ch22{}; 
        namespace Ch22ValC{
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch22)::Type,Ch22Val::included> included{};
        }
        }
        ///Include or exclude channel 23
        enum class Ch23Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ch23Val> ch23{}; 
        namespace Ch23ValC{
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch23)::Type,Ch23Val::included> included{};
        }
        }
        ///Include or exclude channel 24
        enum class Ch24Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ch24Val> ch24{}; 
        namespace Ch24ValC{
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch24)::Type,Ch24Val::included> included{};
        }
        }
        ///Include or exclude channel 25
        enum class Ch25Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ch25Val> ch25{}; 
        namespace Ch25ValC{
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch25)::Type,Ch25Val::included> included{};
        }
        }
        ///Include or exclude channel 26
        enum class Ch26Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ch26Val> ch26{}; 
        namespace Ch26ValC{
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch26)::Type,Ch26Val::included> included{};
        }
        }
        ///Include or exclude channel 27
        enum class Ch27Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ch27Val> ch27{}; 
        namespace Ch27ValC{
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch27)::Type,Ch27Val::included> included{};
        }
        }
        ///Include or exclude channel 28
        enum class Ch28Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Ch28Val> ch28{}; 
        namespace Ch28ValC{
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch28)::Type,Ch28Val::included> included{};
        }
        }
        ///Include or exclude channel 29
        enum class Ch29Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Ch29Val> ch29{}; 
        namespace Ch29ValC{
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch29)::Type,Ch29Val::included> included{};
        }
        }
        ///Include or exclude channel 30
        enum class Ch30Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Ch30Val> ch30{}; 
        namespace Ch30ValC{
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch30)::Type,Ch30Val::included> included{};
        }
        }
        ///Include or exclude channel 31
        enum class Ch31Val {
            excluded=0x00000000,     ///<Exclude
            included=0x00000001,     ///<Include
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ch31Val> ch31{}; 
        namespace Ch31ValC{
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::excluded> excluded{};
            constexpr Register::FieldValue<decltype(ch31)::Type,Ch31Val::included> included{};
        }
        }
    }
}
