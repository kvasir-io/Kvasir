#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x4004f000,0xffff0880,0,unsigned>;
        ///Input Ready Interrupt Enable. 
        enum class InrdyienVal {
            disabled=0x00000000,     ///<Disable the input ready interrupt.
            enabled=0x00000001,     ///<Enable the input ready interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InrdyienVal> inrdyien{}; 
        namespace InrdyienValC{
            constexpr Register::FieldValue<decltype(inrdyien)::Type,InrdyienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(inrdyien)::Type,InrdyienVal::enabled> enabled{};
        }
        }
        ///Output Ready Interrupt Enable. 
        enum class OrdyienVal {
            disabled=0x00000000,     ///<Disable the output ready interrupt.
            enabled=0x00000001,     ///<Enable the output ready interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,OrdyienVal> ordyien{}; 
        namespace OrdyienValC{
            constexpr Register::FieldValue<decltype(ordyien)::Type,OrdyienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ordyien)::Type,OrdyienVal::enabled> enabled{};
        }
        }
        ///Error Interrupt Enable. 
        enum class ErrienVal {
            disabled=0x00000000,     ///<Disable the error interrupt.
            enabled=0x00000001,     ///<Enable the error interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ErrienVal> errien{}; 
        namespace ErrienValC{
            constexpr Register::FieldValue<decltype(errien)::Type,ErrienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(errien)::Type,ErrienVal::enabled> enabled{};
        }
        }
        ///Module Reset. 
        enum class ResetVal {
            active=0x00000001,     ///<Reset the module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ResetVal> reset{}; 
        namespace ResetValC{
            constexpr Register::FieldValue<decltype(reset)::Type,ResetVal::active> active{};
        }
        }
        ///Manchester Output Size. 
        enum class MosizeVal {
            small=0x00000000,     ///<Manchester encode operations generate a half-word output, and decode operations generate a byte output.
            large=0x00000001,     ///<Manchester encode operations generate a word output, and decode operations generate a half-word output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,MosizeVal> mosize{}; 
        namespace MosizeValC{
            constexpr Register::FieldValue<decltype(mosize)::Type,MosizeVal::small> small{};
            constexpr Register::FieldValue<decltype(mosize)::Type,MosizeVal::large> large{};
        }
        }
        ///Encode Decode Mode. 
        enum class EdmdVal {
            decode=0x00000000,     ///<Decode data written to DATAIN.
            encode=0x00000001,     ///<Encode data written to DATAIN.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EdmdVal> edmd{}; 
        namespace EdmdValC{
            constexpr Register::FieldValue<decltype(edmd)::Type,EdmdVal::decode> decode{};
            constexpr Register::FieldValue<decltype(edmd)::Type,EdmdVal::encode> encode{};
        }
        }
        ///Operation Mode. 
        enum class OpmdVal {
            manchester=0x00000000,     ///<The operation selected by ENCMD uses Manchester mode.
            v3outof6=0x00000001,     ///<The operation selected by ENCMD uses Three-out-of-Six mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,OpmdVal> opmd{}; 
        namespace OpmdValC{
            constexpr Register::FieldValue<decltype(opmd)::Type,OpmdVal::manchester> manchester{};
            constexpr Register::FieldValue<decltype(opmd)::Type,OpmdVal::v3outof6> v3outof6{};
        }
        }
        ///Bypass Encoder/Decoder Operation Enable. 
        enum class BenVal {
            disabled=0x00000000,     ///<Do not bypass ENCDEC operations.
            enabled=0x00000001,     ///<Bypass ENCDEC operations.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,BenVal> ben{}; 
        namespace BenValC{
            constexpr Register::FieldValue<decltype(ben)::Type,BenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ben)::Type,BenVal::enabled> enabled{};
        }
        }
        ///DMA Mode Enable. 
        enum class DmaenVal {
            disabled=0x00000000,     ///<Disable DMA mode.
            enabled=0x00000001,     ///<Enable DMA mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,DmaenVal> dmaen{}; 
        namespace DmaenValC{
            constexpr Register::FieldValue<decltype(dmaen)::Type,DmaenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dmaen)::Type,DmaenVal::enabled> enabled{};
        }
        }
        ///Debug Mode. 
        enum class DbgmdVal {
            run=0x00000000,     ///<The AES module will continue to operate while the core is halted in debug mode.
            halt=0x00000001,     ///<A debug breakpoint will cause the AES module to halt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,DbgmdVal> dbgmd{}; 
        namespace DbgmdValC{
            constexpr Register::FieldValue<decltype(dbgmd)::Type,DbgmdVal::run> run{};
            constexpr Register::FieldValue<decltype(dbgmd)::Type,DbgmdVal::halt> halt{};
        }
        }
        ///Output Order Mode. 
        enum class OorderVal {
            noChange=0x00000000,     ///<The module outputs data to DATAOUT in the same order as it was processed (input: B3 B2 B1 B0, output: B3 B2 B1 B0).
            halfWord=0x00000001,     ///<The module flips the data in half-words before outputting to DATAOUT (input: B3 B2 B1 B0, output: B2 B3 B0 B1).
            word=0x00000002,     ///<The module flips the data in words before outputting to DATAOUT (input: B3 B2 B1 B0, output: B0 B1 B2 B3).
            lowerThreeBytes=0x00000003,     ///<The module flips the lower three bytes before outputting to DATAOUT (input: B3 B2 B1 B0, output: B3 B0 B1 B2).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,OorderVal> oorder{}; 
        namespace OorderValC{
            constexpr Register::FieldValue<decltype(oorder)::Type,OorderVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(oorder)::Type,OorderVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(oorder)::Type,OorderVal::word> word{};
            constexpr Register::FieldValue<decltype(oorder)::Type,OorderVal::lowerThreeBytes> lowerThreeBytes{};
        }
        }
        ///Input Order Mode. 
        enum class IorderVal {
            noChange=0x00000000,     ///<Data written to DATAIN is processed in the order written (input: B3 B2 B1 B0, output: B3 B2 B1 B0).
            halfWord=0x00000001,     ///<The module flips the DATAIN input data in half-words (input: B2 B3 B0 B1, output: B3 B2 B1 B0).
            word=0x00000002,     ///<The module flips the DATAIN input data in words (input: B0 B1 B2 B3, output: B3 B2 B1 B0).
            lowerThreeBytes=0x00000003,     ///<The module flips the lower three bytes of the DATAIN input data (input: B3 B0 B1 B2, output: B3 B2 B1 B0).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,IorderVal> iorder{}; 
        namespace IorderValC{
            constexpr Register::FieldValue<decltype(iorder)::Type,IorderVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(iorder)::Type,IorderVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(iorder)::Type,IorderVal::word> word{};
            constexpr Register::FieldValue<decltype(iorder)::Type,IorderVal::lowerThreeBytes> lowerThreeBytes{};
        }
        }
    }
    namespace Nonestatus{    ///<Module Status
        using Addr = Register::Address<0x4004f010,0xffffffe0,0,unsigned>;
        ///Input Ready Interrupt Flag. 
        enum class InrdyiVal {
            notSet=0x00000000,     ///<The input FIFO is not ready for new data.
            set=0x00000001,     ///<Firmware can write new input data to DATAIN.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InrdyiVal> inrdyi{}; 
        namespace InrdyiValC{
            constexpr Register::FieldValue<decltype(inrdyi)::Type,InrdyiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(inrdyi)::Type,InrdyiVal::set> set{};
        }
        }
        ///Output Ready Interrupt Flag. 
        enum class OrdyiVal {
            notSet=0x00000000,     ///<The output data is not ready.
            set=0x00000001,     ///<The output data is ready to be read by firmware.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,OrdyiVal> ordyi{}; 
        namespace OrdyiValC{
            constexpr Register::FieldValue<decltype(ordyi)::Type,OrdyiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(ordyi)::Type,OrdyiVal::set> set{};
        }
        }
        ///Data Error Interrupt Flag. 
        enum class DerriVal {
            notSet=0x00000000,     ///<None
            set=0x00000001,     ///<None
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,DerriVal> derri{}; 
        namespace DerriValC{
            constexpr Register::FieldValue<decltype(derri)::Type,DerriVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(derri)::Type,DerriVal::set> set{};
        }
        }
        ///Data Underrun Interrupt Flag. 
        enum class DuriVal {
            notSet=0x00000000,     ///<No output data FIFO underrun.
            set=0x00000001,     ///<An output data FIFO underrun has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DuriVal> duri{}; 
        namespace DuriValC{
            constexpr Register::FieldValue<decltype(duri)::Type,DuriVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(duri)::Type,DuriVal::set> set{};
        }
        }
        ///Data Overrun Interrupt Flag. 
        enum class DoriVal {
            notSet=0x00000000,     ///<No input data FIFO overrun.
            set=0x00000001,     ///<An input data FIFO overrun has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DoriVal> dori{}; 
        namespace DoriValC{
            constexpr Register::FieldValue<decltype(dori)::Type,DoriVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(dori)::Type,DoriVal::set> set{};
        }
        }
    }
    namespace Nonedatain{    ///<Data Input
        using Addr = Register::Address<0x4004f020,0x00000000,0,unsigned>;
        ///Data Input. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idata{}; 
    }
    namespace Nonedataout{    ///<Data Output
        using Addr = Register::Address<0x4004f030,0x00000000,0,unsigned>;
        ///Data Output. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> odata{}; 
    }
    namespace Nonedataoutc{    ///<Data Output Complement
        using Addr = Register::Address<0x4004f040,0x00000000,0,unsigned>;
        ///Data Output Complement. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> odatac{}; 
    }
}
