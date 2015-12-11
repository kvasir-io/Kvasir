#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Secure Real Time Clock
    namespace RtcTsr{    ///<RTC Time Seconds Register
        using Addr = Register::Address<0x4003d000,0x00000000,0,unsigned>;
        ///Time Seconds Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsr{}; 
    }
    namespace RtcTpr{    ///<RTC Time Prescaler Register
        using Addr = Register::Address<0x4003d004,0xffff0000,0,unsigned>;
        ///Time Prescaler Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tpr{}; 
    }
    namespace RtcTar{    ///<RTC Time Alarm Register
        using Addr = Register::Address<0x4003d008,0x00000000,0,unsigned>;
        ///Time Alarm Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tar{}; 
    }
    namespace RtcTcr{    ///<RTC Time Compensation Register
        using Addr = Register::Address<0x4003d00c,0x00000000,0,unsigned>;
        ///Time Compensation Register
        enum class TcrVal {
            v10000000=0x00000080,     ///<Time prescaler register overflows every 32896 clock cycles.
            v11111111=0x000000ff,     ///<Time prescaler register overflows every 32769 clock cycles.
            v0=0x00000000,     ///<Time prescaler register overflows every 32768 clock cycles.
            v1=0x00000001,     ///<Time prescaler register overflows every 32767 clock cycles.
            v1111111=0x0000007f,     ///<Time prescaler register overflows every 32641 clock cycles.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,TcrVal> tcr{}; 
        namespace TcrValC{
            constexpr Register::FieldValue<decltype(tcr)::Type,TcrVal::v10000000> v10000000{};
            constexpr Register::FieldValue<decltype(tcr)::Type,TcrVal::v11111111> v11111111{};
            constexpr Register::FieldValue<decltype(tcr)::Type,TcrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tcr)::Type,TcrVal::v1> v1{};
            constexpr Register::FieldValue<decltype(tcr)::Type,TcrVal::v1111111> v1111111{};
        }
        }
        ///Compensation Interval Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> cir{}; 
        ///Time Compensation Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> tcv{}; 
        ///Compensation Interval Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> cic{}; 
    }
    namespace RtcCr{    ///<RTC Control Register
        using Addr = Register::Address<0x4003d010,0xffffc0f0,0,unsigned>;
        ///Software Reset
        enum class SwrVal {
            v0=0x00000000,     ///<No effect
            v1=0x00000001,     ///<Resets all RTC registers except for the SWR bit and the RTC_WAR and RTC_RAR registers. The SWR bit is cleared after VBAT POR and by software explicitly clearing it.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SwrVal> swr{}; 
        namespace SwrValC{
            constexpr Register::FieldValue<decltype(swr)::Type,SwrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swr)::Type,SwrVal::v1> v1{};
        }
        }
        ///Wakeup Pin Enable
        enum class WpeVal {
            v0=0x00000000,     ///<Wakeup pin is disabled.
            v1=0x00000001,     ///<Wakeup pin is enabled and wakeup pin asserts if the RTC interrupt asserts and the chip is powered down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WpeVal> wpe{}; 
        namespace WpeValC{
            constexpr Register::FieldValue<decltype(wpe)::Type,WpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wpe)::Type,WpeVal::v1> v1{};
        }
        }
        ///Supervisor Access
        enum class SupVal {
            v0=0x00000000,     ///<Non-supervisor mode write accesses are not supported and generate a bus error.
            v1=0x00000001,     ///<Non-supervisor mode write accesses are supported.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SupVal> sup{}; 
        namespace SupValC{
            constexpr Register::FieldValue<decltype(sup)::Type,SupVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sup)::Type,SupVal::v1> v1{};
        }
        }
        ///Update Mode
        enum class UmVal {
            v0=0x00000000,     ///<Registers cannot be written when locked.
            v1=0x00000001,     ///<Registers can be written when locked under limited conditions.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,UmVal> um{}; 
        namespace UmValC{
            constexpr Register::FieldValue<decltype(um)::Type,UmVal::v0> v0{};
            constexpr Register::FieldValue<decltype(um)::Type,UmVal::v1> v1{};
        }
        }
        ///Oscillator Enable
        enum class OsceVal {
            v0=0x00000000,     ///<32.768 kHz oscillator is disabled.
            v1=0x00000001,     ///<32.768 kHz oscillator is enabled. After setting this bit, wait the oscillator startup time before enabling the time counter to allow the 32.768 kHz clock time to stabilize.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,OsceVal> osce{}; 
        namespace OsceValC{
            constexpr Register::FieldValue<decltype(osce)::Type,OsceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(osce)::Type,OsceVal::v1> v1{};
        }
        }
        ///Clock Output
        enum class ClkoVal {
            v0=0x00000000,     ///<The 32kHz clock is output to other peripherals
            v1=0x00000001,     ///<The 32kHz clock is not output to other peripherals
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ClkoVal> clko{}; 
        namespace ClkoValC{
            constexpr Register::FieldValue<decltype(clko)::Type,ClkoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(clko)::Type,ClkoVal::v1> v1{};
        }
        }
        ///Oscillator 16pF load configure
        enum class Sc16pVal {
            v0=0x00000000,     ///<Disable the load.
            v1=0x00000001,     ///<Enable the additional load.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sc16pVal> sc16p{}; 
        namespace Sc16pValC{
            constexpr Register::FieldValue<decltype(sc16p)::Type,Sc16pVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sc16p)::Type,Sc16pVal::v1> v1{};
        }
        }
        ///Oscillator 8pF load configure
        enum class Sc8pVal {
            v0=0x00000000,     ///<Disable the load.
            v1=0x00000001,     ///<Enable the additional load.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Sc8pVal> sc8p{}; 
        namespace Sc8pValC{
            constexpr Register::FieldValue<decltype(sc8p)::Type,Sc8pVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sc8p)::Type,Sc8pVal::v1> v1{};
        }
        }
        ///Oscillator 4pF load configure
        enum class Sc4pVal {
            v0=0x00000000,     ///<Disable the load.
            v1=0x00000001,     ///<Enable the additional load.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Sc4pVal> sc4p{}; 
        namespace Sc4pValC{
            constexpr Register::FieldValue<decltype(sc4p)::Type,Sc4pVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sc4p)::Type,Sc4pVal::v1> v1{};
        }
        }
        ///Oscillator 2pF load configure
        enum class Sc2pVal {
            v0=0x00000000,     ///<Disable the load.
            v1=0x00000001,     ///<Enable the additional load.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Sc2pVal> sc2p{}; 
        namespace Sc2pValC{
            constexpr Register::FieldValue<decltype(sc2p)::Type,Sc2pVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sc2p)::Type,Sc2pVal::v1> v1{};
        }
        }
    }
    namespace RtcSr{    ///<RTC Status Register
        using Addr = Register::Address<0x4003d014,0xffffffe0,0,unsigned>;
        ///Time Invalid Flag
        enum class TifVal {
            v0=0x00000000,     ///<Time is valid.
            v1=0x00000001,     ///<Time is invalid and time counter is read as zero.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TifVal> tif{}; 
        namespace TifValC{
            constexpr Register::FieldValue<decltype(tif)::Type,TifVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tif)::Type,TifVal::v1> v1{};
        }
        }
        ///Time Overflow Flag
        enum class TofVal {
            v0=0x00000000,     ///<Time overflow has not occurred.
            v1=0x00000001,     ///<Time overflow has occurred and time counter is read as zero.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TofVal> tof{}; 
        namespace TofValC{
            constexpr Register::FieldValue<decltype(tof)::Type,TofVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tof)::Type,TofVal::v1> v1{};
        }
        }
        ///Time Alarm Flag
        enum class TafVal {
            v0=0x00000000,     ///<Time alarm has not occurred.
            v1=0x00000001,     ///<Time alarm has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TafVal> taf{}; 
        namespace TafValC{
            constexpr Register::FieldValue<decltype(taf)::Type,TafVal::v0> v0{};
            constexpr Register::FieldValue<decltype(taf)::Type,TafVal::v1> v1{};
        }
        }
        ///Monotonic Overflow Flag
        enum class MofVal {
            v0=0x00000000,     ///<Monotonic counter overflow has not occurred.
            v1=0x00000001,     ///<Monotonic counter overflow has occurred and monotonic counter is read as zero.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,MofVal> mof{}; 
        namespace MofValC{
            constexpr Register::FieldValue<decltype(mof)::Type,MofVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mof)::Type,MofVal::v1> v1{};
        }
        }
        ///Time Counter Enable
        enum class TceVal {
            v0=0x00000000,     ///<Time counter is disabled.
            v1=0x00000001,     ///<Time counter is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TceVal> tce{}; 
        namespace TceValC{
            constexpr Register::FieldValue<decltype(tce)::Type,TceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tce)::Type,TceVal::v1> v1{};
        }
        }
    }
    namespace RtcLr{    ///<RTC Lock Register
        using Addr = Register::Address<0x4003d018,0xffff0087,0,unsigned>;
        ///Time Compensation Lock
        enum class TclVal {
            v0=0x00000000,     ///<Time compensation register is locked and writes are ignored.
            v1=0x00000001,     ///<Time compensation register is not locked and writes complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TclVal> tcl{}; 
        namespace TclValC{
            constexpr Register::FieldValue<decltype(tcl)::Type,TclVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tcl)::Type,TclVal::v1> v1{};
        }
        }
        ///Control Register Lock
        enum class CrlVal {
            v0=0x00000000,     ///<Control register is locked and writes are ignored.
            v1=0x00000001,     ///<Control register is not locked and writes complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CrlVal> crl{}; 
        namespace CrlValC{
            constexpr Register::FieldValue<decltype(crl)::Type,CrlVal::v0> v0{};
            constexpr Register::FieldValue<decltype(crl)::Type,CrlVal::v1> v1{};
        }
        }
        ///Status Register Lock
        enum class SrlVal {
            v0=0x00000000,     ///<Status register is locked and writes are ignored.
            v1=0x00000001,     ///<Status register is not locked and writes complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SrlVal> srl{}; 
        namespace SrlValC{
            constexpr Register::FieldValue<decltype(srl)::Type,SrlVal::v0> v0{};
            constexpr Register::FieldValue<decltype(srl)::Type,SrlVal::v1> v1{};
        }
        }
        ///Lock Register Lock
        enum class LrlVal {
            v0=0x00000000,     ///<Lock register is locked and writes are ignored.
            v1=0x00000001,     ///<Lock register is not locked and writes complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,LrlVal> lrl{}; 
        namespace LrlValC{
            constexpr Register::FieldValue<decltype(lrl)::Type,LrlVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lrl)::Type,LrlVal::v1> v1{};
        }
        }
        ///Tamper Time Seconds Lock
        enum class TtslVal {
            v0=0x00000000,     ///<Tamper time seconds register is locked and writes are ignored.
            v1=0x00000001,     ///<Tamper time seconds register is not locked and writes complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,TtslVal> ttsl{}; 
        namespace TtslValC{
            constexpr Register::FieldValue<decltype(ttsl)::Type,TtslVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ttsl)::Type,TtslVal::v1> v1{};
        }
        }
        ///Monotonic Enable Lock
        enum class MelVal {
            v0=0x00000000,     ///<Monotonic enable register is locked and writes are ignored.
            v1=0x00000001,     ///<Monotonic enable register is not locked and writes complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,MelVal> mel{}; 
        namespace MelValC{
            constexpr Register::FieldValue<decltype(mel)::Type,MelVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mel)::Type,MelVal::v1> v1{};
        }
        }
        ///Monotonic Counter Low Lock
        enum class McllVal {
            v0=0x00000000,     ///<Monotonic counter low register is locked and writes are ignored.
            v1=0x00000001,     ///<Monotonic counter low register is not locked and writes complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,McllVal> mcll{}; 
        namespace McllValC{
            constexpr Register::FieldValue<decltype(mcll)::Type,McllVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mcll)::Type,McllVal::v1> v1{};
        }
        }
        ///Monotonic Counter High Lock
        enum class MchlVal {
            v0=0x00000000,     ///<Monotonic counter high register is locked and writes are ignored.
            v1=0x00000001,     ///<Monotonic counter high register is not locked and writes complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,MchlVal> mchl{}; 
        namespace MchlValC{
            constexpr Register::FieldValue<decltype(mchl)::Type,MchlVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mchl)::Type,MchlVal::v1> v1{};
        }
        }
        ///Tamper Enable Lock
        enum class TelVal {
            v0=0x00000000,     ///<Tamper enable register is locked and writes are ignored.
            v1=0x00000001,     ///<Tamper enable register is not locked and writes complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,TelVal> tel{}; 
        namespace TelValC{
            constexpr Register::FieldValue<decltype(tel)::Type,TelVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tel)::Type,TelVal::v1> v1{};
        }
        }
        ///Tamper Detect Lock
        enum class TdlVal {
            v0=0x00000000,     ///<Tamper detect register is locked and writes are ignored.
            v1=0x00000001,     ///<Tamper detect register is not locked and writes complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,TdlVal> tdl{}; 
        namespace TdlValC{
            constexpr Register::FieldValue<decltype(tdl)::Type,TdlVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tdl)::Type,TdlVal::v1> v1{};
        }
        }
        ///Tamper Trim Lock
        enum class TtlVal {
            v0=0x00000000,     ///<Tamper trim register is locked and writes are ignored.
            v1=0x00000001,     ///<Tamper trim register is not locked and writes complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,TtlVal> ttl{}; 
        namespace TtlValC{
            constexpr Register::FieldValue<decltype(ttl)::Type,TtlVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ttl)::Type,TtlVal::v1> v1{};
        }
        }
        ///Tamper Interrupt Lock
        enum class TilVal {
            v0=0x00000000,     ///<Tamper interrupt register is locked and writes are ignored.
            v1=0x00000001,     ///<Tamper interrupt register is not locked and writes complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,TilVal> til{}; 
        namespace TilValC{
            constexpr Register::FieldValue<decltype(til)::Type,TilVal::v0> v0{};
            constexpr Register::FieldValue<decltype(til)::Type,TilVal::v1> v1{};
        }
        }
    }
    namespace RtcIer{    ///<RTC Interrupt Enable Register
        using Addr = Register::Address<0x4003d01c,0xffffffe0,0,unsigned>;
        ///Time Invalid Interrupt Enable
        enum class TiieVal {
            v0=0x00000000,     ///<Time invalid flag does not generate an interrupt.
            v1=0x00000001,     ///<Time invalid flag does generate an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TiieVal> tiie{}; 
        namespace TiieValC{
            constexpr Register::FieldValue<decltype(tiie)::Type,TiieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tiie)::Type,TiieVal::v1> v1{};
        }
        }
        ///Time Overflow Interrupt Enable
        enum class ToieVal {
            v0=0x00000000,     ///<Time overflow flag does not generate an interrupt.
            v1=0x00000001,     ///<Time overflow flag does generate an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ToieVal> toie{}; 
        namespace ToieValC{
            constexpr Register::FieldValue<decltype(toie)::Type,ToieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(toie)::Type,ToieVal::v1> v1{};
        }
        }
        ///Time Alarm Interrupt Enable
        enum class TaieVal {
            v0=0x00000000,     ///<Time alarm flag does not generate an interrupt.
            v1=0x00000001,     ///<Time alarm flag does generate an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TaieVal> taie{}; 
        namespace TaieValC{
            constexpr Register::FieldValue<decltype(taie)::Type,TaieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(taie)::Type,TaieVal::v1> v1{};
        }
        }
        ///Monotonic Overflow Interrupt Enable
        enum class MoieVal {
            v0=0x00000000,     ///<Monotonic overflow flag does not generate an interrupt.
            v1=0x00000001,     ///<Monotonic overflow flag does generate an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,MoieVal> moie{}; 
        namespace MoieValC{
            constexpr Register::FieldValue<decltype(moie)::Type,MoieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(moie)::Type,MoieVal::v1> v1{};
        }
        }
        ///Time Seconds Interrupt Enable
        enum class TsieVal {
            v0=0x00000000,     ///<Seconds interrupt is disabled.
            v1=0x00000001,     ///<Seconds interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TsieVal> tsie{}; 
        namespace TsieValC{
            constexpr Register::FieldValue<decltype(tsie)::Type,TsieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tsie)::Type,TsieVal::v1> v1{};
        }
        }
    }
    namespace RtcTtsr{    ///<RTC Tamper Time Seconds Register
        using Addr = Register::Address<0x4003d020,0x00000000,0,unsigned>;
        ///Tamper Time Seconds
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tts{}; 
    }
    namespace RtcMer{    ///<RTC Monotonic Enable Register
        using Addr = Register::Address<0x4003d024,0xffffffef,0,unsigned>;
        ///Monotonic Counter Enable
        enum class MceVal {
            v0=0x00000000,     ///<Writes to the monotonic counter load the counter with the value written.
            v1=0x00000001,     ///<Writes to the monotonic counter increment the counter.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,MceVal> mce{}; 
        namespace MceValC{
            constexpr Register::FieldValue<decltype(mce)::Type,MceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mce)::Type,MceVal::v1> v1{};
        }
        }
    }
    namespace RtcMclr{    ///<RTC Monotonic Counter Low Register
        using Addr = Register::Address<0x4003d028,0x00000000,0,unsigned>;
        ///Monotonic Counter Low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mcl{}; 
    }
    namespace RtcMchr{    ///<RTC Monotonic Counter High Register
        using Addr = Register::Address<0x4003d02c,0x00000000,0,unsigned>;
        ///Monotonic Counter High
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mch{}; 
    }
    namespace RtcTer{    ///<RTC Tamper Enable Register
        using Addr = Register::Address<0x4003d030,0xffffffc0,0,unsigned>;
        ///DryIce Tamper Enable
        enum class DteVal {
            v0=0x00000000,     ///<Tamper source disabled.
            v1=0x00000001,     ///<Set the time invalid flag if the DryIce tamper flag is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DteVal> dte{}; 
        namespace DteValC{
            constexpr Register::FieldValue<decltype(dte)::Type,DteVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dte)::Type,DteVal::v1> v1{};
        }
        }
        ///Voltage Tamper Enable
        enum class VteVal {
            v0=0x00000000,     ///<Tamper source disabled.
            v1=0x00000001,     ///<Set the time invalid flag if the voltage tamper flag is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,VteVal> vte{}; 
        namespace VteValC{
            constexpr Register::FieldValue<decltype(vte)::Type,VteVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vte)::Type,VteVal::v1> v1{};
        }
        }
        ///Clock Tamper Enable
        enum class CteVal {
            v0=0x00000000,     ///<Tamper source disabled.
            v1=0x00000001,     ///<Set the time invalid flag if the clock tamper flag is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CteVal> cte{}; 
        namespace CteValC{
            constexpr Register::FieldValue<decltype(cte)::Type,CteVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cte)::Type,CteVal::v1> v1{};
        }
        }
        ///Temperature Tamper Enable
        enum class TteVal {
            v0=0x00000000,     ///<Tamper source disabled.
            v1=0x00000001,     ///<Set the time invalid flag if the temperature tamper flag is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TteVal> tte{}; 
        namespace TteValC{
            constexpr Register::FieldValue<decltype(tte)::Type,TteVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tte)::Type,TteVal::v1> v1{};
        }
        }
        ///Flash Security Enable
        enum class FseVal {
            v0=0x00000000,     ///<Tamper source disabled.
            v1=0x00000001,     ///<Set the time invalid flag if the flash security flag is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,FseVal> fse{}; 
        namespace FseValC{
            constexpr Register::FieldValue<decltype(fse)::Type,FseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fse)::Type,FseVal::v1> v1{};
        }
        }
        ///Test Mode Enable
        enum class TmeVal {
            v0=0x00000000,     ///<Tamper source disabled.
            v1=0x00000001,     ///<Set the time invalid flag if the test mode flag is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TmeVal> tme{}; 
        namespace TmeValC{
            constexpr Register::FieldValue<decltype(tme)::Type,TmeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tme)::Type,TmeVal::v1> v1{};
        }
        }
    }
    namespace RtcTdr{    ///<RTC Tamper Detect Register
        using Addr = Register::Address<0x4003d034,0xffffffc0,0,unsigned>;
        ///DryIce Tamper Flag
        enum class DtfVal {
            v0=0x00000000,     ///<Tamper not detected.
            v1=0x00000001,     ///<DryIce tamper detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DtfVal> dtf{}; 
        namespace DtfValC{
            constexpr Register::FieldValue<decltype(dtf)::Type,DtfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dtf)::Type,DtfVal::v1> v1{};
        }
        }
        ///Voltage Tamper Flag
        enum class VtfVal {
            v0=0x00000000,     ///<Tamper not detected.
            v1=0x00000001,     ///<Voltage tampering detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,VtfVal> vtf{}; 
        namespace VtfValC{
            constexpr Register::FieldValue<decltype(vtf)::Type,VtfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vtf)::Type,VtfVal::v1> v1{};
        }
        }
        ///Clock Tamper Flag
        enum class CtfVal {
            v0=0x00000000,     ///<Tamper not detected.
            v1=0x00000001,     ///<Clock tampering detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CtfVal> ctf{}; 
        namespace CtfValC{
            constexpr Register::FieldValue<decltype(ctf)::Type,CtfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ctf)::Type,CtfVal::v1> v1{};
        }
        }
        ///Temperature Tamper Flag
        enum class TtfVal {
            v0=0x00000000,     ///<Tamper not detected.
            v1=0x00000001,     ///<Temperature tampering detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TtfVal> ttf{}; 
        namespace TtfValC{
            constexpr Register::FieldValue<decltype(ttf)::Type,TtfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ttf)::Type,TtfVal::v1> v1{};
        }
        }
        ///Flash Security Flag
        enum class FsfVal {
            v0=0x00000000,     ///<Tamper not detected.
            v1=0x00000001,     ///<Flash security tamper detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,FsfVal> fsf{}; 
        namespace FsfValC{
            constexpr Register::FieldValue<decltype(fsf)::Type,FsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fsf)::Type,FsfVal::v1> v1{};
        }
        }
        ///Test Mode Flag
        enum class TmfVal {
            v0=0x00000000,     ///<Tamper not detected.
            v1=0x00000001,     ///<Test mode tamper detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TmfVal> tmf{}; 
        namespace TmfValC{
            constexpr Register::FieldValue<decltype(tmf)::Type,TmfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tmf)::Type,TmfVal::v1> v1{};
        }
        }
    }
    namespace RtcTtr{    ///<RTC Tamper Trim Register
        using Addr = Register::Address<0x4003d038,0xfffc0000,0,unsigned>;
        ///Voltage Detect Trim Low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> vdtl{}; 
        ///Voltage Detect Trim High
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> vdth{}; 
        ///Clock Detect Trim Low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> cdtl{}; 
        ///Clock Detect Trim High
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> cdth{}; 
        ///Temperature Detect Trim High
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> tdth{}; 
        ///Temperature Detect Trim Low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> tdtl{}; 
    }
    namespace RtcTir{    ///<RTC Tamper Interrupt Register
        using Addr = Register::Address<0x4003d03c,0xffffffc0,0,unsigned>;
        ///DryIce Tamper Interrupt Enable
        enum class DtieVal {
            v0=0x00000000,     ///<Interupt disabled.
            v1=0x00000001,     ///<An interrupt is generated when DryIce tamper flag is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DtieVal> dtie{}; 
        namespace DtieValC{
            constexpr Register::FieldValue<decltype(dtie)::Type,DtieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dtie)::Type,DtieVal::v1> v1{};
        }
        }
        ///Voltage Tamper Interrupt Enable
        enum class VtieVal {
            v0=0x00000000,     ///<Interupt disabled.
            v1=0x00000001,     ///<An interrupt is generated when the voltage tamper flag is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,VtieVal> vtie{}; 
        namespace VtieValC{
            constexpr Register::FieldValue<decltype(vtie)::Type,VtieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vtie)::Type,VtieVal::v1> v1{};
        }
        }
        ///Clock Tamper Interrupt Enable
        enum class CtieVal {
            v0=0x00000000,     ///<Interupt disabled.
            v1=0x00000001,     ///<An interrupt is generated when the clock tamper flag is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CtieVal> ctie{}; 
        namespace CtieValC{
            constexpr Register::FieldValue<decltype(ctie)::Type,CtieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ctie)::Type,CtieVal::v1> v1{};
        }
        }
        ///Temperature Tamper Interrupt Enable
        enum class TtieVal {
            v0=0x00000000,     ///<Interupt disabled.
            v1=0x00000001,     ///<An interrupt is generated when the temperature tamper flag is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TtieVal> ttie{}; 
        namespace TtieValC{
            constexpr Register::FieldValue<decltype(ttie)::Type,TtieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ttie)::Type,TtieVal::v1> v1{};
        }
        }
        ///Flash Security Interrupt Enable
        enum class FsieVal {
            v0=0x00000000,     ///<Interupt disabled.
            v1=0x00000001,     ///<An interrupt is generated when the flash security flag is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,FsieVal> fsie{}; 
        namespace FsieValC{
            constexpr Register::FieldValue<decltype(fsie)::Type,FsieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fsie)::Type,FsieVal::v1> v1{};
        }
        }
        ///Test Mode Interrupt Enable
        enum class TmieVal {
            v0=0x00000000,     ///<Interupt disabled.
            v1=0x00000001,     ///<An interrupt is generated when the test mode flag is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TmieVal> tmie{}; 
        namespace TmieValC{
            constexpr Register::FieldValue<decltype(tmie)::Type,TmieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tmie)::Type,TmieVal::v1> v1{};
        }
        }
    }
    namespace RtcWar{    ///<RTC Write Access Register
        using Addr = Register::Address<0x4003d800,0xffff0000,0,unsigned>;
        ///Time Seconds Register Write
        enum class TsrwVal {
            v0=0x00000000,     ///<Writes to the time seconds register are ignored.
            v1=0x00000001,     ///<Writes to the time seconds register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TsrwVal> tsrw{}; 
        namespace TsrwValC{
            constexpr Register::FieldValue<decltype(tsrw)::Type,TsrwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tsrw)::Type,TsrwVal::v1> v1{};
        }
        }
        ///Time Prescaler Register Write
        enum class TprwVal {
            v0=0x00000000,     ///<Writes to the time prescaler register are ignored.
            v1=0x00000001,     ///<Writes to the time prescaler register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TprwVal> tprw{}; 
        namespace TprwValC{
            constexpr Register::FieldValue<decltype(tprw)::Type,TprwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tprw)::Type,TprwVal::v1> v1{};
        }
        }
        ///Time Alarm Register Write
        enum class TarwVal {
            v0=0x00000000,     ///<Writes to the time alarm register are ignored.
            v1=0x00000001,     ///<Writes to the time alarm register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TarwVal> tarw{}; 
        namespace TarwValC{
            constexpr Register::FieldValue<decltype(tarw)::Type,TarwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tarw)::Type,TarwVal::v1> v1{};
        }
        }
        ///Time Compensation Register Write
        enum class TcrwVal {
            v0=0x00000000,     ///<Writes to the time compensation register are ignored.
            v1=0x00000001,     ///<Writes to the time compensation register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TcrwVal> tcrw{}; 
        namespace TcrwValC{
            constexpr Register::FieldValue<decltype(tcrw)::Type,TcrwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tcrw)::Type,TcrwVal::v1> v1{};
        }
        }
        ///Control Register Write
        enum class CrwVal {
            v0=0x00000000,     ///<Writes to the control register are ignored.
            v1=0x00000001,     ///<Writes to the control register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CrwVal> crw{}; 
        namespace CrwValC{
            constexpr Register::FieldValue<decltype(crw)::Type,CrwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(crw)::Type,CrwVal::v1> v1{};
        }
        }
        ///Status Register Write
        enum class SrwVal {
            v0=0x00000000,     ///<Writes to the status register are ignored.
            v1=0x00000001,     ///<Writes to the status register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SrwVal> srw{}; 
        namespace SrwValC{
            constexpr Register::FieldValue<decltype(srw)::Type,SrwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(srw)::Type,SrwVal::v1> v1{};
        }
        }
        ///Lock Register Write
        enum class LrwVal {
            v0=0x00000000,     ///<Writes to the lock register are ignored.
            v1=0x00000001,     ///<Writes to the lock register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,LrwVal> lrw{}; 
        namespace LrwValC{
            constexpr Register::FieldValue<decltype(lrw)::Type,LrwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lrw)::Type,LrwVal::v1> v1{};
        }
        }
        ///Interrupt Enable Register Write
        enum class IerwVal {
            v0=0x00000000,     ///<Writes to the interupt enable register are ignored.
            v1=0x00000001,     ///<Writes to the interrupt enable register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,IerwVal> ierw{}; 
        namespace IerwValC{
            constexpr Register::FieldValue<decltype(ierw)::Type,IerwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ierw)::Type,IerwVal::v1> v1{};
        }
        }
        ///Tamper Time Seconds Write
        enum class TtswVal {
            v0=0x00000000,     ///<Writes to the tamper time seconds register are ignored.
            v1=0x00000001,     ///<Writes to the tamper time seconds register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,TtswVal> ttsw{}; 
        namespace TtswValC{
            constexpr Register::FieldValue<decltype(ttsw)::Type,TtswVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ttsw)::Type,TtswVal::v1> v1{};
        }
        }
        ///Monotonic Enable Register Write
        enum class MerwVal {
            v0=0x00000000,     ///<Writes to the monotonic enable register are ignored.
            v1=0x00000001,     ///<Writes to the monotonic enable register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,MerwVal> merw{}; 
        namespace MerwValC{
            constexpr Register::FieldValue<decltype(merw)::Type,MerwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(merw)::Type,MerwVal::v1> v1{};
        }
        }
        ///Monotonic Counter Low Write
        enum class MclwVal {
            v0=0x00000000,     ///<Writes to the monotonic counter low register are ignored.
            v1=0x00000001,     ///<Writes to the monotonic counter low register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,MclwVal> mclw{}; 
        namespace MclwValC{
            constexpr Register::FieldValue<decltype(mclw)::Type,MclwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mclw)::Type,MclwVal::v1> v1{};
        }
        }
        ///Monotonic Counter High Write
        enum class MchwVal {
            v0=0x00000000,     ///<Writes to the monotonic counter high register are ignored.
            v1=0x00000001,     ///<Writes to the monotonic counter high register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,MchwVal> mchw{}; 
        namespace MchwValC{
            constexpr Register::FieldValue<decltype(mchw)::Type,MchwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mchw)::Type,MchwVal::v1> v1{};
        }
        }
        ///Tamper Enable Register Write
        enum class TerwVal {
            v0=0x00000000,     ///<Writes to the tamper enable register are ignored.
            v1=0x00000001,     ///<Writes to the tamper enable register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,TerwVal> terw{}; 
        namespace TerwValC{
            constexpr Register::FieldValue<decltype(terw)::Type,TerwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(terw)::Type,TerwVal::v1> v1{};
        }
        }
        ///Tamper Detect Register Write
        enum class TdrwVal {
            v0=0x00000000,     ///<Writes to the tamper detect register are ignored.
            v1=0x00000001,     ///<Writes to the tamper detect register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,TdrwVal> tdrw{}; 
        namespace TdrwValC{
            constexpr Register::FieldValue<decltype(tdrw)::Type,TdrwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tdrw)::Type,TdrwVal::v1> v1{};
        }
        }
        ///Tamper Trim Register Write
        enum class TtrwVal {
            v0=0x00000000,     ///<Writes to the tamper trim register are ignored.
            v1=0x00000001,     ///<Writes to the tamper trim register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,TtrwVal> ttrw{}; 
        namespace TtrwValC{
            constexpr Register::FieldValue<decltype(ttrw)::Type,TtrwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ttrw)::Type,TtrwVal::v1> v1{};
        }
        }
        ///Tamper Interrupt Register Write
        enum class TirwVal {
            v0=0x00000000,     ///<Writes to the tamper interrupt register are ignored.
            v1=0x00000001,     ///<Writes to the tamper interrupt register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,TirwVal> tirw{}; 
        namespace TirwValC{
            constexpr Register::FieldValue<decltype(tirw)::Type,TirwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tirw)::Type,TirwVal::v1> v1{};
        }
        }
    }
    namespace RtcRar{    ///<RTC Read Access Register
        using Addr = Register::Address<0x4003d804,0xffff0000,0,unsigned>;
        ///Time Seconds Register Read
        enum class TsrrVal {
            v0=0x00000000,     ///<Reads to the time seconds register are ignored.
            v1=0x00000001,     ///<Reads to the time seconds register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TsrrVal> tsrr{}; 
        namespace TsrrValC{
            constexpr Register::FieldValue<decltype(tsrr)::Type,TsrrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tsrr)::Type,TsrrVal::v1> v1{};
        }
        }
        ///Time Prescaler Register Read
        enum class TprrVal {
            v0=0x00000000,     ///<Reads to the time prescaler register are ignored.
            v1=0x00000001,     ///<Reads to the time prescaler register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TprrVal> tprr{}; 
        namespace TprrValC{
            constexpr Register::FieldValue<decltype(tprr)::Type,TprrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tprr)::Type,TprrVal::v1> v1{};
        }
        }
        ///Time Alarm Register Read
        enum class TarrVal {
            v0=0x00000000,     ///<Reads to the time alarm register are ignored.
            v1=0x00000001,     ///<Reads to the time alarm register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TarrVal> tarr{}; 
        namespace TarrValC{
            constexpr Register::FieldValue<decltype(tarr)::Type,TarrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tarr)::Type,TarrVal::v1> v1{};
        }
        }
        ///Time Compensation Register Read
        enum class TcrrVal {
            v0=0x00000000,     ///<Reads to the time compensation register are ignored.
            v1=0x00000001,     ///<Reads to the time compensation register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TcrrVal> tcrr{}; 
        namespace TcrrValC{
            constexpr Register::FieldValue<decltype(tcrr)::Type,TcrrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tcrr)::Type,TcrrVal::v1> v1{};
        }
        }
        ///Control Register Read
        enum class CrrVal {
            v0=0x00000000,     ///<Reads to the control register are ignored.
            v1=0x00000001,     ///<Reads to the control register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CrrVal> crr{}; 
        namespace CrrValC{
            constexpr Register::FieldValue<decltype(crr)::Type,CrrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(crr)::Type,CrrVal::v1> v1{};
        }
        }
        ///Status Register Read
        enum class SrrVal {
            v0=0x00000000,     ///<Reads to the status register are ignored.
            v1=0x00000001,     ///<Reads to the status register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SrrVal> srr{}; 
        namespace SrrValC{
            constexpr Register::FieldValue<decltype(srr)::Type,SrrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(srr)::Type,SrrVal::v1> v1{};
        }
        }
        ///Lock Register Read
        enum class LrrVal {
            v0=0x00000000,     ///<Reads to the lock register are ignored.
            v1=0x00000001,     ///<Reads to the lock register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,LrrVal> lrr{}; 
        namespace LrrValC{
            constexpr Register::FieldValue<decltype(lrr)::Type,LrrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lrr)::Type,LrrVal::v1> v1{};
        }
        }
        ///Interrupt Enable Register Read
        enum class IerrVal {
            v0=0x00000000,     ///<Reads to the interrupt enable register are ignored.
            v1=0x00000001,     ///<Reads to the interrupt enable register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,IerrVal> ierr{}; 
        namespace IerrValC{
            constexpr Register::FieldValue<decltype(ierr)::Type,IerrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ierr)::Type,IerrVal::v1> v1{};
        }
        }
        ///Tamper Time Seconds Read
        enum class TtsrVal {
            v0=0x00000000,     ///<Reads to the tamper time seconds register are ignored.
            v1=0x00000001,     ///<Reads to the tamper time seconds register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,TtsrVal> ttsr{}; 
        namespace TtsrValC{
            constexpr Register::FieldValue<decltype(ttsr)::Type,TtsrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ttsr)::Type,TtsrVal::v1> v1{};
        }
        }
        ///Monotonic Enable Register Read
        enum class MerrVal {
            v0=0x00000000,     ///<Reads to the monotonic enable register are ignored.
            v1=0x00000001,     ///<Reads to the monotonic enable register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,MerrVal> merr{}; 
        namespace MerrValC{
            constexpr Register::FieldValue<decltype(merr)::Type,MerrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(merr)::Type,MerrVal::v1> v1{};
        }
        }
        ///Monotonic Counter Low Read
        enum class MclrVal {
            v0=0x00000000,     ///<Reads to the monotonic counter low register are ignored.
            v1=0x00000001,     ///<Reads to the monotonic counter low register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,MclrVal> mclr{}; 
        namespace MclrValC{
            constexpr Register::FieldValue<decltype(mclr)::Type,MclrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mclr)::Type,MclrVal::v1> v1{};
        }
        }
        ///Monotonic Counter High Read
        enum class MchrVal {
            v0=0x00000000,     ///<Reads to the monotonic counter high register are ignored.
            v1=0x00000001,     ///<Reads to the monotonic counter high register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,MchrVal> mchr{}; 
        namespace MchrValC{
            constexpr Register::FieldValue<decltype(mchr)::Type,MchrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mchr)::Type,MchrVal::v1> v1{};
        }
        }
        ///Tamper Enable Register Read
        enum class TerrVal {
            v0=0x00000000,     ///<Reads to the tamper enable register are ignored.
            v1=0x00000001,     ///<Reads to the tamper enable register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,TerrVal> terr{}; 
        namespace TerrValC{
            constexpr Register::FieldValue<decltype(terr)::Type,TerrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(terr)::Type,TerrVal::v1> v1{};
        }
        }
        ///Tamper Detect Register Read
        enum class TdrrVal {
            v0=0x00000000,     ///<Reads to the tamper detect register are ignored.
            v1=0x00000001,     ///<Reads to the tamper detect register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,TdrrVal> tdrr{}; 
        namespace TdrrValC{
            constexpr Register::FieldValue<decltype(tdrr)::Type,TdrrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tdrr)::Type,TdrrVal::v1> v1{};
        }
        }
        ///Tamper Trim Register Read
        enum class TtrrVal {
            v0=0x00000000,     ///<Reads to the tamper trim register are ignored.
            v1=0x00000001,     ///<Reads to the tamper trim register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,TtrrVal> ttrr{}; 
        namespace TtrrValC{
            constexpr Register::FieldValue<decltype(ttrr)::Type,TtrrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ttrr)::Type,TtrrVal::v1> v1{};
        }
        }
        ///Tamper Interrupt Register Read
        enum class TirrVal {
            v0=0x00000000,     ///<Reads to the tamper interrupt register are ignored.
            v1=0x00000001,     ///<Reads to the tamper interrupt register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,TirrVal> tirr{}; 
        namespace TirrValC{
            constexpr Register::FieldValue<decltype(tirr)::Type,TirrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tirr)::Type,TirrVal::v1> v1{};
        }
        }
    }
}
