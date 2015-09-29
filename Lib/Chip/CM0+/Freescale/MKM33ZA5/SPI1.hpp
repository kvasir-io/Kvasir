#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial Peripheral Interface
    namespace Spi1S{    ///<SPI Status Register
        using Addr = Register::Address<0x40076000,0xffffff00,0,unsigned char>;
        ///SPI read FIFO empty flag
        enum class rfifoefVal {
            v0=0x00000000,     ///<Read FIFO has data. Reads of the DH:DL registers in 16-bit mode or the DL register in 8-bit mode will empty the read FIFO.
            v1=0x00000001,     ///<Read FIFO is empty.
        };
        namespace rfifoefValC{
            constexpr MPL::Value<rfifoefVal,rfifoefVal::v0> v0{};
            constexpr MPL::Value<rfifoefVal,rfifoefVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rfifoefVal> rfifoef{}; 
        ///Transmit FIFO full flag
        enum class txfullfVal {
            v0=0x00000000,     ///<Transmit FIFO has less than 8 bytes
            v1=0x00000001,     ///<Transmit FIFO has 8 bytes of data
        };
        namespace txfullfValC{
            constexpr MPL::Value<txfullfVal,txfullfVal::v0> v0{};
            constexpr MPL::Value<txfullfVal,txfullfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,txfullfVal> txfullf{}; 
        ///Transmit FIFO nearly empty flag
        enum class tnearefVal {
            v0=0x00000000,     ///<Transmit FIFO has more than 16 bits (when C3[5] is 0) or more than 32 bits (when C3[5] is 1) remaining to transmit
            v1=0x00000001,     ///<Transmit FIFO has an amount of data equal to or less than 16 bits (when C3[5] is 0) or 32 bits (when C3[5] is 1) remaining to transmit
        };
        namespace tnearefValC{
            constexpr MPL::Value<tnearefVal,tnearefVal::v0> v0{};
            constexpr MPL::Value<tnearefVal,tnearefVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,tnearefVal> tnearef{}; 
        ///Receive FIFO nearly full flag
        enum class rnfullfVal {
            v0=0x00000000,     ///<Receive FIFO has received less than 48 bits (when C3[4] is 0) or less than 32 bits (when C3[4] is 1)
            v1=0x00000001,     ///<Receive FIFO has received data of an amount equal to or greater than 48 bits (when C3[4] is 0) or 32 bits (when C3[4] is 1)
        };
        namespace rnfullfValC{
            constexpr MPL::Value<rnfullfVal,rnfullfVal::v0> v0{};
            constexpr MPL::Value<rnfullfVal,rnfullfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,rnfullfVal> rnfullf{}; 
        ///Master Mode Fault Flag
        enum class modfVal {
            v0=0x00000000,     ///<No mode fault error
            v1=0x00000001,     ///<Mode fault error detected
        };
        namespace modfValC{
            constexpr MPL::Value<modfVal,modfVal::v0> v0{};
            constexpr MPL::Value<modfVal,modfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,modfVal> modf{}; 
        ///SPI Transmit Buffer Empty Flag (when FIFO is not supported or not enabled) or SPI transmit FIFO empty flag (when FIFO is supported and enabled)
        enum class sptefVal {
            v0=0x00000000,     ///<SPI transmit buffer not empty (when FIFOMODE is not present or is 0) or SPI FIFO not empty (when FIFOMODE is 1)
            v1=0x00000001,     ///<SPI transmit buffer empty (when FIFOMODE is not present or is 0) or SPI FIFO empty (when FIFOMODE is 1)
        };
        namespace sptefValC{
            constexpr MPL::Value<sptefVal,sptefVal::v0> v0{};
            constexpr MPL::Value<sptefVal,sptefVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,sptefVal> sptef{}; 
        ///SPI Match Flag
        enum class spmfVal {
            v0=0x00000000,     ///<Value in the receive data buffer does not match the value in the MH:ML registers
            v1=0x00000001,     ///<Value in the receive data buffer matches the value in the MH:ML registers
        };
        namespace spmfValC{
            constexpr MPL::Value<spmfVal,spmfVal::v0> v0{};
            constexpr MPL::Value<spmfVal,spmfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,spmfVal> spmf{}; 
        ///SPI Read Buffer Full Flag (when FIFO is not supported or not enabled) or SPI read FIFO FULL flag (when FIFO is supported and enabled)
        enum class sprfVal {
            v0=0x00000000,     ///<No data available in the receive data buffer (when FIFOMODE is not present or is 0) or Read FIFO is not full (when FIFOMODE is 1)
            v1=0x00000001,     ///<Data available in the receive data buffer (when FIFOMODE is not present or is 0) or Read FIFO is full (when FIFOMODE is 1)
        };
        namespace sprfValC{
            constexpr MPL::Value<sprfVal,sprfVal::v0> v0{};
            constexpr MPL::Value<sprfVal,sprfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,sprfVal> sprf{}; 
    }
    namespace Spi1Br{    ///<SPI Baud Rate Register
        using Addr = Register::Address<0x40076001,0xffffff80,0,unsigned char>;
        ///SPI Baud Rate Divisor
        enum class sprVal {
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
        namespace sprValC{
            constexpr MPL::Value<sprVal,sprVal::v0000> v0000{};
            constexpr MPL::Value<sprVal,sprVal::v0001> v0001{};
            constexpr MPL::Value<sprVal,sprVal::v0010> v0010{};
            constexpr MPL::Value<sprVal,sprVal::v0011> v0011{};
            constexpr MPL::Value<sprVal,sprVal::v0100> v0100{};
            constexpr MPL::Value<sprVal,sprVal::v0101> v0101{};
            constexpr MPL::Value<sprVal,sprVal::v0110> v0110{};
            constexpr MPL::Value<sprVal,sprVal::v0111> v0111{};
            constexpr MPL::Value<sprVal,sprVal::v1000> v1000{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,sprVal> spr{}; 
        ///SPI Baud Rate Prescale Divisor
        enum class spprVal {
            v000=0x00000000,     ///<Baud rate prescaler divisor is 1.
            v001=0x00000001,     ///<Baud rate prescaler divisor is 2.
            v010=0x00000002,     ///<Baud rate prescaler divisor is 3.
            v011=0x00000003,     ///<Baud rate prescaler divisor is 4.
            v100=0x00000004,     ///<Baud rate prescaler divisor is 5.
            v101=0x00000005,     ///<Baud rate prescaler divisor is 6.
            v110=0x00000006,     ///<Baud rate prescaler divisor is 7.
            v111=0x00000007,     ///<Baud rate prescaler divisor is 8.
        };
        namespace spprValC{
            constexpr MPL::Value<spprVal,spprVal::v000> v000{};
            constexpr MPL::Value<spprVal,spprVal::v001> v001{};
            constexpr MPL::Value<spprVal,spprVal::v010> v010{};
            constexpr MPL::Value<spprVal,spprVal::v011> v011{};
            constexpr MPL::Value<spprVal,spprVal::v100> v100{};
            constexpr MPL::Value<spprVal,spprVal::v101> v101{};
            constexpr MPL::Value<spprVal,spprVal::v110> v110{};
            constexpr MPL::Value<spprVal,spprVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,spprVal> sppr{}; 
    }
    namespace Spi1C2{    ///<SPI Control Register 2
        using Addr = Register::Address<0x40076002,0xffffff00,0,unsigned char>;
        ///SPI Pin Control 0
        enum class spc0Val {
            v0=0x00000000,     ///<SPI uses separate pins for data input and data output (pin mode is normal). In master mode of operation: MISO is master in and MOSI is master out. In slave mode of operation: MISO is slave out and MOSI is slave in.
            v1=0x00000001,     ///<SPI configured for single-wire bidirectional operation (pin mode is bidirectional). In master mode of operation: MISO is not used by SPI; MOSI is master in when BIDIROE is 0 or master I/O when BIDIROE is 1. In slave mode of operation: MISO is slave in when BIDIROE is 0 or slave I/O when BIDIROE is 1; MOSI is not used by SPI.
        };
        namespace spc0ValC{
            constexpr MPL::Value<spc0Val,spc0Val::v0> v0{};
            constexpr MPL::Value<spc0Val,spc0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,spc0Val> spc0{}; 
        ///SPI Stop in Wait Mode
        enum class spiswaiVal {
            v0=0x00000000,     ///<SPI clocks continue to operate in Wait mode.
            v1=0x00000001,     ///<SPI clocks stop when the MCU enters Wait mode.
        };
        namespace spiswaiValC{
            constexpr MPL::Value<spiswaiVal,spiswaiVal::v0> v0{};
            constexpr MPL::Value<spiswaiVal,spiswaiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,spiswaiVal> spiswai{}; 
        ///Receive DMA enable
        enum class rxdmaeVal {
            v0=0x00000000,     ///<DMA request for receive is disabled and interrupt from SPRF is allowed
            v1=0x00000001,     ///<DMA request for receive is enabled and interrupt from SPRF is disabled
        };
        namespace rxdmaeValC{
            constexpr MPL::Value<rxdmaeVal,rxdmaeVal::v0> v0{};
            constexpr MPL::Value<rxdmaeVal,rxdmaeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rxdmaeVal> rxdmae{}; 
        ///Bidirectional Mode Output Enable
        enum class bidiroeVal {
            v0=0x00000000,     ///<Output driver disabled so SPI data I/O pin acts as an input
            v1=0x00000001,     ///<SPI I/O pin enabled as an output
        };
        namespace bidiroeValC{
            constexpr MPL::Value<bidiroeVal,bidiroeVal::v0> v0{};
            constexpr MPL::Value<bidiroeVal,bidiroeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bidiroeVal> bidiroe{}; 
        ///Master Mode-Fault Function Enable
        enum class modfenVal {
            v0=0x00000000,     ///<Mode fault function disabled, master SS pin reverts to general-purpose I/O not controlled by SPI
            v1=0x00000001,     ///<Mode fault function enabled, master SS pin acts as the mode fault input or the slave select output
        };
        namespace modfenValC{
            constexpr MPL::Value<modfenVal,modfenVal::v0> v0{};
            constexpr MPL::Value<modfenVal,modfenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,modfenVal> modfen{}; 
        ///Transmit DMA enable
        enum class txdmaeVal {
            v0=0x00000000,     ///<DMA request for transmit is disabled and interrupt from SPTEF is allowed
            v1=0x00000001,     ///<DMA request for transmit is enabled and interrupt from SPTEF is disabled
        };
        namespace txdmaeValC{
            constexpr MPL::Value<txdmaeVal,txdmaeVal::v0> v0{};
            constexpr MPL::Value<txdmaeVal,txdmaeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,txdmaeVal> txdmae{}; 
        ///SPI 8-bit or 16-bit mode
        enum class spimodeVal {
            v0=0x00000000,     ///<8-bit SPI shift register, match register, and buffers
            v1=0x00000001,     ///<16-bit SPI shift register, match register, and buffers
        };
        namespace spimodeValC{
            constexpr MPL::Value<spimodeVal,spimodeVal::v0> v0{};
            constexpr MPL::Value<spimodeVal,spimodeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,spimodeVal> spimode{}; 
        ///SPI Match Interrupt Enable
        enum class spmieVal {
            v0=0x00000000,     ///<Interrupts from SPMF inhibited (use polling)
            v1=0x00000001,     ///<When SPMF is 1, requests a hardware interrupt
        };
        namespace spmieValC{
            constexpr MPL::Value<spmieVal,spmieVal::v0> v0{};
            constexpr MPL::Value<spmieVal,spmieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,spmieVal> spmie{}; 
    }
    namespace Spi1C1{    ///<SPI Control Register 1
        using Addr = Register::Address<0x40076003,0xffffff00,0,unsigned char>;
        ///LSB First (shifter direction)
        enum class lsbfeVal {
            v0=0x00000000,     ///<SPI serial data transfers start with the most significant bit.
            v1=0x00000001,     ///<SPI serial data transfers start with the least significant bit.
        };
        namespace lsbfeValC{
            constexpr MPL::Value<lsbfeVal,lsbfeVal::v0> v0{};
            constexpr MPL::Value<lsbfeVal,lsbfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,lsbfeVal> lsbfe{}; 
        ///Slave Select Output Enable
        enum class ssoeVal {
            v0=0x00000000,     ///<When C2[MODFEN] is 0: In master mode, SS pin function is general-purpose I/O (not SPI). In slave mode, SS pin function is slave select input. When C2[MODFEN] is 1: In master mode, SS pin function is SS input for mode fault. In slave mode, SS pin function is slave select input.
            v1=0x00000001,     ///<When C2[MODFEN] is 0: In master mode, SS pin function is general-purpose I/O (not SPI). In slave mode, SS pin function is slave select input. When C2[MODFEN] is 1: In master mode, SS pin function is automatic SS output. In slave mode: SS pin function is slave select input.
        };
        namespace ssoeValC{
            constexpr MPL::Value<ssoeVal,ssoeVal::v0> v0{};
            constexpr MPL::Value<ssoeVal,ssoeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ssoeVal> ssoe{}; 
        ///Clock Phase
        enum class cphaVal {
            v0=0x00000000,     ///<First edge on SPSCK occurs at the middle of the first cycle of a data transfer.
            v1=0x00000001,     ///<First edge on SPSCK occurs at the start of the first cycle of a data transfer.
        };
        namespace cphaValC{
            constexpr MPL::Value<cphaVal,cphaVal::v0> v0{};
            constexpr MPL::Value<cphaVal,cphaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cphaVal> cpha{}; 
        ///Clock Polarity
        enum class cpolVal {
            v0=0x00000000,     ///<Active-high SPI clock (idles low)
            v1=0x00000001,     ///<Active-low SPI clock (idles high)
        };
        namespace cpolValC{
            constexpr MPL::Value<cpolVal,cpolVal::v0> v0{};
            constexpr MPL::Value<cpolVal,cpolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,cpolVal> cpol{}; 
        ///Master/Slave Mode Select
        enum class mstrVal {
            v0=0x00000000,     ///<SPI module configured as a slave SPI device
            v1=0x00000001,     ///<SPI module configured as a master SPI device
        };
        namespace mstrValC{
            constexpr MPL::Value<mstrVal,mstrVal::v0> v0{};
            constexpr MPL::Value<mstrVal,mstrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,mstrVal> mstr{}; 
        ///SPI Transmit Interrupt Enable
        enum class sptieVal {
            v0=0x00000000,     ///<Interrupts from SPTEF inhibited (use polling)
            v1=0x00000001,     ///<When SPTEF is 1, hardware interrupt requested
        };
        namespace sptieValC{
            constexpr MPL::Value<sptieVal,sptieVal::v0> v0{};
            constexpr MPL::Value<sptieVal,sptieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,sptieVal> sptie{}; 
        ///SPI System Enable
        enum class speVal {
            v0=0x00000000,     ///<SPI system inactive
            v1=0x00000001,     ///<SPI system enabled
        };
        namespace speValC{
            constexpr MPL::Value<speVal,speVal::v0> v0{};
            constexpr MPL::Value<speVal,speVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,speVal> spe{}; 
        ///SPI Interrupt Enable: for SPRF and MODF (when FIFO is not supported or not enabled) or for read FIFO (when FIFO is supported and enabled)
        enum class spieVal {
            v0=0x00000000,     ///<Interrupts from SPRF and MODF are inhibited-use polling (when FIFOMODE is not present or is 0) or Read FIFO Full Interrupts are disabled (when FIFOMODE is 1)
            v1=0x00000001,     ///<Request a hardware interrupt when SPRF or MODF is 1 (when FIFOMODE is not present or is 0) or Read FIFO Full Interrupts are enabled (when FIFOMODE is 1)
        };
        namespace spieValC{
            constexpr MPL::Value<spieVal,spieVal::v0> v0{};
            constexpr MPL::Value<spieVal,spieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,spieVal> spie{}; 
    }
    namespace Spi1Ml{    ///<SPI Match Register low
        using Addr = Register::Address<0x40076004,0xffffff00,0,unsigned char>;
        ///Hardware compare value (low byte)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bits{}; 
    }
    namespace Spi1Mh{    ///<SPI match register high
        using Addr = Register::Address<0x40076005,0xffffff00,0,unsigned char>;
        ///Hardware compare value (high byte)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bits{}; 
    }
    namespace Spi1Dl{    ///<SPI Data Register low
        using Addr = Register::Address<0x40076006,0xffffff00,0,unsigned char>;
        ///Data (low byte)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bits{}; 
    }
    namespace Spi1Dh{    ///<SPI data register high
        using Addr = Register::Address<0x40076007,0xffffff00,0,unsigned char>;
        ///Data (high byte)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bits{}; 
    }
    namespace Spi1Ci{    ///<SPI clear interrupt register
        using Addr = Register::Address<0x4007600a,0xffffff00,0,unsigned char>;
        ///Receive FIFO full flag clear interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sprfci{}; 
        ///Transmit FIFO empty flag clear interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sptefci{}; 
        ///Receive FIFO nearly full flag clear interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rnfullfci{}; 
        ///Transmit FIFO nearly empty flag clear interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tnearefci{}; 
        ///Receive FIFO overflow flag
        enum class rxfofVal {
            v0=0x00000000,     ///<Receive FIFO overflow condition has not occurred
            v1=0x00000001,     ///<Receive FIFO overflow condition occurred
        };
        namespace rxfofValC{
            constexpr MPL::Value<rxfofVal,rxfofVal::v0> v0{};
            constexpr MPL::Value<rxfofVal,rxfofVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,rxfofVal> rxfof{}; 
        ///Transmit FIFO overflow flag
        enum class txfofVal {
            v0=0x00000000,     ///<Transmit FIFO overflow condition has not occurred
            v1=0x00000001,     ///<Transmit FIFO overflow condition occurred
        };
        namespace txfofValC{
            constexpr MPL::Value<txfofVal,txfofVal::v0> v0{};
            constexpr MPL::Value<txfofVal,txfofVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,txfofVal> txfof{}; 
        ///Receive FIFO error flag
        enum class rxferrVal {
            v0=0x00000000,     ///<No receive FIFO error occurred
            v1=0x00000001,     ///<A receive FIFO error occurred
        };
        namespace rxferrValC{
            constexpr MPL::Value<rxferrVal,rxferrVal::v0> v0{};
            constexpr MPL::Value<rxferrVal,rxferrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rxferrVal> rxferr{}; 
        ///Transmit FIFO error flag
        enum class txferrVal {
            v0=0x00000000,     ///<No transmit FIFO error occurred
            v1=0x00000001,     ///<A transmit FIFO error occurred
        };
        namespace txferrValC{
            constexpr MPL::Value<txferrVal,txferrVal::v0> v0{};
            constexpr MPL::Value<txferrVal,txferrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,txferrVal> txferr{}; 
    }
    namespace Spi1C3{    ///<SPI control register 3
        using Addr = Register::Address<0x4007600b,0xffffffc0,0,unsigned char>;
        ///FIFO mode enable
        enum class fifomodeVal {
            v0=0x00000000,     ///<Buffer mode disabled
            v1=0x00000001,     ///<Data available in the receive data buffer
        };
        namespace fifomodeValC{
            constexpr MPL::Value<fifomodeVal,fifomodeVal::v0> v0{};
            constexpr MPL::Value<fifomodeVal,fifomodeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,fifomodeVal> fifomode{}; 
        ///Receive FIFO nearly full interrupt enable
        enum class rnfullienVal {
            v0=0x00000000,     ///<No interrupt upon RNFULLF being set
            v1=0x00000001,     ///<Enable interrupts upon RNFULLF being set
        };
        namespace rnfullienValC{
            constexpr MPL::Value<rnfullienVal,rnfullienVal::v0> v0{};
            constexpr MPL::Value<rnfullienVal,rnfullienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rnfullienVal> rnfullien{}; 
        ///Transmit FIFO nearly empty interrupt enable
        enum class tnearienVal {
            v0=0x00000000,     ///<No interrupt upon TNEAREF being set
            v1=0x00000001,     ///<Enable interrupts upon TNEAREF being set
        };
        namespace tnearienValC{
            constexpr MPL::Value<tnearienVal,tnearienVal::v0> v0{};
            constexpr MPL::Value<tnearienVal,tnearienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,tnearienVal> tnearien{}; 
        ///Interrupt clearing mechanism select
        enum class intclrVal {
            v0=0x00000000,     ///<These interrupts are cleared when the corresponding flags are cleared depending on the state of the FIFOs
            v1=0x00000001,     ///<These interrupts are cleared by writing the corresponding bits in the CI register
        };
        namespace intclrValC{
            constexpr MPL::Value<intclrVal,intclrVal::v0> v0{};
            constexpr MPL::Value<intclrVal,intclrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,intclrVal> intclr{}; 
        ///Receive FIFO nearly full watermark
        enum class rnfullfMarkVal {
            v0=0x00000000,     ///<RNFULLF is set when the receive FIFO has 48 bits or more
            v1=0x00000001,     ///<RNFULLF is set when the receive FIFO has 32 bits or more
        };
        namespace rnfullfMarkValC{
            constexpr MPL::Value<rnfullfMarkVal,rnfullfMarkVal::v0> v0{};
            constexpr MPL::Value<rnfullfMarkVal,rnfullfMarkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,rnfullfMarkVal> rnfullfMark{}; 
        ///Transmit FIFO nearly empty watermark
        enum class tnearefMarkVal {
            v0=0x00000000,     ///<TNEAREF is set when the transmit FIFO has 16 bits or less
            v1=0x00000001,     ///<TNEAREF is set when the transmit FIFO has 32 bits or less
        };
        namespace tnearefMarkValC{
            constexpr MPL::Value<tnearefMarkVal,tnearefMarkVal::v0> v0{};
            constexpr MPL::Value<tnearefMarkVal,tnearefMarkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,tnearefMarkVal> tnearefMark{}; 
    }
}
