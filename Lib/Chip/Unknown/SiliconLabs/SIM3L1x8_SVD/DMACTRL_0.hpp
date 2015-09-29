#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonestatus{    ///<Controller Status
        using Addr = Register::Address<0x40036000,0xffe0ff0e,0,unsigned>;
        ///DMA Enable Status. 
        enum class dmaenstsVal {
            notSet=0x00000000,     ///<DMA controller is disabled
            set=0x00000001,     ///<DMA controller is enabled.
        };
        namespace dmaenstsValC{
            constexpr MPL::Value<dmaenstsVal,dmaenstsVal::notSet> notSet{};
            constexpr MPL::Value<dmaenstsVal,dmaenstsVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dmaenstsVal> dmaensts{}; 
        ///State Machine State. 
        enum class stateVal {
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
        namespace stateValC{
            constexpr MPL::Value<stateVal,stateVal::idle> idle{};
            constexpr MPL::Value<stateVal,stateVal::readingChannelConfig> readingChannelConfig{};
            constexpr MPL::Value<stateVal,stateVal::readingSourcePointer> readingSourcePointer{};
            constexpr MPL::Value<stateVal,stateVal::readingDestPointer> readingDestPointer{};
            constexpr MPL::Value<stateVal,stateVal::readingSourceData> readingSourceData{};
            constexpr MPL::Value<stateVal,stateVal::writingDestData> writingDestData{};
            constexpr MPL::Value<stateVal,stateVal::waitingDmaReqClear> waitingDmaReqClear{};
            constexpr MPL::Value<stateVal,stateVal::writingChannelConfig> writingChannelConfig{};
            constexpr MPL::Value<stateVal,stateVal::stalled> stalled{};
            constexpr MPL::Value<stateVal,stateVal::done> done{};
            constexpr MPL::Value<stateVal,stateVal::scatterGatherTransition> scatterGatherTransition{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,stateVal> state{}; 
        ///Number of Supported DMA Channels. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> numchan{}; 
    }
    namespace Noneconfig{    ///<Controller Configuration
        using Addr = Register::Address<0x40036004,0xfffffffe,0,unsigned>;
        ///DMA Enable. 
        enum class dmaenVal {
            disabled=0x00000000,     ///<Disable the DMA controller.
            enabled=0x00000001,     ///<Enable the DMA controller.
        };
        namespace dmaenValC{
            constexpr MPL::Value<dmaenVal,dmaenVal::disabled> disabled{};
            constexpr MPL::Value<dmaenVal,dmaenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dmaenVal> dmaen{}; 
    }
    namespace Nonebaseptr{    ///<Base Pointer
        using Addr = Register::Address<0x40036008,0x0000001f,0,unsigned>;
        ///Control Base Pointer. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> baseptr{}; 
    }
    namespace Noneabaseptr{    ///<Alternate Base Pointer
        using Addr = Register::Address<0x4003600c,0x00000000,0,unsigned>;
        ///Alternate Control Base Pointer. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> abaseptr{}; 
    }
    namespace Nonechstatus{    ///<Channel Status
        using Addr = Register::Address<0x40036010,0xfffffc00,0,unsigned>;
        ///Channel 0 Status. 
        enum class ch0Val {
            notWaiting=0x00000000,     ///<DMA Channel 0 is not waiting for a data request.
            waiting=0x00000001,     ///<DMA Channel 0 is waiting for a data request.
        };
        namespace ch0ValC{
            constexpr MPL::Value<ch0Val,ch0Val::notWaiting> notWaiting{};
            constexpr MPL::Value<ch0Val,ch0Val::waiting> waiting{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0Val> ch0{}; 
        ///Channel 1 Status. 
        enum class ch1Val {
            notWaiting=0x00000000,     ///<DMA Channel 1 is not waiting for a data request.
            waiting=0x00000001,     ///<DMA Channel 1 is waiting for a data request.
        };
        namespace ch1ValC{
            constexpr MPL::Value<ch1Val,ch1Val::notWaiting> notWaiting{};
            constexpr MPL::Value<ch1Val,ch1Val::waiting> waiting{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1Val> ch1{}; 
        ///Channel 2 Status. 
        enum class ch2Val {
            notWaiting=0x00000000,     ///<DMA Channel 2 is not waiting for a data request.
            waiting=0x00000001,     ///<DMA Channel 2 is waiting for a data request.
        };
        namespace ch2ValC{
            constexpr MPL::Value<ch2Val,ch2Val::notWaiting> notWaiting{};
            constexpr MPL::Value<ch2Val,ch2Val::waiting> waiting{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2Val> ch2{}; 
        ///Channel 3 Status. 
        enum class ch3Val {
            notWaiting=0x00000000,     ///<DMA Channel 3 is not waiting for a data request.
            waiting=0x00000001,     ///<DMA Channel 3 is waiting for a data request.
        };
        namespace ch3ValC{
            constexpr MPL::Value<ch3Val,ch3Val::notWaiting> notWaiting{};
            constexpr MPL::Value<ch3Val,ch3Val::waiting> waiting{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3Val> ch3{}; 
        ///Channel 4 Status. 
        enum class ch4Val {
            notWaiting=0x00000000,     ///<DMA Channel 4 is not waiting for a data request.
            waiting=0x00000001,     ///<DMA Channel 4 is waiting for a data request.
        };
        namespace ch4ValC{
            constexpr MPL::Value<ch4Val,ch4Val::notWaiting> notWaiting{};
            constexpr MPL::Value<ch4Val,ch4Val::waiting> waiting{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4Val> ch4{}; 
        ///Channel 5 Status. 
        enum class ch5Val {
            notWaiting=0x00000000,     ///<DMA Channel 5 is not waiting for a data request.
            waiting=0x00000001,     ///<DMA Channel 5 is waiting for a data request.
        };
        namespace ch5ValC{
            constexpr MPL::Value<ch5Val,ch5Val::notWaiting> notWaiting{};
            constexpr MPL::Value<ch5Val,ch5Val::waiting> waiting{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5Val> ch5{}; 
        ///Channel 6 Status. 
        enum class ch6Val {
            notWaiting=0x00000000,     ///<DMA Channel 6 is not waiting for a data request.
            waiting=0x00000001,     ///<DMA Channel 6 is waiting for a data request.
        };
        namespace ch6ValC{
            constexpr MPL::Value<ch6Val,ch6Val::notWaiting> notWaiting{};
            constexpr MPL::Value<ch6Val,ch6Val::waiting> waiting{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6Val> ch6{}; 
        ///Channel 7 Status. 
        enum class ch7Val {
            notWaiting=0x00000000,     ///<DMA Channel 7 is not waiting for a data request.
            waiting=0x00000001,     ///<DMA Channel 7 is waiting for a data request.
        };
        namespace ch7ValC{
            constexpr MPL::Value<ch7Val,ch7Val::notWaiting> notWaiting{};
            constexpr MPL::Value<ch7Val,ch7Val::waiting> waiting{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7Val> ch7{}; 
        ///Channel 8 Status. 
        enum class ch8Val {
            notWaiting=0x00000000,     ///<DMA Channel 8 is not waiting for a data request.
            waiting=0x00000001,     ///<DMA Channel 8 is waiting for a data request.
        };
        namespace ch8ValC{
            constexpr MPL::Value<ch8Val,ch8Val::notWaiting> notWaiting{};
            constexpr MPL::Value<ch8Val,ch8Val::waiting> waiting{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch8Val> ch8{}; 
        ///Channel 9 Status. 
        enum class ch9Val {
            notWaiting=0x00000000,     ///<DMA Channel 9 is not waiting for a data request.
            waiting=0x00000001,     ///<DMA Channel 9 is waiting for a data request.
        };
        namespace ch9ValC{
            constexpr MPL::Value<ch9Val,ch9Val::notWaiting> notWaiting{};
            constexpr MPL::Value<ch9Val,ch9Val::waiting> waiting{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch9Val> ch9{}; 
    }
    namespace Nonechswrcn{    ///<Channel Software Request Control
        using Addr = Register::Address<0x40036014,0xfffffc00,0,unsigned>;
        ///Channel 0 Software Request. 
        enum class ch0Val {
            doNotGenerateSwReq=0x00000000,     ///<DMA Channel 0 does not generate a software data request.
            generateSwReq=0x00000001,     ///<DMA Channel 0 generates a software data request.
        };
        namespace ch0ValC{
            constexpr MPL::Value<ch0Val,ch0Val::doNotGenerateSwReq> doNotGenerateSwReq{};
            constexpr MPL::Value<ch0Val,ch0Val::generateSwReq> generateSwReq{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0Val> ch0{}; 
        ///Channel 1 Software Request. 
        enum class ch1Val {
            doNotGenerateSwReq=0x00000000,     ///<DMA Channel 1 does not generate a software data request.
            generateSwReq=0x00000001,     ///<DMA Channel 1 generates a software data request.
        };
        namespace ch1ValC{
            constexpr MPL::Value<ch1Val,ch1Val::doNotGenerateSwReq> doNotGenerateSwReq{};
            constexpr MPL::Value<ch1Val,ch1Val::generateSwReq> generateSwReq{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1Val> ch1{}; 
        ///Channel 2 Software Request. 
        enum class ch2Val {
            doNotGenerateSwReq=0x00000000,     ///<DMA Channel 2 does not generate a software data request.
            generateSwReq=0x00000001,     ///<DMA Channel 2 generates a software data request.
        };
        namespace ch2ValC{
            constexpr MPL::Value<ch2Val,ch2Val::doNotGenerateSwReq> doNotGenerateSwReq{};
            constexpr MPL::Value<ch2Val,ch2Val::generateSwReq> generateSwReq{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2Val> ch2{}; 
        ///Channel 3 Software Request. 
        enum class ch3Val {
            doNotGenerateSwReq=0x00000000,     ///<DMA Channel 3 does not generate a software data request.
            generateSwReq=0x00000001,     ///<DMA Channel 3 generates a software data request.
        };
        namespace ch3ValC{
            constexpr MPL::Value<ch3Val,ch3Val::doNotGenerateSwReq> doNotGenerateSwReq{};
            constexpr MPL::Value<ch3Val,ch3Val::generateSwReq> generateSwReq{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3Val> ch3{}; 
        ///Channel 4 Software Request. 
        enum class ch4Val {
            doNotGenerateSwReq=0x00000000,     ///<DMA Channel 4 does not generate a software data request.
            generateSwReq=0x00000001,     ///<DMA Channel 4 generates a software data request.
        };
        namespace ch4ValC{
            constexpr MPL::Value<ch4Val,ch4Val::doNotGenerateSwReq> doNotGenerateSwReq{};
            constexpr MPL::Value<ch4Val,ch4Val::generateSwReq> generateSwReq{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4Val> ch4{}; 
        ///Channel 5 Software Request. 
        enum class ch5Val {
            doNotGenerateSwReq=0x00000000,     ///<DMA Channel 5 does not generate a software data request.
            generateSwReq=0x00000001,     ///<DMA Channel 5 generates a software data request.
        };
        namespace ch5ValC{
            constexpr MPL::Value<ch5Val,ch5Val::doNotGenerateSwReq> doNotGenerateSwReq{};
            constexpr MPL::Value<ch5Val,ch5Val::generateSwReq> generateSwReq{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5Val> ch5{}; 
        ///Channel 6 Software Request. 
        enum class ch6Val {
            doNotGenerateSwReq=0x00000000,     ///<DMA Channel 6 does not generate a software data request.
            generateSwReq=0x00000001,     ///<DMA Channel 6 generates a software data request.
        };
        namespace ch6ValC{
            constexpr MPL::Value<ch6Val,ch6Val::doNotGenerateSwReq> doNotGenerateSwReq{};
            constexpr MPL::Value<ch6Val,ch6Val::generateSwReq> generateSwReq{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6Val> ch6{}; 
        ///Channel 7 Software Request. 
        enum class ch7Val {
            doNotGenerateSwReq=0x00000000,     ///<DMA Channel 7 does not generate a software data request.
            generateSwReq=0x00000001,     ///<DMA Channel 7 generates a software data request.
        };
        namespace ch7ValC{
            constexpr MPL::Value<ch7Val,ch7Val::doNotGenerateSwReq> doNotGenerateSwReq{};
            constexpr MPL::Value<ch7Val,ch7Val::generateSwReq> generateSwReq{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7Val> ch7{}; 
        ///Channel 8 Software Request. 
        enum class ch8Val {
            doNotGenerateSwReq=0x00000000,     ///<DMA Channel 8 does not generate a software data request.
            generateSwReq=0x00000001,     ///<DMA Channel 8 generates a software data request.
        };
        namespace ch8ValC{
            constexpr MPL::Value<ch8Val,ch8Val::doNotGenerateSwReq> doNotGenerateSwReq{};
            constexpr MPL::Value<ch8Val,ch8Val::generateSwReq> generateSwReq{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch8Val> ch8{}; 
        ///Channel 9 Software Request. 
        enum class ch9Val {
            doNotGenerateSwReq=0x00000000,     ///<DMA Channel 9 does not generate a software data request.
            generateSwReq=0x00000001,     ///<DMA Channel 9 generates a software data request.
        };
        namespace ch9ValC{
            constexpr MPL::Value<ch9Val,ch9Val::doNotGenerateSwReq> doNotGenerateSwReq{};
            constexpr MPL::Value<ch9Val,ch9Val::generateSwReq> generateSwReq{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch9Val> ch9{}; 
    }
    namespace Nonechreqmset{    ///<Channel Request Mask Set
        using Addr = Register::Address<0x40036020,0xfffffc00,0,unsigned>;
        ///Channel 0 Request Mask Enable. 
        enum class ch0Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 0 peripheral data requests enabled. 1: DMA Channel 0 peripheral data requests disabled. Write: 0: No effect (use CHREQMCLR to clear). 1: Disable DMA Channel 0 peripheral data requests.
        };
        namespace ch0ValC{
            constexpr MPL::Value<ch0Val,ch0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0Val> ch0{}; 
        ///Channel 1 Request Mask Enable. 
        enum class ch1Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 1 peripheral data requests enabled. 1: DMA Channel 1 peripheral data requests disabled. Write: 0: No effect (use CHREQMCLR to clear). 1: Disable DMA Channel 1 peripheral data requests.
        };
        namespace ch1ValC{
            constexpr MPL::Value<ch1Val,ch1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1Val> ch1{}; 
        ///Channel 2 Request Mask Enable. 
        enum class ch2Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 2 peripheral data requests enabled. 1: DMA Channel 2 peripheral data requests disabled. Write: 0: No effect (use CHREQMCLR to clear). 1: Disable DMA Channel 2 peripheral data requests.
        };
        namespace ch2ValC{
            constexpr MPL::Value<ch2Val,ch2Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2Val> ch2{}; 
        ///Channel 3 Request Mask Enable. 
        enum class ch3Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 3 peripheral data requests enabled. 1: DMA Channel 3 peripheral data requests disabled. Write: 0: No effect (use CHREQMCLR to clear). 1: Disable DMA Channel 3 peripheral data requests.
        };
        namespace ch3ValC{
            constexpr MPL::Value<ch3Val,ch3Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3Val> ch3{}; 
        ///Channel 4 Request Mask Enable. 
        enum class ch4Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 4 peripheral data requests enabled. 1: DMA Channel 4 peripheral data requests disabled. Write: 0: No effect (use CHREQMCLR to clear). 1: Disable DMA Channel 4 peripheral data requests.
        };
        namespace ch4ValC{
            constexpr MPL::Value<ch4Val,ch4Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4Val> ch4{}; 
        ///Channel 5 Request Mask Enable. 
        enum class ch5Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 5 peripheral data requests enabled. 1: DMA Channel 5 peripheral data requests disabled. Write: 0: No effect (use CHREQMCLR to clear). 1: Disable DMA Channel 5 peripheral data requests.
        };
        namespace ch5ValC{
            constexpr MPL::Value<ch5Val,ch5Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5Val> ch5{}; 
        ///Channel 6 Request Mask Enable. 
        enum class ch6Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 6 peripheral data requests enabled. 1: DMA Channel 6 peripheral data requests disabled. Write: 0: No effect (use CHREQMCLR to clear). 1: Disable DMA Channel 6 peripheral data requests.
        };
        namespace ch6ValC{
            constexpr MPL::Value<ch6Val,ch6Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6Val> ch6{}; 
        ///Channel 7 Request Mask Enable. 
        enum class ch7Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 7 peripheral data requests enabled. 1: DMA Channel 7 peripheral data requests disabled. Write: 0: No effect (use CHREQMCLR to clear). 1: Disable DMA Channel 7 peripheral data requests.
        };
        namespace ch7ValC{
            constexpr MPL::Value<ch7Val,ch7Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7Val> ch7{}; 
        ///Channel 8 Request Mask Enable. 
        enum class ch8Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 8 peripheral data requests enabled. 1: DMA Channel 8 peripheral data requests disabled. Write: 0: No effect (use CHREQMCLR to clear). 1: Disable DMA Channel 8 peripheral data requests.
        };
        namespace ch8ValC{
            constexpr MPL::Value<ch8Val,ch8Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch8Val> ch8{}; 
        ///Channel 9 Request Mask Enable. 
        enum class ch9Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 9 peripheral data requests enabled. 1: DMA Channel 9 peripheral data requests disabled. Write: 0: No effect (use CHREQMCLR to clear). 1: Disable DMA Channel 9 peripheral data requests.
        };
        namespace ch9ValC{
            constexpr MPL::Value<ch9Val,ch9Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch9Val> ch9{}; 
    }
    namespace Nonechreqmclr{    ///<Channel Request Mask Clear
        using Addr = Register::Address<0x40036024,0xfffffc00,0,unsigned>;
        ///Channel 0 Request Mask Disable. 
        enum class ch0Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Enable DMA Channel 0 peripheral data requests.
        };
        namespace ch0ValC{
            constexpr MPL::Value<ch0Val,ch0Val::reserved> reserved{};
            constexpr MPL::Value<ch0Val,ch0Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0Val> ch0{}; 
        ///Channel 1 Request Mask Disable. 
        enum class ch1Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Enable DMA Channel 1 peripheral data requests.
        };
        namespace ch1ValC{
            constexpr MPL::Value<ch1Val,ch1Val::reserved> reserved{};
            constexpr MPL::Value<ch1Val,ch1Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1Val> ch1{}; 
        ///Channel 2 Request Mask Disable. 
        enum class ch2Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Enable DMA Channel 2 peripheral data requests.
        };
        namespace ch2ValC{
            constexpr MPL::Value<ch2Val,ch2Val::reserved> reserved{};
            constexpr MPL::Value<ch2Val,ch2Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2Val> ch2{}; 
        ///Channel 3 Request Mask Disable. 
        enum class ch3Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Enable DMA Channel 3 peripheral data requests.
        };
        namespace ch3ValC{
            constexpr MPL::Value<ch3Val,ch3Val::reserved> reserved{};
            constexpr MPL::Value<ch3Val,ch3Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3Val> ch3{}; 
        ///Channel 4 Request Mask Disable. 
        enum class ch4Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Enable DMA Channel 4 peripheral data requests.
        };
        namespace ch4ValC{
            constexpr MPL::Value<ch4Val,ch4Val::reserved> reserved{};
            constexpr MPL::Value<ch4Val,ch4Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4Val> ch4{}; 
        ///Channel 5 Request Mask Disable. 
        enum class ch5Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Enable DMA Channel 5 peripheral data requests.
        };
        namespace ch5ValC{
            constexpr MPL::Value<ch5Val,ch5Val::reserved> reserved{};
            constexpr MPL::Value<ch5Val,ch5Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5Val> ch5{}; 
        ///Channel 6 Request Mask Disable. 
        enum class ch6Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Enable DMA Channel 6 peripheral data requests.
        };
        namespace ch6ValC{
            constexpr MPL::Value<ch6Val,ch6Val::reserved> reserved{};
            constexpr MPL::Value<ch6Val,ch6Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6Val> ch6{}; 
        ///Channel 7 Request Mask Disable. 
        enum class ch7Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Enable DMA Channel 7 peripheral data requests.
        };
        namespace ch7ValC{
            constexpr MPL::Value<ch7Val,ch7Val::reserved> reserved{};
            constexpr MPL::Value<ch7Val,ch7Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7Val> ch7{}; 
        ///Channel 8 Request Mask Disable. 
        enum class ch8Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Enable DMA Channel 8 peripheral data requests.
        };
        namespace ch8ValC{
            constexpr MPL::Value<ch8Val,ch8Val::reserved> reserved{};
            constexpr MPL::Value<ch8Val,ch8Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch8Val> ch8{}; 
        ///Channel 9 Request Mask Disable. 
        enum class ch9Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Enable DMA Channel 9 peripheral data requests.
        };
        namespace ch9ValC{
            constexpr MPL::Value<ch9Val,ch9Val::reserved> reserved{};
            constexpr MPL::Value<ch9Val,ch9Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch9Val> ch9{}; 
    }
    namespace Nonechenset{    ///<Channel Enable Set
        using Addr = Register::Address<0x40036028,0xfffffc00,0,unsigned>;
        ///Channel 0 Enable. 
        enum class ch0Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 0 disabled. 1: DMA Channel 0 enabled. Write: 0: No effect (use CHENCLR to clear). 1: Enable DMA Channel 0.
        };
        namespace ch0ValC{
            constexpr MPL::Value<ch0Val,ch0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0Val> ch0{}; 
        ///Channel 1 Enable. 
        enum class ch1Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 1 disabled. 1: DMA Channel 1 enabled. Write: 0: No effect (use CHENCLR to clear). 1: Enable DMA Channel 1.
        };
        namespace ch1ValC{
            constexpr MPL::Value<ch1Val,ch1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1Val> ch1{}; 
        ///Channel 2 Enable. 
        enum class ch2Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 2 disabled. 1: DMA Channel 2 enabled. Write: 0: No effect (use CHENCLR to clear). 1: Enable DMA Channel 2.
        };
        namespace ch2ValC{
            constexpr MPL::Value<ch2Val,ch2Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2Val> ch2{}; 
        ///Channel 3 Enable. 
        enum class ch3Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 3 disabled. 1: DMA Channel 3 enabled. Write: 0: No effect (use CHENCLR to clear). 1: Enable DMA Channel 3.
        };
        namespace ch3ValC{
            constexpr MPL::Value<ch3Val,ch3Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3Val> ch3{}; 
        ///Channel 4 Enable. 
        enum class ch4Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 4 disabled. 1: DMA Channel 4 enabled. Write: 0: No effect (use CHENCLR to clear). 1: Enable DMA Channel 4.
        };
        namespace ch4ValC{
            constexpr MPL::Value<ch4Val,ch4Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4Val> ch4{}; 
        ///Channel 5 Enable. 
        enum class ch5Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 5 disabled. 1: DMA Channel 5 enabled. Write: 0: No effect (use CHENCLR to clear). 1: Enable DMA Channel 5.
        };
        namespace ch5ValC{
            constexpr MPL::Value<ch5Val,ch5Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5Val> ch5{}; 
        ///Channel 6 Enable. 
        enum class ch6Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 6 disabled. 1: DMA Channel 6 enabled. Write: 0: No effect (use CHENCLR to clear). 1: Enable DMA Channel 6.
        };
        namespace ch6ValC{
            constexpr MPL::Value<ch6Val,ch6Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6Val> ch6{}; 
        ///Channel 7 Enable. 
        enum class ch7Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 7 disabled. 1: DMA Channel 7 enabled. Write: 0: No effect (use CHENCLR to clear). 1: Enable DMA Channel 7.
        };
        namespace ch7ValC{
            constexpr MPL::Value<ch7Val,ch7Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7Val> ch7{}; 
        ///Channel 8 Enable. 
        enum class ch8Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 8 disabled. 1: DMA Channel 8 enabled. Write: 0: No effect (use CHENCLR to clear). 1: Enable DMA Channel 8.
        };
        namespace ch8ValC{
            constexpr MPL::Value<ch8Val,ch8Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch8Val> ch8{}; 
        ///Channel 9 Enable. 
        enum class ch9Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 9 disabled. 1: DMA Channel 9 enabled. Write: 0: No effect (use CHENCLR to clear). 1: Enable DMA Channel 9.
        };
        namespace ch9ValC{
            constexpr MPL::Value<ch9Val,ch9Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch9Val> ch9{}; 
    }
    namespace Nonechenclr{    ///<Channel Enable Clear
        using Addr = Register::Address<0x4003602c,0xfffffc00,0,unsigned>;
        ///Channel 0 Disable. 
        enum class ch0Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Disable DMA Channel 0.
        };
        namespace ch0ValC{
            constexpr MPL::Value<ch0Val,ch0Val::reserved> reserved{};
            constexpr MPL::Value<ch0Val,ch0Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0Val> ch0{}; 
        ///Channel 1 Disable. 
        enum class ch1Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Disable DMA Channel 1.
        };
        namespace ch1ValC{
            constexpr MPL::Value<ch1Val,ch1Val::reserved> reserved{};
            constexpr MPL::Value<ch1Val,ch1Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1Val> ch1{}; 
        ///Channel 2 Disable. 
        enum class ch2Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Disable DMA Channel 2.
        };
        namespace ch2ValC{
            constexpr MPL::Value<ch2Val,ch2Val::reserved> reserved{};
            constexpr MPL::Value<ch2Val,ch2Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2Val> ch2{}; 
        ///Channel 3 Disable. 
        enum class ch3Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Disable DMA Channel 3.
        };
        namespace ch3ValC{
            constexpr MPL::Value<ch3Val,ch3Val::reserved> reserved{};
            constexpr MPL::Value<ch3Val,ch3Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3Val> ch3{}; 
        ///Channel 4 Disable. 
        enum class ch4Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Disable DMA Channel 4.
        };
        namespace ch4ValC{
            constexpr MPL::Value<ch4Val,ch4Val::reserved> reserved{};
            constexpr MPL::Value<ch4Val,ch4Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4Val> ch4{}; 
        ///Channel 5 Disable. 
        enum class ch5Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Disable DMA Channel 5.
        };
        namespace ch5ValC{
            constexpr MPL::Value<ch5Val,ch5Val::reserved> reserved{};
            constexpr MPL::Value<ch5Val,ch5Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5Val> ch5{}; 
        ///Channel 6 Disable. 
        enum class ch6Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Disable DMA Channel 6.
        };
        namespace ch6ValC{
            constexpr MPL::Value<ch6Val,ch6Val::reserved> reserved{};
            constexpr MPL::Value<ch6Val,ch6Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6Val> ch6{}; 
        ///Channel 7 Disable. 
        enum class ch7Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Disable DMA Channel 7.
        };
        namespace ch7ValC{
            constexpr MPL::Value<ch7Val,ch7Val::reserved> reserved{};
            constexpr MPL::Value<ch7Val,ch7Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7Val> ch7{}; 
        ///Channel 8 Disable. 
        enum class ch8Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Disable DMA Channel 8.
        };
        namespace ch8ValC{
            constexpr MPL::Value<ch8Val,ch8Val::reserved> reserved{};
            constexpr MPL::Value<ch8Val,ch8Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch8Val> ch8{}; 
        ///Channel 9 Disable. 
        enum class ch9Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Disable DMA Channel 9.
        };
        namespace ch9ValC{
            constexpr MPL::Value<ch9Val,ch9Val::reserved> reserved{};
            constexpr MPL::Value<ch9Val,ch9Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch9Val> ch9{}; 
    }
    namespace Nonechaltset{    ///<Channel Alternate Select Set
        using Addr = Register::Address<0x40036030,0xfffffc00,0,unsigned>;
        ///Channel 0 Alternate Enable. 
        enum class ch0Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 0 is using primary data structure. 1: DMA Channel 0 is using alternate data structure. Write: 0: No effect (use CHALTCLR to clear). 1: Use the alternate data structure for DMA Channel 0.
        };
        namespace ch0ValC{
            constexpr MPL::Value<ch0Val,ch0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0Val> ch0{}; 
        ///Channel 1 Alternate Enable. 
        enum class ch1Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 1 is using primary data structure. 1: DMA Channel 1 is using alternate data structure. Write: 0: No effect (use CHALTCLR to clear). 1: Use the alternate data structure for DMA Channel 1.
        };
        namespace ch1ValC{
            constexpr MPL::Value<ch1Val,ch1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1Val> ch1{}; 
        ///Channel 2 Alternate Enable. 
        enum class ch2Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 2 is using primary data structure. 1: DMA Channel 2 is using alternate data structure. Write: 0: No effect (use CHALTCLR to clear). 1: Use the alternate data structure for DMA Channel 2.
        };
        namespace ch2ValC{
            constexpr MPL::Value<ch2Val,ch2Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2Val> ch2{}; 
        ///Channel 3 Alternate Enable. 
        enum class ch3Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 3 is using primary data structure. 1: DMA Channel 3 is using alternate data structure. Write: 0: No effect (use CHALTCLR to clear). 1: Use the alternate data structure for DMA Channel 3.
        };
        namespace ch3ValC{
            constexpr MPL::Value<ch3Val,ch3Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3Val> ch3{}; 
        ///Channel 4 Alternate Enable. 
        enum class ch4Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 4 is using primary data structure. 1: DMA Channel 4 is using alternate data structure. Write: 0: No effect (use CHALTCLR to clear). 1: Use the alternate data structure for DMA Channel 4.
        };
        namespace ch4ValC{
            constexpr MPL::Value<ch4Val,ch4Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4Val> ch4{}; 
        ///Channel 5 Alternate Enable. 
        enum class ch5Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 5 is using primary data structure. 1: DMA Channel 5 is using alternate data structure. Write: 0: No effect (use CHALTCLR to clear). 1: Use the alternate data structure for DMA Channel 5.
        };
        namespace ch5ValC{
            constexpr MPL::Value<ch5Val,ch5Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5Val> ch5{}; 
        ///Channel 6 Alternate Enable. 
        enum class ch6Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 6 is using primary data structure. 1: DMA Channel 6 is using alternate data structure. Write: 0: No effect (use CHALTCLR to clear). 1: Use the alternate data structure for DMA Channel 6.
        };
        namespace ch6ValC{
            constexpr MPL::Value<ch6Val,ch6Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6Val> ch6{}; 
        ///Channel 7 Alternate Enable. 
        enum class ch7Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 7 is using primary data structure. 1: DMA Channel 7 is using alternate data structure. Write: 0: No effect (use CHALTCLR to clear). 1: Use the alternate data structure for DMA Channel 7.
        };
        namespace ch7ValC{
            constexpr MPL::Value<ch7Val,ch7Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7Val> ch7{}; 
        ///Channel 8 Alternate Enable. 
        enum class ch8Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 8 is using primary data structure. 1: DMA Channel 8 is using alternate data structure. Write: 0: No effect (use CHALTCLR to clear). 1: Use the alternate data structure for DMA Channel 8.
        };
        namespace ch8ValC{
            constexpr MPL::Value<ch8Val,ch8Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch8Val> ch8{}; 
        ///Channel 9 Alternate Enable. 
        enum class ch9Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 9 is using primary data structure. 1: DMA Channel 9 is using alternate data structure. Write: 0: No effect (use CHALTCLR to clear). 1: Use the alternate data structure for DMA Channel 9.
        };
        namespace ch9ValC{
            constexpr MPL::Value<ch9Val,ch9Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch9Val> ch9{}; 
    }
    namespace Nonechaltclr{    ///<Channel Alternate Select Clear
        using Addr = Register::Address<0x40036034,0xfffffc00,0,unsigned>;
        ///Channel 0 Alternate Disable. 
        enum class ch0Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Use the primary data structure for DMA Channel 0.
        };
        namespace ch0ValC{
            constexpr MPL::Value<ch0Val,ch0Val::reserved> reserved{};
            constexpr MPL::Value<ch0Val,ch0Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0Val> ch0{}; 
        ///Channel 1 Alternate Disable. 
        enum class ch1Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Use the primary data structure for DMA Channel 1.
        };
        namespace ch1ValC{
            constexpr MPL::Value<ch1Val,ch1Val::reserved> reserved{};
            constexpr MPL::Value<ch1Val,ch1Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1Val> ch1{}; 
        ///Channel 2 Alternate Disable. 
        enum class ch2Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Use the primary data structure for DMA Channel 2.
        };
        namespace ch2ValC{
            constexpr MPL::Value<ch2Val,ch2Val::reserved> reserved{};
            constexpr MPL::Value<ch2Val,ch2Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2Val> ch2{}; 
        ///Channel 3 Alternate Disable. 
        enum class ch3Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Use the primary data structure for DMA Channel 3.
        };
        namespace ch3ValC{
            constexpr MPL::Value<ch3Val,ch3Val::reserved> reserved{};
            constexpr MPL::Value<ch3Val,ch3Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3Val> ch3{}; 
        ///Channel 4 Alternate Disable. 
        enum class ch4Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Use the primary data structure for DMA Channel 4.
        };
        namespace ch4ValC{
            constexpr MPL::Value<ch4Val,ch4Val::reserved> reserved{};
            constexpr MPL::Value<ch4Val,ch4Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4Val> ch4{}; 
        ///Channel 5 Alternate Disable. 
        enum class ch5Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Use the primary data structure for DMA Channel 5.
        };
        namespace ch5ValC{
            constexpr MPL::Value<ch5Val,ch5Val::reserved> reserved{};
            constexpr MPL::Value<ch5Val,ch5Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5Val> ch5{}; 
        ///Channel 6 Alternate Disable. 
        enum class ch6Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Use the primary data structure for DMA Channel 6.
        };
        namespace ch6ValC{
            constexpr MPL::Value<ch6Val,ch6Val::reserved> reserved{};
            constexpr MPL::Value<ch6Val,ch6Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6Val> ch6{}; 
        ///Channel 7 Alternate Disable. 
        enum class ch7Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Use the primary data structure for DMA Channel 7.
        };
        namespace ch7ValC{
            constexpr MPL::Value<ch7Val,ch7Val::reserved> reserved{};
            constexpr MPL::Value<ch7Val,ch7Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7Val> ch7{}; 
        ///Channel 8 Alternate Disable. 
        enum class ch8Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Use the primary data structure for DMA Channel 8.
        };
        namespace ch8ValC{
            constexpr MPL::Value<ch8Val,ch8Val::reserved> reserved{};
            constexpr MPL::Value<ch8Val,ch8Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch8Val> ch8{}; 
        ///Channel 9 Alternate Disable. 
        enum class ch9Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Use the primary data structure for DMA Channel 9.
        };
        namespace ch9ValC{
            constexpr MPL::Value<ch9Val,ch9Val::reserved> reserved{};
            constexpr MPL::Value<ch9Val,ch9Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch9Val> ch9{}; 
    }
    namespace Nonechhpset{    ///<Channel High Priority Set
        using Addr = Register::Address<0x40036038,0xfffffc00,0,unsigned>;
        ///Channel 0 High Priority Enable. 
        enum class ch0Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 0 is using the default priority level. 1: DMA Channel 0 is using the high priority level. Write: 0: No effect (use CHHPCLR to clear). 1: Use the high priority level for DMA Channel 0.
        };
        namespace ch0ValC{
            constexpr MPL::Value<ch0Val,ch0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0Val> ch0{}; 
        ///Channel 1 High Priority Enable. 
        enum class ch1Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 1 is using the default priority level. 1: DMA Channel 1 is using the high priority level. Write: 0: No effect (use CHHPCLR to clear). 1: Use the high priority level for DMA Channel 1.
        };
        namespace ch1ValC{
            constexpr MPL::Value<ch1Val,ch1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1Val> ch1{}; 
        ///Channel 2 High Priority Enable. 
        enum class ch2Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 2 is using the default priority level. 1: DMA Channel 2 is using the high priority level. Write: 0: No effect (use CHHPCLR to clear). 1: Use the high priority level for DMA Channel 2.
        };
        namespace ch2ValC{
            constexpr MPL::Value<ch2Val,ch2Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2Val> ch2{}; 
        ///Channel 3 High Priority Enable. 
        enum class ch3Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 3 is using the default priority level. 1: DMA Channel 3 is using the high priority level. Write: 0: No effect (use CHHPCLR to clear). 1: Use the high priority level for DMA Channel 3.
        };
        namespace ch3ValC{
            constexpr MPL::Value<ch3Val,ch3Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3Val> ch3{}; 
        ///Channel 4 High Priority Enable. 
        enum class ch4Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 4 is using the default priority level. 1: DMA Channel 4 is using the high priority level. Write: 0: No effect (use CHHPCLR to clear). 1: Use the high priority level for DMA Channel 4.
        };
        namespace ch4ValC{
            constexpr MPL::Value<ch4Val,ch4Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4Val> ch4{}; 
        ///Channel 5 High Priority Enable. 
        enum class ch5Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 5 is using the default priority level. 1: DMA Channel 5 is using the high priority level. Write: 0: No effect (use CHHPCLR to clear). 1: Use the high priority level for DMA Channel 5.
        };
        namespace ch5ValC{
            constexpr MPL::Value<ch5Val,ch5Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5Val> ch5{}; 
        ///Channel 6 High Priority Enable. 
        enum class ch6Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 6 is using the default priority level. 1: DMA Channel 6 is using the high priority level. Write: 0: No effect (use CHHPCLR to clear). 1: Use the high priority level for DMA Channel 6.
        };
        namespace ch6ValC{
            constexpr MPL::Value<ch6Val,ch6Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6Val> ch6{}; 
        ///Channel 7 High Priority Enable. 
        enum class ch7Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 7 is using the default priority level. 1: DMA Channel 7 is using the high priority level. Write: 0: No effect (use CHHPCLR to clear). 1: Use the high priority level for DMA Channel 7.
        };
        namespace ch7ValC{
            constexpr MPL::Value<ch7Val,ch7Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7Val> ch7{}; 
        ///Channel 8 High Priority Enable. 
        enum class ch8Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 8 is using the default priority level. 1: DMA Channel 8 is using the high priority level. Write: 0: No effect (use CHHPCLR to clear). 1: Use the high priority level for DMA Channel 8.
        };
        namespace ch8ValC{
            constexpr MPL::Value<ch8Val,ch8Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch8Val> ch8{}; 
        ///Channel 9 High Priority Enable. 
        enum class ch9Val {
            enabled=0x00000001,     ///<Read: 0: DMA Channel 9 is using the default priority level. 1: DMA Channel 9 is using the high priority level. Write: 0: No effect (use CHHPCLR to clear). 1: Use the high priority level for DMA Channel 9.
        };
        namespace ch9ValC{
            constexpr MPL::Value<ch9Val,ch9Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch9Val> ch9{}; 
    }
    namespace Nonechhpclr{    ///<Channel High Priority Clear
        using Addr = Register::Address<0x4003603c,0xfffffc00,0,unsigned>;
        ///Channel 0 High Priority Disable. 
        enum class ch0Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Use the high default level for DMA Channel 0.
        };
        namespace ch0ValC{
            constexpr MPL::Value<ch0Val,ch0Val::reserved> reserved{};
            constexpr MPL::Value<ch0Val,ch0Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ch0Val> ch0{}; 
        ///Channel 1 High Priority Disable. 
        enum class ch1Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Use the high default level for DMA Channel 1.
        };
        namespace ch1ValC{
            constexpr MPL::Value<ch1Val,ch1Val::reserved> reserved{};
            constexpr MPL::Value<ch1Val,ch1Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ch1Val> ch1{}; 
        ///Channel 2 High Priority Disable. 
        enum class ch2Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Use the high default level for DMA Channel 2.
        };
        namespace ch2ValC{
            constexpr MPL::Value<ch2Val,ch2Val::reserved> reserved{};
            constexpr MPL::Value<ch2Val,ch2Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ch2Val> ch2{}; 
        ///Channel 3 High Priority Disable. 
        enum class ch3Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Use the high default level for DMA Channel 3.
        };
        namespace ch3ValC{
            constexpr MPL::Value<ch3Val,ch3Val::reserved> reserved{};
            constexpr MPL::Value<ch3Val,ch3Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ch3Val> ch3{}; 
        ///Channel 4 High Priority Disable. 
        enum class ch4Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Use the high default level for DMA Channel 4.
        };
        namespace ch4ValC{
            constexpr MPL::Value<ch4Val,ch4Val::reserved> reserved{};
            constexpr MPL::Value<ch4Val,ch4Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ch4Val> ch4{}; 
        ///Channel 5 High Priority Disable. 
        enum class ch5Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Use the high default level for DMA Channel 5.
        };
        namespace ch5ValC{
            constexpr MPL::Value<ch5Val,ch5Val::reserved> reserved{};
            constexpr MPL::Value<ch5Val,ch5Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ch5Val> ch5{}; 
        ///Channel 6 High Priority Disable. 
        enum class ch6Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Use the high default level for DMA Channel 6.
        };
        namespace ch6ValC{
            constexpr MPL::Value<ch6Val,ch6Val::reserved> reserved{};
            constexpr MPL::Value<ch6Val,ch6Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ch6Val> ch6{}; 
        ///Channel 7 High Priority Disable. 
        enum class ch7Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Use the high default level for DMA Channel 7.
        };
        namespace ch7ValC{
            constexpr MPL::Value<ch7Val,ch7Val::reserved> reserved{};
            constexpr MPL::Value<ch7Val,ch7Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ch7Val> ch7{}; 
        ///Channel 8 High Priority Disable. 
        enum class ch8Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Use the high default level for DMA Channel 8.
        };
        namespace ch8ValC{
            constexpr MPL::Value<ch8Val,ch8Val::reserved> reserved{};
            constexpr MPL::Value<ch8Val,ch8Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ch8Val> ch8{}; 
        ///Channel 9 High Priority Disable. 
        enum class ch9Val {
            reserved=0x00000000,     ///<No effect.
            disabled=0x00000001,     ///<Use the high default level for DMA Channel 9.
        };
        namespace ch9ValC{
            constexpr MPL::Value<ch9Val,ch9Val::reserved> reserved{};
            constexpr MPL::Value<ch9Val,ch9Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ch9Val> ch9{}; 
    }
    namespace Noneberrclr{    ///<Bus Error Clear
        using Addr = Register::Address<0x4003604c,0xfffffffe,0,unsigned>;
        ///DMA Bus Error Clear. 
        enum class errorVal {
            clear=0x00000001,     ///<Read: 0: DMA error did not occur. 1: DMA error occurred since the last time ERROR was cleared. Write: 0: No effect. 1: Clear the DMA error flag.
        };
        namespace errorValC{
            constexpr MPL::Value<errorVal,errorVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,errorVal> error{}; 
    }
}
