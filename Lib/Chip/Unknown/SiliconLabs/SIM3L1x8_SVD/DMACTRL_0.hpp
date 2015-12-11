#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonestatus{    ///<Controller Status
        using Addr = Register::Address<0x40036000,0xffe0ff0e,0,unsigned>;
        ///DMA Enable Status. 
        enum class DmaenstsVal {
            notSet=0x00000000,     ///<DMA controller is disabled
            set=0x00000001,     ///<DMA controller is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DmaenstsVal> dmaensts{}; 
        namespace DmaenstsValC{
            constexpr Register::FieldValue<decltype(dmaensts)::Type,DmaenstsVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(dmaensts)::Type,DmaenstsVal::set> set{};
        }
        ///State Machine State. 
        enum class StateVal {
            idle=0x00000000,     ///<Idle.
            readingChannelConfig=0x00000001,     ///<Reading channel controller data.
            readingSourcePointer=0x00000002,     ///<Reading source data end pointer.
            readingDestPointer=0x00000003,     ///<Reading destination data end pointer.
            readingSourceData=0x00000004,     ///<Reading source data.
            writingDestData=0x00000005,     ///<Writing destination data.
            waitingDmaReqClear=0x00000006,     ///<Waiting for a DMA request to clear.
            writingChannelConfig=0x00000007,     ///<Writing channel controller data.
            stalled=0x00000008,     ///<Stalled.
            done=0x00000009,     ///<Done.
            scatterGatherTransition=0x0000000a,     ///<Peripheral scatter-gather transition.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,StateVal> state{}; 
        namespace StateValC{
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::idle> idle{};
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::readingChannelConfig> readingChannelConfig{};
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::readingSourcePointer> readingSourcePointer{};
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::readingDestPointer> readingDestPointer{};
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::readingSourceData> readingSourceData{};
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::writingDestData> writingDestData{};
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::waitingDmaReqClear> waitingDmaReqClear{};
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::writingChannelConfig> writingChannelConfig{};
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::stalled> stalled{};
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::done> done{};
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::scatterGatherTransition> scatterGatherTransition{};
        }
        ///Number of Supported DMA Channels. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> numchan{}; 
    }
    namespace Noneconfig{    ///<Controller Configuration
        using Addr = Register::Address<0x40036004,0xfffffffe,0,unsigned>;
        ///DMA Enable. 
        enum class DmaenVal {
            disabled=0x00000000,     ///<Disable the DMA controller.
            enabled=0x00000001,     ///<Enable the DMA controller.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DmaenVal> dmaen{}; 
        namespace DmaenValC{
            constexpr Register::FieldValue<decltype(dmaen)::Type,DmaenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dmaen)::Type,DmaenVal::enabled> enabled{};
        }
    }
    namespace Nonebaseptr{    ///<Base Pointer
        using Addr = Register::Address<0x40036008,0x0000001f,0,unsigned>;
        ///Control Base Pointer. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> baseptr{}; 
    }
    namespace Noneabaseptr{    ///<Alternate Base Pointer
        using Addr = Register::Address<0x4003600c,0x00000000,0,unsigned>;
        ///Alternate Control Base Pointer. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> abaseptr{}; 
    }
    namespace Nonechstatus{    ///<Channel Status
        using Addr = Register::Address<0x40036010,0xfffffc00,0,unsigned>;
        ///Channel 0 Status. 
        enum class Ch0Val {
            notWaiting=0x00000000,     ///<DMA Channel 0 is not waiting for a data request.
            waiting=0x00000001,     ///<DMA Channel 0 is waiting for a data request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0Val> ch0{}; 
        namespace Ch0ValC{
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::notWaiting> notWaiting{};
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::waiting> waiting{};
        }
        ///Channel 1 Status. 
        enum class Ch1Val {
            notWaiting=0x00000000,     ///<DMA Channel 1 is not waiting for a data request.
            waiting=0x00000001,     ///<DMA Channel 1 is waiting for a data request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1Val> ch1{}; 
        namespace Ch1ValC{
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::notWaiting> notWaiting{};
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::waiting> waiting{};
        }
        ///Channel 2 Status. 
        enum class Ch2Val {
            notWaiting=0x00000000,     ///<DMA Channel 2 is not waiting for a data request.
            waiting=0x00000001,     ///<DMA Channel 2 is waiting for a data request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2Val> ch2{}; 
        namespace Ch2ValC{
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::notWaiting> notWaiting{};
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::waiting> waiting{};
        }
        ///Channel 3 Status. 
        enum class Ch3Val {
            notWaiting=0x00000000,     ///<DMA Channel 3 is not waiting for a data request.
            waiting=0x00000001,     ///<DMA Channel 3 is waiting for a data request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3Val> ch3{}; 
        namespace Ch3ValC{
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::notWaiting> notWaiting{};
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::waiting> waiting{};
        }
        ///Channel 4 Status. 
        enum class Ch4Val {
            notWaiting=0x00000000,     ///<DMA Channel 4 is not waiting for a data request.
            waiting=0x00000001,     ///<DMA Channel 4 is waiting for a data request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4Val> ch4{}; 
        namespace Ch4ValC{
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::notWaiting> notWaiting{};
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::waiting> waiting{};
        }
        ///Channel 5 Status. 
        enum class Ch5Val {
            notWaiting=0x00000000,     ///<DMA Channel 5 is not waiting for a data request.
            waiting=0x00000001,     ///<DMA Channel 5 is waiting for a data request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5Val> ch5{}; 
        namespace Ch5ValC{
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::notWaiting> notWaiting{};
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::waiting> waiting{};
        }
        ///Channel 6 Status. 
        enum class Ch6Val {
            notWaiting=0x00000000,     ///<DMA Channel 6 is not waiting for a data request.
            waiting=0x00000001,     ///<DMA Channel 6 is waiting for a data request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6Val> ch6{}; 
        namespace Ch6ValC{
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::notWaiting> notWaiting{};
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::waiting> waiting{};
        }
        ///Channel 7 Status. 
        enum class Ch7Val {
            notWaiting=0x00000000,     ///<DMA Channel 7 is not waiting for a data request.
            waiting=0x00000001,     ///<DMA Channel 7 is waiting for a data request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7Val> ch7{}; 
        namespace Ch7ValC{
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::notWaiting> notWaiting{};
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::waiting> waiting{};
        }
        ///Channel 8 Status. 
        enum class Ch8Val {
            notWaiting=0x00000000,     ///<DMA Channel 8 is not waiting for a data request.
            waiting=0x00000001,     ///<DMA Channel 8 is waiting for a data request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch8Val> ch8{}; 
        namespace Ch8ValC{
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::notWaiting> notWaiting{};
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::waiting> waiting{};
        }
        ///Channel 9 Status. 
        enum class Ch9Val {
            notWaiting=0x00000000,     ///<DMA Channel 9 is not waiting for a data request.
            waiting=0x00000001,     ///<DMA Channel 9 is waiting for a data request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch9Val> ch9{}; 
        namespace Ch9ValC{
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::notWaiting> notWaiting{};
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::waiting> waiting{};
        }
    }
    namespace Nonechswrcn{    ///<Channel Software Request Control
        using Addr = Register::Address<0x40036014,0xfffffc00,0,unsigned>;
        ///Channel 0 Software Request. 
        enum class Ch0Val {
            doNotGenerateSwReq=0x00000000,     ///<DMA Channel 0 does not generate a software data request.
            generateSwReq=0x00000001,     ///<DMA Channel 0 generates a software data request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0Val> ch0{}; 
        namespace Ch0ValC{
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::doNotGenerateSwReq> doNotGenerateSwReq{};
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::generateSwReq> generateSwReq{};
        }
        ///Channel 1 Software Request. 
        enum class Ch1Val {
            doNotGenerateSwReq=0x00000000,     ///<DMA Channel 1 does not generate a software data request.
            generateSwReq=0x00000001,     ///<DMA Channel 1 generates a software data request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1Val> ch1{}; 
        namespace Ch1ValC{
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::doNotGenerateSwReq> doNotGenerateSwReq{};
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::generateSwReq> generateSwReq{};
        }
        ///Channel 2 Software Request. 
        enum class Ch2Val {
            doNotGenerateSwReq=0x00000000,     ///<DMA Channel 2 does not generate a software data request.
            generateSwReq=0x00000001,     ///<DMA Channel 2 generates a software data request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2Val> ch2{}; 
        namespace Ch2ValC{
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::doNotGenerateSwReq> doNotGenerateSwReq{};
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::generateSwReq> generateSwReq{};
        }
        ///Channel 3 Software Request. 
        enum class Ch3Val {
            doNotGenerateSwReq=0x00000000,     ///<DMA Channel 3 does not generate a software data request.
            generateSwReq=0x00000001,     ///<DMA Channel 3 generates a software data request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3Val> ch3{}; 
        namespace Ch3ValC{
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::doNotGenerateSwReq> doNotGenerateSwReq{};
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::generateSwReq> generateSwReq{};
        }
        ///Channel 4 Software Request. 
        enum class Ch4Val {
            doNotGenerateSwReq=0x00000000,     ///<DMA Channel 4 does not generate a software data request.
            generateSwReq=0x00000001,     ///<DMA Channel 4 generates a software data request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4Val> ch4{}; 
        namespace Ch4ValC{
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::doNotGenerateSwReq> doNotGenerateSwReq{};
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::generateSwReq> generateSwReq{};
        }
        ///Channel 5 Software Request. 
        enum class Ch5Val {
            doNotGenerateSwReq=0x00000000,     ///<DMA Channel 5 does not generate a software data request.
            generateSwReq=0x00000001,     ///<DMA Channel 5 generates a software data request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5Val> ch5{}; 
        namespace Ch5ValC{
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::doNotGenerateSwReq> doNotGenerateSwReq{};
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::generateSwReq> generateSwReq{};
        }
        ///Channel 6 Software Request. 
        enum class Ch6Val {
            doNotGenerateSwReq=0x00000000,     ///<DMA Channel 6 does not generate a software data request.
            generateSwReq=0x00000001,     ///<DMA Channel 6 generates a software data request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6Val> ch6{}; 
        namespace Ch6ValC{
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::doNotGenerateSwReq> doNotGenerateSwReq{};
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::generateSwReq> generateSwReq{};
        }
        ///Channel 7 Software Request. 
        enum class Ch7Val {
            doNotGenerateSwReq=0x00000000,     ///<DMA Channel 7 does not generate a software data request.
            generateSwReq=0x00000001,     ///<DMA Channel 7 generates a software data request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7Val> ch7{}; 
        namespace Ch7ValC{
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::doNotGenerateSwReq> doNotGenerateSwReq{};
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::generateSwReq> generateSwReq{};
        }
        ///Channel 8 Software Request. 
        enum class Ch8Val {
            doNotGenerateSwReq=0x00000000,     ///<DMA Channel 8 does not generate a software data request.
            generateSwReq=0x00000001,     ///<DMA Channel 8 generates a software data request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch8Val> ch8{}; 
        namespace Ch8ValC{
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::doNotGenerateSwReq> doNotGenerateSwReq{};
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::generateSwReq> generateSwReq{};
        }
        ///Channel 9 Software Request. 
        enum class Ch9Val {
            doNotGenerateSwReq=0x00000000,     ///<DMA Channel 9 does not generate a software data request.
            generateSwReq=0x00000001,     ///<DMA Channel 9 generates a software data request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch9Val> ch9{}; 
        namespace Ch9ValC{
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::doNotGenerateSwReq> doNotGenerateSwReq{};
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::generateSwReq> generateSwReq{};
        }
    }
    namespace Nonechreqmset{    ///<Channel Request Mask Set
        using Addr = Register::Address<0x40036020,0xfffffc00,0,unsigned>;
        ///Channel 0 Request Mask Enable. 
        enum class Ch0Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 0 peripheral data requests enabled. 1: DMA Channel 0 peripheral data requests disabled. Write: 0: No effect (use CHREQMCLR to clear). 1: Disable DMA Channel 0 peripheral data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0Val> ch0{}; 
        namespace Ch0ValC{
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::enabled> enabled{};
        }
        ///Channel 1 Request Mask Enable. 
        enum class Ch1Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 1 peripheral data requests enabled. 1: DMA Channel 1 peripheral data requests disabled. Write: 0: No effect (use CHREQMCLR to clear). 1: Disable DMA Channel 1 peripheral data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1Val> ch1{}; 
        namespace Ch1ValC{
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::enabled> enabled{};
        }
        ///Channel 2 Request Mask Enable. 
        enum class Ch2Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 2 peripheral data requests enabled. 1: DMA Channel 2 peripheral data requests disabled. Write: 0: No effect (use CHREQMCLR to clear). 1: Disable DMA Channel 2 peripheral data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2Val> ch2{}; 
        namespace Ch2ValC{
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::enabled> enabled{};
        }
        ///Channel 3 Request Mask Enable. 
        enum class Ch3Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 3 peripheral data requests enabled. 1: DMA Channel 3 peripheral data requests disabled. Write: 0: No effect (use CHREQMCLR to clear). 1: Disable DMA Channel 3 peripheral data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3Val> ch3{}; 
        namespace Ch3ValC{
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::enabled> enabled{};
        }
        ///Channel 4 Request Mask Enable. 
        enum class Ch4Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 4 peripheral data requests enabled. 1: DMA Channel 4 peripheral data requests disabled. Write: 0: No effect (use CHREQMCLR to clear). 1: Disable DMA Channel 4 peripheral data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4Val> ch4{}; 
        namespace Ch4ValC{
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::enabled> enabled{};
        }
        ///Channel 5 Request Mask Enable. 
        enum class Ch5Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 5 peripheral data requests enabled. 1: DMA Channel 5 peripheral data requests disabled. Write: 0: No effect (use CHREQMCLR to clear). 1: Disable DMA Channel 5 peripheral data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5Val> ch5{}; 
        namespace Ch5ValC{
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::enabled> enabled{};
        }
        ///Channel 6 Request Mask Enable. 
        enum class Ch6Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 6 peripheral data requests enabled. 1: DMA Channel 6 peripheral data requests disabled. Write: 0: No effect (use CHREQMCLR to clear). 1: Disable DMA Channel 6 peripheral data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6Val> ch6{}; 
        namespace Ch6ValC{
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::enabled> enabled{};
        }
        ///Channel 7 Request Mask Enable. 
        enum class Ch7Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 7 peripheral data requests enabled. 1: DMA Channel 7 peripheral data requests disabled. Write: 0: No effect (use CHREQMCLR to clear). 1: Disable DMA Channel 7 peripheral data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7Val> ch7{}; 
        namespace Ch7ValC{
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::enabled> enabled{};
        }
        ///Channel 8 Request Mask Enable. 
        enum class Ch8Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 8 peripheral data requests enabled. 1: DMA Channel 8 peripheral data requests disabled. Write: 0: No effect (use CHREQMCLR to clear). 1: Disable DMA Channel 8 peripheral data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch8Val> ch8{}; 
        namespace Ch8ValC{
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::enabled> enabled{};
        }
        ///Channel 9 Request Mask Enable. 
        enum class Ch9Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 9 peripheral data requests enabled. 1: DMA Channel 9 peripheral data requests disabled. Write: 0: No effect (use CHREQMCLR to clear). 1: Disable DMA Channel 9 peripheral data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch9Val> ch9{}; 
        namespace Ch9ValC{
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::enabled> enabled{};
        }
    }
    namespace Nonechreqmclr{    ///<Channel Request Mask Clear
        using Addr = Register::Address<0x40036024,0xfffffc00,0,unsigned>;
        ///Channel 0 Request Mask Disable. 
        enum class Ch0Val {
            disabled=0x00000001,     ///<Enable DMA Channel 0 peripheral data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0Val> ch0{}; 
        namespace Ch0ValC{
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::disabled> disabled{};
        }
        ///Channel 1 Request Mask Disable. 
        enum class Ch1Val {
            disabled=0x00000001,     ///<Enable DMA Channel 1 peripheral data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1Val> ch1{}; 
        namespace Ch1ValC{
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::disabled> disabled{};
        }
        ///Channel 2 Request Mask Disable. 
        enum class Ch2Val {
            disabled=0x00000001,     ///<Enable DMA Channel 2 peripheral data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2Val> ch2{}; 
        namespace Ch2ValC{
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::disabled> disabled{};
        }
        ///Channel 3 Request Mask Disable. 
        enum class Ch3Val {
            disabled=0x00000001,     ///<Enable DMA Channel 3 peripheral data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3Val> ch3{}; 
        namespace Ch3ValC{
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::disabled> disabled{};
        }
        ///Channel 4 Request Mask Disable. 
        enum class Ch4Val {
            disabled=0x00000001,     ///<Enable DMA Channel 4 peripheral data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4Val> ch4{}; 
        namespace Ch4ValC{
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::disabled> disabled{};
        }
        ///Channel 5 Request Mask Disable. 
        enum class Ch5Val {
            disabled=0x00000001,     ///<Enable DMA Channel 5 peripheral data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5Val> ch5{}; 
        namespace Ch5ValC{
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::disabled> disabled{};
        }
        ///Channel 6 Request Mask Disable. 
        enum class Ch6Val {
            disabled=0x00000001,     ///<Enable DMA Channel 6 peripheral data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6Val> ch6{}; 
        namespace Ch6ValC{
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::disabled> disabled{};
        }
        ///Channel 7 Request Mask Disable. 
        enum class Ch7Val {
            disabled=0x00000001,     ///<Enable DMA Channel 7 peripheral data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7Val> ch7{}; 
        namespace Ch7ValC{
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::disabled> disabled{};
        }
        ///Channel 8 Request Mask Disable. 
        enum class Ch8Val {
            disabled=0x00000001,     ///<Enable DMA Channel 8 peripheral data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch8Val> ch8{}; 
        namespace Ch8ValC{
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::disabled> disabled{};
        }
        ///Channel 9 Request Mask Disable. 
        enum class Ch9Val {
            disabled=0x00000001,     ///<Enable DMA Channel 9 peripheral data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch9Val> ch9{}; 
        namespace Ch9ValC{
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::disabled> disabled{};
        }
    }
    namespace Nonechenset{    ///<Channel Enable Set
        using Addr = Register::Address<0x40036028,0xfffffc00,0,unsigned>;
        ///Channel 0 Enable. 
        enum class Ch0Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 0 disabled. 1: DMA Channel 0 enabled. Write: 0: No effect (use CHENCLR to clear). 1: Enable DMA Channel 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0Val> ch0{}; 
        namespace Ch0ValC{
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::enabled> enabled{};
        }
        ///Channel 1 Enable. 
        enum class Ch1Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 1 disabled. 1: DMA Channel 1 enabled. Write: 0: No effect (use CHENCLR to clear). 1: Enable DMA Channel 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1Val> ch1{}; 
        namespace Ch1ValC{
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::enabled> enabled{};
        }
        ///Channel 2 Enable. 
        enum class Ch2Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 2 disabled. 1: DMA Channel 2 enabled. Write: 0: No effect (use CHENCLR to clear). 1: Enable DMA Channel 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2Val> ch2{}; 
        namespace Ch2ValC{
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::enabled> enabled{};
        }
        ///Channel 3 Enable. 
        enum class Ch3Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 3 disabled. 1: DMA Channel 3 enabled. Write: 0: No effect (use CHENCLR to clear). 1: Enable DMA Channel 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3Val> ch3{}; 
        namespace Ch3ValC{
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::enabled> enabled{};
        }
        ///Channel 4 Enable. 
        enum class Ch4Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 4 disabled. 1: DMA Channel 4 enabled. Write: 0: No effect (use CHENCLR to clear). 1: Enable DMA Channel 4.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4Val> ch4{}; 
        namespace Ch4ValC{
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::enabled> enabled{};
        }
        ///Channel 5 Enable. 
        enum class Ch5Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 5 disabled. 1: DMA Channel 5 enabled. Write: 0: No effect (use CHENCLR to clear). 1: Enable DMA Channel 5.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5Val> ch5{}; 
        namespace Ch5ValC{
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::enabled> enabled{};
        }
        ///Channel 6 Enable. 
        enum class Ch6Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 6 disabled. 1: DMA Channel 6 enabled. Write: 0: No effect (use CHENCLR to clear). 1: Enable DMA Channel 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6Val> ch6{}; 
        namespace Ch6ValC{
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::enabled> enabled{};
        }
        ///Channel 7 Enable. 
        enum class Ch7Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 7 disabled. 1: DMA Channel 7 enabled. Write: 0: No effect (use CHENCLR to clear). 1: Enable DMA Channel 7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7Val> ch7{}; 
        namespace Ch7ValC{
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::enabled> enabled{};
        }
        ///Channel 8 Enable. 
        enum class Ch8Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 8 disabled. 1: DMA Channel 8 enabled. Write: 0: No effect (use CHENCLR to clear). 1: Enable DMA Channel 8.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch8Val> ch8{}; 
        namespace Ch8ValC{
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::enabled> enabled{};
        }
        ///Channel 9 Enable. 
        enum class Ch9Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 9 disabled. 1: DMA Channel 9 enabled. Write: 0: No effect (use CHENCLR to clear). 1: Enable DMA Channel 9.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch9Val> ch9{}; 
        namespace Ch9ValC{
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::enabled> enabled{};
        }
    }
    namespace Nonechenclr{    ///<Channel Enable Clear
        using Addr = Register::Address<0x4003602c,0xfffffc00,0,unsigned>;
        ///Channel 0 Disable. 
        enum class Ch0Val {
            disabled=0x00000001,     ///<Disable DMA Channel 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0Val> ch0{}; 
        namespace Ch0ValC{
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::disabled> disabled{};
        }
        ///Channel 1 Disable. 
        enum class Ch1Val {
            disabled=0x00000001,     ///<Disable DMA Channel 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1Val> ch1{}; 
        namespace Ch1ValC{
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::disabled> disabled{};
        }
        ///Channel 2 Disable. 
        enum class Ch2Val {
            disabled=0x00000001,     ///<Disable DMA Channel 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2Val> ch2{}; 
        namespace Ch2ValC{
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::disabled> disabled{};
        }
        ///Channel 3 Disable. 
        enum class Ch3Val {
            disabled=0x00000001,     ///<Disable DMA Channel 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3Val> ch3{}; 
        namespace Ch3ValC{
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::disabled> disabled{};
        }
        ///Channel 4 Disable. 
        enum class Ch4Val {
            disabled=0x00000001,     ///<Disable DMA Channel 4.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4Val> ch4{}; 
        namespace Ch4ValC{
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::disabled> disabled{};
        }
        ///Channel 5 Disable. 
        enum class Ch5Val {
            disabled=0x00000001,     ///<Disable DMA Channel 5.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5Val> ch5{}; 
        namespace Ch5ValC{
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::disabled> disabled{};
        }
        ///Channel 6 Disable. 
        enum class Ch6Val {
            disabled=0x00000001,     ///<Disable DMA Channel 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6Val> ch6{}; 
        namespace Ch6ValC{
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::disabled> disabled{};
        }
        ///Channel 7 Disable. 
        enum class Ch7Val {
            disabled=0x00000001,     ///<Disable DMA Channel 7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7Val> ch7{}; 
        namespace Ch7ValC{
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::disabled> disabled{};
        }
        ///Channel 8 Disable. 
        enum class Ch8Val {
            disabled=0x00000001,     ///<Disable DMA Channel 8.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch8Val> ch8{}; 
        namespace Ch8ValC{
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::disabled> disabled{};
        }
        ///Channel 9 Disable. 
        enum class Ch9Val {
            disabled=0x00000001,     ///<Disable DMA Channel 9.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch9Val> ch9{}; 
        namespace Ch9ValC{
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::disabled> disabled{};
        }
    }
    namespace Nonechaltset{    ///<Channel Alternate Select Set
        using Addr = Register::Address<0x40036030,0xfffffc00,0,unsigned>;
        ///Channel 0 Alternate Enable. 
        enum class Ch0Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 0 is using primary data structure. 1: DMA Channel 0 is using alternate data structure. Write: 0: No effect (use CHALTCLR to clear). 1: Use the alternate data structure for DMA Channel 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0Val> ch0{}; 
        namespace Ch0ValC{
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::enabled> enabled{};
        }
        ///Channel 1 Alternate Enable. 
        enum class Ch1Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 1 is using primary data structure. 1: DMA Channel 1 is using alternate data structure. Write: 0: No effect (use CHALTCLR to clear). 1: Use the alternate data structure for DMA Channel 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1Val> ch1{}; 
        namespace Ch1ValC{
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::enabled> enabled{};
        }
        ///Channel 2 Alternate Enable. 
        enum class Ch2Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 2 is using primary data structure. 1: DMA Channel 2 is using alternate data structure. Write: 0: No effect (use CHALTCLR to clear). 1: Use the alternate data structure for DMA Channel 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2Val> ch2{}; 
        namespace Ch2ValC{
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::enabled> enabled{};
        }
        ///Channel 3 Alternate Enable. 
        enum class Ch3Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 3 is using primary data structure. 1: DMA Channel 3 is using alternate data structure. Write: 0: No effect (use CHALTCLR to clear). 1: Use the alternate data structure for DMA Channel 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3Val> ch3{}; 
        namespace Ch3ValC{
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::enabled> enabled{};
        }
        ///Channel 4 Alternate Enable. 
        enum class Ch4Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 4 is using primary data structure. 1: DMA Channel 4 is using alternate data structure. Write: 0: No effect (use CHALTCLR to clear). 1: Use the alternate data structure for DMA Channel 4.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4Val> ch4{}; 
        namespace Ch4ValC{
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::enabled> enabled{};
        }
        ///Channel 5 Alternate Enable. 
        enum class Ch5Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 5 is using primary data structure. 1: DMA Channel 5 is using alternate data structure. Write: 0: No effect (use CHALTCLR to clear). 1: Use the alternate data structure for DMA Channel 5.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5Val> ch5{}; 
        namespace Ch5ValC{
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::enabled> enabled{};
        }
        ///Channel 6 Alternate Enable. 
        enum class Ch6Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 6 is using primary data structure. 1: DMA Channel 6 is using alternate data structure. Write: 0: No effect (use CHALTCLR to clear). 1: Use the alternate data structure for DMA Channel 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6Val> ch6{}; 
        namespace Ch6ValC{
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::enabled> enabled{};
        }
        ///Channel 7 Alternate Enable. 
        enum class Ch7Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 7 is using primary data structure. 1: DMA Channel 7 is using alternate data structure. Write: 0: No effect (use CHALTCLR to clear). 1: Use the alternate data structure for DMA Channel 7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7Val> ch7{}; 
        namespace Ch7ValC{
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::enabled> enabled{};
        }
        ///Channel 8 Alternate Enable. 
        enum class Ch8Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 8 is using primary data structure. 1: DMA Channel 8 is using alternate data structure. Write: 0: No effect (use CHALTCLR to clear). 1: Use the alternate data structure for DMA Channel 8.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch8Val> ch8{}; 
        namespace Ch8ValC{
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::enabled> enabled{};
        }
        ///Channel 9 Alternate Enable. 
        enum class Ch9Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 9 is using primary data structure. 1: DMA Channel 9 is using alternate data structure. Write: 0: No effect (use CHALTCLR to clear). 1: Use the alternate data structure for DMA Channel 9.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch9Val> ch9{}; 
        namespace Ch9ValC{
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::enabled> enabled{};
        }
    }
    namespace Nonechaltclr{    ///<Channel Alternate Select Clear
        using Addr = Register::Address<0x40036034,0xfffffc00,0,unsigned>;
        ///Channel 0 Alternate Disable. 
        enum class Ch0Val {
            disabled=0x00000001,     ///<Use the primary data structure for DMA Channel 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0Val> ch0{}; 
        namespace Ch0ValC{
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::disabled> disabled{};
        }
        ///Channel 1 Alternate Disable. 
        enum class Ch1Val {
            disabled=0x00000001,     ///<Use the primary data structure for DMA Channel 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1Val> ch1{}; 
        namespace Ch1ValC{
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::disabled> disabled{};
        }
        ///Channel 2 Alternate Disable. 
        enum class Ch2Val {
            disabled=0x00000001,     ///<Use the primary data structure for DMA Channel 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2Val> ch2{}; 
        namespace Ch2ValC{
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::disabled> disabled{};
        }
        ///Channel 3 Alternate Disable. 
        enum class Ch3Val {
            disabled=0x00000001,     ///<Use the primary data structure for DMA Channel 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3Val> ch3{}; 
        namespace Ch3ValC{
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::disabled> disabled{};
        }
        ///Channel 4 Alternate Disable. 
        enum class Ch4Val {
            disabled=0x00000001,     ///<Use the primary data structure for DMA Channel 4.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4Val> ch4{}; 
        namespace Ch4ValC{
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::disabled> disabled{};
        }
        ///Channel 5 Alternate Disable. 
        enum class Ch5Val {
            disabled=0x00000001,     ///<Use the primary data structure for DMA Channel 5.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5Val> ch5{}; 
        namespace Ch5ValC{
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::disabled> disabled{};
        }
        ///Channel 6 Alternate Disable. 
        enum class Ch6Val {
            disabled=0x00000001,     ///<Use the primary data structure for DMA Channel 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6Val> ch6{}; 
        namespace Ch6ValC{
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::disabled> disabled{};
        }
        ///Channel 7 Alternate Disable. 
        enum class Ch7Val {
            disabled=0x00000001,     ///<Use the primary data structure for DMA Channel 7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7Val> ch7{}; 
        namespace Ch7ValC{
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::disabled> disabled{};
        }
        ///Channel 8 Alternate Disable. 
        enum class Ch8Val {
            disabled=0x00000001,     ///<Use the primary data structure for DMA Channel 8.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch8Val> ch8{}; 
        namespace Ch8ValC{
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::disabled> disabled{};
        }
        ///Channel 9 Alternate Disable. 
        enum class Ch9Val {
            disabled=0x00000001,     ///<Use the primary data structure for DMA Channel 9.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch9Val> ch9{}; 
        namespace Ch9ValC{
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::disabled> disabled{};
        }
    }
    namespace Nonechhpset{    ///<Channel High Priority Set
        using Addr = Register::Address<0x40036038,0xfffffc00,0,unsigned>;
        ///Channel 0 High Priority Enable. 
        enum class Ch0Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 0 is using the default priority level. 1: DMA Channel 0 is using the high priority level. Write: 0: No effect (use CHHPCLR to clear). 1: Use the high priority level for DMA Channel 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0Val> ch0{}; 
        namespace Ch0ValC{
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::enabled> enabled{};
        }
        ///Channel 1 High Priority Enable. 
        enum class Ch1Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 1 is using the default priority level. 1: DMA Channel 1 is using the high priority level. Write: 0: No effect (use CHHPCLR to clear). 1: Use the high priority level for DMA Channel 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1Val> ch1{}; 
        namespace Ch1ValC{
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::enabled> enabled{};
        }
        ///Channel 2 High Priority Enable. 
        enum class Ch2Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 2 is using the default priority level. 1: DMA Channel 2 is using the high priority level. Write: 0: No effect (use CHHPCLR to clear). 1: Use the high priority level for DMA Channel 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2Val> ch2{}; 
        namespace Ch2ValC{
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::enabled> enabled{};
        }
        ///Channel 3 High Priority Enable. 
        enum class Ch3Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 3 is using the default priority level. 1: DMA Channel 3 is using the high priority level. Write: 0: No effect (use CHHPCLR to clear). 1: Use the high priority level for DMA Channel 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3Val> ch3{}; 
        namespace Ch3ValC{
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::enabled> enabled{};
        }
        ///Channel 4 High Priority Enable. 
        enum class Ch4Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 4 is using the default priority level. 1: DMA Channel 4 is using the high priority level. Write: 0: No effect (use CHHPCLR to clear). 1: Use the high priority level for DMA Channel 4.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4Val> ch4{}; 
        namespace Ch4ValC{
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::enabled> enabled{};
        }
        ///Channel 5 High Priority Enable. 
        enum class Ch5Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 5 is using the default priority level. 1: DMA Channel 5 is using the high priority level. Write: 0: No effect (use CHHPCLR to clear). 1: Use the high priority level for DMA Channel 5.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5Val> ch5{}; 
        namespace Ch5ValC{
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::enabled> enabled{};
        }
        ///Channel 6 High Priority Enable. 
        enum class Ch6Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 6 is using the default priority level. 1: DMA Channel 6 is using the high priority level. Write: 0: No effect (use CHHPCLR to clear). 1: Use the high priority level for DMA Channel 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6Val> ch6{}; 
        namespace Ch6ValC{
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::enabled> enabled{};
        }
        ///Channel 7 High Priority Enable. 
        enum class Ch7Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 7 is using the default priority level. 1: DMA Channel 7 is using the high priority level. Write: 0: No effect (use CHHPCLR to clear). 1: Use the high priority level for DMA Channel 7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7Val> ch7{}; 
        namespace Ch7ValC{
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::enabled> enabled{};
        }
        ///Channel 8 High Priority Enable. 
        enum class Ch8Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 8 is using the default priority level. 1: DMA Channel 8 is using the high priority level. Write: 0: No effect (use CHHPCLR to clear). 1: Use the high priority level for DMA Channel 8.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch8Val> ch8{}; 
        namespace Ch8ValC{
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::enabled> enabled{};
        }
        ///Channel 9 High Priority Enable. 
        enum class Ch9Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 9 is using the default priority level. 1: DMA Channel 9 is using the high priority level. Write: 0: No effect (use CHHPCLR to clear). 1: Use the high priority level for DMA Channel 9.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch9Val> ch9{}; 
        namespace Ch9ValC{
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::enabled> enabled{};
        }
    }
    namespace Nonechhpclr{    ///<Channel High Priority Clear
        using Addr = Register::Address<0x4003603c,0xfffffc00,0,unsigned>;
        ///Channel 0 High Priority Disable. 
        enum class Ch0Val {
            disabled=0x00000001,     ///<Use the high default level for DMA Channel 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ch0Val> ch0{}; 
        namespace Ch0ValC{
            constexpr Register::FieldValue<decltype(ch0)::Type,Ch0Val::disabled> disabled{};
        }
        ///Channel 1 High Priority Disable. 
        enum class Ch1Val {
            disabled=0x00000001,     ///<Use the high default level for DMA Channel 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ch1Val> ch1{}; 
        namespace Ch1ValC{
            constexpr Register::FieldValue<decltype(ch1)::Type,Ch1Val::disabled> disabled{};
        }
        ///Channel 2 High Priority Disable. 
        enum class Ch2Val {
            disabled=0x00000001,     ///<Use the high default level for DMA Channel 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ch2Val> ch2{}; 
        namespace Ch2ValC{
            constexpr Register::FieldValue<decltype(ch2)::Type,Ch2Val::disabled> disabled{};
        }
        ///Channel 3 High Priority Disable. 
        enum class Ch3Val {
            disabled=0x00000001,     ///<Use the high default level for DMA Channel 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ch3Val> ch3{}; 
        namespace Ch3ValC{
            constexpr Register::FieldValue<decltype(ch3)::Type,Ch3Val::disabled> disabled{};
        }
        ///Channel 4 High Priority Disable. 
        enum class Ch4Val {
            disabled=0x00000001,     ///<Use the high default level for DMA Channel 4.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ch4Val> ch4{}; 
        namespace Ch4ValC{
            constexpr Register::FieldValue<decltype(ch4)::Type,Ch4Val::disabled> disabled{};
        }
        ///Channel 5 High Priority Disable. 
        enum class Ch5Val {
            disabled=0x00000001,     ///<Use the high default level for DMA Channel 5.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ch5Val> ch5{}; 
        namespace Ch5ValC{
            constexpr Register::FieldValue<decltype(ch5)::Type,Ch5Val::disabled> disabled{};
        }
        ///Channel 6 High Priority Disable. 
        enum class Ch6Val {
            disabled=0x00000001,     ///<Use the high default level for DMA Channel 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ch6Val> ch6{}; 
        namespace Ch6ValC{
            constexpr Register::FieldValue<decltype(ch6)::Type,Ch6Val::disabled> disabled{};
        }
        ///Channel 7 High Priority Disable. 
        enum class Ch7Val {
            disabled=0x00000001,     ///<Use the high default level for DMA Channel 7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ch7Val> ch7{}; 
        namespace Ch7ValC{
            constexpr Register::FieldValue<decltype(ch7)::Type,Ch7Val::disabled> disabled{};
        }
        ///Channel 8 High Priority Disable. 
        enum class Ch8Val {
            disabled=0x00000001,     ///<Use the high default level for DMA Channel 8.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ch8Val> ch8{}; 
        namespace Ch8ValC{
            constexpr Register::FieldValue<decltype(ch8)::Type,Ch8Val::disabled> disabled{};
        }
        ///Channel 9 High Priority Disable. 
        enum class Ch9Val {
            disabled=0x00000001,     ///<Use the high default level for DMA Channel 9.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ch9Val> ch9{}; 
        namespace Ch9ValC{
            constexpr Register::FieldValue<decltype(ch9)::Type,Ch9Val::disabled> disabled{};
        }
    }
    namespace Noneberrclr{    ///<Bus Error Clear
        using Addr = Register::Address<0x4003604c,0xfffffffe,0,unsigned>;
        ///DMA Bus Error Clear. 
        enum class ErrorVal {
            clear=0x00000001,     ///<Read: 0: DMA error did not occur. 1: DMA error occurred since the last time ERROR was cleared. Write: 0: No effect. 1: Clear the DMA error flag.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ErrorVal> error{}; 
        namespace ErrorValC{
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::clear> clear{};
        }
    }
}
