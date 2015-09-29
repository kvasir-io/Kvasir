#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Tamper Detect and Secure Key Storage
    namespace DrySkvr{    ///<DryIce Secure Key Valid Register
        using Addr = Register::Address<0x40042004,0xffffff00,0,unsigned>;
        ///Secure Key Valid
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> skv{}; 
    }
    namespace DrySkwlr{    ///<DryIce Secure Key Write Lock Register
        using Addr = Register::Address<0x40042008,0xffffff00,0,unsigned>;
        ///Secure Key Write Lock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> skwl{}; 
    }
    namespace DrySkrlr{    ///<DryIce Secure Key Read Lock Register
        using Addr = Register::Address<0x4004200c,0xffffff00,0,unsigned>;
        ///Secure Key Read Lock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> skrl{}; 
    }
    namespace DryCr{    ///<DryIce Control Register
        using Addr = Register::Address<0x40042010,0x0001f0f0,0,unsigned>;
        ///Software Reset
        enum class swrVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Perform a software reset.
        };
        namespace swrValC{
            constexpr MPL::Value<swrVal,swrVal::v0> v0{};
            constexpr MPL::Value<swrVal,swrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,swrVal> swr{}; 
        ///DryIce Enable
        enum class denVal {
            v0=0x00000000,     ///<DryIce clock and prescaler are disabled.
            v1=0x00000001,     ///<DryIce clock and prescaler are enabled.
        };
        namespace denValC{
            constexpr MPL::Value<denVal,denVal::v0> v0{};
            constexpr MPL::Value<denVal,denVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,denVal> den{}; 
        ///Tamper Force System Reset
        enum class tfsrVal {
            v0=0x00000000,     ///<Do not force chip reset when tampering is detected.
            v1=0x00000001,     ///<Force chip reset when tampering is detected.
        };
        namespace tfsrValC{
            constexpr MPL::Value<tfsrVal,tfsrVal::v0> v0{};
            constexpr MPL::Value<tfsrVal,tfsrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,tfsrVal> tfsr{}; 
        ///Update Mode
        enum class umVal {
            v0=0x00000000,     ///<DryIce Status Register cannot be written when the Status Register Lock bit within the Lock Register (LR[SRL]) is clear.
            v1=0x00000001,     ///<DryIce Status Register cannot be written when the Status Register Lock bit within the Lock Register (LR[SRL]) is clear and DryIce Tamper Flag (SR[DTF]) is set.
        };
        namespace umValC{
            constexpr MPL::Value<umVal,umVal::v0> v0{};
            constexpr MPL::Value<umVal,umVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,umVal> um{}; 
        ///Tamper Hysteresis Select
        enum class thysVal {
            v0=0x00000000,     ///<Hysteresis is set to a range of 305 mV to 440 mV.
            v1=0x00000001,     ///<Hysteresis is set to a range of 490 mV to 705 mV.
        };
        namespace thysValC{
            constexpr MPL::Value<thysVal,thysVal::v0> v0{};
            constexpr MPL::Value<thysVal,thysVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,thysVal> thys{}; 
        ///Tamper Passive Filter Enable
        enum class tpfeVal {
            v0=0x00000000,     ///<Tamper pins are configured with passive input filter disabled
            v1=0x00000001,     ///<Tamper pins are configured with passive input filter enabled
        };
        namespace tpfeValC{
            constexpr MPL::Value<tpfeVal,tpfeVal::v0> v0{};
            constexpr MPL::Value<tpfeVal,tpfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,tpfeVal> tpfe{}; 
        ///Tamper Drive Strength Enable
        enum class tdseVal {
            v0=0x00000000,     ///<Tamper pins are configured for low drive strength
            v1=0x00000001,     ///<Tamper pins are configured for high drive strength
        };
        namespace tdseValC{
            constexpr MPL::Value<tdseVal,tdseVal::v0> v0{};
            constexpr MPL::Value<tdseVal,tdseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,tdseVal> tdse{}; 
        ///Tamper Slew Rate Enable
        enum class tsreVal {
            v0=0x00000000,     ///<Tamper pins are configured for slow slew rate.
            v1=0x00000001,     ///<Tamper pins are configured for fast slew rate.
        };
        namespace tsreValC{
            constexpr MPL::Value<tsreVal,tsreVal::v0> v0{};
            constexpr MPL::Value<tsreVal,tsreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,tsreVal> tsre{}; 
        ///DryIce Prescaler Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,17),Register::ReadWriteAccess,unsigned> dpr{}; 
    }
    namespace DrySr{    ///<DryIce Status Register
        using Addr = Register::Address<0x40042014,0xff00fc00,0,unsigned>;
        ///DryIce Tamper Flag
        enum class dtfVal {
            v0=0x00000000,     ///<DryIce tampering not detected.
            v1=0x00000001,     ///<DryIce tampering detected.
        };
        namespace dtfValC{
            constexpr MPL::Value<dtfVal,dtfVal::v0> v0{};
            constexpr MPL::Value<dtfVal,dtfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dtfVal> dtf{}; 
        ///Tamper Acknowledge Flag
        enum class tafVal {
            v0=0x00000000,     ///<DryIce Tamper Flag (SR[DTF]) is clear or chip reset has not occurred after DryIce Tamper Flag (SR[DTF]) was set.
            v1=0x00000001,     ///<Chip reset has occurred after DryIce Tamper Flag (SR[DTF]) was set.
        };
        namespace tafValC{
            constexpr MPL::Value<tafVal,tafVal::v0> v0{};
            constexpr MPL::Value<tafVal,tafVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,tafVal> taf{}; 
        ///Time Overflow Flag
        enum class tofVal {
            v0=0x00000000,     ///<Tamper not detected.
            v1=0x00000001,     ///<RTC time overflow tamper detected.
        };
        namespace tofValC{
            constexpr MPL::Value<tofVal,tofVal::v0> v0{};
            constexpr MPL::Value<tofVal,tofVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,tofVal> tof{}; 
        ///Monotonic Overflow Flag
        enum class mofVal {
            v0=0x00000000,     ///<Tamper not detected.
            v1=0x00000001,     ///<RTC monotonic overflow tamper detected.
        };
        namespace mofValC{
            constexpr MPL::Value<mofVal,mofVal::v0> v0{};
            constexpr MPL::Value<mofVal,mofVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,mofVal> mof{}; 
        ///Voltage Tamper Flag
        enum class vtfVal {
            v0=0x00000000,     ///<Tamper not detected.
            v1=0x00000001,     ///<Voltage tampering detected.
        };
        namespace vtfValC{
            constexpr MPL::Value<vtfVal,vtfVal::v0> v0{};
            constexpr MPL::Value<vtfVal,vtfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,vtfVal> vtf{}; 
        ///Clock Tamper Flag
        enum class ctfVal {
            v0=0x00000000,     ///<Tamper not detected.
            v1=0x00000001,     ///<Clock tampering detected.
        };
        namespace ctfValC{
            constexpr MPL::Value<ctfVal,ctfVal::v0> v0{};
            constexpr MPL::Value<ctfVal,ctfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ctfVal> ctf{}; 
        ///Temperature Tamper Flag
        enum class ttfVal {
            v0=0x00000000,     ///<Tamper not detected.
            v1=0x00000001,     ///<Temperature tampering detected.
        };
        namespace ttfValC{
            constexpr MPL::Value<ttfVal,ttfVal::v0> v0{};
            constexpr MPL::Value<ttfVal,ttfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ttfVal> ttf{}; 
        ///Security Tamper Flag
        enum class stfVal {
            v0=0x00000000,     ///<Tamper not detected.
            v1=0x00000001,     ///<Security module tamper detected.
        };
        namespace stfValC{
            constexpr MPL::Value<stfVal,stfVal::v0> v0{};
            constexpr MPL::Value<stfVal,stfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,stfVal> stf{}; 
        ///Flash Security Flag
        enum class fsfVal {
            v0=0x00000000,     ///<Tamper not detected.
            v1=0x00000001,     ///<Flash security tamper detected.
        };
        namespace fsfValC{
            constexpr MPL::Value<fsfVal,fsfVal::v0> v0{};
            constexpr MPL::Value<fsfVal,fsfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,fsfVal> fsf{}; 
        ///Test Mode Flag
        enum class tmfVal {
            v0=0x00000000,     ///<Tamper not detected.
            v1=0x00000001,     ///<Test mode tamper detected.
        };
        namespace tmfValC{
            constexpr MPL::Value<tmfVal,tmfVal::v0> v0{};
            constexpr MPL::Value<tmfVal,tmfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,tmfVal> tmf{}; 
        ///Tamper Pin Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> tpf{}; 
    }
    namespace DryLr{    ///<DryIce Lock Register
        using Addr = Register::Address<0x40042018,0xff00c001,0,unsigned>;
        ///Key Valid Lock
        enum class kvlVal {
            v0=0x00000000,     ///<Secure key valid register is locked and writes are ignored.
            v1=0x00000001,     ///<Secure key valid register is not locked and writes complete as normal.
        };
        namespace kvlValC{
            constexpr MPL::Value<kvlVal,kvlVal::v0> v0{};
            constexpr MPL::Value<kvlVal,kvlVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,kvlVal> kvl{}; 
        ///Key Write Lock
        enum class kwlVal {
            v0=0x00000000,     ///<Secure Key Write Lock Register is locked and writes are ignored.
            v1=0x00000001,     ///<Secure Key Write Lock Register is not locked and writes complete as normal.
        };
        namespace kwlValC{
            constexpr MPL::Value<kwlVal,kwlVal::v0> v0{};
            constexpr MPL::Value<kwlVal,kwlVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,kwlVal> kwl{}; 
        ///Key Read Lock
        enum class krlVal {
            v0=0x00000000,     ///<Secure Key Read Lock Register is locked and writes are ignored.
            v1=0x00000001,     ///<Secure Key Read Lock Register is not locked and writes complete as normal.
        };
        namespace krlValC{
            constexpr MPL::Value<krlVal,krlVal::v0> v0{};
            constexpr MPL::Value<krlVal,krlVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,krlVal> krl{}; 
        ///Control Register Lock
        enum class crlVal {
            v0=0x00000000,     ///<Control register is locked and writes are ignored.
            v1=0x00000001,     ///<Control register is not locked and writes complete as normal.
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
            v0=0x00000000,     ///<Lock register is locked and writes are ignored.
            v1=0x00000001,     ///<Lock register is not locked and writes complete as normal.
        };
        namespace lrlValC{
            constexpr MPL::Value<lrlVal,lrlVal::v0> v0{};
            constexpr MPL::Value<lrlVal,lrlVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,lrlVal> lrl{}; 
        ///Interrupt Enable Lock
        enum class ielVal {
            v0=0x00000000,     ///<Interrupt enable register is locked and writes are ignored.
            v1=0x00000001,     ///<Interrupt enable register is not locked and writes complete as normal.
        };
        namespace ielValC{
            constexpr MPL::Value<ielVal,ielVal::v0> v0{};
            constexpr MPL::Value<ielVal,ielVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ielVal> iel{}; 
        ///Tamper Seconds Lock
        enum class tslVal {
            v0=0x00000000,     ///<Tamper seconds register is locked and writes are ignored.
            v1=0x00000001,     ///<Tamper seconds register is not locked and writes complete as normal.
        };
        namespace tslValC{
            constexpr MPL::Value<tslVal,tslVal::v0> v0{};
            constexpr MPL::Value<tslVal,tslVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,tslVal> tsl{}; 
        ///Tamper Enable Lock
        enum class telVal {
            v0=0x00000000,     ///<Tamper enable register is locked and writes are ignored.
            v1=0x00000001,     ///<Tamper enable register is not locked and writes complete as normal.
        };
        namespace telValC{
            constexpr MPL::Value<telVal,telVal::v0> v0{};
            constexpr MPL::Value<telVal,telVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,telVal> tel{}; 
        ///Pin Direction Lock
        enum class pdlVal {
            v0=0x00000000,     ///<Pin direction register is locked and writes are ignored.
            v1=0x00000001,     ///<Pin direction register is not locked and writes complete as normal.
        };
        namespace pdlValC{
            constexpr MPL::Value<pdlVal,pdlVal::v0> v0{};
            constexpr MPL::Value<pdlVal,pdlVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,pdlVal> pdl{}; 
        ///Pin Polarity Lock
        enum class pplVal {
            v0=0x00000000,     ///<Pin polarity register is locked and writes are ignored.
            v1=0x00000001,     ///<Pin polarity register is not locked and writes complete as normal.
        };
        namespace pplValC{
            constexpr MPL::Value<pplVal,pplVal::v0> v0{};
            constexpr MPL::Value<pplVal,pplVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,pplVal> ppl{}; 
        ///Active Tamper Lock
        enum class atlVal {
            v0=0x00000000,     ///<Active tamper register is locked and writes are ignored.
            v1=0x00000001,     ///<Active tamper register is not locked and writes complete as normal.
        };
        namespace atlValC{
            constexpr MPL::Value<atlVal,atlVal::v0> v0{};
            constexpr MPL::Value<atlVal,atlVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,atlVal> atl{}; 
        ///Glitch Filter Lock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> gfl{}; 
    }
    namespace DryIer{    ///<DryIce Interrupt Enable Register
        using Addr = Register::Address<0x4004201c,0xff00fc02,0,unsigned>;
        ///DryIce Tamper Interrupt Enable
        enum class dtieVal {
            v0=0x00000000,     ///<When DryIce Tamper Flag (SR[DTF]) is set, an interrupt is not generated.
            v1=0x00000001,     ///<When DryIce Tamper Flag (SR[DTF]) is set, an interrupt is generated.
        };
        namespace dtieValC{
            constexpr MPL::Value<dtieVal,dtieVal::v0> v0{};
            constexpr MPL::Value<dtieVal,dtieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dtieVal> dtie{}; 
        ///Time Overflow Interrupt Enable
        enum class toieVal {
            v0=0x00000000,     ///<When time overflow flag is set, an interrupt is not generated.
            v1=0x00000001,     ///<When time overflow flag is set, an interrupt is generated.
        };
        namespace toieValC{
            constexpr MPL::Value<toieVal,toieVal::v0> v0{};
            constexpr MPL::Value<toieVal,toieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,toieVal> toie{}; 
        ///Monotonic Overflow Interrupt Enable
        enum class moieVal {
            v0=0x00000000,     ///<When monotonic overflow flag is set, an interrupt is not generated.
            v1=0x00000001,     ///<When monotonic overflow flag is set, an interrupt is generated.
        };
        namespace moieValC{
            constexpr MPL::Value<moieVal,moieVal::v0> v0{};
            constexpr MPL::Value<moieVal,moieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,moieVal> moie{}; 
        ///Voltage Tamper Interrupt Enable
        enum class vtieVal {
            v0=0x00000000,     ///<When voltage tamper flag is set, an interrupt is not generated.
            v1=0x00000001,     ///<When voltage tamper flag is set, an interrupt is generated.
        };
        namespace vtieValC{
            constexpr MPL::Value<vtieVal,vtieVal::v0> v0{};
            constexpr MPL::Value<vtieVal,vtieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,vtieVal> vtie{}; 
        ///Clock Tamper Interrupt Enable
        enum class ctieVal {
            v0=0x00000000,     ///<When clock tamper flag is set, an interrupt is not generated.
            v1=0x00000001,     ///<When clock tamper flag is set, an interrupt is generated.
        };
        namespace ctieValC{
            constexpr MPL::Value<ctieVal,ctieVal::v0> v0{};
            constexpr MPL::Value<ctieVal,ctieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ctieVal> ctie{}; 
        ///Temperature Tamper Interrupt Enable
        enum class ttieVal {
            v0=0x00000000,     ///<When temperature tamper flag is set, an interrupt is not generated.
            v1=0x00000001,     ///<When temperature tamper flag is set, an interrupt is generated.
        };
        namespace ttieValC{
            constexpr MPL::Value<ttieVal,ttieVal::v0> v0{};
            constexpr MPL::Value<ttieVal,ttieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ttieVal> ttie{}; 
        ///Security Tamper Interrupt Enable
        enum class stieVal {
            v0=0x00000000,     ///<When security tamper flag is set, an interrupt is not generated.
            v1=0x00000001,     ///<When security tamper flag is set, an interrupt is generated.
        };
        namespace stieValC{
            constexpr MPL::Value<stieVal,stieVal::v0> v0{};
            constexpr MPL::Value<stieVal,stieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,stieVal> stie{}; 
        ///Flash Security Interrupt Enable
        enum class fsieVal {
            v0=0x00000000,     ///<When flash security flag is set, an interrupt is not generated.
            v1=0x00000001,     ///<When flash security flag is set, an interrupt is generated.
        };
        namespace fsieValC{
            constexpr MPL::Value<fsieVal,fsieVal::v0> v0{};
            constexpr MPL::Value<fsieVal,fsieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,fsieVal> fsie{}; 
        ///Test Mode Interrupt Enable
        enum class tmieVal {
            v0=0x00000000,     ///<When test mode flag is set, an interrupt is not generated.
            v1=0x00000001,     ///<When test mode flag is set, an interrupt is generated.
        };
        namespace tmieValC{
            constexpr MPL::Value<tmieVal,tmieVal::v0> v0{};
            constexpr MPL::Value<tmieVal,tmieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,tmieVal> tmie{}; 
        ///Tamper Pin Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> tpie{}; 
    }
    namespace DryTsr{    ///<DryIce Tamper Seconds Register
        using Addr = Register::Address<0x40042020,0x00000000,0,unsigned>;
        ///Tamper Time Seconds
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tts{}; 
    }
    namespace DryTer{    ///<DryIce Tamper Enable Register
        using Addr = Register::Address<0x40042024,0xff00fc03,0,unsigned>;
        ///Time Overflow Enable
        enum class toeVal {
            v0=0x00000000,     ///<When time overflow flag is set, tampering is not detected.
            v1=0x00000001,     ///<When time overflow flag is set, tampering is detected.
        };
        namespace toeValC{
            constexpr MPL::Value<toeVal,toeVal::v0> v0{};
            constexpr MPL::Value<toeVal,toeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,toeVal> toe{}; 
        ///Monotonic Overflow Enable
        enum class moeVal {
            v0=0x00000000,     ///<When monotonic overflow flag is set, tampering is not detected.
            v1=0x00000001,     ///<When monotonic overflow flag is set, tampering is detected.
        };
        namespace moeValC{
            constexpr MPL::Value<moeVal,moeVal::v0> v0{};
            constexpr MPL::Value<moeVal,moeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,moeVal> moe{}; 
        ///Voltage Tamper Enable
        enum class vteVal {
            v0=0x00000000,     ///<When voltage tamper flag is set, tampering is not detected.
            v1=0x00000001,     ///<When voltage tamper flag is set, tampering is detected.
        };
        namespace vteValC{
            constexpr MPL::Value<vteVal,vteVal::v0> v0{};
            constexpr MPL::Value<vteVal,vteVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,vteVal> vte{}; 
        ///Clock Tamper Enable
        enum class cteVal {
            v0=0x00000000,     ///<When clock tamper flag is set, tampering is not detected.
            v1=0x00000001,     ///<When clock tamper flag is set, tampering is detected.
        };
        namespace cteValC{
            constexpr MPL::Value<cteVal,cteVal::v0> v0{};
            constexpr MPL::Value<cteVal,cteVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,cteVal> cte{}; 
        ///Temperature Tamper Enable
        enum class tteVal {
            v0=0x00000000,     ///<When temperature tamper flag is set, tampering is not detected.
            v1=0x00000001,     ///<When temperature tamper flag is set, tampering is detected.
        };
        namespace tteValC{
            constexpr MPL::Value<tteVal,tteVal::v0> v0{};
            constexpr MPL::Value<tteVal,tteVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,tteVal> tte{}; 
        ///Security Tamper Enable
        enum class steVal {
            v0=0x00000000,     ///<When security tamper flag is set, tampering is not detected.
            v1=0x00000001,     ///<When security tamper flag is set, tampering is detected.
        };
        namespace steValC{
            constexpr MPL::Value<steVal,steVal::v0> v0{};
            constexpr MPL::Value<steVal,steVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,steVal> ste{}; 
        ///Flash Security Enable
        enum class fseVal {
            v0=0x00000000,     ///<When flash security flag is set, tampering is not detected.
            v1=0x00000001,     ///<When flash security flag is set, tampering is detected.
        };
        namespace fseValC{
            constexpr MPL::Value<fseVal,fseVal::v0> v0{};
            constexpr MPL::Value<fseVal,fseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,fseVal> fse{}; 
        ///Test Mode Enable
        enum class tmeVal {
            v0=0x00000000,     ///<When test mode flag is set, tampering is not detected.
            v1=0x00000001,     ///<When test mode flag is set, tampering is detected.
        };
        namespace tmeValC{
            constexpr MPL::Value<tmeVal,tmeVal::v0> v0{};
            constexpr MPL::Value<tmeVal,tmeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,tmeVal> tme{}; 
        ///Tamper Pin Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> tpe{}; 
    }
    namespace DryPdr{    ///<DryIce Pin Direction Register
        using Addr = Register::Address<0x40042028,0xff00ff00,0,unsigned>;
        ///Tamper Pin Direction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tpd{}; 
        ///Tamper Pin Output Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> tpod{}; 
    }
    namespace DryPpr{    ///<DryIce Pin Polarity Register
        using Addr = Register::Address<0x4004202c,0xff00ff00,0,unsigned>;
        ///Tamper Pin Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tpp{}; 
        ///Tamper Pin Input Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> tpid{}; 
    }
    namespace DryAtr0{    ///<DryIce Active Tamper Register
        using Addr = Register::Address<0x40042030,0x00000000,0,unsigned>;
        ///Active Tamper Shift Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> atsr{}; 
        ///Active Tamper Polynomial
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> atp{}; 
    }
    namespace DryAtr1{    ///<DryIce Active Tamper Register
        using Addr = Register::Address<0x40042034,0x00000000,0,unsigned>;
        ///Active Tamper Shift Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> atsr{}; 
        ///Active Tamper Polynomial
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> atp{}; 
    }
    namespace DryPgfr0{    ///<DryIce Pin Glitch Filter Register
        using Addr = Register::Address<0x40042040,0xfefcff00,0,unsigned>;
        ///Glitch Filter Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> gfw{}; 
        ///Glitch Filter Prescaler
        enum class gfpVal {
            v0=0x00000000,     ///<The glitch filter on tamper pin is clocked by the 512 Hz prescaler clock.
            v1=0x00000001,     ///<The glitch filter on tamper pin is clocked by the 32.768 kHz clock.
        };
        namespace gfpValC{
            constexpr MPL::Value<gfpVal,gfpVal::v0> v0{};
            constexpr MPL::Value<gfpVal,gfpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,gfpVal> gfp{}; 
        ///Glitch Filter Enable
        enum class gfeVal {
            v0=0x00000000,     ///<The glitch filter on tamper pin is bypassed.
            v1=0x00000001,     ///<The glitch filter on tamper pin is enabled.
        };
        namespace gfeValC{
            constexpr MPL::Value<gfeVal,gfeVal::v0> v0{};
            constexpr MPL::Value<gfeVal,gfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,gfeVal> gfe{}; 
        ///Tamper Pin Expected
        enum class tpexVal {
            v00=0x00000000,     ///<Tamper pin expected value is logic zero.
            v01=0x00000001,     ///<Tamper pin expected value is active tamper 0 output.
            v10=0x00000002,     ///<Tamper pin expected value is active tamper 1 output.
            v11=0x00000003,     ///<Tamper pin 0 expected value is active tamper 0 output XORed with active tamper 1 output.
        };
        namespace tpexValC{
            constexpr MPL::Value<tpexVal,tpexVal::v00> v00{};
            constexpr MPL::Value<tpexVal,tpexVal::v01> v01{};
            constexpr MPL::Value<tpexVal,tpexVal::v10> v10{};
            constexpr MPL::Value<tpexVal,tpexVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,tpexVal> tpex{}; 
        ///Tamper Pull Enable
        enum class tpeVal {
            v0=0x00000000,     ///<Pull resistor is disabled on tamper pin.
            v1=0x00000001,     ///<Pull resistor is enabled on tamper pin.
        };
        namespace tpeValC{
            constexpr MPL::Value<tpeVal,tpeVal::v0> v0{};
            constexpr MPL::Value<tpeVal,tpeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,tpeVal> tpe{}; 
    }
    namespace DryPgfr1{    ///<DryIce Pin Glitch Filter Register
        using Addr = Register::Address<0x40042044,0xfefcff00,0,unsigned>;
        ///Glitch Filter Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> gfw{}; 
        ///Glitch Filter Prescaler
        enum class gfpVal {
            v0=0x00000000,     ///<The glitch filter on tamper pin is clocked by the 512 Hz prescaler clock.
            v1=0x00000001,     ///<The glitch filter on tamper pin is clocked by the 32.768 kHz clock.
        };
        namespace gfpValC{
            constexpr MPL::Value<gfpVal,gfpVal::v0> v0{};
            constexpr MPL::Value<gfpVal,gfpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,gfpVal> gfp{}; 
        ///Glitch Filter Enable
        enum class gfeVal {
            v0=0x00000000,     ///<The glitch filter on tamper pin is bypassed.
            v1=0x00000001,     ///<The glitch filter on tamper pin is enabled.
        };
        namespace gfeValC{
            constexpr MPL::Value<gfeVal,gfeVal::v0> v0{};
            constexpr MPL::Value<gfeVal,gfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,gfeVal> gfe{}; 
        ///Tamper Pin Expected
        enum class tpexVal {
            v00=0x00000000,     ///<Tamper pin expected value is logic zero.
            v01=0x00000001,     ///<Tamper pin expected value is active tamper 0 output.
            v10=0x00000002,     ///<Tamper pin expected value is active tamper 1 output.
            v11=0x00000003,     ///<Tamper pin 0 expected value is active tamper 0 output XORed with active tamper 1 output.
        };
        namespace tpexValC{
            constexpr MPL::Value<tpexVal,tpexVal::v00> v00{};
            constexpr MPL::Value<tpexVal,tpexVal::v01> v01{};
            constexpr MPL::Value<tpexVal,tpexVal::v10> v10{};
            constexpr MPL::Value<tpexVal,tpexVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,tpexVal> tpex{}; 
        ///Tamper Pull Enable
        enum class tpeVal {
            v0=0x00000000,     ///<Pull resistor is disabled on tamper pin.
            v1=0x00000001,     ///<Pull resistor is enabled on tamper pin.
        };
        namespace tpeValC{
            constexpr MPL::Value<tpeVal,tpeVal::v0> v0{};
            constexpr MPL::Value<tpeVal,tpeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,tpeVal> tpe{}; 
    }
    namespace DryPgfr2{    ///<DryIce Pin Glitch Filter Register
        using Addr = Register::Address<0x40042048,0xfefcff00,0,unsigned>;
        ///Glitch Filter Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> gfw{}; 
        ///Glitch Filter Prescaler
        enum class gfpVal {
            v0=0x00000000,     ///<The glitch filter on tamper pin is clocked by the 512 Hz prescaler clock.
            v1=0x00000001,     ///<The glitch filter on tamper pin is clocked by the 32.768 kHz clock.
        };
        namespace gfpValC{
            constexpr MPL::Value<gfpVal,gfpVal::v0> v0{};
            constexpr MPL::Value<gfpVal,gfpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,gfpVal> gfp{}; 
        ///Glitch Filter Enable
        enum class gfeVal {
            v0=0x00000000,     ///<The glitch filter on tamper pin is bypassed.
            v1=0x00000001,     ///<The glitch filter on tamper pin is enabled.
        };
        namespace gfeValC{
            constexpr MPL::Value<gfeVal,gfeVal::v0> v0{};
            constexpr MPL::Value<gfeVal,gfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,gfeVal> gfe{}; 
        ///Tamper Pin Expected
        enum class tpexVal {
            v00=0x00000000,     ///<Tamper pin expected value is logic zero.
            v01=0x00000001,     ///<Tamper pin expected value is active tamper 0 output.
            v10=0x00000002,     ///<Tamper pin expected value is active tamper 1 output.
            v11=0x00000003,     ///<Tamper pin 0 expected value is active tamper 0 output XORed with active tamper 1 output.
        };
        namespace tpexValC{
            constexpr MPL::Value<tpexVal,tpexVal::v00> v00{};
            constexpr MPL::Value<tpexVal,tpexVal::v01> v01{};
            constexpr MPL::Value<tpexVal,tpexVal::v10> v10{};
            constexpr MPL::Value<tpexVal,tpexVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,tpexVal> tpex{}; 
        ///Tamper Pull Enable
        enum class tpeVal {
            v0=0x00000000,     ///<Pull resistor is disabled on tamper pin.
            v1=0x00000001,     ///<Pull resistor is enabled on tamper pin.
        };
        namespace tpeValC{
            constexpr MPL::Value<tpeVal,tpeVal::v0> v0{};
            constexpr MPL::Value<tpeVal,tpeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,tpeVal> tpe{}; 
    }
    namespace DryWac{    ///<DryIce Write Access Control Register
        using Addr = Register::Address<0x40042800,0xff00c001,0,unsigned>;
        ///Secure Key Valid Write
        enum class skvwVal {
            v0=0x00000000,     ///<Writes to the secure key valid register are ignored.
            v1=0x00000001,     ///<Writes to the secure key valid register complete as normal.
        };
        namespace skvwValC{
            constexpr MPL::Value<skvwVal,skvwVal::v0> v0{};
            constexpr MPL::Value<skvwVal,skvwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,skvwVal> skvw{}; 
        ///Secure Key Write Lock Register Write
        enum class skwrwVal {
            v0=0x00000000,     ///<Writes to the Secure Key Write Lock Register are ignored.
            v1=0x00000001,     ///<Writes to the Secure Key Write Lock Register complete as normal.
        };
        namespace skwrwValC{
            constexpr MPL::Value<skwrwVal,skwrwVal::v0> v0{};
            constexpr MPL::Value<skwrwVal,skwrwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,skwrwVal> skwrw{}; 
        ///Secure Key Read Lock Register Write
        enum class skrrwVal {
            v0=0x00000000,     ///<Writes to the Secure Key Read Lock Register are ignored.
            v1=0x00000001,     ///<Writes to the Secure Key Read Lock Register complete as normal.
        };
        namespace skrrwValC{
            constexpr MPL::Value<skrrwVal,skrrwVal::v0> v0{};
            constexpr MPL::Value<skrrwVal,skrrwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,skrrwVal> skrrw{}; 
        ///Control Register Write
        enum class crwVal {
            v0=0x00000000,     ///<Writes to the Control register are ignored.
            v1=0x00000001,     ///<Writes to the Control register complete as normal.
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
            v0=0x00000000,     ///<Writes to the Lock register are ignored.
            v1=0x00000001,     ///<Writes to the Lock register complete as normal.
        };
        namespace lrwValC{
            constexpr MPL::Value<lrwVal,lrwVal::v0> v0{};
            constexpr MPL::Value<lrwVal,lrwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,lrwVal> lrw{}; 
        ///Interrupt Enable Write
        enum class iewVal {
            v0=0x00000000,     ///<Writes to the Interrupt enable register are ignored.
            v1=0x00000001,     ///<Writes to the Interrupt enable register complete as normal.
        };
        namespace iewValC{
            constexpr MPL::Value<iewVal,iewVal::v0> v0{};
            constexpr MPL::Value<iewVal,iewVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,iewVal> iew{}; 
        ///Tamper Seconds Register Write
        enum class tsrwVal {
            v0=0x00000000,     ///<Writes to the Tamper Seconds register are ignored.
            v1=0x00000001,     ///<Writes to the Tamper Seconds register complete as normal.
        };
        namespace tsrwValC{
            constexpr MPL::Value<tsrwVal,tsrwVal::v0> v0{};
            constexpr MPL::Value<tsrwVal,tsrwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,tsrwVal> tsrw{}; 
        ///Tamper Enable Write
        enum class tewVal {
            v0=0x00000000,     ///<Writes to the tamper enable register are ignored.
            v1=0x00000001,     ///<Writes to the tamper enable register complete as normal.
        };
        namespace tewValC{
            constexpr MPL::Value<tewVal,tewVal::v0> v0{};
            constexpr MPL::Value<tewVal,tewVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,tewVal> tew{}; 
        ///Pin Direction Write
        enum class pdwVal {
            v0=0x00000000,     ///<Writes to the pin direction register are ignored.
            v1=0x00000001,     ///<Writes to the pin direction register complete as normal.
        };
        namespace pdwValC{
            constexpr MPL::Value<pdwVal,pdwVal::v0> v0{};
            constexpr MPL::Value<pdwVal,pdwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,pdwVal> pdw{}; 
        ///Pin Polarity Write
        enum class ppwVal {
            v0=0x00000000,     ///<Writes to the pin polarity register are ignored.
            v1=0x00000001,     ///<Writes to the pin polarity register complete as normal.
        };
        namespace ppwValC{
            constexpr MPL::Value<ppwVal,ppwVal::v0> v0{};
            constexpr MPL::Value<ppwVal,ppwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ppwVal> ppw{}; 
        ///Active Tamper Write
        enum class atwVal {
            v0=0x00000000,     ///<Writes to the active tamper register are ignored.
            v1=0x00000001,     ///<Writes to the active tamper register complete as normal.
        };
        namespace atwValC{
            constexpr MPL::Value<atwVal,atwVal::v0> v0{};
            constexpr MPL::Value<atwVal,atwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,atwVal> atw{}; 
        ///Glitch Filter Write
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> gfw{}; 
    }
    namespace DryRac{    ///<DryIce Read Access Control Register
        using Addr = Register::Address<0x40042804,0xff00c001,0,unsigned>;
        ///Secure Key Valid Read
        enum class skvrVal {
            v0=0x00000000,     ///<Reads to the secure key valid register are ignored.
            v1=0x00000001,     ///<Reads to the secure key valid register complete as normal.
        };
        namespace skvrValC{
            constexpr MPL::Value<skvrVal,skvrVal::v0> v0{};
            constexpr MPL::Value<skvrVal,skvrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,skvrVal> skvr{}; 
        ///Secure Key Write Lock Register Read
        enum class skwrrVal {
            v0=0x00000000,     ///<Reads to the Secure Key Write Lock Register are ignored.
            v1=0x00000001,     ///<Reads to the Secure Key Write Lock Register complete as normal.
        };
        namespace skwrrValC{
            constexpr MPL::Value<skwrrVal,skwrrVal::v0> v0{};
            constexpr MPL::Value<skwrrVal,skwrrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,skwrrVal> skwrr{}; 
        ///Secure Key Read Lock Register Read
        enum class skrrrVal {
            v0=0x00000000,     ///<Reads to the Secure Key Read Lock Register are ignored.
            v1=0x00000001,     ///<Reads to the Secure Key Read Lock Register complete as normal.
        };
        namespace skrrrValC{
            constexpr MPL::Value<skrrrVal,skrrrVal::v0> v0{};
            constexpr MPL::Value<skrrrVal,skrrrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,skrrrVal> skrrr{}; 
        ///Control Register Read
        enum class crrVal {
            v0=0x00000000,     ///<Reads to the Control register are ignored.
            v1=0x00000001,     ///<Reads to the Control register complete as normal.
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
            v0=0x00000000,     ///<Reads to the Lock register are ignored.
            v1=0x00000001,     ///<Reads to the Lock register complete as normal.
        };
        namespace lrrValC{
            constexpr MPL::Value<lrrVal,lrrVal::v0> v0{};
            constexpr MPL::Value<lrrVal,lrrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,lrrVal> lrr{}; 
        ///Interrupt Enable Read
        enum class ierVal {
            v0=0x00000000,     ///<Reads to the Interrupt enable register are ignored.
            v1=0x00000001,     ///<Reads to the Interrupt enable register complete as normal.
        };
        namespace ierValC{
            constexpr MPL::Value<ierVal,ierVal::v0> v0{};
            constexpr MPL::Value<ierVal,ierVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ierVal> ier{}; 
        ///Tamper Seconds Register Read
        enum class tsrrVal {
            v0=0x00000000,     ///<Reads to the tamper seconds register are ignored.
            v1=0x00000001,     ///<Reads to the tamper seconds register complete as normal.
        };
        namespace tsrrValC{
            constexpr MPL::Value<tsrrVal,tsrrVal::v0> v0{};
            constexpr MPL::Value<tsrrVal,tsrrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,tsrrVal> tsrr{}; 
        ///Tamper Enable Read
        enum class terVal {
            v0=0x00000000,     ///<Reads to the tamper enable register are ignored.
            v1=0x00000001,     ///<Reads to the tamper enable register complete as normal.
        };
        namespace terValC{
            constexpr MPL::Value<terVal,terVal::v0> v0{};
            constexpr MPL::Value<terVal,terVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,terVal> ter{}; 
        ///Pin Direction Read
        enum class pdrVal {
            v0=0x00000000,     ///<Reads to the pin direction register are ignored.
            v1=0x00000001,     ///<Reads to the pin direction register complete as normal.
        };
        namespace pdrValC{
            constexpr MPL::Value<pdrVal,pdrVal::v0> v0{};
            constexpr MPL::Value<pdrVal,pdrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,pdrVal> pdr{}; 
        ///Pin Polarity Read
        enum class pprVal {
            v0=0x00000000,     ///<Reads to the pin polarity register are ignored.
            v1=0x00000001,     ///<Reads to the pin polarity register complete as normal.
        };
        namespace pprValC{
            constexpr MPL::Value<pprVal,pprVal::v0> v0{};
            constexpr MPL::Value<pprVal,pprVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,pprVal> ppr{}; 
        ///Active Tamper Read
        enum class atrVal {
            v0=0x00000000,     ///<Reads to the active tamper register are ignored.
            v1=0x00000001,     ///<Reads to the active tamper register complete as normal.
        };
        namespace atrValC{
            constexpr MPL::Value<atrVal,atrVal::v0> v0{};
            constexpr MPL::Value<atrVal,atrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,atrVal> atr{}; 
        ///Glitch Filter Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> gfr{}; 
    }
    namespace DrySkr0{    ///<Secure Key Register
        using Addr = Register::Address<0x40043000,0x00000000,0,unsigned>;
        ///Secure Key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sk{}; 
    }
    namespace DrySkr1{    ///<Secure Key Register
        using Addr = Register::Address<0x40043004,0x00000000,0,unsigned>;
        ///Secure Key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sk{}; 
    }
    namespace DrySkr2{    ///<Secure Key Register
        using Addr = Register::Address<0x40043008,0x00000000,0,unsigned>;
        ///Secure Key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sk{}; 
    }
    namespace DrySkr3{    ///<Secure Key Register
        using Addr = Register::Address<0x4004300c,0x00000000,0,unsigned>;
        ///Secure Key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sk{}; 
    }
    namespace DrySkr4{    ///<Secure Key Register
        using Addr = Register::Address<0x40043010,0x00000000,0,unsigned>;
        ///Secure Key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sk{}; 
    }
    namespace DrySkr5{    ///<Secure Key Register
        using Addr = Register::Address<0x40043014,0x00000000,0,unsigned>;
        ///Secure Key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sk{}; 
    }
    namespace DrySkr6{    ///<Secure Key Register
        using Addr = Register::Address<0x40043018,0x00000000,0,unsigned>;
        ///Secure Key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sk{}; 
    }
    namespace DrySkr7{    ///<Secure Key Register
        using Addr = Register::Address<0x4004301c,0x00000000,0,unsigned>;
        ///Secure Key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sk{}; 
    }
    namespace DrySwac{    ///<Secure Write Access Control
        using Addr = Register::Address<0x40043800,0xffffff00,0,unsigned>;
        ///Secure Key Register Write
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> skrw{}; 
    }
    namespace DrySrac{    ///<Secure Read Access Control
        using Addr = Register::Address<0x40043804,0xffffff00,0,unsigned>;
        ///Secure Key Register Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> skrr{}; 
    }
}
