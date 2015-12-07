#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx System Control Unit (SCU) Modification date=6/8/2011 Major revision=0 Minor revision=10 
    namespace Nonesfsp00{    ///<Pin configuration register for pins P0
        using Addr = Register::Address<0x40086000,0xffffff80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
    }
    namespace Nonesfsp01{    ///<Pin configuration register for pins P0
        using Addr = Register::Address<0x40086004,0xffffff80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
    }
    namespace Nonesfsp10{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x40086080,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp11{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x40086084,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp12{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x40086088,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp13{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x4008608c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp14{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x40086090,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp15{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x40086094,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp16{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x40086098,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp17{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x4008609c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp18{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860a0,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp19{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860a4,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp110{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860a8,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp111{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860ac,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp112{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860b0,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp113{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860b4,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp114{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860b8,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp115{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860bc,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp116{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860c0,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp117{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860c4,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp118{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860c8,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp119{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860cc,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp120{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860d0,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp20{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086100,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp21{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086104,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp22{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086108,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp23{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x4008610c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp24{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086110,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp25{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086114,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp26{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086118,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp27{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x4008611c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp28{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086120,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp29{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086124,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp210{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086128,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp211{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x4008612c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp212{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086130,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp213{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086134,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp30{    ///<Pin configuration register for pins P3
        using Addr = Register::Address<0x40086180,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp31{    ///<Pin configuration register for pins P3
        using Addr = Register::Address<0x40086184,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp32{    ///<Pin configuration register for pins P3
        using Addr = Register::Address<0x40086188,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp33{    ///<Pin configuration register for pins P3
        using Addr = Register::Address<0x4008618c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp34{    ///<Pin configuration register for pins P3
        using Addr = Register::Address<0x40086190,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp35{    ///<Pin configuration register for pins P3
        using Addr = Register::Address<0x40086194,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp36{    ///<Pin configuration register for pins P3
        using Addr = Register::Address<0x40086198,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp37{    ///<Pin configuration register for pins P3
        using Addr = Register::Address<0x4008619c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp38{    ///<Pin configuration register for pins P3
        using Addr = Register::Address<0x400861a0,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp40{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x40086200,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp41{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x40086204,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp42{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x40086208,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp43{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x4008620c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp44{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x40086210,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp45{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x40086214,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp46{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x40086218,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp47{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x4008621c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp48{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x40086220,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp49{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x40086224,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp410{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x40086228,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp50{    ///<Pin configuration register for pins P5
        using Addr = Register::Address<0x40086280,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp51{    ///<Pin configuration register for pins P5
        using Addr = Register::Address<0x40086284,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp52{    ///<Pin configuration register for pins P5
        using Addr = Register::Address<0x40086288,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp53{    ///<Pin configuration register for pins P5
        using Addr = Register::Address<0x4008628c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp54{    ///<Pin configuration register for pins P5
        using Addr = Register::Address<0x40086290,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp55{    ///<Pin configuration register for pins P5
        using Addr = Register::Address<0x40086294,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp56{    ///<Pin configuration register for pins P5
        using Addr = Register::Address<0x40086298,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp57{    ///<Pin configuration register for pins P5
        using Addr = Register::Address<0x4008629c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp60{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086300,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp61{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086304,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp62{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086308,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp63{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x4008630c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp64{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086310,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp65{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086314,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp66{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086318,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp67{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x4008631c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp68{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086320,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp69{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086324,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp610{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086328,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp611{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x4008632c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp612{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086330,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp70{    ///<Pin configuration register for pins P7
        using Addr = Register::Address<0x40086380,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp71{    ///<Pin configuration register for pins P7
        using Addr = Register::Address<0x40086384,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp72{    ///<Pin configuration register for pins P7
        using Addr = Register::Address<0x40086388,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp73{    ///<Pin configuration register for pins P7
        using Addr = Register::Address<0x4008638c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp74{    ///<Pin configuration register for pins P7
        using Addr = Register::Address<0x40086390,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp75{    ///<Pin configuration register for pins P7
        using Addr = Register::Address<0x40086394,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp76{    ///<Pin configuration register for pins P7
        using Addr = Register::Address<0x40086398,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp77{    ///<Pin configuration register for pins P7
        using Addr = Register::Address<0x4008639c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp80{    ///<Pin configuration register for pins P8
        using Addr = Register::Address<0x40086400,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp81{    ///<Pin configuration register for pins P8
        using Addr = Register::Address<0x40086404,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp82{    ///<Pin configuration register for pins P8
        using Addr = Register::Address<0x40086408,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp83{    ///<Pin configuration register for pins P8
        using Addr = Register::Address<0x4008640c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp84{    ///<Pin configuration register for pins P8
        using Addr = Register::Address<0x40086410,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp85{    ///<Pin configuration register for pins P8
        using Addr = Register::Address<0x40086414,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp86{    ///<Pin configuration register for pins P8
        using Addr = Register::Address<0x40086418,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp87{    ///<Pin configuration register for pins P8
        using Addr = Register::Address<0x4008641c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp88{    ///<Pin configuration register for pins P8
        using Addr = Register::Address<0x40086420,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp90{    ///<Pin configuration register for pins P9
        using Addr = Register::Address<0x40086480,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp91{    ///<Pin configuration register for pins P9
        using Addr = Register::Address<0x40086484,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp92{    ///<Pin configuration register for pins P9
        using Addr = Register::Address<0x40086488,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp93{    ///<Pin configuration register for pins P9
        using Addr = Register::Address<0x4008648c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp94{    ///<Pin configuration register for pins P9
        using Addr = Register::Address<0x40086490,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp95{    ///<Pin configuration register for pins P9
        using Addr = Register::Address<0x40086494,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsp96{    ///<Pin configuration register for pins P9
        using Addr = Register::Address<0x40086498,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspa0{    ///<Pin configuration register for pins PA
        using Addr = Register::Address<0x40086500,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspa1{    ///<Pin configuration register for pins PA
        using Addr = Register::Address<0x40086504,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspa2{    ///<Pin configuration register for pins PA
        using Addr = Register::Address<0x40086508,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspa3{    ///<Pin configuration register for pins PA
        using Addr = Register::Address<0x4008650c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspa4{    ///<Pin configuration register for pins PA
        using Addr = Register::Address<0x40086510,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspb0{    ///<Pin configuration register for pins PB
        using Addr = Register::Address<0x40086580,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspb1{    ///<Pin configuration register for pins PB
        using Addr = Register::Address<0x40086584,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspb2{    ///<Pin configuration register for pins PB
        using Addr = Register::Address<0x40086588,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspb3{    ///<Pin configuration register for pins PB
        using Addr = Register::Address<0x4008658c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspb4{    ///<Pin configuration register for pins PB
        using Addr = Register::Address<0x40086590,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspb5{    ///<Pin configuration register for pins PB
        using Addr = Register::Address<0x40086594,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspb6{    ///<Pin configuration register for pins PB
        using Addr = Register::Address<0x40086598,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspc0{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086600,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspc1{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086604,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspc2{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086608,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspc3{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x4008660c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspc4{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086610,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspc5{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086614,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspc6{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086618,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspc7{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x4008661c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspc8{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086620,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspc9{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086624,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspc10{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086628,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspc11{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x4008662c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspc12{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086630,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspc13{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086634,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspc14{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086638,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspd0{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x40086680,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspd1{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x40086684,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspd2{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x40086688,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspd3{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x4008668c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspd4{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x40086690,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspd5{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x40086694,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspd6{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x40086698,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspd7{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x4008669c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspd8{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x400866a0,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspd9{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x400866a4,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspd10{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x400866a8,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspd11{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x400866ac,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspd12{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x400866b0,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspd13{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x400866b4,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspd14{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x400866b8,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspd15{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x400866bc,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspd16{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x400866c0,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspe0{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086700,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspe1{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086704,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspe2{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086708,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspe3{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x4008670c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspe4{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086710,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspe5{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086714,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspe6{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086718,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspe7{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x4008671c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspe8{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086720,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspe9{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086724,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspe10{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086728,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspe11{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x4008672c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspe12{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086730,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspe13{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086734,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspe14{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086738,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspe15{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x4008673c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspf0{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x40086780,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspf1{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x40086784,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspf2{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x40086788,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspf3{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x4008678c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspf4{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x40086790,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspf5{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x40086794,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspf6{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x40086798,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspf7{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x4008679c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspf8{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x400867a0,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspf9{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x400867a4,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspf10{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x400867a8,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfspf11{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x400867ac,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsclk0{    ///<Pin configuration register for pins CLK
        using Addr = Register::Address<0x40086c00,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsclk1{    ///<Pin configuration register for pins CLK
        using Addr = Register::Address<0x40086c04,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsclk2{    ///<Pin configuration register for pins CLK
        using Addr = Register::Address<0x40086c08,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Nonesfsclk3{    ///<Pin configuration register for pins CLK
        using Addr = Register::Address<0x40086c0c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd),EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd),EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun),EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun),EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs),EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs),EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi),EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi),EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd),EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd),EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
    }
    namespace Noneenaio0{    ///<ADC0 function select register
        using Addr = Register::Address<0x40086c88,0xffffff80,0,unsigned>;
        ///Select ADC0_0
        enum class Adc00Val {
            analogFunctionAdc0=0x00000000,     ///<Analog function ADC0_0 selected on pin P4_3.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin P4_3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Adc00Val> adc00{}; 
        namespace Adc00ValC{
            constexpr Register::FieldValue<decltype(adc00),Adc00Val::analogFunctionAdc0> analogFunctionAdc0{};
            constexpr Register::FieldValue<decltype(adc00),Adc00Val::digitalFunctionSel> digitalFunctionSel{};
        }
        ///Select ADC0_1
        enum class Adc01Val {
            analogFunctionAdc0=0x00000000,     ///<Analog function ADC0_1 selected on pin P4_1.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin P4_1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Adc01Val> adc01{}; 
        namespace Adc01ValC{
            constexpr Register::FieldValue<decltype(adc01),Adc01Val::analogFunctionAdc0> analogFunctionAdc0{};
            constexpr Register::FieldValue<decltype(adc01),Adc01Val::digitalFunctionSel> digitalFunctionSel{};
        }
        ///Select ADC0_2
        enum class Adc02Val {
            analogFunctionAdc0=0x00000000,     ///<Analog function ADC0_2 selected on pin PF_8.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PF_8.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Adc02Val> adc02{}; 
        namespace Adc02ValC{
            constexpr Register::FieldValue<decltype(adc02),Adc02Val::analogFunctionAdc0> analogFunctionAdc0{};
            constexpr Register::FieldValue<decltype(adc02),Adc02Val::digitalFunctionSel> digitalFunctionSel{};
        }
        ///Select ADC0_3
        enum class Adc03Val {
            analogFunctionAdc0=0x00000000,     ///<Analog function ADC0_3 selected on pin P7_5.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin P7_5.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Adc03Val> adc03{}; 
        namespace Adc03ValC{
            constexpr Register::FieldValue<decltype(adc03),Adc03Val::analogFunctionAdc0> analogFunctionAdc0{};
            constexpr Register::FieldValue<decltype(adc03),Adc03Val::digitalFunctionSel> digitalFunctionSel{};
        }
        ///Select ADC0_4
        enum class Adc04Val {
            analogFunctionAdc0=0x00000000,     ///<Analog function ADC0_4 selected on pin P7_4.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin P7_4.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Adc04Val> adc04{}; 
        namespace Adc04ValC{
            constexpr Register::FieldValue<decltype(adc04),Adc04Val::analogFunctionAdc0> analogFunctionAdc0{};
            constexpr Register::FieldValue<decltype(adc04),Adc04Val::digitalFunctionSel> digitalFunctionSel{};
        }
        ///Select ADC0_5
        enum class Adc05Val {
            analogFunctionAdc0=0x00000000,     ///<Analog function ADC0_5 selected on pin PF_10.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PF_10.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Adc05Val> adc05{}; 
        namespace Adc05ValC{
            constexpr Register::FieldValue<decltype(adc05),Adc05Val::analogFunctionAdc0> analogFunctionAdc0{};
            constexpr Register::FieldValue<decltype(adc05),Adc05Val::digitalFunctionSel> digitalFunctionSel{};
        }
        ///Select ADC0_6
        enum class Adc06Val {
            analogFunctionAdc0=0x00000000,     ///<Analog function ADC0_6 selected on pin PB_6.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PB_6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Adc06Val> adc06{}; 
        namespace Adc06ValC{
            constexpr Register::FieldValue<decltype(adc06),Adc06Val::analogFunctionAdc0> analogFunctionAdc0{};
            constexpr Register::FieldValue<decltype(adc06),Adc06Val::digitalFunctionSel> digitalFunctionSel{};
        }
    }
    namespace Noneenaio1{    ///<ADC1 function select register
        using Addr = Register::Address<0x40086c8c,0xffffff00,0,unsigned>;
        ///Select ADC1_0
        enum class Adc10Val {
            analogFunctionAdc1=0x00000000,     ///<Analog function ADC1_0 selected on pin PC_3.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PC_3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Adc10Val> adc10{}; 
        namespace Adc10ValC{
            constexpr Register::FieldValue<decltype(adc10),Adc10Val::analogFunctionAdc1> analogFunctionAdc1{};
            constexpr Register::FieldValue<decltype(adc10),Adc10Val::digitalFunctionSel> digitalFunctionSel{};
        }
        ///Select ADC1_1
        enum class Adc11Val {
            analogFunctionAdc1=0x00000000,     ///<Analog function ADC1_1 selected on pin PC_0.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PC_0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Adc11Val> adc11{}; 
        namespace Adc11ValC{
            constexpr Register::FieldValue<decltype(adc11),Adc11Val::analogFunctionAdc1> analogFunctionAdc1{};
            constexpr Register::FieldValue<decltype(adc11),Adc11Val::digitalFunctionSel> digitalFunctionSel{};
        }
        ///Select ADC1_2
        enum class Adc12Val {
            analogFunctionAdc1=0x00000000,     ///<Analog function ADC1_2 selected on pin PF_9.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PF_9.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Adc12Val> adc12{}; 
        namespace Adc12ValC{
            constexpr Register::FieldValue<decltype(adc12),Adc12Val::analogFunctionAdc1> analogFunctionAdc1{};
            constexpr Register::FieldValue<decltype(adc12),Adc12Val::digitalFunctionSel> digitalFunctionSel{};
        }
        ///Select ADC1_3
        enum class Adc13Val {
            analogFunctionAdc1=0x00000000,     ///<Analog function ADC1_3 selected on pin PF_6.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PF_6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Adc13Val> adc13{}; 
        namespace Adc13ValC{
            constexpr Register::FieldValue<decltype(adc13),Adc13Val::analogFunctionAdc1> analogFunctionAdc1{};
            constexpr Register::FieldValue<decltype(adc13),Adc13Val::digitalFunctionSel> digitalFunctionSel{};
        }
        ///Select ADC1_4
        enum class Adc14Val {
            analogFunctionAdc1=0x00000000,     ///<Analog function ADC1_4 selected on pin PF_5.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PF_5.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Adc14Val> adc14{}; 
        namespace Adc14ValC{
            constexpr Register::FieldValue<decltype(adc14),Adc14Val::analogFunctionAdc1> analogFunctionAdc1{};
            constexpr Register::FieldValue<decltype(adc14),Adc14Val::digitalFunctionSel> digitalFunctionSel{};
        }
        ///Select ADC1_5
        enum class Adc15Val {
            analogFunctionAdc1=0x00000000,     ///<Analog function ADC1_5 selected on pin PF_11.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PF_11.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Adc15Val> adc15{}; 
        namespace Adc15ValC{
            constexpr Register::FieldValue<decltype(adc15),Adc15Val::analogFunctionAdc1> analogFunctionAdc1{};
            constexpr Register::FieldValue<decltype(adc15),Adc15Val::digitalFunctionSel> digitalFunctionSel{};
        }
        ///Select ADC1_6
        enum class Adc16Val {
            analogFunctionAdc1=0x00000000,     ///<Analog function ADC1_6 selected on pin P7_7.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin P7_7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Adc16Val> adc16{}; 
        namespace Adc16ValC{
            constexpr Register::FieldValue<decltype(adc16),Adc16Val::analogFunctionAdc1> analogFunctionAdc1{};
            constexpr Register::FieldValue<decltype(adc16),Adc16Val::digitalFunctionSel> digitalFunctionSel{};
        }
        ///Select ADC1_7
        enum class Adc17Val {
            analogFunctionAdc1=0x00000000,     ///<Analog function ADC1_7 selected on pin PF_7.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PF_7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Adc17Val> adc17{}; 
        namespace Adc17ValC{
            constexpr Register::FieldValue<decltype(adc17),Adc17Val::analogFunctionAdc1> analogFunctionAdc1{};
            constexpr Register::FieldValue<decltype(adc17),Adc17Val::digitalFunctionSel> digitalFunctionSel{};
        }
    }
    namespace Noneenaio2{    ///<Analog function select register
        using Addr = Register::Address<0x40086c90,0xffffffee,0,unsigned>;
        ///Select DAC
        enum class DacVal {
            analogFunctionDac=0x00000000,     ///<Analog function DAC selected on pin P4_4.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin P4_4.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DacVal> dac{}; 
        namespace DacValC{
            constexpr Register::FieldValue<decltype(dac),DacVal::analogFunctionDac> analogFunctionDac{};
            constexpr Register::FieldValue<decltype(dac),DacVal::digitalFunctionSel> digitalFunctionSel{};
        }
        ///Select bandgap output
        enum class BgVal {
            bandgapOutputSelec=0x00000000,     ///<Bandgap output selected for pin PF_7.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PF_7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BgVal> bg{}; 
        namespace BgValC{
            constexpr Register::FieldValue<decltype(bg),BgVal::bandgapOutputSelec> bandgapOutputSelec{};
            constexpr Register::FieldValue<decltype(bg),BgVal::digitalFunctionSel> digitalFunctionSel{};
        }
    }
    namespace Nonesfsusb{    ///<Pin configuration register for
        using Addr = Register::Address<0x40086c80,0xfffffffc,0,unsigned>;
        ///Differential data input AIP/AIM  0 = Going LOW with full speed edge rate 1 = Going HIGH with full speed edge rate
        enum class UsbaimVal {
            goingLowWithFull=0x00000000,     ///<Going LOW with full speed edge rate
            goingHighWithFull=0x00000001,     ///<Going HIGH with full speed edge rate
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,UsbaimVal> usbAim{}; 
        namespace UsbaimValC{
            constexpr Register::FieldValue<decltype(usbAim),UsbaimVal::goingLowWithFull> goingLowWithFull{};
            constexpr Register::FieldValue<decltype(usbAim),UsbaimVal::goingHighWithFull> goingHighWithFull{};
        }
        ///Control signal for differential input or single input
        enum class UsbeseaVal {
            reservedDoNotUse=0x00000000,     ///<Reserved. Do not use.
            singleInputAipEn=0x00000001,     ///<Single input AIP. Enables USB1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,UsbeseaVal> usbEsea{}; 
        namespace UsbeseaValC{
            constexpr Register::FieldValue<decltype(usbEsea),UsbeseaVal::reservedDoNotUse> reservedDoNotUse{};
            constexpr Register::FieldValue<decltype(usbEsea),UsbeseaVal::singleInputAipEn> singleInputAipEn{};
        }
    }
    namespace Nonesfsi2c0{    ///<Pin configuration register for I 2C0-bus pins
        using Addr = Register::Address<0x40086c84,0xfffffff8,0,unsigned>;
        ///Configures I2C0-bus speed for SDA0 pin
        enum class SdaehsVal {
            standardfastMode=0x00000000,     ///<Standard/Fast mode (400 kbit/s)
            highSpeedMode34=0x00000001,     ///<High-speed mode (3.4 Mbit/s)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SdaehsVal> sdaEhs{}; 
        namespace SdaehsValC{
            constexpr Register::FieldValue<decltype(sdaEhs),SdaehsVal::standardfastMode> standardfastMode{};
            constexpr Register::FieldValue<decltype(sdaEhs),SdaehsVal::highSpeedMode34> highSpeedMode34{};
        }
        ///Configures I2C0-bus speed for SCL0 pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sclEhs{}; 
        namespace SclehsValC{
        }
        ///Direction (only applies if SCL_EHS = 1)
        enum class SclecsVal {
            receive=0x00000000,     ///<Receive
            transmit=0x00000001,     ///<Transmit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SclecsVal> sclEcs{}; 
        namespace SclecsValC{
            constexpr Register::FieldValue<decltype(sclEcs),SclecsVal::receive> receive{};
            constexpr Register::FieldValue<decltype(sclEcs),SclecsVal::transmit> transmit{};
        }
    }
    namespace Noneemcdelayclk{    ///<EMC clock delay register
        using Addr = Register::Address<0x40086d00,0x88888888,0,unsigned>;
        ///Delay of the EXTBUS_CLK0 clock output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> clk0Delay{}; 
        namespace Clk0delayValC{
        }
        ///Delay of the EXTBUS_CLK0 clock output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> clk1Delay{}; 
        namespace Clk1delayValC{
        }
        ///Delay of the EXTBUS_CLK2 clock output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> clk2Delay{}; 
        namespace Clk2delayValC{
        }
        ///Delay of the EXTBUS_CLK3 clock output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> clk3Delay{}; 
        namespace Clk3delayValC{
        }
        ///Delay of the EXTBUS_CKEOUT0 clock enable output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> cke0Delay{}; 
        namespace Cke0delayValC{
        }
        ///Delay of the EXTBUS_CKEOUT1 clock enable output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> cke1Delay{}; 
        namespace Cke1delayValC{
        }
        ///Delay of the EXTBUS_CKEOUT2 clock enable output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> cke2Delay{}; 
        namespace Cke2delayValC{
        }
        ///Delay of the EXTBUS_CKEOUT3 clock enable output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> cke3Delay{}; 
        namespace Cke3delayValC{
        }
    }
    namespace Nonepintsel0{    ///<Pin interrupt select register for pin interrupts 0 to 3.
        using Addr = Register::Address<0x40086e00,0x00000000,0,unsigned>;
        ///Pint interrupt 0: Select the pin number within the GPIO port selected by the PORTSEL0 bit in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin0{}; 
        namespace Intpin0ValC{
        }
        ///Pin interrupt 0: Select the port for the pin number to be selected in the INTPIN0 bits of this register.
        enum class Portsel0Val {
            gpioPort0=0x00000000,     ///<GPIO Port 0
            gpioPort1=0x00000001,     ///<GPIO Port 1
            gpioPort2=0x00000002,     ///<GPIO Port 2
            gpioPort3=0x00000003,     ///<GPIO Port 3
            gpioPort4=0x00000004,     ///<GPIO Port 4
            gpioPort5=0x00000005,     ///<GPIO Port 5
            gpioPort6=0x00000006,     ///<GPIO Port 6
            gpioPort7=0x00000007,     ///<GPIO Port 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,Portsel0Val> portsel0{}; 
        namespace Portsel0ValC{
            constexpr Register::FieldValue<decltype(portsel0),Portsel0Val::gpioPort0> gpioPort0{};
            constexpr Register::FieldValue<decltype(portsel0),Portsel0Val::gpioPort1> gpioPort1{};
            constexpr Register::FieldValue<decltype(portsel0),Portsel0Val::gpioPort2> gpioPort2{};
            constexpr Register::FieldValue<decltype(portsel0),Portsel0Val::gpioPort3> gpioPort3{};
            constexpr Register::FieldValue<decltype(portsel0),Portsel0Val::gpioPort4> gpioPort4{};
            constexpr Register::FieldValue<decltype(portsel0),Portsel0Val::gpioPort5> gpioPort5{};
            constexpr Register::FieldValue<decltype(portsel0),Portsel0Val::gpioPort6> gpioPort6{};
            constexpr Register::FieldValue<decltype(portsel0),Portsel0Val::gpioPort7> gpioPort7{};
        }
        ///Pint interrupt 1: Select the pin number within the GPIO port selected by the PORTSEL1 bit in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> intpin1{}; 
        namespace Intpin1ValC{
        }
        ///Pin interrupt 1: Select the port for the pin number to be selected in the INTPIN1 bits of this register.
        enum class Portsel1Val {
            gpioPort0=0x00000000,     ///<GPIO Port 0
            gpioPort1=0x00000001,     ///<GPIO Port 1
            gpioPort2=0x00000002,     ///<GPIO Port 2
            gpioPort3=0x00000003,     ///<GPIO Port 3
            gpioPort4=0x00000004,     ///<GPIO Port 4
            gpioPort5=0x00000005,     ///<GPIO Port 5
            gpioPort6=0x00000006,     ///<GPIO Port 6
            gpioPort7=0x00000007,     ///<GPIO Port 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,Portsel1Val> portsel1{}; 
        namespace Portsel1ValC{
            constexpr Register::FieldValue<decltype(portsel1),Portsel1Val::gpioPort0> gpioPort0{};
            constexpr Register::FieldValue<decltype(portsel1),Portsel1Val::gpioPort1> gpioPort1{};
            constexpr Register::FieldValue<decltype(portsel1),Portsel1Val::gpioPort2> gpioPort2{};
            constexpr Register::FieldValue<decltype(portsel1),Portsel1Val::gpioPort3> gpioPort3{};
            constexpr Register::FieldValue<decltype(portsel1),Portsel1Val::gpioPort4> gpioPort4{};
            constexpr Register::FieldValue<decltype(portsel1),Portsel1Val::gpioPort5> gpioPort5{};
            constexpr Register::FieldValue<decltype(portsel1),Portsel1Val::gpioPort6> gpioPort6{};
            constexpr Register::FieldValue<decltype(portsel1),Portsel1Val::gpioPort7> gpioPort7{};
        }
        ///Pint interrupt 2: Select the pin number within the GPIO port selected by the PORTSEL2 bit in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> intpin2{}; 
        namespace Intpin2ValC{
        }
        ///Pin interrupt 2: Select the port for the pin number to be selected in the INTPIN2 bits of this register.
        enum class Portsel2Val {
            gpioPort0=0x00000000,     ///<GPIO Port 0
            gpioPort1=0x00000001,     ///<GPIO Port 1
            gpioPort2=0x00000002,     ///<GPIO Port 2
            gpioPort3=0x00000003,     ///<GPIO Port 3
            gpioPort4=0x00000004,     ///<GPIO Port 4
            gpioPort5=0x00000005,     ///<GPIO Port 5
            gpioPort6=0x00000006,     ///<GPIO Port 6
            gpioPort7=0x00000007,     ///<GPIO Port 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,Portsel2Val> portsel2{}; 
        namespace Portsel2ValC{
            constexpr Register::FieldValue<decltype(portsel2),Portsel2Val::gpioPort0> gpioPort0{};
            constexpr Register::FieldValue<decltype(portsel2),Portsel2Val::gpioPort1> gpioPort1{};
            constexpr Register::FieldValue<decltype(portsel2),Portsel2Val::gpioPort2> gpioPort2{};
            constexpr Register::FieldValue<decltype(portsel2),Portsel2Val::gpioPort3> gpioPort3{};
            constexpr Register::FieldValue<decltype(portsel2),Portsel2Val::gpioPort4> gpioPort4{};
            constexpr Register::FieldValue<decltype(portsel2),Portsel2Val::gpioPort5> gpioPort5{};
            constexpr Register::FieldValue<decltype(portsel2),Portsel2Val::gpioPort6> gpioPort6{};
            constexpr Register::FieldValue<decltype(portsel2),Portsel2Val::gpioPort7> gpioPort7{};
        }
        ///Pint interrupt 3: Select the pin number within the GPIO port selected by the PORTSEL3 bit in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> intpin3{}; 
        namespace Intpin3ValC{
        }
        ///Pin interrupt 3: Select the port for the pin number to be selected in the INTPIN3 bits of this register.
        enum class Portsel3Val {
            gpioPort0=0x00000000,     ///<GPIO Port 0
            gpioPort1=0x00000001,     ///<GPIO Port 1
            gpioPort2=0x00000002,     ///<GPIO Port 2
            gpioPort3=0x00000003,     ///<GPIO Port 3
            gpioPort4=0x00000004,     ///<GPIO Port 4
            gpioPort5=0x00000005,     ///<GPIO Port 5
            gpioPort6=0x00000006,     ///<GPIO Port 6
            gpioPort7=0x00000007,     ///<GPIO Port 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,Portsel3Val> portsel3{}; 
        namespace Portsel3ValC{
            constexpr Register::FieldValue<decltype(portsel3),Portsel3Val::gpioPort0> gpioPort0{};
            constexpr Register::FieldValue<decltype(portsel3),Portsel3Val::gpioPort1> gpioPort1{};
            constexpr Register::FieldValue<decltype(portsel3),Portsel3Val::gpioPort2> gpioPort2{};
            constexpr Register::FieldValue<decltype(portsel3),Portsel3Val::gpioPort3> gpioPort3{};
            constexpr Register::FieldValue<decltype(portsel3),Portsel3Val::gpioPort4> gpioPort4{};
            constexpr Register::FieldValue<decltype(portsel3),Portsel3Val::gpioPort5> gpioPort5{};
            constexpr Register::FieldValue<decltype(portsel3),Portsel3Val::gpioPort6> gpioPort6{};
            constexpr Register::FieldValue<decltype(portsel3),Portsel3Val::gpioPort7> gpioPort7{};
        }
    }
    namespace Nonepintsel1{    ///<Pin interrupt select register for pin interrupts 4 to 7.
        using Addr = Register::Address<0x40086e04,0x00000000,0,unsigned>;
        ///Pint interrupt 4: Select the pin number within the GPIO port selected by the PORTSEL4 bit in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin4{}; 
        namespace Intpin4ValC{
        }
        ///Pin interrupt 4: Select the port for the pin number to be selected in the INTPIN4 bits of this register.
        enum class Portsel4Val {
            gpioPort0=0x00000000,     ///<GPIO Port 0
            gpioPort1=0x00000001,     ///<GPIO Port 1
            gpioPort2=0x00000002,     ///<GPIO Port 2
            gpioPort3=0x00000003,     ///<GPIO Port 3
            gpioPort4=0x00000004,     ///<GPIO Port 4
            gpioPort5=0x00000005,     ///<GPIO Port 5
            gpioPort6=0x00000006,     ///<GPIO Port 6
            gpioPort7=0x00000007,     ///<GPIO Port 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,Portsel4Val> portsel4{}; 
        namespace Portsel4ValC{
            constexpr Register::FieldValue<decltype(portsel4),Portsel4Val::gpioPort0> gpioPort0{};
            constexpr Register::FieldValue<decltype(portsel4),Portsel4Val::gpioPort1> gpioPort1{};
            constexpr Register::FieldValue<decltype(portsel4),Portsel4Val::gpioPort2> gpioPort2{};
            constexpr Register::FieldValue<decltype(portsel4),Portsel4Val::gpioPort3> gpioPort3{};
            constexpr Register::FieldValue<decltype(portsel4),Portsel4Val::gpioPort4> gpioPort4{};
            constexpr Register::FieldValue<decltype(portsel4),Portsel4Val::gpioPort5> gpioPort5{};
            constexpr Register::FieldValue<decltype(portsel4),Portsel4Val::gpioPort6> gpioPort6{};
            constexpr Register::FieldValue<decltype(portsel4),Portsel4Val::gpioPort7> gpioPort7{};
        }
        ///Pint interrupt 5: Select the pin number within the GPIO port selected by the PORTSEL5 bit in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> intpin5{}; 
        namespace Intpin5ValC{
        }
        ///Pin interrupt 5: Select the port for the pin number to be selected in the INTPIN5 bits of this register.
        enum class Portsel5Val {
            gpioPort0=0x00000000,     ///<GPIO Port 0
            gpioPort1=0x00000001,     ///<GPIO Port 1
            gpioPort2=0x00000002,     ///<GPIO Port 2
            gpioPort3=0x00000003,     ///<GPIO Port 3
            gpioPort4=0x00000004,     ///<GPIO Port 4
            gpioPort5=0x00000005,     ///<GPIO Port 5
            gpioPort6=0x00000006,     ///<GPIO Port 6
            gpioPort7=0x00000007,     ///<GPIO Port 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,Portsel5Val> portsel5{}; 
        namespace Portsel5ValC{
            constexpr Register::FieldValue<decltype(portsel5),Portsel5Val::gpioPort0> gpioPort0{};
            constexpr Register::FieldValue<decltype(portsel5),Portsel5Val::gpioPort1> gpioPort1{};
            constexpr Register::FieldValue<decltype(portsel5),Portsel5Val::gpioPort2> gpioPort2{};
            constexpr Register::FieldValue<decltype(portsel5),Portsel5Val::gpioPort3> gpioPort3{};
            constexpr Register::FieldValue<decltype(portsel5),Portsel5Val::gpioPort4> gpioPort4{};
            constexpr Register::FieldValue<decltype(portsel5),Portsel5Val::gpioPort5> gpioPort5{};
            constexpr Register::FieldValue<decltype(portsel5),Portsel5Val::gpioPort6> gpioPort6{};
            constexpr Register::FieldValue<decltype(portsel5),Portsel5Val::gpioPort7> gpioPort7{};
        }
        ///Pint interrupt 6: Select the pin number within the GPIO port selected by the PORTSEL6 bit in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> intpin6{}; 
        namespace Intpin6ValC{
        }
        ///Pin interrupt 6: Select the port for the pin number to be selected in the INTPIN6 bits of this register.
        enum class Portsel6Val {
            gpioPort0=0x00000000,     ///<GPIO Port 0
            gpioPort1=0x00000001,     ///<GPIO Port 1
            gpioPort2=0x00000002,     ///<GPIO Port 2
            gpioPort3=0x00000003,     ///<GPIO Port 3
            gpioPort4=0x00000004,     ///<GPIO Port 4
            gpioPort5=0x00000005,     ///<GPIO Port 5
            gpioPort6=0x00000006,     ///<GPIO Port 6
            gpioPort7=0x00000007,     ///<GPIO Port 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,Portsel6Val> portsel6{}; 
        namespace Portsel6ValC{
            constexpr Register::FieldValue<decltype(portsel6),Portsel6Val::gpioPort0> gpioPort0{};
            constexpr Register::FieldValue<decltype(portsel6),Portsel6Val::gpioPort1> gpioPort1{};
            constexpr Register::FieldValue<decltype(portsel6),Portsel6Val::gpioPort2> gpioPort2{};
            constexpr Register::FieldValue<decltype(portsel6),Portsel6Val::gpioPort3> gpioPort3{};
            constexpr Register::FieldValue<decltype(portsel6),Portsel6Val::gpioPort4> gpioPort4{};
            constexpr Register::FieldValue<decltype(portsel6),Portsel6Val::gpioPort5> gpioPort5{};
            constexpr Register::FieldValue<decltype(portsel6),Portsel6Val::gpioPort6> gpioPort6{};
            constexpr Register::FieldValue<decltype(portsel6),Portsel6Val::gpioPort7> gpioPort7{};
        }
        ///Pint interrupt 7: Select the pin number within the GPIO port selected by the PORTSEL7 bit in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> intpin7{}; 
        namespace Intpin7ValC{
        }
        ///Pin interrupt 7: Select the port for the pin number to be selected in the INTPIN7 bits of this register.
        enum class Portsel7Val {
            gpioPort0=0x00000000,     ///<GPIO Port 0
            gpioPort1=0x00000001,     ///<GPIO Port 1
            gpioPort2=0x00000002,     ///<GPIO Port 2
            gpioPort3=0x00000003,     ///<GPIO Port 3
            gpioPort4=0x00000004,     ///<GPIO Port 4
            gpioPort5=0x00000005,     ///<GPIO Port 5
            gpioPort6=0x00000006,     ///<GPIO Port 6
            gpioPort7=0x00000007,     ///<GPIO Port 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,Portsel7Val> portsel7{}; 
        namespace Portsel7ValC{
            constexpr Register::FieldValue<decltype(portsel7),Portsel7Val::gpioPort0> gpioPort0{};
            constexpr Register::FieldValue<decltype(portsel7),Portsel7Val::gpioPort1> gpioPort1{};
            constexpr Register::FieldValue<decltype(portsel7),Portsel7Val::gpioPort2> gpioPort2{};
            constexpr Register::FieldValue<decltype(portsel7),Portsel7Val::gpioPort3> gpioPort3{};
            constexpr Register::FieldValue<decltype(portsel7),Portsel7Val::gpioPort4> gpioPort4{};
            constexpr Register::FieldValue<decltype(portsel7),Portsel7Val::gpioPort5> gpioPort5{};
            constexpr Register::FieldValue<decltype(portsel7),Portsel7Val::gpioPort6> gpioPort6{};
            constexpr Register::FieldValue<decltype(portsel7),Portsel7Val::gpioPort7> gpioPort7{};
        }
    }
}
