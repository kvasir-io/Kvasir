#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonemode{    ///<Module Operating Mode
        using Addr = Register::Address<0x4000f180,0xffffe000,0,unsigned>;
        ///Input Clock Divisor. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///Input Clock (F<subscript>CLKIN</subscript>) Select. 
        enum class clkselVal {
            apb=0x00000000,     ///<Set the APB as the input clock (FCLKIN).
            timer0=0x00000001,     ///<Set Timer 0 low overflows divided by 2 as the input clock (FCLKIN).
            hlEci=0x00000002,     ///<Set high-to-low transitions on ECI divided by 2 as the input clock (FCLKIN).
            extoscn=0x00000003,     ///<Set the external oscillator module output (EXTOSCn) divided by 2 as the input clock (FCLKIN).
            eci=0x00000004,     ///<Set ECI transitions divided by 2 as the input clock (FCLKIN).
        };
        namespace clkselValC{
            constexpr MPL::Value<clkselVal,clkselVal::apb> apb{};
            constexpr MPL::Value<clkselVal,clkselVal::timer0> timer0{};
            constexpr MPL::Value<clkselVal,clkselVal::hlEci> hlEci{};
            constexpr MPL::Value<clkselVal,clkselVal::extoscn> extoscn{};
            constexpr MPL::Value<clkselVal,clkselVal::eci> eci{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,clkselVal> clksel{}; 
    }
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x4000f190,0x001fffbe,0,unsigned>;
        ///PCA Counter Overflow/Limit Interrupt Enable. 
        enum class ovfienVal {
            disabled=0x00000000,     ///<Disable the PCA counter overflow/limit event interrupt.
            enabled=0x00000001,     ///<Enable the PCA counter overflow/limit event interrupt.
        };
        namespace ovfienValC{
            constexpr MPL::Value<ovfienVal,ovfienVal::disabled> disabled{};
            constexpr MPL::Value<ovfienVal,ovfienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ovfienVal> ovfien{}; 
        ///PCA Debug Mode. 
        enum class dbgmdVal {
            halt=0x00000000,     ///<A debug breakpoint will cause the PCA to halt.
            run=0x00000001,     ///<The PCA will continue to operate while the core is halted in debug mode.
        };
        namespace dbgmdValC{
            constexpr MPL::Value<dbgmdVal,dbgmdVal::halt> halt{};
            constexpr MPL::Value<dbgmdVal,dbgmdVal::run> run{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dbgmdVal> dbgmd{}; 
        ///Clock Divider Output State. 
        enum class divstVal {
            outputHigh=0x00000000,     ///<The clock divider is currently in the first half-cycle.
            outputLow=0x00000001,     ///<The clock divider is currently in the second half-cycle.
        };
        namespace divstValC{
            constexpr MPL::Value<divstVal,divstVal::outputHigh> outputHigh{};
            constexpr MPL::Value<divstVal,divstVal::outputLow> outputLow{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,divstVal> divst{}; 
        ///Current Clock Divider Count. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,22),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Nonestatus{    ///<Module Status
        using Addr = Register::Address<0x4000f1a0,0xfffff33c,0,unsigned>;
        ///Channel 0 Capture/Compare Interrupt Flag. 
        enum class c0cciVal {
            notSet=0x00000000,     ///<A Channel 0 match or capture event did not occur.
            set=0x00000001,     ///<A Channel 0 match or capture event occurred.
        };
        namespace c0cciValC{
            constexpr MPL::Value<c0cciVal,c0cciVal::notSet> notSet{};
            constexpr MPL::Value<c0cciVal,c0cciVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,c0cciVal> c0cci{}; 
        ///Channel 1 Capture/Compare Interrupt Flag. 
        enum class c1cciVal {
            notSet=0x00000000,     ///<A Channel 1 match or capture event did not occur.
            set=0x00000001,     ///<A Channel 1 match or capture event occurred.
        };
        namespace c1cciValC{
            constexpr MPL::Value<c1cciVal,c1cciVal::notSet> notSet{};
            constexpr MPL::Value<c1cciVal,c1cciVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,c1cciVal> c1cci{}; 
        ///Counter/Timer Run. 
        enum class runVal {
            stop=0x00000000,     ///<Stop the PCA Counter/Timer.
            start=0x00000001,     ///<Start the PCA Counter/Timer.
        };
        namespace runValC{
            constexpr MPL::Value<runVal,runVal::stop> stop{};
            constexpr MPL::Value<runVal,runVal::start> start{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,runVal> run{}; 
        ///Counter/Timer Overflow/Limit Interrupt Flag. 
        enum class ovfiVal {
            notSet=0x00000000,     ///<A PCA Counter/Timer overflow/limit event did not occur.
            set=0x00000001,     ///<A PCA Counter/Timer overflow/limit event occurred.
        };
        namespace ovfiValC{
            constexpr MPL::Value<ovfiVal,ovfiVal::notSet> notSet{};
            constexpr MPL::Value<ovfiVal,ovfiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ovfiVal> ovfi{}; 
        ///Channel 0 Intermediate Overflow Interrupt Flag. 
        enum class c0iovfiVal {
            notSet=0x00000000,     ///<Channel 0 did not count past the channel n-bit mode limit.
            set=0x00000001,     ///<Channel 0 counted past the channel n-bit mode limit.
        };
        namespace c0iovfiValC{
            constexpr MPL::Value<c0iovfiVal,c0iovfiVal::notSet> notSet{};
            constexpr MPL::Value<c0iovfiVal,c0iovfiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,c0iovfiVal> c0iovfi{}; 
        ///Channel 1 Intermediate Overflow Interrupt Flag. 
        enum class c1iovfiVal {
            notSet=0x00000000,     ///<Channel 1 did not count past the channel n-bit mode limit.
            set=0x00000001,     ///<Channel 1 counted past the channel n-bit mode limit.
        };
        namespace c1iovfiValC{
            constexpr MPL::Value<c1iovfiVal,c1iovfiVal::notSet> notSet{};
            constexpr MPL::Value<c1iovfiVal,c1iovfiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,c1iovfiVal> c1iovfi{}; 
    }
    namespace Nonecounter{    ///<Module Counter/Timer
        using Addr = Register::Address<0x4000f1b0,0xffff0000,0,unsigned>;
        ///Counter/Timer. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> counter{}; 
    }
    namespace Nonelimit{    ///<Module Counter/Timer Upper Limit
        using Addr = Register::Address<0x4000f1c0,0xffff0000,0,unsigned>;
        ///Upper Limit. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> limit{}; 
    }
    namespace Nonemode0{    ///<Channel Capture/Compare Mode
        using Addr = Register::Address<0x4000f000,0xfffff8c0,0,unsigned>;
        ///Channel Output Function Select. 
        enum class coselVal {
            toggleOutput=0x00000000,     ///<Toggle the channel output at the next capture/compare, overflow, or intermediate event.
            setOutput=0x00000001,     ///<Set the channel output at the next capture/compare, overflow, or intermediate event.
            clearOutput=0x00000002,     ///<Clear the output at the next capture/compare, overflow, or intermediate event.
            noChange=0x00000003,     ///<Capture/Compare, overflow, or intermediate events do not control the output state.
        };
        namespace coselValC{
            constexpr MPL::Value<coselVal,coselVal::toggleOutput> toggleOutput{};
            constexpr MPL::Value<coselVal,coselVal::setOutput> setOutput{};
            constexpr MPL::Value<coselVal,coselVal::clearOutput> clearOutput{};
            constexpr MPL::Value<coselVal,coselVal::noChange> noChange{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,coselVal> cosel{}; 
        ///PWM N-Bit Mode. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> pwmmd{}; 
        ///Channel Operating Mode. 
        enum class cmdVal {
            edgePwm=0x00000000,     ///<Configure the channel for edge-aligned PWM mode.
            centerAlignedPwm=0x00000001,     ///<Configure the channel for center-aligned PWM mode.
            hfSquareWave=0x00000002,     ///<Configure the channel for high-frequency/square-wave mode.
            timerCapture=0x00000003,     ///<Configure the channel for timer/capture mode.
            nBitPwm=0x00000004,     ///<Configure the channel for n-bit edge-aligned PWM mode.
        };
        namespace cmdValC{
            constexpr MPL::Value<cmdVal,cmdVal::edgePwm> edgePwm{};
            constexpr MPL::Value<cmdVal,cmdVal::centerAlignedPwm> centerAlignedPwm{};
            constexpr MPL::Value<cmdVal,cmdVal::hfSquareWave> hfSquareWave{};
            constexpr MPL::Value<cmdVal,cmdVal::timerCapture> timerCapture{};
            constexpr MPL::Value<cmdVal,cmdVal::nBitPwm> nBitPwm{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,cmdVal> cmd{}; 
    }
    namespace Nonecontrol0{    ///<Channel Capture/Compare Control
        using Addr = Register::Address<0x4000f010,0xfffff6f0,0,unsigned>;
        ///Channel Output State. 
        enum class coutstVal {
            low=0x00000000,     ///<The channel output state is low.
            high=0x00000001,     ///<The channel output state is high.
        };
        namespace coutstValC{
            constexpr MPL::Value<coutstVal,coutstVal::low> low{};
            constexpr MPL::Value<coutstVal,coutstVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,coutstVal> coutst{}; 
        ///Positive Edge Input Capture Enable. 
        enum class cpcapenVal {
            disabled=0x00000000,     ///<Disable positive-edge input capture.
            enabled=0x00000001,     ///<Enable positive-edge input capture.
        };
        namespace cpcapenValC{
            constexpr MPL::Value<cpcapenVal,cpcapenVal::disabled> disabled{};
            constexpr MPL::Value<cpcapenVal,cpcapenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,cpcapenVal> cpcapen{}; 
        ///Negative Edge Input Capture Enable. 
        enum class cncapenVal {
            disabled=0x00000000,     ///<Disable negative-edge input capture.
            enabled=0x00000001,     ///<Enable negative-edge input capture.
        };
        namespace cncapenValC{
            constexpr MPL::Value<cncapenVal,cncapenVal::disabled> disabled{};
            constexpr MPL::Value<cncapenVal,cncapenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cncapenVal> cncapen{}; 
        ///Channel Register Update Complete Flag. 
        enum class cupdcfVal {
            notSet=0x00000000,     ///<A PCA channel register update completed or is not pending.
            set=0x00000001,     ///<A PCA channel register update has not completed and is still pending.
        };
        namespace cupdcfValC{
            constexpr MPL::Value<cupdcfVal,cupdcfVal::notSet> notSet{};
            constexpr MPL::Value<cupdcfVal,cupdcfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,cupdcfVal> cupdcf{}; 
        ///Capture/Compare Interrupt Enable. 
        enum class ccienVal {
            disabled=0x00000000,     ///<Disable the channel capture/compare interrupt.
            enabled=0x00000001,     ///<Enable the channel capture/compare interrupt.
        };
        namespace ccienValC{
            constexpr MPL::Value<ccienVal,ccienVal::disabled> disabled{};
            constexpr MPL::Value<ccienVal,ccienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ccienVal> ccien{}; 
        ///Intermediate Overflow Interrupt Enable. 
        enum class ciovfienVal {
            disabled=0x00000000,     ///<Disable the channel intermediate overflow interrupt.
            enabled=0x00000001,     ///<Enable the channel intermediate overflow interrupt.
        };
        namespace ciovfienValC{
            constexpr MPL::Value<ciovfienVal,ciovfienVal::disabled> disabled{};
            constexpr MPL::Value<ciovfienVal,ciovfienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ciovfienVal> ciovfien{}; 
    }
    namespace Noneccapv0{    ///<Channel Compare Value
        using Addr = Register::Address<0x4000f020,0xfffc0000,0,unsigned>;
        ///Channel Compare Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapv{}; 
    }
    namespace Noneccapvupd0{    ///<Channel Compare Update Value
        using Addr = Register::Address<0x4000f030,0xfffc0000,0,unsigned>;
        ///Channel Compare Update Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapvupd{}; 
    }
    namespace Nonemode1{    ///<Channel Capture/Compare Mode
        using Addr = Register::Address<0x4000f040,0xfffff8c0,0,unsigned>;
        ///Channel Output Function Select. 
        enum class coselVal {
            toggleOutput=0x00000000,     ///<Toggle the channel output at the next capture/compare, overflow, or intermediate event.
            setOutput=0x00000001,     ///<Set the channel output at the next capture/compare, overflow, or intermediate event.
            clearOutput=0x00000002,     ///<Clear the output at the next capture/compare, overflow, or intermediate event.
            noChange=0x00000003,     ///<Capture/Compare, overflow, or intermediate events do not control the output state.
        };
        namespace coselValC{
            constexpr MPL::Value<coselVal,coselVal::toggleOutput> toggleOutput{};
            constexpr MPL::Value<coselVal,coselVal::setOutput> setOutput{};
            constexpr MPL::Value<coselVal,coselVal::clearOutput> clearOutput{};
            constexpr MPL::Value<coselVal,coselVal::noChange> noChange{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,coselVal> cosel{}; 
        ///PWM N-Bit Mode. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> pwmmd{}; 
        ///Channel Operating Mode. 
        enum class cmdVal {
            edgePwm=0x00000000,     ///<Configure the channel for edge-aligned PWM mode.
            centerAlignedPwm=0x00000001,     ///<Configure the channel for center-aligned PWM mode.
            hfSquareWave=0x00000002,     ///<Configure the channel for high-frequency/square-wave mode.
            timerCapture=0x00000003,     ///<Configure the channel for timer/capture mode.
            nBitPwm=0x00000004,     ///<Configure the channel for n-bit edge-aligned PWM mode.
        };
        namespace cmdValC{
            constexpr MPL::Value<cmdVal,cmdVal::edgePwm> edgePwm{};
            constexpr MPL::Value<cmdVal,cmdVal::centerAlignedPwm> centerAlignedPwm{};
            constexpr MPL::Value<cmdVal,cmdVal::hfSquareWave> hfSquareWave{};
            constexpr MPL::Value<cmdVal,cmdVal::timerCapture> timerCapture{};
            constexpr MPL::Value<cmdVal,cmdVal::nBitPwm> nBitPwm{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,cmdVal> cmd{}; 
    }
    namespace Nonecontrol1{    ///<Channel Capture/Compare Control
        using Addr = Register::Address<0x4000f050,0xfffff6f0,0,unsigned>;
        ///Channel Output State. 
        enum class coutstVal {
            low=0x00000000,     ///<The channel output state is low.
            high=0x00000001,     ///<The channel output state is high.
        };
        namespace coutstValC{
            constexpr MPL::Value<coutstVal,coutstVal::low> low{};
            constexpr MPL::Value<coutstVal,coutstVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,coutstVal> coutst{}; 
        ///Positive Edge Input Capture Enable. 
        enum class cpcapenVal {
            disabled=0x00000000,     ///<Disable positive-edge input capture.
            enabled=0x00000001,     ///<Enable positive-edge input capture.
        };
        namespace cpcapenValC{
            constexpr MPL::Value<cpcapenVal,cpcapenVal::disabled> disabled{};
            constexpr MPL::Value<cpcapenVal,cpcapenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,cpcapenVal> cpcapen{}; 
        ///Negative Edge Input Capture Enable. 
        enum class cncapenVal {
            disabled=0x00000000,     ///<Disable negative-edge input capture.
            enabled=0x00000001,     ///<Enable negative-edge input capture.
        };
        namespace cncapenValC{
            constexpr MPL::Value<cncapenVal,cncapenVal::disabled> disabled{};
            constexpr MPL::Value<cncapenVal,cncapenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cncapenVal> cncapen{}; 
        ///Channel Register Update Complete Flag. 
        enum class cupdcfVal {
            notSet=0x00000000,     ///<A PCA channel register update completed or is not pending.
            set=0x00000001,     ///<A PCA channel register update has not completed and is still pending.
        };
        namespace cupdcfValC{
            constexpr MPL::Value<cupdcfVal,cupdcfVal::notSet> notSet{};
            constexpr MPL::Value<cupdcfVal,cupdcfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,cupdcfVal> cupdcf{}; 
        ///Capture/Compare Interrupt Enable. 
        enum class ccienVal {
            disabled=0x00000000,     ///<Disable the channel capture/compare interrupt.
            enabled=0x00000001,     ///<Enable the channel capture/compare interrupt.
        };
        namespace ccienValC{
            constexpr MPL::Value<ccienVal,ccienVal::disabled> disabled{};
            constexpr MPL::Value<ccienVal,ccienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ccienVal> ccien{}; 
        ///Intermediate Overflow Interrupt Enable. 
        enum class ciovfienVal {
            disabled=0x00000000,     ///<Disable the channel intermediate overflow interrupt.
            enabled=0x00000001,     ///<Enable the channel intermediate overflow interrupt.
        };
        namespace ciovfienValC{
            constexpr MPL::Value<ciovfienVal,ciovfienVal::disabled> disabled{};
            constexpr MPL::Value<ciovfienVal,ciovfienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ciovfienVal> ciovfien{}; 
    }
    namespace Noneccapv1{    ///<Channel Compare Value
        using Addr = Register::Address<0x4000f060,0xfffc0000,0,unsigned>;
        ///Channel Compare Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapv{}; 
    }
    namespace Noneccapvupd1{    ///<Channel Compare Update Value
        using Addr = Register::Address<0x4000f070,0xfffc0000,0,unsigned>;
        ///Channel Compare Update Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapvupd{}; 
    }
}
