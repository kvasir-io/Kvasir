#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonemode{    ///<Module Operating Mode
        using Addr = Register::Address<0x4000f180,0xffffe000,0,unsigned>;
        ///Input Clock Divisor. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        namespace ClkdivValC{
        }
        ///Input Clock (F<subscript>CLKIN</subscript>) Select. 
        enum class ClkselVal {
            apb=0x00000000,     ///<Set the APB as the input clock (FCLKIN).
            timer0=0x00000001,     ///<Set Timer 0 low overflows divided by 2 as the input clock (FCLKIN).
            hlEci=0x00000002,     ///<Set high-to-low transitions on ECI divided by 2 as the input clock (FCLKIN).
            extoscn=0x00000003,     ///<Set the external oscillator module output (EXTOSCn) divided by 2 as the input clock (FCLKIN).
            eci=0x00000004,     ///<Set ECI transitions divided by 2 as the input clock (FCLKIN).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,ClkselVal> clksel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clksel),ClkselVal::apb> apb{};
            constexpr Register::FieldValue<decltype(clksel),ClkselVal::timer0> timer0{};
            constexpr Register::FieldValue<decltype(clksel),ClkselVal::hlEci> hlEci{};
            constexpr Register::FieldValue<decltype(clksel),ClkselVal::extoscn> extoscn{};
            constexpr Register::FieldValue<decltype(clksel),ClkselVal::eci> eci{};
        }
    }
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x4000f190,0x001fffbe,0,unsigned>;
        ///PCA Counter Overflow/Limit Interrupt Enable. 
        enum class OvfienVal {
            disabled=0x00000000,     ///<Disable the PCA counter overflow/limit event interrupt.
            enabled=0x00000001,     ///<Enable the PCA counter overflow/limit event interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,OvfienVal> ovfien{}; 
        namespace OvfienValC{
            constexpr Register::FieldValue<decltype(ovfien),OvfienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ovfien),OvfienVal::enabled> enabled{};
        }
        ///PCA Debug Mode. 
        enum class DbgmdVal {
            halt=0x00000000,     ///<A debug breakpoint will cause the PCA to halt.
            run=0x00000001,     ///<The PCA will continue to operate while the core is halted in debug mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DbgmdVal> dbgmd{}; 
        namespace DbgmdValC{
            constexpr Register::FieldValue<decltype(dbgmd),DbgmdVal::halt> halt{};
            constexpr Register::FieldValue<decltype(dbgmd),DbgmdVal::run> run{};
        }
        ///Clock Divider Output State. 
        enum class DivstVal {
            outputHigh=0x00000000,     ///<The clock divider is currently in the first half-cycle.
            outputLow=0x00000001,     ///<The clock divider is currently in the second half-cycle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,DivstVal> divst{}; 
        namespace DivstValC{
            constexpr Register::FieldValue<decltype(divst),DivstVal::outputHigh> outputHigh{};
            constexpr Register::FieldValue<decltype(divst),DivstVal::outputLow> outputLow{};
        }
        ///Current Clock Divider Count. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,22),Register::ReadWriteAccess,unsigned> div{}; 
        namespace DivValC{
        }
    }
    namespace Nonestatus{    ///<Module Status
        using Addr = Register::Address<0x4000f1a0,0xfffff33c,0,unsigned>;
        ///Channel 0 Capture/Compare Interrupt Flag. 
        enum class C0cciVal {
            notSet=0x00000000,     ///<A Channel 0 match or capture event did not occur.
            set=0x00000001,     ///<A Channel 0 match or capture event occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,C0cciVal> c0cci{}; 
        namespace C0cciValC{
            constexpr Register::FieldValue<decltype(c0cci),C0cciVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(c0cci),C0cciVal::set> set{};
        }
        ///Channel 1 Capture/Compare Interrupt Flag. 
        enum class C1cciVal {
            notSet=0x00000000,     ///<A Channel 1 match or capture event did not occur.
            set=0x00000001,     ///<A Channel 1 match or capture event occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,C1cciVal> c1cci{}; 
        namespace C1cciValC{
            constexpr Register::FieldValue<decltype(c1cci),C1cciVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(c1cci),C1cciVal::set> set{};
        }
        ///Counter/Timer Run. 
        enum class RunVal {
            stop=0x00000000,     ///<Stop the PCA Counter/Timer.
            start=0x00000001,     ///<Start the PCA Counter/Timer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run),RunVal::stop> stop{};
            constexpr Register::FieldValue<decltype(run),RunVal::start> start{};
        }
        ///Counter/Timer Overflow/Limit Interrupt Flag. 
        enum class OvfiVal {
            notSet=0x00000000,     ///<A PCA Counter/Timer overflow/limit event did not occur.
            set=0x00000001,     ///<A PCA Counter/Timer overflow/limit event occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,OvfiVal> ovfi{}; 
        namespace OvfiValC{
            constexpr Register::FieldValue<decltype(ovfi),OvfiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(ovfi),OvfiVal::set> set{};
        }
        ///Channel 0 Intermediate Overflow Interrupt Flag. 
        enum class C0iovfiVal {
            notSet=0x00000000,     ///<Channel 0 did not count past the channel n-bit mode limit.
            set=0x00000001,     ///<Channel 0 counted past the channel n-bit mode limit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,C0iovfiVal> c0iovfi{}; 
        namespace C0iovfiValC{
            constexpr Register::FieldValue<decltype(c0iovfi),C0iovfiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(c0iovfi),C0iovfiVal::set> set{};
        }
        ///Channel 1 Intermediate Overflow Interrupt Flag. 
        enum class C1iovfiVal {
            notSet=0x00000000,     ///<Channel 1 did not count past the channel n-bit mode limit.
            set=0x00000001,     ///<Channel 1 counted past the channel n-bit mode limit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,C1iovfiVal> c1iovfi{}; 
        namespace C1iovfiValC{
            constexpr Register::FieldValue<decltype(c1iovfi),C1iovfiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(c1iovfi),C1iovfiVal::set> set{};
        }
    }
    namespace Nonecounter{    ///<Module Counter/Timer
        using Addr = Register::Address<0x4000f1b0,0xffff0000,0,unsigned>;
        ///Counter/Timer. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> counter{}; 
        namespace CounterValC{
        }
    }
    namespace Nonelimit{    ///<Module Counter/Timer Upper Limit
        using Addr = Register::Address<0x4000f1c0,0xffff0000,0,unsigned>;
        ///Upper Limit. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> limit{}; 
        namespace LimitValC{
        }
    }
    namespace Nonemode0{    ///<Channel Capture/Compare Mode
        using Addr = Register::Address<0x4000f000,0xfffff8c0,0,unsigned>;
        ///Channel Output Function Select. 
        enum class CoselVal {
            toggleOutput=0x00000000,     ///<Toggle the channel output at the next capture/compare, overflow, or intermediate event.
            setOutput=0x00000001,     ///<Set the channel output at the next capture/compare, overflow, or intermediate event.
            clearOutput=0x00000002,     ///<Clear the output at the next capture/compare, overflow, or intermediate event.
            noChange=0x00000003,     ///<Capture/Compare, overflow, or intermediate events do not control the output state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CoselVal> cosel{}; 
        namespace CoselValC{
            constexpr Register::FieldValue<decltype(cosel),CoselVal::toggleOutput> toggleOutput{};
            constexpr Register::FieldValue<decltype(cosel),CoselVal::setOutput> setOutput{};
            constexpr Register::FieldValue<decltype(cosel),CoselVal::clearOutput> clearOutput{};
            constexpr Register::FieldValue<decltype(cosel),CoselVal::noChange> noChange{};
        }
        ///PWM N-Bit Mode. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> pwmmd{}; 
        namespace PwmmdValC{
        }
        ///Channel Operating Mode. 
        enum class CmdVal {
            edgePwm=0x00000000,     ///<Configure the channel for edge-aligned PWM mode.
            centerAlignedPwm=0x00000001,     ///<Configure the channel for center-aligned PWM mode.
            hfSquareWave=0x00000002,     ///<Configure the channel for high-frequency/square-wave mode.
            timerCapture=0x00000003,     ///<Configure the channel for timer/capture mode.
            nBitPwm=0x00000004,     ///<Configure the channel for n-bit edge-aligned PWM mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd),CmdVal::edgePwm> edgePwm{};
            constexpr Register::FieldValue<decltype(cmd),CmdVal::centerAlignedPwm> centerAlignedPwm{};
            constexpr Register::FieldValue<decltype(cmd),CmdVal::hfSquareWave> hfSquareWave{};
            constexpr Register::FieldValue<decltype(cmd),CmdVal::timerCapture> timerCapture{};
            constexpr Register::FieldValue<decltype(cmd),CmdVal::nBitPwm> nBitPwm{};
        }
    }
    namespace Nonecontrol0{    ///<Channel Capture/Compare Control
        using Addr = Register::Address<0x4000f010,0xfffff6f0,0,unsigned>;
        ///Channel Output State. 
        enum class CoutstVal {
            low=0x00000000,     ///<The channel output state is low.
            high=0x00000001,     ///<The channel output state is high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CoutstVal> coutst{}; 
        namespace CoutstValC{
            constexpr Register::FieldValue<decltype(coutst),CoutstVal::low> low{};
            constexpr Register::FieldValue<decltype(coutst),CoutstVal::high> high{};
        }
        ///Positive Edge Input Capture Enable. 
        enum class CpcapenVal {
            disabled=0x00000000,     ///<Disable positive-edge input capture.
            enabled=0x00000001,     ///<Enable positive-edge input capture.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CpcapenVal> cpcapen{}; 
        namespace CpcapenValC{
            constexpr Register::FieldValue<decltype(cpcapen),CpcapenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cpcapen),CpcapenVal::enabled> enabled{};
        }
        ///Negative Edge Input Capture Enable. 
        enum class CncapenVal {
            disabled=0x00000000,     ///<Disable negative-edge input capture.
            enabled=0x00000001,     ///<Enable negative-edge input capture.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CncapenVal> cncapen{}; 
        namespace CncapenValC{
            constexpr Register::FieldValue<decltype(cncapen),CncapenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cncapen),CncapenVal::enabled> enabled{};
        }
        ///Channel Register Update Complete Flag. 
        enum class CupdcfVal {
            notSet=0x00000000,     ///<A PCA channel register update completed or is not pending.
            set=0x00000001,     ///<A PCA channel register update has not completed and is still pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CupdcfVal> cupdcf{}; 
        namespace CupdcfValC{
            constexpr Register::FieldValue<decltype(cupdcf),CupdcfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(cupdcf),CupdcfVal::set> set{};
        }
        ///Capture/Compare Interrupt Enable. 
        enum class CcienVal {
            disabled=0x00000000,     ///<Disable the channel capture/compare interrupt.
            enabled=0x00000001,     ///<Enable the channel capture/compare interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,CcienVal> ccien{}; 
        namespace CcienValC{
            constexpr Register::FieldValue<decltype(ccien),CcienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ccien),CcienVal::enabled> enabled{};
        }
        ///Intermediate Overflow Interrupt Enable. 
        enum class CiovfienVal {
            disabled=0x00000000,     ///<Disable the channel intermediate overflow interrupt.
            enabled=0x00000001,     ///<Enable the channel intermediate overflow interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,CiovfienVal> ciovfien{}; 
        namespace CiovfienValC{
            constexpr Register::FieldValue<decltype(ciovfien),CiovfienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ciovfien),CiovfienVal::enabled> enabled{};
        }
    }
    namespace Noneccapv0{    ///<Channel Compare Value
        using Addr = Register::Address<0x4000f020,0xfffc0000,0,unsigned>;
        ///Channel Compare Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapv{}; 
        namespace CcapvValC{
        }
    }
    namespace Noneccapvupd0{    ///<Channel Compare Update Value
        using Addr = Register::Address<0x4000f030,0xfffc0000,0,unsigned>;
        ///Channel Compare Update Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapvupd{}; 
        namespace CcapvupdValC{
        }
    }
    namespace Nonemode1{    ///<Channel Capture/Compare Mode
        using Addr = Register::Address<0x4000f040,0xfffff8c0,0,unsigned>;
        ///Channel Output Function Select. 
        enum class CoselVal {
            toggleOutput=0x00000000,     ///<Toggle the channel output at the next capture/compare, overflow, or intermediate event.
            setOutput=0x00000001,     ///<Set the channel output at the next capture/compare, overflow, or intermediate event.
            clearOutput=0x00000002,     ///<Clear the output at the next capture/compare, overflow, or intermediate event.
            noChange=0x00000003,     ///<Capture/Compare, overflow, or intermediate events do not control the output state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CoselVal> cosel{}; 
        namespace CoselValC{
            constexpr Register::FieldValue<decltype(cosel),CoselVal::toggleOutput> toggleOutput{};
            constexpr Register::FieldValue<decltype(cosel),CoselVal::setOutput> setOutput{};
            constexpr Register::FieldValue<decltype(cosel),CoselVal::clearOutput> clearOutput{};
            constexpr Register::FieldValue<decltype(cosel),CoselVal::noChange> noChange{};
        }
        ///PWM N-Bit Mode. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> pwmmd{}; 
        namespace PwmmdValC{
        }
        ///Channel Operating Mode. 
        enum class CmdVal {
            edgePwm=0x00000000,     ///<Configure the channel for edge-aligned PWM mode.
            centerAlignedPwm=0x00000001,     ///<Configure the channel for center-aligned PWM mode.
            hfSquareWave=0x00000002,     ///<Configure the channel for high-frequency/square-wave mode.
            timerCapture=0x00000003,     ///<Configure the channel for timer/capture mode.
            nBitPwm=0x00000004,     ///<Configure the channel for n-bit edge-aligned PWM mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd),CmdVal::edgePwm> edgePwm{};
            constexpr Register::FieldValue<decltype(cmd),CmdVal::centerAlignedPwm> centerAlignedPwm{};
            constexpr Register::FieldValue<decltype(cmd),CmdVal::hfSquareWave> hfSquareWave{};
            constexpr Register::FieldValue<decltype(cmd),CmdVal::timerCapture> timerCapture{};
            constexpr Register::FieldValue<decltype(cmd),CmdVal::nBitPwm> nBitPwm{};
        }
    }
    namespace Nonecontrol1{    ///<Channel Capture/Compare Control
        using Addr = Register::Address<0x4000f050,0xfffff6f0,0,unsigned>;
        ///Channel Output State. 
        enum class CoutstVal {
            low=0x00000000,     ///<The channel output state is low.
            high=0x00000001,     ///<The channel output state is high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CoutstVal> coutst{}; 
        namespace CoutstValC{
            constexpr Register::FieldValue<decltype(coutst),CoutstVal::low> low{};
            constexpr Register::FieldValue<decltype(coutst),CoutstVal::high> high{};
        }
        ///Positive Edge Input Capture Enable. 
        enum class CpcapenVal {
            disabled=0x00000000,     ///<Disable positive-edge input capture.
            enabled=0x00000001,     ///<Enable positive-edge input capture.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CpcapenVal> cpcapen{}; 
        namespace CpcapenValC{
            constexpr Register::FieldValue<decltype(cpcapen),CpcapenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cpcapen),CpcapenVal::enabled> enabled{};
        }
        ///Negative Edge Input Capture Enable. 
        enum class CncapenVal {
            disabled=0x00000000,     ///<Disable negative-edge input capture.
            enabled=0x00000001,     ///<Enable negative-edge input capture.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CncapenVal> cncapen{}; 
        namespace CncapenValC{
            constexpr Register::FieldValue<decltype(cncapen),CncapenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cncapen),CncapenVal::enabled> enabled{};
        }
        ///Channel Register Update Complete Flag. 
        enum class CupdcfVal {
            notSet=0x00000000,     ///<A PCA channel register update completed or is not pending.
            set=0x00000001,     ///<A PCA channel register update has not completed and is still pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CupdcfVal> cupdcf{}; 
        namespace CupdcfValC{
            constexpr Register::FieldValue<decltype(cupdcf),CupdcfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(cupdcf),CupdcfVal::set> set{};
        }
        ///Capture/Compare Interrupt Enable. 
        enum class CcienVal {
            disabled=0x00000000,     ///<Disable the channel capture/compare interrupt.
            enabled=0x00000001,     ///<Enable the channel capture/compare interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,CcienVal> ccien{}; 
        namespace CcienValC{
            constexpr Register::FieldValue<decltype(ccien),CcienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ccien),CcienVal::enabled> enabled{};
        }
        ///Intermediate Overflow Interrupt Enable. 
        enum class CiovfienVal {
            disabled=0x00000000,     ///<Disable the channel intermediate overflow interrupt.
            enabled=0x00000001,     ///<Enable the channel intermediate overflow interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,CiovfienVal> ciovfien{}; 
        namespace CiovfienValC{
            constexpr Register::FieldValue<decltype(ciovfien),CiovfienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ciovfien),CiovfienVal::enabled> enabled{};
        }
    }
    namespace Noneccapv1{    ///<Channel Compare Value
        using Addr = Register::Address<0x4000f060,0xfffc0000,0,unsigned>;
        ///Channel Compare Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapv{}; 
        namespace CcapvValC{
        }
    }
    namespace Noneccapvupd1{    ///<Channel Compare Update Value
        using Addr = Register::Address<0x4000f070,0xfffc0000,0,unsigned>;
        ///Channel Compare Update Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapvupd{}; 
        namespace CcapvupdValC{
        }
    }
}
