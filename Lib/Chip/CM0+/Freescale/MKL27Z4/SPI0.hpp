#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Serial Peripheral Interface
    namespace Spi0S{    ///<SPI Status Register
        using Addr = Register::Address<0x40076000,0xffffff0f,0x00000000,unsigned char>;
        ///Master Mode Fault Flag
        enum class ModfVal {
            v0=0x00000000,     ///<No mode fault error
            v1=0x00000001,     ///<Mode fault error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,ModfVal> modf{}; 
        namespace ModfValC{
            constexpr Register::FieldValue<decltype(Spi0S::modf)::Type,ModfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi0S::modf)::Type,ModfVal::v1> v1{};
        }
        ///SPI Transmit Buffer Empty Flag (when FIFO is not supported or not enabled) or SPI transmit FIFO empty flag (when FIFO is supported and enabled)
        enum class SptefVal {
            v0=0x00000000,     ///<SPI transmit buffer not empty (when FIFOMODE is not present or is 0) or SPI FIFO not empty (when FIFOMODE is 1)
            v1=0x00000001,     ///<SPI transmit buffer empty (when FIFOMODE is not present or is 0) or SPI FIFO empty (when FIFOMODE is 1)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SptefVal> sptef{}; 
        namespace SptefValC{
            constexpr Register::FieldValue<decltype(Spi0S::sptef)::Type,SptefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi0S::sptef)::Type,SptefVal::v1> v1{};
        }
        ///SPI Match Flag
        enum class SpmfVal {
            v0=0x00000000,     ///<Value in the receive data buffer does not match the value in the MH:ML registers
            v1=0x00000001,     ///<Value in the receive data buffer matches the value in the MH:ML registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,SpmfVal> spmf{}; 
        namespace SpmfValC{
            constexpr Register::FieldValue<decltype(Spi0S::spmf)::Type,SpmfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi0S::spmf)::Type,SpmfVal::v1> v1{};
        }
        ///SPI Read Buffer Full Flag (when FIFO is not supported or not enabled) or SPI read FIFO FULL flag (when FIFO is supported and enabled)
        enum class SprfVal {
            v0=0x00000000,     ///<No data available in the receive data buffer (when FIFOMODE is not present or is 0) or Read FIFO is not full (when FIFOMODE is 1)
            v1=0x00000001,     ///<Data available in the receive data buffer (when FIFOMODE is not present or is 0) or Read FIFO is full (when FIFOMODE is 1)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SprfVal> sprf{}; 
        namespace SprfValC{
            constexpr Register::FieldValue<decltype(Spi0S::sprf)::Type,SprfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi0S::sprf)::Type,SprfVal::v1> v1{};
        }
    }
    namespace Spi0Br{    ///<SPI Baud Rate Register
        using Addr = Register::Address<0x40076001,0xffffff80,0x00000000,unsigned char>;
        ///SPI Baud Rate Divisor
        enum class SprVal {
            v0000=0x00000000,     ///<Baud rate divisor is 2.
            v0001=0x00000001,     ///<Baud rate divisor is 4.
            v0010=0x00000002,     ///<Baud rate divisor is 8.
            v0011=0x00000003,     ///<Baud rate divisor is 16.
            v0100=0x00000004,     ///<Baud rate divisor is 32.
            v0101=0x00000005,     ///<Baud rate divisor is 64.
            v0110=0x00000006,     ///<Baud rate divisor is 128.
            v0111=0x00000007,     ///<Baud rate divisor is 256.
            v1000=0x00000008,     ///<Baud rate divisor is 512.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,SprVal> spr{}; 
        namespace SprValC{
            constexpr Register::FieldValue<decltype(Spi0Br::spr)::Type,SprVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(Spi0Br::spr)::Type,SprVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(Spi0Br::spr)::Type,SprVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(Spi0Br::spr)::Type,SprVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(Spi0Br::spr)::Type,SprVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(Spi0Br::spr)::Type,SprVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(Spi0Br::spr)::Type,SprVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(Spi0Br::spr)::Type,SprVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(Spi0Br::spr)::Type,SprVal::v1000> v1000{};
        }
        ///SPI Baud Rate Prescale Divisor
        enum class SpprVal {
            v000=0x00000000,     ///<Baud rate prescaler divisor is 1.
            v001=0x00000001,     ///<Baud rate prescaler divisor is 2.
            v010=0x00000002,     ///<Baud rate prescaler divisor is 3.
            v011=0x00000003,     ///<Baud rate prescaler divisor is 4.
            v100=0x00000004,     ///<Baud rate prescaler divisor is 5.
            v101=0x00000005,     ///<Baud rate prescaler divisor is 6.
            v110=0x00000006,     ///<Baud rate prescaler divisor is 7.
            v111=0x00000007,     ///<Baud rate prescaler divisor is 8.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,SpprVal> sppr{}; 
        namespace SpprValC{
            constexpr Register::FieldValue<decltype(Spi0Br::sppr)::Type,SpprVal::v000> v000{};
            constexpr Register::FieldValue<decltype(Spi0Br::sppr)::Type,SpprVal::v001> v001{};
            constexpr Register::FieldValue<decltype(Spi0Br::sppr)::Type,SpprVal::v010> v010{};
            constexpr Register::FieldValue<decltype(Spi0Br::sppr)::Type,SpprVal::v011> v011{};
            constexpr Register::FieldValue<decltype(Spi0Br::sppr)::Type,SpprVal::v100> v100{};
            constexpr Register::FieldValue<decltype(Spi0Br::sppr)::Type,SpprVal::v101> v101{};
            constexpr Register::FieldValue<decltype(Spi0Br::sppr)::Type,SpprVal::v110> v110{};
            constexpr Register::FieldValue<decltype(Spi0Br::sppr)::Type,SpprVal::v111> v111{};
        }
    }
    namespace Spi0C2{    ///<SPI Control Register 2
        using Addr = Register::Address<0x40076002,0xffffff00,0x00000000,unsigned char>;
        ///SPI Pin Control 0
        enum class Spc0Val {
            v0=0x00000000,     ///<SPI uses separate pins for data input and data output (pin mode is normal). In master mode of operation: MISO is master in and MOSI is master out. In slave mode of operation: MISO is slave out and MOSI is slave in.
            v1=0x00000001,     ///<SPI configured for single-wire bidirectional operation (pin mode is bidirectional). In master mode of operation: MISO is not used by SPI; MOSI is master in when BIDIROE is 0 or master I/O when BIDIROE is 1. In slave mode of operation: MISO is slave in when BIDIROE is 0 or slave I/O when BIDIROE is 1; MOSI is not used by SPI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Spc0Val> spc0{}; 
        namespace Spc0ValC{
            constexpr Register::FieldValue<decltype(Spi0C2::spc0)::Type,Spc0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi0C2::spc0)::Type,Spc0Val::v1> v1{};
        }
        ///SPI Stop in Wait Mode
        enum class SpiswaiVal {
            v0=0x00000000,     ///<SPI clocks continue to operate in Wait mode.
            v1=0x00000001,     ///<SPI clocks stop when the MCU enters Wait mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SpiswaiVal> spiswai{}; 
        namespace SpiswaiValC{
            constexpr Register::FieldValue<decltype(Spi0C2::spiswai)::Type,SpiswaiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi0C2::spiswai)::Type,SpiswaiVal::v1> v1{};
        }
        ///Receive DMA enable
        enum class RxdmaeVal {
            v0=0x00000000,     ///<DMA request for receive is disabled and interrupt from SPRF is allowed
            v1=0x00000001,     ///<DMA request for receive is enabled and interrupt from SPRF is disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RxdmaeVal> rxdmae{}; 
        namespace RxdmaeValC{
            constexpr Register::FieldValue<decltype(Spi0C2::rxdmae)::Type,RxdmaeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi0C2::rxdmae)::Type,RxdmaeVal::v1> v1{};
        }
        ///Bidirectional Mode Output Enable
        enum class BidiroeVal {
            v0=0x00000000,     ///<Output driver disabled so SPI data I/O pin acts as an input
            v1=0x00000001,     ///<SPI I/O pin enabled as an output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BidiroeVal> bidiroe{}; 
        namespace BidiroeValC{
            constexpr Register::FieldValue<decltype(Spi0C2::bidiroe)::Type,BidiroeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi0C2::bidiroe)::Type,BidiroeVal::v1> v1{};
        }
        ///Master Mode-Fault Function Enable
        enum class ModfenVal {
            v0=0x00000000,     ///<Mode fault function disabled, master SS pin reverts to general-purpose I/O not controlled by SPI
            v1=0x00000001,     ///<Mode fault function enabled, master SS pin acts as the mode fault input or the slave select output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ModfenVal> modfen{}; 
        namespace ModfenValC{
            constexpr Register::FieldValue<decltype(Spi0C2::modfen)::Type,ModfenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi0C2::modfen)::Type,ModfenVal::v1> v1{};
        }
        ///Transmit DMA enable
        enum class TxdmaeVal {
            v0=0x00000000,     ///<DMA request for transmit is disabled and interrupt from SPTEF is allowed
            v1=0x00000001,     ///<DMA request for transmit is enabled and interrupt from SPTEF is disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TxdmaeVal> txdmae{}; 
        namespace TxdmaeValC{
            constexpr Register::FieldValue<decltype(Spi0C2::txdmae)::Type,TxdmaeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi0C2::txdmae)::Type,TxdmaeVal::v1> v1{};
        }
        ///SPI 8-bit or 16-bit mode
        enum class SpimodeVal {
            v0=0x00000000,     ///<8-bit SPI shift register, match register, and buffers
            v1=0x00000001,     ///<16-bit SPI shift register, match register, and buffers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,SpimodeVal> spimode{}; 
        namespace SpimodeValC{
            constexpr Register::FieldValue<decltype(Spi0C2::spimode)::Type,SpimodeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi0C2::spimode)::Type,SpimodeVal::v1> v1{};
        }
        ///SPI Match Interrupt Enable
        enum class SpmieVal {
            v0=0x00000000,     ///<Interrupts from SPMF inhibited (use polling)
            v1=0x00000001,     ///<When SPMF is 1, requests a hardware interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SpmieVal> spmie{}; 
        namespace SpmieValC{
            constexpr Register::FieldValue<decltype(Spi0C2::spmie)::Type,SpmieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi0C2::spmie)::Type,SpmieVal::v1> v1{};
        }
    }
    namespace Spi0C1{    ///<SPI Control Register 1
        using Addr = Register::Address<0x40076003,0xffffff00,0x00000000,unsigned char>;
        ///LSB First (shifter direction)
        enum class LsbfeVal {
            v0=0x00000000,     ///<SPI serial data transfers start with the most significant bit.
            v1=0x00000001,     ///<SPI serial data transfers start with the least significant bit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,LsbfeVal> lsbfe{}; 
        namespace LsbfeValC{
            constexpr Register::FieldValue<decltype(Spi0C1::lsbfe)::Type,LsbfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi0C1::lsbfe)::Type,LsbfeVal::v1> v1{};
        }
        ///Slave Select Output Enable
        enum class SsoeVal {
            v0=0x00000000,     ///<When C2[MODFEN] is 0: In master mode, SS pin function is general-purpose I/O (not SPI). In slave mode, SS pin function is slave select input. When C2[MODFEN] is 1: In master mode, SS pin function is SS input for mode fault. In slave mode, SS pin function is slave select input.
            v1=0x00000001,     ///<When C2[MODFEN] is 0: In master mode, SS pin function is general-purpose I/O (not SPI). In slave mode, SS pin function is slave select input. When C2[MODFEN] is 1: In master mode, SS pin function is automatic SS output. In slave mode: SS pin function is slave select input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SsoeVal> ssoe{}; 
        namespace SsoeValC{
            constexpr Register::FieldValue<decltype(Spi0C1::ssoe)::Type,SsoeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi0C1::ssoe)::Type,SsoeVal::v1> v1{};
        }
        ///Clock Phase
        enum class CphaVal {
            v0=0x00000000,     ///<First edge on SPSCK occurs at the middle of the first cycle of a data transfer.
            v1=0x00000001,     ///<First edge on SPSCK occurs at the start of the first cycle of a data transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CphaVal> cpha{}; 
        namespace CphaValC{
            constexpr Register::FieldValue<decltype(Spi0C1::cpha)::Type,CphaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi0C1::cpha)::Type,CphaVal::v1> v1{};
        }
        ///Clock Polarity
        enum class CpolVal {
            v0=0x00000000,     ///<Active-high SPI clock (idles low)
            v1=0x00000001,     ///<Active-low SPI clock (idles high)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CpolVal> cpol{}; 
        namespace CpolValC{
            constexpr Register::FieldValue<decltype(Spi0C1::cpol)::Type,CpolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi0C1::cpol)::Type,CpolVal::v1> v1{};
        }
        ///Master/Slave Mode Select
        enum class MstrVal {
            v0=0x00000000,     ///<SPI module configured as a slave SPI device
            v1=0x00000001,     ///<SPI module configured as a master SPI device
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,MstrVal> mstr{}; 
        namespace MstrValC{
            constexpr Register::FieldValue<decltype(Spi0C1::mstr)::Type,MstrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi0C1::mstr)::Type,MstrVal::v1> v1{};
        }
        ///SPI Transmit Interrupt Enable
        enum class SptieVal {
            v0=0x00000000,     ///<Interrupts from SPTEF inhibited (use polling)
            v1=0x00000001,     ///<When SPTEF is 1, hardware interrupt requested
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SptieVal> sptie{}; 
        namespace SptieValC{
            constexpr Register::FieldValue<decltype(Spi0C1::sptie)::Type,SptieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi0C1::sptie)::Type,SptieVal::v1> v1{};
        }
        ///SPI System Enable
        enum class SpeVal {
            v0=0x00000000,     ///<SPI system inactive
            v1=0x00000001,     ///<SPI system enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,SpeVal> spe{}; 
        namespace SpeValC{
            constexpr Register::FieldValue<decltype(Spi0C1::spe)::Type,SpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi0C1::spe)::Type,SpeVal::v1> v1{};
        }
        ///SPI Interrupt Enable: for SPRF and MODF (when FIFO is not supported or not enabled) or for read FIFO (when FIFO is supported and enabled)
        enum class SpieVal {
            v0=0x00000000,     ///<Interrupts from SPRF and MODF are inhibited-use polling (when FIFOMODE is not present or is 0) or Read FIFO Full Interrupts are disabled (when FIFOMODE is 1)
            v1=0x00000001,     ///<Request a hardware interrupt when SPRF or MODF is 1 (when FIFOMODE is not present or is 0) or Read FIFO Full Interrupts are enabled (when FIFOMODE is 1)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SpieVal> spie{}; 
        namespace SpieValC{
            constexpr Register::FieldValue<decltype(Spi0C1::spie)::Type,SpieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi0C1::spie)::Type,SpieVal::v1> v1{};
        }
    }
    namespace Spi0Ml{    ///<SPI Match Register low
        using Addr = Register::Address<0x40076004,0xffffff00,0x00000000,unsigned char>;
        ///Hardware compare value (low byte)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bits{}; 
    }
    namespace Spi0Mh{    ///<SPI match register high
        using Addr = Register::Address<0x40076005,0xffffff00,0x00000000,unsigned char>;
        ///Hardware compare value (high byte)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bits{}; 
    }
    namespace Spi0Dl{    ///<SPI Data Register low
        using Addr = Register::Address<0x40076006,0xffffff00,0x00000000,unsigned char>;
        ///Data (low byte)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bits{}; 
    }
    namespace Spi0Dh{    ///<SPI data register high
        using Addr = Register::Address<0x40076007,0xffffff00,0x00000000,unsigned char>;
        ///Data (high byte)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bits{}; 
    }
}
