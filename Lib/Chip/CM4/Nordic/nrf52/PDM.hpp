#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Pulse Density Modulation (Digital Microphone) Interface
    namespace PdmTasksStart{    ///<Starts continuous PDM transfer
        using Addr = Register::Address<0x4001d000,0xffffffff,0x00000000,unsigned>;
    }
    namespace PdmTasksStop{    ///<Stops PDM transfer
        using Addr = Register::Address<0x4001d004,0xffffffff,0x00000000,unsigned>;
    }
    namespace PdmEventsStarted{    ///<PDM transfer has started
        using Addr = Register::Address<0x4001d100,0xffffffff,0x00000000,unsigned>;
    }
    namespace PdmEventsStopped{    ///<PDM transfer has finished
        using Addr = Register::Address<0x4001d104,0xffffffff,0x00000000,unsigned>;
    }
    namespace PdmEventsEnd{    ///<The PDM has written the last sample specified by SAMPLE.MAXCNT (or the last sample after a STOP task has been received) to Data RAM
        using Addr = Register::Address<0x4001d108,0xffffffff,0x00000000,unsigned>;
    }
    namespace PdmInten{    ///<Enable or disable interrupt
        using Addr = Register::Address<0x4001d300,0xfffffff8,0x00000000,unsigned>;
        ///Enable or disable interrupt on EVENTS_STARTED event
        enum class StartedVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StartedVal> started{}; 
        namespace StartedValC{
            constexpr Register::FieldValue<decltype(started)::Type,StartedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(started)::Type,StartedVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_STOPPED event
        enum class StoppedVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,StoppedVal> stopped{}; 
        namespace StoppedValC{
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_END event
        enum class EndVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,EndVal> end{}; 
        namespace EndValC{
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::enabled> enabled{};
        }
    }
    namespace PdmIntenset{    ///<Enable interrupt
        using Addr = Register::Address<0x4001d304,0xfffffff8,0x00000000,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_STARTED event
        enum class StartedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StartedVal> started{}; 
        namespace StartedValC{
            constexpr Register::FieldValue<decltype(started)::Type,StartedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(started)::Type,StartedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(started)::Type,StartedVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_STOPPED event
        enum class StoppedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,StoppedVal> stopped{}; 
        namespace StoppedValC{
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_END event
        enum class EndVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,EndVal> end{}; 
        namespace EndValC{
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::set> set{};
        }
    }
    namespace PdmIntenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x4001d308,0xfffffff8,0x00000000,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_STARTED event
        enum class StartedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StartedVal> started{}; 
        namespace StartedValC{
            constexpr Register::FieldValue<decltype(started)::Type,StartedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(started)::Type,StartedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(started)::Type,StartedVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_STOPPED event
        enum class StoppedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,StoppedVal> stopped{}; 
        namespace StoppedValC{
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_END event
        enum class EndVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,EndVal> end{}; 
        namespace EndValC{
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::clear> clear{};
        }
    }
    namespace PdmEnable{    ///<PDM module enable register
        using Addr = Register::Address<0x4001d500,0xfffffffe,0x00000000,unsigned>;
        ///Enable or disable PDM reception
        enum class EnableVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnableVal> enable{}; 
        namespace EnableValC{
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::enabled> enabled{};
        }
    }
    namespace PdmPdmclkctrl{    ///<PDM clock generator control
        using Addr = Register::Address<0x4001d504,0x00000000,0x00000000,unsigned>;
        ///PDM_CLK frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> freq{}; 
    }
    namespace PdmMode{    ///<Defines the routing of the connected PDM microphones' signals
        using Addr = Register::Address<0x4001d508,0xfffffffc,0x00000000,unsigned>;
        ///Mono or stereo operation
        enum class MonoVal {
            stereo=0x00000000,     ///<Sample and store one pair (Left + Right) of 16bit samples per RAM word R=[31:16]; L=[15:0]
            mono=0x00000001,     ///<Sample and store two successive Left samples (16 bit each) per RAM word L1=[31:16]; L0=[15:0]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MonoVal> mono{}; 
        namespace MonoValC{
            constexpr Register::FieldValue<decltype(mono)::Type,MonoVal::stereo> stereo{};
            constexpr Register::FieldValue<decltype(mono)::Type,MonoVal::mono> mono{};
        }
        ///Defines on which PDM_CLK edge Left (or mono) is sampled
        enum class EdgeVal {
            leftfalling=0x00000000,     ///<Left (or mono) is sampled on falling edge of PDM_CLK
            leftrising=0x00000001,     ///<Left (or mono) is sampled on rising edge of PDM_CLK
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::leftfalling> leftfalling{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::leftrising> leftrising{};
        }
    }
    namespace PdmGainl{    ///<Left output gain adjustment
        using Addr = Register::Address<0x4001d518,0xffffff80,0x00000000,unsigned>;
        ///Left output gain adjustment, in 0.5 dB steps, around the requirement that 0dB gain adjustment corresponds to 2500 RMS output samples (16-bit) with 1 kHz 90dBA signal into a -26dBFS sensitivity PDM microphone. 0x00    -20 dB gain 0x01  -19.5 dB gain (...) 0x27   -0.5 dB gain 0x28      0 dB gain 0x29   +0.5 dB gain (...) 0x4F  +19.5 dB gain 0x50    +20 dB gain
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> gainl{}; 
    }
    namespace PdmGainr{    ///<Right output gain adjustment
        using Addr = Register::Address<0x4001d51c,0xffffff00,0x00000000,unsigned>;
        ///Right output gain adjustment, in 0.5 dB steps, around the requirement that 0dB gain adjustment corresponds to 2500 RMS output samples (16-bit) with 1 kHz 90dBA signal into a -26dBFS sensitivity PDM microphone. (same encoding as GAINL)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gainr{}; 
    }
}
