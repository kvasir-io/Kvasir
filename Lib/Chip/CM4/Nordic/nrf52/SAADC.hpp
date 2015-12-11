#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog to Digital Converter
    namespace NonetasksStart{    ///<Start the ADC and prepare the result buffer in RAM
        using Addr = Register::Address<0x40007000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksSample{    ///<Take one ADC sample, if scan is enabled all channels are sampled
        using Addr = Register::Address<0x40007004,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStop{    ///<Stop the ADC and terminate any on-going conversion
        using Addr = Register::Address<0x40007008,0xffffffff,0,unsigned>;
    }
    namespace NonetasksCalibrateoffset{    ///<Starts offset auto-calibration
        using Addr = Register::Address<0x4000700c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsStarted{    ///<The ADC has started
        using Addr = Register::Address<0x40007100,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsEnd{    ///<The ADC has filled up the Result buffer
        using Addr = Register::Address<0x40007104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsDone{    ///<A conversion task has been completed. Depending on the mode, multiple conversions might be needed for a result to be transferred to RAM.
        using Addr = Register::Address<0x40007108,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsResultdone{    ///<A result is ready to get transferred to RAM
        using Addr = Register::Address<0x4000710c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCalibratedone{    ///<Calibration is complete
        using Addr = Register::Address<0x40007110,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsStopped{    ///<The ADC has stopped
        using Addr = Register::Address<0x40007114,0xffffffff,0,unsigned>;
    }
    namespace Noneinten{    ///<Enable or disable interrupt
        using Addr = Register::Address<0x40007300,0xffc00000,0,unsigned>;
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
        }
        ///Enable or disable interrupt on EVENTS_END event
        enum class EndVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EndVal> end{}; 
        namespace EndValC{
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::enabled> enabled{};
        }
        }
        ///Enable or disable interrupt on EVENTS_DONE event
        enum class DoneVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,DoneVal> done{}; 
        namespace DoneValC{
            constexpr Register::FieldValue<decltype(done)::Type,DoneVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(done)::Type,DoneVal::enabled> enabled{};
        }
        }
        ///Enable or disable interrupt on EVENTS_RESULTDONE event
        enum class ResultdoneVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ResultdoneVal> resultdone{}; 
        namespace ResultdoneValC{
            constexpr Register::FieldValue<decltype(resultdone)::Type,ResultdoneVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(resultdone)::Type,ResultdoneVal::enabled> enabled{};
        }
        }
        ///Enable or disable interrupt on EVENTS_CALIBRATEDONE event
        enum class CalibratedoneVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CalibratedoneVal> calibratedone{}; 
        namespace CalibratedoneValC{
            constexpr Register::FieldValue<decltype(calibratedone)::Type,CalibratedoneVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(calibratedone)::Type,CalibratedoneVal::enabled> enabled{};
        }
        }
        ///Enable or disable interrupt on EVENTS_STOPPED event
        enum class StoppedVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,StoppedVal> stopped{}; 
        namespace StoppedValC{
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::enabled> enabled{};
        }
        }
        ///Enable or disable interrupt on EVENTS_CH[0].LIMITH event
        enum class Ch0limithVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch0limithVal> ch0limith{}; 
        namespace Ch0limithValC{
            constexpr Register::FieldValue<decltype(ch0limith)::Type,Ch0limithVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch0limith)::Type,Ch0limithVal::enabled> enabled{};
        }
        }
        ///Enable or disable interrupt on EVENTS_CH[0].LIMITL event
        enum class Ch0limitlVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch0limitlVal> ch0limitl{}; 
        namespace Ch0limitlValC{
            constexpr Register::FieldValue<decltype(ch0limitl)::Type,Ch0limitlVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch0limitl)::Type,Ch0limitlVal::enabled> enabled{};
        }
        }
        ///Enable or disable interrupt on EVENTS_CH[1].LIMITH event
        enum class Ch1limithVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch1limithVal> ch1limith{}; 
        namespace Ch1limithValC{
            constexpr Register::FieldValue<decltype(ch1limith)::Type,Ch1limithVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch1limith)::Type,Ch1limithVal::enabled> enabled{};
        }
        }
        ///Enable or disable interrupt on EVENTS_CH[1].LIMITL event
        enum class Ch1limitlVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch1limitlVal> ch1limitl{}; 
        namespace Ch1limitlValC{
            constexpr Register::FieldValue<decltype(ch1limitl)::Type,Ch1limitlVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch1limitl)::Type,Ch1limitlVal::enabled> enabled{};
        }
        }
        ///Enable or disable interrupt on EVENTS_CH[2].LIMITH event
        enum class Ch2limithVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ch2limithVal> ch2limith{}; 
        namespace Ch2limithValC{
            constexpr Register::FieldValue<decltype(ch2limith)::Type,Ch2limithVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch2limith)::Type,Ch2limithVal::enabled> enabled{};
        }
        }
        ///Enable or disable interrupt on EVENTS_CH[2].LIMITL event
        enum class Ch2limitlVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ch2limitlVal> ch2limitl{}; 
        namespace Ch2limitlValC{
            constexpr Register::FieldValue<decltype(ch2limitl)::Type,Ch2limitlVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch2limitl)::Type,Ch2limitlVal::enabled> enabled{};
        }
        }
        ///Enable or disable interrupt on EVENTS_CH[3].LIMITH event
        enum class Ch3limithVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ch3limithVal> ch3limith{}; 
        namespace Ch3limithValC{
            constexpr Register::FieldValue<decltype(ch3limith)::Type,Ch3limithVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch3limith)::Type,Ch3limithVal::enabled> enabled{};
        }
        }
        ///Enable or disable interrupt on EVENTS_CH[3].LIMITL event
        enum class Ch3limitlVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ch3limitlVal> ch3limitl{}; 
        namespace Ch3limitlValC{
            constexpr Register::FieldValue<decltype(ch3limitl)::Type,Ch3limitlVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch3limitl)::Type,Ch3limitlVal::enabled> enabled{};
        }
        }
        ///Enable or disable interrupt on EVENTS_CH[4].LIMITH event
        enum class Ch4limithVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ch4limithVal> ch4limith{}; 
        namespace Ch4limithValC{
            constexpr Register::FieldValue<decltype(ch4limith)::Type,Ch4limithVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch4limith)::Type,Ch4limithVal::enabled> enabled{};
        }
        }
        ///Enable or disable interrupt on EVENTS_CH[4].LIMITL event
        enum class Ch4limitlVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ch4limitlVal> ch4limitl{}; 
        namespace Ch4limitlValC{
            constexpr Register::FieldValue<decltype(ch4limitl)::Type,Ch4limitlVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch4limitl)::Type,Ch4limitlVal::enabled> enabled{};
        }
        }
        ///Enable or disable interrupt on EVENTS_CH[5].LIMITH event
        enum class Ch5limithVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Ch5limithVal> ch5limith{}; 
        namespace Ch5limithValC{
            constexpr Register::FieldValue<decltype(ch5limith)::Type,Ch5limithVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch5limith)::Type,Ch5limithVal::enabled> enabled{};
        }
        }
        ///Enable or disable interrupt on EVENTS_CH[5].LIMITL event
        enum class Ch5limitlVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Ch5limitlVal> ch5limitl{}; 
        namespace Ch5limitlValC{
            constexpr Register::FieldValue<decltype(ch5limitl)::Type,Ch5limitlVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch5limitl)::Type,Ch5limitlVal::enabled> enabled{};
        }
        }
        ///Enable or disable interrupt on EVENTS_CH[6].LIMITH event
        enum class Ch6limithVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ch6limithVal> ch6limith{}; 
        namespace Ch6limithValC{
            constexpr Register::FieldValue<decltype(ch6limith)::Type,Ch6limithVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch6limith)::Type,Ch6limithVal::enabled> enabled{};
        }
        }
        ///Enable or disable interrupt on EVENTS_CH[6].LIMITL event
        enum class Ch6limitlVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ch6limitlVal> ch6limitl{}; 
        namespace Ch6limitlValC{
            constexpr Register::FieldValue<decltype(ch6limitl)::Type,Ch6limitlVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch6limitl)::Type,Ch6limitlVal::enabled> enabled{};
        }
        }
        ///Enable or disable interrupt on EVENTS_CH[7].LIMITH event
        enum class Ch7limithVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Ch7limithVal> ch7limith{}; 
        namespace Ch7limithValC{
            constexpr Register::FieldValue<decltype(ch7limith)::Type,Ch7limithVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch7limith)::Type,Ch7limithVal::enabled> enabled{};
        }
        }
        ///Enable or disable interrupt on EVENTS_CH[7].LIMITL event
        enum class Ch7limitlVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Ch7limitlVal> ch7limitl{}; 
        namespace Ch7limitlValC{
            constexpr Register::FieldValue<decltype(ch7limitl)::Type,Ch7limitlVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch7limitl)::Type,Ch7limitlVal::enabled> enabled{};
        }
        }
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40007304,0xffc00000,0,unsigned>;
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
        }
        ///Write '1' to Enable interrupt on EVENTS_END event
        enum class EndVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EndVal> end{}; 
        namespace EndValC{
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_DONE event
        enum class DoneVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,DoneVal> done{}; 
        namespace DoneValC{
            constexpr Register::FieldValue<decltype(done)::Type,DoneVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(done)::Type,DoneVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(done)::Type,DoneVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_RESULTDONE event
        enum class ResultdoneVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ResultdoneVal> resultdone{}; 
        namespace ResultdoneValC{
            constexpr Register::FieldValue<decltype(resultdone)::Type,ResultdoneVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(resultdone)::Type,ResultdoneVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(resultdone)::Type,ResultdoneVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_CALIBRATEDONE event
        enum class CalibratedoneVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CalibratedoneVal> calibratedone{}; 
        namespace CalibratedoneValC{
            constexpr Register::FieldValue<decltype(calibratedone)::Type,CalibratedoneVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(calibratedone)::Type,CalibratedoneVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(calibratedone)::Type,CalibratedoneVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_STOPPED event
        enum class StoppedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,StoppedVal> stopped{}; 
        namespace StoppedValC{
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_CH[0].LIMITH event
        enum class Ch0limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch0limithVal> ch0limith{}; 
        namespace Ch0limithValC{
            constexpr Register::FieldValue<decltype(ch0limith)::Type,Ch0limithVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch0limith)::Type,Ch0limithVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch0limith)::Type,Ch0limithVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_CH[0].LIMITL event
        enum class Ch0limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch0limitlVal> ch0limitl{}; 
        namespace Ch0limitlValC{
            constexpr Register::FieldValue<decltype(ch0limitl)::Type,Ch0limitlVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch0limitl)::Type,Ch0limitlVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch0limitl)::Type,Ch0limitlVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_CH[1].LIMITH event
        enum class Ch1limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch1limithVal> ch1limith{}; 
        namespace Ch1limithValC{
            constexpr Register::FieldValue<decltype(ch1limith)::Type,Ch1limithVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch1limith)::Type,Ch1limithVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch1limith)::Type,Ch1limithVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_CH[1].LIMITL event
        enum class Ch1limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch1limitlVal> ch1limitl{}; 
        namespace Ch1limitlValC{
            constexpr Register::FieldValue<decltype(ch1limitl)::Type,Ch1limitlVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch1limitl)::Type,Ch1limitlVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch1limitl)::Type,Ch1limitlVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_CH[2].LIMITH event
        enum class Ch2limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ch2limithVal> ch2limith{}; 
        namespace Ch2limithValC{
            constexpr Register::FieldValue<decltype(ch2limith)::Type,Ch2limithVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch2limith)::Type,Ch2limithVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch2limith)::Type,Ch2limithVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_CH[2].LIMITL event
        enum class Ch2limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ch2limitlVal> ch2limitl{}; 
        namespace Ch2limitlValC{
            constexpr Register::FieldValue<decltype(ch2limitl)::Type,Ch2limitlVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch2limitl)::Type,Ch2limitlVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch2limitl)::Type,Ch2limitlVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_CH[3].LIMITH event
        enum class Ch3limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ch3limithVal> ch3limith{}; 
        namespace Ch3limithValC{
            constexpr Register::FieldValue<decltype(ch3limith)::Type,Ch3limithVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch3limith)::Type,Ch3limithVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch3limith)::Type,Ch3limithVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_CH[3].LIMITL event
        enum class Ch3limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ch3limitlVal> ch3limitl{}; 
        namespace Ch3limitlValC{
            constexpr Register::FieldValue<decltype(ch3limitl)::Type,Ch3limitlVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch3limitl)::Type,Ch3limitlVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch3limitl)::Type,Ch3limitlVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_CH[4].LIMITH event
        enum class Ch4limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ch4limithVal> ch4limith{}; 
        namespace Ch4limithValC{
            constexpr Register::FieldValue<decltype(ch4limith)::Type,Ch4limithVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch4limith)::Type,Ch4limithVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch4limith)::Type,Ch4limithVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_CH[4].LIMITL event
        enum class Ch4limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ch4limitlVal> ch4limitl{}; 
        namespace Ch4limitlValC{
            constexpr Register::FieldValue<decltype(ch4limitl)::Type,Ch4limitlVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch4limitl)::Type,Ch4limitlVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch4limitl)::Type,Ch4limitlVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_CH[5].LIMITH event
        enum class Ch5limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Ch5limithVal> ch5limith{}; 
        namespace Ch5limithValC{
            constexpr Register::FieldValue<decltype(ch5limith)::Type,Ch5limithVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch5limith)::Type,Ch5limithVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch5limith)::Type,Ch5limithVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_CH[5].LIMITL event
        enum class Ch5limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Ch5limitlVal> ch5limitl{}; 
        namespace Ch5limitlValC{
            constexpr Register::FieldValue<decltype(ch5limitl)::Type,Ch5limitlVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch5limitl)::Type,Ch5limitlVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch5limitl)::Type,Ch5limitlVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_CH[6].LIMITH event
        enum class Ch6limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ch6limithVal> ch6limith{}; 
        namespace Ch6limithValC{
            constexpr Register::FieldValue<decltype(ch6limith)::Type,Ch6limithVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch6limith)::Type,Ch6limithVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch6limith)::Type,Ch6limithVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_CH[6].LIMITL event
        enum class Ch6limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ch6limitlVal> ch6limitl{}; 
        namespace Ch6limitlValC{
            constexpr Register::FieldValue<decltype(ch6limitl)::Type,Ch6limitlVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch6limitl)::Type,Ch6limitlVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch6limitl)::Type,Ch6limitlVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_CH[7].LIMITH event
        enum class Ch7limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Ch7limithVal> ch7limith{}; 
        namespace Ch7limithValC{
            constexpr Register::FieldValue<decltype(ch7limith)::Type,Ch7limithVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch7limith)::Type,Ch7limithVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch7limith)::Type,Ch7limithVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_CH[7].LIMITL event
        enum class Ch7limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Ch7limitlVal> ch7limitl{}; 
        namespace Ch7limitlValC{
            constexpr Register::FieldValue<decltype(ch7limitl)::Type,Ch7limitlVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch7limitl)::Type,Ch7limitlVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch7limitl)::Type,Ch7limitlVal::set> set{};
        }
        }
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40007308,0xffc00000,0,unsigned>;
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
        }
        ///Write '1' to Clear interrupt on EVENTS_END event
        enum class EndVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EndVal> end{}; 
        namespace EndValC{
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_DONE event
        enum class DoneVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,DoneVal> done{}; 
        namespace DoneValC{
            constexpr Register::FieldValue<decltype(done)::Type,DoneVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(done)::Type,DoneVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(done)::Type,DoneVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_RESULTDONE event
        enum class ResultdoneVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ResultdoneVal> resultdone{}; 
        namespace ResultdoneValC{
            constexpr Register::FieldValue<decltype(resultdone)::Type,ResultdoneVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(resultdone)::Type,ResultdoneVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(resultdone)::Type,ResultdoneVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_CALIBRATEDONE event
        enum class CalibratedoneVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CalibratedoneVal> calibratedone{}; 
        namespace CalibratedoneValC{
            constexpr Register::FieldValue<decltype(calibratedone)::Type,CalibratedoneVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(calibratedone)::Type,CalibratedoneVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(calibratedone)::Type,CalibratedoneVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_STOPPED event
        enum class StoppedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,StoppedVal> stopped{}; 
        namespace StoppedValC{
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_CH[0].LIMITH event
        enum class Ch0limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch0limithVal> ch0limith{}; 
        namespace Ch0limithValC{
            constexpr Register::FieldValue<decltype(ch0limith)::Type,Ch0limithVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch0limith)::Type,Ch0limithVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch0limith)::Type,Ch0limithVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_CH[0].LIMITL event
        enum class Ch0limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch0limitlVal> ch0limitl{}; 
        namespace Ch0limitlValC{
            constexpr Register::FieldValue<decltype(ch0limitl)::Type,Ch0limitlVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch0limitl)::Type,Ch0limitlVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch0limitl)::Type,Ch0limitlVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_CH[1].LIMITH event
        enum class Ch1limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch1limithVal> ch1limith{}; 
        namespace Ch1limithValC{
            constexpr Register::FieldValue<decltype(ch1limith)::Type,Ch1limithVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch1limith)::Type,Ch1limithVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch1limith)::Type,Ch1limithVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_CH[1].LIMITL event
        enum class Ch1limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch1limitlVal> ch1limitl{}; 
        namespace Ch1limitlValC{
            constexpr Register::FieldValue<decltype(ch1limitl)::Type,Ch1limitlVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch1limitl)::Type,Ch1limitlVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch1limitl)::Type,Ch1limitlVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_CH[2].LIMITH event
        enum class Ch2limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ch2limithVal> ch2limith{}; 
        namespace Ch2limithValC{
            constexpr Register::FieldValue<decltype(ch2limith)::Type,Ch2limithVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch2limith)::Type,Ch2limithVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch2limith)::Type,Ch2limithVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_CH[2].LIMITL event
        enum class Ch2limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ch2limitlVal> ch2limitl{}; 
        namespace Ch2limitlValC{
            constexpr Register::FieldValue<decltype(ch2limitl)::Type,Ch2limitlVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch2limitl)::Type,Ch2limitlVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch2limitl)::Type,Ch2limitlVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_CH[3].LIMITH event
        enum class Ch3limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ch3limithVal> ch3limith{}; 
        namespace Ch3limithValC{
            constexpr Register::FieldValue<decltype(ch3limith)::Type,Ch3limithVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch3limith)::Type,Ch3limithVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch3limith)::Type,Ch3limithVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_CH[3].LIMITL event
        enum class Ch3limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ch3limitlVal> ch3limitl{}; 
        namespace Ch3limitlValC{
            constexpr Register::FieldValue<decltype(ch3limitl)::Type,Ch3limitlVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch3limitl)::Type,Ch3limitlVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch3limitl)::Type,Ch3limitlVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_CH[4].LIMITH event
        enum class Ch4limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ch4limithVal> ch4limith{}; 
        namespace Ch4limithValC{
            constexpr Register::FieldValue<decltype(ch4limith)::Type,Ch4limithVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch4limith)::Type,Ch4limithVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch4limith)::Type,Ch4limithVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_CH[4].LIMITL event
        enum class Ch4limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ch4limitlVal> ch4limitl{}; 
        namespace Ch4limitlValC{
            constexpr Register::FieldValue<decltype(ch4limitl)::Type,Ch4limitlVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch4limitl)::Type,Ch4limitlVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch4limitl)::Type,Ch4limitlVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_CH[5].LIMITH event
        enum class Ch5limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Ch5limithVal> ch5limith{}; 
        namespace Ch5limithValC{
            constexpr Register::FieldValue<decltype(ch5limith)::Type,Ch5limithVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch5limith)::Type,Ch5limithVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch5limith)::Type,Ch5limithVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_CH[5].LIMITL event
        enum class Ch5limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Ch5limitlVal> ch5limitl{}; 
        namespace Ch5limitlValC{
            constexpr Register::FieldValue<decltype(ch5limitl)::Type,Ch5limitlVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch5limitl)::Type,Ch5limitlVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch5limitl)::Type,Ch5limitlVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_CH[6].LIMITH event
        enum class Ch6limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ch6limithVal> ch6limith{}; 
        namespace Ch6limithValC{
            constexpr Register::FieldValue<decltype(ch6limith)::Type,Ch6limithVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch6limith)::Type,Ch6limithVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch6limith)::Type,Ch6limithVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_CH[6].LIMITL event
        enum class Ch6limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ch6limitlVal> ch6limitl{}; 
        namespace Ch6limitlValC{
            constexpr Register::FieldValue<decltype(ch6limitl)::Type,Ch6limitlVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch6limitl)::Type,Ch6limitlVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch6limitl)::Type,Ch6limitlVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_CH[7].LIMITH event
        enum class Ch7limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Ch7limithVal> ch7limith{}; 
        namespace Ch7limithValC{
            constexpr Register::FieldValue<decltype(ch7limith)::Type,Ch7limithVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch7limith)::Type,Ch7limithVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch7limith)::Type,Ch7limithVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_CH[7].LIMITL event
        enum class Ch7limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Ch7limitlVal> ch7limitl{}; 
        namespace Ch7limitlValC{
            constexpr Register::FieldValue<decltype(ch7limitl)::Type,Ch7limitlVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ch7limitl)::Type,Ch7limitlVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ch7limitl)::Type,Ch7limitlVal::clear> clear{};
        }
        }
    }
    namespace Nonestatus{    ///<Status
        using Addr = Register::Address<0x40007400,0xfffffffe,0,unsigned>;
        ///Status
        enum class StatusVal {
            ready=0x00000000,     ///<ADC is ready. No on-going conversion.
            busy=0x00000001,     ///<ADC is busy. Conversion in progress.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StatusVal> status{}; 
        namespace StatusValC{
            constexpr Register::FieldValue<decltype(status)::Type,StatusVal::ready> ready{};
            constexpr Register::FieldValue<decltype(status)::Type,StatusVal::busy> busy{};
        }
        }
    }
    namespace Noneenable{    ///<Enable or disable ADC
        using Addr = Register::Address<0x40007500,0xfffffffe,0,unsigned>;
        ///Enable or disable ADC
        enum class EnableVal {
            disabled=0x00000000,     ///<Disable ADC
            enabled=0x00000001,     ///<Enable ADC
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnableVal> enable{}; 
        namespace EnableValC{
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::enabled> enabled{};
        }
        }
    }
    namespace Noneresolution{    ///<Resolution configuration
        using Addr = Register::Address<0x400075f0,0xfffffff8,0,unsigned>;
        ///Set the resolution
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> val{}; 
    }
    namespace Noneoversample{    ///<Oversampling configuration. OVERSAMPLE should not be combined with SCAN. The RESOLUTION is applied before averaging, thus for high OVERSAMPLE a higher RESOLUTION should be used.
        using Addr = Register::Address<0x400075f4,0xfffffff0,0,unsigned>;
        ///Oversample control
        enum class OversampleVal {
            bypass=0x00000000,     ///<Bypass oversampling
            over2x=0x00000001,     ///<Oversample 2x
            over4x=0x00000002,     ///<Oversample 4x
            over8x=0x00000003,     ///<Oversample 8x
            over16x=0x00000004,     ///<Oversample 16x
            over32x=0x00000005,     ///<Oversample 32x
            over64x=0x00000006,     ///<Oversample 64x
            over128x=0x00000007,     ///<Oversample 128x
            over256x=0x00000008,     ///<Oversample 256x
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,OversampleVal> oversample{}; 
        namespace OversampleValC{
            constexpr Register::FieldValue<decltype(oversample)::Type,OversampleVal::bypass> bypass{};
            constexpr Register::FieldValue<decltype(oversample)::Type,OversampleVal::over2x> over2x{};
            constexpr Register::FieldValue<decltype(oversample)::Type,OversampleVal::over4x> over4x{};
            constexpr Register::FieldValue<decltype(oversample)::Type,OversampleVal::over8x> over8x{};
            constexpr Register::FieldValue<decltype(oversample)::Type,OversampleVal::over16x> over16x{};
            constexpr Register::FieldValue<decltype(oversample)::Type,OversampleVal::over32x> over32x{};
            constexpr Register::FieldValue<decltype(oversample)::Type,OversampleVal::over64x> over64x{};
            constexpr Register::FieldValue<decltype(oversample)::Type,OversampleVal::over128x> over128x{};
            constexpr Register::FieldValue<decltype(oversample)::Type,OversampleVal::over256x> over256x{};
        }
        }
    }
    namespace Nonesamplerate{    ///<Controls normal or continuous sample rate
        using Addr = Register::Address<0x400075f8,0xffffe800,0,unsigned>;
        ///Capture and compare value. Sample rate is 16 MHz/CC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> cc{}; 
        ///Select mode for sample rate control
        enum class ModeVal {
            task=0x00000000,     ///<Rate is controlled from SAMPLE task
            timers=0x00000001,     ///<Rate is controlled from local timer (use CC to control the rate)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::task> task{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::timers> timers{};
        }
        }
    }
}
