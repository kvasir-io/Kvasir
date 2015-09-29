#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x4004c000,0x00700000,0,unsigned>;
        ///Active State Counter. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> stcount{}; 
        ///Active State. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> st{}; 
        ///Last State. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> lastst{}; 
        ///Inhibit Signal Select. 
        enum class inhsselVal {
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
        namespace inhsselValC{
            constexpr MPL::Value<inhsselVal,inhsselVal::dtmninh0> dtmninh0{};
            constexpr MPL::Value<inhsselVal,inhsselVal::dtmninh1> dtmninh1{};
            constexpr MPL::Value<inhsselVal,inhsselVal::dtmninh2> dtmninh2{};
            constexpr MPL::Value<inhsselVal,inhsselVal::dtmninh3> dtmninh3{};
            constexpr MPL::Value<inhsselVal,inhsselVal::dtmninh4> dtmninh4{};
            constexpr MPL::Value<inhsselVal,inhsselVal::dtmninh5> dtmninh5{};
            constexpr MPL::Value<inhsselVal,inhsselVal::dtmninh6> dtmninh6{};
            constexpr MPL::Value<inhsselVal,inhsselVal::dtmninh7> dtmninh7{};
            constexpr MPL::Value<inhsselVal,inhsselVal::dtmninh8> dtmninh8{};
            constexpr MPL::Value<inhsselVal,inhsselVal::dtmninh9> dtmninh9{};
            constexpr MPL::Value<inhsselVal,inhsselVal::dtmninh10> dtmninh10{};
            constexpr MPL::Value<inhsselVal,inhsselVal::dtmninh11> dtmninh11{};
            constexpr MPL::Value<inhsselVal,inhsselVal::dtmninh12> dtmninh12{};
            constexpr MPL::Value<inhsselVal,inhsselVal::dtmninh13> dtmninh13{};
            constexpr MPL::Value<inhsselVal,inhsselVal::dtmninh14> dtmninh14{};
            constexpr MPL::Value<inhsselVal,inhsselVal::dtmninh15> dtmninh15{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,inhsselVal> inhssel{}; 
        ///Debug Mode. 
        enum class dbgmdVal {
            run=0x00000000,     ///<The DTM module will continue to operate while the core is halted in debug mode.
            halt=0x00000001,     ///<A debug breakpoint will cause the DTM module to halt.
        };
        namespace dbgmdValC{
            constexpr MPL::Value<dbgmdVal,dbgmdVal::run> run{};
            constexpr MPL::Value<dbgmdVal,dbgmdVal::halt> halt{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,dbgmdVal> dbgmd{}; 
        ///Inhibit Status Flag. 
        enum class inhfVal {
            notSet=0x00000000,     ///<The inhibit signal is inactive.
            set=0x00000001,     ///<The inhibit signal is active.
        };
        namespace inhfValC{
            constexpr MPL::Value<inhfVal,inhfVal::notSet> notSet{};
            constexpr MPL::Value<inhfVal,inhfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,inhfVal> inhf{}; 
        ///Destination Peripheral DMA Request Status Flag. 
        enum class dstreqfVal {
            notSet=0x00000000,     ///<The destination peripheral did not request a DMA transfer.
            set=0x00000001,     ///<The destination peripheral requested a DMA transfer.
        };
        namespace dstreqfValC{
            constexpr MPL::Value<dstreqfVal,dstreqfVal::notSet> notSet{};
            constexpr MPL::Value<dstreqfVal,dstreqfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,dstreqfVal> dstreqf{}; 
        ///Source Peripheral DMA Request Status Flag. 
        enum class srcreqfVal {
            notSet=0x00000000,     ///<The source peripheral did not request a DMA transfer.
            set=0x00000001,     ///<The source peripheral requested a DMA transfer.
        };
        namespace srcreqfValC{
            constexpr MPL::Value<srcreqfVal,srcreqfVal::notSet> notSet{};
            constexpr MPL::Value<srcreqfVal,srcreqfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,srcreqfVal> srcreqf{}; 
        ///DTM Module Inhibit. 
        enum class dtminhVal {
            inactive=0x00000000,     ///<The DTM module does not ignore DMA requests.
            active=0x00000001,     ///<The DTM module ignores DMA requests until this bit is cleared.
        };
        namespace dtminhValC{
            constexpr MPL::Value<dtminhVal,dtminhVal::inactive> inactive{};
            constexpr MPL::Value<dtminhVal,dtminhVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,dtminhVal> dtminh{}; 
        ///Timeout Error Interrupt Flag. 
        enum class toerriVal {
            notSet=0x00000000,     ///<A timeout error has not occurred.
            set=0x00000001,     ///<A timeout error occurred.
        };
        namespace toerriValC{
            constexpr MPL::Value<toerriVal,toerriVal::notSet> notSet{};
            constexpr MPL::Value<toerriVal,toerriVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,toerriVal> toerri{}; 
        ///DMA Error Interrupt Flag. 
        enum class dmaerriVal {
            notSet=0x00000000,     ///<A DMA error has not occurred.
            set=0x00000001,     ///<A DMA error occurred.
        };
        namespace dmaerriValC{
            constexpr MPL::Value<dmaerriVal,dmaerriVal::notSet> notSet{};
            constexpr MPL::Value<dmaerriVal,dmaerriVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,dmaerriVal> dmaerri{}; 
        ///Module Interrupt Flag. 
        enum class dtmiVal {
            notSet=0x00000000,     ///<A state transition or timeout has not occurred.
            set=0x00000001,     ///<A state transition (SECSTIEN or PRISTIEN set to 1) or timeout (TOERRIEN = 1) occurred.
        };
        namespace dtmiValC{
            constexpr MPL::Value<dtmiVal,dtmiVal::notSet> notSet{};
            constexpr MPL::Value<dtmiVal,dtmiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dtmiVal> dtmi{}; 
        ///Module Enable. 
        enum class dtmenVal {
            disabled=0x00000000,     ///<Disable the DTM module.
            enabled=0x00000001,     ///<Enable the DTM module.
        };
        namespace dtmenValC{
            constexpr MPL::Value<dtmenVal,dtmenVal::disabled> disabled{};
            constexpr MPL::Value<dtmenVal,dtmenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,dtmenVal> dtmen{}; 
    }
    namespace Nonetimeout{    ///<Module Timeout
        using Addr = Register::Address<0x4004c010,0x00000000,0,unsigned>;
        ///Timeout Counter Reload. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> toreload{}; 
        ///Timeout Counter. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> tocount{}; 
    }
    namespace Nonemstcount{    ///<Master Counter
        using Addr = Register::Address<0x4004c020,0xffff0000,0,unsigned>;
        ///Master Counter. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mstcount{}; 
    }
    namespace Nonestateaddr{    ///<State Address
        using Addr = Register::Address<0x4004c030,0x00000003,0,unsigned>;
        ///State Address. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> stateaddr{}; 
    }
    namespace Nonestate{    ///<Active DTM State
        using Addr = Register::Address<0x4004c040,0x00000000,0,unsigned>;
        ///Active State Counter Reload. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> streload{}; 
        ///Secondary State. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> secst{}; 
        ///Primary State. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> prist{}; 
        ///Destination Module. 
        enum class dstmodVal {
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
        namespace dstmodValC{
            constexpr MPL::Value<dstmodVal,dstmodVal::dtmndst0> dtmndst0{};
            constexpr MPL::Value<dstmodVal,dstmodVal::dtmndst1> dtmndst1{};
            constexpr MPL::Value<dstmodVal,dstmodVal::dtmndst2> dtmndst2{};
            constexpr MPL::Value<dstmodVal,dstmodVal::dtmndst3> dtmndst3{};
            constexpr MPL::Value<dstmodVal,dstmodVal::dtmndst4> dtmndst4{};
            constexpr MPL::Value<dstmodVal,dstmodVal::dtmndst5> dtmndst5{};
            constexpr MPL::Value<dstmodVal,dstmodVal::dtmndst6> dtmndst6{};
            constexpr MPL::Value<dstmodVal,dstmodVal::dtmndst7> dtmndst7{};
            constexpr MPL::Value<dstmodVal,dstmodVal::dtmndst8> dtmndst8{};
            constexpr MPL::Value<dstmodVal,dstmodVal::dtmndst9> dtmndst9{};
            constexpr MPL::Value<dstmodVal,dstmodVal::dtmndst10> dtmndst10{};
            constexpr MPL::Value<dstmodVal,dstmodVal::dtmndst11> dtmndst11{};
            constexpr MPL::Value<dstmodVal,dstmodVal::dtmndst12> dtmndst12{};
            constexpr MPL::Value<dstmodVal,dstmodVal::dtmndst13> dtmndst13{};
            constexpr MPL::Value<dstmodVal,dstmodVal::dtmndst14> dtmndst14{};
            constexpr MPL::Value<dstmodVal,dstmodVal::dtmndst15> dtmndst15{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,dstmodVal> dstmod{}; 
        ///Source Module. 
        enum class srcmodVal {
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
        namespace srcmodValC{
            constexpr MPL::Value<srcmodVal,srcmodVal::dtmnsrc0> dtmnsrc0{};
            constexpr MPL::Value<srcmodVal,srcmodVal::dtmnsrc1> dtmnsrc1{};
            constexpr MPL::Value<srcmodVal,srcmodVal::dtmnsrc2> dtmnsrc2{};
            constexpr MPL::Value<srcmodVal,srcmodVal::dtmnsrc3> dtmnsrc3{};
            constexpr MPL::Value<srcmodVal,srcmodVal::dtmnsrc4> dtmnsrc4{};
            constexpr MPL::Value<srcmodVal,srcmodVal::dtmnsrc5> dtmnsrc5{};
            constexpr MPL::Value<srcmodVal,srcmodVal::dtmnsrc6> dtmnsrc6{};
            constexpr MPL::Value<srcmodVal,srcmodVal::dtmnsrc7> dtmnsrc7{};
            constexpr MPL::Value<srcmodVal,srcmodVal::dtmnsrc8> dtmnsrc8{};
            constexpr MPL::Value<srcmodVal,srcmodVal::dtmnsrc9> dtmnsrc9{};
            constexpr MPL::Value<srcmodVal,srcmodVal::dtmnsrc10> dtmnsrc10{};
            constexpr MPL::Value<srcmodVal,srcmodVal::dtmnsrc11> dtmnsrc11{};
            constexpr MPL::Value<srcmodVal,srcmodVal::dtmnsrc12> dtmnsrc12{};
            constexpr MPL::Value<srcmodVal,srcmodVal::dtmnsrc13> dtmnsrc13{};
            constexpr MPL::Value<srcmodVal,srcmodVal::dtmnsrc14> dtmnsrc14{};
            constexpr MPL::Value<srcmodVal,srcmodVal::dtmnsrc15> dtmnsrc15{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,srcmodVal> srcmod{}; 
        ///DTM Channel Select. 
        enum class dtmchselVal {
            chA=0x00000000,     ///<Select DTMn channel A for this state.
            chB=0x00000001,     ///<Select DTMn channel B for this state.
            chC=0x00000002,     ///<Select DTMn channel C for this state.
            chD=0x00000003,     ///<Select DTMn channel D for this state.
        };
        namespace dtmchselValC{
            constexpr MPL::Value<dtmchselVal,dtmchselVal::chA> chA{};
            constexpr MPL::Value<dtmchselVal,dtmchselVal::chB> chB{};
            constexpr MPL::Value<dtmchselVal,dtmchselVal::chC> chC{};
            constexpr MPL::Value<dtmchselVal,dtmchselVal::chD> chD{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,dtmchselVal> dtmchsel{}; 
        ///Inhibit Signal Polarity. 
        enum class inhspolVal {
            activeLow=0x00000000,     ///<A logic low on the pin selected by INHSEL will allow the DTM to proceed.
            activeHigh=0x00000001,     ///<A logic high on the pin selected by INHSEL will allow the DTM to proceed.
        };
        namespace inhspolValC{
            constexpr MPL::Value<inhspolVal,inhspolVal::activeLow> activeLow{};
            constexpr MPL::Value<inhspolVal,inhspolVal::activeHigh> activeHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,inhspolVal> inhspol{}; 
        ///Module Inhibit Enable. 
        enum class dtminhVal {
            inactive=0x00000000,     ///<The DTM module does not ignore any DMA requests.
            active=0x00000001,     ///<The DTM module ignores all DMA requests until the inhibit signal selected by INHSSEL matches the polarity polarity set by INHSPOL.
        };
        namespace dtminhValC{
            constexpr MPL::Value<dtminhVal,dtminhVal::inactive> inactive{};
            constexpr MPL::Value<dtminhVal,dtminhVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,dtminhVal> dtminh{}; 
        ///Master Decrement Enable. 
        enum class mstdecenVal {
            disabled=0x00000000,     ///<Disable master counter decrements.
            enabled=0x00000001,     ///<Enable master counter decrements.
        };
        namespace mstdecenValC{
            constexpr MPL::Value<mstdecenVal,mstdecenVal::disabled> disabled{};
            constexpr MPL::Value<mstdecenVal,mstdecenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,mstdecenVal> mstdecen{}; 
        ///Timeout Enable. 
        enum class toerrienVal {
            disabled=0x00000000,     ///<Disable timeouts and timeout interrupts.
            enabled=0x00000001,     ///<Enable timeouts and timeout interrupts.
        };
        namespace toerrienValC{
            constexpr MPL::Value<toerrienVal,toerrienVal::disabled> disabled{};
            constexpr MPL::Value<toerrienVal,toerrienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,toerrienVal> toerrien{}; 
        ///Secondary State Transition Interrupt Enable. 
        enum class secstienVal {
            disabled=0x00000000,     ///<Disable secondary state transition interrupts.
            enabled=0x00000001,     ///<Enable secondary state transition interrupts.
        };
        namespace secstienValC{
            constexpr MPL::Value<secstienVal,secstienVal::disabled> disabled{};
            constexpr MPL::Value<secstienVal,secstienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,secstienVal> secstien{}; 
        ///Primary State Transition Interrupt Enable. 
        enum class pristienVal {
            disabled=0x00000000,     ///<Disable primary state transition interrupts.
            enabled=0x00000001,     ///<Enable primary state transition interrupts.
        };
        namespace pristienValC{
            constexpr MPL::Value<pristienVal,pristienVal::disabled> disabled{};
            constexpr MPL::Value<pristienVal,pristienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,pristienVal> pristien{}; 
    }
}
