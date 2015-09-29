#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x4004f000,0xffff0880,0,unsigned>;
        ///Input Ready Interrupt Enable. 
        enum class inrdyienVal {
            disabled=0x00000000,     ///<Disable the input ready interrupt.
            enabled=0x00000001,     ///<Enable the input ready interrupt.
        };
        namespace inrdyienValC{
            constexpr MPL::Value<inrdyienVal,inrdyienVal::disabled> disabled{};
            constexpr MPL::Value<inrdyienVal,inrdyienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,inrdyienVal> inrdyien{}; 
        ///Output Ready Interrupt Enable. 
        enum class ordyienVal {
            disabled=0x00000000,     ///<Disable the output ready interrupt.
            enabled=0x00000001,     ///<Enable the output ready interrupt.
        };
        namespace ordyienValC{
            constexpr MPL::Value<ordyienVal,ordyienVal::disabled> disabled{};
            constexpr MPL::Value<ordyienVal,ordyienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ordyienVal> ordyien{}; 
        ///Error Interrupt Enable. 
        enum class errienVal {
            disabled=0x00000000,     ///<Disable the error interrupt.
            enabled=0x00000001,     ///<Enable the error interrupt.
        };
        namespace errienValC{
            constexpr MPL::Value<errienVal,errienVal::disabled> disabled{};
            constexpr MPL::Value<errienVal,errienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,errienVal> errien{}; 
        ///Module Reset. 
        enum class resetVal {
            active=0x00000001,     ///<Reset the module.
        };
        namespace resetValC{
            constexpr MPL::Value<resetVal,resetVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,resetVal> reset{}; 
        ///Manchester Output Size. 
        enum class mosizeVal {
            small=0x00000000,     ///<Manchester encode operations generate a half-word output, and decode operations generate a byte output.
            large=0x00000001,     ///<Manchester encode operations generate a word output, and decode operations generate a half-word output.
        };
        namespace mosizeValC{
            constexpr MPL::Value<mosizeVal,mosizeVal::small> small{};
            constexpr MPL::Value<mosizeVal,mosizeVal::large> large{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,mosizeVal> mosize{}; 
        ///Encode Decode Mode. 
        enum class edmdVal {
            decode=0x00000000,     ///<Decode data written to DATAIN.
            encode=0x00000001,     ///<Encode data written to DATAIN.
        };
        namespace edmdValC{
            constexpr MPL::Value<edmdVal,edmdVal::decode> decode{};
            constexpr MPL::Value<edmdVal,edmdVal::encode> encode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,edmdVal> edmd{}; 
        ///Operation Mode. 
        enum class opmdVal {
            manchester=0x00000000,     ///<The operation selected by ENCMD uses Manchester mode.
            v3outof6=0x00000001,     ///<The operation selected by ENCMD uses Three-out-of-Six mode.
        };
        namespace opmdValC{
            constexpr MPL::Value<opmdVal,opmdVal::manchester> manchester{};
            constexpr MPL::Value<opmdVal,opmdVal::v3outof6> v3outof6{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,opmdVal> opmd{}; 
        ///Bypass Encoder/Decoder Operation Enable. 
        enum class benVal {
            disabled=0x00000000,     ///<Do not bypass ENCDEC operations.
            enabled=0x00000001,     ///<Bypass ENCDEC operations.
        };
        namespace benValC{
            constexpr MPL::Value<benVal,benVal::disabled> disabled{};
            constexpr MPL::Value<benVal,benVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,benVal> ben{}; 
        ///DMA Mode Enable. 
        enum class dmaenVal {
            disabled=0x00000000,     ///<Disable DMA mode.
            enabled=0x00000001,     ///<Enable DMA mode.
        };
        namespace dmaenValC{
            constexpr MPL::Value<dmaenVal,dmaenVal::disabled> disabled{};
            constexpr MPL::Value<dmaenVal,dmaenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,dmaenVal> dmaen{}; 
        ///Debug Mode. 
        enum class dbgmdVal {
            run=0x00000000,     ///<The AES module will continue to operate while the core is halted in debug mode.
            halt=0x00000001,     ///<A debug breakpoint will cause the AES module to halt.
        };
        namespace dbgmdValC{
            constexpr MPL::Value<dbgmdVal,dbgmdVal::run> run{};
            constexpr MPL::Value<dbgmdVal,dbgmdVal::halt> halt{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,dbgmdVal> dbgmd{}; 
        ///Output Order Mode. 
        enum class oorderVal {
            noChange=0x00000000,     ///<The module outputs data to DATAOUT in the same order as it was processed (input: B3 B2 B1 B0, output: B3 B2 B1 B0).
            halfWord=0x00000001,     ///<The module flips the data in half-words before outputting to DATAOUT (input: B3 B2 B1 B0, output: B2 B3 B0 B1).
            word=0x00000002,     ///<The module flips the data in words before outputting to DATAOUT (input: B3 B2 B1 B0, output: B0 B1 B2 B3).
            lowerThreeBytes=0x00000003,     ///<The module flips the lower three bytes before outputting to DATAOUT (input: B3 B2 B1 B0, output: B3 B0 B1 B2).
        };
        namespace oorderValC{
            constexpr MPL::Value<oorderVal,oorderVal::noChange> noChange{};
            constexpr MPL::Value<oorderVal,oorderVal::halfWord> halfWord{};
            constexpr MPL::Value<oorderVal,oorderVal::word> word{};
            constexpr MPL::Value<oorderVal,oorderVal::lowerThreeBytes> lowerThreeBytes{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,oorderVal> oorder{}; 
        ///Input Order Mode. 
        enum class iorderVal {
            noChange=0x00000000,     ///<Data written to DATAIN is processed in the order written (input: B3 B2 B1 B0, output: B3 B2 B1 B0).
            halfWord=0x00000001,     ///<The module flips the DATAIN input data in half-words (input: B2 B3 B0 B1, output: B3 B2 B1 B0).
            word=0x00000002,     ///<The module flips the DATAIN input data in words (input: B0 B1 B2 B3, output: B3 B2 B1 B0).
            lowerThreeBytes=0x00000003,     ///<The module flips the lower three bytes of the DATAIN input data (input: B3 B0 B1 B2, output: B3 B2 B1 B0).
        };
        namespace iorderValC{
            constexpr MPL::Value<iorderVal,iorderVal::noChange> noChange{};
            constexpr MPL::Value<iorderVal,iorderVal::halfWord> halfWord{};
            constexpr MPL::Value<iorderVal,iorderVal::word> word{};
            constexpr MPL::Value<iorderVal,iorderVal::lowerThreeBytes> lowerThreeBytes{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,iorderVal> iorder{}; 
    }
    namespace Nonestatus{    ///<Module Status
        using Addr = Register::Address<0x4004f010,0xffffffe0,0,unsigned>;
        ///Input Ready Interrupt Flag. 
        enum class inrdyiVal {
            notSet=0x00000000,     ///<The input FIFO is not ready for new data.
            set=0x00000001,     ///<Firmware can write new input data to DATAIN.
        };
        namespace inrdyiValC{
            constexpr MPL::Value<inrdyiVal,inrdyiVal::notSet> notSet{};
            constexpr MPL::Value<inrdyiVal,inrdyiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,inrdyiVal> inrdyi{}; 
        ///Output Ready Interrupt Flag. 
        enum class ordyiVal {
            notSet=0x00000000,     ///<The output data is not ready.
            set=0x00000001,     ///<The output data is ready to be read by firmware.
        };
        namespace ordyiValC{
            constexpr MPL::Value<ordyiVal,ordyiVal::notSet> notSet{};
            constexpr MPL::Value<ordyiVal,ordyiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ordyiVal> ordyi{}; 
        ///Data Error Interrupt Flag. 
        enum class derriVal {
            notSet=0x00000000,     ///<None
            set=0x00000001,     ///<None
        };
        namespace derriValC{
            constexpr MPL::Value<derriVal,derriVal::notSet> notSet{};
            constexpr MPL::Value<derriVal,derriVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,derriVal> derri{}; 
        ///Data Underrun Interrupt Flag. 
        enum class duriVal {
            notSet=0x00000000,     ///<No output data FIFO underrun.
            set=0x00000001,     ///<An output data FIFO underrun has occurred.
        };
        namespace duriValC{
            constexpr MPL::Value<duriVal,duriVal::notSet> notSet{};
            constexpr MPL::Value<duriVal,duriVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,duriVal> duri{}; 
        ///Data Overrun Interrupt Flag. 
        enum class doriVal {
            notSet=0x00000000,     ///<No input data FIFO overrun.
            set=0x00000001,     ///<An input data FIFO overrun has occurred.
        };
        namespace doriValC{
            constexpr MPL::Value<doriVal,doriVal::notSet> notSet{};
            constexpr MPL::Value<doriVal,doriVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,doriVal> dori{}; 
    }
    namespace Nonedatain{    ///<Data Input
        using Addr = Register::Address<0x4004f020,0x00000000,0,unsigned>;
        ///Data Input. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idata{}; 
    }
    namespace Nonedataout{    ///<Data Output
        using Addr = Register::Address<0x4004f030,0x00000000,0,unsigned>;
        ///Data Output. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> odata{}; 
    }
    namespace Nonedataoutc{    ///<Data Output Complement
        using Addr = Register::Address<0x4004f040,0x00000000,0,unsigned>;
        ///Data Output Complement. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> odatac{}; 
    }
}
