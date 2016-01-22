#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Serial Peripheral Interface
    namespace Spi1S{    ///<SPI Status Register
        using Addr = Register::Address<0x40077000,0xffffff00,0x00000000,unsigned char>;
        ///SPI read FIFO empty flag
        enum class RfifoefVal {
            v0=0x00000000,     ///<Read FIFO has data. Reads of the DH:DL registers in 16-bit mode or the DL register in 8-bit mode will empty the read FIFO.
            v1=0x00000001,     ///<Read FIFO is empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,RfifoefVal> rfifoef{}; 
        namespace RfifoefValC{
            constexpr Register::FieldValue<decltype(Spi1S::rfifoef)::Type,RfifoefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1S::rfifoef)::Type,RfifoefVal::v1> v1{};
        }
        ///Transmit FIFO full flag
        enum class TxfullfVal {
            v0=0x00000000,     ///<Transmit FIFO has less than 8 bytes
            v1=0x00000001,     ///<Transmit FIFO has 8 bytes of data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TxfullfVal> txfullf{}; 
        namespace TxfullfValC{
            constexpr Register::FieldValue<decltype(Spi1S::txfullf)::Type,TxfullfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1S::txfullf)::Type,TxfullfVal::v1> v1{};
        }
        ///Transmit FIFO nearly empty flag
        enum class TnearefVal {
            v0=0x00000000,     ///<Transmit FIFO has more than 16 bits (when C3[TNEAREF_MARK] is 0) or more than 32 bits (when C3[TNEAREF_MARK] is 1) remaining to transmit
            v1=0x00000001,     ///<Transmit FIFO has an amount of data equal to or less than 16 bits (when C3[TNEAREF_MARK] is 0) or 32 bits (when C3[TNEAREF_MARK] is 1) remaining to transmit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TnearefVal> tnearef{}; 
        namespace TnearefValC{
            constexpr Register::FieldValue<decltype(Spi1S::tnearef)::Type,TnearefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1S::tnearef)::Type,TnearefVal::v1> v1{};
        }
        ///Receive FIFO nearly full flag
        enum class RnfullfVal {
            v0=0x00000000,     ///<Receive FIFO has received less than 48 bits (when C3[RNFULLF_MARK] is 0) or less than 32 bits (when C3[RNFULLF_MARK] is 1)
            v1=0x00000001,     ///<Receive FIFO has received data of an amount equal to or greater than 48 bits (when C3[RNFULLF_MARK] is 0) or 32 bits (when C3[RNFULLF_MARK] is 1)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,RnfullfVal> rnfullf{}; 
        namespace RnfullfValC{
            constexpr Register::FieldValue<decltype(Spi1S::rnfullf)::Type,RnfullfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1S::rnfullf)::Type,RnfullfVal::v1> v1{};
        }
        ///Master Mode Fault Flag
        enum class ModfVal {
            v0=0x00000000,     ///<No mode fault error
            v1=0x00000001,     ///<Mode fault error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,ModfVal> modf{}; 
        namespace ModfValC{
            constexpr Register::FieldValue<decltype(Spi1S::modf)::Type,ModfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1S::modf)::Type,ModfVal::v1> v1{};
        }
        ///SPI Transmit Buffer Empty Flag (when FIFO is not supported or not enabled) or SPI transmit FIFO empty flag (when FIFO is supported and enabled)
        enum class SptefVal {
            v0=0x00000000,     ///<SPI transmit buffer not empty (when FIFOMODE is not present or is 0) or SPI FIFO not empty (when FIFOMODE is 1)
            v1=0x00000001,     ///<SPI transmit buffer empty (when FIFOMODE is not present or is 0) or SPI FIFO empty (when FIFOMODE is 1)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SptefVal> sptef{}; 
        namespace SptefValC{
            constexpr Register::FieldValue<decltype(Spi1S::sptef)::Type,SptefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1S::sptef)::Type,SptefVal::v1> v1{};
        }
        ///SPI Match Flag
        enum class SpmfVal {
            v0=0x00000000,     ///<Value in the receive data buffer does not match the value in the MH:ML registers
            v1=0x00000001,     ///<Value in the receive data buffer matches the value in the MH:ML registers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,SpmfVal> spmf{}; 
        namespace SpmfValC{
            constexpr Register::FieldValue<decltype(Spi1S::spmf)::Type,SpmfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1S::spmf)::Type,SpmfVal::v1> v1{};
        }
        ///SPI Read Buffer Full Flag (when FIFO is not supported or not enabled) or SPI read FIFO FULL flag (when FIFO is supported and enabled)
        enum class SprfVal {
            v0=0x00000000,     ///<No data available in the receive data buffer (when FIFOMODE is not present or is 0) or Read FIFO is not full (when FIFOMODE is 1)
            v1=0x00000001,     ///<Data available in the receive data buffer (when FIFOMODE is not present or is 0) or Read FIFO is full (when FIFOMODE is 1)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SprfVal> sprf{}; 
        namespace SprfValC{
            constexpr Register::FieldValue<decltype(Spi1S::sprf)::Type,SprfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1S::sprf)::Type,SprfVal::v1> v1{};
        }
    }
    namespace Spi1Br{    ///<SPI Baud Rate Register
        using Addr = Register::Address<0x40077001,0xffffff80,0x00000000,unsigned char>;
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
            constexpr Register::FieldValue<decltype(Spi1Br::spr)::Type,SprVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(Spi1Br::spr)::Type,SprVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(Spi1Br::spr)::Type,SprVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(Spi1Br::spr)::Type,SprVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(Spi1Br::spr)::Type,SprVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(Spi1Br::spr)::Type,SprVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(Spi1Br::spr)::Type,SprVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(Spi1Br::spr)::Type,SprVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(Spi1Br::spr)::Type,SprVal::v1000> v1000{};
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
            constexpr Register::FieldValue<decltype(Spi1Br::sppr)::Type,SpprVal::v000> v000{};
            constexpr Register::FieldValue<decltype(Spi1Br::sppr)::Type,SpprVal::v001> v001{};
            constexpr Register::FieldValue<decltype(Spi1Br::sppr)::Type,SpprVal::v010> v010{};
            constexpr Register::FieldValue<decltype(Spi1Br::sppr)::Type,SpprVal::v011> v011{};
            constexpr Register::FieldValue<decltype(Spi1Br::sppr)::Type,SpprVal::v100> v100{};
            constexpr Register::FieldValue<decltype(Spi1Br::sppr)::Type,SpprVal::v101> v101{};
            constexpr Register::FieldValue<decltype(Spi1Br::sppr)::Type,SpprVal::v110> v110{};
            constexpr Register::FieldValue<decltype(Spi1Br::sppr)::Type,SpprVal::v111> v111{};
        }
    }
    namespace Spi1C2{    ///<SPI Control Register 2
        using Addr = Register::Address<0x40077002,0xffffff00,0x00000000,unsigned char>;
        ///SPI Pin Control 0
        enum class Spc0Val {
            v0=0x00000000,     ///<SPI uses separate pins for data input and data output (pin mode is normal). In master mode of operation: MISO is master in and MOSI is master out. In slave mode of operation: MISO is slave out and MOSI is slave in.
            v1=0x00000001,     ///<SPI configured for single-wire bidirectional operation (pin mode is bidirectional). In master mode of operation: MISO is not used by SPI; MOSI is master in when BIDIROE is 0 or master I/O when BIDIROE is 1. In slave mode of operation: MISO is slave in when BIDIROE is 0 or slave I/O when BIDIROE is 1; MOSI is not used by SPI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Spc0Val> spc0{}; 
        namespace Spc0ValC{
            constexpr Register::FieldValue<decltype(Spi1C2::spc0)::Type,Spc0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1C2::spc0)::Type,Spc0Val::v1> v1{};
        }
        ///SPI Stop in Wait Mode
        enum class SpiswaiVal {
            v0=0x00000000,     ///<SPI clocks continue to operate in Wait mode.
            v1=0x00000001,     ///<SPI clocks stop when the MCU enters Wait mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SpiswaiVal> spiswai{}; 
        namespace SpiswaiValC{
            constexpr Register::FieldValue<decltype(Spi1C2::spiswai)::Type,SpiswaiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1C2::spiswai)::Type,SpiswaiVal::v1> v1{};
        }
        ///Receive DMA enable
        enum class RxdmaeVal {
            v0=0x00000000,     ///<DMA request for receive is disabled and interrupt from SPRF is allowed
            v1=0x00000001,     ///<DMA request for receive is enabled and interrupt from SPRF is disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RxdmaeVal> rxdmae{}; 
        namespace RxdmaeValC{
            constexpr Register::FieldValue<decltype(Spi1C2::rxdmae)::Type,RxdmaeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1C2::rxdmae)::Type,RxdmaeVal::v1> v1{};
        }
        ///Bidirectional Mode Output Enable
        enum class BidiroeVal {
            v0=0x00000000,     ///<Output driver disabled so SPI data I/O pin acts as an input
            v1=0x00000001,     ///<SPI I/O pin enabled as an output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BidiroeVal> bidiroe{}; 
        namespace BidiroeValC{
            constexpr Register::FieldValue<decltype(Spi1C2::bidiroe)::Type,BidiroeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1C2::bidiroe)::Type,BidiroeVal::v1> v1{};
        }
        ///Master Mode-Fault Function Enable
        enum class ModfenVal {
            v0=0x00000000,     ///<Mode fault function disabled, master SS pin reverts to general-purpose I/O not controlled by SPI
            v1=0x00000001,     ///<Mode fault function enabled, master SS pin acts as the mode fault input or the slave select output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ModfenVal> modfen{}; 
        namespace ModfenValC{
            constexpr Register::FieldValue<decltype(Spi1C2::modfen)::Type,ModfenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1C2::modfen)::Type,ModfenVal::v1> v1{};
        }
        ///Transmit DMA enable
        enum class TxdmaeVal {
            v0=0x00000000,     ///<DMA request for transmit is disabled and interrupt from SPTEF is allowed
            v1=0x00000001,     ///<DMA request for transmit is enabled and interrupt from SPTEF is disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TxdmaeVal> txdmae{}; 
        namespace TxdmaeValC{
            constexpr Register::FieldValue<decltype(Spi1C2::txdmae)::Type,TxdmaeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1C2::txdmae)::Type,TxdmaeVal::v1> v1{};
        }
        ///SPI 8-bit or 16-bit mode
        enum class SpimodeVal {
            v0=0x00000000,     ///<8-bit SPI shift register, match register, and buffers
            v1=0x00000001,     ///<16-bit SPI shift register, match register, and buffers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,SpimodeVal> spimode{}; 
        namespace SpimodeValC{
            constexpr Register::FieldValue<decltype(Spi1C2::spimode)::Type,SpimodeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1C2::spimode)::Type,SpimodeVal::v1> v1{};
        }
        ///SPI Match Interrupt Enable
        enum class SpmieVal {
            v0=0x00000000,     ///<Interrupts from SPMF inhibited (use polling)
            v1=0x00000001,     ///<When SPMF is 1, requests a hardware interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SpmieVal> spmie{}; 
        namespace SpmieValC{
            constexpr Register::FieldValue<decltype(Spi1C2::spmie)::Type,SpmieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1C2::spmie)::Type,SpmieVal::v1> v1{};
        }
    }
    namespace Spi1C1{    ///<SPI Control Register 1
        using Addr = Register::Address<0x40077003,0xffffff00,0x00000000,unsigned char>;
        ///LSB First (shifter direction)
        enum class LsbfeVal {
            v0=0x00000000,     ///<SPI serial data transfers start with the most significant bit.
            v1=0x00000001,     ///<SPI serial data transfers start with the least significant bit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,LsbfeVal> lsbfe{}; 
        namespace LsbfeValC{
            constexpr Register::FieldValue<decltype(Spi1C1::lsbfe)::Type,LsbfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1C1::lsbfe)::Type,LsbfeVal::v1> v1{};
        }
        ///Slave Select Output Enable
        enum class SsoeVal {
            v0=0x00000000,     ///<When C2[MODFEN] is 0: In master mode, SS pin function is general-purpose I/O (not SPI). In slave mode, SS pin function is slave select input. When C2[MODFEN] is 1: In master mode, SS pin function is SS input for mode fault. In slave mode, SS pin function is slave select input.
            v1=0x00000001,     ///<When C2[MODFEN] is 0: In master mode, SS pin function is general-purpose I/O (not SPI). In slave mode, SS pin function is slave select input. When C2[MODFEN] is 1: In master mode, SS pin function is automatic SS output. In slave mode: SS pin function is slave select input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SsoeVal> ssoe{}; 
        namespace SsoeValC{
            constexpr Register::FieldValue<decltype(Spi1C1::ssoe)::Type,SsoeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1C1::ssoe)::Type,SsoeVal::v1> v1{};
        }
        ///Clock Phase
        enum class CphaVal {
            v0=0x00000000,     ///<First edge on SPSCK occurs at the middle of the first cycle of a data transfer.
            v1=0x00000001,     ///<First edge on SPSCK occurs at the start of the first cycle of a data transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CphaVal> cpha{}; 
        namespace CphaValC{
            constexpr Register::FieldValue<decltype(Spi1C1::cpha)::Type,CphaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1C1::cpha)::Type,CphaVal::v1> v1{};
        }
        ///Clock Polarity
        enum class CpolVal {
            v0=0x00000000,     ///<Active-high SPI clock (idles low)
            v1=0x00000001,     ///<Active-low SPI clock (idles high)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CpolVal> cpol{}; 
        namespace CpolValC{
            constexpr Register::FieldValue<decltype(Spi1C1::cpol)::Type,CpolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1C1::cpol)::Type,CpolVal::v1> v1{};
        }
        ///Master/Slave Mode Select
        enum class MstrVal {
            v0=0x00000000,     ///<SPI module configured as a slave SPI device
            v1=0x00000001,     ///<SPI module configured as a master SPI device
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,MstrVal> mstr{}; 
        namespace MstrValC{
            constexpr Register::FieldValue<decltype(Spi1C1::mstr)::Type,MstrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1C1::mstr)::Type,MstrVal::v1> v1{};
        }
        ///SPI Transmit Interrupt Enable
        enum class SptieVal {
            v0=0x00000000,     ///<Interrupts from SPTEF inhibited (use polling)
            v1=0x00000001,     ///<When SPTEF is 1, hardware interrupt requested
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SptieVal> sptie{}; 
        namespace SptieValC{
            constexpr Register::FieldValue<decltype(Spi1C1::sptie)::Type,SptieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1C1::sptie)::Type,SptieVal::v1> v1{};
        }
        ///SPI System Enable
        enum class SpeVal {
            v0=0x00000000,     ///<SPI system inactive
            v1=0x00000001,     ///<SPI system enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,SpeVal> spe{}; 
        namespace SpeValC{
            constexpr Register::FieldValue<decltype(Spi1C1::spe)::Type,SpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1C1::spe)::Type,SpeVal::v1> v1{};
        }
        ///SPI Interrupt Enable: for SPRF and MODF (when FIFO is not supported or not enabled) or for read FIFO (when FIFO is supported and enabled)
        enum class SpieVal {
            v0=0x00000000,     ///<Interrupts from SPRF and MODF are inhibited-use polling (when FIFOMODE is not present or is 0) or Read FIFO Full Interrupts are disabled (when FIFOMODE is 1)
            v1=0x00000001,     ///<Request a hardware interrupt when SPRF or MODF is 1 (when FIFOMODE is not present or is 0) or Read FIFO Full Interrupts are enabled (when FIFOMODE is 1)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SpieVal> spie{}; 
        namespace SpieValC{
            constexpr Register::FieldValue<decltype(Spi1C1::spie)::Type,SpieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1C1::spie)::Type,SpieVal::v1> v1{};
        }
    }
    namespace Spi1Ml{    ///<SPI Match Register low
        using Addr = Register::Address<0x40077004,0xffffff00,0x00000000,unsigned char>;
        ///Hardware compare value (low byte)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bits{}; 
    }
    namespace Spi1Mh{    ///<SPI match register high
        using Addr = Register::Address<0x40077005,0xffffff00,0x00000000,unsigned char>;
        ///Hardware compare value (high byte)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bits{}; 
    }
    namespace Spi1Dl{    ///<SPI Data Register low
        using Addr = Register::Address<0x40077006,0xffffff00,0x00000000,unsigned char>;
        ///Data (low byte)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bits{}; 
    }
    namespace Spi1Dh{    ///<SPI data register high
        using Addr = Register::Address<0x40077007,0xffffff00,0x00000000,unsigned char>;
        ///Data (high byte)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bits{}; 
    }
    namespace Spi1Ci{    ///<SPI clear interrupt register
        using Addr = Register::Address<0x4007700a,0xffffff00,0x00000000,unsigned char>;
        ///Receive FIFO full flag clear interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sprfci{}; 
        ///Transmit FIFO empty flag clear interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sptefci{}; 
        ///Receive FIFO nearly full flag clear interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rnfullfci{}; 
        ///Transmit FIFO nearly empty flag clear interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tnearefci{}; 
        ///Receive FIFO overflow flag
        enum class RxfofVal {
            v0=0x00000000,     ///<Receive FIFO overflow condition has not occurred
            v1=0x00000001,     ///<Receive FIFO overflow condition occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,RxfofVal> rxfof{}; 
        namespace RxfofValC{
            constexpr Register::FieldValue<decltype(Spi1Ci::rxfof)::Type,RxfofVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1Ci::rxfof)::Type,RxfofVal::v1> v1{};
        }
        ///Transmit FIFO overflow flag
        enum class TxfofVal {
            v0=0x00000000,     ///<Transmit FIFO overflow condition has not occurred
            v1=0x00000001,     ///<Transmit FIFO overflow condition occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TxfofVal> txfof{}; 
        namespace TxfofValC{
            constexpr Register::FieldValue<decltype(Spi1Ci::txfof)::Type,TxfofVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1Ci::txfof)::Type,TxfofVal::v1> v1{};
        }
        ///Receive FIFO error flag
        enum class RxferrVal {
            v0=0x00000000,     ///<No receive FIFO error occurred
            v1=0x00000001,     ///<A receive FIFO error occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,RxferrVal> rxferr{}; 
        namespace RxferrValC{
            constexpr Register::FieldValue<decltype(Spi1Ci::rxferr)::Type,RxferrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1Ci::rxferr)::Type,RxferrVal::v1> v1{};
        }
        ///Transmit FIFO error flag
        enum class TxferrVal {
            v0=0x00000000,     ///<No transmit FIFO error occurred
            v1=0x00000001,     ///<A transmit FIFO error occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TxferrVal> txferr{}; 
        namespace TxferrValC{
            constexpr Register::FieldValue<decltype(Spi1Ci::txferr)::Type,TxferrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1Ci::txferr)::Type,TxferrVal::v1> v1{};
        }
    }
    namespace Spi1C3{    ///<SPI control register 3
        using Addr = Register::Address<0x4007700b,0xffffffc0,0x00000000,unsigned char>;
        ///FIFO mode enable
        enum class FifomodeVal {
            v0=0x00000000,     ///<Buffer mode disabled
            v1=0x00000001,     ///<Data available in the receive data buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FifomodeVal> fifomode{}; 
        namespace FifomodeValC{
            constexpr Register::FieldValue<decltype(Spi1C3::fifomode)::Type,FifomodeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1C3::fifomode)::Type,FifomodeVal::v1> v1{};
        }
        ///Receive FIFO nearly full interrupt enable
        enum class RnfullienVal {
            v0=0x00000000,     ///<No interrupt upon RNFULLF being set
            v1=0x00000001,     ///<Enable interrupts upon RNFULLF being set
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RnfullienVal> rnfullien{}; 
        namespace RnfullienValC{
            constexpr Register::FieldValue<decltype(Spi1C3::rnfullien)::Type,RnfullienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1C3::rnfullien)::Type,RnfullienVal::v1> v1{};
        }
        ///Transmit FIFO nearly empty interrupt enable
        enum class TnearienVal {
            v0=0x00000000,     ///<No interrupt upon TNEAREF being set
            v1=0x00000001,     ///<Enable interrupts upon TNEAREF being set
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TnearienVal> tnearien{}; 
        namespace TnearienValC{
            constexpr Register::FieldValue<decltype(Spi1C3::tnearien)::Type,TnearienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1C3::tnearien)::Type,TnearienVal::v1> v1{};
        }
        ///Interrupt clearing mechanism select
        enum class IntclrVal {
            v0=0x00000000,     ///<These interrupts are cleared when the corresponding flags are cleared depending on the state of the FIFOs
            v1=0x00000001,     ///<These interrupts are cleared by writing the corresponding bits in the CI register
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,IntclrVal> intclr{}; 
        namespace IntclrValC{
            constexpr Register::FieldValue<decltype(Spi1C3::intclr)::Type,IntclrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1C3::intclr)::Type,IntclrVal::v1> v1{};
        }
        ///Receive FIFO nearly full watermark
        enum class RnfullfmarkVal {
            v0=0x00000000,     ///<RNFULLF is set when the receive FIFO has 48 bits or more
            v1=0x00000001,     ///<RNFULLF is set when the receive FIFO has 32 bits or more
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,RnfullfmarkVal> rnfullfMark{}; 
        namespace RnfullfmarkValC{
            constexpr Register::FieldValue<decltype(Spi1C3::rnfullfMark)::Type,RnfullfmarkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1C3::rnfullfMark)::Type,RnfullfmarkVal::v1> v1{};
        }
        ///Transmit FIFO nearly empty watermark
        enum class TnearefmarkVal {
            v0=0x00000000,     ///<TNEAREF is set when the transmit FIFO has 16 bits or less
            v1=0x00000001,     ///<TNEAREF is set when the transmit FIFO has 32 bits or less
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TnearefmarkVal> tnearefMark{}; 
        namespace TnearefmarkValC{
            constexpr Register::FieldValue<decltype(Spi1C3::tnearefMark)::Type,TnearefmarkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(Spi1C3::tnearefMark)::Type,TnearefmarkVal::v1> v1{};
        }
    }
}
