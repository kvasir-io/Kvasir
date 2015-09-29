#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Watchdog timer
    namespace WdogCs1{    ///<Watchdog Control and Status Register 1
        using Addr = Register::Address<0x40052000,0xffffff00,0,unsigned char>;
        ///Stop Enable
        enum class stopVal {
            v0=0x00000000,     ///<Watchdog disabled in chip stop mode.
            v1=0x00000001,     ///<Watchdog enabled in chip stop mode.
        };
        namespace stopValC{
            constexpr MPL::Value<stopVal,stopVal::v0> v0{};
            constexpr MPL::Value<stopVal,stopVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,stopVal> stop{}; 
        ///Wait Enable
        enum class waitVal {
            v0=0x00000000,     ///<Watchdog disabled in chip wait mode.
            v1=0x00000001,     ///<Watchdog enabled in chip wait mode.
        };
        namespace waitValC{
            constexpr MPL::Value<waitVal,waitVal::v0> v0{};
            constexpr MPL::Value<waitVal,waitVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,waitVal> wait{}; 
        ///Debug Enable
        enum class dbgVal {
            v0=0x00000000,     ///<Watchdog disabled in chip debug mode.
            v1=0x00000001,     ///<Watchdog enabled in chip debug mode.
        };
        namespace dbgValC{
            constexpr MPL::Value<dbgVal,dbgVal::v0> v0{};
            constexpr MPL::Value<dbgVal,dbgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,dbgVal> dbg{}; 
        ///Watchdog Test
        enum class tstVal {
            v00=0x00000000,     ///<Watchdog test mode disabled.
            v01=0x00000001,     ///<Watchdog user mode enabled. (Watchdog test mode disabled.) After testing the watchdog, software should use this setting to indicate that the watchdog is functioning normally in user mode.
            v10=0x00000002,     ///<Watchdog test mode enabled, only the low byte is used. WDOG_CNTL is compared with WDOG_TOVALL.
            v11=0x00000003,     ///<Watchdog test mode enabled, only the high byte is used. WDOG_CNTH is compared with WDOG_TOVALH.
        };
        namespace tstValC{
            constexpr MPL::Value<tstVal,tstVal::v00> v00{};
            constexpr MPL::Value<tstVal,tstVal::v01> v01{};
            constexpr MPL::Value<tstVal,tstVal::v10> v10{};
            constexpr MPL::Value<tstVal,tstVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,tstVal> tst{}; 
        ///Allow updates
        enum class updateVal {
            v0=0x00000000,     ///<Updates not allowed. After the initial configuration, the watchdog cannot be later modified without forcing a reset.
            v1=0x00000001,     ///<Updates allowed. Software can modify the watchdog configuration registers within 128 bus clocks after performing the unlock write sequence.
        };
        namespace updateValC{
            constexpr MPL::Value<updateVal,updateVal::v0> v0{};
            constexpr MPL::Value<updateVal,updateVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,updateVal> update{}; 
        ///Watchdog Interrupt
        enum class int_Val {
            v0=0x00000000,     ///<Watchdog interrupts are disabled. Watchdog resets are not delayed.
            v1=0x00000001,     ///<Watchdog interrupts are enabled. Watchdog resets are delayed by 128 bus clocks.
        };
        namespace int_ValC{
            constexpr MPL::Value<int_Val,int_Val::v0> v0{};
            constexpr MPL::Value<int_Val,int_Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,int_Val> int_{}; 
        ///Watchdog Enable
        enum class enVal {
            v0=0x00000000,     ///<Watchdog disabled.
            v1=0x00000001,     ///<Watchdog enabled.
        };
        namespace enValC{
            constexpr MPL::Value<enVal,enVal::v0> v0{};
            constexpr MPL::Value<enVal,enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,enVal> en{}; 
    }
    namespace WdogCs2{    ///<Watchdog Control and Status Register 2
        using Addr = Register::Address<0x40052001,0xffffff2c,0,unsigned char>;
        ///Watchdog Clock
        enum class clkVal {
            v00=0x00000000,     ///<Bus clock.
            v01=0x00000001,     ///<1 kHz internal low-power oscillator (LPOCLK).
            v10=0x00000002,     ///<32 kHz internal oscillator (ICSIRCLK).
            v11=0x00000003,     ///<External clock source.
        };
        namespace clkValC{
            constexpr MPL::Value<clkVal,clkVal::v00> v00{};
            constexpr MPL::Value<clkVal,clkVal::v01> v01{};
            constexpr MPL::Value<clkVal,clkVal::v10> v10{};
            constexpr MPL::Value<clkVal,clkVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,clkVal> clk{}; 
        ///Watchdog Prescalar
        enum class presVal {
            v0=0x00000000,     ///<256 prescalar disabled.
            v1=0x00000001,     ///<256 prescalar enabled.
        };
        namespace presValC{
            constexpr MPL::Value<presVal,presVal::v0> v0{};
            constexpr MPL::Value<presVal,presVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,presVal> pres{}; 
        ///Watchdog Interrupt Flag
        enum class flgVal {
            v0=0x00000000,     ///<No interrupt occurred.
            v1=0x00000001,     ///<An interrupt occurred.
        };
        namespace flgValC{
            constexpr MPL::Value<flgVal,flgVal::v0> v0{};
            constexpr MPL::Value<flgVal,flgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,flgVal> flg{}; 
        ///Watchdog Window
        enum class winVal {
            v0=0x00000000,     ///<Window mode disabled.
            v1=0x00000001,     ///<Window mode enabled.
        };
        namespace winValC{
            constexpr MPL::Value<winVal,winVal::v0> v0{};
            constexpr MPL::Value<winVal,winVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,winVal> win{}; 
    }
    namespace WdogCnt{    ///<Watchdog Counter Register.
        using Addr = Register::Address<0x40052002,0xffff0000,0,unsigned>;
        ///Watchdog Counter Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace WdogCnth{    ///<Watchdog Counter Register: High
        using Addr = Register::Address<0x40052002,0xffffff00,0,unsigned char>;
        ///High byte of the Watchdog Counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cnthigh{}; 
    }
    namespace WdogCntl{    ///<Watchdog Counter Register: Low
        using Addr = Register::Address<0x40052003,0xffffff00,0,unsigned char>;
        ///Low byte of the Watchdog Counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cntlow{}; 
    }
    namespace WdogToval{    ///<Watchdog Timeout Value Register.
        using Addr = Register::Address<0x40052004,0xffff0000,0,unsigned>;
        ///Watchdog Timeout Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> toval{}; 
    }
    namespace WdogTovalh{    ///<Watchdog Timeout Value Register: High
        using Addr = Register::Address<0x40052004,0xffffff00,0,unsigned char>;
        ///High byte of the timeout value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tovalhigh{}; 
    }
    namespace WdogTovall{    ///<Watchdog Timeout Value Register: Low
        using Addr = Register::Address<0x40052005,0xffffff00,0,unsigned char>;
        ///Low byte of the timeout value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tovallow{}; 
    }
    namespace WdogWin{    ///<Watchdog Window Register.
        using Addr = Register::Address<0x40052006,0xffff0000,0,unsigned>;
        ///Watchdog Window Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> win{}; 
    }
    namespace WdogWinh{    ///<Watchdog Window Register: High
        using Addr = Register::Address<0x40052006,0xffffff00,0,unsigned char>;
        ///High byte of Watchdog Window
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> winhigh{}; 
    }
    namespace WdogWinl{    ///<Watchdog Window Register: Low
        using Addr = Register::Address<0x40052007,0xffffff00,0,unsigned char>;
        ///Low byte of Watchdog Window
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> winlow{}; 
    }
}
