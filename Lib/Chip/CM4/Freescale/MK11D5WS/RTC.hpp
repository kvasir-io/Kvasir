#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Secure Real Time Clock
    namespace RtcTsr{    ///<RTC Time Seconds Register
        using Addr = Register::Address<0x4003d000,0x00000000,0,unsigned>;
        ///Time Seconds Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsr{}; 
    }
    namespace RtcTpr{    ///<RTC Time Prescaler Register
        using Addr = Register::Address<0x4003d004,0xffff0000,0,unsigned>;
        ///Time Prescaler Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tpr{}; 
    }
    namespace RtcTar{    ///<RTC Time Alarm Register
        using Addr = Register::Address<0x4003d008,0x00000000,0,unsigned>;
        ///Time Alarm Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tar{}; 
    }
    namespace RtcTcr{    ///<RTC Time Compensation Register
        using Addr = Register::Address<0x4003d00c,0x00000000,0,unsigned>;
        ///Time Compensation Register
        enum class tcrVal {
            v10000000=0x00000080,     ///<Time Prescaler Register overflows every 32896 clock cycles.
            v11111111=0x000000ff,     ///<Time Prescaler Register overflows every 32769 clock cycles.
            v0=0x00000000,     ///<Time Prescaler Register overflows every 32768 clock cycles.
            v1=0x00000001,     ///<Time Prescaler Register overflows every 32767 clock cycles.
            v1111111=0x0000007f,     ///<Time Prescaler Register overflows every 32641 clock cycles.
        };
        namespace tcrValC{
            constexpr MPL::Value<tcrVal,tcrVal::v10000000> v10000000{};
            constexpr MPL::Value<tcrVal,tcrVal::v11111111> v11111111{};
            constexpr MPL::Value<tcrVal,tcrVal::v0> v0{};
            constexpr MPL::Value<tcrVal,tcrVal::v1> v1{};
            constexpr MPL::Value<tcrVal,tcrVal::v1111111> v1111111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,tcrVal> tcr{}; 
        ///Compensation Interval Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> cir{}; 
        ///Time Compensation Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> tcv{}; 
        ///Compensation Interval Counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> cic{}; 
    }
    namespace RtcCr{    ///<RTC Control Register
        using Addr = Register::Address<0x4003d010,0xffffc0f0,0,unsigned>;
        ///Software Reset
        enum class swrVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Resets all RTC registers except for the SWR bit and the RTC_WAR and RTC_RAR registers . The SWR bit is cleared by POR and by software explicitly clearing it.
        };
        namespace swrValC{
            constexpr MPL::Value<swrVal,swrVal::v0> v0{};
            constexpr MPL::Value<swrVal,swrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,swrVal> swr{}; 
        ///Wakeup Pin Enable
        enum class wpeVal {
            v0=0x00000000,     ///<Wakeup pin is disabled.
            v1=0x00000001,     ///<Wakeup pin is enabled and wakeup pin asserts if the RTC interrupt asserts or the wakeup pin is turned on.
        };
        namespace wpeValC{
            constexpr MPL::Value<wpeVal,wpeVal::v0> v0{};
            constexpr MPL::Value<wpeVal,wpeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wpeVal> wpe{}; 
        ///Supervisor Access
        enum class supVal {
            v0=0x00000000,     ///<Non-supervisor mode write accesses are not supported and generate a bus error.
            v1=0x00000001,     ///<Non-supervisor mode write accesses are supported.
        };
        namespace supValC{
            constexpr MPL::Value<supVal,supVal::v0> v0{};
            constexpr MPL::Value<supVal,supVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,supVal> sup{}; 
        ///Update Mode
        enum class umVal {
            v0=0x00000000,     ///<Registers cannot be written when locked.
            v1=0x00000001,     ///<Registers can be written when locked under limited conditions.
        };
        namespace umValC{
            constexpr MPL::Value<umVal,umVal::v0> v0{};
            constexpr MPL::Value<umVal,umVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,umVal> um{}; 
        ///Oscillator Enable
        enum class osceVal {
            v0=0x00000000,     ///<32.768 kHz oscillator is disabled.
            v1=0x00000001,     ///<32.768 kHz oscillator is enabled. After setting this bit, wait the oscillator startup time before enabling the time counter to allow the 32.768 kHz clock time to stabilize.
        };
        namespace osceValC{
            constexpr MPL::Value<osceVal,osceVal::v0> v0{};
            constexpr MPL::Value<osceVal,osceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,osceVal> osce{}; 
        ///Clock Output
        enum class clkoVal {
            v0=0x00000000,     ///<The 32 kHz clock is output to other peripherals.
            v1=0x00000001,     ///<The 32 kHz clock is not output to other peripherals.
        };
        namespace clkoValC{
            constexpr MPL::Value<clkoVal,clkoVal::v0> v0{};
            constexpr MPL::Value<clkoVal,clkoVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,clkoVal> clko{}; 
        ///Oscillator 16pF Load Configure
        enum class sc16pVal {
            v0=0x00000000,     ///<Disable the load.
            v1=0x00000001,     ///<Enable the additional load.
        };
        namespace sc16pValC{
            constexpr MPL::Value<sc16pVal,sc16pVal::v0> v0{};
            constexpr MPL::Value<sc16pVal,sc16pVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,sc16pVal> sc16p{}; 
        ///Oscillator 8pF Load Configure
        enum class sc8pVal {
            v0=0x00000000,     ///<Disable the load.
            v1=0x00000001,     ///<Enable the additional load.
        };
        namespace sc8pValC{
            constexpr MPL::Value<sc8pVal,sc8pVal::v0> v0{};
            constexpr MPL::Value<sc8pVal,sc8pVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,sc8pVal> sc8p{}; 
        ///Oscillator 4pF Load Configure
        enum class sc4pVal {
            v0=0x00000000,     ///<Disable the load.
            v1=0x00000001,     ///<Enable the additional load.
        };
        namespace sc4pValC{
            constexpr MPL::Value<sc4pVal,sc4pVal::v0> v0{};
            constexpr MPL::Value<sc4pVal,sc4pVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,sc4pVal> sc4p{}; 
        ///Oscillator 2pF Load Configure
        enum class sc2pVal {
            v0=0x00000000,     ///<Disable the load.
            v1=0x00000001,     ///<Enable the additional load.
        };
        namespace sc2pValC{
            constexpr MPL::Value<sc2pVal,sc2pVal::v0> v0{};
            constexpr MPL::Value<sc2pVal,sc2pVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,sc2pVal> sc2p{}; 
    }
    namespace RtcSr{    ///<RTC Status Register
        using Addr = Register::Address<0x4003d014,0xffffffe0,0,unsigned>;
        ///Time Invalid Flag
        enum class tifVal {
            v0=0x00000000,     ///<Time is valid.
            v1=0x00000001,     ///<Time is invalid and time counter is read as zero.
        };
        namespace tifValC{
            constexpr MPL::Value<tifVal,tifVal::v0> v0{};
            constexpr MPL::Value<tifVal,tifVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tifVal> tif{}; 
        ///Time Overflow Flag
        enum class tofVal {
            v0=0x00000000,     ///<Time overflow has not occurred.
            v1=0x00000001,     ///<Time overflow has occurred and time counter is read as zero.
        };
        namespace tofValC{
            constexpr MPL::Value<tofVal,tofVal::v0> v0{};
            constexpr MPL::Value<tofVal,tofVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,tofVal> tof{}; 
        ///Time Alarm Flag
        enum class tafVal {
            v0=0x00000000,     ///<Time alarm has not occurred.
            v1=0x00000001,     ///<Time alarm has occurred.
        };
        namespace tafValC{
            constexpr MPL::Value<tafVal,tafVal::v0> v0{};
            constexpr MPL::Value<tafVal,tafVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,tafVal> taf{}; 
        ///Monotonic Overflow Flag
        enum class mofVal {
            v0=0x00000000,     ///<Monotonic counter overflow has not occurred.
            v1=0x00000001,     ///<Monotonic counter overflow has occurred and monotonic counter is read as zero.
        };
        namespace mofValC{
            constexpr MPL::Value<mofVal,mofVal::v0> v0{};
            constexpr MPL::Value<mofVal,mofVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,mofVal> mof{}; 
        ///Time Counter Enable
        enum class tceVal {
            v0=0x00000000,     ///<Time counter is disabled.
            v1=0x00000001,     ///<Time counter is enabled.
        };
        namespace tceValC{
            constexpr MPL::Value<tceVal,tceVal::v0> v0{};
            constexpr MPL::Value<tceVal,tceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,tceVal> tce{}; 
    }
    namespace RtcLr{    ///<RTC Lock Register
        using Addr = Register::Address<0x4003d018,0xffff0087,0,unsigned>;
        ///Time Compensation Lock
        enum class tclVal {
            v0=0x00000000,     ///<Time Compensation Register is locked and writes are ignored.
            v1=0x00000001,     ///<Time Compensation Register is not locked and writes complete as normal.
        };
        namespace tclValC{
            constexpr MPL::Value<tclVal,tclVal::v0> v0{};
            constexpr MPL::Value<tclVal,tclVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,tclVal> tcl{}; 
        ///Control Register Lock
        enum class crlVal {
            v0=0x00000000,     ///<Control Register is locked and writes are ignored.
            v1=0x00000001,     ///<Control Register is not locked and writes complete as normal.
        };
        namespace crlValC{
            constexpr MPL::Value<crlVal,crlVal::v0> v0{};
            constexpr MPL::Value<crlVal,crlVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,crlVal> crl{}; 
        ///Status Register Lock
        enum class srlVal {
            v0=0x00000000,     ///<Status Register is locked and writes are ignored.
            v1=0x00000001,     ///<Status Register is not locked and writes complete as normal.
        };
        namespace srlValC{
            constexpr MPL::Value<srlVal,srlVal::v0> v0{};
            constexpr MPL::Value<srlVal,srlVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,srlVal> srl{}; 
        ///Lock Register Lock
        enum class lrlVal {
            v0=0x00000000,     ///<Lock Register is locked and writes are ignored.
            v1=0x00000001,     ///<Lock Register is not locked and writes complete as normal.
        };
        namespace lrlValC{
            constexpr MPL::Value<lrlVal,lrlVal::v0> v0{};
            constexpr MPL::Value<lrlVal,lrlVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,lrlVal> lrl{}; 
        ///Tamper Time Seconds Lock
        enum class ttslVal {
            v0=0x00000000,     ///<Tamper Time Seconds Register is locked and writes are ignored.
            v1=0x00000001,     ///<Tamper Time Seconds Register is not locked and writes complete as normal.
        };
        namespace ttslValC{
            constexpr MPL::Value<ttslVal,ttslVal::v0> v0{};
            constexpr MPL::Value<ttslVal,ttslVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ttslVal> ttsl{}; 
        ///Monotonic Enable Lock
        enum class melVal {
            v0=0x00000000,     ///<Monotonic Enable Register is locked and writes are ignored.
            v1=0x00000001,     ///<Monotonic Enable Register is not locked and writes complete as normal.
        };
        namespace melValC{
            constexpr MPL::Value<melVal,melVal::v0> v0{};
            constexpr MPL::Value<melVal,melVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,melVal> mel{}; 
        ///Monotonic Counter Low Lock
        enum class mcllVal {
            v0=0x00000000,     ///<Monotonic Counter Low Register is locked and writes are ignored.
            v1=0x00000001,     ///<Monotonic Counter Low Register is not locked and writes complete as normal.
        };
        namespace mcllValC{
            constexpr MPL::Value<mcllVal,mcllVal::v0> v0{};
            constexpr MPL::Value<mcllVal,mcllVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,mcllVal> mcll{}; 
        ///Monotonic Counter High Lock
        enum class mchlVal {
            v0=0x00000000,     ///<Monotonic Counter High Register is locked and writes are ignored.
            v1=0x00000001,     ///<Monotonic Counter High Register is not locked and writes complete as normal.
        };
        namespace mchlValC{
            constexpr MPL::Value<mchlVal,mchlVal::v0> v0{};
            constexpr MPL::Value<mchlVal,mchlVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,mchlVal> mchl{}; 
        ///Tamper Enable Lock
        enum class telVal {
            v0=0x00000000,     ///<Tamper Enable Register is locked and writes are ignored.
            v1=0x00000001,     ///<Tamper Enable Register is not locked and writes complete as normal.
        };
        namespace telValC{
            constexpr MPL::Value<telVal,telVal::v0> v0{};
            constexpr MPL::Value<telVal,telVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,telVal> tel{}; 
        ///Tamper Detect Lock
        enum class tdlVal {
            v0=0x00000000,     ///<Tamper Detect Register is locked and writes are ignored.
            v1=0x00000001,     ///<Tamper Detect Register is not locked and writes complete as normal.
        };
        namespace tdlValC{
            constexpr MPL::Value<tdlVal,tdlVal::v0> v0{};
            constexpr MPL::Value<tdlVal,tdlVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,tdlVal> tdl{}; 
        ///Tamper Trim Lock
        enum class ttlVal {
            v0=0x00000000,     ///<Tamper Trim Register is locked and writes are ignored.
            v1=0x00000001,     ///<Tamper Trim Register is not locked and writes complete as normal.
        };
        namespace ttlValC{
            constexpr MPL::Value<ttlVal,ttlVal::v0> v0{};
            constexpr MPL::Value<ttlVal,ttlVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ttlVal> ttl{}; 
        ///Tamper Interrupt Lock
        enum class tilVal {
            v0=0x00000000,     ///<Tamper Interrupt Register is locked and writes are ignored.
            v1=0x00000001,     ///<Tamper Interrupt Register is not locked and writes complete as normal.
        };
        namespace tilValC{
            constexpr MPL::Value<tilVal,tilVal::v0> v0{};
            constexpr MPL::Value<tilVal,tilVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,tilVal> til{}; 
    }
    namespace RtcIer{    ///<RTC Interrupt Enable Register
        using Addr = Register::Address<0x4003d01c,0xffffff60,0,unsigned>;
        ///Time Invalid Interrupt Enable
        enum class tiieVal {
            v0=0x00000000,     ///<Time invalid flag does not generate an interrupt.
            v1=0x00000001,     ///<Time invalid flag does generate an interrupt.
        };
        namespace tiieValC{
            constexpr MPL::Value<tiieVal,tiieVal::v0> v0{};
            constexpr MPL::Value<tiieVal,tiieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tiieVal> tiie{}; 
        ///Time Overflow Interrupt Enable
        enum class toieVal {
            v0=0x00000000,     ///<Time overflow flag does not generate an interrupt.
            v1=0x00000001,     ///<Time overflow flag does generate an interrupt.
        };
        namespace toieValC{
            constexpr MPL::Value<toieVal,toieVal::v0> v0{};
            constexpr MPL::Value<toieVal,toieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,toieVal> toie{}; 
        ///Time Alarm Interrupt Enable
        enum class taieVal {
            v0=0x00000000,     ///<Time alarm flag does not generate an interrupt.
            v1=0x00000001,     ///<Time alarm flag does generate an interrupt.
        };
        namespace taieValC{
            constexpr MPL::Value<taieVal,taieVal::v0> v0{};
            constexpr MPL::Value<taieVal,taieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,taieVal> taie{}; 
        ///Monotonic Overflow Interrupt Enable
        enum class moieVal {
            v0=0x00000000,     ///<Monotonic overflow flag does not generate an interrupt.
            v1=0x00000001,     ///<Monotonic overflow flag does generate an interrupt.
        };
        namespace moieValC{
            constexpr MPL::Value<moieVal,moieVal::v0> v0{};
            constexpr MPL::Value<moieVal,moieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,moieVal> moie{}; 
        ///Time Seconds Interrupt Enable
        enum class tsieVal {
            v0=0x00000000,     ///<Seconds interrupt is disabled.
            v1=0x00000001,     ///<Seconds interrupt is enabled.
        };
        namespace tsieValC{
            constexpr MPL::Value<tsieVal,tsieVal::v0> v0{};
            constexpr MPL::Value<tsieVal,tsieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,tsieVal> tsie{}; 
        ///Wakeup Pin On
        enum class wponVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<If the wakeup pin is enabled, then the wakeup pin will assert.
        };
        namespace wponValC{
            constexpr MPL::Value<wponVal,wponVal::v0> v0{};
            constexpr MPL::Value<wponVal,wponVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,wponVal> wpon{}; 
    }
    namespace RtcTtsr{    ///<RTC Tamper Time Seconds Register
        using Addr = Register::Address<0x4003d020,0x00000000,0,unsigned>;
        ///Tamper Time Seconds
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tts{}; 
    }
    namespace RtcMer{    ///<RTC Monotonic Enable Register
        using Addr = Register::Address<0x4003d024,0xffffffef,0,unsigned>;
        ///Monotonic Counter Enable
        enum class mceVal {
            v0=0x00000000,     ///<Writes to the monotonic counter load the counter with the value written.
            v1=0x00000001,     ///<Writes to the monotonic counter increment the counter.
        };
        namespace mceValC{
            constexpr MPL::Value<mceVal,mceVal::v0> v0{};
            constexpr MPL::Value<mceVal,mceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,mceVal> mce{}; 
    }
    namespace RtcMclr{    ///<RTC Monotonic Counter Low Register
        using Addr = Register::Address<0x4003d028,0x00000000,0,unsigned>;
        ///Monotonic Counter Low
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mcl{}; 
    }
    namespace RtcMchr{    ///<RTC Monotonic Counter High Register
        using Addr = Register::Address<0x4003d02c,0x00000000,0,unsigned>;
        ///Monotonic Counter High
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mch{}; 
    }
    namespace RtcTer{    ///<RTC Tamper Enable Register
        using Addr = Register::Address<0x4003d030,0xffffffc0,0,unsigned>;
        ///DryIce Tamper Enable
        enum class dteVal {
            v0=0x00000000,     ///<Tamper source disabled.
            v1=0x00000001,     ///<Set the time invalid flag if the DryIce tamper flag is set.
        };
        namespace dteValC{
            constexpr MPL::Value<dteVal,dteVal::v0> v0{};
            constexpr MPL::Value<dteVal,dteVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dteVal> dte{}; 
        ///Voltage Tamper Enable
        enum class vteVal {
            v0=0x00000000,     ///<Tamper source disabled.
            v1=0x00000001,     ///<Set the time invalid flag if the voltage tamper flag is set.
        };
        namespace vteValC{
            constexpr MPL::Value<vteVal,vteVal::v0> v0{};
            constexpr MPL::Value<vteVal,vteVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,vteVal> vte{}; 
        ///Clock Tamper Enable
        enum class cteVal {
            v0=0x00000000,     ///<Tamper source disabled.
            v1=0x00000001,     ///<Set the time invalid flag if the clock tamper flag is set.
        };
        namespace cteValC{
            constexpr MPL::Value<cteVal,cteVal::v0> v0{};
            constexpr MPL::Value<cteVal,cteVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cteVal> cte{}; 
        ///Temperature Tamper Enable
        enum class tteVal {
            v0=0x00000000,     ///<Tamper source disabled.
            v1=0x00000001,     ///<Set the time invalid flag if the temperature tamper flag is set.
        };
        namespace tteValC{
            constexpr MPL::Value<tteVal,tteVal::v0> v0{};
            constexpr MPL::Value<tteVal,tteVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,tteVal> tte{}; 
        ///Flash Security Enable
        enum class fseVal {
            v0=0x00000000,     ///<Tamper source disabled.
            v1=0x00000001,     ///<Set the time invalid flag if the flash security flag is set.
        };
        namespace fseValC{
            constexpr MPL::Value<fseVal,fseVal::v0> v0{};
            constexpr MPL::Value<fseVal,fseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,fseVal> fse{}; 
        ///Test Mode Enable
        enum class tmeVal {
            v0=0x00000000,     ///<Tamper source disabled.
            v1=0x00000001,     ///<Set the time invalid flag if the test mode flag is set.
        };
        namespace tmeValC{
            constexpr MPL::Value<tmeVal,tmeVal::v0> v0{};
            constexpr MPL::Value<tmeVal,tmeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,tmeVal> tme{}; 
    }
    namespace RtcTdr{    ///<RTC Tamper Detect Register
        using Addr = Register::Address<0x4003d034,0xffffffc0,0,unsigned>;
        ///DryIce Tamper Flag
        enum class dtfVal {
            v0=0x00000000,     ///<Tamper not detected.
            v1=0x00000001,     ///<DryIce tamper detected.
        };
        namespace dtfValC{
            constexpr MPL::Value<dtfVal,dtfVal::v0> v0{};
            constexpr MPL::Value<dtfVal,dtfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dtfVal> dtf{}; 
        ///Voltage Tamper Flag
        enum class vtfVal {
            v0=0x00000000,     ///<Tamper not detected.
            v1=0x00000001,     ///<Voltage tampering detected.
        };
        namespace vtfValC{
            constexpr MPL::Value<vtfVal,vtfVal::v0> v0{};
            constexpr MPL::Value<vtfVal,vtfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,vtfVal> vtf{}; 
        ///Clock Tamper Flag
        enum class ctfVal {
            v0=0x00000000,     ///<Tamper not detected.
            v1=0x00000001,     ///<Clock tampering detected.
        };
        namespace ctfValC{
            constexpr MPL::Value<ctfVal,ctfVal::v0> v0{};
            constexpr MPL::Value<ctfVal,ctfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ctfVal> ctf{}; 
        ///Temperature Tamper Flag
        enum class ttfVal {
            v0=0x00000000,     ///<Tamper not detected.
            v1=0x00000001,     ///<Temperature tampering detected.
        };
        namespace ttfValC{
            constexpr MPL::Value<ttfVal,ttfVal::v0> v0{};
            constexpr MPL::Value<ttfVal,ttfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ttfVal> ttf{}; 
        ///Flash Security Flag
        enum class fsfVal {
            v0=0x00000000,     ///<Tamper not detected.
            v1=0x00000001,     ///<Flash security tamper detected.
        };
        namespace fsfValC{
            constexpr MPL::Value<fsfVal,fsfVal::v0> v0{};
            constexpr MPL::Value<fsfVal,fsfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,fsfVal> fsf{}; 
        ///Test Mode Flag
        enum class tmfVal {
            v0=0x00000000,     ///<Tamper not detected.
            v1=0x00000001,     ///<Test mode tamper detected.
        };
        namespace tmfValC{
            constexpr MPL::Value<tmfVal,tmfVal::v0> v0{};
            constexpr MPL::Value<tmfVal,tmfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,tmfVal> tmf{}; 
    }
    namespace RtcTtr{    ///<RTC Tamper Trim Register
        using Addr = Register::Address<0x4003d038,0xfffc0000,0,unsigned>;
        ///Voltage Detect Trim Low
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> vdtl{}; 
        ///Voltage Detect Trim High
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> vdth{}; 
        ///Clock Detect Trim Low
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> cdtl{}; 
        ///Clock Detect Trim High
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> cdth{}; 
        ///Temperature Detect Trim High
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> tdth{}; 
        ///Temperature Detect Trim Low
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> tdtl{}; 
    }
    namespace RtcTir{    ///<RTC Tamper Interrupt Register
        using Addr = Register::Address<0x4003d03c,0xffffffc0,0,unsigned>;
        ///DryIce Tamper Interrupt Enable
        enum class dtieVal {
            v0=0x00000000,     ///<Interupt disabled.
            v1=0x00000001,     ///<An interrupt is generated when DryIce tamper flag is set.
        };
        namespace dtieValC{
            constexpr MPL::Value<dtieVal,dtieVal::v0> v0{};
            constexpr MPL::Value<dtieVal,dtieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dtieVal> dtie{}; 
        ///Voltage Tamper Interrupt Enable
        enum class vtieVal {
            v0=0x00000000,     ///<Interupt disabled.
            v1=0x00000001,     ///<An interrupt is generated when the voltage tamper flag is set.
        };
        namespace vtieValC{
            constexpr MPL::Value<vtieVal,vtieVal::v0> v0{};
            constexpr MPL::Value<vtieVal,vtieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,vtieVal> vtie{}; 
        ///Clock Tamper Interrupt Enable
        enum class ctieVal {
            v0=0x00000000,     ///<Interupt disabled.
            v1=0x00000001,     ///<An interrupt is generated when the clock tamper flag is set.
        };
        namespace ctieValC{
            constexpr MPL::Value<ctieVal,ctieVal::v0> v0{};
            constexpr MPL::Value<ctieVal,ctieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ctieVal> ctie{}; 
        ///Temperature Tamper Interrupt Enable
        enum class ttieVal {
            v0=0x00000000,     ///<Interupt disabled.
            v1=0x00000001,     ///<An interrupt is generated when the temperature tamper flag is set.
        };
        namespace ttieValC{
            constexpr MPL::Value<ttieVal,ttieVal::v0> v0{};
            constexpr MPL::Value<ttieVal,ttieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ttieVal> ttie{}; 
        ///Flash Security Interrupt Enable
        enum class fsieVal {
            v0=0x00000000,     ///<Interupt disabled.
            v1=0x00000001,     ///<An interrupt is generated when the flash security flag is set.
        };
        namespace fsieValC{
            constexpr MPL::Value<fsieVal,fsieVal::v0> v0{};
            constexpr MPL::Value<fsieVal,fsieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,fsieVal> fsie{}; 
        ///Test Mode Interrupt Enable
        enum class tmieVal {
            v0=0x00000000,     ///<Interupt disabled.
            v1=0x00000001,     ///<An interrupt is generated when the test mode flag is set.
        };
        namespace tmieValC{
            constexpr MPL::Value<tmieVal,tmieVal::v0> v0{};
            constexpr MPL::Value<tmieVal,tmieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,tmieVal> tmie{}; 
    }
    namespace RtcWar{    ///<RTC Write Access Register
        using Addr = Register::Address<0x4003d800,0xffff0000,0,unsigned>;
        ///Time Seconds Register Write
        enum class tsrwVal {
            v0=0x00000000,     ///<Writes to the Time Seconds Register are ignored.
            v1=0x00000001,     ///<Writes to the Time Seconds Register complete as normal.
        };
        namespace tsrwValC{
            constexpr MPL::Value<tsrwVal,tsrwVal::v0> v0{};
            constexpr MPL::Value<tsrwVal,tsrwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tsrwVal> tsrw{}; 
        ///Time Prescaler Register Write
        enum class tprwVal {
            v0=0x00000000,     ///<Writes to the Time Prescaler Register are ignored.
            v1=0x00000001,     ///<Writes to the Time Prescaler Register complete as normal.
        };
        namespace tprwValC{
            constexpr MPL::Value<tprwVal,tprwVal::v0> v0{};
            constexpr MPL::Value<tprwVal,tprwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,tprwVal> tprw{}; 
        ///Time Alarm Register Write
        enum class tarwVal {
            v0=0x00000000,     ///<Writes to the Time Alarm Register are ignored.
            v1=0x00000001,     ///<Writes to the Time Alarm Register complete as normal.
        };
        namespace tarwValC{
            constexpr MPL::Value<tarwVal,tarwVal::v0> v0{};
            constexpr MPL::Value<tarwVal,tarwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,tarwVal> tarw{}; 
        ///Time Compensation Register Write
        enum class tcrwVal {
            v0=0x00000000,     ///<Writes to the Time Compensation Register are ignored.
            v1=0x00000001,     ///<Writes to the Time Compensation Register complete as normal.
        };
        namespace tcrwValC{
            constexpr MPL::Value<tcrwVal,tcrwVal::v0> v0{};
            constexpr MPL::Value<tcrwVal,tcrwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,tcrwVal> tcrw{}; 
        ///Control Register Write
        enum class crwVal {
            v0=0x00000000,     ///<Writes to the Control Register are ignored.
            v1=0x00000001,     ///<Writes to the Control Register complete as normal.
        };
        namespace crwValC{
            constexpr MPL::Value<crwVal,crwVal::v0> v0{};
            constexpr MPL::Value<crwVal,crwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,crwVal> crw{}; 
        ///Status Register Write
        enum class srwVal {
            v0=0x00000000,     ///<Writes to the Status Register are ignored.
            v1=0x00000001,     ///<Writes to the Status Register complete as normal.
        };
        namespace srwValC{
            constexpr MPL::Value<srwVal,srwVal::v0> v0{};
            constexpr MPL::Value<srwVal,srwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,srwVal> srw{}; 
        ///Lock Register Write
        enum class lrwVal {
            v0=0x00000000,     ///<Writes to the Lock Register are ignored.
            v1=0x00000001,     ///<Writes to the Lock Register complete as normal.
        };
        namespace lrwValC{
            constexpr MPL::Value<lrwVal,lrwVal::v0> v0{};
            constexpr MPL::Value<lrwVal,lrwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,lrwVal> lrw{}; 
        ///Interrupt Enable Register Write
        enum class ierwVal {
            v0=0x00000000,     ///<Writes to the Interupt Enable Register are ignored.
            v1=0x00000001,     ///<Writes to the Interrupt Enable Register complete as normal.
        };
        namespace ierwValC{
            constexpr MPL::Value<ierwVal,ierwVal::v0> v0{};
            constexpr MPL::Value<ierwVal,ierwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ierwVal> ierw{}; 
        ///Tamper Time Seconds Write
        enum class ttswVal {
            v0=0x00000000,     ///<Writes to the Tamper Time Seconds Register are ignored.
            v1=0x00000001,     ///<Writes to the Tamper Time Seconds Register complete as normal.
        };
        namespace ttswValC{
            constexpr MPL::Value<ttswVal,ttswVal::v0> v0{};
            constexpr MPL::Value<ttswVal,ttswVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ttswVal> ttsw{}; 
        ///Monotonic Enable Register Write
        enum class merwVal {
            v0=0x00000000,     ///<Writes to the Monotonic Enable Register are ignored.
            v1=0x00000001,     ///<Writes to the Monotonic Enable Register complete as normal.
        };
        namespace merwValC{
            constexpr MPL::Value<merwVal,merwVal::v0> v0{};
            constexpr MPL::Value<merwVal,merwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,merwVal> merw{}; 
        ///Monotonic Counter Low Write
        enum class mclwVal {
            v0=0x00000000,     ///<Writes to the Monotonic Counter Low Register are ignored.
            v1=0x00000001,     ///<Writes to the Monotonic Counter Low Register complete as normal.
        };
        namespace mclwValC{
            constexpr MPL::Value<mclwVal,mclwVal::v0> v0{};
            constexpr MPL::Value<mclwVal,mclwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,mclwVal> mclw{}; 
        ///Monotonic Counter High Write
        enum class mchwVal {
            v0=0x00000000,     ///<Writes to the Monotonic Counter High Register are ignored.
            v1=0x00000001,     ///<Writes to the Monotonic Counter High Register complete as normal.
        };
        namespace mchwValC{
            constexpr MPL::Value<mchwVal,mchwVal::v0> v0{};
            constexpr MPL::Value<mchwVal,mchwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,mchwVal> mchw{}; 
        ///Tamper Enable Register Write
        enum class terwVal {
            v0=0x00000000,     ///<Writes to the Tamper Enable Register are ignored.
            v1=0x00000001,     ///<Writes to the Tamper Enable Register complete as normal.
        };
        namespace terwValC{
            constexpr MPL::Value<terwVal,terwVal::v0> v0{};
            constexpr MPL::Value<terwVal,terwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,terwVal> terw{}; 
        ///Tamper Detect Register Write
        enum class tdrwVal {
            v0=0x00000000,     ///<Writes to the Tamper Detect Register are ignored.
            v1=0x00000001,     ///<Writes to the Tamper Detect Register complete as normal.
        };
        namespace tdrwValC{
            constexpr MPL::Value<tdrwVal,tdrwVal::v0> v0{};
            constexpr MPL::Value<tdrwVal,tdrwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,tdrwVal> tdrw{}; 
        ///Tamper Trim Register Write
        enum class ttrwVal {
            v0=0x00000000,     ///<Writes to the Tamper Trim Register are ignored.
            v1=0x00000001,     ///<Writes to the Tamper Trim Register complete as normal.
        };
        namespace ttrwValC{
            constexpr MPL::Value<ttrwVal,ttrwVal::v0> v0{};
            constexpr MPL::Value<ttrwVal,ttrwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ttrwVal> ttrw{}; 
        ///Tamper Interrupt Register Write
        enum class tirwVal {
            v0=0x00000000,     ///<Writes to the Tamper Interrupt Register are ignored.
            v1=0x00000001,     ///<Writes to the Tamper Interrupt Register complete as normal.
        };
        namespace tirwValC{
            constexpr MPL::Value<tirwVal,tirwVal::v0> v0{};
            constexpr MPL::Value<tirwVal,tirwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,tirwVal> tirw{}; 
    }
    namespace RtcRar{    ///<RTC Read Access Register
        using Addr = Register::Address<0x4003d804,0xffff0000,0,unsigned>;
        ///Time Seconds Register Read
        enum class tsrrVal {
            v0=0x00000000,     ///<Reads to the Time Seconds Register are ignored.
            v1=0x00000001,     ///<Reads to the Time Seconds Register complete as normal.
        };
        namespace tsrrValC{
            constexpr MPL::Value<tsrrVal,tsrrVal::v0> v0{};
            constexpr MPL::Value<tsrrVal,tsrrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tsrrVal> tsrr{}; 
        ///Time Prescaler Register Read
        enum class tprrVal {
            v0=0x00000000,     ///<Reads to the Time Pprescaler Register are ignored.
            v1=0x00000001,     ///<Reads to the Time Prescaler Register complete as normal.
        };
        namespace tprrValC{
            constexpr MPL::Value<tprrVal,tprrVal::v0> v0{};
            constexpr MPL::Value<tprrVal,tprrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,tprrVal> tprr{}; 
        ///Time Alarm Register Read
        enum class tarrVal {
            v0=0x00000000,     ///<Reads to the Time Alarm Register are ignored.
            v1=0x00000001,     ///<Reads to the Time Alarm Register complete as normal.
        };
        namespace tarrValC{
            constexpr MPL::Value<tarrVal,tarrVal::v0> v0{};
            constexpr MPL::Value<tarrVal,tarrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,tarrVal> tarr{}; 
        ///Time Compensation Register Read
        enum class tcrrVal {
            v0=0x00000000,     ///<Reads to the Time Compensation Register are ignored.
            v1=0x00000001,     ///<Reads to the Time Compensation Register complete as normal.
        };
        namespace tcrrValC{
            constexpr MPL::Value<tcrrVal,tcrrVal::v0> v0{};
            constexpr MPL::Value<tcrrVal,tcrrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,tcrrVal> tcrr{}; 
        ///Control Register Read
        enum class crrVal {
            v0=0x00000000,     ///<Reads to the Control Register are ignored.
            v1=0x00000001,     ///<Reads to the Control Register complete as normal.
        };
        namespace crrValC{
            constexpr MPL::Value<crrVal,crrVal::v0> v0{};
            constexpr MPL::Value<crrVal,crrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,crrVal> crr{}; 
        ///Status Register Read
        enum class srrVal {
            v0=0x00000000,     ///<Reads to the Status Register are ignored.
            v1=0x00000001,     ///<Reads to the Status Register complete as normal.
        };
        namespace srrValC{
            constexpr MPL::Value<srrVal,srrVal::v0> v0{};
            constexpr MPL::Value<srrVal,srrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,srrVal> srr{}; 
        ///Lock Register Read
        enum class lrrVal {
            v0=0x00000000,     ///<Reads to the Lock Register are ignored.
            v1=0x00000001,     ///<Reads to the Lock Register complete as normal.
        };
        namespace lrrValC{
            constexpr MPL::Value<lrrVal,lrrVal::v0> v0{};
            constexpr MPL::Value<lrrVal,lrrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,lrrVal> lrr{}; 
        ///Interrupt Enable Register Read
        enum class ierrVal {
            v0=0x00000000,     ///<Reads to the Interrupt Enable Register are ignored.
            v1=0x00000001,     ///<Reads to the Interrupt Enable Register complete as normal.
        };
        namespace ierrValC{
            constexpr MPL::Value<ierrVal,ierrVal::v0> v0{};
            constexpr MPL::Value<ierrVal,ierrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ierrVal> ierr{}; 
        ///Tamper Time Seconds Read
        enum class ttsrVal {
            v0=0x00000000,     ///<Reads to the Tamper Time Seconds Register are ignored.
            v1=0x00000001,     ///<Reads to the Tamper Time Seconds Register complete as normal.
        };
        namespace ttsrValC{
            constexpr MPL::Value<ttsrVal,ttsrVal::v0> v0{};
            constexpr MPL::Value<ttsrVal,ttsrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ttsrVal> ttsr{}; 
        ///Monotonic Enable Register Read
        enum class merrVal {
            v0=0x00000000,     ///<Reads to the Monotonic Enable Register are ignored.
            v1=0x00000001,     ///<Reads to the Monotonic Enable Register complete as normal.
        };
        namespace merrValC{
            constexpr MPL::Value<merrVal,merrVal::v0> v0{};
            constexpr MPL::Value<merrVal,merrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,merrVal> merr{}; 
        ///Monotonic Counter Low Read
        enum class mclrVal {
            v0=0x00000000,     ///<Reads to the Monotonic Counter Low Register are ignored.
            v1=0x00000001,     ///<Reads to the Monotonic Counter Low Register complete as normal.
        };
        namespace mclrValC{
            constexpr MPL::Value<mclrVal,mclrVal::v0> v0{};
            constexpr MPL::Value<mclrVal,mclrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,mclrVal> mclr{}; 
        ///Monotonic Counter High Read
        enum class mchrVal {
            v0=0x00000000,     ///<Reads to the Monotonic Counter High Register are ignored.
            v1=0x00000001,     ///<Reads to the Monotonic Counter High Register complete as normal.
        };
        namespace mchrValC{
            constexpr MPL::Value<mchrVal,mchrVal::v0> v0{};
            constexpr MPL::Value<mchrVal,mchrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,mchrVal> mchr{}; 
        ///Tamper Enable Register Read
        enum class terrVal {
            v0=0x00000000,     ///<Reads to the Tamper Enable Register are ignored.
            v1=0x00000001,     ///<Reads to the Tamper Enable Register complete as normal.
        };
        namespace terrValC{
            constexpr MPL::Value<terrVal,terrVal::v0> v0{};
            constexpr MPL::Value<terrVal,terrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,terrVal> terr{}; 
        ///Tamper Detect Register Read
        enum class tdrrVal {
            v0=0x00000000,     ///<Reads to the Tamper Detect Register are ignored.
            v1=0x00000001,     ///<Reads to the Tamper Detect Register complete as normal.
        };
        namespace tdrrValC{
            constexpr MPL::Value<tdrrVal,tdrrVal::v0> v0{};
            constexpr MPL::Value<tdrrVal,tdrrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,tdrrVal> tdrr{}; 
        ///Tamper Trim Register Read
        enum class ttrrVal {
            v0=0x00000000,     ///<Reads to the Tamper Trim Register are ignored.
            v1=0x00000001,     ///<Reads to the Tamper Trim Register complete as normal.
        };
        namespace ttrrValC{
            constexpr MPL::Value<ttrrVal,ttrrVal::v0> v0{};
            constexpr MPL::Value<ttrrVal,ttrrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ttrrVal> ttrr{}; 
        ///Tamper Interrupt Register Read
        enum class tirrVal {
            v0=0x00000000,     ///<Reads to the Tamper Interrupt Register are ignored.
            v1=0x00000001,     ///<Reads to the Tamper Interrupt Register complete as normal.
        };
        namespace tirrValC{
            constexpr MPL::Value<tirrVal,tirrVal::v0> v0{};
            constexpr MPL::Value<tirrVal,tirrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,tirrVal> tirr{}; 
    }
}
