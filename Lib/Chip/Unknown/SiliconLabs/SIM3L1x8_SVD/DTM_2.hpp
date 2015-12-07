#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x4004c000,0x00700000,0,unsigned>;
        ///Active State Counter. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> stcount{}; 
        namespace StcountValC{
        }
        ///Active State. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> st{}; 
        namespace StValC{
        }
        ///Last State. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> lastst{}; 
        namespace LaststValC{
        }
        ///Inhibit Signal Select. 
        enum class InhsselVal {
            dtmninh0=0x00000000,     ///<Select inhibit signal source DTMnINH.0.
            dtmninh1=0x00000001,     ///<Select inhibit signal source DTMnINH.1.
            dtmninh2=0x00000002,     ///<Select inhibit signal source DTMnINH.2.
            dtmninh3=0x00000003,     ///<Select inhibit signal source DTMnINH.3.
            dtmninh4=0x00000004,     ///<Select inhibit signal source DTMnINH.4.
            dtmninh5=0x00000005,     ///<Select inhibit signal source DTMnINH.5.
            dtmninh6=0x00000006,     ///<Select inhibit signal source DTMnINH.6.
            dtmninh7=0x00000007,     ///<Select inhibit signal source DTMnINH.7.
            dtmninh8=0x00000008,     ///<Select inhibit signal source DTMnINH.8.
            dtmninh9=0x00000009,     ///<Select inhibit signal source DTMnINH.9.
            dtmninh10=0x0000000a,     ///<Select inhibit signal source DTMnINH.10.
            dtmninh11=0x0000000b,     ///<Select inhibit signal source DTMnINH.11.
            dtmninh12=0x0000000c,     ///<Select inhibit signal source DTMnINH.12.
            dtmninh13=0x0000000d,     ///<Select inhibit signal source DTMnINH.13.
            dtmninh14=0x0000000e,     ///<Select inhibit signal source DTMnINH.14.
            dtmninh15=0x0000000f,     ///<Select inhibit signal source DTMnINH.15.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,InhsselVal> inhssel{}; 
        namespace InhsselValC{
            constexpr Register::FieldValue<decltype(inhssel),InhsselVal::dtmninh0> dtmninh0{};
            constexpr Register::FieldValue<decltype(inhssel),InhsselVal::dtmninh1> dtmninh1{};
            constexpr Register::FieldValue<decltype(inhssel),InhsselVal::dtmninh2> dtmninh2{};
            constexpr Register::FieldValue<decltype(inhssel),InhsselVal::dtmninh3> dtmninh3{};
            constexpr Register::FieldValue<decltype(inhssel),InhsselVal::dtmninh4> dtmninh4{};
            constexpr Register::FieldValue<decltype(inhssel),InhsselVal::dtmninh5> dtmninh5{};
            constexpr Register::FieldValue<decltype(inhssel),InhsselVal::dtmninh6> dtmninh6{};
            constexpr Register::FieldValue<decltype(inhssel),InhsselVal::dtmninh7> dtmninh7{};
            constexpr Register::FieldValue<decltype(inhssel),InhsselVal::dtmninh8> dtmninh8{};
            constexpr Register::FieldValue<decltype(inhssel),InhsselVal::dtmninh9> dtmninh9{};
            constexpr Register::FieldValue<decltype(inhssel),InhsselVal::dtmninh10> dtmninh10{};
            constexpr Register::FieldValue<decltype(inhssel),InhsselVal::dtmninh11> dtmninh11{};
            constexpr Register::FieldValue<decltype(inhssel),InhsselVal::dtmninh12> dtmninh12{};
            constexpr Register::FieldValue<decltype(inhssel),InhsselVal::dtmninh13> dtmninh13{};
            constexpr Register::FieldValue<decltype(inhssel),InhsselVal::dtmninh14> dtmninh14{};
            constexpr Register::FieldValue<decltype(inhssel),InhsselVal::dtmninh15> dtmninh15{};
        }
        ///Debug Mode. 
        enum class DbgmdVal {
            run=0x00000000,     ///<The DTM module will continue to operate while the core is halted in debug mode.
            halt=0x00000001,     ///<A debug breakpoint will cause the DTM module to halt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,DbgmdVal> dbgmd{}; 
        namespace DbgmdValC{
            constexpr Register::FieldValue<decltype(dbgmd),DbgmdVal::run> run{};
            constexpr Register::FieldValue<decltype(dbgmd),DbgmdVal::halt> halt{};
        }
        ///Inhibit Status Flag. 
        enum class InhfVal {
            notSet=0x00000000,     ///<The inhibit signal is inactive.
            set=0x00000001,     ///<The inhibit signal is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,InhfVal> inhf{}; 
        namespace InhfValC{
            constexpr Register::FieldValue<decltype(inhf),InhfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(inhf),InhfVal::set> set{};
        }
        ///Destination Peripheral DMA Request Status Flag. 
        enum class DstreqfVal {
            notSet=0x00000000,     ///<The destination peripheral did not request a DMA transfer.
            set=0x00000001,     ///<The destination peripheral requested a DMA transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,DstreqfVal> dstreqf{}; 
        namespace DstreqfValC{
            constexpr Register::FieldValue<decltype(dstreqf),DstreqfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(dstreqf),DstreqfVal::set> set{};
        }
        ///Source Peripheral DMA Request Status Flag. 
        enum class SrcreqfVal {
            notSet=0x00000000,     ///<The source peripheral did not request a DMA transfer.
            set=0x00000001,     ///<The source peripheral requested a DMA transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,SrcreqfVal> srcreqf{}; 
        namespace SrcreqfValC{
            constexpr Register::FieldValue<decltype(srcreqf),SrcreqfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(srcreqf),SrcreqfVal::set> set{};
        }
        ///DTM Module Inhibit. 
        enum class DtminhVal {
            inactive=0x00000000,     ///<The DTM module does not ignore DMA requests.
            active=0x00000001,     ///<The DTM module ignores DMA requests until this bit is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,DtminhVal> dtminh{}; 
        namespace DtminhValC{
            constexpr Register::FieldValue<decltype(dtminh),DtminhVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(dtminh),DtminhVal::active> active{};
        }
        ///Timeout Error Interrupt Flag. 
        enum class ToerriVal {
            notSet=0x00000000,     ///<A timeout error has not occurred.
            set=0x00000001,     ///<A timeout error occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,ToerriVal> toerri{}; 
        namespace ToerriValC{
            constexpr Register::FieldValue<decltype(toerri),ToerriVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(toerri),ToerriVal::set> set{};
        }
        ///DMA Error Interrupt Flag. 
        enum class DmaerriVal {
            notSet=0x00000000,     ///<A DMA error has not occurred.
            set=0x00000001,     ///<A DMA error occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,DmaerriVal> dmaerri{}; 
        namespace DmaerriValC{
            constexpr Register::FieldValue<decltype(dmaerri),DmaerriVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(dmaerri),DmaerriVal::set> set{};
        }
        ///Module Interrupt Flag. 
        enum class DtmiVal {
            notSet=0x00000000,     ///<A state transition or timeout has not occurred.
            set=0x00000001,     ///<A state transition (SECSTIEN or PRISTIEN set to 1) or timeout (TOERRIEN = 1) occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DtmiVal> dtmi{}; 
        namespace DtmiValC{
            constexpr Register::FieldValue<decltype(dtmi),DtmiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(dtmi),DtmiVal::set> set{};
        }
        ///Module Enable. 
        enum class DtmenVal {
            disabled=0x00000000,     ///<Disable the DTM module.
            enabled=0x00000001,     ///<Enable the DTM module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,DtmenVal> dtmen{}; 
        namespace DtmenValC{
            constexpr Register::FieldValue<decltype(dtmen),DtmenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dtmen),DtmenVal::enabled> enabled{};
        }
    }
    namespace Nonetimeout{    ///<Module Timeout
        using Addr = Register::Address<0x4004c010,0x00000000,0,unsigned>;
        ///Timeout Counter Reload. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> toreload{}; 
        namespace ToreloadValC{
        }
        ///Timeout Counter. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> tocount{}; 
        namespace TocountValC{
        }
    }
    namespace Nonemstcount{    ///<Master Counter
        using Addr = Register::Address<0x4004c020,0xffff0000,0,unsigned>;
        ///Master Counter. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mstcount{}; 
        namespace MstcountValC{
        }
    }
    namespace Nonestateaddr{    ///<State Address
        using Addr = Register::Address<0x4004c030,0x00000003,0,unsigned>;
        ///State Address. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> stateaddr{}; 
        namespace StateaddrValC{
        }
    }
    namespace Nonestate{    ///<Active DTM State
        using Addr = Register::Address<0x4004c040,0x00000000,0,unsigned>;
        ///Active State Counter Reload. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> streload{}; 
        namespace StreloadValC{
        }
        ///Secondary State. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> secst{}; 
        namespace SecstValC{
        }
        ///Primary State. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> prist{}; 
        namespace PristValC{
        }
        ///Destination Module. 
        enum class DstmodVal {
            dtmndst0=0x00000000,     ///<Select destination module DTMnDST.0.
            dtmndst1=0x00000001,     ///<Select destination module DTMnDST.1.
            dtmndst2=0x00000002,     ///<Select destination module DTMnDST.2.
            dtmndst3=0x00000003,     ///<Select destination module DTMnDST.3.
            dtmndst4=0x00000004,     ///<Select destination module DTMnDST.4.
            dtmndst5=0x00000005,     ///<Select destination module DTMnDST.5.
            dtmndst6=0x00000006,     ///<Select destination module DTMnDST.6.
            dtmndst7=0x00000007,     ///<Select destination module DTMnDST.7.
            dtmndst8=0x00000008,     ///<Select destination module DTMnDST.8.
            dtmndst9=0x00000009,     ///<Select destination module DTMnDST.9.
            dtmndst10=0x0000000a,     ///<Select destination module DTMnDST.10.
            dtmndst11=0x0000000b,     ///<Select destination module DTMnDST.11.
            dtmndst12=0x0000000c,     ///<Select destination module DTMnDST.12.
            dtmndst13=0x0000000d,     ///<Select destination module DTMnDST.13.
            dtmndst14=0x0000000e,     ///<Select destination module DTMnDST.14.
            dtmndst15=0x0000000f,     ///<Select no destination module (DTMnDST.15).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,DstmodVal> dstmod{}; 
        namespace DstmodValC{
            constexpr Register::FieldValue<decltype(dstmod),DstmodVal::dtmndst0> dtmndst0{};
            constexpr Register::FieldValue<decltype(dstmod),DstmodVal::dtmndst1> dtmndst1{};
            constexpr Register::FieldValue<decltype(dstmod),DstmodVal::dtmndst2> dtmndst2{};
            constexpr Register::FieldValue<decltype(dstmod),DstmodVal::dtmndst3> dtmndst3{};
            constexpr Register::FieldValue<decltype(dstmod),DstmodVal::dtmndst4> dtmndst4{};
            constexpr Register::FieldValue<decltype(dstmod),DstmodVal::dtmndst5> dtmndst5{};
            constexpr Register::FieldValue<decltype(dstmod),DstmodVal::dtmndst6> dtmndst6{};
            constexpr Register::FieldValue<decltype(dstmod),DstmodVal::dtmndst7> dtmndst7{};
            constexpr Register::FieldValue<decltype(dstmod),DstmodVal::dtmndst8> dtmndst8{};
            constexpr Register::FieldValue<decltype(dstmod),DstmodVal::dtmndst9> dtmndst9{};
            constexpr Register::FieldValue<decltype(dstmod),DstmodVal::dtmndst10> dtmndst10{};
            constexpr Register::FieldValue<decltype(dstmod),DstmodVal::dtmndst11> dtmndst11{};
            constexpr Register::FieldValue<decltype(dstmod),DstmodVal::dtmndst12> dtmndst12{};
            constexpr Register::FieldValue<decltype(dstmod),DstmodVal::dtmndst13> dtmndst13{};
            constexpr Register::FieldValue<decltype(dstmod),DstmodVal::dtmndst14> dtmndst14{};
            constexpr Register::FieldValue<decltype(dstmod),DstmodVal::dtmndst15> dtmndst15{};
        }
        ///Source Module. 
        enum class SrcmodVal {
            dtmnsrc0=0x00000000,     ///<Select source module DTMnSRC.0.
            dtmnsrc1=0x00000001,     ///<Select source module DTMnSRC.1.
            dtmnsrc2=0x00000002,     ///<Select source module DTMnSRC.2.
            dtmnsrc3=0x00000003,     ///<Select source module DTMnSRC.3.
            dtmnsrc4=0x00000004,     ///<Select source module DTMnSRC.4.
            dtmnsrc5=0x00000005,     ///<Select source module DTMnSRC.5.
            dtmnsrc6=0x00000006,     ///<Select source module DTMnSRC.6.
            dtmnsrc7=0x00000007,     ///<Select source module DTMnSRC.7.
            dtmnsrc8=0x00000008,     ///<Select source module DTMnSRC.8.
            dtmnsrc9=0x00000009,     ///<Select source module DTMnSRC.9.
            dtmnsrc10=0x0000000a,     ///<Select source module DTMnSRC.10.
            dtmnsrc11=0x0000000b,     ///<Select source module DTMnSRC.11.
            dtmnsrc12=0x0000000c,     ///<Select source module DTMnSRC.12.
            dtmnsrc13=0x0000000d,     ///<Select source module DTMnSRC.13.
            dtmnsrc14=0x0000000e,     ///<Select source module DTMnSRC.14.
            dtmnsrc15=0x0000000f,     ///<Select no source module (DTMnSRC.15).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,SrcmodVal> srcmod{}; 
        namespace SrcmodValC{
            constexpr Register::FieldValue<decltype(srcmod),SrcmodVal::dtmnsrc0> dtmnsrc0{};
            constexpr Register::FieldValue<decltype(srcmod),SrcmodVal::dtmnsrc1> dtmnsrc1{};
            constexpr Register::FieldValue<decltype(srcmod),SrcmodVal::dtmnsrc2> dtmnsrc2{};
            constexpr Register::FieldValue<decltype(srcmod),SrcmodVal::dtmnsrc3> dtmnsrc3{};
            constexpr Register::FieldValue<decltype(srcmod),SrcmodVal::dtmnsrc4> dtmnsrc4{};
            constexpr Register::FieldValue<decltype(srcmod),SrcmodVal::dtmnsrc5> dtmnsrc5{};
            constexpr Register::FieldValue<decltype(srcmod),SrcmodVal::dtmnsrc6> dtmnsrc6{};
            constexpr Register::FieldValue<decltype(srcmod),SrcmodVal::dtmnsrc7> dtmnsrc7{};
            constexpr Register::FieldValue<decltype(srcmod),SrcmodVal::dtmnsrc8> dtmnsrc8{};
            constexpr Register::FieldValue<decltype(srcmod),SrcmodVal::dtmnsrc9> dtmnsrc9{};
            constexpr Register::FieldValue<decltype(srcmod),SrcmodVal::dtmnsrc10> dtmnsrc10{};
            constexpr Register::FieldValue<decltype(srcmod),SrcmodVal::dtmnsrc11> dtmnsrc11{};
            constexpr Register::FieldValue<decltype(srcmod),SrcmodVal::dtmnsrc12> dtmnsrc12{};
            constexpr Register::FieldValue<decltype(srcmod),SrcmodVal::dtmnsrc13> dtmnsrc13{};
            constexpr Register::FieldValue<decltype(srcmod),SrcmodVal::dtmnsrc14> dtmnsrc14{};
            constexpr Register::FieldValue<decltype(srcmod),SrcmodVal::dtmnsrc15> dtmnsrc15{};
        }
        ///DTM Channel Select. 
        enum class DtmchselVal {
            chA=0x00000000,     ///<Select DTMn channel A for this state.
            chB=0x00000001,     ///<Select DTMn channel B for this state.
            chC=0x00000002,     ///<Select DTMn channel C for this state.
            chD=0x00000003,     ///<Select DTMn channel D for this state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,DtmchselVal> dtmchsel{}; 
        namespace DtmchselValC{
            constexpr Register::FieldValue<decltype(dtmchsel),DtmchselVal::chA> chA{};
            constexpr Register::FieldValue<decltype(dtmchsel),DtmchselVal::chB> chB{};
            constexpr Register::FieldValue<decltype(dtmchsel),DtmchselVal::chC> chC{};
            constexpr Register::FieldValue<decltype(dtmchsel),DtmchselVal::chD> chD{};
        }
        ///Inhibit Signal Polarity. 
        enum class InhspolVal {
            activeLow=0x00000000,     ///<A logic low on the pin selected by INHSEL will allow the DTM to proceed.
            activeHigh=0x00000001,     ///<A logic high on the pin selected by INHSEL will allow the DTM to proceed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,InhspolVal> inhspol{}; 
        namespace InhspolValC{
            constexpr Register::FieldValue<decltype(inhspol),InhspolVal::activeLow> activeLow{};
            constexpr Register::FieldValue<decltype(inhspol),InhspolVal::activeHigh> activeHigh{};
        }
        ///Module Inhibit Enable. 
        enum class DtminhVal {
            inactive=0x00000000,     ///<The DTM module does not ignore any DMA requests.
            active=0x00000001,     ///<The DTM module ignores all DMA requests until the inhibit signal selected by INHSSEL matches the polarity polarity set by INHSPOL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,DtminhVal> dtminh{}; 
        namespace DtminhValC{
            constexpr Register::FieldValue<decltype(dtminh),DtminhVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(dtminh),DtminhVal::active> active{};
        }
        ///Master Decrement Enable. 
        enum class MstdecenVal {
            disabled=0x00000000,     ///<Disable master counter decrements.
            enabled=0x00000001,     ///<Enable master counter decrements.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,MstdecenVal> mstdecen{}; 
        namespace MstdecenValC{
            constexpr Register::FieldValue<decltype(mstdecen),MstdecenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(mstdecen),MstdecenVal::enabled> enabled{};
        }
        ///Timeout Enable. 
        enum class ToerrienVal {
            disabled=0x00000000,     ///<Disable timeouts and timeout interrupts.
            enabled=0x00000001,     ///<Enable timeouts and timeout interrupts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,ToerrienVal> toerrien{}; 
        namespace ToerrienValC{
            constexpr Register::FieldValue<decltype(toerrien),ToerrienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(toerrien),ToerrienVal::enabled> enabled{};
        }
        ///Secondary State Transition Interrupt Enable. 
        enum class SecstienVal {
            disabled=0x00000000,     ///<Disable secondary state transition interrupts.
            enabled=0x00000001,     ///<Enable secondary state transition interrupts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,SecstienVal> secstien{}; 
        namespace SecstienValC{
            constexpr Register::FieldValue<decltype(secstien),SecstienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(secstien),SecstienVal::enabled> enabled{};
        }
        ///Primary State Transition Interrupt Enable. 
        enum class PristienVal {
            disabled=0x00000000,     ///<Disable primary state transition interrupts.
            enabled=0x00000001,     ///<Enable primary state transition interrupts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,PristienVal> pristien{}; 
        namespace PristienValC{
            constexpr Register::FieldValue<decltype(pristien),PristienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pristien),PristienVal::enabled> enabled{};
        }
    }
}
