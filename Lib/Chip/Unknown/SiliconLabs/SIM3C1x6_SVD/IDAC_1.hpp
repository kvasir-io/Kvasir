#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x40032000,0x1f8ec000,0,unsigned>;
        ///Output Update Trigger. 
        enum class OupdtVal {
            dacnt8=0x00000000,     ///<The IDAC output updates using the DACnT8 (Timer 0 Low Overflow) trigger source.
            dacnt9=0x00000001,     ///<The IDAC output updates using the DACnT9 (Timer 1 High Overflow) trigger source.
            dacnt10=0x00000002,     ///<The IDAC output updates using the DACnT10 (Timer 1 Low Overflow) trigger source.
            dacnt11=0x00000003,     ///<The IDAC output updates using the DACnT11 (Timer 1 High Overflow) trigger source.
            dacnt12=0x00000004,     ///<The IDAC output updates on the rising edge of the trigger source selected by ETRIG.
            dacnt13=0x00000005,     ///<The IDAC output updates on the falling edge of the trigger source selected by ETRIG.
            dacnt14=0x00000006,     ///<The IDAC output updates on any edge of the trigger source selected by ETRIG.
            dacnt15=0x00000007,     ///<The IDAC output updates on write to DATA register (On Demand).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,OupdtVal> oupdt{}; 
        namespace OupdtValC{
            constexpr Register::FieldValue<decltype(oupdt),OupdtVal::dacnt8> dacnt8{};
            constexpr Register::FieldValue<decltype(oupdt),OupdtVal::dacnt9> dacnt9{};
            constexpr Register::FieldValue<decltype(oupdt),OupdtVal::dacnt10> dacnt10{};
            constexpr Register::FieldValue<decltype(oupdt),OupdtVal::dacnt11> dacnt11{};
            constexpr Register::FieldValue<decltype(oupdt),OupdtVal::dacnt12> dacnt12{};
            constexpr Register::FieldValue<decltype(oupdt),OupdtVal::dacnt13> dacnt13{};
            constexpr Register::FieldValue<decltype(oupdt),OupdtVal::dacnt14> dacnt14{};
            constexpr Register::FieldValue<decltype(oupdt),OupdtVal::dacnt15> dacnt15{};
        }
        ///Edge Trigger Source Select. 
        enum class EtrigVal {
            dacnt0=0x00000000,     ///<Select DACnT0 (PB3.2) as the IDAC external trigger source.
            dacnt1=0x00000001,     ///<Select DACnT1 (PB3.3) as the IDAC external trigger source.
            dacnt2=0x00000002,     ///<Select DACnT2 (PB3.5) as the IDAC external trigger source.
            dacnt3=0x00000003,     ///<Select DACnT3 (PB3.6) as the IDAC external trigger source.
            dacnt4=0x00000004,     ///<Select DACnT4 (PB3.7) as the IDAC external trigger source.
            dacnt5=0x00000005,     ///<Select DACnT5 (PB3.8) as the IDAC external trigger source.
            dacnt6=0x00000006,     ///<Select DACnT6 (PB3.9) as the IDAC external trigger source.
            dacnt7=0x00000007,     ///<Select DACnT7 (SSG0 EX3) as the IDAC external trigger source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,EtrigVal> etrig{}; 
        namespace EtrigValC{
            constexpr Register::FieldValue<decltype(etrig),EtrigVal::dacnt0> dacnt0{};
            constexpr Register::FieldValue<decltype(etrig),EtrigVal::dacnt1> dacnt1{};
            constexpr Register::FieldValue<decltype(etrig),EtrigVal::dacnt2> dacnt2{};
            constexpr Register::FieldValue<decltype(etrig),EtrigVal::dacnt3> dacnt3{};
            constexpr Register::FieldValue<decltype(etrig),EtrigVal::dacnt4> dacnt4{};
            constexpr Register::FieldValue<decltype(etrig),EtrigVal::dacnt5> dacnt5{};
            constexpr Register::FieldValue<decltype(etrig),EtrigVal::dacnt6> dacnt6{};
            constexpr Register::FieldValue<decltype(etrig),EtrigVal::dacnt7> dacnt7{};
        }
        ///Output Mode. 
        enum class OutmdVal {
            v0p5Ma=0x00000000,     ///<The full-scale output current is 0.5 mA.
            v1Ma=0x00000001,     ///<The full-scale output current is 1 mA.
            v2Ma=0x00000002,     ///<The full-scale output current is 2 mA.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,OutmdVal> outmd{}; 
        namespace OutmdValC{
            constexpr Register::FieldValue<decltype(outmd),OutmdVal::v0p5Ma> v0p5Ma{};
            constexpr Register::FieldValue<decltype(outmd),OutmdVal::v1Ma> v1Ma{};
            constexpr Register::FieldValue<decltype(outmd),OutmdVal::v2Ma> v2Ma{};
        }
        ///Data Input Format. 
        enum class InfmtVal {
            v110Bit=0x00000000,     ///<Writes are interpreted as one 10-bit sample.
            v210Bit=0x00000001,     ///<Writes are interpreted as two 10-bit samples.
            v48Bit=0x00000002,     ///<Writes are interpreted as four 8-bit samples.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,InfmtVal> infmt{}; 
        namespace InfmtValC{
            constexpr Register::FieldValue<decltype(infmt),InfmtVal::v110Bit> v110Bit{};
            constexpr Register::FieldValue<decltype(infmt),InfmtVal::v210Bit> v210Bit{};
            constexpr Register::FieldValue<decltype(infmt),InfmtVal::v48Bit> v48Bit{};
        }
        ///DMA Run. 
        enum class DmarunVal {
            disabled=0x00000000,     ///<Read: No DMA operations are occurring or the DMA is done. Write: No effect.
            enabled=0x00000001,     ///<Read: A DMA operation is currently in progress. Write: Start a DMA operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,DmarunVal> dmarun{}; 
        namespace DmarunValC{
            constexpr Register::FieldValue<decltype(dmarun),DmarunVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dmarun),DmarunVal::enabled> enabled{};
        }
        ///Data Justification Select. 
        enum class JselVal {
            right=0x00000000,     ///<Data is right-justified.
            left=0x00000001,     ///<Data is left-justified.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,JselVal> jsel{}; 
        namespace JselValC{
            constexpr Register::FieldValue<decltype(jsel),JselVal::right> right{};
            constexpr Register::FieldValue<decltype(jsel),JselVal::left> left{};
        }
        ///Data Buffer Reset. 
        enum class BufresetVal {
            reset=0x00000001,     ///<Initiate a data buffer reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,BufresetVal> bufreset{}; 
        namespace BufresetValC{
            constexpr Register::FieldValue<decltype(bufreset),BufresetVal::reset> reset{};
        }
        ///Trigger Source Inhibit. 
        enum class TriginhVal {
            inactive=0x00000000,     ///<The selected trigger source will cause the IDAC output to update.
            active=0x00000001,     ///<The selected trigger source will not update the IDAC output, except for On-Demand DATA writes.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,TriginhVal> triginh{}; 
        namespace TriginhValC{
            constexpr Register::FieldValue<decltype(triginh),TriginhVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(triginh),TriginhVal::active> active{};
        }
        ///Wrap Mode Enable. 
        enum class WrapenVal {
            disabled=0x00000000,     ///<The IDAC will not wrap when it reaches the end of the data buffer.
            enabled=0x00000001,     ///<The IDAC will cycle through the data buffer contents.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,WrapenVal> wrapen{}; 
        namespace WrapenValC{
            constexpr Register::FieldValue<decltype(wrapen),WrapenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(wrapen),WrapenVal::enabled> enabled{};
        }
        ///FIFO Overrun Interrupt Enable. 
        enum class OrienVal {
            disabled=0x00000000,     ///<Disable the FIFO overrun interrupt (ORI).
            enabled=0x00000001,     ///<Enable the FIFO overrun interrupt (ORI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,OrienVal> orien{}; 
        namespace OrienValC{
            constexpr Register::FieldValue<decltype(orien),OrienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(orien),OrienVal::enabled> enabled{};
        }
        ///FIFO Underrun Interrupt Enable. 
        enum class UrienVal {
            disabled=0x00000000,     ///<Disable the FIFO underrun interrupt (URI).
            enabled=0x00000001,     ///<Enable the FIFO underrun interrupt (URI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,UrienVal> urien{}; 
        namespace UrienValC{
            constexpr Register::FieldValue<decltype(urien),UrienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(urien),UrienVal::enabled> enabled{};
        }
        ///FIFO Went Empty Interrupt Enable. 
        enum class WeienVal {
            disabled=0x00000000,     ///<Disable the FIFO went empty interrupt (WEI).
            enabled=0x00000001,     ///<Enable the FIFO went empty interrupt (WEI).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,WeienVal> weien{}; 
        namespace WeienValC{
            constexpr Register::FieldValue<decltype(weien),WeienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(weien),WeienVal::enabled> enabled{};
        }
        ///IDAC Debug Mode. 
        enum class DbgmdVal {
            run=0x00000000,     ///<The IDAC module will continue to operate while the core is halted in debug mode.
            halt=0x00000001,     ///<A debug breakpoint will cause the IDAC module to halt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,DbgmdVal> dbgmd{}; 
        namespace DbgmdValC{
            constexpr Register::FieldValue<decltype(dbgmd),DbgmdVal::run> run{};
            constexpr Register::FieldValue<decltype(dbgmd),DbgmdVal::halt> halt{};
        }
        ///Load Resistor Enable. 
        enum class LoadenVal {
            disabled=0x00000000,     ///<Disable the internal load resistor.
            enabled=0x00000001,     ///<Enable the internal load resistor.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,LoadenVal> loaden{}; 
        namespace LoadenValC{
            constexpr Register::FieldValue<decltype(loaden),LoadenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(loaden),LoadenVal::enabled> enabled{};
        }
        ///IDAC Enable. 
        enum class IdacenVal {
            disabled=0x00000000,     ///<Disable the IDAC.
            enabled=0x00000001,     ///<Enable the IDAC.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,IdacenVal> idacen{}; 
        namespace IdacenValC{
            constexpr Register::FieldValue<decltype(idacen),IdacenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(idacen),IdacenVal::enabled> enabled{};
        }
    }
    namespace Nonedata{    ///<Output Data
        using Addr = Register::Address<0x40032010,0x00000000,0,unsigned>;
        ///Output Data. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Nonebufstatus{    ///<FIFO Buffer Status
        using Addr = Register::Address<0x40032020,0xffffff88,0,unsigned>;
        ///FIFO Level. 
        enum class LevelVal {
            empty=0x00000000,     ///<The data FIFO is empty.
            v1word=0x00000001,     ///<The data FIFO contains one word.
            v2words=0x00000002,     ///<The data FIFO contains two words.
            v3words=0x00000003,     ///<The data FIFO contains three words.
            v4words=0x00000004,     ///<The data FIFO is full and contains four words.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,LevelVal> level{}; 
        namespace LevelValC{
            constexpr Register::FieldValue<decltype(level),LevelVal::empty> empty{};
            constexpr Register::FieldValue<decltype(level),LevelVal::v1word> v1word{};
            constexpr Register::FieldValue<decltype(level),LevelVal::v2words> v2words{};
            constexpr Register::FieldValue<decltype(level),LevelVal::v3words> v3words{};
            constexpr Register::FieldValue<decltype(level),LevelVal::v4words> v4words{};
        }
        ///FIFO Overrun Interrupt Flag. 
        enum class OriVal {
            notSet=0x00000000,     ///<Read: A FIFO overrun has not occurred. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A FIFO overrun occurred. Write: Force a FIFO overrun interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,OriVal> ori{}; 
        namespace OriValC{
            constexpr Register::FieldValue<decltype(ori),OriVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(ori),OriVal::set> set{};
        }
        ///FIFO Underrun Interrupt Flag. 
        enum class UriVal {
            notSet=0x00000000,     ///<Read: A FIFO underrun has not occurred. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: A FIFO underrun occurred. Write: Force a FIFO underrun interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,UriVal> uri{}; 
        namespace UriValC{
            constexpr Register::FieldValue<decltype(uri),UriVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(uri),UriVal::set> set{};
        }
        ///FIFO Went Empty Interrupt Flag. 
        enum class WeiVal {
            notSet=0x00000000,     ///<Read: A FIFO went empty condition has not occurred. Write: Clear the interrupt.
            set=0x00000001,     ///<Read: The FIFO is empty. Write: Force a FIFO went empty interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,WeiVal> wei{}; 
        namespace WeiValC{
            constexpr Register::FieldValue<decltype(wei),WeiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(wei),WeiVal::set> set{};
        }
    }
    namespace Nonebuffer10{    ///<FIFO Buffer Entries 0 and 1
        using Addr = Register::Address<0x40032030,0x00000000,0,unsigned>;
        ///FIFO Buffer Entry 0. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> buffer0{}; 
        namespace Buffer0ValC{
        }
        ///FIFO Buffer Entry 1. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffer1{}; 
        namespace Buffer1ValC{
        }
    }
    namespace Nonebuffer32{    ///<FIFO Buffer Entries 2 and 3
        using Addr = Register::Address<0x40032040,0x00000000,0,unsigned>;
        ///FIFO Buffer Entry 2. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> buffer2{}; 
        namespace Buffer2ValC{
        }
        ///FIFO Buffer Entry 3. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffer3{}; 
        namespace Buffer3ValC{
        }
    }
    namespace Nonegainadj{    ///<Output Current Gain Adjust
        using Addr = Register::Address<0x40032050,0xffffffe0,0,unsigned>;
        ///Output Current Gain Adjust. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> gainadj{}; 
        namespace GainadjValC{
        }
    }
}
