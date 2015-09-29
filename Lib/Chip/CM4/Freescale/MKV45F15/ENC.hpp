#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Quadrature Decoder
    namespace EncCtrl{    ///<Control Register
        using Addr = Register::Address<0x40055000,0xffff0000,0,unsigned>;
        ///Compare Interrupt Enable
        enum class cmpieVal {
            v0=0x00000000,     ///<Compare interrupt is disabled
            v1=0x00000001,     ///<Compare interrupt is enabled
        };
        namespace cmpieValC{
            constexpr MPL::Value<cmpieVal,cmpieVal::v0> v0{};
            constexpr MPL::Value<cmpieVal,cmpieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cmpieVal> cmpie{}; 
        ///Compare Interrupt Request
        enum class cmpirqVal {
            v0=0x00000000,     ///<No match has occurred
            v1=0x00000001,     ///<COMP match has occurred
        };
        namespace cmpirqValC{
            constexpr MPL::Value<cmpirqVal,cmpirqVal::v0> v0{};
            constexpr MPL::Value<cmpirqVal,cmpirqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,cmpirqVal> cmpirq{}; 
        ///Watchdog Enable
        enum class wdeVal {
            v0=0x00000000,     ///<Watchdog timer is disabled
            v1=0x00000001,     ///<Watchdog timer is enabled
        };
        namespace wdeValC{
            constexpr MPL::Value<wdeVal,wdeVal::v0> v0{};
            constexpr MPL::Value<wdeVal,wdeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,wdeVal> wde{}; 
        ///Watchdog Timeout Interrupt Enable
        enum class dieVal {
            v0=0x00000000,     ///<Watchdog timer interrupt is disabled
            v1=0x00000001,     ///<Watchdog timer interrupt is enabled
        };
        namespace dieValC{
            constexpr MPL::Value<dieVal,dieVal::v0> v0{};
            constexpr MPL::Value<dieVal,dieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dieVal> die{}; 
        ///Watchdog Timeout Interrupt Request
        enum class dirqVal {
            v0=0x00000000,     ///<No interrupt has occurred
            v1=0x00000001,     ///<Watchdog timeout interrupt has occurred
        };
        namespace dirqValC{
            constexpr MPL::Value<dirqVal,dirqVal::v0> v0{};
            constexpr MPL::Value<dirqVal,dirqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,dirqVal> dirq{}; 
        ///Use Negative Edge of INDEX Pulse
        enum class xneVal {
            v0=0x00000000,     ///<Use positive transition edge of INDEX pulse
            v1=0x00000001,     ///<Use negative transition edge of INDEX pulse
        };
        namespace xneValC{
            constexpr MPL::Value<xneVal,xneVal::v0> v0{};
            constexpr MPL::Value<xneVal,xneVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,xneVal> xne{}; 
        ///INDEX Triggered Initialization of Position Counters UPOS and LPOS
        enum class xipVal {
            v0=0x00000000,     ///<No action
            v1=0x00000001,     ///<INDEX pulse initializes the position counter
        };
        namespace xipValC{
            constexpr MPL::Value<xipVal,xipVal::v0> v0{};
            constexpr MPL::Value<xipVal,xipVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,xipVal> xip{}; 
        ///INDEX Pulse Interrupt Enable
        enum class xieVal {
            v0=0x00000000,     ///<INDEX pulse interrupt is disabled
            v1=0x00000001,     ///<INDEX pulse interrupt is enabled
        };
        namespace xieValC{
            constexpr MPL::Value<xieVal,xieVal::v0> v0{};
            constexpr MPL::Value<xieVal,xieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,xieVal> xie{}; 
        ///INDEX Pulse Interrupt Request
        enum class xirqVal {
            v0=0x00000000,     ///<No interrupt has occurred
            v1=0x00000001,     ///<INDEX pulse interrupt has occurred
        };
        namespace xirqValC{
            constexpr MPL::Value<xirqVal,xirqVal::v0> v0{};
            constexpr MPL::Value<xirqVal,xirqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,xirqVal> xirq{}; 
        ///Enable Signal Phase Count Mode
        enum class ph1Val {
            v0=0x00000000,     ///<Use standard quadrature decoder where PHASEA and PHASEB represent a two phase quadrature signal.
            v1=0x00000001,     ///<Bypass the quadrature decoder. A positive transition of the PHASEA input generates a count signal. The PHASEB input and the REV bit control the counter direction. If CTRL[REV] = 0, PHASEB = 0, then count up If CTRL[REV] = 0, PHASEB = 1, then count down If CTRL[REV] = 1, PHASEB = 0, then count down If CTRL[REV] = 1, PHASEB = 1, then count up
        };
        namespace ph1ValC{
            constexpr MPL::Value<ph1Val,ph1Val::v0> v0{};
            constexpr MPL::Value<ph1Val,ph1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ph1Val> ph1{}; 
        ///Enable Reverse Direction Counting
        enum class revVal {
            v0=0x00000000,     ///<Count normally
            v1=0x00000001,     ///<Count in the reverse direction
        };
        namespace revValC{
            constexpr MPL::Value<revVal,revVal::v0> v0{};
            constexpr MPL::Value<revVal,revVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,revVal> rev{}; 
        ///Software Triggered Initialization of Position Counters UPOS and LPOS
        enum class swipVal {
            v0=0x00000000,     ///<No action
            v1=0x00000001,     ///<Initialize position counter
        };
        namespace swipValC{
            constexpr MPL::Value<swipVal,swipVal::v0> v0{};
            constexpr MPL::Value<swipVal,swipVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,swipVal> swip{}; 
        ///Use Negative Edge of HOME Input
        enum class hneVal {
            v0=0x00000000,     ///<Use positive going edge-to-trigger initialization of position counters UPOS and LPOS
            v1=0x00000001,     ///<Use negative going edge-to-trigger initialization of position counters UPOS and LPOS
        };
        namespace hneValC{
            constexpr MPL::Value<hneVal,hneVal::v0> v0{};
            constexpr MPL::Value<hneVal,hneVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,hneVal> hne{}; 
        ///Enable HOME to Initialize Position Counters UPOS and LPOS
        enum class hipVal {
            v0=0x00000000,     ///<No action
            v1=0x00000001,     ///<HOME signal initializes the position counter
        };
        namespace hipValC{
            constexpr MPL::Value<hipVal,hipVal::v0> v0{};
            constexpr MPL::Value<hipVal,hipVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,hipVal> hip{}; 
        ///HOME Interrupt Enable
        enum class hieVal {
            v0=0x00000000,     ///<Disable HOME interrupts
            v1=0x00000001,     ///<Enable HOME interrupts
        };
        namespace hieValC{
            constexpr MPL::Value<hieVal,hieVal::v0> v0{};
            constexpr MPL::Value<hieVal,hieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,hieVal> hie{}; 
        ///HOME Signal Transition Interrupt Request
        enum class hirqVal {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<HOME signal transition interrupt request
        };
        namespace hirqValC{
            constexpr MPL::Value<hirqVal,hirqVal::v0> v0{};
            constexpr MPL::Value<hirqVal,hirqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,hirqVal> hirq{}; 
    }
    namespace EncFilt{    ///<Input Filter Register
        using Addr = Register::Address<0x40055002,0xfffff800,0,unsigned>;
        ///Input Filter Sample Period
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> filtPer{}; 
        ///Input Filter Sample Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> filtCnt{}; 
    }
    namespace EncWtr{    ///<Watchdog Timeout Register
        using Addr = Register::Address<0x40055004,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdog{}; 
    }
    namespace EncPosd{    ///<Position Difference Counter Register
        using Addr = Register::Address<0x40055006,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> posd{}; 
    }
    namespace EncPosdh{    ///<Position Difference Hold Register
        using Addr = Register::Address<0x40055008,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> posdh{}; 
    }
    namespace EncRev{    ///<Revolution Counter Register
        using Addr = Register::Address<0x4005500a,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rev{}; 
    }
    namespace EncRevh{    ///<Revolution Hold Register
        using Addr = Register::Address<0x4005500c,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> revh{}; 
    }
    namespace EncUpos{    ///<Upper Position Counter Register
        using Addr = Register::Address<0x4005500e,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pos{}; 
    }
    namespace EncLpos{    ///<Lower Position Counter Register
        using Addr = Register::Address<0x40055010,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pos{}; 
    }
    namespace EncUposh{    ///<Upper Position Hold Register
        using Addr = Register::Address<0x40055012,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> posh{}; 
    }
    namespace EncLposh{    ///<Lower Position Hold Register
        using Addr = Register::Address<0x40055014,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> posh{}; 
    }
    namespace EncUinit{    ///<Upper Initialization Register
        using Addr = Register::Address<0x40055016,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> init{}; 
    }
    namespace EncLinit{    ///<Lower Initialization Register
        using Addr = Register::Address<0x40055018,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> init{}; 
    }
    namespace EncImr{    ///<Input Monitor Register
        using Addr = Register::Address<0x4005501a,0xffffff00,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> home{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> index{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> phb{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pha{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fhom{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> find{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fphb{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fpha{}; 
    }
    namespace EncTst{    ///<Test Register
        using Addr = Register::Address<0x4005501c,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> testCount{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> testPeriod{}; 
        ///Quadrature Decoder Negative Signal
        enum class qdnVal {
            v0=0x00000000,     ///<Leaves quadrature decoder signal in a positive direction
            v1=0x00000001,     ///<Generates a negative quadrature decoder signal
        };
        namespace qdnValC{
            constexpr MPL::Value<qdnVal,qdnVal::v0> v0{};
            constexpr MPL::Value<qdnVal,qdnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,qdnVal> qdn{}; 
        ///Test Counter Enable
        enum class tceVal {
            v0=0x00000000,     ///<Test count is not enabled
            v1=0x00000001,     ///<Test count is enabled
        };
        namespace tceValC{
            constexpr MPL::Value<tceVal,tceVal::v0> v0{};
            constexpr MPL::Value<tceVal,tceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,tceVal> tce{}; 
        ///Test Mode Enable
        enum class tenVal {
            v0=0x00000000,     ///<Test module is not enabled
            v1=0x00000001,     ///<Test module is enabled
        };
        namespace tenValC{
            constexpr MPL::Value<tenVal,tenVal::v0> v0{};
            constexpr MPL::Value<tenVal,tenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,tenVal> ten{}; 
    }
    namespace EncCtrl2{    ///<Control 2 Register
        using Addr = Register::Address<0x4005501e,0xfffff000,0,unsigned>;
        ///Update Hold Registers
        enum class updhldVal {
            v0=0x00000000,     ///<Disable updates of hold registers on rising edge of TRIGGER
            v1=0x00000001,     ///<Enable updates of hold registers on rising edge of TRIGGER
        };
        namespace updhldValC{
            constexpr MPL::Value<updhldVal,updhldVal::v0> v0{};
            constexpr MPL::Value<updhldVal,updhldVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,updhldVal> updhld{}; 
        ///Update Position Registers
        enum class updposVal {
            v0=0x00000000,     ///<No action for POSD, REV, UPOS and LPOS on rising edge of TRIGGER
            v1=0x00000001,     ///<Clear POSD, REV, UPOS and LPOS on rising edge of TRIGGER
        };
        namespace updposValC{
            constexpr MPL::Value<updposVal,updposVal::v0> v0{};
            constexpr MPL::Value<updposVal,updposVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,updposVal> updpos{}; 
        ///Enable Modulo Counting
        enum class modVal {
            v0=0x00000000,     ///<Disable modulo counting
            v1=0x00000001,     ///<Enable modulo counting
        };
        namespace modValC{
            constexpr MPL::Value<modVal,modVal::v0> v0{};
            constexpr MPL::Value<modVal,modVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,modVal> mod{}; 
        ///Count Direction Flag
        enum class dirVal {
            v0=0x00000000,     ///<Last count was in the down direction
            v1=0x00000001,     ///<Last count was in the up direction
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::v0> v0{};
            constexpr MPL::Value<dirVal,dirVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Roll-under Interrupt Enable
        enum class ruieVal {
            v0=0x00000000,     ///<Roll-under interrupt is disabled
            v1=0x00000001,     ///<Roll-under interrupt is enabled
        };
        namespace ruieValC{
            constexpr MPL::Value<ruieVal,ruieVal::v0> v0{};
            constexpr MPL::Value<ruieVal,ruieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ruieVal> ruie{}; 
        ///Roll-under Interrupt Request
        enum class ruirqVal {
            v0=0x00000000,     ///<No roll-under has occurred
            v1=0x00000001,     ///<Roll-under has occurred
        };
        namespace ruirqValC{
            constexpr MPL::Value<ruirqVal,ruirqVal::v0> v0{};
            constexpr MPL::Value<ruirqVal,ruirqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ruirqVal> ruirq{}; 
        ///Roll-over Interrupt Enable
        enum class roieVal {
            v0=0x00000000,     ///<Roll-over interrupt is disabled
            v1=0x00000001,     ///<Roll-over interrupt is enabled
        };
        namespace roieValC{
            constexpr MPL::Value<roieVal,roieVal::v0> v0{};
            constexpr MPL::Value<roieVal,roieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,roieVal> roie{}; 
        ///Roll-over Interrupt Request
        enum class roirqVal {
            v0=0x00000000,     ///<No roll-over has occurred
            v1=0x00000001,     ///<Roll-over has occurred
        };
        namespace roirqValC{
            constexpr MPL::Value<roirqVal,roirqVal::v0> v0{};
            constexpr MPL::Value<roirqVal,roirqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,roirqVal> roirq{}; 
        ///Revolution Counter Modulus Enable
        enum class revmodVal {
            v0=0x00000000,     ///<Use INDEX pulse to increment/decrement revolution counter (REV).
            v1=0x00000001,     ///<Use modulus counting roll-over/under to increment/decrement revolution counter (REV).
        };
        namespace revmodValC{
            constexpr MPL::Value<revmodVal,revmodVal::v0> v0{};
            constexpr MPL::Value<revmodVal,revmodVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,revmodVal> revmod{}; 
        ///Output Control
        enum class outctlVal {
            v0=0x00000000,     ///<POSMATCH pulses when a match occurs between the position counters (POS) and the compare value (COMP).
            v1=0x00000001,     ///<POSMATCH pulses when the UPOS, LPOS, REV, or POSD registers are read.
        };
        namespace outctlValC{
            constexpr MPL::Value<outctlVal,outctlVal::v0> v0{};
            constexpr MPL::Value<outctlVal,outctlVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,outctlVal> outctl{}; 
        ///Simultaneous PHASEA and PHASEB Change Interrupt Enable
        enum class sabieVal {
            v0=0x00000000,     ///<Simultaneous PHASEA and PHASEB change interrupt disabled.
            v1=0x00000001,     ///<Simultaneous PHASEA and PHASEB change interrupt enabled.
        };
        namespace sabieValC{
            constexpr MPL::Value<sabieVal,sabieVal::v0> v0{};
            constexpr MPL::Value<sabieVal,sabieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,sabieVal> sabie{}; 
        ///Simultaneous PHASEA and PHASEB Change Interrupt Request
        enum class sabirqVal {
            v0=0x00000000,     ///<No simultaneous change of PHASEA and PHASEB has occurred.
            v1=0x00000001,     ///<A simultaneous change of PHASEA and PHASEB has occurred.
        };
        namespace sabirqValC{
            constexpr MPL::Value<sabirqVal,sabirqVal::v0> v0{};
            constexpr MPL::Value<sabirqVal,sabirqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,sabirqVal> sabirq{}; 
    }
    namespace EncUmod{    ///<Upper Modulus Register
        using Addr = Register::Address<0x40055020,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mod{}; 
    }
    namespace EncLmod{    ///<Lower Modulus Register
        using Addr = Register::Address<0x40055022,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mod{}; 
    }
    namespace EncUcomp{    ///<Upper Position Compare Register
        using Addr = Register::Address<0x40055024,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> comp{}; 
    }
    namespace EncLcomp{    ///<Lower Position Compare Register
        using Addr = Register::Address<0x40055026,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> comp{}; 
    }
}
