#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial Peripheral Interface
    namespace Spi2Mcr{    ///<Module Configuration Register
        using Addr = Register::Address<0x400ac000,0x00c000fe,0,unsigned>;
        ///Halt
        enum class haltVal {
            v0=0x00000000,     ///<Start transfers.
            v1=0x00000001,     ///<Stop transfers.
        };
        namespace haltValC{
            constexpr MPL::Value<haltVal,haltVal::v0> v0{};
            constexpr MPL::Value<haltVal,haltVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,haltVal> halt{}; 
        ///Sample Point
        enum class smplPtVal {
            v00=0x00000000,     ///<0 system clocks between SCK edge and SIN sample
            v01=0x00000001,     ///<1 system clock between SCK edge and SIN sample
            v10=0x00000002,     ///<2 system clocks between SCK edge and SIN sample
        };
        namespace smplPtValC{
            constexpr MPL::Value<smplPtVal,smplPtVal::v00> v00{};
            constexpr MPL::Value<smplPtVal,smplPtVal::v01> v01{};
            constexpr MPL::Value<smplPtVal,smplPtVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,smplPtVal> smplPt{}; 
        ///no description available
        enum class clrRxfVal {
            v0=0x00000000,     ///<Do not clear the RX FIFO counter.
            v1=0x00000001,     ///<Clear the RX FIFO counter.
        };
        namespace clrRxfValC{
            constexpr MPL::Value<clrRxfVal,clrRxfVal::v0> v0{};
            constexpr MPL::Value<clrRxfVal,clrRxfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,clrRxfVal> clrRxf{}; 
        ///Clear TX FIFO
        enum class clrTxfVal {
            v0=0x00000000,     ///<Do not clear the TX FIFO counter.
            v1=0x00000001,     ///<Clear the TX FIFO counter.
        };
        namespace clrTxfValC{
            constexpr MPL::Value<clrTxfVal,clrTxfVal::v0> v0{};
            constexpr MPL::Value<clrTxfVal,clrTxfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,clrTxfVal> clrTxf{}; 
        ///Disable Receive FIFO
        enum class disRxfVal {
            v0=0x00000000,     ///<RX FIFO is enabled.
            v1=0x00000001,     ///<RX FIFO is disabled.
        };
        namespace disRxfValC{
            constexpr MPL::Value<disRxfVal,disRxfVal::v0> v0{};
            constexpr MPL::Value<disRxfVal,disRxfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,disRxfVal> disRxf{}; 
        ///Disable Transmit FIFO
        enum class disTxfVal {
            v0=0x00000000,     ///<TX FIFO is enabled.
            v1=0x00000001,     ///<TX FIFO is disabled.
        };
        namespace disTxfValC{
            constexpr MPL::Value<disTxfVal,disTxfVal::v0> v0{};
            constexpr MPL::Value<disTxfVal,disTxfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,disTxfVal> disTxf{}; 
        ///Module Disable
        enum class mdisVal {
            v0=0x00000000,     ///<Enables the module clocks.
            v1=0x00000001,     ///<Allows external logic to disable the module clocks.
        };
        namespace mdisValC{
            constexpr MPL::Value<mdisVal,mdisVal::v0> v0{};
            constexpr MPL::Value<mdisVal,mdisVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,mdisVal> mdis{}; 
        ///Doze Enable
        enum class dozeVal {
            v0=0x00000000,     ///<Doze mode has no effect on the module.
            v1=0x00000001,     ///<Doze mode disables the module.
        };
        namespace dozeValC{
            constexpr MPL::Value<dozeVal,dozeVal::v0> v0{};
            constexpr MPL::Value<dozeVal,dozeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,dozeVal> doze{}; 
        ///Peripheral Chip Select x Inactive State
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> pcsis{}; 
        ///Receive FIFO Overflow Overwrite Enable
        enum class rooeVal {
            v0=0x00000000,     ///<Incoming data is ignored.
            v1=0x00000001,     ///<Incoming data is shifted into the shift register.
        };
        namespace rooeValC{
            constexpr MPL::Value<rooeVal,rooeVal::v0> v0{};
            constexpr MPL::Value<rooeVal,rooeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,rooeVal> rooe{}; 
        ///Peripheral Chip Select Strobe Enable
        enum class pcsseVal {
            v0=0x00000000,     ///<PCS5/ PCSS is used as the Peripheral Chip Select[5] signal.
            v1=0x00000001,     ///<PCS5/ PCSS is used as an active-low PCS Strobe signal.
        };
        namespace pcsseValC{
            constexpr MPL::Value<pcsseVal,pcsseVal::v0> v0{};
            constexpr MPL::Value<pcsseVal,pcsseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,pcsseVal> pcsse{}; 
        ///Modified Timing Format Enable
        enum class mtfeVal {
            v0=0x00000000,     ///<Modified SPI transfer format disabled.
            v1=0x00000001,     ///<Modified SPI transfer format enabled.
        };
        namespace mtfeValC{
            constexpr MPL::Value<mtfeVal,mtfeVal::v0> v0{};
            constexpr MPL::Value<mtfeVal,mtfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,mtfeVal> mtfe{}; 
        ///Freeze
        enum class frzVal {
            v0=0x00000000,     ///<Do not halt serial transfers in Debug mode.
            v1=0x00000001,     ///<Halt serial transfers in Debug mode.
        };
        namespace frzValC{
            constexpr MPL::Value<frzVal,frzVal::v0> v0{};
            constexpr MPL::Value<frzVal,frzVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,frzVal> frz{}; 
        ///SPI Configuration.
        enum class dconfVal {
            v00=0x00000000,     ///<SPI
        };
        namespace dconfValC{
            constexpr MPL::Value<dconfVal,dconfVal::v00> v00{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dconfVal> dconf{}; 
        ///Continuous SCK Enable
        enum class contSckeVal {
            v0=0x00000000,     ///<Continuous SCK disabled.
            v1=0x00000001,     ///<Continuous SCK enabled.
        };
        namespace contSckeValC{
            constexpr MPL::Value<contSckeVal,contSckeVal::v0> v0{};
            constexpr MPL::Value<contSckeVal,contSckeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,contSckeVal> contScke{}; 
        ///Master/Slave Mode Select
        enum class mstrVal {
            v0=0x00000000,     ///<The module is in Slave mode.
            v1=0x00000001,     ///<The module is in Master mode.
        };
        namespace mstrValC{
            constexpr MPL::Value<mstrVal,mstrVal::v0> v0{};
            constexpr MPL::Value<mstrVal,mstrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,mstrVal> mstr{}; 
    }
    namespace Spi2Tcr{    ///<Transfer Count Register
        using Addr = Register::Address<0x400ac008,0x0000ffff,0,unsigned>;
        ///SPI Transfer Counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> spiTcnt{}; 
    }
    namespace Spi2Ctar0{    ///<Clock and Transfer Attributes Register (In Master Mode)
        using Addr = Register::Address<0x400ac00c,0x00000000,0,unsigned>;
        ///Baud Rate Scaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> br{}; 
        ///Delay After Transfer Scaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dt{}; 
        ///After SCK Delay Scaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> asc{}; 
        ///PCS to SCK Delay Scaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> cssck{}; 
        ///Baud Rate Prescaler
        enum class pbrVal {
            v00=0x00000000,     ///<Baud Rate Prescaler value is 2.
            v01=0x00000001,     ///<Baud Rate Prescaler value is 3.
            v10=0x00000002,     ///<Baud Rate Prescaler value is 5.
            v11=0x00000003,     ///<Baud Rate Prescaler value is 7.
        };
        namespace pbrValC{
            constexpr MPL::Value<pbrVal,pbrVal::v00> v00{};
            constexpr MPL::Value<pbrVal,pbrVal::v01> v01{};
            constexpr MPL::Value<pbrVal,pbrVal::v10> v10{};
            constexpr MPL::Value<pbrVal,pbrVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,pbrVal> pbr{}; 
        ///Delay after Transfer Prescaler
        enum class pdtVal {
            v00=0x00000000,     ///<Delay after Transfer Prescaler value is 1.
            v01=0x00000001,     ///<Delay after Transfer Prescaler value is 3.
            v10=0x00000002,     ///<Delay after Transfer Prescaler value is 5.
            v11=0x00000003,     ///<Delay after Transfer Prescaler value is 7.
        };
        namespace pdtValC{
            constexpr MPL::Value<pdtVal,pdtVal::v00> v00{};
            constexpr MPL::Value<pdtVal,pdtVal::v01> v01{};
            constexpr MPL::Value<pdtVal,pdtVal::v10> v10{};
            constexpr MPL::Value<pdtVal,pdtVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,pdtVal> pdt{}; 
        ///After SCK Delay Prescaler
        enum class pascVal {
            v00=0x00000000,     ///<Delay after Transfer Prescaler value is 1.
            v01=0x00000001,     ///<Delay after Transfer Prescaler value is 3.
            v10=0x00000002,     ///<Delay after Transfer Prescaler value is 5.
            v11=0x00000003,     ///<Delay after Transfer Prescaler value is 7.
        };
        namespace pascValC{
            constexpr MPL::Value<pascVal,pascVal::v00> v00{};
            constexpr MPL::Value<pascVal,pascVal::v01> v01{};
            constexpr MPL::Value<pascVal,pascVal::v10> v10{};
            constexpr MPL::Value<pascVal,pascVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,pascVal> pasc{}; 
        ///PCS to SCK Delay Prescaler
        enum class pcssckVal {
            v00=0x00000000,     ///<PCS to SCK Prescaler value is 1.
            v01=0x00000001,     ///<PCS to SCK Prescaler value is 3.
            v10=0x00000002,     ///<PCS to SCK Prescaler value is 5.
            v11=0x00000003,     ///<PCS to SCK Prescaler value is 7.
        };
        namespace pcssckValC{
            constexpr MPL::Value<pcssckVal,pcssckVal::v00> v00{};
            constexpr MPL::Value<pcssckVal,pcssckVal::v01> v01{};
            constexpr MPL::Value<pcssckVal,pcssckVal::v10> v10{};
            constexpr MPL::Value<pcssckVal,pcssckVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,pcssckVal> pcssck{}; 
        ///LSB First
        enum class lsbfeVal {
            v0=0x00000000,     ///<Data is transferred MSB first.
            v1=0x00000001,     ///<Data is transferred LSB first.
        };
        namespace lsbfeValC{
            constexpr MPL::Value<lsbfeVal,lsbfeVal::v0> v0{};
            constexpr MPL::Value<lsbfeVal,lsbfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,lsbfeVal> lsbfe{}; 
        ///Clock Phase
        enum class cphaVal {
            v0=0x00000000,     ///<Data is captured on the leading edge of SCK and changed on the following edge.
            v1=0x00000001,     ///<Data is changed on the leading edge of SCK and captured on the following edge.
        };
        namespace cphaValC{
            constexpr MPL::Value<cphaVal,cphaVal::v0> v0{};
            constexpr MPL::Value<cphaVal,cphaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,cphaVal> cpha{}; 
        ///Clock Polarity
        enum class cpolVal {
            v0=0x00000000,     ///<The inactive state value of SCK is low.
            v1=0x00000001,     ///<The inactive state value of SCK is high.
        };
        namespace cpolValC{
            constexpr MPL::Value<cpolVal,cpolVal::v0> v0{};
            constexpr MPL::Value<cpolVal,cpolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,cpolVal> cpol{}; 
        ///Frame Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,27),Register::ReadWriteAccess,unsigned> fmsz{}; 
        ///Double Baud Rate
        enum class dbrVal {
            v0=0x00000000,     ///<The baud rate is computed normally with a 50/50 duty cycle.
            v1=0x00000001,     ///<The baud rate is doubled with the duty cycle depending on the Baud Rate Prescaler.
        };
        namespace dbrValC{
            constexpr MPL::Value<dbrVal,dbrVal::v0> v0{};
            constexpr MPL::Value<dbrVal,dbrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,dbrVal> dbr{}; 
    }
    namespace Spi2Ctar1{    ///<Clock and Transfer Attributes Register (In Master Mode)
        using Addr = Register::Address<0x400ac010,0x00000000,0,unsigned>;
        ///Baud Rate Scaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> br{}; 
        ///Delay After Transfer Scaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dt{}; 
        ///After SCK Delay Scaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> asc{}; 
        ///PCS to SCK Delay Scaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> cssck{}; 
        ///Baud Rate Prescaler
        enum class pbrVal {
            v00=0x00000000,     ///<Baud Rate Prescaler value is 2.
            v01=0x00000001,     ///<Baud Rate Prescaler value is 3.
            v10=0x00000002,     ///<Baud Rate Prescaler value is 5.
            v11=0x00000003,     ///<Baud Rate Prescaler value is 7.
        };
        namespace pbrValC{
            constexpr MPL::Value<pbrVal,pbrVal::v00> v00{};
            constexpr MPL::Value<pbrVal,pbrVal::v01> v01{};
            constexpr MPL::Value<pbrVal,pbrVal::v10> v10{};
            constexpr MPL::Value<pbrVal,pbrVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,pbrVal> pbr{}; 
        ///Delay after Transfer Prescaler
        enum class pdtVal {
            v00=0x00000000,     ///<Delay after Transfer Prescaler value is 1.
            v01=0x00000001,     ///<Delay after Transfer Prescaler value is 3.
            v10=0x00000002,     ///<Delay after Transfer Prescaler value is 5.
            v11=0x00000003,     ///<Delay after Transfer Prescaler value is 7.
        };
        namespace pdtValC{
            constexpr MPL::Value<pdtVal,pdtVal::v00> v00{};
            constexpr MPL::Value<pdtVal,pdtVal::v01> v01{};
            constexpr MPL::Value<pdtVal,pdtVal::v10> v10{};
            constexpr MPL::Value<pdtVal,pdtVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,pdtVal> pdt{}; 
        ///After SCK Delay Prescaler
        enum class pascVal {
            v00=0x00000000,     ///<Delay after Transfer Prescaler value is 1.
            v01=0x00000001,     ///<Delay after Transfer Prescaler value is 3.
            v10=0x00000002,     ///<Delay after Transfer Prescaler value is 5.
            v11=0x00000003,     ///<Delay after Transfer Prescaler value is 7.
        };
        namespace pascValC{
            constexpr MPL::Value<pascVal,pascVal::v00> v00{};
            constexpr MPL::Value<pascVal,pascVal::v01> v01{};
            constexpr MPL::Value<pascVal,pascVal::v10> v10{};
            constexpr MPL::Value<pascVal,pascVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,pascVal> pasc{}; 
        ///PCS to SCK Delay Prescaler
        enum class pcssckVal {
            v00=0x00000000,     ///<PCS to SCK Prescaler value is 1.
            v01=0x00000001,     ///<PCS to SCK Prescaler value is 3.
            v10=0x00000002,     ///<PCS to SCK Prescaler value is 5.
            v11=0x00000003,     ///<PCS to SCK Prescaler value is 7.
        };
        namespace pcssckValC{
            constexpr MPL::Value<pcssckVal,pcssckVal::v00> v00{};
            constexpr MPL::Value<pcssckVal,pcssckVal::v01> v01{};
            constexpr MPL::Value<pcssckVal,pcssckVal::v10> v10{};
            constexpr MPL::Value<pcssckVal,pcssckVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,pcssckVal> pcssck{}; 
        ///LSB First
        enum class lsbfeVal {
            v0=0x00000000,     ///<Data is transferred MSB first.
            v1=0x00000001,     ///<Data is transferred LSB first.
        };
        namespace lsbfeValC{
            constexpr MPL::Value<lsbfeVal,lsbfeVal::v0> v0{};
            constexpr MPL::Value<lsbfeVal,lsbfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,lsbfeVal> lsbfe{}; 
        ///Clock Phase
        enum class cphaVal {
            v0=0x00000000,     ///<Data is captured on the leading edge of SCK and changed on the following edge.
            v1=0x00000001,     ///<Data is changed on the leading edge of SCK and captured on the following edge.
        };
        namespace cphaValC{
            constexpr MPL::Value<cphaVal,cphaVal::v0> v0{};
            constexpr MPL::Value<cphaVal,cphaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,cphaVal> cpha{}; 
        ///Clock Polarity
        enum class cpolVal {
            v0=0x00000000,     ///<The inactive state value of SCK is low.
            v1=0x00000001,     ///<The inactive state value of SCK is high.
        };
        namespace cpolValC{
            constexpr MPL::Value<cpolVal,cpolVal::v0> v0{};
            constexpr MPL::Value<cpolVal,cpolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,cpolVal> cpol{}; 
        ///Frame Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,27),Register::ReadWriteAccess,unsigned> fmsz{}; 
        ///Double Baud Rate
        enum class dbrVal {
            v0=0x00000000,     ///<The baud rate is computed normally with a 50/50 duty cycle.
            v1=0x00000001,     ///<The baud rate is doubled with the duty cycle depending on the Baud Rate Prescaler.
        };
        namespace dbrValC{
            constexpr MPL::Value<dbrVal,dbrVal::v0> v0{};
            constexpr MPL::Value<dbrVal,dbrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,dbrVal> dbr{}; 
    }
    namespace Spi2CtarSlave{    ///<Clock and Transfer Attributes Register (In Slave Mode)
        using Addr = Register::Address<0x400ac00c,0x01ffffff,0,unsigned>;
        ///Clock Phase
        enum class cphaVal {
            v0=0x00000000,     ///<Data is captured on the leading edge of SCK and changed on the following edge.
            v1=0x00000001,     ///<Data is changed on the leading edge of SCK and captured on the following edge.
        };
        namespace cphaValC{
            constexpr MPL::Value<cphaVal,cphaVal::v0> v0{};
            constexpr MPL::Value<cphaVal,cphaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,cphaVal> cpha{}; 
        ///Clock Polarity
        enum class cpolVal {
            v0=0x00000000,     ///<The inactive state value of SCK is low.
            v1=0x00000001,     ///<The inactive state value of SCK is high.
        };
        namespace cpolValC{
            constexpr MPL::Value<cpolVal,cpolVal::v0> v0{};
            constexpr MPL::Value<cpolVal,cpolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,cpolVal> cpol{}; 
        ///Frame Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,27),Register::ReadWriteAccess,unsigned> fmsz{}; 
    }
    namespace Spi2Sr{    ///<Status Register
        using Addr = Register::Address<0x400ac02c,0x25f50000,0,unsigned>;
        ///Pop Next Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> popnxtptr{}; 
        ///RX FIFO Counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> rxctr{}; 
        ///Transmit Next Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> txnxtptr{}; 
        ///TX FIFO Counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> txctr{}; 
        ///Receive FIFO Drain Flag
        enum class rfdfVal {
            v0=0x00000000,     ///<RX FIFO is empty.
            v1=0x00000001,     ///<RX FIFO is not empty.
        };
        namespace rfdfValC{
            constexpr MPL::Value<rfdfVal,rfdfVal::v0> v0{};
            constexpr MPL::Value<rfdfVal,rfdfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,rfdfVal> rfdf{}; 
        ///Receive FIFO Overflow Flag
        enum class rfofVal {
            v0=0x00000000,     ///<No Rx FIFO overflow.
            v1=0x00000001,     ///<Rx FIFO overflow has occurred.
        };
        namespace rfofValC{
            constexpr MPL::Value<rfofVal,rfofVal::v0> v0{};
            constexpr MPL::Value<rfofVal,rfofVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,rfofVal> rfof{}; 
        ///Transmit FIFO Fill Flag
        enum class tfffVal {
            v0=0x00000000,     ///<TX FIFO is full.
            v1=0x00000001,     ///<TX FIFO is not full.
        };
        namespace tfffValC{
            constexpr MPL::Value<tfffVal,tfffVal::v0> v0{};
            constexpr MPL::Value<tfffVal,tfffVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,tfffVal> tfff{}; 
        ///Transmit FIFO Underflow Flag
        enum class tfufVal {
            v0=0x00000000,     ///<No TX FIFO underflow.
            v1=0x00000001,     ///<TX FIFO underflow has occurred.
        };
        namespace tfufValC{
            constexpr MPL::Value<tfufVal,tfufVal::v0> v0{};
            constexpr MPL::Value<tfufVal,tfufVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,tfufVal> tfuf{}; 
        ///End of Queue Flag
        enum class eoqfVal {
            v0=0x00000000,     ///<EOQ is not set in the executing command.
            v1=0x00000001,     ///<EOQ is set in the executing SPI command.
        };
        namespace eoqfValC{
            constexpr MPL::Value<eoqfVal,eoqfVal::v0> v0{};
            constexpr MPL::Value<eoqfVal,eoqfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,eoqfVal> eoqf{}; 
        ///TX and RX Status
        enum class txrxsVal {
            v0=0x00000000,     ///<Transmit and receive operations are disabled (The module is in Stopped state).
            v1=0x00000001,     ///<Transmit and receive operations are enabled (The module is in Running state).
        };
        namespace txrxsValC{
            constexpr MPL::Value<txrxsVal,txrxsVal::v0> v0{};
            constexpr MPL::Value<txrxsVal,txrxsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,txrxsVal> txrxs{}; 
        ///Transfer Complete Flag
        enum class tcfVal {
            v0=0x00000000,     ///<Transfer not complete.
            v1=0x00000001,     ///<Transfer complete.
        };
        namespace tcfValC{
            constexpr MPL::Value<tcfVal,tcfVal::v0> v0{};
            constexpr MPL::Value<tcfVal,tcfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,tcfVal> tcf{}; 
    }
    namespace Spi2Rser{    ///<DMA/Interrupt Request Select and Enable Register
        using Addr = Register::Address<0x400ac030,0x64f4ffff,0,unsigned>;
        ///Receive FIFO Drain DMA or Interrupt Request Select
        enum class rfdfDirsVal {
            v0=0x00000000,     ///<Interrupt request.
            v1=0x00000001,     ///<DMA request.
        };
        namespace rfdfDirsValC{
            constexpr MPL::Value<rfdfDirsVal,rfdfDirsVal::v0> v0{};
            constexpr MPL::Value<rfdfDirsVal,rfdfDirsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,rfdfDirsVal> rfdfDirs{}; 
        ///Receive FIFO Drain Request Enable
        enum class rfdfReVal {
            v0=0x00000000,     ///<RFDF interrupt or DMA requests are disabled.
            v1=0x00000001,     ///<RFDF interrupt or DMA requests are enabled.
        };
        namespace rfdfReValC{
            constexpr MPL::Value<rfdfReVal,rfdfReVal::v0> v0{};
            constexpr MPL::Value<rfdfReVal,rfdfReVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,rfdfReVal> rfdfRe{}; 
        ///Receive FIFO Overflow Request Enable
        enum class rfofReVal {
            v0=0x00000000,     ///<RFOF interrupt requests are disabled.
            v1=0x00000001,     ///<RFOF interrupt requests are enabled.
        };
        namespace rfofReValC{
            constexpr MPL::Value<rfofReVal,rfofReVal::v0> v0{};
            constexpr MPL::Value<rfofReVal,rfofReVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,rfofReVal> rfofRe{}; 
        ///Transmit FIFO Fill DMA or Interrupt Request Select
        enum class tfffDirsVal {
            v0=0x00000000,     ///<TFFF flag generates interrupt requests.
            v1=0x00000001,     ///<TFFF flag generates DMA requests.
        };
        namespace tfffDirsValC{
            constexpr MPL::Value<tfffDirsVal,tfffDirsVal::v0> v0{};
            constexpr MPL::Value<tfffDirsVal,tfffDirsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,tfffDirsVal> tfffDirs{}; 
        ///Transmit FIFO Fill Request Enable
        enum class tfffReVal {
            v0=0x00000000,     ///<TFFF interrupts or DMA requests are disabled.
            v1=0x00000001,     ///<TFFF interrupts or DMA requests are enabled.
        };
        namespace tfffReValC{
            constexpr MPL::Value<tfffReVal,tfffReVal::v0> v0{};
            constexpr MPL::Value<tfffReVal,tfffReVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,tfffReVal> tfffRe{}; 
        ///Transmit FIFO Underflow Request Enable
        enum class tfufReVal {
            v0=0x00000000,     ///<TFUF interrupt requests are disabled.
            v1=0x00000001,     ///<TFUF interrupt requests are enabled.
        };
        namespace tfufReValC{
            constexpr MPL::Value<tfufReVal,tfufReVal::v0> v0{};
            constexpr MPL::Value<tfufReVal,tfufReVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,tfufReVal> tfufRe{}; 
        ///Finished Request Enable
        enum class eoqfReVal {
            v0=0x00000000,     ///<EOQF interrupt requests are disabled.
            v1=0x00000001,     ///<EOQF interrupt requests are enabled.
        };
        namespace eoqfReValC{
            constexpr MPL::Value<eoqfReVal,eoqfReVal::v0> v0{};
            constexpr MPL::Value<eoqfReVal,eoqfReVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,eoqfReVal> eoqfRe{}; 
        ///Transmission Complete Request Enable
        enum class tcfReVal {
            v0=0x00000000,     ///<TCF interrupt requests are disabled.
            v1=0x00000001,     ///<TCF interrupt requests are enabled.
        };
        namespace tcfReValC{
            constexpr MPL::Value<tcfReVal,tcfReVal::v0> v0{};
            constexpr MPL::Value<tcfReVal,tcfReVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,tcfReVal> tcfRe{}; 
    }
    namespace Spi2Pushr{    ///<PUSH TX FIFO Register In Master Mode
        using Addr = Register::Address<0x400ac034,0x03c00000,0,unsigned>;
        ///Transmit Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txdata{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> pcs{}; 
        ///Clear Transfer Counter
        enum class ctcntVal {
            v0=0x00000000,     ///<Do not clear the TCR[TCNT] field.
            v1=0x00000001,     ///<Clear the TCR[TCNT] field.
        };
        namespace ctcntValC{
            constexpr MPL::Value<ctcntVal,ctcntVal::v0> v0{};
            constexpr MPL::Value<ctcntVal,ctcntVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ctcntVal> ctcnt{}; 
        ///End Of Queue
        enum class eoqVal {
            v0=0x00000000,     ///<The SPI data is not the last data to transfer.
            v1=0x00000001,     ///<The SPI data is the last data to transfer.
        };
        namespace eoqValC{
            constexpr MPL::Value<eoqVal,eoqVal::v0> v0{};
            constexpr MPL::Value<eoqVal,eoqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,eoqVal> eoq{}; 
        ///Clock and Transfer Attributes Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ctas{}; 
        ///Continuous Peripheral Chip Select Enable
        enum class contVal {
            v0=0x00000000,     ///<Return PCSn signals to their inactive state between transfers.
            v1=0x00000001,     ///<Keep PCSn signals asserted between transfers.
        };
        namespace contValC{
            constexpr MPL::Value<contVal,contVal::v0> v0{};
            constexpr MPL::Value<contVal,contVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,contVal> cont{}; 
    }
    namespace Spi2PushrSlave{    ///<PUSH TX FIFO Register In Slave Mode
        using Addr = Register::Address<0x400ac034,0x00000000,0,unsigned>;
        ///Transmit Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txdata{}; 
    }
    namespace Spi2Popr{    ///<POP RX FIFO Register
        using Addr = Register::Address<0x400ac038,0x00000000,0,unsigned>;
        ///Received Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxdata{}; 
    }
    namespace Spi2Txfr0{    ///<Transmit FIFO Registers
        using Addr = Register::Address<0x400ac03c,0x00000000,0,unsigned>;
        ///Transmit Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txdata{}; 
        ///Transmit Command or Transmit Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> txcmdTxdata{}; 
    }
    namespace Spi2Txfr1{    ///<Transmit FIFO Registers
        using Addr = Register::Address<0x400ac040,0x00000000,0,unsigned>;
        ///Transmit Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txdata{}; 
        ///Transmit Command or Transmit Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> txcmdTxdata{}; 
    }
    namespace Spi2Txfr2{    ///<Transmit FIFO Registers
        using Addr = Register::Address<0x400ac044,0x00000000,0,unsigned>;
        ///Transmit Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txdata{}; 
        ///Transmit Command or Transmit Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> txcmdTxdata{}; 
    }
    namespace Spi2Txfr3{    ///<Transmit FIFO Registers
        using Addr = Register::Address<0x400ac048,0x00000000,0,unsigned>;
        ///Transmit Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txdata{}; 
        ///Transmit Command or Transmit Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> txcmdTxdata{}; 
    }
    namespace Spi2Rxfr0{    ///<Receive FIFO Registers
        using Addr = Register::Address<0x400ac07c,0x00000000,0,unsigned>;
        ///Receive Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxdata{}; 
    }
    namespace Spi2Rxfr1{    ///<Receive FIFO Registers
        using Addr = Register::Address<0x400ac080,0x00000000,0,unsigned>;
        ///Receive Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxdata{}; 
    }
    namespace Spi2Rxfr2{    ///<Receive FIFO Registers
        using Addr = Register::Address<0x400ac084,0x00000000,0,unsigned>;
        ///Receive Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxdata{}; 
    }
    namespace Spi2Rxfr3{    ///<Receive FIFO Registers
        using Addr = Register::Address<0x400ac088,0x00000000,0,unsigned>;
        ///Receive Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxdata{}; 
    }
}
