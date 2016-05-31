#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//None
    namespace Spi0Data{    ///<Input/Output Data
        using Addr = Register::Address<0x40004000,0x00000000,0x00000000,unsigned>;
        ///Input/Output Data. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Spi0Control{    ///<Module Control
        using Addr = Register::Address<0x40004010,0xfe003c00,0x00000000,unsigned>;
        ///Receive FIFO Read Request Interrupt Flag. 
        enum class RfrqiVal {
            notSet=0x00000000,     ///<The RX FIFO has fewer bytes than the level defined by RFTH.
            set=0x00000001,     ///<The RX FIFO has equal or more bytes than the level defined by RFTH.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,RfrqiVal> rfrqi{}; 
        namespace RfrqiValC{
            constexpr Register::FieldValue<decltype(rfrqi)::Type,RfrqiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rfrqi)::Type,RfrqiVal::set> set{};
        }
        ///Receive FIFO Overrun Interrupt Flag. 
        enum class RforiVal {
            notSet=0x00000000,     ///<Read: A receive FIFO overrun has not occurred. Write: Clear the flag.
            set=0x00000001,     ///<Read: A receive FIFO overrun  occurred. Write: Force a receive overrun interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RforiVal> rfori{}; 
        namespace RforiValC{
            constexpr Register::FieldValue<decltype(rfori)::Type,RforiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rfori)::Type,RforiVal::set> set{};
        }
        ///Transmit FIFO Write Request Interrupt Flag. 
        enum class TfrqiVal {
            notSet=0x00000000,     ///<The TX FIFO has fewer empty slots than the level defined by TFTH.
            set=0x00000001,     ///<The TX FIFO has at least as many empty slots as the level defined by TFTH.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TfrqiVal> tfrqi{}; 
        namespace TfrqiValC{
            constexpr Register::FieldValue<decltype(tfrqi)::Type,TfrqiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(tfrqi)::Type,TfrqiVal::set> set{};
        }
        ///Transmit FIFO Overrun Interrupt Flag. 
        enum class TforiVal {
            notSet=0x00000000,     ///<Read: A transmit FIFO overrun has not occurred. Write: Clear the flag.
            set=0x00000001,     ///<Read: A transmit FIFO overrun  occurred. Write: Force a transmit overrun interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TforiVal> tfori{}; 
        namespace TforiValC{
            constexpr Register::FieldValue<decltype(tfori)::Type,TforiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(tfori)::Type,TforiVal::set> set{};
        }
        ///Slave Selected Interrupt Flag. 
        enum class SlvseliVal {
            notSet=0x00000000,     ///<The slave select signal (NSS) is not active.
            set=0x00000001,     ///<The slave select signal (NSS) is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SlvseliVal> slvseli{}; 
        namespace SlvseliValC{
            constexpr Register::FieldValue<decltype(slvseli)::Type,SlvseliVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(slvseli)::Type,SlvseliVal::set> set{};
        }
        ///Mode Fault Interrupt Flag. 
        enum class MdfiVal {
            notSet=0x00000000,     ///<Read: A master mode collision is not detected. Write: Clear the flag.
            set=0x00000001,     ///<Read: A master mode collision occurred. Write: Force a mode fault interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MdfiVal> mdfi{}; 
        namespace MdfiValC{
            constexpr Register::FieldValue<decltype(mdfi)::Type,MdfiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(mdfi)::Type,MdfiVal::set> set{};
        }
        ///Underrun Interrupt Flag. 
        enum class UriVal {
            notSet=0x00000000,     ///<Read: A data transfer is still in progress. Write: Clear the flag.
            set=0x00000001,     ///<Read: The transmit FIFO and shift register are empty and the data transfer has ended. Write: Force an underrun interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,UriVal> uri{}; 
        namespace UriValC{
            constexpr Register::FieldValue<decltype(uri)::Type,UriVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(uri)::Type,UriVal::set> set{};
        }
        ///Shift Register Empty Interrupt Flag. 
        enum class SreiVal {
            notSet=0x00000000,     ///<There is data still present in the transmit FIFO or shift register.
            set=0x00000001,     ///<All data has been transferred out of the shift register and there is no data waiting in the transmit FIFO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SreiVal> srei{}; 
        namespace SreiValC{
            constexpr Register::FieldValue<decltype(srei)::Type,SreiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(srei)::Type,SreiVal::set> set{};
        }
        ///Illegal Receive FIFO Access Interrupt Flag. 
        enum class RfiliVal {
            notSet=0x00000000,     ///<Read: An illegal write or read of the receive FIFO has not occurred. Write: Clear the flag.
            set=0x00000001,     ///<Read: An illegal write or read of the receive FIFO occurred. Write: Force an illegal receive access interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,RfiliVal> rfili{}; 
        namespace RfiliValC{
            constexpr Register::FieldValue<decltype(rfili)::Type,RfiliVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rfili)::Type,RfiliVal::set> set{};
        }
        ///Illegal Transmit FIFO Access Interrupt Flag. 
        enum class TfiliVal {
            notSet=0x00000000,     ///<Read: An illegal write or read of the transmit FIFO has not occurred. Write: Clear the flag.
            set=0x00000001,     ///<Read: An illegal write or read of the transmit FIFO occurred. Write: Force an illegal transmit access interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,TfiliVal> tfili{}; 
        namespace TfiliValC{
            constexpr Register::FieldValue<decltype(tfili)::Type,TfiliVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(tfili)::Type,TfiliVal::set> set{};
        }
        ///NSS Instantaneous Pin Status. 
        enum class NssstsVal {
            low=0x00000000,     ///<NSS is currently a logic low.
            high=0x00000001,     ///<NSS is currently a logic high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,NssstsVal> nsssts{}; 
        namespace NssstsValC{
            constexpr Register::FieldValue<decltype(nsssts)::Type,NssstsVal::low> low{};
            constexpr Register::FieldValue<decltype(nsssts)::Type,NssstsVal::high> high{};
        }
        ///SPI Busy. 
        enum class BusyfVal {
            notSet=0x00000000,     ///<The SPI is not busy and a transfer is not in progress.
            set=0x00000001,     ///<The SPI is currently busy and a transfer is in progress.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusyfVal> busyf{}; 
        namespace BusyfValC{
            constexpr Register::FieldValue<decltype(busyf)::Type,BusyfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(busyf)::Type,BusyfVal::set> set{};
        }
        ///Receive FIFO Counter. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rfcnt{}; 
        ///Transmit FIFO Counter. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tfcnt{}; 
        ///SPI Debug Mode. 
        enum class DbgmdVal {
            run=0x00000000,     ///<The SPI module will continue to operate while the core is halted in debug mode.
            halt=0x00000001,     ///<A debug breakpoint will cause the SPI module to halt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,DbgmdVal> dbgmd{}; 
        namespace DbgmdValC{
            constexpr Register::FieldValue<decltype(dbgmd)::Type,DbgmdVal::run> run{};
            constexpr Register::FieldValue<decltype(dbgmd)::Type,DbgmdVal::halt> halt{};
        }
    }
    namespace Spi0Config{    ///<Module Configuration
        using Addr = Register::Address<0x40004020,0x1e000000,0x00000000,unsigned>;
        ///Receive FIFO Read Request Interrupt Enable. 
        enum class RfrqienVal {
            disabled=0x00000000,     ///<Disable the receive FIFO request interrupt.
            enabled=0x00000001,     ///<Enable the receive FIFO request interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RfrqienVal> rfrqien{}; 
        namespace RfrqienValC{
            constexpr Register::FieldValue<decltype(rfrqien)::Type,RfrqienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rfrqien)::Type,RfrqienVal::enabled> enabled{};
        }
        ///Receive FIFO Overrun Interrupt Enable. 
        enum class RforienVal {
            disabled=0x00000000,     ///<Disable the receive FIFO overrun interrupt.
            enabled=0x00000001,     ///<Enable the receive FIFO overrun interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RforienVal> rforien{}; 
        namespace RforienValC{
            constexpr Register::FieldValue<decltype(rforien)::Type,RforienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rforien)::Type,RforienVal::enabled> enabled{};
        }
        ///Transmit FIFO Write Request Interrupt Enable. 
        enum class TfrqienVal {
            disabled=0x00000000,     ///<Disable the transmit FIFO data request interrupt.
            enabled=0x00000001,     ///<Enable the transmit FIFO data request interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TfrqienVal> tfrqien{}; 
        namespace TfrqienValC{
            constexpr Register::FieldValue<decltype(tfrqien)::Type,TfrqienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tfrqien)::Type,TfrqienVal::enabled> enabled{};
        }
        ///Transmit FIFO Overrun Interrupt Enable. 
        enum class TforienVal {
            disabled=0x00000000,     ///<Disable the transmit FIFO overrun interrupt.
            enabled=0x00000001,     ///<Enable the transmit FIFO overrun interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TforienVal> tforien{}; 
        namespace TforienValC{
            constexpr Register::FieldValue<decltype(tforien)::Type,TforienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tforien)::Type,TforienVal::enabled> enabled{};
        }
        ///Slave Selected Interrupt Enable. 
        enum class SlvselienVal {
            disabled=0x00000000,     ///<Disable the slave select interrupt.
            enabled=0x00000001,     ///<Enable the slave select interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SlvselienVal> slvselien{}; 
        namespace SlvselienValC{
            constexpr Register::FieldValue<decltype(slvselien)::Type,SlvselienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(slvselien)::Type,SlvselienVal::enabled> enabled{};
        }
        ///Mode Fault Interrupt Enable. 
        enum class MdfienVal {
            disabled=0x00000000,     ///<Disable the mode fault interrupt.
            enabled=0x00000001,     ///<Enable the mode fault interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MdfienVal> mdfien{}; 
        namespace MdfienValC{
            constexpr Register::FieldValue<decltype(mdfien)::Type,MdfienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(mdfien)::Type,MdfienVal::enabled> enabled{};
        }
        ///Underrun Interrupt Enable. 
        enum class UrienVal {
            disabled=0x00000000,     ///<Disable the underrun interrupt.
            enabled=0x00000001,     ///<Enable the underrun interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,UrienVal> urien{}; 
        namespace UrienValC{
            constexpr Register::FieldValue<decltype(urien)::Type,UrienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(urien)::Type,UrienVal::enabled> enabled{};
        }
        ///Shift Register Empty Interrupt Enable. 
        enum class SreienVal {
            disabled=0x00000000,     ///<Disable the shift register empty interrupt.
            enabled=0x00000001,     ///<Enable the shift register empty interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SreienVal> sreien{}; 
        namespace SreienValC{
            constexpr Register::FieldValue<decltype(sreien)::Type,SreienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sreien)::Type,SreienVal::enabled> enabled{};
        }
        ///SPI Enable. 
        enum class SpienVal {
            disabled=0x00000000,     ///<Disable the SPI.
            enabled=0x00000001,     ///<Enable the SPI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SpienVal> spien{}; 
        namespace SpienValC{
            constexpr Register::FieldValue<decltype(spien)::Type,SpienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(spien)::Type,SpienVal::enabled> enabled{};
        }
        ///Master Mode Enable. 
        enum class MstenVal {
            disabled=0x00000000,     ///<Operate in slave mode.
            enabled=0x00000001,     ///<Operate in master mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,MstenVal> msten{}; 
        namespace MstenValC{
            constexpr Register::FieldValue<decltype(msten)::Type,MstenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(msten)::Type,MstenVal::enabled> enabled{};
        }
        ///SPI Clock Polarity. 
        enum class ClkpolVal {
            low=0x00000000,     ///<The SCK line is low in the idle state.
            high=0x00000001,     ///<The SCK line is high in the idle state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ClkpolVal> clkpol{}; 
        namespace ClkpolValC{
            constexpr Register::FieldValue<decltype(clkpol)::Type,ClkpolVal::low> low{};
            constexpr Register::FieldValue<decltype(clkpol)::Type,ClkpolVal::high> high{};
        }
        ///SPI Clock Phase. 
        enum class ClkphaVal {
            center=0x00000000,     ///<The first edge of SCK is the sample edge (center of data bit).
            edge=0x00000001,     ///<The first edge of SCK is the shift edge (edge of data bit).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ClkphaVal> clkpha{}; 
        namespace ClkphaValC{
            constexpr Register::FieldValue<decltype(clkpha)::Type,ClkphaVal::center> center{};
            constexpr Register::FieldValue<decltype(clkpha)::Type,ClkphaVal::edge> edge{};
        }
        ///Slave Select Polarity Select. 
        enum class NsspolVal {
            low=0x00000000,     ///<NSS is active low.
            high=0x00000001,     ///<NSS is active high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,NsspolVal> nsspol{}; 
        namespace NsspolValC{
            constexpr Register::FieldValue<decltype(nsspol)::Type,NsspolVal::low> low{};
            constexpr Register::FieldValue<decltype(nsspol)::Type,NsspolVal::high> high{};
        }
        ///Data Direction Select. 
        enum class DdirselVal {
            msbFirst=0x00000000,     ///<Data will be shifted MSB first.
            lsbFirst=0x00000001,     ///<Data will be shifted LSB first.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,DdirselVal> ddirsel{}; 
        namespace DdirselValC{
            constexpr Register::FieldValue<decltype(ddirsel)::Type,DdirselVal::msbFirst> msbFirst{};
            constexpr Register::FieldValue<decltype(ddirsel)::Type,DdirselVal::lsbFirst> lsbFirst{};
        }
        ///Slave Select Mode. 
        enum class NssmdVal {
            v3WireMasterSlave=0x00000000,     ///<3-wire Slave or 3-wire Master.
            v4WireSlave=0x00000001,     ///<4-wire slave (NSS input).  This setting can also be used for multi-master configurations.
            v4WireMasterNssLow=0x00000002,     ///<4-wire master with NSS low (NSS output).
            v4WireMasterNssHigh=0x00000003,     ///<4-wire master with NSS high (NSS output).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,NssmdVal> nssmd{}; 
        namespace NssmdValC{
            constexpr Register::FieldValue<decltype(nssmd)::Type,NssmdVal::v3WireMasterSlave> v3WireMasterSlave{};
            constexpr Register::FieldValue<decltype(nssmd)::Type,NssmdVal::v4WireSlave> v4WireSlave{};
            constexpr Register::FieldValue<decltype(nssmd)::Type,NssmdVal::v4WireMasterNssLow> v4WireMasterNssLow{};
            constexpr Register::FieldValue<decltype(nssmd)::Type,NssmdVal::v4WireMasterNssHigh> v4WireMasterNssHigh{};
        }
        ///Receive FIFO Threshold. 
        enum class RfthVal {
            one=0x00000000,     ///<A DMA / RFRQ request asserts when >= 1 FIFO slot is filled.
            two=0x00000001,     ///<A DMA / RFRQ request asserts when >= 2 FIFO slots are filled.
            four=0x00000002,     ///<A DMA / RFRQ request asserts when >= 4 FIFO slots are filled.
            full=0x00000003,     ///<A DMA / RFRQ request asserts when all FIFO slots are filled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,RfthVal> rfth{}; 
        namespace RfthValC{
            constexpr Register::FieldValue<decltype(rfth)::Type,RfthVal::one> one{};
            constexpr Register::FieldValue<decltype(rfth)::Type,RfthVal::two> two{};
            constexpr Register::FieldValue<decltype(rfth)::Type,RfthVal::four> four{};
            constexpr Register::FieldValue<decltype(rfth)::Type,RfthVal::full> full{};
        }
        ///Transmit FIFO Threshold. 
        enum class TfthVal {
            one=0x00000000,     ///<A DMA / TFRQ request asserts when >= 1 FIFO slot is empty.
            two=0x00000001,     ///<A DMA / TFRQ request asserts when >= 2 FIFO slots are empty.
            four=0x00000002,     ///<A DMA / TFRQ request asserts when >= 4 FIFO slots are empty.
            empty=0x00000003,     ///<A DMA / TFRQ request asserts when all FIFO slots are empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,TfthVal> tfth{}; 
        namespace TfthValC{
            constexpr Register::FieldValue<decltype(tfth)::Type,TfthVal::one> one{};
            constexpr Register::FieldValue<decltype(tfth)::Type,TfthVal::two> two{};
            constexpr Register::FieldValue<decltype(tfth)::Type,TfthVal::four> four{};
            constexpr Register::FieldValue<decltype(tfth)::Type,TfthVal::empty> empty{};
        }
        ///Data Size. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///DMA Enable. 
        enum class DmaenVal {
            disabled=0x00000000,     ///<Disable DMA requests. 
            enabled=0x00000001,     ///<Enable DMA requests according to the TFRQI and RFRQI flags.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,DmaenVal> dmaen{}; 
        namespace DmaenValC{
            constexpr Register::FieldValue<decltype(dmaen)::Type,DmaenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dmaen)::Type,DmaenVal::enabled> enabled{};
        }
        ///Receive FIFO Flush. 
        enum class RfifoflVal {
            set=0x00000001,     ///<Flush the receive FIFO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,RfifoflVal> rfifofl{}; 
        namespace RfifoflValC{
            constexpr Register::FieldValue<decltype(rfifofl)::Type,RfifoflVal::set> set{};
        }
        ///Transmit FIFO Flush. 
        enum class TfifoflVal {
            set=0x00000001,     ///<Flush the transmit FIFO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,TfifoflVal> tfifofl{}; 
        namespace TfifoflValC{
            constexpr Register::FieldValue<decltype(tfifofl)::Type,TfifoflVal::set> set{};
        }
        ///Module Soft Reset. 
        enum class ResetVal {
            inactive=0x00000000,     ///<SPI module is not in soft reset.
            active=0x00000001,     ///<SPI module is in soft reset and some of the module bits cannot be accessed until this bit is cleared to 0 by hardware.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ResetVal> reset{}; 
        namespace ResetValC{
            constexpr Register::FieldValue<decltype(reset)::Type,ResetVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(reset)::Type,ResetVal::active> active{};
        }
    }
    namespace Spi0Clkrate{    ///<Module Clock Rate Control
        using Addr = Register::Address<0x40004030,0xffff0000,0x00000000,unsigned>;
        ///Clock Divider. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clkdiv{}; 
    }
    namespace Spi0Fstatus{    ///<FIFO Status
        using Addr = Register::Address<0x40004040,0xffff0000,0x00000000,unsigned>;
        ///Receive FIFO Read Pointer. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rfrptr{}; 
        ///Receive FIFO Write Pointer. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rfwptr{}; 
        ///Transmit FIFO Read Pointer. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tfrptr{}; 
        ///Transmit FIFO Write Pointer. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tfwptr{}; 
    }
    namespace Spi0Configmd{    ///<Mode Configuration
        using Addr = Register::Address<0x40004050,0xf8000080,0x00000000,unsigned>;
        ///Operation Mode. 
        enum class OpmdVal {
            normal=0x00000000,     ///<Full-duplex (normal) mode.
            receive=0x00000001,     ///<Receive-only mode.
            transmit=0x00000002,     ///<Transmit only mode.
            flowcontrol=0x00000003,     ///<Flow control mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,OpmdVal> opmd{}; 
        namespace OpmdValC{
            constexpr Register::FieldValue<decltype(opmd)::Type,OpmdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(opmd)::Type,OpmdVal::receive> receive{};
            constexpr Register::FieldValue<decltype(opmd)::Type,OpmdVal::transmit> transmit{};
            constexpr Register::FieldValue<decltype(opmd)::Type,OpmdVal::flowcontrol> flowcontrol{};
        }
        ///Auto NSS Mode. 
        enum class AutonssVal {
            disabled=0x00000000,     ///<
            enabled=0x00000001,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,AutonssVal> autonss{}; 
        namespace AutonssValC{
            constexpr Register::FieldValue<decltype(autonss)::Type,AutonssVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(autonss)::Type,AutonssVal::enabled> enabled{};
        }
        ///CTS Flow Control Enable. 
        enum class CtsenVal {
            disabled=0x00000000,     ///<
            enabled=0x00000001,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CtsenVal> ctsen{}; 
        namespace CtsenValC{
            constexpr Register::FieldValue<decltype(ctsen)::Type,CtsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ctsen)::Type,CtsenVal::enabled> enabled{};
        }
        ///Flow Control Mode. 
        enum class FlowmdVal {
            disabled=0x00000000,     ///<Store CTS byte (see chapter text for details).
            enabled=0x00000001,     ///<Disregard CTS byte.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,FlowmdVal> flowmd{}; 
        namespace FlowmdValC{
            constexpr Register::FieldValue<decltype(flowmd)::Type,FlowmdVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(flowmd)::Type,FlowmdVal::enabled> enabled{};
        }
        ///Software Abort. 
        enum class AbortVal {
            disabled=0x00000000,     ///<
            enabled=0x00000001,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,AbortVal> abort{}; 
        namespace AbortValC{
            constexpr Register::FieldValue<decltype(abort)::Type,AbortVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(abort)::Type,AbortVal::enabled> enabled{};
        }
        ///Transmit On Request. 
        enum class TxonreqVal {
            disabled=0x00000000,     ///<
            enabled=0x00000001,     ///<
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TxonreqVal> txonreq{}; 
        namespace TxonreqValC{
            constexpr Register::FieldValue<decltype(txonreq)::Type,TxonreqVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txonreq)::Type,TxonreqVal::enabled> enabled{};
        }
        ///NSS Data Count. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> nsscnt{}; 
        ///NSS Delay. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> nssdelay{}; 
        ///Transfer Count. 
        enum class TfrcntVal {
            auto_=0x00000000,     ///<Automatic. The request type determines the number of bytes to write/read.
            transfer1=0x00000001,     ///<A single byte is written/read per request.
            transfer2=0x00000002,     ///<Up to two bytes can be written/read per request.
            transfer3=0x00000003,     ///<Up to three bytes can be written/read per request.
            transfer4=0x00000004,     ///<Up to four bytes can be written/read per request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,TfrcntVal> tfrcnt{}; 
        namespace TfrcntValC{
            constexpr Register::FieldValue<decltype(tfrcnt)::Type,TfrcntVal::auto_> auto_{};
            constexpr Register::FieldValue<decltype(tfrcnt)::Type,TfrcntVal::transfer1> transfer1{};
            constexpr Register::FieldValue<decltype(tfrcnt)::Type,TfrcntVal::transfer2> transfer2{};
            constexpr Register::FieldValue<decltype(tfrcnt)::Type,TfrcntVal::transfer3> transfer3{};
            constexpr Register::FieldValue<decltype(tfrcnt)::Type,TfrcntVal::transfer4> transfer4{};
        }
    }
}
