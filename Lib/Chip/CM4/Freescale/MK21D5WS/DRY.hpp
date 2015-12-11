#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Tamper Detect and Secure Key Storage
    namespace DrySkvr{    ///<DryIce Secure Key Valid Register
        using Addr = Register::Address<0x40042004,0xffffff00,0,unsigned>;
        ///Secure Key Valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> skv{}; 
    }
    namespace DrySkwlr{    ///<DryIce Secure Key Write Lock Register
        using Addr = Register::Address<0x40042008,0xffffff00,0,unsigned>;
        ///Secure Key Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> skwl{}; 
    }
    namespace DrySkrlr{    ///<DryIce Secure Key Read Lock Register
        using Addr = Register::Address<0x4004200c,0xffffff00,0,unsigned>;
        ///Secure Key Read Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> skrl{}; 
    }
    namespace DryCr{    ///<DryIce Control Register
        using Addr = Register::Address<0x40042010,0x0001f0f0,0,unsigned>;
        ///Software Reset
        enum class SwrVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Perform a software reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SwrVal> swr{}; 
        namespace SwrValC{
            constexpr Register::FieldValue<decltype(swr)::Type,SwrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swr)::Type,SwrVal::v1> v1{};
        }
        ///DryIce Enable
        enum class DenVal {
            v0=0x00000000,     ///<DryIce clock and prescaler are disabled.
            v1=0x00000001,     ///<DryIce clock and prescaler are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DenVal> den{}; 
        namespace DenValC{
            constexpr Register::FieldValue<decltype(den)::Type,DenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(den)::Type,DenVal::v1> v1{};
        }
        ///Tamper Force System Reset
        enum class TfsrVal {
            v0=0x00000000,     ///<Do not force chip reset when tampering is detected.
            v1=0x00000001,     ///<Force chip reset when tampering is detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TfsrVal> tfsr{}; 
        namespace TfsrValC{
            constexpr Register::FieldValue<decltype(tfsr)::Type,TfsrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tfsr)::Type,TfsrVal::v1> v1{};
        }
        ///Update Mode
        enum class UmVal {
            v0=0x00000000,     ///<DryIce Status Register cannot be written when the Status Register Lock bit within the Lock Register (LR[SRL]) is clear.
            v1=0x00000001,     ///<DryIce Status Register cannot be written when the Status Register Lock bit within the Lock Register (LR[SRL]) is clear and DryIce Tamper Flag (SR[DTF]) is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,UmVal> um{}; 
        namespace UmValC{
            constexpr Register::FieldValue<decltype(um)::Type,UmVal::v0> v0{};
            constexpr Register::FieldValue<decltype(um)::Type,UmVal::v1> v1{};
        }
        ///Tamper Hysteresis Select
        enum class ThysVal {
            v0=0x00000000,     ///<Hysteresis is set to a range of 305 mV to 440 mV.
            v1=0x00000001,     ///<Hysteresis is set to a range of 490 mV to 705 mV.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ThysVal> thys{}; 
        namespace ThysValC{
            constexpr Register::FieldValue<decltype(thys)::Type,ThysVal::v0> v0{};
            constexpr Register::FieldValue<decltype(thys)::Type,ThysVal::v1> v1{};
        }
        ///Tamper Passive Filter Enable
        enum class TpfeVal {
            v0=0x00000000,     ///<Tamper pins are configured with passive input filter disabled
            v1=0x00000001,     ///<Tamper pins are configured with passive input filter enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,TpfeVal> tpfe{}; 
        namespace TpfeValC{
            constexpr Register::FieldValue<decltype(tpfe)::Type,TpfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tpfe)::Type,TpfeVal::v1> v1{};
        }
        ///Tamper Drive Strength Enable
        enum class TdseVal {
            v0=0x00000000,     ///<Tamper pins are configured for low drive strength
            v1=0x00000001,     ///<Tamper pins are configured for high drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,TdseVal> tdse{}; 
        namespace TdseValC{
            constexpr Register::FieldValue<decltype(tdse)::Type,TdseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tdse)::Type,TdseVal::v1> v1{};
        }
        ///Tamper Slew Rate Enable
        enum class TsreVal {
            v0=0x00000000,     ///<Tamper pins are configured for slow slew rate.
            v1=0x00000001,     ///<Tamper pins are configured for fast slew rate.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,TsreVal> tsre{}; 
        namespace TsreValC{
            constexpr Register::FieldValue<decltype(tsre)::Type,TsreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tsre)::Type,TsreVal::v1> v1{};
        }
        ///DryIce Prescaler Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,17),Register::ReadWriteAccess,unsigned> dpr{}; 
    }
    namespace DrySr{    ///<DryIce Status Register
        using Addr = Register::Address<0x40042014,0xff00fc00,0,unsigned>;
        ///DryIce Tamper Flag
        enum class DtfVal {
            v0=0x00000000,     ///<DryIce tampering not detected.
            v1=0x00000001,     ///<DryIce tampering detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DtfVal> dtf{}; 
        namespace DtfValC{
            constexpr Register::FieldValue<decltype(dtf)::Type,DtfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dtf)::Type,DtfVal::v1> v1{};
        }
        ///Tamper Acknowledge Flag
        enum class TafVal {
            v0=0x00000000,     ///<DryIce Tamper Flag (SR[DTF]) is clear or chip reset has not occurred after DryIce Tamper Flag (SR[DTF]) was set.
            v1=0x00000001,     ///<Chip reset has occurred after DryIce Tamper Flag (SR[DTF]) was set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TafVal> taf{}; 
        namespace TafValC{
            constexpr Register::FieldValue<decltype(taf)::Type,TafVal::v0> v0{};
            constexpr Register::FieldValue<decltype(taf)::Type,TafVal::v1> v1{};
        }
        ///Time Overflow Flag
        enum class TofVal {
            v0=0x00000000,     ///<Tamper not detected.
            v1=0x00000001,     ///<RTC time overflow tamper detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TofVal> tof{}; 
        namespace TofValC{
            constexpr Register::FieldValue<decltype(tof)::Type,TofVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tof)::Type,TofVal::v1> v1{};
        }
        ///Monotonic Overflow Flag
        enum class MofVal {
            v0=0x00000000,     ///<Tamper not detected.
            v1=0x00000001,     ///<RTC monotonic overflow tamper detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,MofVal> mof{}; 
        namespace MofValC{
            constexpr Register::FieldValue<decltype(mof)::Type,MofVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mof)::Type,MofVal::v1> v1{};
        }
        ///Voltage Tamper Flag
        enum class VtfVal {
            v0=0x00000000,     ///<Tamper not detected.
            v1=0x00000001,     ///<Voltage tampering detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,VtfVal> vtf{}; 
        namespace VtfValC{
            constexpr Register::FieldValue<decltype(vtf)::Type,VtfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vtf)::Type,VtfVal::v1> v1{};
        }
        ///Clock Tamper Flag
        enum class CtfVal {
            v0=0x00000000,     ///<Tamper not detected.
            v1=0x00000001,     ///<Clock tampering detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,CtfVal> ctf{}; 
        namespace CtfValC{
            constexpr Register::FieldValue<decltype(ctf)::Type,CtfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ctf)::Type,CtfVal::v1> v1{};
        }
        ///Temperature Tamper Flag
        enum class TtfVal {
            v0=0x00000000,     ///<Tamper not detected.
            v1=0x00000001,     ///<Temperature tampering detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TtfVal> ttf{}; 
        namespace TtfValC{
            constexpr Register::FieldValue<decltype(ttf)::Type,TtfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ttf)::Type,TtfVal::v1> v1{};
        }
        ///Security Tamper Flag
        enum class StfVal {
            v0=0x00000000,     ///<Tamper not detected.
            v1=0x00000001,     ///<Security module tamper detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,StfVal> stf{}; 
        namespace StfValC{
            constexpr Register::FieldValue<decltype(stf)::Type,StfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stf)::Type,StfVal::v1> v1{};
        }
        ///Flash Security Flag
        enum class FsfVal {
            v0=0x00000000,     ///<Tamper not detected.
            v1=0x00000001,     ///<Flash security tamper detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FsfVal> fsf{}; 
        namespace FsfValC{
            constexpr Register::FieldValue<decltype(fsf)::Type,FsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fsf)::Type,FsfVal::v1> v1{};
        }
        ///Test Mode Flag
        enum class TmfVal {
            v0=0x00000000,     ///<Tamper not detected.
            v1=0x00000001,     ///<Test mode tamper detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,TmfVal> tmf{}; 
        namespace TmfValC{
            constexpr Register::FieldValue<decltype(tmf)::Type,TmfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tmf)::Type,TmfVal::v1> v1{};
        }
        ///Tamper Pin Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> tpf{}; 
    }
    namespace DryLr{    ///<DryIce Lock Register
        using Addr = Register::Address<0x40042018,0xff00c001,0,unsigned>;
        ///Key Valid Lock
        enum class KvlVal {
            v0=0x00000000,     ///<Secure key valid register is locked and writes are ignored.
            v1=0x00000001,     ///<Secure key valid register is not locked and writes complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,KvlVal> kvl{}; 
        namespace KvlValC{
            constexpr Register::FieldValue<decltype(kvl)::Type,KvlVal::v0> v0{};
            constexpr Register::FieldValue<decltype(kvl)::Type,KvlVal::v1> v1{};
        }
        ///Key Write Lock
        enum class KwlVal {
            v0=0x00000000,     ///<Secure Key Write Lock Register is locked and writes are ignored.
            v1=0x00000001,     ///<Secure Key Write Lock Register is not locked and writes complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,KwlVal> kwl{}; 
        namespace KwlValC{
            constexpr Register::FieldValue<decltype(kwl)::Type,KwlVal::v0> v0{};
            constexpr Register::FieldValue<decltype(kwl)::Type,KwlVal::v1> v1{};
        }
        ///Key Read Lock
        enum class KrlVal {
            v0=0x00000000,     ///<Secure Key Read Lock Register is locked and writes are ignored.
            v1=0x00000001,     ///<Secure Key Read Lock Register is not locked and writes complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,KrlVal> krl{}; 
        namespace KrlValC{
            constexpr Register::FieldValue<decltype(krl)::Type,KrlVal::v0> v0{};
            constexpr Register::FieldValue<decltype(krl)::Type,KrlVal::v1> v1{};
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
            v0=0x00000000,     ///<Status Register is locked and writes are ignored.
            v1=0x00000001,     ///<Status Register is not locked and writes complete as normal.
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
        ///Interrupt Enable Lock
        enum class IelVal {
            v0=0x00000000,     ///<Interrupt enable register is locked and writes are ignored.
            v1=0x00000001,     ///<Interrupt enable register is not locked and writes complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,IelVal> iel{}; 
        namespace IelValC{
            constexpr Register::FieldValue<decltype(iel)::Type,IelVal::v0> v0{};
            constexpr Register::FieldValue<decltype(iel)::Type,IelVal::v1> v1{};
        }
        ///Tamper Seconds Lock
        enum class TslVal {
            v0=0x00000000,     ///<Tamper seconds register is locked and writes are ignored.
            v1=0x00000001,     ///<Tamper seconds register is not locked and writes complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,TslVal> tsl{}; 
        namespace TslValC{
            constexpr Register::FieldValue<decltype(tsl)::Type,TslVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tsl)::Type,TslVal::v1> v1{};
        }
        ///Tamper Enable Lock
        enum class TelVal {
            v0=0x00000000,     ///<Tamper enable register is locked and writes are ignored.
            v1=0x00000001,     ///<Tamper enable register is not locked and writes complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,TelVal> tel{}; 
        namespace TelValC{
            constexpr Register::FieldValue<decltype(tel)::Type,TelVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tel)::Type,TelVal::v1> v1{};
        }
        ///Pin Direction Lock
        enum class PdlVal {
            v0=0x00000000,     ///<Pin direction register is locked and writes are ignored.
            v1=0x00000001,     ///<Pin direction register is not locked and writes complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,PdlVal> pdl{}; 
        namespace PdlValC{
            constexpr Register::FieldValue<decltype(pdl)::Type,PdlVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pdl)::Type,PdlVal::v1> v1{};
        }
        ///Pin Polarity Lock
        enum class PplVal {
            v0=0x00000000,     ///<Pin polarity register is locked and writes are ignored.
            v1=0x00000001,     ///<Pin polarity register is not locked and writes complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,PplVal> ppl{}; 
        namespace PplValC{
            constexpr Register::FieldValue<decltype(ppl)::Type,PplVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ppl)::Type,PplVal::v1> v1{};
        }
        ///Active Tamper Lock
        enum class AtlVal {
            v0=0x00000000,     ///<Active tamper register is locked and writes are ignored.
            v1=0x00000001,     ///<Active tamper register is not locked and writes complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,AtlVal> atl{}; 
        namespace AtlValC{
            constexpr Register::FieldValue<decltype(atl)::Type,AtlVal::v0> v0{};
            constexpr Register::FieldValue<decltype(atl)::Type,AtlVal::v1> v1{};
        }
        ///Glitch Filter Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> gfl{}; 
    }
    namespace DryIer{    ///<DryIce Interrupt Enable Register
        using Addr = Register::Address<0x4004201c,0xff00fc02,0,unsigned>;
        ///DryIce Tamper Interrupt Enable
        enum class DtieVal {
            v0=0x00000000,     ///<When DryIce Tamper Flag (SR[DTF]) is set, an interrupt is not generated.
            v1=0x00000001,     ///<When DryIce Tamper Flag (SR[DTF]) is set, an interrupt is generated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DtieVal> dtie{}; 
        namespace DtieValC{
            constexpr Register::FieldValue<decltype(dtie)::Type,DtieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dtie)::Type,DtieVal::v1> v1{};
        }
        ///Time Overflow Interrupt Enable
        enum class ToieVal {
            v0=0x00000000,     ///<When time overflow flag is set, an interrupt is not generated.
            v1=0x00000001,     ///<When time overflow flag is set, an interrupt is generated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ToieVal> toie{}; 
        namespace ToieValC{
            constexpr Register::FieldValue<decltype(toie)::Type,ToieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(toie)::Type,ToieVal::v1> v1{};
        }
        ///Monotonic Overflow Interrupt Enable
        enum class MoieVal {
            v0=0x00000000,     ///<When monotonic overflow flag is set, an interrupt is not generated.
            v1=0x00000001,     ///<When monotonic overflow flag is set, an interrupt is generated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,MoieVal> moie{}; 
        namespace MoieValC{
            constexpr Register::FieldValue<decltype(moie)::Type,MoieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(moie)::Type,MoieVal::v1> v1{};
        }
        ///Voltage Tamper Interrupt Enable
        enum class VtieVal {
            v0=0x00000000,     ///<When voltage tamper flag is set, an interrupt is not generated.
            v1=0x00000001,     ///<When voltage tamper flag is set, an interrupt is generated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,VtieVal> vtie{}; 
        namespace VtieValC{
            constexpr Register::FieldValue<decltype(vtie)::Type,VtieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vtie)::Type,VtieVal::v1> v1{};
        }
        ///Clock Tamper Interrupt Enable
        enum class CtieVal {
            v0=0x00000000,     ///<When clock tamper flag is set, an interrupt is not generated.
            v1=0x00000001,     ///<When clock tamper flag is set, an interrupt is generated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,CtieVal> ctie{}; 
        namespace CtieValC{
            constexpr Register::FieldValue<decltype(ctie)::Type,CtieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ctie)::Type,CtieVal::v1> v1{};
        }
        ///Temperature Tamper Interrupt Enable
        enum class TtieVal {
            v0=0x00000000,     ///<When temperature tamper flag is set, an interrupt is not generated.
            v1=0x00000001,     ///<When temperature tamper flag is set, an interrupt is generated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TtieVal> ttie{}; 
        namespace TtieValC{
            constexpr Register::FieldValue<decltype(ttie)::Type,TtieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ttie)::Type,TtieVal::v1> v1{};
        }
        ///Security Tamper Interrupt Enable
        enum class StieVal {
            v0=0x00000000,     ///<When security tamper flag is set, an interrupt is not generated.
            v1=0x00000001,     ///<When security tamper flag is set, an interrupt is generated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,StieVal> stie{}; 
        namespace StieValC{
            constexpr Register::FieldValue<decltype(stie)::Type,StieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stie)::Type,StieVal::v1> v1{};
        }
        ///Flash Security Interrupt Enable
        enum class FsieVal {
            v0=0x00000000,     ///<When flash security flag is set, an interrupt is not generated.
            v1=0x00000001,     ///<When flash security flag is set, an interrupt is generated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FsieVal> fsie{}; 
        namespace FsieValC{
            constexpr Register::FieldValue<decltype(fsie)::Type,FsieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fsie)::Type,FsieVal::v1> v1{};
        }
        ///Test Mode Interrupt Enable
        enum class TmieVal {
            v0=0x00000000,     ///<When test mode flag is set, an interrupt is not generated.
            v1=0x00000001,     ///<When test mode flag is set, an interrupt is generated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,TmieVal> tmie{}; 
        namespace TmieValC{
            constexpr Register::FieldValue<decltype(tmie)::Type,TmieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tmie)::Type,TmieVal::v1> v1{};
        }
        ///Tamper Pin Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> tpie{}; 
    }
    namespace DryTsr{    ///<DryIce Tamper Seconds Register
        using Addr = Register::Address<0x40042020,0x00000000,0,unsigned>;
        ///Tamper Time Seconds
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tts{}; 
    }
    namespace DryTer{    ///<DryIce Tamper Enable Register
        using Addr = Register::Address<0x40042024,0xff00fc03,0,unsigned>;
        ///Time Overflow Enable
        enum class ToeVal {
            v0=0x00000000,     ///<When time overflow flag is set, tampering is not detected.
            v1=0x00000001,     ///<When time overflow flag is set, tampering is detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ToeVal> toe{}; 
        namespace ToeValC{
            constexpr Register::FieldValue<decltype(toe)::Type,ToeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(toe)::Type,ToeVal::v1> v1{};
        }
        ///Monotonic Overflow Enable
        enum class MoeVal {
            v0=0x00000000,     ///<When monotonic overflow flag is set, tampering is not detected.
            v1=0x00000001,     ///<When monotonic overflow flag is set, tampering is detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,MoeVal> moe{}; 
        namespace MoeValC{
            constexpr Register::FieldValue<decltype(moe)::Type,MoeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(moe)::Type,MoeVal::v1> v1{};
        }
        ///Voltage Tamper Enable
        enum class VteVal {
            v0=0x00000000,     ///<When voltage tamper flag is set, tampering is not detected.
            v1=0x00000001,     ///<When voltage tamper flag is set, tampering is detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,VteVal> vte{}; 
        namespace VteValC{
            constexpr Register::FieldValue<decltype(vte)::Type,VteVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vte)::Type,VteVal::v1> v1{};
        }
        ///Clock Tamper Enable
        enum class CteVal {
            v0=0x00000000,     ///<When clock tamper flag is set, tampering is not detected.
            v1=0x00000001,     ///<When clock tamper flag is set, tampering is detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,CteVal> cte{}; 
        namespace CteValC{
            constexpr Register::FieldValue<decltype(cte)::Type,CteVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cte)::Type,CteVal::v1> v1{};
        }
        ///Temperature Tamper Enable
        enum class TteVal {
            v0=0x00000000,     ///<When temperature tamper flag is set, tampering is not detected.
            v1=0x00000001,     ///<When temperature tamper flag is set, tampering is detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TteVal> tte{}; 
        namespace TteValC{
            constexpr Register::FieldValue<decltype(tte)::Type,TteVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tte)::Type,TteVal::v1> v1{};
        }
        ///Security Tamper Enable
        enum class SteVal {
            v0=0x00000000,     ///<When security tamper flag is set, tampering is not detected.
            v1=0x00000001,     ///<When security tamper flag is set, tampering is detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SteVal> ste{}; 
        namespace SteValC{
            constexpr Register::FieldValue<decltype(ste)::Type,SteVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ste)::Type,SteVal::v1> v1{};
        }
        ///Flash Security Enable
        enum class FseVal {
            v0=0x00000000,     ///<When flash security flag is set, tampering is not detected.
            v1=0x00000001,     ///<When flash security flag is set, tampering is detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FseVal> fse{}; 
        namespace FseValC{
            constexpr Register::FieldValue<decltype(fse)::Type,FseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fse)::Type,FseVal::v1> v1{};
        }
        ///Test Mode Enable
        enum class TmeVal {
            v0=0x00000000,     ///<When test mode flag is set, tampering is not detected.
            v1=0x00000001,     ///<When test mode flag is set, tampering is detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,TmeVal> tme{}; 
        namespace TmeValC{
            constexpr Register::FieldValue<decltype(tme)::Type,TmeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tme)::Type,TmeVal::v1> v1{};
        }
        ///Tamper Pin Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> tpe{}; 
    }
    namespace DryPdr{    ///<DryIce Pin Direction Register
        using Addr = Register::Address<0x40042028,0xff00ff00,0,unsigned>;
        ///Tamper Pin Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tpd{}; 
        ///Tamper Pin Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> tpod{}; 
    }
    namespace DryPpr{    ///<DryIce Pin Polarity Register
        using Addr = Register::Address<0x4004202c,0xff00ff00,0,unsigned>;
        ///Tamper Pin Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tpp{}; 
        ///Tamper Pin Input Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> tpid{}; 
    }
    namespace DryAtr0{    ///<DryIce Active Tamper Register
        using Addr = Register::Address<0x40042030,0x00000000,0,unsigned>;
        ///Active Tamper Shift Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> atsr{}; 
        ///Active Tamper Polynomial
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> atp{}; 
    }
    namespace DryAtr1{    ///<DryIce Active Tamper Register
        using Addr = Register::Address<0x40042034,0x00000000,0,unsigned>;
        ///Active Tamper Shift Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> atsr{}; 
        ///Active Tamper Polynomial
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> atp{}; 
    }
    namespace DryPgfr0{    ///<DryIce Pin Glitch Filter Register
        using Addr = Register::Address<0x40042040,0xfefcff00,0,unsigned>;
        ///Glitch Filter Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> gfw{}; 
        ///Glitch Filter Prescaler
        enum class GfpVal {
            v0=0x00000000,     ///<The glitch filter on tamper pin is clocked by the 512 Hz prescaler clock.
            v1=0x00000001,     ///<The glitch filter on tamper pin is clocked by the 32.768 kHz clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,GfpVal> gfp{}; 
        namespace GfpValC{
            constexpr Register::FieldValue<decltype(gfp)::Type,GfpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gfp)::Type,GfpVal::v1> v1{};
        }
        ///Glitch Filter Enable
        enum class GfeVal {
            v0=0x00000000,     ///<The glitch filter on tamper pin is bypassed.
            v1=0x00000001,     ///<The glitch filter on tamper pin is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,GfeVal> gfe{}; 
        namespace GfeValC{
            constexpr Register::FieldValue<decltype(gfe)::Type,GfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gfe)::Type,GfeVal::v1> v1{};
        }
        ///Tamper Pin Expected
        enum class TpexVal {
            v00=0x00000000,     ///<Tamper pin expected value is logic zero.
            v01=0x00000001,     ///<Tamper pin expected value is active tamper 0 output.
            v10=0x00000002,     ///<Tamper pin expected value is active tamper 1 output.
            v11=0x00000003,     ///<Tamper pin 0 expected value is active tamper 0 output XORed with active tamper 1 output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,TpexVal> tpex{}; 
        namespace TpexValC{
            constexpr Register::FieldValue<decltype(tpex)::Type,TpexVal::v00> v00{};
            constexpr Register::FieldValue<decltype(tpex)::Type,TpexVal::v01> v01{};
            constexpr Register::FieldValue<decltype(tpex)::Type,TpexVal::v10> v10{};
            constexpr Register::FieldValue<decltype(tpex)::Type,TpexVal::v11> v11{};
        }
        ///Tamper Pull Enable
        enum class TpeVal {
            v0=0x00000000,     ///<Pull resistor is disabled on tamper pin.
            v1=0x00000001,     ///<Pull resistor is enabled on tamper pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,TpeVal> tpe{}; 
        namespace TpeValC{
            constexpr Register::FieldValue<decltype(tpe)::Type,TpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tpe)::Type,TpeVal::v1> v1{};
        }
    }
    namespace DryPgfr1{    ///<DryIce Pin Glitch Filter Register
        using Addr = Register::Address<0x40042044,0xfefcff00,0,unsigned>;
        ///Glitch Filter Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> gfw{}; 
        ///Glitch Filter Prescaler
        enum class GfpVal {
            v0=0x00000000,     ///<The glitch filter on tamper pin is clocked by the 512 Hz prescaler clock.
            v1=0x00000001,     ///<The glitch filter on tamper pin is clocked by the 32.768 kHz clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,GfpVal> gfp{}; 
        namespace GfpValC{
            constexpr Register::FieldValue<decltype(gfp)::Type,GfpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gfp)::Type,GfpVal::v1> v1{};
        }
        ///Glitch Filter Enable
        enum class GfeVal {
            v0=0x00000000,     ///<The glitch filter on tamper pin is bypassed.
            v1=0x00000001,     ///<The glitch filter on tamper pin is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,GfeVal> gfe{}; 
        namespace GfeValC{
            constexpr Register::FieldValue<decltype(gfe)::Type,GfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gfe)::Type,GfeVal::v1> v1{};
        }
        ///Tamper Pin Expected
        enum class TpexVal {
            v00=0x00000000,     ///<Tamper pin expected value is logic zero.
            v01=0x00000001,     ///<Tamper pin expected value is active tamper 0 output.
            v10=0x00000002,     ///<Tamper pin expected value is active tamper 1 output.
            v11=0x00000003,     ///<Tamper pin 0 expected value is active tamper 0 output XORed with active tamper 1 output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,TpexVal> tpex{}; 
        namespace TpexValC{
            constexpr Register::FieldValue<decltype(tpex)::Type,TpexVal::v00> v00{};
            constexpr Register::FieldValue<decltype(tpex)::Type,TpexVal::v01> v01{};
            constexpr Register::FieldValue<decltype(tpex)::Type,TpexVal::v10> v10{};
            constexpr Register::FieldValue<decltype(tpex)::Type,TpexVal::v11> v11{};
        }
        ///Tamper Pull Enable
        enum class TpeVal {
            v0=0x00000000,     ///<Pull resistor is disabled on tamper pin.
            v1=0x00000001,     ///<Pull resistor is enabled on tamper pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,TpeVal> tpe{}; 
        namespace TpeValC{
            constexpr Register::FieldValue<decltype(tpe)::Type,TpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tpe)::Type,TpeVal::v1> v1{};
        }
    }
    namespace DryPgfr2{    ///<DryIce Pin Glitch Filter Register
        using Addr = Register::Address<0x40042048,0xfefcff00,0,unsigned>;
        ///Glitch Filter Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> gfw{}; 
        ///Glitch Filter Prescaler
        enum class GfpVal {
            v0=0x00000000,     ///<The glitch filter on tamper pin is clocked by the 512 Hz prescaler clock.
            v1=0x00000001,     ///<The glitch filter on tamper pin is clocked by the 32.768 kHz clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,GfpVal> gfp{}; 
        namespace GfpValC{
            constexpr Register::FieldValue<decltype(gfp)::Type,GfpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gfp)::Type,GfpVal::v1> v1{};
        }
        ///Glitch Filter Enable
        enum class GfeVal {
            v0=0x00000000,     ///<The glitch filter on tamper pin is bypassed.
            v1=0x00000001,     ///<The glitch filter on tamper pin is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,GfeVal> gfe{}; 
        namespace GfeValC{
            constexpr Register::FieldValue<decltype(gfe)::Type,GfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gfe)::Type,GfeVal::v1> v1{};
        }
        ///Tamper Pin Expected
        enum class TpexVal {
            v00=0x00000000,     ///<Tamper pin expected value is logic zero.
            v01=0x00000001,     ///<Tamper pin expected value is active tamper 0 output.
            v10=0x00000002,     ///<Tamper pin expected value is active tamper 1 output.
            v11=0x00000003,     ///<Tamper pin 0 expected value is active tamper 0 output XORed with active tamper 1 output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,TpexVal> tpex{}; 
        namespace TpexValC{
            constexpr Register::FieldValue<decltype(tpex)::Type,TpexVal::v00> v00{};
            constexpr Register::FieldValue<decltype(tpex)::Type,TpexVal::v01> v01{};
            constexpr Register::FieldValue<decltype(tpex)::Type,TpexVal::v10> v10{};
            constexpr Register::FieldValue<decltype(tpex)::Type,TpexVal::v11> v11{};
        }
        ///Tamper Pull Enable
        enum class TpeVal {
            v0=0x00000000,     ///<Pull resistor is disabled on tamper pin.
            v1=0x00000001,     ///<Pull resistor is enabled on tamper pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,TpeVal> tpe{}; 
        namespace TpeValC{
            constexpr Register::FieldValue<decltype(tpe)::Type,TpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tpe)::Type,TpeVal::v1> v1{};
        }
    }
    namespace DryWac{    ///<DryIce Write Access Control Register
        using Addr = Register::Address<0x40042800,0xff00c001,0,unsigned>;
        ///Secure Key Valid Write
        enum class SkvwVal {
            v0=0x00000000,     ///<Writes to the secure key valid register are ignored.
            v1=0x00000001,     ///<Writes to the secure key valid register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SkvwVal> skvw{}; 
        namespace SkvwValC{
            constexpr Register::FieldValue<decltype(skvw)::Type,SkvwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(skvw)::Type,SkvwVal::v1> v1{};
        }
        ///Secure Key Write Lock Register Write
        enum class SkwrwVal {
            v0=0x00000000,     ///<Writes to the Secure Key Write Lock Register are ignored.
            v1=0x00000001,     ///<Writes to the Secure Key Write Lock Register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SkwrwVal> skwrw{}; 
        namespace SkwrwValC{
            constexpr Register::FieldValue<decltype(skwrw)::Type,SkwrwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(skwrw)::Type,SkwrwVal::v1> v1{};
        }
        ///Secure Key Read Lock Register Write
        enum class SkrrwVal {
            v0=0x00000000,     ///<Writes to the Secure Key Read Lock Register are ignored.
            v1=0x00000001,     ///<Writes to the Secure Key Read Lock Register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,SkrrwVal> skrrw{}; 
        namespace SkrrwValC{
            constexpr Register::FieldValue<decltype(skrrw)::Type,SkrrwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(skrrw)::Type,SkrrwVal::v1> v1{};
        }
        ///Control Register Write
        enum class CrwVal {
            v0=0x00000000,     ///<Writes to the Control register are ignored.
            v1=0x00000001,     ///<Writes to the Control register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CrwVal> crw{}; 
        namespace CrwValC{
            constexpr Register::FieldValue<decltype(crw)::Type,CrwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(crw)::Type,CrwVal::v1> v1{};
        }
        ///Status Register Write
        enum class SrwVal {
            v0=0x00000000,     ///<Writes to the Status Register are ignored.
            v1=0x00000001,     ///<Writes to the Status Register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SrwVal> srw{}; 
        namespace SrwValC{
            constexpr Register::FieldValue<decltype(srw)::Type,SrwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(srw)::Type,SrwVal::v1> v1{};
        }
        ///Lock Register Write
        enum class LrwVal {
            v0=0x00000000,     ///<Writes to the Lock register are ignored.
            v1=0x00000001,     ///<Writes to the Lock register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,LrwVal> lrw{}; 
        namespace LrwValC{
            constexpr Register::FieldValue<decltype(lrw)::Type,LrwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lrw)::Type,LrwVal::v1> v1{};
        }
        ///Interrupt Enable Write
        enum class IewVal {
            v0=0x00000000,     ///<Writes to the Interrupt enable register are ignored.
            v1=0x00000001,     ///<Writes to the Interrupt enable register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,IewVal> iew{}; 
        namespace IewValC{
            constexpr Register::FieldValue<decltype(iew)::Type,IewVal::v0> v0{};
            constexpr Register::FieldValue<decltype(iew)::Type,IewVal::v1> v1{};
        }
        ///Tamper Seconds Register Write
        enum class TsrwVal {
            v0=0x00000000,     ///<Writes to the Tamper Seconds register are ignored.
            v1=0x00000001,     ///<Writes to the Tamper Seconds register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,TsrwVal> tsrw{}; 
        namespace TsrwValC{
            constexpr Register::FieldValue<decltype(tsrw)::Type,TsrwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tsrw)::Type,TsrwVal::v1> v1{};
        }
        ///Tamper Enable Write
        enum class TewVal {
            v0=0x00000000,     ///<Writes to the tamper enable register are ignored.
            v1=0x00000001,     ///<Writes to the tamper enable register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,TewVal> tew{}; 
        namespace TewValC{
            constexpr Register::FieldValue<decltype(tew)::Type,TewVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tew)::Type,TewVal::v1> v1{};
        }
        ///Pin Direction Write
        enum class PdwVal {
            v0=0x00000000,     ///<Writes to the pin direction register are ignored.
            v1=0x00000001,     ///<Writes to the pin direction register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,PdwVal> pdw{}; 
        namespace PdwValC{
            constexpr Register::FieldValue<decltype(pdw)::Type,PdwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pdw)::Type,PdwVal::v1> v1{};
        }
        ///Pin Polarity Write
        enum class PpwVal {
            v0=0x00000000,     ///<Writes to the pin polarity register are ignored.
            v1=0x00000001,     ///<Writes to the pin polarity register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,PpwVal> ppw{}; 
        namespace PpwValC{
            constexpr Register::FieldValue<decltype(ppw)::Type,PpwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ppw)::Type,PpwVal::v1> v1{};
        }
        ///Active Tamper Write
        enum class AtwVal {
            v0=0x00000000,     ///<Writes to the active tamper register are ignored.
            v1=0x00000001,     ///<Writes to the active tamper register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,AtwVal> atw{}; 
        namespace AtwValC{
            constexpr Register::FieldValue<decltype(atw)::Type,AtwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(atw)::Type,AtwVal::v1> v1{};
        }
        ///Glitch Filter Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> gfw{}; 
    }
    namespace DryRac{    ///<DryIce Read Access Control Register
        using Addr = Register::Address<0x40042804,0xff00c001,0,unsigned>;
        ///Secure Key Valid Read
        enum class SkvrVal {
            v0=0x00000000,     ///<Reads to the secure key valid register are ignored.
            v1=0x00000001,     ///<Reads to the secure key valid register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SkvrVal> skvr{}; 
        namespace SkvrValC{
            constexpr Register::FieldValue<decltype(skvr)::Type,SkvrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(skvr)::Type,SkvrVal::v1> v1{};
        }
        ///Secure Key Write Lock Register Read
        enum class SkwrrVal {
            v0=0x00000000,     ///<Reads to the Secure Key Write Lock Register are ignored.
            v1=0x00000001,     ///<Reads to the Secure Key Write Lock Register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SkwrrVal> skwrr{}; 
        namespace SkwrrValC{
            constexpr Register::FieldValue<decltype(skwrr)::Type,SkwrrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(skwrr)::Type,SkwrrVal::v1> v1{};
        }
        ///Secure Key Read Lock Register Read
        enum class SkrrrVal {
            v0=0x00000000,     ///<Reads to the Secure Key Read Lock Register are ignored.
            v1=0x00000001,     ///<Reads to the Secure Key Read Lock Register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,SkrrrVal> skrrr{}; 
        namespace SkrrrValC{
            constexpr Register::FieldValue<decltype(skrrr)::Type,SkrrrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(skrrr)::Type,SkrrrVal::v1> v1{};
        }
        ///Control Register Read
        enum class CrrVal {
            v0=0x00000000,     ///<Reads to the Control register are ignored.
            v1=0x00000001,     ///<Reads to the Control register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CrrVal> crr{}; 
        namespace CrrValC{
            constexpr Register::FieldValue<decltype(crr)::Type,CrrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(crr)::Type,CrrVal::v1> v1{};
        }
        ///Status Register Read
        enum class SrrVal {
            v0=0x00000000,     ///<Reads to the Status Register are ignored.
            v1=0x00000001,     ///<Reads to the Status Register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SrrVal> srr{}; 
        namespace SrrValC{
            constexpr Register::FieldValue<decltype(srr)::Type,SrrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(srr)::Type,SrrVal::v1> v1{};
        }
        ///Lock Register Read
        enum class LrrVal {
            v0=0x00000000,     ///<Reads to the Lock register are ignored.
            v1=0x00000001,     ///<Reads to the Lock register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,LrrVal> lrr{}; 
        namespace LrrValC{
            constexpr Register::FieldValue<decltype(lrr)::Type,LrrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lrr)::Type,LrrVal::v1> v1{};
        }
        ///Interrupt Enable Read
        enum class IerVal {
            v0=0x00000000,     ///<Reads to the Interrupt enable register are ignored.
            v1=0x00000001,     ///<Reads to the Interrupt enable register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,IerVal> ier{}; 
        namespace IerValC{
            constexpr Register::FieldValue<decltype(ier)::Type,IerVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ier)::Type,IerVal::v1> v1{};
        }
        ///Tamper Seconds Register Read
        enum class TsrrVal {
            v0=0x00000000,     ///<Reads to the tamper seconds register are ignored.
            v1=0x00000001,     ///<Reads to the tamper seconds register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,TsrrVal> tsrr{}; 
        namespace TsrrValC{
            constexpr Register::FieldValue<decltype(tsrr)::Type,TsrrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tsrr)::Type,TsrrVal::v1> v1{};
        }
        ///Tamper Enable Read
        enum class TerVal {
            v0=0x00000000,     ///<Reads to the tamper enable register are ignored.
            v1=0x00000001,     ///<Reads to the tamper enable register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,TerVal> ter{}; 
        namespace TerValC{
            constexpr Register::FieldValue<decltype(ter)::Type,TerVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ter)::Type,TerVal::v1> v1{};
        }
        ///Pin Direction Read
        enum class PdrVal {
            v0=0x00000000,     ///<Reads to the pin direction register are ignored.
            v1=0x00000001,     ///<Reads to the pin direction register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,PdrVal> pdr{}; 
        namespace PdrValC{
            constexpr Register::FieldValue<decltype(pdr)::Type,PdrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pdr)::Type,PdrVal::v1> v1{};
        }
        ///Pin Polarity Read
        enum class PprVal {
            v0=0x00000000,     ///<Reads to the pin polarity register are ignored.
            v1=0x00000001,     ///<Reads to the pin polarity register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,PprVal> ppr{}; 
        namespace PprValC{
            constexpr Register::FieldValue<decltype(ppr)::Type,PprVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ppr)::Type,PprVal::v1> v1{};
        }
        ///Active Tamper Read
        enum class AtrVal {
            v0=0x00000000,     ///<Reads to the active tamper register are ignored.
            v1=0x00000001,     ///<Reads to the active tamper register complete as normal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,AtrVal> atr{}; 
        namespace AtrValC{
            constexpr Register::FieldValue<decltype(atr)::Type,AtrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(atr)::Type,AtrVal::v1> v1{};
        }
        ///Glitch Filter Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> gfr{}; 
    }
    namespace DrySkr0{    ///<Secure Key Register
        using Addr = Register::Address<0x40043000,0x00000000,0,unsigned>;
        ///Secure Key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sk{}; 
    }
    namespace DrySkr1{    ///<Secure Key Register
        using Addr = Register::Address<0x40043004,0x00000000,0,unsigned>;
        ///Secure Key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sk{}; 
    }
    namespace DrySkr2{    ///<Secure Key Register
        using Addr = Register::Address<0x40043008,0x00000000,0,unsigned>;
        ///Secure Key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sk{}; 
    }
    namespace DrySkr3{    ///<Secure Key Register
        using Addr = Register::Address<0x4004300c,0x00000000,0,unsigned>;
        ///Secure Key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sk{}; 
    }
    namespace DrySkr4{    ///<Secure Key Register
        using Addr = Register::Address<0x40043010,0x00000000,0,unsigned>;
        ///Secure Key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sk{}; 
    }
    namespace DrySkr5{    ///<Secure Key Register
        using Addr = Register::Address<0x40043014,0x00000000,0,unsigned>;
        ///Secure Key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sk{}; 
    }
    namespace DrySkr6{    ///<Secure Key Register
        using Addr = Register::Address<0x40043018,0x00000000,0,unsigned>;
        ///Secure Key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sk{}; 
    }
    namespace DrySkr7{    ///<Secure Key Register
        using Addr = Register::Address<0x4004301c,0x00000000,0,unsigned>;
        ///Secure Key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sk{}; 
    }
    namespace DrySwac{    ///<Secure Write Access Control
        using Addr = Register::Address<0x40043800,0xffffff00,0,unsigned>;
        ///Secure Key Register Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> skrw{}; 
    }
    namespace DrySrac{    ///<Secure Read Access Control
        using Addr = Register::Address<0x40043804,0xffffff00,0,unsigned>;
        ///Secure Key Register Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> skrr{}; 
    }
}
