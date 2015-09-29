#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx System Control Unit (SCU) Modification date=6/8/2011 Major revision=0 Minor revision=10 
    namespace Nonesfsp00{    ///<Pin configuration register for pins P0
        using Addr = Register::Address<0x40086000,0xffffff80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
    }
    namespace Nonesfsp01{    ///<Pin configuration register for pins P0
        using Addr = Register::Address<0x40086004,0xffffff80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
    }
    namespace Nonesfsp10{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x40086080,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp11{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x40086084,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp12{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x40086088,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp13{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x4008608c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp14{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x40086090,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp15{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x40086094,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp16{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x40086098,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp17{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x4008609c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp18{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860a0,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp19{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860a4,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp110{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860a8,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp111{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860ac,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp112{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860b0,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp113{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860b4,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp114{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860b8,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp115{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860bc,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp116{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860c0,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp117{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860c4,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp118{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860c8,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp119{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860cc,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp120{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860d0,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp20{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086100,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp21{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086104,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp22{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086108,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp23{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x4008610c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp24{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086110,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp25{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086114,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp26{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086118,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp27{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x4008611c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp28{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086120,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp29{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086124,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp210{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086128,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp211{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x4008612c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp212{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086130,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp213{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086134,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp30{    ///<Pin configuration register for pins P3
        using Addr = Register::Address<0x40086180,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp31{    ///<Pin configuration register for pins P3
        using Addr = Register::Address<0x40086184,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp32{    ///<Pin configuration register for pins P3
        using Addr = Register::Address<0x40086188,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp33{    ///<Pin configuration register for pins P3
        using Addr = Register::Address<0x4008618c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp34{    ///<Pin configuration register for pins P3
        using Addr = Register::Address<0x40086190,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp35{    ///<Pin configuration register for pins P3
        using Addr = Register::Address<0x40086194,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp36{    ///<Pin configuration register for pins P3
        using Addr = Register::Address<0x40086198,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp37{    ///<Pin configuration register for pins P3
        using Addr = Register::Address<0x4008619c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp38{    ///<Pin configuration register for pins P3
        using Addr = Register::Address<0x400861a0,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp40{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x40086200,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp41{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x40086204,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp42{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x40086208,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp43{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x4008620c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp44{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x40086210,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp45{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x40086214,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp46{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x40086218,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp47{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x4008621c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp48{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x40086220,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp49{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x40086224,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp410{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x40086228,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp50{    ///<Pin configuration register for pins P5
        using Addr = Register::Address<0x40086280,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp51{    ///<Pin configuration register for pins P5
        using Addr = Register::Address<0x40086284,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp52{    ///<Pin configuration register for pins P5
        using Addr = Register::Address<0x40086288,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp53{    ///<Pin configuration register for pins P5
        using Addr = Register::Address<0x4008628c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp54{    ///<Pin configuration register for pins P5
        using Addr = Register::Address<0x40086290,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp55{    ///<Pin configuration register for pins P5
        using Addr = Register::Address<0x40086294,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp56{    ///<Pin configuration register for pins P5
        using Addr = Register::Address<0x40086298,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp57{    ///<Pin configuration register for pins P5
        using Addr = Register::Address<0x4008629c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp60{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086300,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp61{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086304,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp62{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086308,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp63{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x4008630c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp64{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086310,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp65{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086314,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp66{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086318,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp67{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x4008631c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp68{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086320,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp69{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086324,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp610{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086328,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp611{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x4008632c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp612{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086330,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp70{    ///<Pin configuration register for pins P7
        using Addr = Register::Address<0x40086380,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp71{    ///<Pin configuration register for pins P7
        using Addr = Register::Address<0x40086384,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp72{    ///<Pin configuration register for pins P7
        using Addr = Register::Address<0x40086388,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp73{    ///<Pin configuration register for pins P7
        using Addr = Register::Address<0x4008638c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp74{    ///<Pin configuration register for pins P7
        using Addr = Register::Address<0x40086390,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp75{    ///<Pin configuration register for pins P7
        using Addr = Register::Address<0x40086394,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp76{    ///<Pin configuration register for pins P7
        using Addr = Register::Address<0x40086398,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp77{    ///<Pin configuration register for pins P7
        using Addr = Register::Address<0x4008639c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp80{    ///<Pin configuration register for pins P8
        using Addr = Register::Address<0x40086400,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp81{    ///<Pin configuration register for pins P8
        using Addr = Register::Address<0x40086404,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp82{    ///<Pin configuration register for pins P8
        using Addr = Register::Address<0x40086408,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp83{    ///<Pin configuration register for pins P8
        using Addr = Register::Address<0x4008640c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp84{    ///<Pin configuration register for pins P8
        using Addr = Register::Address<0x40086410,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp85{    ///<Pin configuration register for pins P8
        using Addr = Register::Address<0x40086414,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp86{    ///<Pin configuration register for pins P8
        using Addr = Register::Address<0x40086418,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp87{    ///<Pin configuration register for pins P8
        using Addr = Register::Address<0x4008641c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp88{    ///<Pin configuration register for pins P8
        using Addr = Register::Address<0x40086420,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp90{    ///<Pin configuration register for pins P9
        using Addr = Register::Address<0x40086480,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp91{    ///<Pin configuration register for pins P9
        using Addr = Register::Address<0x40086484,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp92{    ///<Pin configuration register for pins P9
        using Addr = Register::Address<0x40086488,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp93{    ///<Pin configuration register for pins P9
        using Addr = Register::Address<0x4008648c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp94{    ///<Pin configuration register for pins P9
        using Addr = Register::Address<0x40086490,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp95{    ///<Pin configuration register for pins P9
        using Addr = Register::Address<0x40086494,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsp96{    ///<Pin configuration register for pins P9
        using Addr = Register::Address<0x40086498,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspa0{    ///<Pin configuration register for pins PA
        using Addr = Register::Address<0x40086500,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspa1{    ///<Pin configuration register for pins PA
        using Addr = Register::Address<0x40086504,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspa2{    ///<Pin configuration register for pins PA
        using Addr = Register::Address<0x40086508,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspa3{    ///<Pin configuration register for pins PA
        using Addr = Register::Address<0x4008650c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspa4{    ///<Pin configuration register for pins PA
        using Addr = Register::Address<0x40086510,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspb0{    ///<Pin configuration register for pins PB
        using Addr = Register::Address<0x40086580,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspb1{    ///<Pin configuration register for pins PB
        using Addr = Register::Address<0x40086584,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspb2{    ///<Pin configuration register for pins PB
        using Addr = Register::Address<0x40086588,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspb3{    ///<Pin configuration register for pins PB
        using Addr = Register::Address<0x4008658c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspb4{    ///<Pin configuration register for pins PB
        using Addr = Register::Address<0x40086590,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspb5{    ///<Pin configuration register for pins PB
        using Addr = Register::Address<0x40086594,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspb6{    ///<Pin configuration register for pins PB
        using Addr = Register::Address<0x40086598,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspc0{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086600,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspc1{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086604,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspc2{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086608,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspc3{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x4008660c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspc4{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086610,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspc5{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086614,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspc6{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086618,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspc7{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x4008661c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspc8{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086620,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspc9{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086624,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspc10{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086628,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspc11{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x4008662c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspc12{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086630,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspc13{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086634,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspc14{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086638,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspd0{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x40086680,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspd1{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x40086684,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspd2{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x40086688,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspd3{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x4008668c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspd4{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x40086690,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspd5{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x40086694,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspd6{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x40086698,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspd7{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x4008669c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspd8{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x400866a0,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspd9{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x400866a4,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspd10{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x400866a8,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspd11{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x400866ac,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspd12{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x400866b0,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspd13{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x400866b4,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspd14{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x400866b8,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspd15{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x400866bc,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspd16{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x400866c0,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspe0{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086700,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspe1{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086704,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspe2{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086708,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspe3{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x4008670c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspe4{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086710,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspe5{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086714,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspe6{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086718,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspe7{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x4008671c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspe8{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086720,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspe9{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086724,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspe10{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086728,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspe11{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x4008672c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspe12{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086730,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspe13{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086734,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspe14{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086738,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspe15{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x4008673c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspf0{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x40086780,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspf1{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x40086784,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspf2{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x40086788,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspf3{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x4008678c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspf4{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x40086790,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspf5{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x40086794,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspf6{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x40086798,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspf7{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x4008679c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspf8{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x400867a0,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspf9{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x400867a4,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspf10{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x400867a8,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfspf11{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x400867ac,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsclk0{    ///<Pin configuration register for pins CLK
        using Addr = Register::Address<0x40086c00,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsclk1{    ///<Pin configuration register for pins CLK
        using Addr = Register::Address<0x40086c04,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsclk2{    ///<Pin configuration register for pins CLK
        using Addr = Register::Address<0x40086c08,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Nonesfsclk3{    ///<Pin configuration register for pins CLK
        using Addr = Register::Address<0x40086c0c,0xfffffc80,0,unsigned>;
        ///Select pin function
        enum class modeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::function0Default> function0Default{};
            constexpr MPL::Value<modeVal,modeVal::function1> function1{};
            constexpr MPL::Value<modeVal,modeVal::function2> function2{};
            constexpr MPL::Value<modeVal,modeVal::function3> function3{};
            constexpr MPL::Value<modeVal,modeVal::function4> function4{};
            constexpr MPL::Value<modeVal,modeVal::function5> function5{};
            constexpr MPL::Value<modeVal,modeVal::function6> function6{};
            constexpr MPL::Value<modeVal,modeVal::function7> function7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable pull-down resistor at pad
        enum class epdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        namespace epdValC{
            constexpr MPL::Value<epdVal,epdVal::disablePullDown> disablePullDown{};
            constexpr MPL::Value<epdVal,epdVal::enablePullDown> enablePullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,epdVal> epd{}; 
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class epunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        namespace epunValC{
            constexpr MPL::Value<epunVal,epunVal::enablePullUp> enablePullUp{};
            constexpr MPL::Value<epunVal,epunVal::disablePullUp> disablePullUp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,epunVal> epun{}; 
        ///Slew rate
        enum class ehsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        namespace ehsValC{
            constexpr MPL::Value<ehsVal,ehsVal::slow> slow{};
            constexpr MPL::Value<ehsVal,ehsVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ehsVal> ehs{}; 
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class eziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        namespace eziValC{
            constexpr MPL::Value<eziVal,eziVal::disableInputBuffer> disableInputBuffer{};
            constexpr MPL::Value<eziVal,eziVal::enableInputBuffer> enableInputBuffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,eziVal> ezi{}; 
        ///Select drive strength
        enum class ehdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        namespace ehdValC{
            constexpr MPL::Value<ehdVal,ehdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr MPL::Value<ehdVal,ehdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr MPL::Value<ehdVal,ehdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr MPL::Value<ehdVal,ehdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,ehdVal> ehd{}; 
    }
    namespace Noneenaio0{    ///<ADC0 function select register
        using Addr = Register::Address<0x40086c88,0xffffff80,0,unsigned>;
        ///Select ADC0_0
        enum class adc00Val {
            analogFunctionAdc0=0x00000000,     ///<Analog function ADC0_0 selected on pin P4_3.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin P4_3.
        };
        namespace adc00ValC{
            constexpr MPL::Value<adc00Val,adc00Val::analogFunctionAdc0> analogFunctionAdc0{};
            constexpr MPL::Value<adc00Val,adc00Val::digitalFunctionSel> digitalFunctionSel{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,adc00Val> adc00{}; 
        ///Select ADC0_1
        enum class adc01Val {
            analogFunctionAdc0=0x00000000,     ///<Analog function ADC0_1 selected on pin P4_1.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin P4_1.
        };
        namespace adc01ValC{
            constexpr MPL::Value<adc01Val,adc01Val::analogFunctionAdc0> analogFunctionAdc0{};
            constexpr MPL::Value<adc01Val,adc01Val::digitalFunctionSel> digitalFunctionSel{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,adc01Val> adc01{}; 
        ///Select ADC0_2
        enum class adc02Val {
            analogFunctionAdc0=0x00000000,     ///<Analog function ADC0_2 selected on pin PF_8.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PF_8.
        };
        namespace adc02ValC{
            constexpr MPL::Value<adc02Val,adc02Val::analogFunctionAdc0> analogFunctionAdc0{};
            constexpr MPL::Value<adc02Val,adc02Val::digitalFunctionSel> digitalFunctionSel{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,adc02Val> adc02{}; 
        ///Select ADC0_3
        enum class adc03Val {
            analogFunctionAdc0=0x00000000,     ///<Analog function ADC0_3 selected on pin P7_5.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin P7_5.
        };
        namespace adc03ValC{
            constexpr MPL::Value<adc03Val,adc03Val::analogFunctionAdc0> analogFunctionAdc0{};
            constexpr MPL::Value<adc03Val,adc03Val::digitalFunctionSel> digitalFunctionSel{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,adc03Val> adc03{}; 
        ///Select ADC0_4
        enum class adc04Val {
            analogFunctionAdc0=0x00000000,     ///<Analog function ADC0_4 selected on pin P7_4.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin P7_4.
        };
        namespace adc04ValC{
            constexpr MPL::Value<adc04Val,adc04Val::analogFunctionAdc0> analogFunctionAdc0{};
            constexpr MPL::Value<adc04Val,adc04Val::digitalFunctionSel> digitalFunctionSel{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,adc04Val> adc04{}; 
        ///Select ADC0_5
        enum class adc05Val {
            analogFunctionAdc0=0x00000000,     ///<Analog function ADC0_5 selected on pin PF_10.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PF_10.
        };
        namespace adc05ValC{
            constexpr MPL::Value<adc05Val,adc05Val::analogFunctionAdc0> analogFunctionAdc0{};
            constexpr MPL::Value<adc05Val,adc05Val::digitalFunctionSel> digitalFunctionSel{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,adc05Val> adc05{}; 
        ///Select ADC0_6
        enum class adc06Val {
            analogFunctionAdc0=0x00000000,     ///<Analog function ADC0_6 selected on pin PB_6.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PB_6.
        };
        namespace adc06ValC{
            constexpr MPL::Value<adc06Val,adc06Val::analogFunctionAdc0> analogFunctionAdc0{};
            constexpr MPL::Value<adc06Val,adc06Val::digitalFunctionSel> digitalFunctionSel{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,adc06Val> adc06{}; 
    }
    namespace Noneenaio1{    ///<ADC1 function select register
        using Addr = Register::Address<0x40086c8c,0xffffff00,0,unsigned>;
        ///Select ADC1_0
        enum class adc10Val {
            analogFunctionAdc1=0x00000000,     ///<Analog function ADC1_0 selected on pin PC_3.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PC_3.
        };
        namespace adc10ValC{
            constexpr MPL::Value<adc10Val,adc10Val::analogFunctionAdc1> analogFunctionAdc1{};
            constexpr MPL::Value<adc10Val,adc10Val::digitalFunctionSel> digitalFunctionSel{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,adc10Val> adc10{}; 
        ///Select ADC1_1
        enum class adc11Val {
            analogFunctionAdc1=0x00000000,     ///<Analog function ADC1_1 selected on pin PC_0.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PC_0.
        };
        namespace adc11ValC{
            constexpr MPL::Value<adc11Val,adc11Val::analogFunctionAdc1> analogFunctionAdc1{};
            constexpr MPL::Value<adc11Val,adc11Val::digitalFunctionSel> digitalFunctionSel{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,adc11Val> adc11{}; 
        ///Select ADC1_2
        enum class adc12Val {
            analogFunctionAdc1=0x00000000,     ///<Analog function ADC1_2 selected on pin PF_9.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PF_9.
        };
        namespace adc12ValC{
            constexpr MPL::Value<adc12Val,adc12Val::analogFunctionAdc1> analogFunctionAdc1{};
            constexpr MPL::Value<adc12Val,adc12Val::digitalFunctionSel> digitalFunctionSel{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,adc12Val> adc12{}; 
        ///Select ADC1_3
        enum class adc13Val {
            analogFunctionAdc1=0x00000000,     ///<Analog function ADC1_3 selected on pin PF_6.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PF_6.
        };
        namespace adc13ValC{
            constexpr MPL::Value<adc13Val,adc13Val::analogFunctionAdc1> analogFunctionAdc1{};
            constexpr MPL::Value<adc13Val,adc13Val::digitalFunctionSel> digitalFunctionSel{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,adc13Val> adc13{}; 
        ///Select ADC1_4
        enum class adc14Val {
            analogFunctionAdc1=0x00000000,     ///<Analog function ADC1_4 selected on pin PF_5.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PF_5.
        };
        namespace adc14ValC{
            constexpr MPL::Value<adc14Val,adc14Val::analogFunctionAdc1> analogFunctionAdc1{};
            constexpr MPL::Value<adc14Val,adc14Val::digitalFunctionSel> digitalFunctionSel{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,adc14Val> adc14{}; 
        ///Select ADC1_5
        enum class adc15Val {
            analogFunctionAdc1=0x00000000,     ///<Analog function ADC1_5 selected on pin PF_11.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PF_11.
        };
        namespace adc15ValC{
            constexpr MPL::Value<adc15Val,adc15Val::analogFunctionAdc1> analogFunctionAdc1{};
            constexpr MPL::Value<adc15Val,adc15Val::digitalFunctionSel> digitalFunctionSel{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,adc15Val> adc15{}; 
        ///Select ADC1_6
        enum class adc16Val {
            analogFunctionAdc1=0x00000000,     ///<Analog function ADC1_6 selected on pin P7_7.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin P7_7.
        };
        namespace adc16ValC{
            constexpr MPL::Value<adc16Val,adc16Val::analogFunctionAdc1> analogFunctionAdc1{};
            constexpr MPL::Value<adc16Val,adc16Val::digitalFunctionSel> digitalFunctionSel{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,adc16Val> adc16{}; 
        ///Select ADC1_7
        enum class adc17Val {
            analogFunctionAdc1=0x00000000,     ///<Analog function ADC1_7 selected on pin PF_7.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PF_7.
        };
        namespace adc17ValC{
            constexpr MPL::Value<adc17Val,adc17Val::analogFunctionAdc1> analogFunctionAdc1{};
            constexpr MPL::Value<adc17Val,adc17Val::digitalFunctionSel> digitalFunctionSel{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,adc17Val> adc17{}; 
    }
    namespace Noneenaio2{    ///<Analog function select register
        using Addr = Register::Address<0x40086c90,0xffffffee,0,unsigned>;
        ///Select DAC
        enum class dacVal {
            analogFunctionDac=0x00000000,     ///<Analog function DAC selected on pin P4_4.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin P4_4.
        };
        namespace dacValC{
            constexpr MPL::Value<dacVal,dacVal::analogFunctionDac> analogFunctionDac{};
            constexpr MPL::Value<dacVal,dacVal::digitalFunctionSel> digitalFunctionSel{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dacVal> dac{}; 
        ///Select bandgap output
        enum class bgVal {
            bandgapOutputSelec=0x00000000,     ///<Bandgap output selected for pin PF_7.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PF_7.
        };
        namespace bgValC{
            constexpr MPL::Value<bgVal,bgVal::bandgapOutputSelec> bandgapOutputSelec{};
            constexpr MPL::Value<bgVal,bgVal::digitalFunctionSel> digitalFunctionSel{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bgVal> bg{}; 
    }
    namespace Nonesfsusb{    ///<Pin configuration register for
        using Addr = Register::Address<0x40086c80,0xfffffffc,0,unsigned>;
        ///Differential data input AIP/AIM  0 = Going LOW with full speed edge rate 1 = Going HIGH with full speed edge rate
        enum class usbAimVal {
            goingLowWithFull=0x00000000,     ///<Going LOW with full speed edge rate
            goingHighWithFull=0x00000001,     ///<Going HIGH with full speed edge rate
        };
        namespace usbAimValC{
            constexpr MPL::Value<usbAimVal,usbAimVal::goingLowWithFull> goingLowWithFull{};
            constexpr MPL::Value<usbAimVal,usbAimVal::goingHighWithFull> goingHighWithFull{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,usbAimVal> usbAim{}; 
        ///Control signal for differential input or single input
        enum class usbEseaVal {
            reservedDoNotUse=0x00000000,     ///<Reserved. Do not use.
            singleInputAipEn=0x00000001,     ///<Single input AIP. Enables USB1.
        };
        namespace usbEseaValC{
            constexpr MPL::Value<usbEseaVal,usbEseaVal::reservedDoNotUse> reservedDoNotUse{};
            constexpr MPL::Value<usbEseaVal,usbEseaVal::singleInputAipEn> singleInputAipEn{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,usbEseaVal> usbEsea{}; 
    }
    namespace Nonesfsi2c0{    ///<Pin configuration register for I 2C0-bus pins
        using Addr = Register::Address<0x40086c84,0xfffffff8,0,unsigned>;
        ///Configures I2C0-bus speed for SDA0 pin
        enum class sdaEhsVal {
            standardfastMode=0x00000000,     ///<Standard/Fast mode (400 kbit/s)
            highSpeedMode34=0x00000001,     ///<High-speed mode (3.4 Mbit/s)
        };
        namespace sdaEhsValC{
            constexpr MPL::Value<sdaEhsVal,sdaEhsVal::standardfastMode> standardfastMode{};
            constexpr MPL::Value<sdaEhsVal,sdaEhsVal::highSpeedMode34> highSpeedMode34{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,sdaEhsVal> sdaEhs{}; 
        ///Configures I2C0-bus speed for SCL0 pin
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sclEhs{}; 
        ///Direction (only applies if SCL_EHS = 1)
        enum class sclEcsVal {
            receive=0x00000000,     ///<Receive
            transmit=0x00000001,     ///<Transmit
        };
        namespace sclEcsValC{
            constexpr MPL::Value<sclEcsVal,sclEcsVal::receive> receive{};
            constexpr MPL::Value<sclEcsVal,sclEcsVal::transmit> transmit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sclEcsVal> sclEcs{}; 
    }
    namespace Noneemcdelayclk{    ///<EMC clock delay register
        using Addr = Register::Address<0x40086d00,0x88888888,0,unsigned>;
        ///Delay of the EXTBUS_CLK0 clock output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> clk0Delay{}; 
        ///Delay of the EXTBUS_CLK0 clock output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> clk1Delay{}; 
        ///Delay of the EXTBUS_CLK2 clock output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> clk2Delay{}; 
        ///Delay of the EXTBUS_CLK3 clock output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> clk3Delay{}; 
        ///Delay of the EXTBUS_CKEOUT0 clock enable output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> cke0Delay{}; 
        ///Delay of the EXTBUS_CKEOUT1 clock enable output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> cke1Delay{}; 
        ///Delay of the EXTBUS_CKEOUT2 clock enable output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> cke2Delay{}; 
        ///Delay of the EXTBUS_CKEOUT3 clock enable output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> cke3Delay{}; 
    }
    namespace Nonepintsel0{    ///<Pin interrupt select register for pin interrupts 0 to 3.
        using Addr = Register::Address<0x40086e00,0x00000000,0,unsigned>;
        ///Pint interrupt 0: Select the pin number within the GPIO port selected by the PORTSEL0 bit in this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin0{}; 
        ///Pin interrupt 0: Select the port for the pin number to be selected in the INTPIN0 bits of this register.
        enum class portsel0Val {
            gpioPort0=0x00000000,     ///<GPIO Port 0
            gpioPort1=0x00000001,     ///<GPIO Port 1
            gpioPort2=0x00000002,     ///<GPIO Port 2
            gpioPort3=0x00000003,     ///<GPIO Port 3
            gpioPort4=0x00000004,     ///<GPIO Port 4
            gpioPort5=0x00000005,     ///<GPIO Port 5
            gpioPort6=0x00000006,     ///<GPIO Port 6
            gpioPort7=0x00000007,     ///<GPIO Port 7
        };
        namespace portsel0ValC{
            constexpr MPL::Value<portsel0Val,portsel0Val::gpioPort0> gpioPort0{};
            constexpr MPL::Value<portsel0Val,portsel0Val::gpioPort1> gpioPort1{};
            constexpr MPL::Value<portsel0Val,portsel0Val::gpioPort2> gpioPort2{};
            constexpr MPL::Value<portsel0Val,portsel0Val::gpioPort3> gpioPort3{};
            constexpr MPL::Value<portsel0Val,portsel0Val::gpioPort4> gpioPort4{};
            constexpr MPL::Value<portsel0Val,portsel0Val::gpioPort5> gpioPort5{};
            constexpr MPL::Value<portsel0Val,portsel0Val::gpioPort6> gpioPort6{};
            constexpr MPL::Value<portsel0Val,portsel0Val::gpioPort7> gpioPort7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,portsel0Val> portsel0{}; 
        ///Pint interrupt 1: Select the pin number within the GPIO port selected by the PORTSEL1 bit in this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> intpin1{}; 
        ///Pin interrupt 1: Select the port for the pin number to be selected in the INTPIN1 bits of this register.
        enum class portsel1Val {
            gpioPort0=0x00000000,     ///<GPIO Port 0
            gpioPort1=0x00000001,     ///<GPIO Port 1
            gpioPort2=0x00000002,     ///<GPIO Port 2
            gpioPort3=0x00000003,     ///<GPIO Port 3
            gpioPort4=0x00000004,     ///<GPIO Port 4
            gpioPort5=0x00000005,     ///<GPIO Port 5
            gpioPort6=0x00000006,     ///<GPIO Port 6
            gpioPort7=0x00000007,     ///<GPIO Port 7
        };
        namespace portsel1ValC{
            constexpr MPL::Value<portsel1Val,portsel1Val::gpioPort0> gpioPort0{};
            constexpr MPL::Value<portsel1Val,portsel1Val::gpioPort1> gpioPort1{};
            constexpr MPL::Value<portsel1Val,portsel1Val::gpioPort2> gpioPort2{};
            constexpr MPL::Value<portsel1Val,portsel1Val::gpioPort3> gpioPort3{};
            constexpr MPL::Value<portsel1Val,portsel1Val::gpioPort4> gpioPort4{};
            constexpr MPL::Value<portsel1Val,portsel1Val::gpioPort5> gpioPort5{};
            constexpr MPL::Value<portsel1Val,portsel1Val::gpioPort6> gpioPort6{};
            constexpr MPL::Value<portsel1Val,portsel1Val::gpioPort7> gpioPort7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,portsel1Val> portsel1{}; 
        ///Pint interrupt 2: Select the pin number within the GPIO port selected by the PORTSEL2 bit in this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> intpin2{}; 
        ///Pin interrupt 2: Select the port for the pin number to be selected in the INTPIN2 bits of this register.
        enum class portsel2Val {
            gpioPort0=0x00000000,     ///<GPIO Port 0
            gpioPort1=0x00000001,     ///<GPIO Port 1
            gpioPort2=0x00000002,     ///<GPIO Port 2
            gpioPort3=0x00000003,     ///<GPIO Port 3
            gpioPort4=0x00000004,     ///<GPIO Port 4
            gpioPort5=0x00000005,     ///<GPIO Port 5
            gpioPort6=0x00000006,     ///<GPIO Port 6
            gpioPort7=0x00000007,     ///<GPIO Port 7
        };
        namespace portsel2ValC{
            constexpr MPL::Value<portsel2Val,portsel2Val::gpioPort0> gpioPort0{};
            constexpr MPL::Value<portsel2Val,portsel2Val::gpioPort1> gpioPort1{};
            constexpr MPL::Value<portsel2Val,portsel2Val::gpioPort2> gpioPort2{};
            constexpr MPL::Value<portsel2Val,portsel2Val::gpioPort3> gpioPort3{};
            constexpr MPL::Value<portsel2Val,portsel2Val::gpioPort4> gpioPort4{};
            constexpr MPL::Value<portsel2Val,portsel2Val::gpioPort5> gpioPort5{};
            constexpr MPL::Value<portsel2Val,portsel2Val::gpioPort6> gpioPort6{};
            constexpr MPL::Value<portsel2Val,portsel2Val::gpioPort7> gpioPort7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,portsel2Val> portsel2{}; 
        ///Pint interrupt 3: Select the pin number within the GPIO port selected by the PORTSEL3 bit in this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> intpin3{}; 
        ///Pin interrupt 3: Select the port for the pin number to be selected in the INTPIN3 bits of this register.
        enum class portsel3Val {
            gpioPort0=0x00000000,     ///<GPIO Port 0
            gpioPort1=0x00000001,     ///<GPIO Port 1
            gpioPort2=0x00000002,     ///<GPIO Port 2
            gpioPort3=0x00000003,     ///<GPIO Port 3
            gpioPort4=0x00000004,     ///<GPIO Port 4
            gpioPort5=0x00000005,     ///<GPIO Port 5
            gpioPort6=0x00000006,     ///<GPIO Port 6
            gpioPort7=0x00000007,     ///<GPIO Port 7
        };
        namespace portsel3ValC{
            constexpr MPL::Value<portsel3Val,portsel3Val::gpioPort0> gpioPort0{};
            constexpr MPL::Value<portsel3Val,portsel3Val::gpioPort1> gpioPort1{};
            constexpr MPL::Value<portsel3Val,portsel3Val::gpioPort2> gpioPort2{};
            constexpr MPL::Value<portsel3Val,portsel3Val::gpioPort3> gpioPort3{};
            constexpr MPL::Value<portsel3Val,portsel3Val::gpioPort4> gpioPort4{};
            constexpr MPL::Value<portsel3Val,portsel3Val::gpioPort5> gpioPort5{};
            constexpr MPL::Value<portsel3Val,portsel3Val::gpioPort6> gpioPort6{};
            constexpr MPL::Value<portsel3Val,portsel3Val::gpioPort7> gpioPort7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,portsel3Val> portsel3{}; 
    }
    namespace Nonepintsel1{    ///<Pin interrupt select register for pin interrupts 4 to 7.
        using Addr = Register::Address<0x40086e04,0x00000000,0,unsigned>;
        ///Pint interrupt 4: Select the pin number within the GPIO port selected by the PORTSEL4 bit in this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin4{}; 
        ///Pin interrupt 4: Select the port for the pin number to be selected in the INTPIN4 bits of this register.
        enum class portsel4Val {
            gpioPort0=0x00000000,     ///<GPIO Port 0
            gpioPort1=0x00000001,     ///<GPIO Port 1
            gpioPort2=0x00000002,     ///<GPIO Port 2
            gpioPort3=0x00000003,     ///<GPIO Port 3
            gpioPort4=0x00000004,     ///<GPIO Port 4
            gpioPort5=0x00000005,     ///<GPIO Port 5
            gpioPort6=0x00000006,     ///<GPIO Port 6
            gpioPort7=0x00000007,     ///<GPIO Port 7
        };
        namespace portsel4ValC{
            constexpr MPL::Value<portsel4Val,portsel4Val::gpioPort0> gpioPort0{};
            constexpr MPL::Value<portsel4Val,portsel4Val::gpioPort1> gpioPort1{};
            constexpr MPL::Value<portsel4Val,portsel4Val::gpioPort2> gpioPort2{};
            constexpr MPL::Value<portsel4Val,portsel4Val::gpioPort3> gpioPort3{};
            constexpr MPL::Value<portsel4Val,portsel4Val::gpioPort4> gpioPort4{};
            constexpr MPL::Value<portsel4Val,portsel4Val::gpioPort5> gpioPort5{};
            constexpr MPL::Value<portsel4Val,portsel4Val::gpioPort6> gpioPort6{};
            constexpr MPL::Value<portsel4Val,portsel4Val::gpioPort7> gpioPort7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,portsel4Val> portsel4{}; 
        ///Pint interrupt 5: Select the pin number within the GPIO port selected by the PORTSEL5 bit in this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> intpin5{}; 
        ///Pin interrupt 5: Select the port for the pin number to be selected in the INTPIN5 bits of this register.
        enum class portsel5Val {
            gpioPort0=0x00000000,     ///<GPIO Port 0
            gpioPort1=0x00000001,     ///<GPIO Port 1
            gpioPort2=0x00000002,     ///<GPIO Port 2
            gpioPort3=0x00000003,     ///<GPIO Port 3
            gpioPort4=0x00000004,     ///<GPIO Port 4
            gpioPort5=0x00000005,     ///<GPIO Port 5
            gpioPort6=0x00000006,     ///<GPIO Port 6
            gpioPort7=0x00000007,     ///<GPIO Port 7
        };
        namespace portsel5ValC{
            constexpr MPL::Value<portsel5Val,portsel5Val::gpioPort0> gpioPort0{};
            constexpr MPL::Value<portsel5Val,portsel5Val::gpioPort1> gpioPort1{};
            constexpr MPL::Value<portsel5Val,portsel5Val::gpioPort2> gpioPort2{};
            constexpr MPL::Value<portsel5Val,portsel5Val::gpioPort3> gpioPort3{};
            constexpr MPL::Value<portsel5Val,portsel5Val::gpioPort4> gpioPort4{};
            constexpr MPL::Value<portsel5Val,portsel5Val::gpioPort5> gpioPort5{};
            constexpr MPL::Value<portsel5Val,portsel5Val::gpioPort6> gpioPort6{};
            constexpr MPL::Value<portsel5Val,portsel5Val::gpioPort7> gpioPort7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,portsel5Val> portsel5{}; 
        ///Pint interrupt 6: Select the pin number within the GPIO port selected by the PORTSEL6 bit in this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> intpin6{}; 
        ///Pin interrupt 6: Select the port for the pin number to be selected in the INTPIN6 bits of this register.
        enum class portsel6Val {
            gpioPort0=0x00000000,     ///<GPIO Port 0
            gpioPort1=0x00000001,     ///<GPIO Port 1
            gpioPort2=0x00000002,     ///<GPIO Port 2
            gpioPort3=0x00000003,     ///<GPIO Port 3
            gpioPort4=0x00000004,     ///<GPIO Port 4
            gpioPort5=0x00000005,     ///<GPIO Port 5
            gpioPort6=0x00000006,     ///<GPIO Port 6
            gpioPort7=0x00000007,     ///<GPIO Port 7
        };
        namespace portsel6ValC{
            constexpr MPL::Value<portsel6Val,portsel6Val::gpioPort0> gpioPort0{};
            constexpr MPL::Value<portsel6Val,portsel6Val::gpioPort1> gpioPort1{};
            constexpr MPL::Value<portsel6Val,portsel6Val::gpioPort2> gpioPort2{};
            constexpr MPL::Value<portsel6Val,portsel6Val::gpioPort3> gpioPort3{};
            constexpr MPL::Value<portsel6Val,portsel6Val::gpioPort4> gpioPort4{};
            constexpr MPL::Value<portsel6Val,portsel6Val::gpioPort5> gpioPort5{};
            constexpr MPL::Value<portsel6Val,portsel6Val::gpioPort6> gpioPort6{};
            constexpr MPL::Value<portsel6Val,portsel6Val::gpioPort7> gpioPort7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,portsel6Val> portsel6{}; 
        ///Pint interrupt 7: Select the pin number within the GPIO port selected by the PORTSEL7 bit in this register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> intpin7{}; 
        ///Pin interrupt 7: Select the port for the pin number to be selected in the INTPIN7 bits of this register.
        enum class portsel7Val {
            gpioPort0=0x00000000,     ///<GPIO Port 0
            gpioPort1=0x00000001,     ///<GPIO Port 1
            gpioPort2=0x00000002,     ///<GPIO Port 2
            gpioPort3=0x00000003,     ///<GPIO Port 3
            gpioPort4=0x00000004,     ///<GPIO Port 4
            gpioPort5=0x00000005,     ///<GPIO Port 5
            gpioPort6=0x00000006,     ///<GPIO Port 6
            gpioPort7=0x00000007,     ///<GPIO Port 7
        };
        namespace portsel7ValC{
            constexpr MPL::Value<portsel7Val,portsel7Val::gpioPort0> gpioPort0{};
            constexpr MPL::Value<portsel7Val,portsel7Val::gpioPort1> gpioPort1{};
            constexpr MPL::Value<portsel7Val,portsel7Val::gpioPort2> gpioPort2{};
            constexpr MPL::Value<portsel7Val,portsel7Val::gpioPort3> gpioPort3{};
            constexpr MPL::Value<portsel7Val,portsel7Val::gpioPort4> gpioPort4{};
            constexpr MPL::Value<portsel7Val,portsel7Val::gpioPort5> gpioPort5{};
            constexpr MPL::Value<portsel7Val,portsel7Val::gpioPort6> gpioPort6{};
            constexpr MPL::Value<portsel7Val,portsel7Val::gpioPort7> gpioPort7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,portsel7Val> portsel7{}; 
    }
}
