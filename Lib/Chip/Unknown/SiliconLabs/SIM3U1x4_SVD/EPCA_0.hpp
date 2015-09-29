#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonemode{    ///<Module Operating Mode
        using Addr = Register::Address<0x4000e180,0xe4002000,0,unsigned>;
        ///Input Clock Divider. 
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
        ///High Drive Port Bank Output Select. 
        enum class hdoselVal {
            threeDiff=0x00000000,     ///<Select three differential outputs from Channels 3, 4, and 5 for the High Drive pins.
            twoDiff=0x00000001,     ///<Select the differential outputs from Channels 4 and 5 and non-differential outputs from Channels 2 and 3 for the High Drive pins.
            oneDiff=0x00000002,     ///<Select the differential output from Channel 5 and non-differential outputs from Channels 1-4 for the High Drive pins.
            noDiff=0x00000003,     ///<Select the non-differential channel outputs (Channels 0-5) for the High Drive pins.
        };
        namespace hdoselValC{
            constexpr MPL::Value<hdoselVal,hdoselVal::threeDiff> threeDiff{};
            constexpr MPL::Value<hdoselVal,hdoselVal::twoDiff> twoDiff{};
            constexpr MPL::Value<hdoselVal,hdoselVal::oneDiff> oneDiff{};
            constexpr MPL::Value<hdoselVal,hdoselVal::noDiff> noDiff{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,hdoselVal> hdosel{}; 
        ///DMA Write End Index. 
        enum class dendVal {
            limit=0x00000000,     ///<Set the last register in a DMA write transfer to LIMITUPD.
            ch0=0x00000001,     ///<Set the last register in a DMA write transfer to Channel 0 CCAPVUPD.
            ch1=0x00000002,     ///<Set the last register in a DMA write transfer to Channel 1 CCAPVUPD.
            ch2=0x00000003,     ///<Set the last register in a DMA write transfer to Channel 2 CCAPVUPD.
            ch3=0x00000004,     ///<Set the last register in a DMA write transfer to Channel 3 CCAPVUPD.
            ch4=0x00000005,     ///<Set the last register in a DMA write transfer to Channel 4 CCAPVUPD.
            ch5=0x00000006,     ///<Set the last register in a DMA write transfer to Channel 5 CCAPVUPD.
            empty=0x00000007,     ///<Empty slot.
        };
        namespace dendValC{
            constexpr MPL::Value<dendVal,dendVal::limit> limit{};
            constexpr MPL::Value<dendVal,dendVal::ch0> ch0{};
            constexpr MPL::Value<dendVal,dendVal::ch1> ch1{};
            constexpr MPL::Value<dendVal,dendVal::ch2> ch2{};
            constexpr MPL::Value<dendVal,dendVal::ch3> ch3{};
            constexpr MPL::Value<dendVal,dendVal::ch4> ch4{};
            constexpr MPL::Value<dendVal,dendVal::ch5> ch5{};
            constexpr MPL::Value<dendVal,dendVal::empty> empty{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,dendVal> dend{}; 
        ///DMA Write Transfer Pointer. 
        enum class dptrVal {
            limit=0x00000000,     ///<The DMA channel will write to LIMITUPD next.
            ch0=0x00000001,     ///<The DMA channel will write to Channel 0 CCAPVUPD next.
            ch1=0x00000002,     ///<The DMA channel will write to Channel 1 CCAPVUPD next.
            ch2=0x00000003,     ///<The DMA channel will write to Channel 2 CCAPVUPD next.
            ch3=0x00000004,     ///<The DMA channel will write to Channel 3 CCAPVUPD next.
            ch4=0x00000005,     ///<The DMA channel will write to Channel 4 CCAPVUPD next.
            ch5=0x00000006,     ///<The DMA channel will write to Channel 5 CCAPVUPD next.
            empty=0x00000007,     ///<Empty slot.
        };
        namespace dptrValC{
            constexpr MPL::Value<dptrVal,dptrVal::limit> limit{};
            constexpr MPL::Value<dptrVal,dptrVal::ch0> ch0{};
            constexpr MPL::Value<dptrVal,dptrVal::ch1> ch1{};
            constexpr MPL::Value<dptrVal,dptrVal::ch2> ch2{};
            constexpr MPL::Value<dptrVal,dptrVal::ch3> ch3{};
            constexpr MPL::Value<dptrVal,dptrVal::ch4> ch4{};
            constexpr MPL::Value<dptrVal,dptrVal::ch5> ch5{};
            constexpr MPL::Value<dptrVal,dptrVal::empty> empty{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,19),Register::ReadWriteAccess,dptrVal> dptr{}; 
        ///DMA Target Start Index. 
        enum class dstartVal {
            limit=0x00000000,     ///<Set the first register in a DMA write transfer to LIMITUPD.
            ch0=0x00000001,     ///<Set the first register in a DMA write transfer to Channel 0 CCAPVUPD.
            ch1=0x00000002,     ///<Set the first register in a DMA write transfer to Channel 1 CCAPVUPD.
            ch2=0x00000003,     ///<Set the first register in a DMA write transfer to Channel 2 CCAPVUPD.
            ch3=0x00000004,     ///<Set the first register in a DMA write transfer to Channel 3 CCAPVUPD.
            ch4=0x00000005,     ///<Set the first register in a DMA write transfer to Channel 4 CCAPVUPD.
            ch5=0x00000006,     ///<Set the first register in a DMA write transfer to Channel 5 CCAPVUPD.
            empty=0x00000007,     ///<Empty slot.
        };
        namespace dstartValC{
            constexpr MPL::Value<dstartVal,dstartVal::limit> limit{};
            constexpr MPL::Value<dstartVal,dstartVal::ch0> ch0{};
            constexpr MPL::Value<dstartVal,dstartVal::ch1> ch1{};
            constexpr MPL::Value<dstartVal,dstartVal::ch2> ch2{};
            constexpr MPL::Value<dstartVal,dstartVal::ch3> ch3{};
            constexpr MPL::Value<dstartVal,dstartVal::ch4> ch4{};
            constexpr MPL::Value<dstartVal,dstartVal::ch5> ch5{};
            constexpr MPL::Value<dstartVal,dstartVal::empty> empty{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,22),Register::ReadWriteAccess,dstartVal> dstart{}; 
        ///DMA Busy Flag. 
        enum class dbusyfVal {
            idle=0x00000000,     ///<The DMA channel is not servicing an EPCA control transfer.
            busy=0x00000001,     ///<The DMA channel is busy servicing an EPCA control transfer.
        };
        namespace dbusyfValC{
            constexpr MPL::Value<dbusyfVal,dbusyfVal::idle> idle{};
            constexpr MPL::Value<dbusyfVal,dbusyfVal::busy> busy{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,dbusyfVal> dbusyf{}; 
        ///Standard Port Bank Output Select. 
        enum class stdoselVal {
            noDiff=0x00000000,     ///<Select the non-differential channel outputs (Channels 0-5) for the standard PB pins.
            oneDiff=0x00000001,     ///<Select the differential output from Channel 2 and non-differential outputs from Channels 0, 1, 3, and 4 for the standard PB pins.
            twoDiff=0x00000002,     ///<Select the differential outputs from Channels 1 and 2 and non-differential outputs from Channels 0 and 3 for the standard PB pins.
            threeDiff=0x00000003,     ///<Select three differential outputs from Channels 0, 1, and 2 for the standard PB pins.
        };
        namespace stdoselValC{
            constexpr MPL::Value<stdoselVal,stdoselVal::noDiff> noDiff{};
            constexpr MPL::Value<stdoselVal,stdoselVal::oneDiff> oneDiff{};
            constexpr MPL::Value<stdoselVal,stdoselVal::twoDiff> twoDiff{};
            constexpr MPL::Value<stdoselVal,stdoselVal::threeDiff> threeDiff{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,27),Register::ReadWriteAccess,stdoselVal> stdosel{}; 
    }
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x4000e190,0x001f8580,0,unsigned>;
        ///EPCA Counter Overflow/Limit Interrupt Enable. 
        enum class ovfienVal {
            disabled=0x00000000,     ///<Disable the EPCA counter overflow/limit event interrupt.
            enabled=0x00000001,     ///<Enable the EPCA counter overflow/limit event interrupt.
        };
        namespace ovfienValC{
            constexpr MPL::Value<ovfienVal,ovfienVal::disabled> disabled{};
            constexpr MPL::Value<ovfienVal,ovfienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ovfienVal> ovfien{}; 
        ///EPCA Counter Overflow/Limit DMA Request Enable. 
        enum class ovfdenVal {
            disabled=0x00000000,     ///<Do not request DMA data when a EPCA counter overflow/limit event occurs.
            enabled=0x00000001,     ///<Request DMA data when a EPCA counter overflow/limit event occurs.
        };
        namespace ovfdenValC{
            constexpr MPL::Value<ovfdenVal,ovfdenVal::disabled> disabled{};
            constexpr MPL::Value<ovfdenVal,ovfdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ovfdenVal> ovfden{}; 
        ///EPCA Counter Overflow/Limit Synchronization Signal Enable. 
        enum class ovfsenVal {
            disabled=0x00000000,     ///<Do not send a synchronization signal when a EPCA counter overflow/limit event occurs.
            enabled=0x00000001,     ///<Send a synchronization signal when a EPCA counter overflow/limit event occurs.
        };
        namespace ovfsenValC{
            constexpr MPL::Value<ovfsenVal,ovfsenVal::disabled> disabled{};
            constexpr MPL::Value<ovfsenVal,ovfsenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ovfsenVal> ovfsen{}; 
        ///EPCA Halt Input Interrupt Enable. 
        enum class haltienVal {
            disabled=0x00000000,     ///<Do not generate an interrupt if the EPCA halt input is high.
            enabled=0x00000001,     ///<Generate an interrupt if the EPCA halt input is high.
        };
        namespace haltienValC{
            constexpr MPL::Value<haltienVal,haltienVal::disabled> disabled{};
            constexpr MPL::Value<haltienVal,haltienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,haltienVal> haltien{}; 
        ///Internal Register Update Inhibit. 
        enum class noupdVal {
            inactive=0x00000000,     ///<The EPCA registers will automatically load any new update values after an overflow/limit event occurs.
            active=0x00000001,     ///<The EPCA registers will not load any new update values after an overflow/limit event occurs.
        };
        namespace noupdValC{
            constexpr MPL::Value<noupdVal,noupdVal::inactive> inactive{};
            constexpr MPL::Value<noupdVal,noupdVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,noupdVal> noupd{}; 
        ///Idle Bypass Enable. 
        enum class idlebenVal {
            disabled=0x00000000,     ///<The EPCA module will stop running when the core halts (idle).
            enabled=0x00000001,     ///<The EPCA module will continue normal operation when the core halts (idle).
        };
        namespace idlebenValC{
            constexpr MPL::Value<idlebenVal,idlebenVal::disabled> disabled{};
            constexpr MPL::Value<idlebenVal,idlebenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,idlebenVal> idleben{}; 
        ///EPCA Debug Mode. 
        enum class dbgmdVal {
            halt=0x00000000,     ///<A debug breakpoint will stop the EPCA counter/timer.
            run=0x00000001,     ///<The EPCA will continue to operate while the core is halted in debug mode.
        };
        namespace dbgmdValC{
            constexpr MPL::Value<dbgmdVal,dbgmdVal::halt> halt{};
            constexpr MPL::Value<dbgmdVal,dbgmdVal::run> run{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dbgmdVal> dbgmd{}; 
        ///Halt Input Enable. 
        enum class haltenVal {
            disabled=0x00000000,     ///<The Halt input (PB_HDKill) does not affect the EPCA counter/timer.
            enabled=0x00000001,     ///<An assertion of the Halt input (PB_HDKill) will stop the EPCA counter/timer.
        };
        namespace haltenValC{
            constexpr MPL::Value<haltenVal,haltenVal::disabled> disabled{};
            constexpr MPL::Value<haltenVal,haltenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,haltenVal> halten{}; 
        ///Synchronous Input Trigger Select. 
        enum class stselVal {
            epcant0=0x00000000,     ///<Select input trigger 0, EPCAnT0 (Comparator 0 Output).
            epcant1=0x00000001,     ///<Select input trigger 1, EPCAnT1 (Comparator 1 Output).
            epcant2=0x00000002,     ///<Select input trigger 2,  EPCAnT2 (Timer 0 High Overflow ).
            epcant3=0x00000003,     ///<Select input trigger 3, EPCAnT3 (Timer 1 High Overflow).
        };
        namespace stselValC{
            constexpr MPL::Value<stselVal,stselVal::epcant0> epcant0{};
            constexpr MPL::Value<stselVal,stselVal::epcant1> epcant1{};
            constexpr MPL::Value<stselVal,stselVal::epcant2> epcant2{};
            constexpr MPL::Value<stselVal,stselVal::epcant3> epcant3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,stselVal> stsel{}; 
        ///Synchronous Input Trigger Edge Select. 
        enum class steselVal {
            falling=0x00000000,     ///<A high-to-low transition (falling edge) on EPCAnTx will start the counter/timer.
            rising=0x00000001,     ///<A low-to-high transition (rising edge) on EPCAnTx will start the counter/timer.
        };
        namespace steselValC{
            constexpr MPL::Value<steselVal,steselVal::falling> falling{};
            constexpr MPL::Value<steselVal,steselVal::rising> rising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,steselVal> stesel{}; 
        ///Synchronous Input Trigger Enable. 
        enum class stenVal {
            disabled=0x00000000,     ///<Disable the input trigger (EPCAnTx). The EPCA counter/timer will continue to run if the RUN bit is set regardless of the value on the input trigger.
            enabled=0x00000001,     ///<Enable the input trigger (EPCAnTx). If RUN is set to 1, the EPCA counter/timer will start running when the selected input trigger (STSEL) meets the criteria set by STESEL. It will not stop running if the criteria is no longer met.
        };
        namespace stenValC{
            constexpr MPL::Value<stenVal,stenVal::disabled> disabled{};
            constexpr MPL::Value<stenVal,stenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,stenVal> sten{}; 
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
        using Addr = Register::Address<0x4000e1a0,0xffff0000,0,unsigned>;
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
        ///Channel 2 Capture/Compare Interrupt Flag. 
        enum class c2cciVal {
            notSet=0x00000000,     ///<A Channel 2 match or capture event did not occur.
            set=0x00000001,     ///<A Channel 2 match or capture event occurred.
        };
        namespace c2cciValC{
            constexpr MPL::Value<c2cciVal,c2cciVal::notSet> notSet{};
            constexpr MPL::Value<c2cciVal,c2cciVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,c2cciVal> c2cci{}; 
        ///Channel 3 Capture/Compare Interrupt Flag. 
        enum class c3cciVal {
            notSet=0x00000000,     ///<A Channel 3 match or capture event did not occur.
            set=0x00000001,     ///<A Channel 3 match or capture event occurred.
        };
        namespace c3cciValC{
            constexpr MPL::Value<c3cciVal,c3cciVal::notSet> notSet{};
            constexpr MPL::Value<c3cciVal,c3cciVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,c3cciVal> c3cci{}; 
        ///Channel 4 Capture/Compare Interrupt Flag. 
        enum class c4cciVal {
            notSet=0x00000000,     ///<A Channel 4 match or capture event did not occur.
            set=0x00000001,     ///<A Channel 4 match or capture event occurred.
        };
        namespace c4cciValC{
            constexpr MPL::Value<c4cciVal,c4cciVal::notSet> notSet{};
            constexpr MPL::Value<c4cciVal,c4cciVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,c4cciVal> c4cci{}; 
        ///Channel 5 Capture/Compare Interrupt Flag. 
        enum class c5cciVal {
            notSet=0x00000000,     ///<A Channel 5 match or capture event did not occur.
            set=0x00000001,     ///<A Channel 5 match or capture event occurred.
        };
        namespace c5cciValC{
            constexpr MPL::Value<c5cciVal,c5cciVal::notSet> notSet{};
            constexpr MPL::Value<c5cciVal,c5cciVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,c5cciVal> c5cci{}; 
        ///Counter/Timer Run. 
        enum class runVal {
            stop=0x00000000,     ///<Stop the EPCA Counter/Timer.
            start=0x00000001,     ///<Start the EPCA Counter/Timer.
        };
        namespace runValC{
            constexpr MPL::Value<runVal,runVal::stop> stop{};
            constexpr MPL::Value<runVal,runVal::start> start{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,runVal> run{}; 
        ///Counter/Timer Overflow/Limit Interrupt Flag. 
        enum class ovfiVal {
            notSet=0x00000000,     ///<An EPCA Counter/Timer overflow/limit event did not occur.
            set=0x00000001,     ///<An EPCA Counter/Timer overflow/limit event occurred.
        };
        namespace ovfiValC{
            constexpr MPL::Value<ovfiVal,ovfiVal::notSet> notSet{};
            constexpr MPL::Value<ovfiVal,ovfiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ovfiVal> ovfi{}; 
        ///Register Update Complete Flag. 
        enum class updcfVal {
            empty=0x00000000,     ///<An EPCA register update completed or is not pending.
            full=0x00000001,     ///<An EPCA register update has not completed and is still pending.
        };
        namespace updcfValC{
            constexpr MPL::Value<updcfVal,updcfVal::empty> empty{};
            constexpr MPL::Value<updcfVal,updcfVal::full> full{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,updcfVal> updcf{}; 
        ///Halt Input Interrupt Flag. 
        enum class haltiVal {
            notSet=0x00000000,     ///<The Halt input (PB_HDKill) was not asserted.
            set=0x00000001,     ///<The Halt input (PB_HDKill) was asserted.
        };
        namespace haltiValC{
            constexpr MPL::Value<haltiVal,haltiVal::notSet> notSet{};
            constexpr MPL::Value<haltiVal,haltiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,haltiVal> halti{}; 
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
        ///Channel 2 Intermediate Overflow Interrupt Flag. 
        enum class c2iovfiVal {
            notSet=0x00000000,     ///<Channel 2 did not count past the channel n-bit mode limit.
            set=0x00000001,     ///<Channel 2 counted past the channel n-bit mode limit.
        };
        namespace c2iovfiValC{
            constexpr MPL::Value<c2iovfiVal,c2iovfiVal::notSet> notSet{};
            constexpr MPL::Value<c2iovfiVal,c2iovfiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,c2iovfiVal> c2iovfi{}; 
        ///Channel 3 Intermediate Overflow Interrupt Flag. 
        enum class c3iovfiVal {
            notSet=0x00000000,     ///<Channel 3 did not count past the channel n-bit mode limit.
            set=0x00000001,     ///<Channel 3 counted past the channel n-bit mode limit.
        };
        namespace c3iovfiValC{
            constexpr MPL::Value<c3iovfiVal,c3iovfiVal::notSet> notSet{};
            constexpr MPL::Value<c3iovfiVal,c3iovfiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,c3iovfiVal> c3iovfi{}; 
        ///Channel 4 Intermediate Overflow Interrupt Flag. 
        enum class c4iovfiVal {
            notSet=0x00000000,     ///<Channel 4 did not count past the channel n-bit mode limit.
            set=0x00000001,     ///<Channel 4 counted past the channel n-bit mode limit.
        };
        namespace c4iovfiValC{
            constexpr MPL::Value<c4iovfiVal,c4iovfiVal::notSet> notSet{};
            constexpr MPL::Value<c4iovfiVal,c4iovfiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,c4iovfiVal> c4iovfi{}; 
        ///Channel 5 Intermediate Overflow Interrupt Flag. 
        enum class c5iovfiVal {
            notSet=0x00000000,     ///<Channel 5 did not count past the channel n-bit mode limit.
            set=0x00000001,     ///<Channel 5 counted past the channel n-bit mode limit.
        };
        namespace c5iovfiValC{
            constexpr MPL::Value<c5iovfiVal,c5iovfiVal::notSet> notSet{};
            constexpr MPL::Value<c5iovfiVal,c5iovfiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,c5iovfiVal> c5iovfi{}; 
    }
    namespace Nonecounter{    ///<Module Counter/Timer
        using Addr = Register::Address<0x4000e1b0,0xffff0000,0,unsigned>;
        ///Counter/Timer. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> counter{}; 
    }
    namespace Nonelimit{    ///<Module Upper Limit
        using Addr = Register::Address<0x4000e1c0,0xffff0000,0,unsigned>;
        ///Upper Limit. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> limit{}; 
    }
    namespace Nonelimitupd{    ///<Module Upper Limit Update Value
        using Addr = Register::Address<0x4000e1d0,0xffff0000,0,unsigned>;
        ///Module Upper Limit Update Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> limitupd{}; 
    }
    namespace Nonedtime{    ///<Phase Delay Time
        using Addr = Register::Address<0x4000e1e0,0xffff0000,0,unsigned>;
        ///X Phase Delay Time. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dtimex{}; 
        ///Y Phase Delay Time. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dtimey{}; 
    }
    namespace Nonedtarget{    ///<DMA Transfer Target
        using Addr = Register::Address<0x4000e200,0x00000000,0,unsigned>;
        ///DMA Transfer Target. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dtarget{}; 
    }
    namespace Nonemode0{    ///<Channel Capture/Compare Mode
        using Addr = Register::Address<0x4000e000,0xfffff880,0,unsigned>;
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
        ///Differential Signal Generator Enable. 
        enum class difgenVal {
            disabled=0x00000000,     ///<Disable the differential signal generator. The channel will output a single non-differential output.
            enabled=0x00000001,     ///<Enable the differential signal generator. The channel will output two differential outputs: X Phase (XPH) and Y Phase (YPH).
        };
        namespace difgenValC{
            constexpr MPL::Value<difgenVal,difgenVal::disabled> disabled{};
            constexpr MPL::Value<difgenVal,difgenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,difgenVal> difgen{}; 
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
        using Addr = Register::Address<0x4000e010,0xffffc010,0,unsigned>;
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
            notSet=0x00000000,     ///<A EPCA channel register update completed or is not pending.
            set=0x00000001,     ///<A EPCA channel register update has not completed and is still pending.
        };
        namespace cupdcfValC{
            constexpr MPL::Value<cupdcfVal,cupdcfVal::notSet> notSet{};
            constexpr MPL::Value<cupdcfVal,cupdcfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,cupdcfVal> cupdcf{}; 
        ///Differential Y Phase State. 
        enum class yphstVal {
            low=0x00000000,     ///<Set the Y Phase output state to low.
            high=0x00000001,     ///<Set the Y Phase output state to high.
        };
        namespace yphstValC{
            constexpr MPL::Value<yphstVal,yphstVal::low> low{};
            constexpr MPL::Value<yphstVal,yphstVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,yphstVal> yphst{}; 
        ///Active Channel Select. 
        enum class activephVal {
            yactive=0x00000000,     ///<The Y Phase is active and X Phase is inactive.
            xactive=0x00000001,     ///<The X Phase is active and Y Phase is inactive.
        };
        namespace activephValC{
            constexpr MPL::Value<activephVal,activephVal::yactive> yactive{};
            constexpr MPL::Value<activephVal,activephVal::xactive> xactive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,activephVal> activeph{}; 
        ///Differential X Phase State. 
        enum class xphstVal {
            low=0x00000000,     ///<Set the X Phase output state to low.
            high=0x00000001,     ///<Set the X Phase output state to high.
        };
        namespace xphstValC{
            constexpr MPL::Value<xphstVal,xphstVal::low> low{};
            constexpr MPL::Value<xphstVal,xphstVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,xphstVal> xphst{}; 
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
        ///Capture/Compare DMA Request Enable. 
        enum class ccdenVal {
            disabled=0x00000000,     ///<Do not request DMA data when a channel capture/compare event occurs.
            enabled=0x00000001,     ///<Request DMA data when a channel capture/compare event occurs.
        };
        namespace ccdenValC{
            constexpr MPL::Value<ccdenVal,ccdenVal::disabled> disabled{};
            constexpr MPL::Value<ccdenVal,ccdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ccdenVal> ccden{}; 
        ///Capture/Compare Synchronization Signal Enable. 
        enum class ccsenVal {
            disabled=0x00000000,     ///<Do not send a synchronization signal when a channel capture/compare event occurs.
            enabled=0x00000001,     ///<Send a synchronization signal when a channel capture/compare event occurs.
        };
        namespace ccsenValC{
            constexpr MPL::Value<ccsenVal,ccsenVal::disabled> disabled{};
            constexpr MPL::Value<ccsenVal,ccsenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ccsenVal> ccsen{}; 
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
        ///Intermediate Overflow DMA Request Enable. 
        enum class ciovfdenVal {
            disabled=0x00000000,     ///<Do not request DMA data when a channel intermediate overflow event occurs.
            enabled=0x00000001,     ///<Request DMA data when a channel intermediate overflow event occurs.
        };
        namespace ciovfdenValC{
            constexpr MPL::Value<ciovfdenVal,ciovfdenVal::disabled> disabled{};
            constexpr MPL::Value<ciovfdenVal,ciovfdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ciovfdenVal> ciovfden{}; 
        ///Intermediate Overflow Synchronization Signal Enable. 
        enum class ciovfsenVal {
            disabled=0x00000000,     ///<Do not send a synchronization signal when a channel intermediate overflow event occurs.
            enabled=0x00000001,     ///<Send a synchronization signal when a channel intermediate overflow occurs.
        };
        namespace ciovfsenValC{
            constexpr MPL::Value<ciovfsenVal,ciovfsenVal::disabled> disabled{};
            constexpr MPL::Value<ciovfsenVal,ciovfsenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ciovfsenVal> ciovfsen{}; 
    }
    namespace Noneccapv0{    ///<Channel Compare Value
        using Addr = Register::Address<0x4000e020,0xfffc0000,0,unsigned>;
        ///Channel Compare Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapv{}; 
    }
    namespace Noneccapvupd0{    ///<Channel Compare Update Value
        using Addr = Register::Address<0x4000e030,0xfffc0000,0,unsigned>;
        ///Channel Compare Update Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapvupd{}; 
    }
    namespace Nonemode1{    ///<Channel Capture/Compare Mode
        using Addr = Register::Address<0x4000e040,0xfffff880,0,unsigned>;
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
        ///Differential Signal Generator Enable. 
        enum class difgenVal {
            disabled=0x00000000,     ///<Disable the differential signal generator. The channel will output a single non-differential output.
            enabled=0x00000001,     ///<Enable the differential signal generator. The channel will output two differential outputs: X Phase (XPH) and Y Phase (YPH).
        };
        namespace difgenValC{
            constexpr MPL::Value<difgenVal,difgenVal::disabled> disabled{};
            constexpr MPL::Value<difgenVal,difgenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,difgenVal> difgen{}; 
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
        using Addr = Register::Address<0x4000e050,0xffffc010,0,unsigned>;
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
            notSet=0x00000000,     ///<A EPCA channel register update completed or is not pending.
            set=0x00000001,     ///<A EPCA channel register update has not completed and is still pending.
        };
        namespace cupdcfValC{
            constexpr MPL::Value<cupdcfVal,cupdcfVal::notSet> notSet{};
            constexpr MPL::Value<cupdcfVal,cupdcfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,cupdcfVal> cupdcf{}; 
        ///Differential Y Phase State. 
        enum class yphstVal {
            low=0x00000000,     ///<Set the Y Phase output state to low.
            high=0x00000001,     ///<Set the Y Phase output state to high.
        };
        namespace yphstValC{
            constexpr MPL::Value<yphstVal,yphstVal::low> low{};
            constexpr MPL::Value<yphstVal,yphstVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,yphstVal> yphst{}; 
        ///Active Channel Select. 
        enum class activephVal {
            yactive=0x00000000,     ///<The Y Phase is active and X Phase is inactive.
            xactive=0x00000001,     ///<The X Phase is active and Y Phase is inactive.
        };
        namespace activephValC{
            constexpr MPL::Value<activephVal,activephVal::yactive> yactive{};
            constexpr MPL::Value<activephVal,activephVal::xactive> xactive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,activephVal> activeph{}; 
        ///Differential X Phase State. 
        enum class xphstVal {
            low=0x00000000,     ///<Set the X Phase output state to low.
            high=0x00000001,     ///<Set the X Phase output state to high.
        };
        namespace xphstValC{
            constexpr MPL::Value<xphstVal,xphstVal::low> low{};
            constexpr MPL::Value<xphstVal,xphstVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,xphstVal> xphst{}; 
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
        ///Capture/Compare DMA Request Enable. 
        enum class ccdenVal {
            disabled=0x00000000,     ///<Do not request DMA data when a channel capture/compare event occurs.
            enabled=0x00000001,     ///<Request DMA data when a channel capture/compare event occurs.
        };
        namespace ccdenValC{
            constexpr MPL::Value<ccdenVal,ccdenVal::disabled> disabled{};
            constexpr MPL::Value<ccdenVal,ccdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ccdenVal> ccden{}; 
        ///Capture/Compare Synchronization Signal Enable. 
        enum class ccsenVal {
            disabled=0x00000000,     ///<Do not send a synchronization signal when a channel capture/compare event occurs.
            enabled=0x00000001,     ///<Send a synchronization signal when a channel capture/compare event occurs.
        };
        namespace ccsenValC{
            constexpr MPL::Value<ccsenVal,ccsenVal::disabled> disabled{};
            constexpr MPL::Value<ccsenVal,ccsenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ccsenVal> ccsen{}; 
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
        ///Intermediate Overflow DMA Request Enable. 
        enum class ciovfdenVal {
            disabled=0x00000000,     ///<Do not request DMA data when a channel intermediate overflow event occurs.
            enabled=0x00000001,     ///<Request DMA data when a channel intermediate overflow event occurs.
        };
        namespace ciovfdenValC{
            constexpr MPL::Value<ciovfdenVal,ciovfdenVal::disabled> disabled{};
            constexpr MPL::Value<ciovfdenVal,ciovfdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ciovfdenVal> ciovfden{}; 
        ///Intermediate Overflow Synchronization Signal Enable. 
        enum class ciovfsenVal {
            disabled=0x00000000,     ///<Do not send a synchronization signal when a channel intermediate overflow event occurs.
            enabled=0x00000001,     ///<Send a synchronization signal when a channel intermediate overflow occurs.
        };
        namespace ciovfsenValC{
            constexpr MPL::Value<ciovfsenVal,ciovfsenVal::disabled> disabled{};
            constexpr MPL::Value<ciovfsenVal,ciovfsenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ciovfsenVal> ciovfsen{}; 
    }
    namespace Noneccapv1{    ///<Channel Compare Value
        using Addr = Register::Address<0x4000e060,0xfffc0000,0,unsigned>;
        ///Channel Compare Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapv{}; 
    }
    namespace Noneccapvupd1{    ///<Channel Compare Update Value
        using Addr = Register::Address<0x4000e070,0xfffc0000,0,unsigned>;
        ///Channel Compare Update Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapvupd{}; 
    }
    namespace Nonemode2{    ///<Channel Capture/Compare Mode
        using Addr = Register::Address<0x4000e080,0xfffff880,0,unsigned>;
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
        ///Differential Signal Generator Enable. 
        enum class difgenVal {
            disabled=0x00000000,     ///<Disable the differential signal generator. The channel will output a single non-differential output.
            enabled=0x00000001,     ///<Enable the differential signal generator. The channel will output two differential outputs: X Phase (XPH) and Y Phase (YPH).
        };
        namespace difgenValC{
            constexpr MPL::Value<difgenVal,difgenVal::disabled> disabled{};
            constexpr MPL::Value<difgenVal,difgenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,difgenVal> difgen{}; 
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
    namespace Nonecontrol2{    ///<Channel Capture/Compare Control
        using Addr = Register::Address<0x4000e090,0xffffc010,0,unsigned>;
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
            notSet=0x00000000,     ///<A EPCA channel register update completed or is not pending.
            set=0x00000001,     ///<A EPCA channel register update has not completed and is still pending.
        };
        namespace cupdcfValC{
            constexpr MPL::Value<cupdcfVal,cupdcfVal::notSet> notSet{};
            constexpr MPL::Value<cupdcfVal,cupdcfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,cupdcfVal> cupdcf{}; 
        ///Differential Y Phase State. 
        enum class yphstVal {
            low=0x00000000,     ///<Set the Y Phase output state to low.
            high=0x00000001,     ///<Set the Y Phase output state to high.
        };
        namespace yphstValC{
            constexpr MPL::Value<yphstVal,yphstVal::low> low{};
            constexpr MPL::Value<yphstVal,yphstVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,yphstVal> yphst{}; 
        ///Active Channel Select. 
        enum class activephVal {
            yactive=0x00000000,     ///<The Y Phase is active and X Phase is inactive.
            xactive=0x00000001,     ///<The X Phase is active and Y Phase is inactive.
        };
        namespace activephValC{
            constexpr MPL::Value<activephVal,activephVal::yactive> yactive{};
            constexpr MPL::Value<activephVal,activephVal::xactive> xactive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,activephVal> activeph{}; 
        ///Differential X Phase State. 
        enum class xphstVal {
            low=0x00000000,     ///<Set the X Phase output state to low.
            high=0x00000001,     ///<Set the X Phase output state to high.
        };
        namespace xphstValC{
            constexpr MPL::Value<xphstVal,xphstVal::low> low{};
            constexpr MPL::Value<xphstVal,xphstVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,xphstVal> xphst{}; 
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
        ///Capture/Compare DMA Request Enable. 
        enum class ccdenVal {
            disabled=0x00000000,     ///<Do not request DMA data when a channel capture/compare event occurs.
            enabled=0x00000001,     ///<Request DMA data when a channel capture/compare event occurs.
        };
        namespace ccdenValC{
            constexpr MPL::Value<ccdenVal,ccdenVal::disabled> disabled{};
            constexpr MPL::Value<ccdenVal,ccdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ccdenVal> ccden{}; 
        ///Capture/Compare Synchronization Signal Enable. 
        enum class ccsenVal {
            disabled=0x00000000,     ///<Do not send a synchronization signal when a channel capture/compare event occurs.
            enabled=0x00000001,     ///<Send a synchronization signal when a channel capture/compare event occurs.
        };
        namespace ccsenValC{
            constexpr MPL::Value<ccsenVal,ccsenVal::disabled> disabled{};
            constexpr MPL::Value<ccsenVal,ccsenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ccsenVal> ccsen{}; 
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
        ///Intermediate Overflow DMA Request Enable. 
        enum class ciovfdenVal {
            disabled=0x00000000,     ///<Do not request DMA data when a channel intermediate overflow event occurs.
            enabled=0x00000001,     ///<Request DMA data when a channel intermediate overflow event occurs.
        };
        namespace ciovfdenValC{
            constexpr MPL::Value<ciovfdenVal,ciovfdenVal::disabled> disabled{};
            constexpr MPL::Value<ciovfdenVal,ciovfdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ciovfdenVal> ciovfden{}; 
        ///Intermediate Overflow Synchronization Signal Enable. 
        enum class ciovfsenVal {
            disabled=0x00000000,     ///<Do not send a synchronization signal when a channel intermediate overflow event occurs.
            enabled=0x00000001,     ///<Send a synchronization signal when a channel intermediate overflow occurs.
        };
        namespace ciovfsenValC{
            constexpr MPL::Value<ciovfsenVal,ciovfsenVal::disabled> disabled{};
            constexpr MPL::Value<ciovfsenVal,ciovfsenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ciovfsenVal> ciovfsen{}; 
    }
    namespace Noneccapv2{    ///<Channel Compare Value
        using Addr = Register::Address<0x4000e0a0,0xfffc0000,0,unsigned>;
        ///Channel Compare Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapv{}; 
    }
    namespace Noneccapvupd2{    ///<Channel Compare Update Value
        using Addr = Register::Address<0x4000e0b0,0xfffc0000,0,unsigned>;
        ///Channel Compare Update Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapvupd{}; 
    }
    namespace Nonemode3{    ///<Channel Capture/Compare Mode
        using Addr = Register::Address<0x4000e0c0,0xfffff880,0,unsigned>;
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
        ///Differential Signal Generator Enable. 
        enum class difgenVal {
            disabled=0x00000000,     ///<Disable the differential signal generator. The channel will output a single non-differential output.
            enabled=0x00000001,     ///<Enable the differential signal generator. The channel will output two differential outputs: X Phase (XPH) and Y Phase (YPH).
        };
        namespace difgenValC{
            constexpr MPL::Value<difgenVal,difgenVal::disabled> disabled{};
            constexpr MPL::Value<difgenVal,difgenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,difgenVal> difgen{}; 
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
    namespace Nonecontrol3{    ///<Channel Capture/Compare Control
        using Addr = Register::Address<0x4000e0d0,0xffffc010,0,unsigned>;
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
            notSet=0x00000000,     ///<A EPCA channel register update completed or is not pending.
            set=0x00000001,     ///<A EPCA channel register update has not completed and is still pending.
        };
        namespace cupdcfValC{
            constexpr MPL::Value<cupdcfVal,cupdcfVal::notSet> notSet{};
            constexpr MPL::Value<cupdcfVal,cupdcfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,cupdcfVal> cupdcf{}; 
        ///Differential Y Phase State. 
        enum class yphstVal {
            low=0x00000000,     ///<Set the Y Phase output state to low.
            high=0x00000001,     ///<Set the Y Phase output state to high.
        };
        namespace yphstValC{
            constexpr MPL::Value<yphstVal,yphstVal::low> low{};
            constexpr MPL::Value<yphstVal,yphstVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,yphstVal> yphst{}; 
        ///Active Channel Select. 
        enum class activephVal {
            yactive=0x00000000,     ///<The Y Phase is active and X Phase is inactive.
            xactive=0x00000001,     ///<The X Phase is active and Y Phase is inactive.
        };
        namespace activephValC{
            constexpr MPL::Value<activephVal,activephVal::yactive> yactive{};
            constexpr MPL::Value<activephVal,activephVal::xactive> xactive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,activephVal> activeph{}; 
        ///Differential X Phase State. 
        enum class xphstVal {
            low=0x00000000,     ///<Set the X Phase output state to low.
            high=0x00000001,     ///<Set the X Phase output state to high.
        };
        namespace xphstValC{
            constexpr MPL::Value<xphstVal,xphstVal::low> low{};
            constexpr MPL::Value<xphstVal,xphstVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,xphstVal> xphst{}; 
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
        ///Capture/Compare DMA Request Enable. 
        enum class ccdenVal {
            disabled=0x00000000,     ///<Do not request DMA data when a channel capture/compare event occurs.
            enabled=0x00000001,     ///<Request DMA data when a channel capture/compare event occurs.
        };
        namespace ccdenValC{
            constexpr MPL::Value<ccdenVal,ccdenVal::disabled> disabled{};
            constexpr MPL::Value<ccdenVal,ccdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ccdenVal> ccden{}; 
        ///Capture/Compare Synchronization Signal Enable. 
        enum class ccsenVal {
            disabled=0x00000000,     ///<Do not send a synchronization signal when a channel capture/compare event occurs.
            enabled=0x00000001,     ///<Send a synchronization signal when a channel capture/compare event occurs.
        };
        namespace ccsenValC{
            constexpr MPL::Value<ccsenVal,ccsenVal::disabled> disabled{};
            constexpr MPL::Value<ccsenVal,ccsenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ccsenVal> ccsen{}; 
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
        ///Intermediate Overflow DMA Request Enable. 
        enum class ciovfdenVal {
            disabled=0x00000000,     ///<Do not request DMA data when a channel intermediate overflow event occurs.
            enabled=0x00000001,     ///<Request DMA data when a channel intermediate overflow event occurs.
        };
        namespace ciovfdenValC{
            constexpr MPL::Value<ciovfdenVal,ciovfdenVal::disabled> disabled{};
            constexpr MPL::Value<ciovfdenVal,ciovfdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ciovfdenVal> ciovfden{}; 
        ///Intermediate Overflow Synchronization Signal Enable. 
        enum class ciovfsenVal {
            disabled=0x00000000,     ///<Do not send a synchronization signal when a channel intermediate overflow event occurs.
            enabled=0x00000001,     ///<Send a synchronization signal when a channel intermediate overflow occurs.
        };
        namespace ciovfsenValC{
            constexpr MPL::Value<ciovfsenVal,ciovfsenVal::disabled> disabled{};
            constexpr MPL::Value<ciovfsenVal,ciovfsenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ciovfsenVal> ciovfsen{}; 
    }
    namespace Noneccapv3{    ///<Channel Compare Value
        using Addr = Register::Address<0x4000e0e0,0xfffc0000,0,unsigned>;
        ///Channel Compare Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapv{}; 
    }
    namespace Noneccapvupd3{    ///<Channel Compare Update Value
        using Addr = Register::Address<0x4000e0f0,0xfffc0000,0,unsigned>;
        ///Channel Compare Update Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapvupd{}; 
    }
    namespace Nonemode4{    ///<Channel Capture/Compare Mode
        using Addr = Register::Address<0x4000e100,0xfffff880,0,unsigned>;
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
        ///Differential Signal Generator Enable. 
        enum class difgenVal {
            disabled=0x00000000,     ///<Disable the differential signal generator. The channel will output a single non-differential output.
            enabled=0x00000001,     ///<Enable the differential signal generator. The channel will output two differential outputs: X Phase (XPH) and Y Phase (YPH).
        };
        namespace difgenValC{
            constexpr MPL::Value<difgenVal,difgenVal::disabled> disabled{};
            constexpr MPL::Value<difgenVal,difgenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,difgenVal> difgen{}; 
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
    namespace Nonecontrol4{    ///<Channel Capture/Compare Control
        using Addr = Register::Address<0x4000e110,0xffffc010,0,unsigned>;
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
            notSet=0x00000000,     ///<A EPCA channel register update completed or is not pending.
            set=0x00000001,     ///<A EPCA channel register update has not completed and is still pending.
        };
        namespace cupdcfValC{
            constexpr MPL::Value<cupdcfVal,cupdcfVal::notSet> notSet{};
            constexpr MPL::Value<cupdcfVal,cupdcfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,cupdcfVal> cupdcf{}; 
        ///Differential Y Phase State. 
        enum class yphstVal {
            low=0x00000000,     ///<Set the Y Phase output state to low.
            high=0x00000001,     ///<Set the Y Phase output state to high.
        };
        namespace yphstValC{
            constexpr MPL::Value<yphstVal,yphstVal::low> low{};
            constexpr MPL::Value<yphstVal,yphstVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,yphstVal> yphst{}; 
        ///Active Channel Select. 
        enum class activephVal {
            yactive=0x00000000,     ///<The Y Phase is active and X Phase is inactive.
            xactive=0x00000001,     ///<The X Phase is active and Y Phase is inactive.
        };
        namespace activephValC{
            constexpr MPL::Value<activephVal,activephVal::yactive> yactive{};
            constexpr MPL::Value<activephVal,activephVal::xactive> xactive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,activephVal> activeph{}; 
        ///Differential X Phase State. 
        enum class xphstVal {
            low=0x00000000,     ///<Set the X Phase output state to low.
            high=0x00000001,     ///<Set the X Phase output state to high.
        };
        namespace xphstValC{
            constexpr MPL::Value<xphstVal,xphstVal::low> low{};
            constexpr MPL::Value<xphstVal,xphstVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,xphstVal> xphst{}; 
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
        ///Capture/Compare DMA Request Enable. 
        enum class ccdenVal {
            disabled=0x00000000,     ///<Do not request DMA data when a channel capture/compare event occurs.
            enabled=0x00000001,     ///<Request DMA data when a channel capture/compare event occurs.
        };
        namespace ccdenValC{
            constexpr MPL::Value<ccdenVal,ccdenVal::disabled> disabled{};
            constexpr MPL::Value<ccdenVal,ccdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ccdenVal> ccden{}; 
        ///Capture/Compare Synchronization Signal Enable. 
        enum class ccsenVal {
            disabled=0x00000000,     ///<Do not send a synchronization signal when a channel capture/compare event occurs.
            enabled=0x00000001,     ///<Send a synchronization signal when a channel capture/compare event occurs.
        };
        namespace ccsenValC{
            constexpr MPL::Value<ccsenVal,ccsenVal::disabled> disabled{};
            constexpr MPL::Value<ccsenVal,ccsenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ccsenVal> ccsen{}; 
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
        ///Intermediate Overflow DMA Request Enable. 
        enum class ciovfdenVal {
            disabled=0x00000000,     ///<Do not request DMA data when a channel intermediate overflow event occurs.
            enabled=0x00000001,     ///<Request DMA data when a channel intermediate overflow event occurs.
        };
        namespace ciovfdenValC{
            constexpr MPL::Value<ciovfdenVal,ciovfdenVal::disabled> disabled{};
            constexpr MPL::Value<ciovfdenVal,ciovfdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ciovfdenVal> ciovfden{}; 
        ///Intermediate Overflow Synchronization Signal Enable. 
        enum class ciovfsenVal {
            disabled=0x00000000,     ///<Do not send a synchronization signal when a channel intermediate overflow event occurs.
            enabled=0x00000001,     ///<Send a synchronization signal when a channel intermediate overflow occurs.
        };
        namespace ciovfsenValC{
            constexpr MPL::Value<ciovfsenVal,ciovfsenVal::disabled> disabled{};
            constexpr MPL::Value<ciovfsenVal,ciovfsenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ciovfsenVal> ciovfsen{}; 
    }
    namespace Noneccapv4{    ///<Channel Compare Value
        using Addr = Register::Address<0x4000e120,0xfffc0000,0,unsigned>;
        ///Channel Compare Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapv{}; 
    }
    namespace Noneccapvupd4{    ///<Channel Compare Update Value
        using Addr = Register::Address<0x4000e130,0xfffc0000,0,unsigned>;
        ///Channel Compare Update Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapvupd{}; 
    }
    namespace Nonemode5{    ///<Channel Capture/Compare Mode
        using Addr = Register::Address<0x4000e140,0xfffff880,0,unsigned>;
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
        ///Differential Signal Generator Enable. 
        enum class difgenVal {
            disabled=0x00000000,     ///<Disable the differential signal generator. The channel will output a single non-differential output.
            enabled=0x00000001,     ///<Enable the differential signal generator. The channel will output two differential outputs: X Phase (XPH) and Y Phase (YPH).
        };
        namespace difgenValC{
            constexpr MPL::Value<difgenVal,difgenVal::disabled> disabled{};
            constexpr MPL::Value<difgenVal,difgenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,difgenVal> difgen{}; 
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
    namespace Nonecontrol5{    ///<Channel Capture/Compare Control
        using Addr = Register::Address<0x4000e150,0xffffc010,0,unsigned>;
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
            notSet=0x00000000,     ///<A EPCA channel register update completed or is not pending.
            set=0x00000001,     ///<A EPCA channel register update has not completed and is still pending.
        };
        namespace cupdcfValC{
            constexpr MPL::Value<cupdcfVal,cupdcfVal::notSet> notSet{};
            constexpr MPL::Value<cupdcfVal,cupdcfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,cupdcfVal> cupdcf{}; 
        ///Differential Y Phase State. 
        enum class yphstVal {
            low=0x00000000,     ///<Set the Y Phase output state to low.
            high=0x00000001,     ///<Set the Y Phase output state to high.
        };
        namespace yphstValC{
            constexpr MPL::Value<yphstVal,yphstVal::low> low{};
            constexpr MPL::Value<yphstVal,yphstVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,yphstVal> yphst{}; 
        ///Active Channel Select. 
        enum class activephVal {
            yactive=0x00000000,     ///<The Y Phase is active and X Phase is inactive.
            xactive=0x00000001,     ///<The X Phase is active and Y Phase is inactive.
        };
        namespace activephValC{
            constexpr MPL::Value<activephVal,activephVal::yactive> yactive{};
            constexpr MPL::Value<activephVal,activephVal::xactive> xactive{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,activephVal> activeph{}; 
        ///Differential X Phase State. 
        enum class xphstVal {
            low=0x00000000,     ///<Set the X Phase output state to low.
            high=0x00000001,     ///<Set the X Phase output state to high.
        };
        namespace xphstValC{
            constexpr MPL::Value<xphstVal,xphstVal::low> low{};
            constexpr MPL::Value<xphstVal,xphstVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,xphstVal> xphst{}; 
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
        ///Capture/Compare DMA Request Enable. 
        enum class ccdenVal {
            disabled=0x00000000,     ///<Do not request DMA data when a channel capture/compare event occurs.
            enabled=0x00000001,     ///<Request DMA data when a channel capture/compare event occurs.
        };
        namespace ccdenValC{
            constexpr MPL::Value<ccdenVal,ccdenVal::disabled> disabled{};
            constexpr MPL::Value<ccdenVal,ccdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ccdenVal> ccden{}; 
        ///Capture/Compare Synchronization Signal Enable. 
        enum class ccsenVal {
            disabled=0x00000000,     ///<Do not send a synchronization signal when a channel capture/compare event occurs.
            enabled=0x00000001,     ///<Send a synchronization signal when a channel capture/compare event occurs.
        };
        namespace ccsenValC{
            constexpr MPL::Value<ccsenVal,ccsenVal::disabled> disabled{};
            constexpr MPL::Value<ccsenVal,ccsenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ccsenVal> ccsen{}; 
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
        ///Intermediate Overflow DMA Request Enable. 
        enum class ciovfdenVal {
            disabled=0x00000000,     ///<Do not request DMA data when a channel intermediate overflow event occurs.
            enabled=0x00000001,     ///<Request DMA data when a channel intermediate overflow event occurs.
        };
        namespace ciovfdenValC{
            constexpr MPL::Value<ciovfdenVal,ciovfdenVal::disabled> disabled{};
            constexpr MPL::Value<ciovfdenVal,ciovfdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ciovfdenVal> ciovfden{}; 
        ///Intermediate Overflow Synchronization Signal Enable. 
        enum class ciovfsenVal {
            disabled=0x00000000,     ///<Do not send a synchronization signal when a channel intermediate overflow event occurs.
            enabled=0x00000001,     ///<Send a synchronization signal when a channel intermediate overflow occurs.
        };
        namespace ciovfsenValC{
            constexpr MPL::Value<ciovfsenVal,ciovfsenVal::disabled> disabled{};
            constexpr MPL::Value<ciovfsenVal,ciovfsenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ciovfsenVal> ciovfsen{}; 
    }
    namespace Noneccapv5{    ///<Channel Compare Value
        using Addr = Register::Address<0x4000e160,0xfffc0000,0,unsigned>;
        ///Channel Compare Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapv{}; 
    }
    namespace Noneccapvupd5{    ///<Channel Compare Update Value
        using Addr = Register::Address<0x4000e170,0xfffc0000,0,unsigned>;
        ///Channel Compare Update Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapvupd{}; 
    }
}
