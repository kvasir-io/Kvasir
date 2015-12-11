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
    namespace RtcSr{    ///<RTC Status Register
        using Addr = Register::Address<0x4003d014,0xffffffe8,0,unsigned>;
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
    namespace RtcLr{    ///<RTC Lock Register
        using Addr = Register::Address<0x4003d018,0xffffff87,0,unsigned>;
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
    namespace RtcIer{    ///<RTC Interrupt Enable Register
        using Addr = Register::Address<0x4003d01c,0xfffffff8,0,unsigned>;
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
    namespace RtcWar{    ///<RTC Write Access Register
        using Addr = Register::Address<0x4003d800,0xffffff00,0,unsigned>;
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
    namespace RtcRar{    ///<RTC Read Access Register
        using Addr = Register::Address<0x4003d804,0xffffff00,0,unsigned>;
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
}
