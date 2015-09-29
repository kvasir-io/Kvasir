#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Pulse Density Modulation (Digital Microphone) Interface
    namespace NonetasksStart{    ///<Starts continuous PDM transfer
        using Addr = Register::Address<0x4001d000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStop{    ///<Stops PDM transfer
        using Addr = Register::Address<0x4001d004,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsStarted{    ///<PDM transfer has started
        using Addr = Register::Address<0x4001d100,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsStopped{    ///<PDM transfer has finished
        using Addr = Register::Address<0x4001d104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsEnd{    ///<The PDM has written the last sample specified by SAMPLE.MAXCNT (or the last sample after a STOP task has been received) to Data RAM
        using Addr = Register::Address<0x4001d108,0xffffffff,0,unsigned>;
    }
    namespace Noneinten{    ///<Enable or disable interrupt
        using Addr = Register::Address<0x4001d300,0xfffffff8,0,unsigned>;
        ///Enable or disable interrupt on EVENTS_STARTED event
        enum class startedVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace startedValC{
            constexpr MPL::Value<startedVal,startedVal::disabled> disabled{};
            constexpr MPL::Value<startedVal,startedVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startedVal> started{}; 
        ///Enable or disable interrupt on EVENTS_STOPPED event
        enum class stoppedVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace stoppedValC{
            constexpr MPL::Value<stoppedVal,stoppedVal::disabled> disabled{};
            constexpr MPL::Value<stoppedVal,stoppedVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,stoppedVal> stopped{}; 
        ///Enable or disable interrupt on EVENTS_END event
        enum class endVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace endValC{
            constexpr MPL::Value<endVal,endVal::disabled> disabled{};
            constexpr MPL::Value<endVal,endVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,endVal> end{}; 
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x4001d304,0xfffffff8,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_STARTED event
        enum class startedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace startedValC{
            constexpr MPL::Value<startedVal,startedVal::disabled> disabled{};
            constexpr MPL::Value<startedVal,startedVal::enabled> enabled{};
            constexpr MPL::Value<startedVal,startedVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startedVal> started{}; 
        ///Write '1' to Enable interrupt on EVENTS_STOPPED event
        enum class stoppedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace stoppedValC{
            constexpr MPL::Value<stoppedVal,stoppedVal::disabled> disabled{};
            constexpr MPL::Value<stoppedVal,stoppedVal::enabled> enabled{};
            constexpr MPL::Value<stoppedVal,stoppedVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,stoppedVal> stopped{}; 
        ///Write '1' to Enable interrupt on EVENTS_END event
        enum class endVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace endValC{
            constexpr MPL::Value<endVal,endVal::disabled> disabled{};
            constexpr MPL::Value<endVal,endVal::enabled> enabled{};
            constexpr MPL::Value<endVal,endVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,endVal> end{}; 
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x4001d308,0xfffffff8,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_STARTED event
        enum class startedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace startedValC{
            constexpr MPL::Value<startedVal,startedVal::disabled> disabled{};
            constexpr MPL::Value<startedVal,startedVal::enabled> enabled{};
            constexpr MPL::Value<startedVal,startedVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startedVal> started{}; 
        ///Write '1' to Clear interrupt on EVENTS_STOPPED event
        enum class stoppedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace stoppedValC{
            constexpr MPL::Value<stoppedVal,stoppedVal::disabled> disabled{};
            constexpr MPL::Value<stoppedVal,stoppedVal::enabled> enabled{};
            constexpr MPL::Value<stoppedVal,stoppedVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,stoppedVal> stopped{}; 
        ///Write '1' to Clear interrupt on EVENTS_END event
        enum class endVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace endValC{
            constexpr MPL::Value<endVal,endVal::disabled> disabled{};
            constexpr MPL::Value<endVal,endVal::enabled> enabled{};
            constexpr MPL::Value<endVal,endVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,endVal> end{}; 
    }
    namespace Noneenable{    ///<PDM module enable register
        using Addr = Register::Address<0x4001d500,0xfffffffe,0,unsigned>;
        ///Enable or disable PDM reception
        enum class enableVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace enableValC{
            constexpr MPL::Value<enableVal,enableVal::disabled> disabled{};
            constexpr MPL::Value<enableVal,enableVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,enableVal> enable{}; 
    }
    namespace Nonepdmclkctrl{    ///<PDM clock generator control
        using Addr = Register::Address<0x4001d504,0x00000000,0,unsigned>;
        ///PDM_CLK frequency
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> freq{}; 
    }
    namespace Nonemode{    ///<Defines the routing of the connected PDM microphones' signals
        using Addr = Register::Address<0x4001d508,0xfffffffc,0,unsigned>;
        ///Mono or stereo operation
        enum class monoVal {
            stereo=0x00000000,     ///<Sample and store one pair (Left + Right) of 16bit samples per RAM word R=[31:16]; L=[15:0]
            mono=0x00000001,     ///<Sample and store two successive Left samples (16 bit each) per RAM word L1=[31:16]; L0=[15:0]
        };
        namespace monoValC{
            constexpr MPL::Value<monoVal,monoVal::stereo> stereo{};
            constexpr MPL::Value<monoVal,monoVal::mono> mono{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,monoVal> mono{}; 
        ///Defines on which PDM_CLK edge Left (or mono) is sampled
        enum class edgeVal {
            leftfalling=0x00000000,     ///<Left (or mono) is sampled on falling edge of PDM_CLK
            leftrising=0x00000001,     ///<Left (or mono) is sampled on rising edge of PDM_CLK
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::leftfalling> leftfalling{};
            constexpr MPL::Value<edgeVal,edgeVal::leftrising> leftrising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
    }
    namespace Nonegainl{    ///<Left output gain adjustment
        using Addr = Register::Address<0x4001d518,0xffffff80,0,unsigned>;
        ///Left output gain adjustment, in 0.5 dB steps, around the requirement that 0dB gain adjustment corresponds to 2500 RMS output samples (16-bit) with 1 kHz 90dBA signal into a -26dBFS sensitivity PDM microphone. 0x00    -20 dB gain 0x01  -19.5 dB gain (...) 0x27   -0.5 dB gain 0x28      0 dB gain 0x29   +0.5 dB gain (...) 0x4F  +19.5 dB gain 0x50    +20 dB gain
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> gainl{}; 
    }
    namespace Nonegainr{    ///<Right output gain adjustment
        using Addr = Register::Address<0x4001d51c,0xffffff00,0,unsigned>;
        ///Right output gain adjustment, in 0.5 dB steps, around the requirement that 0dB gain adjustment corresponds to 2500 RMS output samples (16-bit) with 1 kHz 90dBA signal into a -26dBFS sensitivity PDM microphone. (same encoding as GAINL)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gainr{}; 
    }
}
