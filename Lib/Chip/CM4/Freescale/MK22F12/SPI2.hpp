#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial Peripheral Interface
    namespace Spi2Mcr{    ///<Module Configuration Register
        using Addr = Register::Address<0x400ac000,0x00c000fe,0,unsigned>;
        ///Halt
        enum class HaltVal {
            v0=0x00000000,     ///<Start transfers.
            v1=0x00000001,     ///<Stop transfers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,HaltVal> halt{}; 
        namespace HaltValC{
            constexpr Register::FieldValue<decltype(halt),HaltVal::v0> v0{};
            constexpr Register::FieldValue<decltype(halt),HaltVal::v1> v1{};
        }
        ///Sample Point
        enum class SmplptVal {
            v00=0x00000000,     ///<0 system clocks between SCK edge and SIN sample
            v01=0x00000001,     ///<1 system clock between SCK edge and SIN sample
            v10=0x00000002,     ///<2 system clocks between SCK edge and SIN sample
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,SmplptVal> smplPt{}; 
        namespace SmplptValC{
            constexpr Register::FieldValue<decltype(smplPt),SmplptVal::v00> v00{};
            constexpr Register::FieldValue<decltype(smplPt),SmplptVal::v01> v01{};
            constexpr Register::FieldValue<decltype(smplPt),SmplptVal::v10> v10{};
        }
        ///no description available
        enum class ClrrxfVal {
            v0=0x00000000,     ///<Do not clear the RX FIFO counter.
            v1=0x00000001,     ///<Clear the RX FIFO counter.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ClrrxfVal> clrRxf{}; 
        namespace ClrrxfValC{
            constexpr Register::FieldValue<decltype(clrRxf),ClrrxfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(clrRxf),ClrrxfVal::v1> v1{};
        }
        ///Clear TX FIFO
        enum class ClrtxfVal {
            v0=0x00000000,     ///<Do not clear the TX FIFO counter.
            v1=0x00000001,     ///<Clear the TX FIFO counter.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ClrtxfVal> clrTxf{}; 
        namespace ClrtxfValC{
            constexpr Register::FieldValue<decltype(clrTxf),ClrtxfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(clrTxf),ClrtxfVal::v1> v1{};
        }
        ///Disable Receive FIFO
        enum class DisrxfVal {
            v0=0x00000000,     ///<RX FIFO is enabled.
            v1=0x00000001,     ///<RX FIFO is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DisrxfVal> disRxf{}; 
        namespace DisrxfValC{
            constexpr Register::FieldValue<decltype(disRxf),DisrxfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(disRxf),DisrxfVal::v1> v1{};
        }
        ///Disable Transmit FIFO
        enum class DistxfVal {
            v0=0x00000000,     ///<TX FIFO is enabled.
            v1=0x00000001,     ///<TX FIFO is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,DistxfVal> disTxf{}; 
        namespace DistxfValC{
            constexpr Register::FieldValue<decltype(disTxf),DistxfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(disTxf),DistxfVal::v1> v1{};
        }
        ///Module Disable
        enum class MdisVal {
            v0=0x00000000,     ///<Enables the module clocks.
            v1=0x00000001,     ///<Allows external logic to disable the module clocks.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,MdisVal> mdis{}; 
        namespace MdisValC{
            constexpr Register::FieldValue<decltype(mdis),MdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mdis),MdisVal::v1> v1{};
        }
        ///Doze Enable
        enum class DozeVal {
            v0=0x00000000,     ///<Doze mode has no effect on the module.
            v1=0x00000001,     ///<Doze mode disables the module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DozeVal> doze{}; 
        namespace DozeValC{
            constexpr Register::FieldValue<decltype(doze),DozeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(doze),DozeVal::v1> v1{};
        }
        ///Peripheral Chip Select x Inactive State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> pcsis{}; 
        namespace PcsisValC{
        }
        ///Receive FIFO Overflow Overwrite Enable
        enum class RooeVal {
            v0=0x00000000,     ///<Incoming data is ignored.
            v1=0x00000001,     ///<Incoming data is shifted into the shift register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,RooeVal> rooe{}; 
        namespace RooeValC{
            constexpr Register::FieldValue<decltype(rooe),RooeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rooe),RooeVal::v1> v1{};
        }
        ///Peripheral Chip Select Strobe Enable
        enum class PcsseVal {
            v0=0x00000000,     ///<PCS5/ PCSS is used as the Peripheral Chip Select[5] signal.
            v1=0x00000001,     ///<PCS5/ PCSS is used as an active-low PCS Strobe signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,PcsseVal> pcsse{}; 
        namespace PcsseValC{
            constexpr Register::FieldValue<decltype(pcsse),PcsseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pcsse),PcsseVal::v1> v1{};
        }
        ///Modified Timing Format Enable
        enum class MtfeVal {
            v0=0x00000000,     ///<Modified SPI transfer format disabled.
            v1=0x00000001,     ///<Modified SPI transfer format enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,MtfeVal> mtfe{}; 
        namespace MtfeValC{
            constexpr Register::FieldValue<decltype(mtfe),MtfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mtfe),MtfeVal::v1> v1{};
        }
        ///Freeze
        enum class FrzVal {
            v0=0x00000000,     ///<Do not halt serial transfers in Debug mode.
            v1=0x00000001,     ///<Halt serial transfers in Debug mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,FrzVal> frz{}; 
        namespace FrzValC{
            constexpr Register::FieldValue<decltype(frz),FrzVal::v0> v0{};
            constexpr Register::FieldValue<decltype(frz),FrzVal::v1> v1{};
        }
        ///SPI Configuration.
        enum class DconfVal {
            v00=0x00000000,     ///<SPI
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DconfVal> dconf{}; 
        namespace DconfValC{
            constexpr Register::FieldValue<decltype(dconf),DconfVal::v00> v00{};
        }
        ///Continuous SCK Enable
        enum class ContsckeVal {
            v0=0x00000000,     ///<Continuous SCK disabled.
            v1=0x00000001,     ///<Continuous SCK enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ContsckeVal> contScke{}; 
        namespace ContsckeValC{
            constexpr Register::FieldValue<decltype(contScke),ContsckeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(contScke),ContsckeVal::v1> v1{};
        }
        ///Master/Slave Mode Select
        enum class MstrVal {
            v0=0x00000000,     ///<The module is in Slave mode.
            v1=0x00000001,     ///<The module is in Master mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,MstrVal> mstr{}; 
        namespace MstrValC{
            constexpr Register::FieldValue<decltype(mstr),MstrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mstr),MstrVal::v1> v1{};
        }
    }
    namespace Spi2Tcr{    ///<Transfer Count Register
        using Addr = Register::Address<0x400ac008,0x0000ffff,0,unsigned>;
        ///SPI Transfer Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> spiTcnt{}; 
        namespace SpitcntValC{
        }
    }
    namespace Spi2Ctar0{    ///<Clock and Transfer Attributes Register (In Master Mode)
        using Addr = Register::Address<0x400ac00c,0x00000000,0,unsigned>;
        ///Baud Rate Scaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> br{}; 
        namespace BrValC{
        }
        ///Delay After Transfer Scaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dt{}; 
        namespace DtValC{
        }
        ///After SCK Delay Scaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> asc{}; 
        namespace AscValC{
        }
        ///PCS to SCK Delay Scaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> cssck{}; 
        namespace CssckValC{
        }
        ///Baud Rate Prescaler
        enum class PbrVal {
            v00=0x00000000,     ///<Baud Rate Prescaler value is 2.
            v01=0x00000001,     ///<Baud Rate Prescaler value is 3.
            v10=0x00000002,     ///<Baud Rate Prescaler value is 5.
            v11=0x00000003,     ///<Baud Rate Prescaler value is 7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,PbrVal> pbr{}; 
        namespace PbrValC{
            constexpr Register::FieldValue<decltype(pbr),PbrVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pbr),PbrVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pbr),PbrVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pbr),PbrVal::v11> v11{};
        }
        ///Delay after Transfer Prescaler
        enum class PdtVal {
            v00=0x00000000,     ///<Delay after Transfer Prescaler value is 1.
            v01=0x00000001,     ///<Delay after Transfer Prescaler value is 3.
            v10=0x00000002,     ///<Delay after Transfer Prescaler value is 5.
            v11=0x00000003,     ///<Delay after Transfer Prescaler value is 7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,PdtVal> pdt{}; 
        namespace PdtValC{
            constexpr Register::FieldValue<decltype(pdt),PdtVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pdt),PdtVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pdt),PdtVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pdt),PdtVal::v11> v11{};
        }
        ///After SCK Delay Prescaler
        enum class PascVal {
            v00=0x00000000,     ///<Delay after Transfer Prescaler value is 1.
            v01=0x00000001,     ///<Delay after Transfer Prescaler value is 3.
            v10=0x00000002,     ///<Delay after Transfer Prescaler value is 5.
            v11=0x00000003,     ///<Delay after Transfer Prescaler value is 7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,PascVal> pasc{}; 
        namespace PascValC{
            constexpr Register::FieldValue<decltype(pasc),PascVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pasc),PascVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pasc),PascVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pasc),PascVal::v11> v11{};
        }
        ///PCS to SCK Delay Prescaler
        enum class PcssckVal {
            v00=0x00000000,     ///<PCS to SCK Prescaler value is 1.
            v01=0x00000001,     ///<PCS to SCK Prescaler value is 3.
            v10=0x00000002,     ///<PCS to SCK Prescaler value is 5.
            v11=0x00000003,     ///<PCS to SCK Prescaler value is 7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,PcssckVal> pcssck{}; 
        namespace PcssckValC{
            constexpr Register::FieldValue<decltype(pcssck),PcssckVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pcssck),PcssckVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pcssck),PcssckVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pcssck),PcssckVal::v11> v11{};
        }
        ///LSB First
        enum class LsbfeVal {
            v0=0x00000000,     ///<Data is transferred MSB first.
            v1=0x00000001,     ///<Data is transferred LSB first.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,LsbfeVal> lsbfe{}; 
        namespace LsbfeValC{
            constexpr Register::FieldValue<decltype(lsbfe),LsbfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lsbfe),LsbfeVal::v1> v1{};
        }
        ///Clock Phase
        enum class CphaVal {
            v0=0x00000000,     ///<Data is captured on the leading edge of SCK and changed on the following edge.
            v1=0x00000001,     ///<Data is changed on the leading edge of SCK and captured on the following edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,CphaVal> cpha{}; 
        namespace CphaValC{
            constexpr Register::FieldValue<decltype(cpha),CphaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cpha),CphaVal::v1> v1{};
        }
        ///Clock Polarity
        enum class CpolVal {
            v0=0x00000000,     ///<The inactive state value of SCK is low.
            v1=0x00000001,     ///<The inactive state value of SCK is high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,CpolVal> cpol{}; 
        namespace CpolValC{
            constexpr Register::FieldValue<decltype(cpol),CpolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cpol),CpolVal::v1> v1{};
        }
        ///Frame Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,27),Register::ReadWriteAccess,unsigned> fmsz{}; 
        namespace FmszValC{
        }
        ///Double Baud Rate
        enum class DbrVal {
            v0=0x00000000,     ///<The baud rate is computed normally with a 50/50 duty cycle.
            v1=0x00000001,     ///<The baud rate is doubled with the duty cycle depending on the Baud Rate Prescaler.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,DbrVal> dbr{}; 
        namespace DbrValC{
            constexpr Register::FieldValue<decltype(dbr),DbrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dbr),DbrVal::v1> v1{};
        }
    }
    namespace Spi2Ctar1{    ///<Clock and Transfer Attributes Register (In Master Mode)
        using Addr = Register::Address<0x400ac010,0x00000000,0,unsigned>;
        ///Baud Rate Scaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> br{}; 
        namespace BrValC{
        }
        ///Delay After Transfer Scaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dt{}; 
        namespace DtValC{
        }
        ///After SCK Delay Scaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> asc{}; 
        namespace AscValC{
        }
        ///PCS to SCK Delay Scaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> cssck{}; 
        namespace CssckValC{
        }
        ///Baud Rate Prescaler
        enum class PbrVal {
            v00=0x00000000,     ///<Baud Rate Prescaler value is 2.
            v01=0x00000001,     ///<Baud Rate Prescaler value is 3.
            v10=0x00000002,     ///<Baud Rate Prescaler value is 5.
            v11=0x00000003,     ///<Baud Rate Prescaler value is 7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,PbrVal> pbr{}; 
        namespace PbrValC{
            constexpr Register::FieldValue<decltype(pbr),PbrVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pbr),PbrVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pbr),PbrVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pbr),PbrVal::v11> v11{};
        }
        ///Delay after Transfer Prescaler
        enum class PdtVal {
            v00=0x00000000,     ///<Delay after Transfer Prescaler value is 1.
            v01=0x00000001,     ///<Delay after Transfer Prescaler value is 3.
            v10=0x00000002,     ///<Delay after Transfer Prescaler value is 5.
            v11=0x00000003,     ///<Delay after Transfer Prescaler value is 7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,PdtVal> pdt{}; 
        namespace PdtValC{
            constexpr Register::FieldValue<decltype(pdt),PdtVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pdt),PdtVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pdt),PdtVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pdt),PdtVal::v11> v11{};
        }
        ///After SCK Delay Prescaler
        enum class PascVal {
            v00=0x00000000,     ///<Delay after Transfer Prescaler value is 1.
            v01=0x00000001,     ///<Delay after Transfer Prescaler value is 3.
            v10=0x00000002,     ///<Delay after Transfer Prescaler value is 5.
            v11=0x00000003,     ///<Delay after Transfer Prescaler value is 7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,PascVal> pasc{}; 
        namespace PascValC{
            constexpr Register::FieldValue<decltype(pasc),PascVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pasc),PascVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pasc),PascVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pasc),PascVal::v11> v11{};
        }
        ///PCS to SCK Delay Prescaler
        enum class PcssckVal {
            v00=0x00000000,     ///<PCS to SCK Prescaler value is 1.
            v01=0x00000001,     ///<PCS to SCK Prescaler value is 3.
            v10=0x00000002,     ///<PCS to SCK Prescaler value is 5.
            v11=0x00000003,     ///<PCS to SCK Prescaler value is 7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,PcssckVal> pcssck{}; 
        namespace PcssckValC{
            constexpr Register::FieldValue<decltype(pcssck),PcssckVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pcssck),PcssckVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pcssck),PcssckVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pcssck),PcssckVal::v11> v11{};
        }
        ///LSB First
        enum class LsbfeVal {
            v0=0x00000000,     ///<Data is transferred MSB first.
            v1=0x00000001,     ///<Data is transferred LSB first.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,LsbfeVal> lsbfe{}; 
        namespace LsbfeValC{
            constexpr Register::FieldValue<decltype(lsbfe),LsbfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lsbfe),LsbfeVal::v1> v1{};
        }
        ///Clock Phase
        enum class CphaVal {
            v0=0x00000000,     ///<Data is captured on the leading edge of SCK and changed on the following edge.
            v1=0x00000001,     ///<Data is changed on the leading edge of SCK and captured on the following edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,CphaVal> cpha{}; 
        namespace CphaValC{
            constexpr Register::FieldValue<decltype(cpha),CphaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cpha),CphaVal::v1> v1{};
        }
        ///Clock Polarity
        enum class CpolVal {
            v0=0x00000000,     ///<The inactive state value of SCK is low.
            v1=0x00000001,     ///<The inactive state value of SCK is high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,CpolVal> cpol{}; 
        namespace CpolValC{
            constexpr Register::FieldValue<decltype(cpol),CpolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cpol),CpolVal::v1> v1{};
        }
        ///Frame Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,27),Register::ReadWriteAccess,unsigned> fmsz{}; 
        namespace FmszValC{
        }
        ///Double Baud Rate
        enum class DbrVal {
            v0=0x00000000,     ///<The baud rate is computed normally with a 50/50 duty cycle.
            v1=0x00000001,     ///<The baud rate is doubled with the duty cycle depending on the Baud Rate Prescaler.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,DbrVal> dbr{}; 
        namespace DbrValC{
            constexpr Register::FieldValue<decltype(dbr),DbrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dbr),DbrVal::v1> v1{};
        }
    }
    namespace Spi2CtarSlave{    ///<Clock and Transfer Attributes Register (In Slave Mode)
        using Addr = Register::Address<0x400ac00c,0x01ffffff,0,unsigned>;
        ///Clock Phase
        enum class CphaVal {
            v0=0x00000000,     ///<Data is captured on the leading edge of SCK and changed on the following edge.
            v1=0x00000001,     ///<Data is changed on the leading edge of SCK and captured on the following edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,CphaVal> cpha{}; 
        namespace CphaValC{
            constexpr Register::FieldValue<decltype(cpha),CphaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cpha),CphaVal::v1> v1{};
        }
        ///Clock Polarity
        enum class CpolVal {
            v0=0x00000000,     ///<The inactive state value of SCK is low.
            v1=0x00000001,     ///<The inactive state value of SCK is high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,CpolVal> cpol{}; 
        namespace CpolValC{
            constexpr Register::FieldValue<decltype(cpol),CpolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cpol),CpolVal::v1> v1{};
        }
        ///Frame Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,27),Register::ReadWriteAccess,unsigned> fmsz{}; 
        namespace FmszValC{
        }
    }
    namespace Spi2Sr{    ///<Status Register
        using Addr = Register::Address<0x400ac02c,0x25f50000,0,unsigned>;
        ///Pop Next Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> popnxtptr{}; 
        namespace PopnxtptrValC{
        }
        ///RX FIFO Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> rxctr{}; 
        namespace RxctrValC{
        }
        ///Transmit Next Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> txnxtptr{}; 
        namespace TxnxtptrValC{
        }
        ///TX FIFO Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> txctr{}; 
        namespace TxctrValC{
        }
        ///Receive FIFO Drain Flag
        enum class RfdfVal {
            v0=0x00000000,     ///<RX FIFO is empty.
            v1=0x00000001,     ///<RX FIFO is not empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,RfdfVal> rfdf{}; 
        namespace RfdfValC{
            constexpr Register::FieldValue<decltype(rfdf),RfdfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rfdf),RfdfVal::v1> v1{};
        }
        ///Receive FIFO Overflow Flag
        enum class RfofVal {
            v0=0x00000000,     ///<No Rx FIFO overflow.
            v1=0x00000001,     ///<Rx FIFO overflow has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,RfofVal> rfof{}; 
        namespace RfofValC{
            constexpr Register::FieldValue<decltype(rfof),RfofVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rfof),RfofVal::v1> v1{};
        }
        ///Transmit FIFO Fill Flag
        enum class TfffVal {
            v0=0x00000000,     ///<TX FIFO is full.
            v1=0x00000001,     ///<TX FIFO is not full.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,TfffVal> tfff{}; 
        namespace TfffValC{
            constexpr Register::FieldValue<decltype(tfff),TfffVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tfff),TfffVal::v1> v1{};
        }
        ///Transmit FIFO Underflow Flag
        enum class TfufVal {
            v0=0x00000000,     ///<No TX FIFO underflow.
            v1=0x00000001,     ///<TX FIFO underflow has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,TfufVal> tfuf{}; 
        namespace TfufValC{
            constexpr Register::FieldValue<decltype(tfuf),TfufVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tfuf),TfufVal::v1> v1{};
        }
        ///End of Queue Flag
        enum class EoqfVal {
            v0=0x00000000,     ///<EOQ is not set in the executing command.
            v1=0x00000001,     ///<EOQ is set in the executing SPI command.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,EoqfVal> eoqf{}; 
        namespace EoqfValC{
            constexpr Register::FieldValue<decltype(eoqf),EoqfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(eoqf),EoqfVal::v1> v1{};
        }
        ///TX and RX Status
        enum class TxrxsVal {
            v0=0x00000000,     ///<Transmit and receive operations are disabled (The module is in Stopped state).
            v1=0x00000001,     ///<Transmit and receive operations are enabled (The module is in Running state).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,TxrxsVal> txrxs{}; 
        namespace TxrxsValC{
            constexpr Register::FieldValue<decltype(txrxs),TxrxsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txrxs),TxrxsVal::v1> v1{};
        }
        ///Transfer Complete Flag
        enum class TcfVal {
            v0=0x00000000,     ///<Transfer not complete.
            v1=0x00000001,     ///<Transfer complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,TcfVal> tcf{}; 
        namespace TcfValC{
            constexpr Register::FieldValue<decltype(tcf),TcfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tcf),TcfVal::v1> v1{};
        }
    }
    namespace Spi2Rser{    ///<DMA/Interrupt Request Select and Enable Register
        using Addr = Register::Address<0x400ac030,0x64f4ffff,0,unsigned>;
        ///Receive FIFO Drain DMA or Interrupt Request Select
        enum class RfdfdirsVal {
            v0=0x00000000,     ///<Interrupt request.
            v1=0x00000001,     ///<DMA request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,RfdfdirsVal> rfdfDirs{}; 
        namespace RfdfdirsValC{
            constexpr Register::FieldValue<decltype(rfdfDirs),RfdfdirsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rfdfDirs),RfdfdirsVal::v1> v1{};
        }
        ///Receive FIFO Drain Request Enable
        enum class RfdfreVal {
            v0=0x00000000,     ///<RFDF interrupt or DMA requests are disabled.
            v1=0x00000001,     ///<RFDF interrupt or DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,RfdfreVal> rfdfRe{}; 
        namespace RfdfreValC{
            constexpr Register::FieldValue<decltype(rfdfRe),RfdfreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rfdfRe),RfdfreVal::v1> v1{};
        }
        ///Receive FIFO Overflow Request Enable
        enum class RfofreVal {
            v0=0x00000000,     ///<RFOF interrupt requests are disabled.
            v1=0x00000001,     ///<RFOF interrupt requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,RfofreVal> rfofRe{}; 
        namespace RfofreValC{
            constexpr Register::FieldValue<decltype(rfofRe),RfofreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rfofRe),RfofreVal::v1> v1{};
        }
        ///Transmit FIFO Fill DMA or Interrupt Request Select
        enum class TfffdirsVal {
            v0=0x00000000,     ///<TFFF flag generates interrupt requests.
            v1=0x00000001,     ///<TFFF flag generates DMA requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,TfffdirsVal> tfffDirs{}; 
        namespace TfffdirsValC{
            constexpr Register::FieldValue<decltype(tfffDirs),TfffdirsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tfffDirs),TfffdirsVal::v1> v1{};
        }
        ///Transmit FIFO Fill Request Enable
        enum class TfffreVal {
            v0=0x00000000,     ///<TFFF interrupts or DMA requests are disabled.
            v1=0x00000001,     ///<TFFF interrupts or DMA requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,TfffreVal> tfffRe{}; 
        namespace TfffreValC{
            constexpr Register::FieldValue<decltype(tfffRe),TfffreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tfffRe),TfffreVal::v1> v1{};
        }
        ///Transmit FIFO Underflow Request Enable
        enum class TfufreVal {
            v0=0x00000000,     ///<TFUF interrupt requests are disabled.
            v1=0x00000001,     ///<TFUF interrupt requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,TfufreVal> tfufRe{}; 
        namespace TfufreValC{
            constexpr Register::FieldValue<decltype(tfufRe),TfufreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tfufRe),TfufreVal::v1> v1{};
        }
        ///Finished Request Enable
        enum class EoqfreVal {
            v0=0x00000000,     ///<EOQF interrupt requests are disabled.
            v1=0x00000001,     ///<EOQF interrupt requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,EoqfreVal> eoqfRe{}; 
        namespace EoqfreValC{
            constexpr Register::FieldValue<decltype(eoqfRe),EoqfreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(eoqfRe),EoqfreVal::v1> v1{};
        }
        ///Transmission Complete Request Enable
        enum class TcfreVal {
            v0=0x00000000,     ///<TCF interrupt requests are disabled.
            v1=0x00000001,     ///<TCF interrupt requests are enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,TcfreVal> tcfRe{}; 
        namespace TcfreValC{
            constexpr Register::FieldValue<decltype(tcfRe),TcfreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tcfRe),TcfreVal::v1> v1{};
        }
    }
    namespace Spi2Pushr{    ///<PUSH TX FIFO Register In Master Mode
        using Addr = Register::Address<0x400ac034,0x03c00000,0,unsigned>;
        ///Transmit Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txdata{}; 
        namespace TxdataValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> pcs{}; 
        namespace PcsValC{
        }
        ///Clear Transfer Counter
        enum class CtcntVal {
            v0=0x00000000,     ///<Do not clear the TCR[TCNT] field.
            v1=0x00000001,     ///<Clear the TCR[TCNT] field.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,CtcntVal> ctcnt{}; 
        namespace CtcntValC{
            constexpr Register::FieldValue<decltype(ctcnt),CtcntVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ctcnt),CtcntVal::v1> v1{};
        }
        ///End Of Queue
        enum class EoqVal {
            v0=0x00000000,     ///<The SPI data is not the last data to transfer.
            v1=0x00000001,     ///<The SPI data is the last data to transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,EoqVal> eoq{}; 
        namespace EoqValC{
            constexpr Register::FieldValue<decltype(eoq),EoqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(eoq),EoqVal::v1> v1{};
        }
        ///Clock and Transfer Attributes Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> ctas{}; 
        namespace CtasValC{
        }
        ///Continuous Peripheral Chip Select Enable
        enum class ContVal {
            v0=0x00000000,     ///<Return PCSn signals to their inactive state between transfers.
            v1=0x00000001,     ///<Keep PCSn signals asserted between transfers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ContVal> cont{}; 
        namespace ContValC{
            constexpr Register::FieldValue<decltype(cont),ContVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cont),ContVal::v1> v1{};
        }
    }
    namespace Spi2PushrSlave{    ///<PUSH TX FIFO Register In Slave Mode
        using Addr = Register::Address<0x400ac034,0x00000000,0,unsigned>;
        ///Transmit Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txdata{}; 
        namespace TxdataValC{
        }
    }
    namespace Spi2Popr{    ///<POP RX FIFO Register
        using Addr = Register::Address<0x400ac038,0x00000000,0,unsigned>;
        ///Received Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxdata{}; 
        namespace RxdataValC{
        }
    }
    namespace Spi2Txfr0{    ///<Transmit FIFO Registers
        using Addr = Register::Address<0x400ac03c,0x00000000,0,unsigned>;
        ///Transmit Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txdata{}; 
        namespace TxdataValC{
        }
        ///Transmit Command or Transmit Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> txcmdTxdata{}; 
        namespace TxcmdtxdataValC{
        }
    }
    namespace Spi2Txfr1{    ///<Transmit FIFO Registers
        using Addr = Register::Address<0x400ac040,0x00000000,0,unsigned>;
        ///Transmit Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txdata{}; 
        namespace TxdataValC{
        }
        ///Transmit Command or Transmit Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> txcmdTxdata{}; 
        namespace TxcmdtxdataValC{
        }
    }
    namespace Spi2Txfr2{    ///<Transmit FIFO Registers
        using Addr = Register::Address<0x400ac044,0x00000000,0,unsigned>;
        ///Transmit Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txdata{}; 
        namespace TxdataValC{
        }
        ///Transmit Command or Transmit Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> txcmdTxdata{}; 
        namespace TxcmdtxdataValC{
        }
    }
    namespace Spi2Txfr3{    ///<Transmit FIFO Registers
        using Addr = Register::Address<0x400ac048,0x00000000,0,unsigned>;
        ///Transmit Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txdata{}; 
        namespace TxdataValC{
        }
        ///Transmit Command or Transmit Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> txcmdTxdata{}; 
        namespace TxcmdtxdataValC{
        }
    }
    namespace Spi2Rxfr0{    ///<Receive FIFO Registers
        using Addr = Register::Address<0x400ac07c,0x00000000,0,unsigned>;
        ///Receive Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxdata{}; 
        namespace RxdataValC{
        }
    }
    namespace Spi2Rxfr1{    ///<Receive FIFO Registers
        using Addr = Register::Address<0x400ac080,0x00000000,0,unsigned>;
        ///Receive Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxdata{}; 
        namespace RxdataValC{
        }
    }
    namespace Spi2Rxfr2{    ///<Receive FIFO Registers
        using Addr = Register::Address<0x400ac084,0x00000000,0,unsigned>;
        ///Receive Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxdata{}; 
        namespace RxdataValC{
        }
    }
    namespace Spi2Rxfr3{    ///<Receive FIFO Registers
        using Addr = Register::Address<0x400ac088,0x00000000,0,unsigned>;
        ///Receive Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxdata{}; 
        namespace RxdataValC{
        }
    }
}
