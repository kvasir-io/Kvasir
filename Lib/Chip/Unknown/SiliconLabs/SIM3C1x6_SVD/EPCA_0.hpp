#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//None
    namespace Epca0Mode{    ///<Module Operating Mode
        using Addr = Register::Address<0x4000e180,0xe4002000,0x00000000,unsigned>;
        ///Input Clock Divider. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> clkdiv{}; 
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
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::apb> apb{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::timer0> timer0{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::hlEci> hlEci{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::extoscn> extoscn{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::eci> eci{};
        }
        ///High Drive Port Bank Output Select. 
        enum class HdoselVal {
            threeDiff=0x00000000,     ///<Select three differential outputs from Channels 3, 4, and 5 for the High Drive pins.
            twoDiff=0x00000001,     ///<Select the differential outputs from Channels 4 and 5 and non-differential outputs from Channels 2 and 3 for the High Drive pins.
            oneDiff=0x00000002,     ///<Select the differential output from Channel 5 and non-differential outputs from Channels 1-4 for the High Drive pins.
            noDiff=0x00000003,     ///<Select the non-differential channel outputs (Channels 0-5) for the High Drive pins.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,HdoselVal> hdosel{}; 
        namespace HdoselValC{
            constexpr Register::FieldValue<decltype(hdosel)::Type,HdoselVal::threeDiff> threeDiff{};
            constexpr Register::FieldValue<decltype(hdosel)::Type,HdoselVal::twoDiff> twoDiff{};
            constexpr Register::FieldValue<decltype(hdosel)::Type,HdoselVal::oneDiff> oneDiff{};
            constexpr Register::FieldValue<decltype(hdosel)::Type,HdoselVal::noDiff> noDiff{};
        }
        ///DMA Write End Index. 
        enum class DendVal {
            limit=0x00000000,     ///<Set the last register in a DMA write transfer to LIMITUPD.
            ch0=0x00000001,     ///<Set the last register in a DMA write transfer to Channel 0 CCAPVUPD.
            ch1=0x00000002,     ///<Set the last register in a DMA write transfer to Channel 1 CCAPVUPD.
            ch2=0x00000003,     ///<Set the last register in a DMA write transfer to Channel 2 CCAPVUPD.
            ch3=0x00000004,     ///<Set the last register in a DMA write transfer to Channel 3 CCAPVUPD.
            ch4=0x00000005,     ///<Set the last register in a DMA write transfer to Channel 4 CCAPVUPD.
            ch5=0x00000006,     ///<Set the last register in a DMA write transfer to Channel 5 CCAPVUPD.
            empty=0x00000007,     ///<Empty slot.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,DendVal> dend{}; 
        namespace DendValC{
            constexpr Register::FieldValue<decltype(dend)::Type,DendVal::limit> limit{};
            constexpr Register::FieldValue<decltype(dend)::Type,DendVal::ch0> ch0{};
            constexpr Register::FieldValue<decltype(dend)::Type,DendVal::ch1> ch1{};
            constexpr Register::FieldValue<decltype(dend)::Type,DendVal::ch2> ch2{};
            constexpr Register::FieldValue<decltype(dend)::Type,DendVal::ch3> ch3{};
            constexpr Register::FieldValue<decltype(dend)::Type,DendVal::ch4> ch4{};
            constexpr Register::FieldValue<decltype(dend)::Type,DendVal::ch5> ch5{};
            constexpr Register::FieldValue<decltype(dend)::Type,DendVal::empty> empty{};
        }
        ///DMA Write Transfer Pointer. 
        enum class DptrVal {
            limit=0x00000000,     ///<The DMA channel will write to LIMITUPD next.
            ch0=0x00000001,     ///<The DMA channel will write to Channel 0 CCAPVUPD next.
            ch1=0x00000002,     ///<The DMA channel will write to Channel 1 CCAPVUPD next.
            ch2=0x00000003,     ///<The DMA channel will write to Channel 2 CCAPVUPD next.
            ch3=0x00000004,     ///<The DMA channel will write to Channel 3 CCAPVUPD next.
            ch4=0x00000005,     ///<The DMA channel will write to Channel 4 CCAPVUPD next.
            ch5=0x00000006,     ///<The DMA channel will write to Channel 5 CCAPVUPD next.
            empty=0x00000007,     ///<Empty slot.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,19),Register::ReadWriteAccess,DptrVal> dptr{}; 
        namespace DptrValC{
            constexpr Register::FieldValue<decltype(dptr)::Type,DptrVal::limit> limit{};
            constexpr Register::FieldValue<decltype(dptr)::Type,DptrVal::ch0> ch0{};
            constexpr Register::FieldValue<decltype(dptr)::Type,DptrVal::ch1> ch1{};
            constexpr Register::FieldValue<decltype(dptr)::Type,DptrVal::ch2> ch2{};
            constexpr Register::FieldValue<decltype(dptr)::Type,DptrVal::ch3> ch3{};
            constexpr Register::FieldValue<decltype(dptr)::Type,DptrVal::ch4> ch4{};
            constexpr Register::FieldValue<decltype(dptr)::Type,DptrVal::ch5> ch5{};
            constexpr Register::FieldValue<decltype(dptr)::Type,DptrVal::empty> empty{};
        }
        ///DMA Target Start Index. 
        enum class DstartVal {
            limit=0x00000000,     ///<Set the first register in a DMA write transfer to LIMITUPD.
            ch0=0x00000001,     ///<Set the first register in a DMA write transfer to Channel 0 CCAPVUPD.
            ch1=0x00000002,     ///<Set the first register in a DMA write transfer to Channel 1 CCAPVUPD.
            ch2=0x00000003,     ///<Set the first register in a DMA write transfer to Channel 2 CCAPVUPD.
            ch3=0x00000004,     ///<Set the first register in a DMA write transfer to Channel 3 CCAPVUPD.
            ch4=0x00000005,     ///<Set the first register in a DMA write transfer to Channel 4 CCAPVUPD.
            ch5=0x00000006,     ///<Set the first register in a DMA write transfer to Channel 5 CCAPVUPD.
            empty=0x00000007,     ///<Empty slot.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,22),Register::ReadWriteAccess,DstartVal> dstart{}; 
        namespace DstartValC{
            constexpr Register::FieldValue<decltype(dstart)::Type,DstartVal::limit> limit{};
            constexpr Register::FieldValue<decltype(dstart)::Type,DstartVal::ch0> ch0{};
            constexpr Register::FieldValue<decltype(dstart)::Type,DstartVal::ch1> ch1{};
            constexpr Register::FieldValue<decltype(dstart)::Type,DstartVal::ch2> ch2{};
            constexpr Register::FieldValue<decltype(dstart)::Type,DstartVal::ch3> ch3{};
            constexpr Register::FieldValue<decltype(dstart)::Type,DstartVal::ch4> ch4{};
            constexpr Register::FieldValue<decltype(dstart)::Type,DstartVal::ch5> ch5{};
            constexpr Register::FieldValue<decltype(dstart)::Type,DstartVal::empty> empty{};
        }
        ///DMA Busy Flag. 
        enum class DbusyfVal {
            idle=0x00000000,     ///<The DMA channel is not servicing an EPCA control transfer.
            busy=0x00000001,     ///<The DMA channel is busy servicing an EPCA control transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,DbusyfVal> dbusyf{}; 
        namespace DbusyfValC{
            constexpr Register::FieldValue<decltype(dbusyf)::Type,DbusyfVal::idle> idle{};
            constexpr Register::FieldValue<decltype(dbusyf)::Type,DbusyfVal::busy> busy{};
        }
        ///Standard Port Bank Output Select. 
        enum class StdoselVal {
            noDiff=0x00000000,     ///<Select the non-differential channel outputs (Channels 0-5) for the standard PB pins.
            oneDiff=0x00000001,     ///<Select the differential output from Channel 2 and non-differential outputs from Channels 0, 1, 3, and 4 for the standard PB pins.
            twoDiff=0x00000002,     ///<Select the differential outputs from Channels 1 and 2 and non-differential outputs from Channels 0 and 3 for the standard PB pins.
            threeDiff=0x00000003,     ///<Select three differential outputs from Channels 0, 1, and 2 for the standard PB pins.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,27),Register::ReadWriteAccess,StdoselVal> stdosel{}; 
        namespace StdoselValC{
            constexpr Register::FieldValue<decltype(stdosel)::Type,StdoselVal::noDiff> noDiff{};
            constexpr Register::FieldValue<decltype(stdosel)::Type,StdoselVal::oneDiff> oneDiff{};
            constexpr Register::FieldValue<decltype(stdosel)::Type,StdoselVal::twoDiff> twoDiff{};
            constexpr Register::FieldValue<decltype(stdosel)::Type,StdoselVal::threeDiff> threeDiff{};
        }
    }
    namespace Epca0Control{    ///<Module Control
        using Addr = Register::Address<0x4000e190,0x001f8580,0x00000000,unsigned>;
        ///EPCA Counter Overflow/Limit Interrupt Enable. 
        enum class OvfienVal {
            disabled=0x00000000,     ///<Disable the EPCA counter overflow/limit event interrupt.
            enabled=0x00000001,     ///<Enable the EPCA counter overflow/limit event interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,OvfienVal> ovfien{}; 
        namespace OvfienValC{
            constexpr Register::FieldValue<decltype(ovfien)::Type,OvfienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ovfien)::Type,OvfienVal::enabled> enabled{};
        }
        ///EPCA Counter Overflow/Limit DMA Request Enable. 
        enum class OvfdenVal {
            disabled=0x00000000,     ///<Do not request DMA data when a EPCA counter overflow/limit event occurs.
            enabled=0x00000001,     ///<Request DMA data when a EPCA counter overflow/limit event occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,OvfdenVal> ovfden{}; 
        namespace OvfdenValC{
            constexpr Register::FieldValue<decltype(ovfden)::Type,OvfdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ovfden)::Type,OvfdenVal::enabled> enabled{};
        }
        ///EPCA Counter Overflow/Limit Synchronization Signal Enable. 
        enum class OvfsenVal {
            disabled=0x00000000,     ///<Do not send a synchronization signal when a EPCA counter overflow/limit event occurs.
            enabled=0x00000001,     ///<Send a synchronization signal when a EPCA counter overflow/limit event occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,OvfsenVal> ovfsen{}; 
        namespace OvfsenValC{
            constexpr Register::FieldValue<decltype(ovfsen)::Type,OvfsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ovfsen)::Type,OvfsenVal::enabled> enabled{};
        }
        ///EPCA Halt Input Interrupt Enable. 
        enum class HaltienVal {
            disabled=0x00000000,     ///<Do not generate an interrupt if the EPCA halt input is high.
            enabled=0x00000001,     ///<Generate an interrupt if the EPCA halt input is high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,HaltienVal> haltien{}; 
        namespace HaltienValC{
            constexpr Register::FieldValue<decltype(haltien)::Type,HaltienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(haltien)::Type,HaltienVal::enabled> enabled{};
        }
        ///Internal Register Update Inhibit. 
        enum class NoupdVal {
            inactive=0x00000000,     ///<The EPCA registers will automatically load any new update values after an overflow/limit event occurs.
            active=0x00000001,     ///<The EPCA registers will not load any new update values after an overflow/limit event occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,NoupdVal> noupd{}; 
        namespace NoupdValC{
            constexpr Register::FieldValue<decltype(noupd)::Type,NoupdVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(noupd)::Type,NoupdVal::active> active{};
        }
        ///Idle Bypass Enable. 
        enum class IdlebenVal {
            disabled=0x00000000,     ///<The EPCA module will stop running when the core halts (idle).
            enabled=0x00000001,     ///<The EPCA module will continue normal operation when the core halts (idle).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,IdlebenVal> idleben{}; 
        namespace IdlebenValC{
            constexpr Register::FieldValue<decltype(idleben)::Type,IdlebenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(idleben)::Type,IdlebenVal::enabled> enabled{};
        }
        ///EPCA Debug Mode. 
        enum class DbgmdVal {
            halt=0x00000000,     ///<A debug breakpoint will stop the EPCA counter/timer.
            run=0x00000001,     ///<The EPCA will continue to operate while the core is halted in debug mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DbgmdVal> dbgmd{}; 
        namespace DbgmdValC{
            constexpr Register::FieldValue<decltype(dbgmd)::Type,DbgmdVal::halt> halt{};
            constexpr Register::FieldValue<decltype(dbgmd)::Type,DbgmdVal::run> run{};
        }
        ///Halt Input Enable. 
        enum class HaltenVal {
            disabled=0x00000000,     ///<The Halt input (PB_HDKill) does not affect the EPCA counter/timer.
            enabled=0x00000001,     ///<An assertion of the Halt input (PB_HDKill) will stop the EPCA counter/timer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,HaltenVal> halten{}; 
        namespace HaltenValC{
            constexpr Register::FieldValue<decltype(halten)::Type,HaltenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(halten)::Type,HaltenVal::enabled> enabled{};
        }
        ///Synchronous Input Trigger Select. 
        enum class StselVal {
            epcant0=0x00000000,     ///<Select input trigger 0, EPCAnT0 (Comparator 0 Output).
            epcant1=0x00000001,     ///<Select input trigger 1, EPCAnT1 (Comparator 1 Output).
            epcant2=0x00000002,     ///<Select input trigger 2,  EPCAnT2 (Timer 0 High Overflow ).
            epcant3=0x00000003,     ///<Select input trigger 3, EPCAnT3 (Timer 1 High Overflow).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,StselVal> stsel{}; 
        namespace StselValC{
            constexpr Register::FieldValue<decltype(stsel)::Type,StselVal::epcant0> epcant0{};
            constexpr Register::FieldValue<decltype(stsel)::Type,StselVal::epcant1> epcant1{};
            constexpr Register::FieldValue<decltype(stsel)::Type,StselVal::epcant2> epcant2{};
            constexpr Register::FieldValue<decltype(stsel)::Type,StselVal::epcant3> epcant3{};
        }
        ///Synchronous Input Trigger Edge Select. 
        enum class SteselVal {
            falling=0x00000000,     ///<A high-to-low transition (falling edge) on EPCAnTx will start the counter/timer.
            rising=0x00000001,     ///<A low-to-high transition (rising edge) on EPCAnTx will start the counter/timer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,SteselVal> stesel{}; 
        namespace SteselValC{
            constexpr Register::FieldValue<decltype(stesel)::Type,SteselVal::falling> falling{};
            constexpr Register::FieldValue<decltype(stesel)::Type,SteselVal::rising> rising{};
        }
        ///Synchronous Input Trigger Enable. 
        enum class StenVal {
            disabled=0x00000000,     ///<Disable the input trigger (EPCAnTx). The EPCA counter/timer will continue to run if the RUN bit is set regardless of the value on the input trigger.
            enabled=0x00000001,     ///<Enable the input trigger (EPCAnTx). If RUN is set to 1, the EPCA counter/timer will start running when the selected input trigger (STSEL) meets the criteria set by STESEL. It will not stop running if the criteria is no longer met.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StenVal> sten{}; 
        namespace StenValC{
            constexpr Register::FieldValue<decltype(sten)::Type,StenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sten)::Type,StenVal::enabled> enabled{};
        }
        ///Clock Divider Output State. 
        enum class DivstVal {
            outputHigh=0x00000000,     ///<The clock divider is currently in the first half-cycle.
            outputLow=0x00000001,     ///<The clock divider is currently in the second half-cycle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,DivstVal> divst{}; 
        namespace DivstValC{
            constexpr Register::FieldValue<decltype(divst)::Type,DivstVal::outputHigh> outputHigh{};
            constexpr Register::FieldValue<decltype(divst)::Type,DivstVal::outputLow> outputLow{};
        }
        ///Current Clock Divider Count. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,22),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Epca0Status{    ///<Module Status
        using Addr = Register::Address<0x4000e1a0,0xffff0000,0x00000000,unsigned>;
        ///Channel 0 Capture/Compare Interrupt Flag. 
        enum class C0cciVal {
            notSet=0x00000000,     ///<A Channel 0 match or capture event did not occur.
            set=0x00000001,     ///<A Channel 0 match or capture event occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,C0cciVal> c0cci{}; 
        namespace C0cciValC{
            constexpr Register::FieldValue<decltype(c0cci)::Type,C0cciVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(c0cci)::Type,C0cciVal::set> set{};
        }
        ///Channel 1 Capture/Compare Interrupt Flag. 
        enum class C1cciVal {
            notSet=0x00000000,     ///<A Channel 1 match or capture event did not occur.
            set=0x00000001,     ///<A Channel 1 match or capture event occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,C1cciVal> c1cci{}; 
        namespace C1cciValC{
            constexpr Register::FieldValue<decltype(c1cci)::Type,C1cciVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(c1cci)::Type,C1cciVal::set> set{};
        }
        ///Channel 2 Capture/Compare Interrupt Flag. 
        enum class C2cciVal {
            notSet=0x00000000,     ///<A Channel 2 match or capture event did not occur.
            set=0x00000001,     ///<A Channel 2 match or capture event occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,C2cciVal> c2cci{}; 
        namespace C2cciValC{
            constexpr Register::FieldValue<decltype(c2cci)::Type,C2cciVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(c2cci)::Type,C2cciVal::set> set{};
        }
        ///Channel 3 Capture/Compare Interrupt Flag. 
        enum class C3cciVal {
            notSet=0x00000000,     ///<A Channel 3 match or capture event did not occur.
            set=0x00000001,     ///<A Channel 3 match or capture event occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,C3cciVal> c3cci{}; 
        namespace C3cciValC{
            constexpr Register::FieldValue<decltype(c3cci)::Type,C3cciVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(c3cci)::Type,C3cciVal::set> set{};
        }
        ///Channel 4 Capture/Compare Interrupt Flag. 
        enum class C4cciVal {
            notSet=0x00000000,     ///<A Channel 4 match or capture event did not occur.
            set=0x00000001,     ///<A Channel 4 match or capture event occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,C4cciVal> c4cci{}; 
        namespace C4cciValC{
            constexpr Register::FieldValue<decltype(c4cci)::Type,C4cciVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(c4cci)::Type,C4cciVal::set> set{};
        }
        ///Channel 5 Capture/Compare Interrupt Flag. 
        enum class C5cciVal {
            notSet=0x00000000,     ///<A Channel 5 match or capture event did not occur.
            set=0x00000001,     ///<A Channel 5 match or capture event occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,C5cciVal> c5cci{}; 
        namespace C5cciValC{
            constexpr Register::FieldValue<decltype(c5cci)::Type,C5cciVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(c5cci)::Type,C5cciVal::set> set{};
        }
        ///Counter/Timer Run. 
        enum class RunVal {
            stop=0x00000000,     ///<Stop the EPCA Counter/Timer.
            start=0x00000001,     ///<Start the EPCA Counter/Timer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::stop> stop{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::start> start{};
        }
        ///Counter/Timer Overflow/Limit Interrupt Flag. 
        enum class OvfiVal {
            notSet=0x00000000,     ///<An EPCA Counter/Timer overflow/limit event did not occur.
            set=0x00000001,     ///<An EPCA Counter/Timer overflow/limit event occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,OvfiVal> ovfi{}; 
        namespace OvfiValC{
            constexpr Register::FieldValue<decltype(ovfi)::Type,OvfiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(ovfi)::Type,OvfiVal::set> set{};
        }
        ///Register Update Complete Flag. 
        enum class UpdcfVal {
            empty=0x00000000,     ///<An EPCA register update completed or is not pending.
            full=0x00000001,     ///<An EPCA register update has not completed and is still pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,UpdcfVal> updcf{}; 
        namespace UpdcfValC{
            constexpr Register::FieldValue<decltype(updcf)::Type,UpdcfVal::empty> empty{};
            constexpr Register::FieldValue<decltype(updcf)::Type,UpdcfVal::full> full{};
        }
        ///Halt Input Interrupt Flag. 
        enum class HaltiVal {
            notSet=0x00000000,     ///<The Halt input (PB_HDKill) was not asserted.
            set=0x00000001,     ///<The Halt input (PB_HDKill) was asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,HaltiVal> halti{}; 
        namespace HaltiValC{
            constexpr Register::FieldValue<decltype(halti)::Type,HaltiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(halti)::Type,HaltiVal::set> set{};
        }
        ///Channel 0 Intermediate Overflow Interrupt Flag. 
        enum class C0iovfiVal {
            notSet=0x00000000,     ///<Channel 0 did not count past the channel n-bit mode limit.
            set=0x00000001,     ///<Channel 0 counted past the channel n-bit mode limit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,C0iovfiVal> c0iovfi{}; 
        namespace C0iovfiValC{
            constexpr Register::FieldValue<decltype(c0iovfi)::Type,C0iovfiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(c0iovfi)::Type,C0iovfiVal::set> set{};
        }
        ///Channel 1 Intermediate Overflow Interrupt Flag. 
        enum class C1iovfiVal {
            notSet=0x00000000,     ///<Channel 1 did not count past the channel n-bit mode limit.
            set=0x00000001,     ///<Channel 1 counted past the channel n-bit mode limit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,C1iovfiVal> c1iovfi{}; 
        namespace C1iovfiValC{
            constexpr Register::FieldValue<decltype(c1iovfi)::Type,C1iovfiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(c1iovfi)::Type,C1iovfiVal::set> set{};
        }
        ///Channel 2 Intermediate Overflow Interrupt Flag. 
        enum class C2iovfiVal {
            notSet=0x00000000,     ///<Channel 2 did not count past the channel n-bit mode limit.
            set=0x00000001,     ///<Channel 2 counted past the channel n-bit mode limit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,C2iovfiVal> c2iovfi{}; 
        namespace C2iovfiValC{
            constexpr Register::FieldValue<decltype(c2iovfi)::Type,C2iovfiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(c2iovfi)::Type,C2iovfiVal::set> set{};
        }
        ///Channel 3 Intermediate Overflow Interrupt Flag. 
        enum class C3iovfiVal {
            notSet=0x00000000,     ///<Channel 3 did not count past the channel n-bit mode limit.
            set=0x00000001,     ///<Channel 3 counted past the channel n-bit mode limit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,C3iovfiVal> c3iovfi{}; 
        namespace C3iovfiValC{
            constexpr Register::FieldValue<decltype(c3iovfi)::Type,C3iovfiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(c3iovfi)::Type,C3iovfiVal::set> set{};
        }
        ///Channel 4 Intermediate Overflow Interrupt Flag. 
        enum class C4iovfiVal {
            notSet=0x00000000,     ///<Channel 4 did not count past the channel n-bit mode limit.
            set=0x00000001,     ///<Channel 4 counted past the channel n-bit mode limit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,C4iovfiVal> c4iovfi{}; 
        namespace C4iovfiValC{
            constexpr Register::FieldValue<decltype(c4iovfi)::Type,C4iovfiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(c4iovfi)::Type,C4iovfiVal::set> set{};
        }
        ///Channel 5 Intermediate Overflow Interrupt Flag. 
        enum class C5iovfiVal {
            notSet=0x00000000,     ///<Channel 5 did not count past the channel n-bit mode limit.
            set=0x00000001,     ///<Channel 5 counted past the channel n-bit mode limit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,C5iovfiVal> c5iovfi{}; 
        namespace C5iovfiValC{
            constexpr Register::FieldValue<decltype(c5iovfi)::Type,C5iovfiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(c5iovfi)::Type,C5iovfiVal::set> set{};
        }
    }
    namespace Epca0Counter{    ///<Module Counter/Timer
        using Addr = Register::Address<0x4000e1b0,0xffff0000,0x00000000,unsigned>;
        ///Counter/Timer. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> counter{}; 
    }
    namespace Epca0Limit{    ///<Module Upper Limit
        using Addr = Register::Address<0x4000e1c0,0xffff0000,0x00000000,unsigned>;
        ///Upper Limit. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> limit{}; 
    }
    namespace Epca0Limitupd{    ///<Module Upper Limit Update Value
        using Addr = Register::Address<0x4000e1d0,0xffff0000,0x00000000,unsigned>;
        ///Module Upper Limit Update Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> limitupd{}; 
    }
    namespace Epca0Dtime{    ///<Phase Delay Time
        using Addr = Register::Address<0x4000e1e0,0xffff0000,0x00000000,unsigned>;
        ///X Phase Delay Time. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dtimex{}; 
        ///Y Phase Delay Time. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dtimey{}; 
    }
    namespace Epca0Dtarget{    ///<DMA Transfer Target
        using Addr = Register::Address<0x4000e200,0x00000000,0x00000000,unsigned>;
        ///DMA Transfer Target. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtarget{}; 
    }
    namespace Epca0Mode0{    ///<Channel Capture/Compare Mode
        using Addr = Register::Address<0x4000e000,0xfffff880,0x00000000,unsigned>;
        ///Channel Output Function Select. 
        enum class CoselVal {
            toggleOutput=0x00000000,     ///<Toggle the channel output at the next capture/compare, overflow, or intermediate event.
            setOutput=0x00000001,     ///<Set the channel output at the next capture/compare, overflow, or intermediate event.
            clearOutput=0x00000002,     ///<Clear the output at the next capture/compare, overflow, or intermediate event.
            noChange=0x00000003,     ///<Capture/Compare, overflow, or intermediate events do not control the output state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CoselVal> cosel{}; 
        namespace CoselValC{
            constexpr Register::FieldValue<decltype(cosel)::Type,CoselVal::toggleOutput> toggleOutput{};
            constexpr Register::FieldValue<decltype(cosel)::Type,CoselVal::setOutput> setOutput{};
            constexpr Register::FieldValue<decltype(cosel)::Type,CoselVal::clearOutput> clearOutput{};
            constexpr Register::FieldValue<decltype(cosel)::Type,CoselVal::noChange> noChange{};
        }
        ///PWM N-Bit Mode. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> pwmmd{}; 
        ///Differential Signal Generator Enable. 
        enum class DifgenVal {
            disabled=0x00000000,     ///<Disable the differential signal generator. The channel will output a single non-differential output.
            enabled=0x00000001,     ///<Enable the differential signal generator. The channel will output two differential outputs: X Phase (XPH) and Y Phase (YPH).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DifgenVal> difgen{}; 
        namespace DifgenValC{
            constexpr Register::FieldValue<decltype(difgen)::Type,DifgenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(difgen)::Type,DifgenVal::enabled> enabled{};
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
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::edgePwm> edgePwm{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::centerAlignedPwm> centerAlignedPwm{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::hfSquareWave> hfSquareWave{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::timerCapture> timerCapture{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::nBitPwm> nBitPwm{};
        }
    }
    namespace Epca0Control0{    ///<Channel Capture/Compare Control
        using Addr = Register::Address<0x4000e010,0xffffc010,0x00000000,unsigned>;
        ///Channel Output State. 
        enum class CoutstVal {
            low=0x00000000,     ///<The channel output state is low.
            high=0x00000001,     ///<The channel output state is high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CoutstVal> coutst{}; 
        namespace CoutstValC{
            constexpr Register::FieldValue<decltype(coutst)::Type,CoutstVal::low> low{};
            constexpr Register::FieldValue<decltype(coutst)::Type,CoutstVal::high> high{};
        }
        ///Positive Edge Input Capture Enable. 
        enum class CpcapenVal {
            disabled=0x00000000,     ///<Disable positive-edge input capture.
            enabled=0x00000001,     ///<Enable positive-edge input capture.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CpcapenVal> cpcapen{}; 
        namespace CpcapenValC{
            constexpr Register::FieldValue<decltype(cpcapen)::Type,CpcapenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cpcapen)::Type,CpcapenVal::enabled> enabled{};
        }
        ///Negative Edge Input Capture Enable. 
        enum class CncapenVal {
            disabled=0x00000000,     ///<Disable negative-edge input capture.
            enabled=0x00000001,     ///<Enable negative-edge input capture.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CncapenVal> cncapen{}; 
        namespace CncapenValC{
            constexpr Register::FieldValue<decltype(cncapen)::Type,CncapenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cncapen)::Type,CncapenVal::enabled> enabled{};
        }
        ///Channel Register Update Complete Flag. 
        enum class CupdcfVal {
            notSet=0x00000000,     ///<A EPCA channel register update completed or is not pending.
            set=0x00000001,     ///<A EPCA channel register update has not completed and is still pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CupdcfVal> cupdcf{}; 
        namespace CupdcfValC{
            constexpr Register::FieldValue<decltype(cupdcf)::Type,CupdcfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(cupdcf)::Type,CupdcfVal::set> set{};
        }
        ///Differential Y Phase State. 
        enum class YphstVal {
            low=0x00000000,     ///<Set the Y Phase output state to low.
            high=0x00000001,     ///<Set the Y Phase output state to high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,YphstVal> yphst{}; 
        namespace YphstValC{
            constexpr Register::FieldValue<decltype(yphst)::Type,YphstVal::low> low{};
            constexpr Register::FieldValue<decltype(yphst)::Type,YphstVal::high> high{};
        }
        ///Active Channel Select. 
        enum class ActivephVal {
            yactive=0x00000000,     ///<The Y Phase is active and X Phase is inactive.
            xactive=0x00000001,     ///<The X Phase is active and Y Phase is inactive.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ActivephVal> activeph{}; 
        namespace ActivephValC{
            constexpr Register::FieldValue<decltype(activeph)::Type,ActivephVal::yactive> yactive{};
            constexpr Register::FieldValue<decltype(activeph)::Type,ActivephVal::xactive> xactive{};
        }
        ///Differential X Phase State. 
        enum class XphstVal {
            low=0x00000000,     ///<Set the X Phase output state to low.
            high=0x00000001,     ///<Set the X Phase output state to high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,XphstVal> xphst{}; 
        namespace XphstValC{
            constexpr Register::FieldValue<decltype(xphst)::Type,XphstVal::low> low{};
            constexpr Register::FieldValue<decltype(xphst)::Type,XphstVal::high> high{};
        }
        ///Capture/Compare Interrupt Enable. 
        enum class CcienVal {
            disabled=0x00000000,     ///<Disable the channel capture/compare interrupt.
            enabled=0x00000001,     ///<Enable the channel capture/compare interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,CcienVal> ccien{}; 
        namespace CcienValC{
            constexpr Register::FieldValue<decltype(ccien)::Type,CcienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ccien)::Type,CcienVal::enabled> enabled{};
        }
        ///Capture/Compare DMA Request Enable. 
        enum class CcdenVal {
            disabled=0x00000000,     ///<Do not request DMA data when a channel capture/compare event occurs.
            enabled=0x00000001,     ///<Request DMA data when a channel capture/compare event occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,CcdenVal> ccden{}; 
        namespace CcdenValC{
            constexpr Register::FieldValue<decltype(ccden)::Type,CcdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ccden)::Type,CcdenVal::enabled> enabled{};
        }
        ///Capture/Compare Synchronization Signal Enable. 
        enum class CcsenVal {
            disabled=0x00000000,     ///<Do not send a synchronization signal when a channel capture/compare event occurs.
            enabled=0x00000001,     ///<Send a synchronization signal when a channel capture/compare event occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,CcsenVal> ccsen{}; 
        namespace CcsenValC{
            constexpr Register::FieldValue<decltype(ccsen)::Type,CcsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ccsen)::Type,CcsenVal::enabled> enabled{};
        }
        ///Intermediate Overflow Interrupt Enable. 
        enum class CiovfienVal {
            disabled=0x00000000,     ///<Disable the channel intermediate overflow interrupt.
            enabled=0x00000001,     ///<Enable the channel intermediate overflow interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,CiovfienVal> ciovfien{}; 
        namespace CiovfienValC{
            constexpr Register::FieldValue<decltype(ciovfien)::Type,CiovfienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ciovfien)::Type,CiovfienVal::enabled> enabled{};
        }
        ///Intermediate Overflow DMA Request Enable. 
        enum class CiovfdenVal {
            disabled=0x00000000,     ///<Do not request DMA data when a channel intermediate overflow event occurs.
            enabled=0x00000001,     ///<Request DMA data when a channel intermediate overflow event occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,CiovfdenVal> ciovfden{}; 
        namespace CiovfdenValC{
            constexpr Register::FieldValue<decltype(ciovfden)::Type,CiovfdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ciovfden)::Type,CiovfdenVal::enabled> enabled{};
        }
        ///Intermediate Overflow Synchronization Signal Enable. 
        enum class CiovfsenVal {
            disabled=0x00000000,     ///<Do not send a synchronization signal when a channel intermediate overflow event occurs.
            enabled=0x00000001,     ///<Send a synchronization signal when a channel intermediate overflow occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,CiovfsenVal> ciovfsen{}; 
        namespace CiovfsenValC{
            constexpr Register::FieldValue<decltype(ciovfsen)::Type,CiovfsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ciovfsen)::Type,CiovfsenVal::enabled> enabled{};
        }
    }
    namespace Epca0Ccapv0{    ///<Channel Compare Value
        using Addr = Register::Address<0x4000e020,0xfffc0000,0x00000000,unsigned>;
        ///Channel Compare Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapv{}; 
    }
    namespace Epca0Ccapvupd0{    ///<Channel Compare Update Value
        using Addr = Register::Address<0x4000e030,0xfffc0000,0x00000000,unsigned>;
        ///Channel Compare Update Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapvupd{}; 
    }
    namespace Epca0Mode1{    ///<Channel Capture/Compare Mode
        using Addr = Register::Address<0x4000e040,0xfffff880,0x00000000,unsigned>;
        ///Channel Output Function Select. 
        enum class CoselVal {
            toggleOutput=0x00000000,     ///<Toggle the channel output at the next capture/compare, overflow, or intermediate event.
            setOutput=0x00000001,     ///<Set the channel output at the next capture/compare, overflow, or intermediate event.
            clearOutput=0x00000002,     ///<Clear the output at the next capture/compare, overflow, or intermediate event.
            noChange=0x00000003,     ///<Capture/Compare, overflow, or intermediate events do not control the output state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CoselVal> cosel{}; 
        namespace CoselValC{
            constexpr Register::FieldValue<decltype(cosel)::Type,CoselVal::toggleOutput> toggleOutput{};
            constexpr Register::FieldValue<decltype(cosel)::Type,CoselVal::setOutput> setOutput{};
            constexpr Register::FieldValue<decltype(cosel)::Type,CoselVal::clearOutput> clearOutput{};
            constexpr Register::FieldValue<decltype(cosel)::Type,CoselVal::noChange> noChange{};
        }
        ///PWM N-Bit Mode. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> pwmmd{}; 
        ///Differential Signal Generator Enable. 
        enum class DifgenVal {
            disabled=0x00000000,     ///<Disable the differential signal generator. The channel will output a single non-differential output.
            enabled=0x00000001,     ///<Enable the differential signal generator. The channel will output two differential outputs: X Phase (XPH) and Y Phase (YPH).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DifgenVal> difgen{}; 
        namespace DifgenValC{
            constexpr Register::FieldValue<decltype(difgen)::Type,DifgenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(difgen)::Type,DifgenVal::enabled> enabled{};
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
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::edgePwm> edgePwm{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::centerAlignedPwm> centerAlignedPwm{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::hfSquareWave> hfSquareWave{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::timerCapture> timerCapture{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::nBitPwm> nBitPwm{};
        }
    }
    namespace Epca0Control1{    ///<Channel Capture/Compare Control
        using Addr = Register::Address<0x4000e050,0xffffc010,0x00000000,unsigned>;
        ///Channel Output State. 
        enum class CoutstVal {
            low=0x00000000,     ///<The channel output state is low.
            high=0x00000001,     ///<The channel output state is high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CoutstVal> coutst{}; 
        namespace CoutstValC{
            constexpr Register::FieldValue<decltype(coutst)::Type,CoutstVal::low> low{};
            constexpr Register::FieldValue<decltype(coutst)::Type,CoutstVal::high> high{};
        }
        ///Positive Edge Input Capture Enable. 
        enum class CpcapenVal {
            disabled=0x00000000,     ///<Disable positive-edge input capture.
            enabled=0x00000001,     ///<Enable positive-edge input capture.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CpcapenVal> cpcapen{}; 
        namespace CpcapenValC{
            constexpr Register::FieldValue<decltype(cpcapen)::Type,CpcapenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cpcapen)::Type,CpcapenVal::enabled> enabled{};
        }
        ///Negative Edge Input Capture Enable. 
        enum class CncapenVal {
            disabled=0x00000000,     ///<Disable negative-edge input capture.
            enabled=0x00000001,     ///<Enable negative-edge input capture.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CncapenVal> cncapen{}; 
        namespace CncapenValC{
            constexpr Register::FieldValue<decltype(cncapen)::Type,CncapenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cncapen)::Type,CncapenVal::enabled> enabled{};
        }
        ///Channel Register Update Complete Flag. 
        enum class CupdcfVal {
            notSet=0x00000000,     ///<A EPCA channel register update completed or is not pending.
            set=0x00000001,     ///<A EPCA channel register update has not completed and is still pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CupdcfVal> cupdcf{}; 
        namespace CupdcfValC{
            constexpr Register::FieldValue<decltype(cupdcf)::Type,CupdcfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(cupdcf)::Type,CupdcfVal::set> set{};
        }
        ///Differential Y Phase State. 
        enum class YphstVal {
            low=0x00000000,     ///<Set the Y Phase output state to low.
            high=0x00000001,     ///<Set the Y Phase output state to high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,YphstVal> yphst{}; 
        namespace YphstValC{
            constexpr Register::FieldValue<decltype(yphst)::Type,YphstVal::low> low{};
            constexpr Register::FieldValue<decltype(yphst)::Type,YphstVal::high> high{};
        }
        ///Active Channel Select. 
        enum class ActivephVal {
            yactive=0x00000000,     ///<The Y Phase is active and X Phase is inactive.
            xactive=0x00000001,     ///<The X Phase is active and Y Phase is inactive.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ActivephVal> activeph{}; 
        namespace ActivephValC{
            constexpr Register::FieldValue<decltype(activeph)::Type,ActivephVal::yactive> yactive{};
            constexpr Register::FieldValue<decltype(activeph)::Type,ActivephVal::xactive> xactive{};
        }
        ///Differential X Phase State. 
        enum class XphstVal {
            low=0x00000000,     ///<Set the X Phase output state to low.
            high=0x00000001,     ///<Set the X Phase output state to high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,XphstVal> xphst{}; 
        namespace XphstValC{
            constexpr Register::FieldValue<decltype(xphst)::Type,XphstVal::low> low{};
            constexpr Register::FieldValue<decltype(xphst)::Type,XphstVal::high> high{};
        }
        ///Capture/Compare Interrupt Enable. 
        enum class CcienVal {
            disabled=0x00000000,     ///<Disable the channel capture/compare interrupt.
            enabled=0x00000001,     ///<Enable the channel capture/compare interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,CcienVal> ccien{}; 
        namespace CcienValC{
            constexpr Register::FieldValue<decltype(ccien)::Type,CcienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ccien)::Type,CcienVal::enabled> enabled{};
        }
        ///Capture/Compare DMA Request Enable. 
        enum class CcdenVal {
            disabled=0x00000000,     ///<Do not request DMA data when a channel capture/compare event occurs.
            enabled=0x00000001,     ///<Request DMA data when a channel capture/compare event occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,CcdenVal> ccden{}; 
        namespace CcdenValC{
            constexpr Register::FieldValue<decltype(ccden)::Type,CcdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ccden)::Type,CcdenVal::enabled> enabled{};
        }
        ///Capture/Compare Synchronization Signal Enable. 
        enum class CcsenVal {
            disabled=0x00000000,     ///<Do not send a synchronization signal when a channel capture/compare event occurs.
            enabled=0x00000001,     ///<Send a synchronization signal when a channel capture/compare event occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,CcsenVal> ccsen{}; 
        namespace CcsenValC{
            constexpr Register::FieldValue<decltype(ccsen)::Type,CcsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ccsen)::Type,CcsenVal::enabled> enabled{};
        }
        ///Intermediate Overflow Interrupt Enable. 
        enum class CiovfienVal {
            disabled=0x00000000,     ///<Disable the channel intermediate overflow interrupt.
            enabled=0x00000001,     ///<Enable the channel intermediate overflow interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,CiovfienVal> ciovfien{}; 
        namespace CiovfienValC{
            constexpr Register::FieldValue<decltype(ciovfien)::Type,CiovfienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ciovfien)::Type,CiovfienVal::enabled> enabled{};
        }
        ///Intermediate Overflow DMA Request Enable. 
        enum class CiovfdenVal {
            disabled=0x00000000,     ///<Do not request DMA data when a channel intermediate overflow event occurs.
            enabled=0x00000001,     ///<Request DMA data when a channel intermediate overflow event occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,CiovfdenVal> ciovfden{}; 
        namespace CiovfdenValC{
            constexpr Register::FieldValue<decltype(ciovfden)::Type,CiovfdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ciovfden)::Type,CiovfdenVal::enabled> enabled{};
        }
        ///Intermediate Overflow Synchronization Signal Enable. 
        enum class CiovfsenVal {
            disabled=0x00000000,     ///<Do not send a synchronization signal when a channel intermediate overflow event occurs.
            enabled=0x00000001,     ///<Send a synchronization signal when a channel intermediate overflow occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,CiovfsenVal> ciovfsen{}; 
        namespace CiovfsenValC{
            constexpr Register::FieldValue<decltype(ciovfsen)::Type,CiovfsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ciovfsen)::Type,CiovfsenVal::enabled> enabled{};
        }
    }
    namespace Epca0Ccapv1{    ///<Channel Compare Value
        using Addr = Register::Address<0x4000e060,0xfffc0000,0x00000000,unsigned>;
        ///Channel Compare Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapv{}; 
    }
    namespace Epca0Ccapvupd1{    ///<Channel Compare Update Value
        using Addr = Register::Address<0x4000e070,0xfffc0000,0x00000000,unsigned>;
        ///Channel Compare Update Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapvupd{}; 
    }
    namespace Epca0Mode2{    ///<Channel Capture/Compare Mode
        using Addr = Register::Address<0x4000e080,0xfffff880,0x00000000,unsigned>;
        ///Channel Output Function Select. 
        enum class CoselVal {
            toggleOutput=0x00000000,     ///<Toggle the channel output at the next capture/compare, overflow, or intermediate event.
            setOutput=0x00000001,     ///<Set the channel output at the next capture/compare, overflow, or intermediate event.
            clearOutput=0x00000002,     ///<Clear the output at the next capture/compare, overflow, or intermediate event.
            noChange=0x00000003,     ///<Capture/Compare, overflow, or intermediate events do not control the output state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CoselVal> cosel{}; 
        namespace CoselValC{
            constexpr Register::FieldValue<decltype(cosel)::Type,CoselVal::toggleOutput> toggleOutput{};
            constexpr Register::FieldValue<decltype(cosel)::Type,CoselVal::setOutput> setOutput{};
            constexpr Register::FieldValue<decltype(cosel)::Type,CoselVal::clearOutput> clearOutput{};
            constexpr Register::FieldValue<decltype(cosel)::Type,CoselVal::noChange> noChange{};
        }
        ///PWM N-Bit Mode. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> pwmmd{}; 
        ///Differential Signal Generator Enable. 
        enum class DifgenVal {
            disabled=0x00000000,     ///<Disable the differential signal generator. The channel will output a single non-differential output.
            enabled=0x00000001,     ///<Enable the differential signal generator. The channel will output two differential outputs: X Phase (XPH) and Y Phase (YPH).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DifgenVal> difgen{}; 
        namespace DifgenValC{
            constexpr Register::FieldValue<decltype(difgen)::Type,DifgenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(difgen)::Type,DifgenVal::enabled> enabled{};
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
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::edgePwm> edgePwm{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::centerAlignedPwm> centerAlignedPwm{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::hfSquareWave> hfSquareWave{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::timerCapture> timerCapture{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::nBitPwm> nBitPwm{};
        }
    }
    namespace Epca0Control2{    ///<Channel Capture/Compare Control
        using Addr = Register::Address<0x4000e090,0xffffc010,0x00000000,unsigned>;
        ///Channel Output State. 
        enum class CoutstVal {
            low=0x00000000,     ///<The channel output state is low.
            high=0x00000001,     ///<The channel output state is high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CoutstVal> coutst{}; 
        namespace CoutstValC{
            constexpr Register::FieldValue<decltype(coutst)::Type,CoutstVal::low> low{};
            constexpr Register::FieldValue<decltype(coutst)::Type,CoutstVal::high> high{};
        }
        ///Positive Edge Input Capture Enable. 
        enum class CpcapenVal {
            disabled=0x00000000,     ///<Disable positive-edge input capture.
            enabled=0x00000001,     ///<Enable positive-edge input capture.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CpcapenVal> cpcapen{}; 
        namespace CpcapenValC{
            constexpr Register::FieldValue<decltype(cpcapen)::Type,CpcapenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cpcapen)::Type,CpcapenVal::enabled> enabled{};
        }
        ///Negative Edge Input Capture Enable. 
        enum class CncapenVal {
            disabled=0x00000000,     ///<Disable negative-edge input capture.
            enabled=0x00000001,     ///<Enable negative-edge input capture.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CncapenVal> cncapen{}; 
        namespace CncapenValC{
            constexpr Register::FieldValue<decltype(cncapen)::Type,CncapenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cncapen)::Type,CncapenVal::enabled> enabled{};
        }
        ///Channel Register Update Complete Flag. 
        enum class CupdcfVal {
            notSet=0x00000000,     ///<A EPCA channel register update completed or is not pending.
            set=0x00000001,     ///<A EPCA channel register update has not completed and is still pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CupdcfVal> cupdcf{}; 
        namespace CupdcfValC{
            constexpr Register::FieldValue<decltype(cupdcf)::Type,CupdcfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(cupdcf)::Type,CupdcfVal::set> set{};
        }
        ///Differential Y Phase State. 
        enum class YphstVal {
            low=0x00000000,     ///<Set the Y Phase output state to low.
            high=0x00000001,     ///<Set the Y Phase output state to high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,YphstVal> yphst{}; 
        namespace YphstValC{
            constexpr Register::FieldValue<decltype(yphst)::Type,YphstVal::low> low{};
            constexpr Register::FieldValue<decltype(yphst)::Type,YphstVal::high> high{};
        }
        ///Active Channel Select. 
        enum class ActivephVal {
            yactive=0x00000000,     ///<The Y Phase is active and X Phase is inactive.
            xactive=0x00000001,     ///<The X Phase is active and Y Phase is inactive.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ActivephVal> activeph{}; 
        namespace ActivephValC{
            constexpr Register::FieldValue<decltype(activeph)::Type,ActivephVal::yactive> yactive{};
            constexpr Register::FieldValue<decltype(activeph)::Type,ActivephVal::xactive> xactive{};
        }
        ///Differential X Phase State. 
        enum class XphstVal {
            low=0x00000000,     ///<Set the X Phase output state to low.
            high=0x00000001,     ///<Set the X Phase output state to high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,XphstVal> xphst{}; 
        namespace XphstValC{
            constexpr Register::FieldValue<decltype(xphst)::Type,XphstVal::low> low{};
            constexpr Register::FieldValue<decltype(xphst)::Type,XphstVal::high> high{};
        }
        ///Capture/Compare Interrupt Enable. 
        enum class CcienVal {
            disabled=0x00000000,     ///<Disable the channel capture/compare interrupt.
            enabled=0x00000001,     ///<Enable the channel capture/compare interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,CcienVal> ccien{}; 
        namespace CcienValC{
            constexpr Register::FieldValue<decltype(ccien)::Type,CcienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ccien)::Type,CcienVal::enabled> enabled{};
        }
        ///Capture/Compare DMA Request Enable. 
        enum class CcdenVal {
            disabled=0x00000000,     ///<Do not request DMA data when a channel capture/compare event occurs.
            enabled=0x00000001,     ///<Request DMA data when a channel capture/compare event occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,CcdenVal> ccden{}; 
        namespace CcdenValC{
            constexpr Register::FieldValue<decltype(ccden)::Type,CcdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ccden)::Type,CcdenVal::enabled> enabled{};
        }
        ///Capture/Compare Synchronization Signal Enable. 
        enum class CcsenVal {
            disabled=0x00000000,     ///<Do not send a synchronization signal when a channel capture/compare event occurs.
            enabled=0x00000001,     ///<Send a synchronization signal when a channel capture/compare event occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,CcsenVal> ccsen{}; 
        namespace CcsenValC{
            constexpr Register::FieldValue<decltype(ccsen)::Type,CcsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ccsen)::Type,CcsenVal::enabled> enabled{};
        }
        ///Intermediate Overflow Interrupt Enable. 
        enum class CiovfienVal {
            disabled=0x00000000,     ///<Disable the channel intermediate overflow interrupt.
            enabled=0x00000001,     ///<Enable the channel intermediate overflow interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,CiovfienVal> ciovfien{}; 
        namespace CiovfienValC{
            constexpr Register::FieldValue<decltype(ciovfien)::Type,CiovfienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ciovfien)::Type,CiovfienVal::enabled> enabled{};
        }
        ///Intermediate Overflow DMA Request Enable. 
        enum class CiovfdenVal {
            disabled=0x00000000,     ///<Do not request DMA data when a channel intermediate overflow event occurs.
            enabled=0x00000001,     ///<Request DMA data when a channel intermediate overflow event occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,CiovfdenVal> ciovfden{}; 
        namespace CiovfdenValC{
            constexpr Register::FieldValue<decltype(ciovfden)::Type,CiovfdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ciovfden)::Type,CiovfdenVal::enabled> enabled{};
        }
        ///Intermediate Overflow Synchronization Signal Enable. 
        enum class CiovfsenVal {
            disabled=0x00000000,     ///<Do not send a synchronization signal when a channel intermediate overflow event occurs.
            enabled=0x00000001,     ///<Send a synchronization signal when a channel intermediate overflow occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,CiovfsenVal> ciovfsen{}; 
        namespace CiovfsenValC{
            constexpr Register::FieldValue<decltype(ciovfsen)::Type,CiovfsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ciovfsen)::Type,CiovfsenVal::enabled> enabled{};
        }
    }
    namespace Epca0Ccapv2{    ///<Channel Compare Value
        using Addr = Register::Address<0x4000e0a0,0xfffc0000,0x00000000,unsigned>;
        ///Channel Compare Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapv{}; 
    }
    namespace Epca0Ccapvupd2{    ///<Channel Compare Update Value
        using Addr = Register::Address<0x4000e0b0,0xfffc0000,0x00000000,unsigned>;
        ///Channel Compare Update Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapvupd{}; 
    }
    namespace Epca0Mode3{    ///<Channel Capture/Compare Mode
        using Addr = Register::Address<0x4000e0c0,0xfffff880,0x00000000,unsigned>;
        ///Channel Output Function Select. 
        enum class CoselVal {
            toggleOutput=0x00000000,     ///<Toggle the channel output at the next capture/compare, overflow, or intermediate event.
            setOutput=0x00000001,     ///<Set the channel output at the next capture/compare, overflow, or intermediate event.
            clearOutput=0x00000002,     ///<Clear the output at the next capture/compare, overflow, or intermediate event.
            noChange=0x00000003,     ///<Capture/Compare, overflow, or intermediate events do not control the output state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CoselVal> cosel{}; 
        namespace CoselValC{
            constexpr Register::FieldValue<decltype(cosel)::Type,CoselVal::toggleOutput> toggleOutput{};
            constexpr Register::FieldValue<decltype(cosel)::Type,CoselVal::setOutput> setOutput{};
            constexpr Register::FieldValue<decltype(cosel)::Type,CoselVal::clearOutput> clearOutput{};
            constexpr Register::FieldValue<decltype(cosel)::Type,CoselVal::noChange> noChange{};
        }
        ///PWM N-Bit Mode. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> pwmmd{}; 
        ///Differential Signal Generator Enable. 
        enum class DifgenVal {
            disabled=0x00000000,     ///<Disable the differential signal generator. The channel will output a single non-differential output.
            enabled=0x00000001,     ///<Enable the differential signal generator. The channel will output two differential outputs: X Phase (XPH) and Y Phase (YPH).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DifgenVal> difgen{}; 
        namespace DifgenValC{
            constexpr Register::FieldValue<decltype(difgen)::Type,DifgenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(difgen)::Type,DifgenVal::enabled> enabled{};
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
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::edgePwm> edgePwm{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::centerAlignedPwm> centerAlignedPwm{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::hfSquareWave> hfSquareWave{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::timerCapture> timerCapture{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::nBitPwm> nBitPwm{};
        }
    }
    namespace Epca0Control3{    ///<Channel Capture/Compare Control
        using Addr = Register::Address<0x4000e0d0,0xffffc010,0x00000000,unsigned>;
        ///Channel Output State. 
        enum class CoutstVal {
            low=0x00000000,     ///<The channel output state is low.
            high=0x00000001,     ///<The channel output state is high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CoutstVal> coutst{}; 
        namespace CoutstValC{
            constexpr Register::FieldValue<decltype(coutst)::Type,CoutstVal::low> low{};
            constexpr Register::FieldValue<decltype(coutst)::Type,CoutstVal::high> high{};
        }
        ///Positive Edge Input Capture Enable. 
        enum class CpcapenVal {
            disabled=0x00000000,     ///<Disable positive-edge input capture.
            enabled=0x00000001,     ///<Enable positive-edge input capture.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CpcapenVal> cpcapen{}; 
        namespace CpcapenValC{
            constexpr Register::FieldValue<decltype(cpcapen)::Type,CpcapenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cpcapen)::Type,CpcapenVal::enabled> enabled{};
        }
        ///Negative Edge Input Capture Enable. 
        enum class CncapenVal {
            disabled=0x00000000,     ///<Disable negative-edge input capture.
            enabled=0x00000001,     ///<Enable negative-edge input capture.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CncapenVal> cncapen{}; 
        namespace CncapenValC{
            constexpr Register::FieldValue<decltype(cncapen)::Type,CncapenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cncapen)::Type,CncapenVal::enabled> enabled{};
        }
        ///Channel Register Update Complete Flag. 
        enum class CupdcfVal {
            notSet=0x00000000,     ///<A EPCA channel register update completed or is not pending.
            set=0x00000001,     ///<A EPCA channel register update has not completed and is still pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CupdcfVal> cupdcf{}; 
        namespace CupdcfValC{
            constexpr Register::FieldValue<decltype(cupdcf)::Type,CupdcfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(cupdcf)::Type,CupdcfVal::set> set{};
        }
        ///Differential Y Phase State. 
        enum class YphstVal {
            low=0x00000000,     ///<Set the Y Phase output state to low.
            high=0x00000001,     ///<Set the Y Phase output state to high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,YphstVal> yphst{}; 
        namespace YphstValC{
            constexpr Register::FieldValue<decltype(yphst)::Type,YphstVal::low> low{};
            constexpr Register::FieldValue<decltype(yphst)::Type,YphstVal::high> high{};
        }
        ///Active Channel Select. 
        enum class ActivephVal {
            yactive=0x00000000,     ///<The Y Phase is active and X Phase is inactive.
            xactive=0x00000001,     ///<The X Phase is active and Y Phase is inactive.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ActivephVal> activeph{}; 
        namespace ActivephValC{
            constexpr Register::FieldValue<decltype(activeph)::Type,ActivephVal::yactive> yactive{};
            constexpr Register::FieldValue<decltype(activeph)::Type,ActivephVal::xactive> xactive{};
        }
        ///Differential X Phase State. 
        enum class XphstVal {
            low=0x00000000,     ///<Set the X Phase output state to low.
            high=0x00000001,     ///<Set the X Phase output state to high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,XphstVal> xphst{}; 
        namespace XphstValC{
            constexpr Register::FieldValue<decltype(xphst)::Type,XphstVal::low> low{};
            constexpr Register::FieldValue<decltype(xphst)::Type,XphstVal::high> high{};
        }
        ///Capture/Compare Interrupt Enable. 
        enum class CcienVal {
            disabled=0x00000000,     ///<Disable the channel capture/compare interrupt.
            enabled=0x00000001,     ///<Enable the channel capture/compare interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,CcienVal> ccien{}; 
        namespace CcienValC{
            constexpr Register::FieldValue<decltype(ccien)::Type,CcienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ccien)::Type,CcienVal::enabled> enabled{};
        }
        ///Capture/Compare DMA Request Enable. 
        enum class CcdenVal {
            disabled=0x00000000,     ///<Do not request DMA data when a channel capture/compare event occurs.
            enabled=0x00000001,     ///<Request DMA data when a channel capture/compare event occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,CcdenVal> ccden{}; 
        namespace CcdenValC{
            constexpr Register::FieldValue<decltype(ccden)::Type,CcdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ccden)::Type,CcdenVal::enabled> enabled{};
        }
        ///Capture/Compare Synchronization Signal Enable. 
        enum class CcsenVal {
            disabled=0x00000000,     ///<Do not send a synchronization signal when a channel capture/compare event occurs.
            enabled=0x00000001,     ///<Send a synchronization signal when a channel capture/compare event occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,CcsenVal> ccsen{}; 
        namespace CcsenValC{
            constexpr Register::FieldValue<decltype(ccsen)::Type,CcsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ccsen)::Type,CcsenVal::enabled> enabled{};
        }
        ///Intermediate Overflow Interrupt Enable. 
        enum class CiovfienVal {
            disabled=0x00000000,     ///<Disable the channel intermediate overflow interrupt.
            enabled=0x00000001,     ///<Enable the channel intermediate overflow interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,CiovfienVal> ciovfien{}; 
        namespace CiovfienValC{
            constexpr Register::FieldValue<decltype(ciovfien)::Type,CiovfienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ciovfien)::Type,CiovfienVal::enabled> enabled{};
        }
        ///Intermediate Overflow DMA Request Enable. 
        enum class CiovfdenVal {
            disabled=0x00000000,     ///<Do not request DMA data when a channel intermediate overflow event occurs.
            enabled=0x00000001,     ///<Request DMA data when a channel intermediate overflow event occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,CiovfdenVal> ciovfden{}; 
        namespace CiovfdenValC{
            constexpr Register::FieldValue<decltype(ciovfden)::Type,CiovfdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ciovfden)::Type,CiovfdenVal::enabled> enabled{};
        }
        ///Intermediate Overflow Synchronization Signal Enable. 
        enum class CiovfsenVal {
            disabled=0x00000000,     ///<Do not send a synchronization signal when a channel intermediate overflow event occurs.
            enabled=0x00000001,     ///<Send a synchronization signal when a channel intermediate overflow occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,CiovfsenVal> ciovfsen{}; 
        namespace CiovfsenValC{
            constexpr Register::FieldValue<decltype(ciovfsen)::Type,CiovfsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ciovfsen)::Type,CiovfsenVal::enabled> enabled{};
        }
    }
    namespace Epca0Ccapv3{    ///<Channel Compare Value
        using Addr = Register::Address<0x4000e0e0,0xfffc0000,0x00000000,unsigned>;
        ///Channel Compare Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapv{}; 
    }
    namespace Epca0Ccapvupd3{    ///<Channel Compare Update Value
        using Addr = Register::Address<0x4000e0f0,0xfffc0000,0x00000000,unsigned>;
        ///Channel Compare Update Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapvupd{}; 
    }
    namespace Epca0Mode4{    ///<Channel Capture/Compare Mode
        using Addr = Register::Address<0x4000e100,0xfffff880,0x00000000,unsigned>;
        ///Channel Output Function Select. 
        enum class CoselVal {
            toggleOutput=0x00000000,     ///<Toggle the channel output at the next capture/compare, overflow, or intermediate event.
            setOutput=0x00000001,     ///<Set the channel output at the next capture/compare, overflow, or intermediate event.
            clearOutput=0x00000002,     ///<Clear the output at the next capture/compare, overflow, or intermediate event.
            noChange=0x00000003,     ///<Capture/Compare, overflow, or intermediate events do not control the output state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CoselVal> cosel{}; 
        namespace CoselValC{
            constexpr Register::FieldValue<decltype(cosel)::Type,CoselVal::toggleOutput> toggleOutput{};
            constexpr Register::FieldValue<decltype(cosel)::Type,CoselVal::setOutput> setOutput{};
            constexpr Register::FieldValue<decltype(cosel)::Type,CoselVal::clearOutput> clearOutput{};
            constexpr Register::FieldValue<decltype(cosel)::Type,CoselVal::noChange> noChange{};
        }
        ///PWM N-Bit Mode. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> pwmmd{}; 
        ///Differential Signal Generator Enable. 
        enum class DifgenVal {
            disabled=0x00000000,     ///<Disable the differential signal generator. The channel will output a single non-differential output.
            enabled=0x00000001,     ///<Enable the differential signal generator. The channel will output two differential outputs: X Phase (XPH) and Y Phase (YPH).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DifgenVal> difgen{}; 
        namespace DifgenValC{
            constexpr Register::FieldValue<decltype(difgen)::Type,DifgenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(difgen)::Type,DifgenVal::enabled> enabled{};
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
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::edgePwm> edgePwm{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::centerAlignedPwm> centerAlignedPwm{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::hfSquareWave> hfSquareWave{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::timerCapture> timerCapture{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::nBitPwm> nBitPwm{};
        }
    }
    namespace Epca0Control4{    ///<Channel Capture/Compare Control
        using Addr = Register::Address<0x4000e110,0xffffc010,0x00000000,unsigned>;
        ///Channel Output State. 
        enum class CoutstVal {
            low=0x00000000,     ///<The channel output state is low.
            high=0x00000001,     ///<The channel output state is high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CoutstVal> coutst{}; 
        namespace CoutstValC{
            constexpr Register::FieldValue<decltype(coutst)::Type,CoutstVal::low> low{};
            constexpr Register::FieldValue<decltype(coutst)::Type,CoutstVal::high> high{};
        }
        ///Positive Edge Input Capture Enable. 
        enum class CpcapenVal {
            disabled=0x00000000,     ///<Disable positive-edge input capture.
            enabled=0x00000001,     ///<Enable positive-edge input capture.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CpcapenVal> cpcapen{}; 
        namespace CpcapenValC{
            constexpr Register::FieldValue<decltype(cpcapen)::Type,CpcapenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cpcapen)::Type,CpcapenVal::enabled> enabled{};
        }
        ///Negative Edge Input Capture Enable. 
        enum class CncapenVal {
            disabled=0x00000000,     ///<Disable negative-edge input capture.
            enabled=0x00000001,     ///<Enable negative-edge input capture.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CncapenVal> cncapen{}; 
        namespace CncapenValC{
            constexpr Register::FieldValue<decltype(cncapen)::Type,CncapenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cncapen)::Type,CncapenVal::enabled> enabled{};
        }
        ///Channel Register Update Complete Flag. 
        enum class CupdcfVal {
            notSet=0x00000000,     ///<A EPCA channel register update completed or is not pending.
            set=0x00000001,     ///<A EPCA channel register update has not completed and is still pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CupdcfVal> cupdcf{}; 
        namespace CupdcfValC{
            constexpr Register::FieldValue<decltype(cupdcf)::Type,CupdcfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(cupdcf)::Type,CupdcfVal::set> set{};
        }
        ///Differential Y Phase State. 
        enum class YphstVal {
            low=0x00000000,     ///<Set the Y Phase output state to low.
            high=0x00000001,     ///<Set the Y Phase output state to high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,YphstVal> yphst{}; 
        namespace YphstValC{
            constexpr Register::FieldValue<decltype(yphst)::Type,YphstVal::low> low{};
            constexpr Register::FieldValue<decltype(yphst)::Type,YphstVal::high> high{};
        }
        ///Active Channel Select. 
        enum class ActivephVal {
            yactive=0x00000000,     ///<The Y Phase is active and X Phase is inactive.
            xactive=0x00000001,     ///<The X Phase is active and Y Phase is inactive.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ActivephVal> activeph{}; 
        namespace ActivephValC{
            constexpr Register::FieldValue<decltype(activeph)::Type,ActivephVal::yactive> yactive{};
            constexpr Register::FieldValue<decltype(activeph)::Type,ActivephVal::xactive> xactive{};
        }
        ///Differential X Phase State. 
        enum class XphstVal {
            low=0x00000000,     ///<Set the X Phase output state to low.
            high=0x00000001,     ///<Set the X Phase output state to high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,XphstVal> xphst{}; 
        namespace XphstValC{
            constexpr Register::FieldValue<decltype(xphst)::Type,XphstVal::low> low{};
            constexpr Register::FieldValue<decltype(xphst)::Type,XphstVal::high> high{};
        }
        ///Capture/Compare Interrupt Enable. 
        enum class CcienVal {
            disabled=0x00000000,     ///<Disable the channel capture/compare interrupt.
            enabled=0x00000001,     ///<Enable the channel capture/compare interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,CcienVal> ccien{}; 
        namespace CcienValC{
            constexpr Register::FieldValue<decltype(ccien)::Type,CcienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ccien)::Type,CcienVal::enabled> enabled{};
        }
        ///Capture/Compare DMA Request Enable. 
        enum class CcdenVal {
            disabled=0x00000000,     ///<Do not request DMA data when a channel capture/compare event occurs.
            enabled=0x00000001,     ///<Request DMA data when a channel capture/compare event occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,CcdenVal> ccden{}; 
        namespace CcdenValC{
            constexpr Register::FieldValue<decltype(ccden)::Type,CcdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ccden)::Type,CcdenVal::enabled> enabled{};
        }
        ///Capture/Compare Synchronization Signal Enable. 
        enum class CcsenVal {
            disabled=0x00000000,     ///<Do not send a synchronization signal when a channel capture/compare event occurs.
            enabled=0x00000001,     ///<Send a synchronization signal when a channel capture/compare event occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,CcsenVal> ccsen{}; 
        namespace CcsenValC{
            constexpr Register::FieldValue<decltype(ccsen)::Type,CcsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ccsen)::Type,CcsenVal::enabled> enabled{};
        }
        ///Intermediate Overflow Interrupt Enable. 
        enum class CiovfienVal {
            disabled=0x00000000,     ///<Disable the channel intermediate overflow interrupt.
            enabled=0x00000001,     ///<Enable the channel intermediate overflow interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,CiovfienVal> ciovfien{}; 
        namespace CiovfienValC{
            constexpr Register::FieldValue<decltype(ciovfien)::Type,CiovfienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ciovfien)::Type,CiovfienVal::enabled> enabled{};
        }
        ///Intermediate Overflow DMA Request Enable. 
        enum class CiovfdenVal {
            disabled=0x00000000,     ///<Do not request DMA data when a channel intermediate overflow event occurs.
            enabled=0x00000001,     ///<Request DMA data when a channel intermediate overflow event occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,CiovfdenVal> ciovfden{}; 
        namespace CiovfdenValC{
            constexpr Register::FieldValue<decltype(ciovfden)::Type,CiovfdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ciovfden)::Type,CiovfdenVal::enabled> enabled{};
        }
        ///Intermediate Overflow Synchronization Signal Enable. 
        enum class CiovfsenVal {
            disabled=0x00000000,     ///<Do not send a synchronization signal when a channel intermediate overflow event occurs.
            enabled=0x00000001,     ///<Send a synchronization signal when a channel intermediate overflow occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,CiovfsenVal> ciovfsen{}; 
        namespace CiovfsenValC{
            constexpr Register::FieldValue<decltype(ciovfsen)::Type,CiovfsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ciovfsen)::Type,CiovfsenVal::enabled> enabled{};
        }
    }
    namespace Epca0Ccapv4{    ///<Channel Compare Value
        using Addr = Register::Address<0x4000e120,0xfffc0000,0x00000000,unsigned>;
        ///Channel Compare Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapv{}; 
    }
    namespace Epca0Ccapvupd4{    ///<Channel Compare Update Value
        using Addr = Register::Address<0x4000e130,0xfffc0000,0x00000000,unsigned>;
        ///Channel Compare Update Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapvupd{}; 
    }
    namespace Epca0Mode5{    ///<Channel Capture/Compare Mode
        using Addr = Register::Address<0x4000e140,0xfffff880,0x00000000,unsigned>;
        ///Channel Output Function Select. 
        enum class CoselVal {
            toggleOutput=0x00000000,     ///<Toggle the channel output at the next capture/compare, overflow, or intermediate event.
            setOutput=0x00000001,     ///<Set the channel output at the next capture/compare, overflow, or intermediate event.
            clearOutput=0x00000002,     ///<Clear the output at the next capture/compare, overflow, or intermediate event.
            noChange=0x00000003,     ///<Capture/Compare, overflow, or intermediate events do not control the output state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CoselVal> cosel{}; 
        namespace CoselValC{
            constexpr Register::FieldValue<decltype(cosel)::Type,CoselVal::toggleOutput> toggleOutput{};
            constexpr Register::FieldValue<decltype(cosel)::Type,CoselVal::setOutput> setOutput{};
            constexpr Register::FieldValue<decltype(cosel)::Type,CoselVal::clearOutput> clearOutput{};
            constexpr Register::FieldValue<decltype(cosel)::Type,CoselVal::noChange> noChange{};
        }
        ///PWM N-Bit Mode. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> pwmmd{}; 
        ///Differential Signal Generator Enable. 
        enum class DifgenVal {
            disabled=0x00000000,     ///<Disable the differential signal generator. The channel will output a single non-differential output.
            enabled=0x00000001,     ///<Enable the differential signal generator. The channel will output two differential outputs: X Phase (XPH) and Y Phase (YPH).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DifgenVal> difgen{}; 
        namespace DifgenValC{
            constexpr Register::FieldValue<decltype(difgen)::Type,DifgenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(difgen)::Type,DifgenVal::enabled> enabled{};
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
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::edgePwm> edgePwm{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::centerAlignedPwm> centerAlignedPwm{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::hfSquareWave> hfSquareWave{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::timerCapture> timerCapture{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::nBitPwm> nBitPwm{};
        }
    }
    namespace Epca0Control5{    ///<Channel Capture/Compare Control
        using Addr = Register::Address<0x4000e150,0xffffc010,0x00000000,unsigned>;
        ///Channel Output State. 
        enum class CoutstVal {
            low=0x00000000,     ///<The channel output state is low.
            high=0x00000001,     ///<The channel output state is high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CoutstVal> coutst{}; 
        namespace CoutstValC{
            constexpr Register::FieldValue<decltype(coutst)::Type,CoutstVal::low> low{};
            constexpr Register::FieldValue<decltype(coutst)::Type,CoutstVal::high> high{};
        }
        ///Positive Edge Input Capture Enable. 
        enum class CpcapenVal {
            disabled=0x00000000,     ///<Disable positive-edge input capture.
            enabled=0x00000001,     ///<Enable positive-edge input capture.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CpcapenVal> cpcapen{}; 
        namespace CpcapenValC{
            constexpr Register::FieldValue<decltype(cpcapen)::Type,CpcapenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cpcapen)::Type,CpcapenVal::enabled> enabled{};
        }
        ///Negative Edge Input Capture Enable. 
        enum class CncapenVal {
            disabled=0x00000000,     ///<Disable negative-edge input capture.
            enabled=0x00000001,     ///<Enable negative-edge input capture.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CncapenVal> cncapen{}; 
        namespace CncapenValC{
            constexpr Register::FieldValue<decltype(cncapen)::Type,CncapenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cncapen)::Type,CncapenVal::enabled> enabled{};
        }
        ///Channel Register Update Complete Flag. 
        enum class CupdcfVal {
            notSet=0x00000000,     ///<A EPCA channel register update completed or is not pending.
            set=0x00000001,     ///<A EPCA channel register update has not completed and is still pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CupdcfVal> cupdcf{}; 
        namespace CupdcfValC{
            constexpr Register::FieldValue<decltype(cupdcf)::Type,CupdcfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(cupdcf)::Type,CupdcfVal::set> set{};
        }
        ///Differential Y Phase State. 
        enum class YphstVal {
            low=0x00000000,     ///<Set the Y Phase output state to low.
            high=0x00000001,     ///<Set the Y Phase output state to high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,YphstVal> yphst{}; 
        namespace YphstValC{
            constexpr Register::FieldValue<decltype(yphst)::Type,YphstVal::low> low{};
            constexpr Register::FieldValue<decltype(yphst)::Type,YphstVal::high> high{};
        }
        ///Active Channel Select. 
        enum class ActivephVal {
            yactive=0x00000000,     ///<The Y Phase is active and X Phase is inactive.
            xactive=0x00000001,     ///<The X Phase is active and Y Phase is inactive.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ActivephVal> activeph{}; 
        namespace ActivephValC{
            constexpr Register::FieldValue<decltype(activeph)::Type,ActivephVal::yactive> yactive{};
            constexpr Register::FieldValue<decltype(activeph)::Type,ActivephVal::xactive> xactive{};
        }
        ///Differential X Phase State. 
        enum class XphstVal {
            low=0x00000000,     ///<Set the X Phase output state to low.
            high=0x00000001,     ///<Set the X Phase output state to high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,XphstVal> xphst{}; 
        namespace XphstValC{
            constexpr Register::FieldValue<decltype(xphst)::Type,XphstVal::low> low{};
            constexpr Register::FieldValue<decltype(xphst)::Type,XphstVal::high> high{};
        }
        ///Capture/Compare Interrupt Enable. 
        enum class CcienVal {
            disabled=0x00000000,     ///<Disable the channel capture/compare interrupt.
            enabled=0x00000001,     ///<Enable the channel capture/compare interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,CcienVal> ccien{}; 
        namespace CcienValC{
            constexpr Register::FieldValue<decltype(ccien)::Type,CcienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ccien)::Type,CcienVal::enabled> enabled{};
        }
        ///Capture/Compare DMA Request Enable. 
        enum class CcdenVal {
            disabled=0x00000000,     ///<Do not request DMA data when a channel capture/compare event occurs.
            enabled=0x00000001,     ///<Request DMA data when a channel capture/compare event occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,CcdenVal> ccden{}; 
        namespace CcdenValC{
            constexpr Register::FieldValue<decltype(ccden)::Type,CcdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ccden)::Type,CcdenVal::enabled> enabled{};
        }
        ///Capture/Compare Synchronization Signal Enable. 
        enum class CcsenVal {
            disabled=0x00000000,     ///<Do not send a synchronization signal when a channel capture/compare event occurs.
            enabled=0x00000001,     ///<Send a synchronization signal when a channel capture/compare event occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,CcsenVal> ccsen{}; 
        namespace CcsenValC{
            constexpr Register::FieldValue<decltype(ccsen)::Type,CcsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ccsen)::Type,CcsenVal::enabled> enabled{};
        }
        ///Intermediate Overflow Interrupt Enable. 
        enum class CiovfienVal {
            disabled=0x00000000,     ///<Disable the channel intermediate overflow interrupt.
            enabled=0x00000001,     ///<Enable the channel intermediate overflow interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,CiovfienVal> ciovfien{}; 
        namespace CiovfienValC{
            constexpr Register::FieldValue<decltype(ciovfien)::Type,CiovfienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ciovfien)::Type,CiovfienVal::enabled> enabled{};
        }
        ///Intermediate Overflow DMA Request Enable. 
        enum class CiovfdenVal {
            disabled=0x00000000,     ///<Do not request DMA data when a channel intermediate overflow event occurs.
            enabled=0x00000001,     ///<Request DMA data when a channel intermediate overflow event occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,CiovfdenVal> ciovfden{}; 
        namespace CiovfdenValC{
            constexpr Register::FieldValue<decltype(ciovfden)::Type,CiovfdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ciovfden)::Type,CiovfdenVal::enabled> enabled{};
        }
        ///Intermediate Overflow Synchronization Signal Enable. 
        enum class CiovfsenVal {
            disabled=0x00000000,     ///<Do not send a synchronization signal when a channel intermediate overflow event occurs.
            enabled=0x00000001,     ///<Send a synchronization signal when a channel intermediate overflow occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,CiovfsenVal> ciovfsen{}; 
        namespace CiovfsenValC{
            constexpr Register::FieldValue<decltype(ciovfsen)::Type,CiovfsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ciovfsen)::Type,CiovfsenVal::enabled> enabled{};
        }
    }
    namespace Epca0Ccapv5{    ///<Channel Compare Value
        using Addr = Register::Address<0x4000e160,0xfffc0000,0x00000000,unsigned>;
        ///Channel Compare Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapv{}; 
    }
    namespace Epca0Ccapvupd5{    ///<Channel Compare Update Value
        using Addr = Register::Address<0x4000e170,0xfffc0000,0x00000000,unsigned>;
        ///Channel Compare Update Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,0),Register::ReadWriteAccess,unsigned> ccapvupd{}; 
    }
}
