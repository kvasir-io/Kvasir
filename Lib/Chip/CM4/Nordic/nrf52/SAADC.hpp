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
        enum class startedVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace startedValC{
            constexpr MPL::Value<startedVal,startedVal::disabled> disabled{};
            constexpr MPL::Value<startedVal,startedVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startedVal> started{}; 
        ///Enable or disable interrupt on EVENTS_END event
        enum class endVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace endValC{
            constexpr MPL::Value<endVal,endVal::disabled> disabled{};
            constexpr MPL::Value<endVal,endVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,endVal> end{}; 
        ///Enable or disable interrupt on EVENTS_DONE event
        enum class doneVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace doneValC{
            constexpr MPL::Value<doneVal,doneVal::disabled> disabled{};
            constexpr MPL::Value<doneVal,doneVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,doneVal> done{}; 
        ///Enable or disable interrupt on EVENTS_RESULTDONE event
        enum class resultdoneVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace resultdoneValC{
            constexpr MPL::Value<resultdoneVal,resultdoneVal::disabled> disabled{};
            constexpr MPL::Value<resultdoneVal,resultdoneVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,resultdoneVal> resultdone{}; 
        ///Enable or disable interrupt on EVENTS_CALIBRATEDONE event
        enum class calibratedoneVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace calibratedoneValC{
            constexpr MPL::Value<calibratedoneVal,calibratedoneVal::disabled> disabled{};
            constexpr MPL::Value<calibratedoneVal,calibratedoneVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,calibratedoneVal> calibratedone{}; 
        ///Enable or disable interrupt on EVENTS_STOPPED event
        enum class stoppedVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace stoppedValC{
            constexpr MPL::Value<stoppedVal,stoppedVal::disabled> disabled{};
            constexpr MPL::Value<stoppedVal,stoppedVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,stoppedVal> stopped{}; 
        ///Enable or disable interrupt on EVENTS_CH[0].LIMITH event
        enum class ch0limithVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace ch0limithValC{
            constexpr MPL::Value<ch0limithVal,ch0limithVal::disabled> disabled{};
            constexpr MPL::Value<ch0limithVal,ch0limithVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch0limithVal> ch0limith{}; 
        ///Enable or disable interrupt on EVENTS_CH[0].LIMITL event
        enum class ch0limitlVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace ch0limitlValC{
            constexpr MPL::Value<ch0limitlVal,ch0limitlVal::disabled> disabled{};
            constexpr MPL::Value<ch0limitlVal,ch0limitlVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch0limitlVal> ch0limitl{}; 
        ///Enable or disable interrupt on EVENTS_CH[1].LIMITH event
        enum class ch1limithVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace ch1limithValC{
            constexpr MPL::Value<ch1limithVal,ch1limithVal::disabled> disabled{};
            constexpr MPL::Value<ch1limithVal,ch1limithVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch1limithVal> ch1limith{}; 
        ///Enable or disable interrupt on EVENTS_CH[1].LIMITL event
        enum class ch1limitlVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace ch1limitlValC{
            constexpr MPL::Value<ch1limitlVal,ch1limitlVal::disabled> disabled{};
            constexpr MPL::Value<ch1limitlVal,ch1limitlVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch1limitlVal> ch1limitl{}; 
        ///Enable or disable interrupt on EVENTS_CH[2].LIMITH event
        enum class ch2limithVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace ch2limithValC{
            constexpr MPL::Value<ch2limithVal,ch2limithVal::disabled> disabled{};
            constexpr MPL::Value<ch2limithVal,ch2limithVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ch2limithVal> ch2limith{}; 
        ///Enable or disable interrupt on EVENTS_CH[2].LIMITL event
        enum class ch2limitlVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace ch2limitlValC{
            constexpr MPL::Value<ch2limitlVal,ch2limitlVal::disabled> disabled{};
            constexpr MPL::Value<ch2limitlVal,ch2limitlVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ch2limitlVal> ch2limitl{}; 
        ///Enable or disable interrupt on EVENTS_CH[3].LIMITH event
        enum class ch3limithVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace ch3limithValC{
            constexpr MPL::Value<ch3limithVal,ch3limithVal::disabled> disabled{};
            constexpr MPL::Value<ch3limithVal,ch3limithVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ch3limithVal> ch3limith{}; 
        ///Enable or disable interrupt on EVENTS_CH[3].LIMITL event
        enum class ch3limitlVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace ch3limitlValC{
            constexpr MPL::Value<ch3limitlVal,ch3limitlVal::disabled> disabled{};
            constexpr MPL::Value<ch3limitlVal,ch3limitlVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ch3limitlVal> ch3limitl{}; 
        ///Enable or disable interrupt on EVENTS_CH[4].LIMITH event
        enum class ch4limithVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace ch4limithValC{
            constexpr MPL::Value<ch4limithVal,ch4limithVal::disabled> disabled{};
            constexpr MPL::Value<ch4limithVal,ch4limithVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ch4limithVal> ch4limith{}; 
        ///Enable or disable interrupt on EVENTS_CH[4].LIMITL event
        enum class ch4limitlVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace ch4limitlValC{
            constexpr MPL::Value<ch4limitlVal,ch4limitlVal::disabled> disabled{};
            constexpr MPL::Value<ch4limitlVal,ch4limitlVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ch4limitlVal> ch4limitl{}; 
        ///Enable or disable interrupt on EVENTS_CH[5].LIMITH event
        enum class ch5limithVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace ch5limithValC{
            constexpr MPL::Value<ch5limithVal,ch5limithVal::disabled> disabled{};
            constexpr MPL::Value<ch5limithVal,ch5limithVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ch5limithVal> ch5limith{}; 
        ///Enable or disable interrupt on EVENTS_CH[5].LIMITL event
        enum class ch5limitlVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace ch5limitlValC{
            constexpr MPL::Value<ch5limitlVal,ch5limitlVal::disabled> disabled{};
            constexpr MPL::Value<ch5limitlVal,ch5limitlVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,ch5limitlVal> ch5limitl{}; 
        ///Enable or disable interrupt on EVENTS_CH[6].LIMITH event
        enum class ch6limithVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace ch6limithValC{
            constexpr MPL::Value<ch6limithVal,ch6limithVal::disabled> disabled{};
            constexpr MPL::Value<ch6limithVal,ch6limithVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ch6limithVal> ch6limith{}; 
        ///Enable or disable interrupt on EVENTS_CH[6].LIMITL event
        enum class ch6limitlVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace ch6limitlValC{
            constexpr MPL::Value<ch6limitlVal,ch6limitlVal::disabled> disabled{};
            constexpr MPL::Value<ch6limitlVal,ch6limitlVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ch6limitlVal> ch6limitl{}; 
        ///Enable or disable interrupt on EVENTS_CH[7].LIMITH event
        enum class ch7limithVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace ch7limithValC{
            constexpr MPL::Value<ch7limithVal,ch7limithVal::disabled> disabled{};
            constexpr MPL::Value<ch7limithVal,ch7limithVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ch7limithVal> ch7limith{}; 
        ///Enable or disable interrupt on EVENTS_CH[7].LIMITL event
        enum class ch7limitlVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace ch7limitlValC{
            constexpr MPL::Value<ch7limitlVal,ch7limitlVal::disabled> disabled{};
            constexpr MPL::Value<ch7limitlVal,ch7limitlVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ch7limitlVal> ch7limitl{}; 
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40007304,0xffc00000,0,unsigned>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,endVal> end{}; 
        ///Write '1' to Enable interrupt on EVENTS_DONE event
        enum class doneVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace doneValC{
            constexpr MPL::Value<doneVal,doneVal::disabled> disabled{};
            constexpr MPL::Value<doneVal,doneVal::enabled> enabled{};
            constexpr MPL::Value<doneVal,doneVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,doneVal> done{}; 
        ///Write '1' to Enable interrupt on EVENTS_RESULTDONE event
        enum class resultdoneVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace resultdoneValC{
            constexpr MPL::Value<resultdoneVal,resultdoneVal::disabled> disabled{};
            constexpr MPL::Value<resultdoneVal,resultdoneVal::enabled> enabled{};
            constexpr MPL::Value<resultdoneVal,resultdoneVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,resultdoneVal> resultdone{}; 
        ///Write '1' to Enable interrupt on EVENTS_CALIBRATEDONE event
        enum class calibratedoneVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace calibratedoneValC{
            constexpr MPL::Value<calibratedoneVal,calibratedoneVal::disabled> disabled{};
            constexpr MPL::Value<calibratedoneVal,calibratedoneVal::enabled> enabled{};
            constexpr MPL::Value<calibratedoneVal,calibratedoneVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,calibratedoneVal> calibratedone{}; 
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,stoppedVal> stopped{}; 
        ///Write '1' to Enable interrupt on EVENTS_CH[0].LIMITH event
        enum class ch0limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace ch0limithValC{
            constexpr MPL::Value<ch0limithVal,ch0limithVal::disabled> disabled{};
            constexpr MPL::Value<ch0limithVal,ch0limithVal::enabled> enabled{};
            constexpr MPL::Value<ch0limithVal,ch0limithVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch0limithVal> ch0limith{}; 
        ///Write '1' to Enable interrupt on EVENTS_CH[0].LIMITL event
        enum class ch0limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace ch0limitlValC{
            constexpr MPL::Value<ch0limitlVal,ch0limitlVal::disabled> disabled{};
            constexpr MPL::Value<ch0limitlVal,ch0limitlVal::enabled> enabled{};
            constexpr MPL::Value<ch0limitlVal,ch0limitlVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch0limitlVal> ch0limitl{}; 
        ///Write '1' to Enable interrupt on EVENTS_CH[1].LIMITH event
        enum class ch1limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace ch1limithValC{
            constexpr MPL::Value<ch1limithVal,ch1limithVal::disabled> disabled{};
            constexpr MPL::Value<ch1limithVal,ch1limithVal::enabled> enabled{};
            constexpr MPL::Value<ch1limithVal,ch1limithVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch1limithVal> ch1limith{}; 
        ///Write '1' to Enable interrupt on EVENTS_CH[1].LIMITL event
        enum class ch1limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace ch1limitlValC{
            constexpr MPL::Value<ch1limitlVal,ch1limitlVal::disabled> disabled{};
            constexpr MPL::Value<ch1limitlVal,ch1limitlVal::enabled> enabled{};
            constexpr MPL::Value<ch1limitlVal,ch1limitlVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch1limitlVal> ch1limitl{}; 
        ///Write '1' to Enable interrupt on EVENTS_CH[2].LIMITH event
        enum class ch2limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace ch2limithValC{
            constexpr MPL::Value<ch2limithVal,ch2limithVal::disabled> disabled{};
            constexpr MPL::Value<ch2limithVal,ch2limithVal::enabled> enabled{};
            constexpr MPL::Value<ch2limithVal,ch2limithVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ch2limithVal> ch2limith{}; 
        ///Write '1' to Enable interrupt on EVENTS_CH[2].LIMITL event
        enum class ch2limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace ch2limitlValC{
            constexpr MPL::Value<ch2limitlVal,ch2limitlVal::disabled> disabled{};
            constexpr MPL::Value<ch2limitlVal,ch2limitlVal::enabled> enabled{};
            constexpr MPL::Value<ch2limitlVal,ch2limitlVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ch2limitlVal> ch2limitl{}; 
        ///Write '1' to Enable interrupt on EVENTS_CH[3].LIMITH event
        enum class ch3limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace ch3limithValC{
            constexpr MPL::Value<ch3limithVal,ch3limithVal::disabled> disabled{};
            constexpr MPL::Value<ch3limithVal,ch3limithVal::enabled> enabled{};
            constexpr MPL::Value<ch3limithVal,ch3limithVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ch3limithVal> ch3limith{}; 
        ///Write '1' to Enable interrupt on EVENTS_CH[3].LIMITL event
        enum class ch3limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace ch3limitlValC{
            constexpr MPL::Value<ch3limitlVal,ch3limitlVal::disabled> disabled{};
            constexpr MPL::Value<ch3limitlVal,ch3limitlVal::enabled> enabled{};
            constexpr MPL::Value<ch3limitlVal,ch3limitlVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ch3limitlVal> ch3limitl{}; 
        ///Write '1' to Enable interrupt on EVENTS_CH[4].LIMITH event
        enum class ch4limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace ch4limithValC{
            constexpr MPL::Value<ch4limithVal,ch4limithVal::disabled> disabled{};
            constexpr MPL::Value<ch4limithVal,ch4limithVal::enabled> enabled{};
            constexpr MPL::Value<ch4limithVal,ch4limithVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ch4limithVal> ch4limith{}; 
        ///Write '1' to Enable interrupt on EVENTS_CH[4].LIMITL event
        enum class ch4limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace ch4limitlValC{
            constexpr MPL::Value<ch4limitlVal,ch4limitlVal::disabled> disabled{};
            constexpr MPL::Value<ch4limitlVal,ch4limitlVal::enabled> enabled{};
            constexpr MPL::Value<ch4limitlVal,ch4limitlVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ch4limitlVal> ch4limitl{}; 
        ///Write '1' to Enable interrupt on EVENTS_CH[5].LIMITH event
        enum class ch5limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace ch5limithValC{
            constexpr MPL::Value<ch5limithVal,ch5limithVal::disabled> disabled{};
            constexpr MPL::Value<ch5limithVal,ch5limithVal::enabled> enabled{};
            constexpr MPL::Value<ch5limithVal,ch5limithVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ch5limithVal> ch5limith{}; 
        ///Write '1' to Enable interrupt on EVENTS_CH[5].LIMITL event
        enum class ch5limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace ch5limitlValC{
            constexpr MPL::Value<ch5limitlVal,ch5limitlVal::disabled> disabled{};
            constexpr MPL::Value<ch5limitlVal,ch5limitlVal::enabled> enabled{};
            constexpr MPL::Value<ch5limitlVal,ch5limitlVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,ch5limitlVal> ch5limitl{}; 
        ///Write '1' to Enable interrupt on EVENTS_CH[6].LIMITH event
        enum class ch6limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace ch6limithValC{
            constexpr MPL::Value<ch6limithVal,ch6limithVal::disabled> disabled{};
            constexpr MPL::Value<ch6limithVal,ch6limithVal::enabled> enabled{};
            constexpr MPL::Value<ch6limithVal,ch6limithVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ch6limithVal> ch6limith{}; 
        ///Write '1' to Enable interrupt on EVENTS_CH[6].LIMITL event
        enum class ch6limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace ch6limitlValC{
            constexpr MPL::Value<ch6limitlVal,ch6limitlVal::disabled> disabled{};
            constexpr MPL::Value<ch6limitlVal,ch6limitlVal::enabled> enabled{};
            constexpr MPL::Value<ch6limitlVal,ch6limitlVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ch6limitlVal> ch6limitl{}; 
        ///Write '1' to Enable interrupt on EVENTS_CH[7].LIMITH event
        enum class ch7limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace ch7limithValC{
            constexpr MPL::Value<ch7limithVal,ch7limithVal::disabled> disabled{};
            constexpr MPL::Value<ch7limithVal,ch7limithVal::enabled> enabled{};
            constexpr MPL::Value<ch7limithVal,ch7limithVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ch7limithVal> ch7limith{}; 
        ///Write '1' to Enable interrupt on EVENTS_CH[7].LIMITL event
        enum class ch7limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace ch7limitlValC{
            constexpr MPL::Value<ch7limitlVal,ch7limitlVal::disabled> disabled{};
            constexpr MPL::Value<ch7limitlVal,ch7limitlVal::enabled> enabled{};
            constexpr MPL::Value<ch7limitlVal,ch7limitlVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ch7limitlVal> ch7limitl{}; 
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40007308,0xffc00000,0,unsigned>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,endVal> end{}; 
        ///Write '1' to Clear interrupt on EVENTS_DONE event
        enum class doneVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace doneValC{
            constexpr MPL::Value<doneVal,doneVal::disabled> disabled{};
            constexpr MPL::Value<doneVal,doneVal::enabled> enabled{};
            constexpr MPL::Value<doneVal,doneVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,doneVal> done{}; 
        ///Write '1' to Clear interrupt on EVENTS_RESULTDONE event
        enum class resultdoneVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace resultdoneValC{
            constexpr MPL::Value<resultdoneVal,resultdoneVal::disabled> disabled{};
            constexpr MPL::Value<resultdoneVal,resultdoneVal::enabled> enabled{};
            constexpr MPL::Value<resultdoneVal,resultdoneVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,resultdoneVal> resultdone{}; 
        ///Write '1' to Clear interrupt on EVENTS_CALIBRATEDONE event
        enum class calibratedoneVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace calibratedoneValC{
            constexpr MPL::Value<calibratedoneVal,calibratedoneVal::disabled> disabled{};
            constexpr MPL::Value<calibratedoneVal,calibratedoneVal::enabled> enabled{};
            constexpr MPL::Value<calibratedoneVal,calibratedoneVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,calibratedoneVal> calibratedone{}; 
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,stoppedVal> stopped{}; 
        ///Write '1' to Clear interrupt on EVENTS_CH[0].LIMITH event
        enum class ch0limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace ch0limithValC{
            constexpr MPL::Value<ch0limithVal,ch0limithVal::disabled> disabled{};
            constexpr MPL::Value<ch0limithVal,ch0limithVal::enabled> enabled{};
            constexpr MPL::Value<ch0limithVal,ch0limithVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch0limithVal> ch0limith{}; 
        ///Write '1' to Clear interrupt on EVENTS_CH[0].LIMITL event
        enum class ch0limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace ch0limitlValC{
            constexpr MPL::Value<ch0limitlVal,ch0limitlVal::disabled> disabled{};
            constexpr MPL::Value<ch0limitlVal,ch0limitlVal::enabled> enabled{};
            constexpr MPL::Value<ch0limitlVal,ch0limitlVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch0limitlVal> ch0limitl{}; 
        ///Write '1' to Clear interrupt on EVENTS_CH[1].LIMITH event
        enum class ch1limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace ch1limithValC{
            constexpr MPL::Value<ch1limithVal,ch1limithVal::disabled> disabled{};
            constexpr MPL::Value<ch1limithVal,ch1limithVal::enabled> enabled{};
            constexpr MPL::Value<ch1limithVal,ch1limithVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch1limithVal> ch1limith{}; 
        ///Write '1' to Clear interrupt on EVENTS_CH[1].LIMITL event
        enum class ch1limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace ch1limitlValC{
            constexpr MPL::Value<ch1limitlVal,ch1limitlVal::disabled> disabled{};
            constexpr MPL::Value<ch1limitlVal,ch1limitlVal::enabled> enabled{};
            constexpr MPL::Value<ch1limitlVal,ch1limitlVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch1limitlVal> ch1limitl{}; 
        ///Write '1' to Clear interrupt on EVENTS_CH[2].LIMITH event
        enum class ch2limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace ch2limithValC{
            constexpr MPL::Value<ch2limithVal,ch2limithVal::disabled> disabled{};
            constexpr MPL::Value<ch2limithVal,ch2limithVal::enabled> enabled{};
            constexpr MPL::Value<ch2limithVal,ch2limithVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ch2limithVal> ch2limith{}; 
        ///Write '1' to Clear interrupt on EVENTS_CH[2].LIMITL event
        enum class ch2limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace ch2limitlValC{
            constexpr MPL::Value<ch2limitlVal,ch2limitlVal::disabled> disabled{};
            constexpr MPL::Value<ch2limitlVal,ch2limitlVal::enabled> enabled{};
            constexpr MPL::Value<ch2limitlVal,ch2limitlVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ch2limitlVal> ch2limitl{}; 
        ///Write '1' to Clear interrupt on EVENTS_CH[3].LIMITH event
        enum class ch3limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace ch3limithValC{
            constexpr MPL::Value<ch3limithVal,ch3limithVal::disabled> disabled{};
            constexpr MPL::Value<ch3limithVal,ch3limithVal::enabled> enabled{};
            constexpr MPL::Value<ch3limithVal,ch3limithVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ch3limithVal> ch3limith{}; 
        ///Write '1' to Clear interrupt on EVENTS_CH[3].LIMITL event
        enum class ch3limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace ch3limitlValC{
            constexpr MPL::Value<ch3limitlVal,ch3limitlVal::disabled> disabled{};
            constexpr MPL::Value<ch3limitlVal,ch3limitlVal::enabled> enabled{};
            constexpr MPL::Value<ch3limitlVal,ch3limitlVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ch3limitlVal> ch3limitl{}; 
        ///Write '1' to Clear interrupt on EVENTS_CH[4].LIMITH event
        enum class ch4limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace ch4limithValC{
            constexpr MPL::Value<ch4limithVal,ch4limithVal::disabled> disabled{};
            constexpr MPL::Value<ch4limithVal,ch4limithVal::enabled> enabled{};
            constexpr MPL::Value<ch4limithVal,ch4limithVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ch4limithVal> ch4limith{}; 
        ///Write '1' to Clear interrupt on EVENTS_CH[4].LIMITL event
        enum class ch4limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace ch4limitlValC{
            constexpr MPL::Value<ch4limitlVal,ch4limitlVal::disabled> disabled{};
            constexpr MPL::Value<ch4limitlVal,ch4limitlVal::enabled> enabled{};
            constexpr MPL::Value<ch4limitlVal,ch4limitlVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ch4limitlVal> ch4limitl{}; 
        ///Write '1' to Clear interrupt on EVENTS_CH[5].LIMITH event
        enum class ch5limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace ch5limithValC{
            constexpr MPL::Value<ch5limithVal,ch5limithVal::disabled> disabled{};
            constexpr MPL::Value<ch5limithVal,ch5limithVal::enabled> enabled{};
            constexpr MPL::Value<ch5limithVal,ch5limithVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ch5limithVal> ch5limith{}; 
        ///Write '1' to Clear interrupt on EVENTS_CH[5].LIMITL event
        enum class ch5limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace ch5limitlValC{
            constexpr MPL::Value<ch5limitlVal,ch5limitlVal::disabled> disabled{};
            constexpr MPL::Value<ch5limitlVal,ch5limitlVal::enabled> enabled{};
            constexpr MPL::Value<ch5limitlVal,ch5limitlVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,ch5limitlVal> ch5limitl{}; 
        ///Write '1' to Clear interrupt on EVENTS_CH[6].LIMITH event
        enum class ch6limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace ch6limithValC{
            constexpr MPL::Value<ch6limithVal,ch6limithVal::disabled> disabled{};
            constexpr MPL::Value<ch6limithVal,ch6limithVal::enabled> enabled{};
            constexpr MPL::Value<ch6limithVal,ch6limithVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ch6limithVal> ch6limith{}; 
        ///Write '1' to Clear interrupt on EVENTS_CH[6].LIMITL event
        enum class ch6limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace ch6limitlValC{
            constexpr MPL::Value<ch6limitlVal,ch6limitlVal::disabled> disabled{};
            constexpr MPL::Value<ch6limitlVal,ch6limitlVal::enabled> enabled{};
            constexpr MPL::Value<ch6limitlVal,ch6limitlVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ch6limitlVal> ch6limitl{}; 
        ///Write '1' to Clear interrupt on EVENTS_CH[7].LIMITH event
        enum class ch7limithVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace ch7limithValC{
            constexpr MPL::Value<ch7limithVal,ch7limithVal::disabled> disabled{};
            constexpr MPL::Value<ch7limithVal,ch7limithVal::enabled> enabled{};
            constexpr MPL::Value<ch7limithVal,ch7limithVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ch7limithVal> ch7limith{}; 
        ///Write '1' to Clear interrupt on EVENTS_CH[7].LIMITL event
        enum class ch7limitlVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace ch7limitlValC{
            constexpr MPL::Value<ch7limitlVal,ch7limitlVal::disabled> disabled{};
            constexpr MPL::Value<ch7limitlVal,ch7limitlVal::enabled> enabled{};
            constexpr MPL::Value<ch7limitlVal,ch7limitlVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ch7limitlVal> ch7limitl{}; 
    }
    namespace Nonestatus{    ///<Status
        using Addr = Register::Address<0x40007400,0xfffffffe,0,unsigned>;
        ///Status
        enum class statusVal {
            ready=0x00000000,     ///<ADC is ready. No on-going conversion.
            busy=0x00000001,     ///<ADC is busy. Conversion in progress.
        };
        namespace statusValC{
            constexpr MPL::Value<statusVal,statusVal::ready> ready{};
            constexpr MPL::Value<statusVal,statusVal::busy> busy{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,statusVal> status{}; 
    }
    namespace Noneenable{    ///<Enable or disable ADC
        using Addr = Register::Address<0x40007500,0xfffffffe,0,unsigned>;
        ///Enable or disable ADC
        enum class enableVal {
            disabled=0x00000000,     ///<Disable ADC
            enabled=0x00000001,     ///<Enable ADC
        };
        namespace enableValC{
            constexpr MPL::Value<enableVal,enableVal::disabled> disabled{};
            constexpr MPL::Value<enableVal,enableVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,enableVal> enable{}; 
    }
    namespace Noneresolution{    ///<Resolution configuration
        using Addr = Register::Address<0x400075f0,0xfffffff8,0,unsigned>;
        ///Set the resolution
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> val{}; 
    }
    namespace Noneoversample{    ///<Oversampling configuration. OVERSAMPLE should not be combined with SCAN. The RESOLUTION is applied before averaging, thus for high OVERSAMPLE a higher RESOLUTION should be used.
        using Addr = Register::Address<0x400075f4,0xfffffff0,0,unsigned>;
        ///Oversample control
        enum class oversampleVal {
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
        namespace oversampleValC{
            constexpr MPL::Value<oversampleVal,oversampleVal::bypass> bypass{};
            constexpr MPL::Value<oversampleVal,oversampleVal::over2x> over2x{};
            constexpr MPL::Value<oversampleVal,oversampleVal::over4x> over4x{};
            constexpr MPL::Value<oversampleVal,oversampleVal::over8x> over8x{};
            constexpr MPL::Value<oversampleVal,oversampleVal::over16x> over16x{};
            constexpr MPL::Value<oversampleVal,oversampleVal::over32x> over32x{};
            constexpr MPL::Value<oversampleVal,oversampleVal::over64x> over64x{};
            constexpr MPL::Value<oversampleVal,oversampleVal::over128x> over128x{};
            constexpr MPL::Value<oversampleVal,oversampleVal::over256x> over256x{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,oversampleVal> oversample{}; 
    }
    namespace Nonesamplerate{    ///<Controls normal or continuous sample rate
        using Addr = Register::Address<0x400075f8,0xffffe800,0,unsigned>;
        ///Capture and compare value. Sample rate is 16 MHz/CC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> cc{}; 
        ///Select mode for sample rate control
        enum class modeVal {
            task=0x00000000,     ///<Rate is controlled from SAMPLE task
            timers=0x00000001,     ///<Rate is controlled from local timer (use CC to control the rate)
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::task> task{};
            constexpr MPL::Value<modeVal,modeVal::timers> timers{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,modeVal> mode{}; 
    }
}
