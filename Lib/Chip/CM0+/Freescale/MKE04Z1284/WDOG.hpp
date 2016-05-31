#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Watchdog timer
    namespace WdogCs1{    ///<Watchdog Control and Status Register 1
        using Addr = Register::Address<0x40052000,0xffffff00,0x00000000,unsigned char>;
        ///Stop Enable
        enum class StopVal {
            v0=0x00000000,     ///<Watchdog disabled in chip stop mode.
            v1=0x00000001,     ///<Watchdog enabled in chip stop mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StopVal> stop{}; 
        namespace StopValC{
            constexpr Register::FieldValue<decltype(stop)::Type,StopVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stop)::Type,StopVal::v1> v1{};
        }
        ///Wait Enable
        enum class WaitVal {
            v0=0x00000000,     ///<Watchdog disabled in chip wait mode.
            v1=0x00000001,     ///<Watchdog enabled in chip wait mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WaitVal> wait{}; 
        namespace WaitValC{
            constexpr Register::FieldValue<decltype(wait)::Type,WaitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wait)::Type,WaitVal::v1> v1{};
        }
        ///Debug Enable
        enum class DbgVal {
            v0=0x00000000,     ///<Watchdog disabled in chip debug mode.
            v1=0x00000001,     ///<Watchdog enabled in chip debug mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,DbgVal> dbg{}; 
        namespace DbgValC{
            constexpr Register::FieldValue<decltype(dbg)::Type,DbgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dbg)::Type,DbgVal::v1> v1{};
        }
        ///Watchdog Test
        enum class TstVal {
            v00=0x00000000,     ///<Watchdog test mode disabled.
            v01=0x00000001,     ///<Watchdog user mode enabled. (Watchdog test mode disabled.) After testing the watchdog, software should use this setting to indicate that the watchdog is functioning normally in user mode.
            v10=0x00000002,     ///<Watchdog test mode enabled, only the low byte is used. WDOG_CNTL is compared with WDOG_TOVALL.
            v11=0x00000003,     ///<Watchdog test mode enabled, only the high byte is used. WDOG_CNTH is compared with WDOG_TOVALH.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,TstVal> tst{}; 
        namespace TstValC{
            constexpr Register::FieldValue<decltype(tst)::Type,TstVal::v00> v00{};
            constexpr Register::FieldValue<decltype(tst)::Type,TstVal::v01> v01{};
            constexpr Register::FieldValue<decltype(tst)::Type,TstVal::v10> v10{};
            constexpr Register::FieldValue<decltype(tst)::Type,TstVal::v11> v11{};
        }
        ///Allow updates
        enum class UpdateVal {
            v0=0x00000000,     ///<Updates not allowed. After the initial configuration, the watchdog cannot be later modified without forcing a reset.
            v1=0x00000001,     ///<Updates allowed. Software can modify the watchdog configuration registers within 128 bus clocks after performing the unlock write sequence.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,UpdateVal> update{}; 
        namespace UpdateValC{
            constexpr Register::FieldValue<decltype(update)::Type,UpdateVal::v0> v0{};
            constexpr Register::FieldValue<decltype(update)::Type,UpdateVal::v1> v1{};
        }
        ///Watchdog Interrupt
        enum class Int_Val {
            v0=0x00000000,     ///<Watchdog interrupts are disabled. Watchdog resets are not delayed.
            v1=0x00000001,     ///<Watchdog interrupts are enabled. Watchdog resets are delayed by 128 bus clocks.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Int_Val> int_{}; 
        namespace Int_ValC{
            constexpr Register::FieldValue<decltype(int_)::Type,Int_Val::v0> v0{};
            constexpr Register::FieldValue<decltype(int_)::Type,Int_Val::v1> v1{};
        }
        ///Watchdog Enable
        enum class EnVal {
            v0=0x00000000,     ///<Watchdog disabled.
            v1=0x00000001,     ///<Watchdog enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnVal> en{}; 
        namespace EnValC{
            constexpr Register::FieldValue<decltype(en)::Type,EnVal::v0> v0{};
            constexpr Register::FieldValue<decltype(en)::Type,EnVal::v1> v1{};
        }
    }
    namespace WdogCs2{    ///<Watchdog Control and Status Register 2
        using Addr = Register::Address<0x40052001,0xffffff2c,0x00000000,unsigned char>;
        ///Watchdog Clock
        enum class ClkVal {
            v00=0x00000000,     ///<Bus clock.
            v01=0x00000001,     ///<1 kHz internal low-power oscillator (LPOCLK).
            v10=0x00000002,     ///<32 kHz internal oscillator (ICSIRCLK).
            v11=0x00000003,     ///<External clock source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ClkVal> clk{}; 
        namespace ClkValC{
            constexpr Register::FieldValue<decltype(clk)::Type,ClkVal::v00> v00{};
            constexpr Register::FieldValue<decltype(clk)::Type,ClkVal::v01> v01{};
            constexpr Register::FieldValue<decltype(clk)::Type,ClkVal::v10> v10{};
            constexpr Register::FieldValue<decltype(clk)::Type,ClkVal::v11> v11{};
        }
        ///Watchdog Prescalar
        enum class PresVal {
            v0=0x00000000,     ///<256 prescalar disabled.
            v1=0x00000001,     ///<256 prescalar enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PresVal> pres{}; 
        namespace PresValC{
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::v1> v1{};
        }
        ///Watchdog Interrupt Flag
        enum class FlgVal {
            v0=0x00000000,     ///<No interrupt occurred.
            v1=0x00000001,     ///<An interrupt occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,FlgVal> flg{}; 
        namespace FlgValC{
            constexpr Register::FieldValue<decltype(flg)::Type,FlgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(flg)::Type,FlgVal::v1> v1{};
        }
        ///Watchdog Window
        enum class WinVal {
            v0=0x00000000,     ///<Window mode disabled.
            v1=0x00000001,     ///<Window mode enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,WinVal> win{}; 
        namespace WinValC{
            constexpr Register::FieldValue<decltype(win)::Type,WinVal::v0> v0{};
            constexpr Register::FieldValue<decltype(win)::Type,WinVal::v1> v1{};
        }
    }
    namespace WdogCnt{    ///<Watchdog Counter Register.
        using Addr = Register::Address<0x40052002,0xffff0000,0x00000000,unsigned>;
        ///Watchdog Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace WdogCnth{    ///<Watchdog Counter Register: High
        using Addr = Register::Address<0x40052002,0xffffff00,0x00000000,unsigned char>;
        ///High byte of the Watchdog Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cnthigh{}; 
    }
    namespace WdogCntl{    ///<Watchdog Counter Register: Low
        using Addr = Register::Address<0x40052003,0xffffff00,0x00000000,unsigned char>;
        ///Low byte of the Watchdog Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cntlow{}; 
    }
    namespace WdogToval{    ///<Watchdog Timeout Value Register.
        using Addr = Register::Address<0x40052004,0xffff0000,0x00000000,unsigned>;
        ///Watchdog Timeout Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> toval{}; 
    }
    namespace WdogTovalh{    ///<Watchdog Timeout Value Register: High
        using Addr = Register::Address<0x40052004,0xffffff00,0x00000000,unsigned char>;
        ///High byte of the timeout value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tovalhigh{}; 
    }
    namespace WdogTovall{    ///<Watchdog Timeout Value Register: Low
        using Addr = Register::Address<0x40052005,0xffffff00,0x00000000,unsigned char>;
        ///Low byte of the timeout value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tovallow{}; 
    }
    namespace WdogWin{    ///<Watchdog Window Register.
        using Addr = Register::Address<0x40052006,0xffff0000,0x00000000,unsigned>;
        ///Watchdog Window Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> win{}; 
    }
    namespace WdogWinh{    ///<Watchdog Window Register: High
        using Addr = Register::Address<0x40052006,0xffffff00,0x00000000,unsigned char>;
        ///High byte of Watchdog Window
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> winhigh{}; 
    }
    namespace WdogWinl{    ///<Watchdog Window Register: Low
        using Addr = Register::Address<0x40052007,0xffffff00,0x00000000,unsigned char>;
        ///Low byte of Watchdog Window
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> winlow{}; 
    }
}
