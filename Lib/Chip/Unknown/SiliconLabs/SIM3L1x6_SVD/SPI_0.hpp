#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonedata{    ///<Input/Output Data
        using Addr = Register::Address<0x40004000,0x00000000,0,unsigned>;
        ///Input/Output Data. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x40004010,0xfe003c00,0,unsigned>;
        ///Receive FIFO Read Request Interrupt Flag. 
        enum class rfrqiVal {
            notSet=0x00000000,     ///<The RX FIFO has fewer bytes than the level defined by RFTH.
            set=0x00000001,     ///<The RX FIFO has equal or more bytes than the level defined by RFTH.
        };
        namespace rfrqiValC{
            constexpr MPL::Value<rfrqiVal,rfrqiVal::notSet> notSet{};
            constexpr MPL::Value<rfrqiVal,rfrqiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rfrqiVal> rfrqi{}; 
        ///Receive FIFO Overrun Interrupt Flag. 
        enum class rforiVal {
            notSet=0x00000000,     ///<Read: A receive FIFO overrun has not occurred. Write: Clear the flag.
            set=0x00000001,     ///<Read: A receive FIFO overrun  occurred. Write: Force a receive overrun interrupt.
        };
        namespace rforiValC{
            constexpr MPL::Value<rforiVal,rforiVal::notSet> notSet{};
            constexpr MPL::Value<rforiVal,rforiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rforiVal> rfori{}; 
        ///Transmit FIFO Write Request Interrupt Flag. 
        enum class tfrqiVal {
            notSet=0x00000000,     ///<The TX FIFO has fewer empty slots than the level defined by TFTH.
            set=0x00000001,     ///<The TX FIFO has at least as many empty slots as the level defined by TFTH.
        };
        namespace tfrqiValC{
            constexpr MPL::Value<tfrqiVal,tfrqiVal::notSet> notSet{};
            constexpr MPL::Value<tfrqiVal,tfrqiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,tfrqiVal> tfrqi{}; 
        ///Transmit FIFO Overrun Interrupt Flag. 
        enum class tforiVal {
            notSet=0x00000000,     ///<Read: A transmit FIFO overrun has not occurred. Write: Clear the flag.
            set=0x00000001,     ///<Read: A transmit FIFO overrun  occurred. Write: Force a transmit overrun interrupt.
        };
        namespace tforiValC{
            constexpr MPL::Value<tforiVal,tforiVal::notSet> notSet{};
            constexpr MPL::Value<tforiVal,tforiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,tforiVal> tfori{}; 
        ///Slave Selected Interrupt Flag. 
        enum class slvseliVal {
            notSet=0x00000000,     ///<The slave select signal (NSS) is not active.
            set=0x00000001,     ///<The slave select signal (NSS) is active.
        };
        namespace slvseliValC{
            constexpr MPL::Value<slvseliVal,slvseliVal::notSet> notSet{};
            constexpr MPL::Value<slvseliVal,slvseliVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,slvseliVal> slvseli{}; 
        ///Mode Fault Interrupt Flag. 
        enum class mdfiVal {
            notSet=0x00000000,     ///<Read: A master mode collision is not detected. Write: Clear the flag.
            set=0x00000001,     ///<Read: A master mode collision occurred. Write: Force a mode fault interrupt.
        };
        namespace mdfiValC{
            constexpr MPL::Value<mdfiVal,mdfiVal::notSet> notSet{};
            constexpr MPL::Value<mdfiVal,mdfiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,mdfiVal> mdfi{}; 
        ///Underrun Interrupt Flag. 
        enum class uriVal {
            notSet=0x00000000,     ///<Read: A data transfer is still in progress. Write: Clear the flag.
            set=0x00000001,     ///<Read: The transmit FIFO and shift register are empty and the data transfer has ended. Write: Force an underrun interrupt.
        };
        namespace uriValC{
            constexpr MPL::Value<uriVal,uriVal::notSet> notSet{};
            constexpr MPL::Value<uriVal,uriVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,uriVal> uri{}; 
        ///Shift Register Empty Interrupt Flag. 
        enum class sreiVal {
            notSet=0x00000000,     ///<There is data still present in the transmit FIFO or shift register.
            set=0x00000001,     ///<All data has been transferred out of the shift register and there is no data waiting in the transmit FIFO.
        };
        namespace sreiValC{
            constexpr MPL::Value<sreiVal,sreiVal::notSet> notSet{};
            constexpr MPL::Value<sreiVal,sreiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,sreiVal> srei{}; 
        ///Illegal Receive FIFO Access Interrupt Flag. 
        enum class rfiliVal {
            notSet=0x00000000,     ///<Read: An illegal write or read of the receive FIFO has not occurred. Write: Clear the flag.
            set=0x00000001,     ///<Read: An illegal write or read of the receive FIFO occurred. Write: Force an illegal receive access interrupt.
        };
        namespace rfiliValC{
            constexpr MPL::Value<rfiliVal,rfiliVal::notSet> notSet{};
            constexpr MPL::Value<rfiliVal,rfiliVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,rfiliVal> rfili{}; 
        ///Illegal Transmit FIFO Access Interrupt Flag. 
        enum class tfiliVal {
            notSet=0x00000000,     ///<Read: An illegal write or read of the transmit FIFO has not occurred. Write: Clear the flag.
            set=0x00000001,     ///<Read: An illegal write or read of the transmit FIFO occurred. Write: Force an illegal transmit access interrupt.
        };
        namespace tfiliValC{
            constexpr MPL::Value<tfiliVal,tfiliVal::notSet> notSet{};
            constexpr MPL::Value<tfiliVal,tfiliVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,tfiliVal> tfili{}; 
        ///NSS Instantaneous Pin Status. 
        enum class nssstsVal {
            low=0x00000000,     ///<NSS is currently a logic low.
            high=0x00000001,     ///<NSS is currently a logic high.
        };
        namespace nssstsValC{
            constexpr MPL::Value<nssstsVal,nssstsVal::low> low{};
            constexpr MPL::Value<nssstsVal,nssstsVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,nssstsVal> nsssts{}; 
        ///SPI Busy. 
        enum class busyfVal {
            notSet=0x00000000,     ///<The SPI is not busy and a transfer is not in progress.
            set=0x00000001,     ///<The SPI is currently busy and a transfer is in progress.
        };
        namespace busyfValC{
            constexpr MPL::Value<busyfVal,busyfVal::notSet> notSet{};
            constexpr MPL::Value<busyfVal,busyfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,busyfVal> busyf{}; 
        ///Receive FIFO Counter. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> rfcnt{}; 
        ///Transmit FIFO Counter. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> tfcnt{}; 
        ///SPI Debug Mode. 
        enum class dbgmdVal {
            run=0x00000000,     ///<The SPI module will continue to operate while the core is halted in debug mode.
            halt=0x00000001,     ///<A debug breakpoint will cause the SPI module to halt.
        };
        namespace dbgmdValC{
            constexpr MPL::Value<dbgmdVal,dbgmdVal::run> run{};
            constexpr MPL::Value<dbgmdVal,dbgmdVal::halt> halt{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,dbgmdVal> dbgmd{}; 
    }
    namespace Noneconfig{    ///<Module Configuration
        using Addr = Register::Address<0x40004020,0x1e000000,0,unsigned>;
        ///Receive FIFO Read Request Interrupt Enable. 
        enum class rfrqienVal {
            disabled=0x00000000,     ///<Disable the receive FIFO request interrupt.
            enabled=0x00000001,     ///<Enable the receive FIFO request interrupt.
        };
        namespace rfrqienValC{
            constexpr MPL::Value<rfrqienVal,rfrqienVal::disabled> disabled{};
            constexpr MPL::Value<rfrqienVal,rfrqienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rfrqienVal> rfrqien{}; 
        ///Receive FIFO Overrun Interrupt Enable. 
        enum class rforienVal {
            disabled=0x00000000,     ///<Disable the receive FIFO overrun interrupt.
            enabled=0x00000001,     ///<Enable the receive FIFO overrun interrupt.
        };
        namespace rforienValC{
            constexpr MPL::Value<rforienVal,rforienVal::disabled> disabled{};
            constexpr MPL::Value<rforienVal,rforienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rforienVal> rforien{}; 
        ///Transmit FIFO Write Request Interrupt Enable. 
        enum class tfrqienVal {
            disabled=0x00000000,     ///<Disable the transmit FIFO data request interrupt.
            enabled=0x00000001,     ///<Enable the transmit FIFO data request interrupt.
        };
        namespace tfrqienValC{
            constexpr MPL::Value<tfrqienVal,tfrqienVal::disabled> disabled{};
            constexpr MPL::Value<tfrqienVal,tfrqienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,tfrqienVal> tfrqien{}; 
        ///Transmit FIFO Overrun Interrupt Enable. 
        enum class tforienVal {
            disabled=0x00000000,     ///<Disable the transmit FIFO overrun interrupt.
            enabled=0x00000001,     ///<Enable the transmit FIFO overrun interrupt.
        };
        namespace tforienValC{
            constexpr MPL::Value<tforienVal,tforienVal::disabled> disabled{};
            constexpr MPL::Value<tforienVal,tforienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,tforienVal> tforien{}; 
        ///Slave Selected Interrupt Enable. 
        enum class slvselienVal {
            disabled=0x00000000,     ///<Disable the slave select interrupt.
            enabled=0x00000001,     ///<Enable the slave select interrupt.
        };
        namespace slvselienValC{
            constexpr MPL::Value<slvselienVal,slvselienVal::disabled> disabled{};
            constexpr MPL::Value<slvselienVal,slvselienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,slvselienVal> slvselien{}; 
        ///Mode Fault Interrupt Enable. 
        enum class mdfienVal {
            disabled=0x00000000,     ///<Disable the mode fault interrupt.
            enabled=0x00000001,     ///<Enable the mode fault interrupt.
        };
        namespace mdfienValC{
            constexpr MPL::Value<mdfienVal,mdfienVal::disabled> disabled{};
            constexpr MPL::Value<mdfienVal,mdfienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,mdfienVal> mdfien{}; 
        ///Underrun Interrupt Enable. 
        enum class urienVal {
            disabled=0x00000000,     ///<Disable the underrun interrupt.
            enabled=0x00000001,     ///<Enable the underrun interrupt.
        };
        namespace urienValC{
            constexpr MPL::Value<urienVal,urienVal::disabled> disabled{};
            constexpr MPL::Value<urienVal,urienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,urienVal> urien{}; 
        ///Shift Register Empty Interrupt Enable. 
        enum class sreienVal {
            disabled=0x00000000,     ///<Disable the shift register empty interrupt.
            enabled=0x00000001,     ///<Enable the shift register empty interrupt.
        };
        namespace sreienValC{
            constexpr MPL::Value<sreienVal,sreienVal::disabled> disabled{};
            constexpr MPL::Value<sreienVal,sreienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,sreienVal> sreien{}; 
        ///SPI Enable. 
        enum class spienVal {
            disabled=0x00000000,     ///<Disable the SPI.
            enabled=0x00000001,     ///<Enable the SPI.
        };
        namespace spienValC{
            constexpr MPL::Value<spienVal,spienVal::disabled> disabled{};
            constexpr MPL::Value<spienVal,spienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,spienVal> spien{}; 
        ///Master Mode Enable. 
        enum class mstenVal {
            disabled=0x00000000,     ///<Operate in slave mode.
            enabled=0x00000001,     ///<Operate in master mode.
        };
        namespace mstenValC{
            constexpr MPL::Value<mstenVal,mstenVal::disabled> disabled{};
            constexpr MPL::Value<mstenVal,mstenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,mstenVal> msten{}; 
        ///SPI Clock Polarity. 
        enum class clkpolVal {
            low=0x00000000,     ///<The SCK line is low in the idle state.
            high=0x00000001,     ///<The SCK line is high in the idle state.
        };
        namespace clkpolValC{
            constexpr MPL::Value<clkpolVal,clkpolVal::low> low{};
            constexpr MPL::Value<clkpolVal,clkpolVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,clkpolVal> clkpol{}; 
        ///SPI Clock Phase. 
        enum class clkphaVal {
            center=0x00000000,     ///<The first edge of SCK is the sample edge (center of data bit).
            edge=0x00000001,     ///<The first edge of SCK is the shift edge (edge of data bit).
        };
        namespace clkphaValC{
            constexpr MPL::Value<clkphaVal,clkphaVal::center> center{};
            constexpr MPL::Value<clkphaVal,clkphaVal::edge> edge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,clkphaVal> clkpha{}; 
        ///Slave Select Polarity Select. 
        enum class nsspolVal {
            low=0x00000000,     ///<NSS is active low.
            high=0x00000001,     ///<NSS is active high.
        };
        namespace nsspolValC{
            constexpr MPL::Value<nsspolVal,nsspolVal::low> low{};
            constexpr MPL::Value<nsspolVal,nsspolVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,nsspolVal> nsspol{}; 
        ///Data Direction Select. 
        enum class ddirselVal {
            msbFirst=0x00000000,     ///<Data will be shifted MSB first.
            lsbFirst=0x00000001,     ///<Data will be shifted LSB first.
        };
        namespace ddirselValC{
            constexpr MPL::Value<ddirselVal,ddirselVal::msbFirst> msbFirst{};
            constexpr MPL::Value<ddirselVal,ddirselVal::lsbFirst> lsbFirst{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ddirselVal> ddirsel{}; 
        ///Slave Select Mode. 
        enum class nssmdVal {
            v3WireMasterSlave=0x00000000,     ///<3-wire Slave or 3-wire Master.
            v4WireSlave=0x00000001,     ///<4-wire slave (NSS input).  This setting can also be used for multi-master configurations.
            v4WireMasterNssLow=0x00000002,     ///<4-wire master with NSS low (NSS output).
            v4WireMasterNssHigh=0x00000003,     ///<4-wire master with NSS high (NSS output).
        };
        namespace nssmdValC{
            constexpr MPL::Value<nssmdVal,nssmdVal::v3WireMasterSlave> v3WireMasterSlave{};
            constexpr MPL::Value<nssmdVal,nssmdVal::v4WireSlave> v4WireSlave{};
            constexpr MPL::Value<nssmdVal,nssmdVal::v4WireMasterNssLow> v4WireMasterNssLow{};
            constexpr MPL::Value<nssmdVal,nssmdVal::v4WireMasterNssHigh> v4WireMasterNssHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,nssmdVal> nssmd{}; 
        ///Receive FIFO Threshold. 
        enum class rfthVal {
            one=0x00000000,     ///<A DMA / RFRQ request asserts when >= 1 FIFO slot is filled.
            two=0x00000001,     ///<A DMA / RFRQ request asserts when >= 2 FIFO slots are filled.
            four=0x00000002,     ///<A DMA / RFRQ request asserts when >= 4 FIFO slots are filled.
            full=0x00000003,     ///<A DMA / RFRQ request asserts when all FIFO slots are filled.
        };
        namespace rfthValC{
            constexpr MPL::Value<rfthVal,rfthVal::one> one{};
            constexpr MPL::Value<rfthVal,rfthVal::two> two{};
            constexpr MPL::Value<rfthVal,rfthVal::four> four{};
            constexpr MPL::Value<rfthVal,rfthVal::full> full{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,rfthVal> rfth{}; 
        ///Transmit FIFO Threshold. 
        enum class tfthVal {
            one=0x00000000,     ///<A DMA / TFRQ request asserts when >= 1 FIFO slot is empty.
            two=0x00000001,     ///<A DMA / TFRQ request asserts when >= 2 FIFO slots are empty.
            four=0x00000002,     ///<A DMA / TFRQ request asserts when >= 4 FIFO slots are empty.
            empty=0x00000003,     ///<A DMA / TFRQ request asserts when all FIFO slots are empty.
        };
        namespace tfthValC{
            constexpr MPL::Value<tfthVal,tfthVal::one> one{};
            constexpr MPL::Value<tfthVal,tfthVal::two> two{};
            constexpr MPL::Value<tfthVal,tfthVal::four> four{};
            constexpr MPL::Value<tfthVal,tfthVal::empty> empty{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,tfthVal> tfth{}; 
        ///Data Size. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> dsize{}; 
        ///DMA Enable. 
        enum class dmaenVal {
            disabled=0x00000000,     ///<Disable DMA requests. 
            enabled=0x00000001,     ///<Enable DMA requests according to the TFRQI and RFRQI flags.
        };
        namespace dmaenValC{
            constexpr MPL::Value<dmaenVal,dmaenVal::disabled> disabled{};
            constexpr MPL::Value<dmaenVal,dmaenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,dmaenVal> dmaen{}; 
        ///Receive FIFO Flush. 
        enum class rfifoflVal {
            set=0x00000001,     ///<Flush the receive FIFO.
        };
        namespace rfifoflValC{
            constexpr MPL::Value<rfifoflVal,rfifoflVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,rfifoflVal> rfifofl{}; 
        ///Transmit FIFO Flush. 
        enum class tfifoflVal {
            set=0x00000001,     ///<Flush the transmit FIFO.
        };
        namespace tfifoflValC{
            constexpr MPL::Value<tfifoflVal,tfifoflVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,tfifoflVal> tfifofl{}; 
        ///Module Soft Reset. 
        enum class resetVal {
            inactive=0x00000000,     ///<SPI module is not in soft reset.
            active=0x00000001,     ///<SPI module is in soft reset and some of the module bits cannot be accessed until this bit is cleared to 0 by hardware.
        };
        namespace resetValC{
            constexpr MPL::Value<resetVal,resetVal::inactive> inactive{};
            constexpr MPL::Value<resetVal,resetVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,resetVal> reset{}; 
    }
    namespace Noneclkrate{    ///<Module Clock Rate Control
        using Addr = Register::Address<0x40004030,0xffff0000,0,unsigned>;
        ///Clock Divider. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clkdiv{}; 
    }
    namespace Nonefstatus{    ///<FIFO Status
        using Addr = Register::Address<0x40004040,0xffff0000,0,unsigned>;
        ///Receive FIFO Read Pointer. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> rfrptr{}; 
        ///Receive FIFO Write Pointer. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> rfwptr{}; 
        ///Transmit FIFO Read Pointer. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tfrptr{}; 
        ///Transmit FIFO Write Pointer. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> tfwptr{}; 
    }
    namespace Noneconfigmd{    ///<Mode Configuration
        using Addr = Register::Address<0x40004050,0xf8000080,0,unsigned>;
        ///Operation Mode. 
        enum class opmdVal {
            normal=0x00000000,     ///<Full-duplex (normal) mode.
            receive=0x00000001,     ///<Receive-only mode.
            transmit=0x00000002,     ///<Transmit only mode.
            flowcontrol=0x00000003,     ///<Flow control mode.
        };
        namespace opmdValC{
            constexpr MPL::Value<opmdVal,opmdVal::normal> normal{};
            constexpr MPL::Value<opmdVal,opmdVal::receive> receive{};
            constexpr MPL::Value<opmdVal,opmdVal::transmit> transmit{};
            constexpr MPL::Value<opmdVal,opmdVal::flowcontrol> flowcontrol{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,opmdVal> opmd{}; 
        ///Auto NSS Mode. 
        enum class autonssVal {
            disabled=0x00000000,     ///<None
            enabled=0x00000001,     ///<None
        };
        namespace autonssValC{
            constexpr MPL::Value<autonssVal,autonssVal::disabled> disabled{};
            constexpr MPL::Value<autonssVal,autonssVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,autonssVal> autonss{}; 
        ///CTS Flow Control Enable. 
        enum class ctsenVal {
            disabled=0x00000000,     ///<None
            enabled=0x00000001,     ///<None
        };
        namespace ctsenValC{
            constexpr MPL::Value<ctsenVal,ctsenVal::disabled> disabled{};
            constexpr MPL::Value<ctsenVal,ctsenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ctsenVal> ctsen{}; 
        ///Flow Control Mode. 
        enum class flowmdVal {
            disabled=0x00000000,     ///<Store CTS byte (see chapter text for details).
            enabled=0x00000001,     ///<Disregard CTS byte.
        };
        namespace flowmdValC{
            constexpr MPL::Value<flowmdVal,flowmdVal::disabled> disabled{};
            constexpr MPL::Value<flowmdVal,flowmdVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,flowmdVal> flowmd{}; 
        ///Software Abort. 
        enum class abortVal {
            disabled=0x00000000,     ///<None
            enabled=0x00000001,     ///<None
        };
        namespace abortValC{
            constexpr MPL::Value<abortVal,abortVal::disabled> disabled{};
            constexpr MPL::Value<abortVal,abortVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,abortVal> abort{}; 
        ///Transmit On Request. 
        enum class txonreqVal {
            disabled=0x00000000,     ///<None
            enabled=0x00000001,     ///<None
        };
        namespace txonreqValC{
            constexpr MPL::Value<txonreqVal,txonreqVal::disabled> disabled{};
            constexpr MPL::Value<txonreqVal,txonreqVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,txonreqVal> txonreq{}; 
        ///NSS Data Count. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> nsscnt{}; 
        ///NSS Delay. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> nssdelay{}; 
        ///Transfer Count. 
        enum class tfrcntVal {
            auto_=0x00000000,     ///<Automatic. The request type determines the number of bytes to write/read.
            transfer1=0x00000001,     ///<A single byte is written/read per request.
            transfer2=0x00000002,     ///<Up to two bytes can be written/read per request.
            transfer3=0x00000003,     ///<Up to three bytes can be written/read per request.
            transfer4=0x00000004,     ///<Up to four bytes can be written/read per request.
        };
        namespace tfrcntValC{
            constexpr MPL::Value<tfrcntVal,tfrcntVal::auto_> auto_{};
            constexpr MPL::Value<tfrcntVal,tfrcntVal::transfer1> transfer1{};
            constexpr MPL::Value<tfrcntVal,tfrcntVal::transfer2> transfer2{};
            constexpr MPL::Value<tfrcntVal,tfrcntVal::transfer3> transfer3{};
            constexpr MPL::Value<tfrcntVal,tfrcntVal::transfer4> transfer4{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,tfrcntVal> tfrcnt{}; 
    }
}
