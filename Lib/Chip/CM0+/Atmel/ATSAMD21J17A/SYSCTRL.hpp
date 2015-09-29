#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Control
    namespace SysctrlBod33{    ///<3.3V Brown-Out Detector (BOD33) Control
        using Addr = Register::Address<0x40000834,0xffc00ca1,0,unsigned>;
        ///Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Hysteresis
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hyst{}; 
        ///BOD33 Action
        enum class actionVal {
            none=0x00000000,     ///<No action
            reset=0x00000001,     ///<The BOD33 generates a reset
            interrupt=0x00000002,     ///<The BOD33 generates an interrupt
        };
        namespace actionValC{
            constexpr MPL::Value<actionVal,actionVal::none> none{};
            constexpr MPL::Value<actionVal,actionVal::reset> reset{};
            constexpr MPL::Value<actionVal,actionVal::interrupt> interrupt{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,actionVal> action{}; 
        ///Run in Standby
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///Operation Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mode{}; 
        ///Clock Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cen{}; 
        ///Prescaler Select
        enum class pselVal {
            div2=0x00000000,     ///<Divide clock by 2
            div4=0x00000001,     ///<Divide clock by 4
            div8=0x00000002,     ///<Divide clock by 8
            div16=0x00000003,     ///<Divide clock by 16
            div32=0x00000004,     ///<Divide clock by 32
            div64=0x00000005,     ///<Divide clock by 64
            div128=0x00000006,     ///<Divide clock by 128
            div256=0x00000007,     ///<Divide clock by 256
            div512=0x00000008,     ///<Divide clock by 512
            div1k=0x00000009,     ///<Divide clock by 1024
            div2k=0x0000000a,     ///<Divide clock by 2048
            div4k=0x0000000b,     ///<Divide clock by 4096
            div8k=0x0000000c,     ///<Divide clock by 8192
            div16k=0x0000000d,     ///<Divide clock by 16384
            div32k=0x0000000e,     ///<Divide clock by 32768
            div64k=0x0000000f,     ///<Divide clock by 65536
        };
        namespace pselValC{
            constexpr MPL::Value<pselVal,pselVal::div2> div2{};
            constexpr MPL::Value<pselVal,pselVal::div4> div4{};
            constexpr MPL::Value<pselVal,pselVal::div8> div8{};
            constexpr MPL::Value<pselVal,pselVal::div16> div16{};
            constexpr MPL::Value<pselVal,pselVal::div32> div32{};
            constexpr MPL::Value<pselVal,pselVal::div64> div64{};
            constexpr MPL::Value<pselVal,pselVal::div128> div128{};
            constexpr MPL::Value<pselVal,pselVal::div256> div256{};
            constexpr MPL::Value<pselVal,pselVal::div512> div512{};
            constexpr MPL::Value<pselVal,pselVal::div1k> div1k{};
            constexpr MPL::Value<pselVal,pselVal::div2k> div2k{};
            constexpr MPL::Value<pselVal,pselVal::div4k> div4k{};
            constexpr MPL::Value<pselVal,pselVal::div8k> div8k{};
            constexpr MPL::Value<pselVal,pselVal::div16k> div16k{};
            constexpr MPL::Value<pselVal,pselVal::div32k> div32k{};
            constexpr MPL::Value<pselVal,pselVal::div64k> div64k{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,pselVal> psel{}; 
        ///BOD33 Threshold Level
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> level{}; 
    }
    namespace SysctrlDfllctrl{    ///<DFLL48M Control
        using Addr = Register::Address<0x40000824,0xfffff001,0,unsigned>;
        ///DFLL Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Operating Mode Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mode{}; 
        ///Stable DFLL Frequency
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stable{}; 
        ///Lose Lock After Wake
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> llaw{}; 
        ///USB Clock Recovery Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usbcrm{}; 
        ///Run in Standby
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///On Demand Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ondemand{}; 
        ///Chill Cycle Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ccdis{}; 
        ///Quick Lock Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> qldis{}; 
        ///Bypass Coarse Lock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bplckc{}; 
        ///Wait Lock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> waitlock{}; 
    }
    namespace SysctrlDfllmul{    ///<DFLL48M Multiplier
        using Addr = Register::Address<0x4000082c,0x00000000,0,unsigned>;
        ///DFLL Multiply Factor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mul{}; 
        ///Fine Maximum Step
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> fstep{}; 
        ///Coarse Maximum Step
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> cstep{}; 
    }
    namespace SysctrlDfllsync{    ///<DFLL48M Synchronization
        using Addr = Register::Address<0x40000830,0xffffff7f,0,unsigned char>;
        ///Read Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> readreq{}; 
    }
    namespace SysctrlDfllval{    ///<DFLL48M Value
        using Addr = Register::Address<0x40000828,0x00000000,0,unsigned>;
        ///Fine Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> fine{}; 
        ///Coarse Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> coarse{}; 
        ///Multiplication Ratio Difference
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> diff{}; 
    }
    namespace SysctrlDpllctrla{    ///<DPLL Control A
        using Addr = Register::Address<0x40000844,0xffffff3d,0,unsigned char>;
        ///DPLL Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Run in Standby
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///On Demand Clock Activation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ondemand{}; 
    }
    namespace SysctrlDpllctrlb{    ///<DPLL Control B
        using Addr = Register::Address<0x4000084c,0xf800e8c0,0,unsigned>;
        ///Proportional Integral Filter Selection
        enum class filterVal {
            default_=0x00000000,     ///<Default filter mode
            lbfilt=0x00000001,     ///<Low bandwidth filter
            hbfilt=0x00000002,     ///<High bandwidth filter
            hdfilt=0x00000003,     ///<High damping filter
        };
        namespace filterValC{
            constexpr MPL::Value<filterVal,filterVal::default_> default_{};
            constexpr MPL::Value<filterVal,filterVal::lbfilt> lbfilt{};
            constexpr MPL::Value<filterVal,filterVal::hbfilt> hbfilt{};
            constexpr MPL::Value<filterVal,filterVal::hdfilt> hdfilt{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,filterVal> filter{}; 
        ///Low-Power Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lpen{}; 
        ///Wake Up Fast
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wuf{}; 
        ///Reference Clock Selection
        enum class refclkVal {
            ref0=0x00000000,     ///<CLK_DPLL_REF0 clock reference
            ref1=0x00000001,     ///<CLK_DPLL_REF1 clock reference
            gclk=0x00000002,     ///<GCLK_DPLL clock reference
        };
        namespace refclkValC{
            constexpr MPL::Value<refclkVal,refclkVal::ref0> ref0{};
            constexpr MPL::Value<refclkVal,refclkVal::ref1> ref1{};
            constexpr MPL::Value<refclkVal,refclkVal::gclk> gclk{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,refclkVal> refclk{}; 
        ///Lock Time
        enum class ltimeVal {
            v0x0=0x00000000,     ///<Default	No time-out
            v0x4=0x00000004,     ///<8MS	Time-out if no lock within 8 ms
            v0x5=0x00000005,     ///<9MS	Time-out if no lock within 9 ms
            v0x6=0x00000006,     ///<10MS	Time-out if no lock within 10 ms
            v0x7=0x00000007,     ///<11MS	Time-out if no lock within 11 ms
        };
        namespace ltimeValC{
            constexpr MPL::Value<ltimeVal,ltimeVal::v0x0> v0x0{};
            constexpr MPL::Value<ltimeVal,ltimeVal::v0x4> v0x4{};
            constexpr MPL::Value<ltimeVal,ltimeVal::v0x5> v0x5{};
            constexpr MPL::Value<ltimeVal,ltimeVal::v0x6> v0x6{};
            constexpr MPL::Value<ltimeVal,ltimeVal::v0x7> v0x7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,ltimeVal> ltime{}; 
        ///Lock Bypass
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> lbypass{}; 
        ///Clock Divider
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace SysctrlDpllratio{    ///<DPLL Ratio Control
        using Addr = Register::Address<0x40000848,0xfff0f000,0,unsigned>;
        ///Loop Divider Ratio
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ldr{}; 
        ///Loop Divider Ratio Fractional Part
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> ldrfrac{}; 
    }
    namespace SysctrlDpllstatus{    ///<DPLL Status
        using Addr = Register::Address<0x40000850,0xfffffff0,0,unsigned char>;
        ///DPLL Lock Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lock{}; 
        ///Output Clock Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clkrdy{}; 
        ///DPLL Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Divider Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace SysctrlIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x40000800,0xfffc7000,0,unsigned>;
        ///XOSC Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xoscrdy{}; 
        ///XOSC32K Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> xosc32krdy{}; 
        ///OSC32K Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> osc32krdy{}; 
        ///OSC8M Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osc8mrdy{}; 
        ///DFLL Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dfllrdy{}; 
        ///DFLL Out Of Bounds Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dflloob{}; 
        ///DFLL Lock Fine Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dflllckf{}; 
        ///DFLL Lock Coarse Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dflllckc{}; 
        ///DFLL Reference Clock Stopped Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dfllrcs{}; 
        ///BOD33 Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bod33rdy{}; 
        ///BOD33 Detection Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bod33det{}; 
        ///BOD33 Synchronization Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> b33srdy{}; 
        ///DPLL Lock Rise Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dplllckr{}; 
        ///DPLL Lock Fall Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dplllckf{}; 
        ///DPLL Lock Timeout Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dplllto{}; 
    }
    namespace SysctrlIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x40000804,0xfffc7000,0,unsigned>;
        ///XOSC Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xoscrdy{}; 
        ///XOSC32K Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> xosc32krdy{}; 
        ///OSC32K Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> osc32krdy{}; 
        ///OSC8M Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osc8mrdy{}; 
        ///DFLL Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dfllrdy{}; 
        ///DFLL Out Of Bounds Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dflloob{}; 
        ///DFLL Lock Fine Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dflllckf{}; 
        ///DFLL Lock Coarse Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dflllckc{}; 
        ///DFLL Reference Clock Stopped Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dfllrcs{}; 
        ///BOD33 Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bod33rdy{}; 
        ///BOD33 Detection Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bod33det{}; 
        ///BOD33 Synchronization Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> b33srdy{}; 
        ///DPLL Lock Rise Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dplllckr{}; 
        ///DPLL Lock Fall Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dplllckf{}; 
        ///DPLL Lock Timeout Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dplllto{}; 
    }
    namespace SysctrlIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x40000808,0xfffc7000,0,unsigned>;
        ///XOSC Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xoscrdy{}; 
        ///XOSC32K Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> xosc32krdy{}; 
        ///OSC32K Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> osc32krdy{}; 
        ///OSC8M Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osc8mrdy{}; 
        ///DFLL Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dfllrdy{}; 
        ///DFLL Out Of Bounds
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dflloob{}; 
        ///DFLL Lock Fine
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dflllckf{}; 
        ///DFLL Lock Coarse
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dflllckc{}; 
        ///DFLL Reference Clock Stopped
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dfllrcs{}; 
        ///BOD33 Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bod33rdy{}; 
        ///BOD33 Detection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bod33det{}; 
        ///BOD33 Synchronization Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> b33srdy{}; 
        ///DPLL Lock Rise
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dplllckr{}; 
        ///DPLL Lock Fall
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dplllckf{}; 
        ///DPLL Lock Timeout
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dplllto{}; 
    }
    namespace SysctrlOsculp32k{    ///<32kHz Ultra Low Power Internal Oscillator (OSCULP32K) Control
        using Addr = Register::Address<0x4000081c,0xffffff60,0,unsigned char>;
        ///Oscillator Calibration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> calib{}; 
        ///Write Lock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace SysctrlOsc8m{    ///<8MHz Internal Oscillator (OSC8M) Control
        using Addr = Register::Address<0x40000820,0x3000fc3d,0,unsigned>;
        ///Oscillator Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Run in Standby
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///On Demand Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ondemand{}; 
        ///Oscillator Prescaler
        enum class prescVal {
            v0x0=0x00000000,     ///<1
            v0x1=0x00000001,     ///<2
            v0x2=0x00000002,     ///<4
            v0x3=0x00000003,     ///<8
        };
        namespace prescValC{
            constexpr MPL::Value<prescVal,prescVal::v0x0> v0x0{};
            constexpr MPL::Value<prescVal,prescVal::v0x1> v0x1{};
            constexpr MPL::Value<prescVal,prescVal::v0x2> v0x2{};
            constexpr MPL::Value<prescVal,prescVal::v0x3> v0x3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,prescVal> presc{}; 
        ///Oscillator Calibration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> calib{}; 
        ///Oscillator Frequency Range
        enum class frangeVal {
            v0x0=0x00000000,     ///<4 to 6MHz
            v0x1=0x00000001,     ///<6 to 8MHz
            v0x2=0x00000002,     ///<8 to 11MHz
            v0x3=0x00000003,     ///<11 to 15MHz
        };
        namespace frangeValC{
            constexpr MPL::Value<frangeVal,frangeVal::v0x0> v0x0{};
            constexpr MPL::Value<frangeVal,frangeVal::v0x1> v0x1{};
            constexpr MPL::Value<frangeVal,frangeVal::v0x2> v0x2{};
            constexpr MPL::Value<frangeVal,frangeVal::v0x3> v0x3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,frangeVal> frange{}; 
    }
    namespace SysctrlOsc32k{    ///<32kHz Internal Oscillator (OSC32K) Control
        using Addr = Register::Address<0x40000818,0xff80e831,0,unsigned>;
        ///Oscillator Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///32kHz Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> en32k{}; 
        ///1kHz Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> en1k{}; 
        ///Run in Standby
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///On Demand Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ondemand{}; 
        ///Oscillator Start-Up Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> startup{}; 
        ///Write Lock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wrtlock{}; 
        ///Oscillator Calibration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> calib{}; 
    }
    namespace SysctrlPclksr{    ///<Power and Clocks Status
        using Addr = Register::Address<0x4000080c,0xfffc7000,0,unsigned>;
        ///XOSC Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xoscrdy{}; 
        ///XOSC32K Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> xosc32krdy{}; 
        ///OSC32K Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> osc32krdy{}; 
        ///OSC8M Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osc8mrdy{}; 
        ///DFLL Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dfllrdy{}; 
        ///DFLL Out Of Bounds
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dflloob{}; 
        ///DFLL Lock Fine
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dflllckf{}; 
        ///DFLL Lock Coarse
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dflllckc{}; 
        ///DFLL Reference Clock Stopped
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dfllrcs{}; 
        ///BOD33 Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bod33rdy{}; 
        ///BOD33 Detection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bod33det{}; 
        ///BOD33 Synchronization Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> b33srdy{}; 
        ///DPLL Lock Rise
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dplllckr{}; 
        ///DPLL Lock Fall
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dplllckf{}; 
        ///DPLL Lock Timeout
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dplllto{}; 
    }
    namespace SysctrlVref{    ///<Voltage References System (VREF) Control
        using Addr = Register::Address<0x40000840,0xf800fff9,0,unsigned>;
        ///Temperature Sensor Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tsen{}; 
        ///Bandgap Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bgouten{}; 
        ///Bandgap Voltage Generator Calibration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> calib{}; 
    }
    namespace SysctrlXosc{    ///<External Multipurpose Crystal Oscillator (XOSC) Control
        using Addr = Register::Address<0x40000810,0xffff0039,0,unsigned>;
        ///Oscillator Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Crystal Oscillator Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> xtalen{}; 
        ///Run in Standby
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///On Demand Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ondemand{}; 
        ///Oscillator Gain
        enum class gainVal {
            v0x0=0x00000000,     ///<2MHz
            v0x1=0x00000001,     ///<4MHz
            v0x2=0x00000002,     ///<8MHz
            v0x3=0x00000003,     ///<16MHz
            v0x4=0x00000004,     ///<30MHz
        };
        namespace gainValC{
            constexpr MPL::Value<gainVal,gainVal::v0x0> v0x0{};
            constexpr MPL::Value<gainVal,gainVal::v0x1> v0x1{};
            constexpr MPL::Value<gainVal,gainVal::v0x2> v0x2{};
            constexpr MPL::Value<gainVal,gainVal::v0x3> v0x3{};
            constexpr MPL::Value<gainVal,gainVal::v0x4> v0x4{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,gainVal> gain{}; 
        ///Automatic Amplitude Gain Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ampgc{}; 
        ///Start-Up Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> startup{}; 
    }
    namespace SysctrlXosc32k{    ///<32kHz External Crystal Oscillator (XOSC32K) Control
        using Addr = Register::Address<0x40000814,0xffffe801,0,unsigned>;
        ///Oscillator Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Crystal Oscillator Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> xtalen{}; 
        ///32kHz Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> en32k{}; 
        ///1kHz Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> en1k{}; 
        ///Automatic Amplitude Control Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> aampen{}; 
        ///Run in Standby
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> runstdby{}; 
        ///On Demand Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ondemand{}; 
        ///Oscillator Start-Up Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> startup{}; 
        ///Write Lock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
}
