#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//I2S
    namespace Nonerxfdat{    ///<Receive FIFO Register
        using Addr = Register::Address<0x4006c000,0x00000000,0,unsigned>;
        ///Words received from the serial bus are written to the receive FIFO
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxdata{}; 
    }
    namespace Nonetxfdat{    ///<Transmit FIFO Register
        using Addr = Register::Address<0x4006c004,0x00000000,0,unsigned>;
        ///As long as the transmit FIFO is not full, the words to be transmitted can be written.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txdata{}; 
    }
    namespace Nonecntreg{    ///<Control Register
        using Addr = Register::Address<0x4006c008,0x00008000,0,unsigned>;
        ///When operating in master mode, this sets the clock division ratio for output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> ckrt{}; 
        ///Following the valid data of the frame, it can insert OVERHEAD bits to enable adjustment of the frame rate.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> ovhd{}; 
        ///This sets the serial output data of the invalid transmit frames
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mskb{}; 
        ///This sets master or slave mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> msmd{}; 
        ///This specifies the subframe configuration (number of subframes) of the frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sbfn{}; 
        ///This sets the FIFO word configuration to one or two words
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rhll{}; 
        ///In master mode, this selects the base clock divider.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eckm{}; 
        ///When the receive word length is smaller than the FIFO word length, this sets the upper bit extension mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bext{}; 
        ///This sets the output mode of the frame sync signal
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> frun{}; 
        ///This sets word bit shift order
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mlsb{}; 
        ///This enables or disables the transmit function
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txdis{}; 
        ///This enables or disables the receive function
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxdis{}; 
        ///This specifies the point where data is sampled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> smpl{}; 
        ///This specifies the I2SCK polarity where drive sampling of the serial data is performed
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///This specifies the phase for I2SWS frame data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fsph{}; 
        ///This specifies the pulse width of I2SWS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fsln{}; 
        ///This sets the polarity of the I2SWS pin
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fspl{}; 
    }
    namespace Nonemcr0reg{    ///<Channel Control Register 0
        using Addr = Register::Address<0x4006c00c,0x80008000,0,unsigned>;
        ///This sets the number of channels for subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> s1chn{}; 
        ///This sets the channel length of the channels that make up subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> s1chl{}; 
        ///This sets the word length of the channels that make up subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> s1wdl{}; 
        ///This sets the number of channels for subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> s0chn{}; 
        ///This sets the channel length of the channels that make up subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> s0chl{}; 
        ///This sets the word length of the channels that make up subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> s0wdl{}; 
    }
    namespace Nonemcr1reg{    ///<Channel Control Register 1
        using Addr = Register::Address<0x4006c010,0x00000000,0,unsigned>;
        ///This controls the enable/disable state of the channel 31 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> s0ch31{}; 
        ///This controls the enable/disable state of the channel 30 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> s0ch30{}; 
        ///This controls the enable/disable state of the channel 29 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> s0ch29{}; 
        ///This controls the enable/disable state of the channel 28 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> s0ch28{}; 
        ///This controls the enable/disable state of the channel 27 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> s0ch27{}; 
        ///This controls the enable/disable state of the channel 26 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> s0ch26{}; 
        ///This controls the enable/disable state of the channel 25 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> s0ch25{}; 
        ///This controls the enable/disable state of the channel 24 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> s0ch24{}; 
        ///This controls the enable/disable state of the channel 23 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> s0ch23{}; 
        ///This controls the enable/disable state of the channel 22 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> s0ch22{}; 
        ///This controls the enable/disable state of the channel 21 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> s0ch21{}; 
        ///This controls the enable/disable state of the channel 20 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> s0ch20{}; 
        ///This controls the enable/disable state of the channel 19 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> s0ch19{}; 
        ///This controls the enable/disable state of the channel 18 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> s0ch18{}; 
        ///This controls the enable/disable state of the channel 17 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> s0ch17{}; 
        ///This controls the enable/disable state of the channel 16 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> s0ch16{}; 
        ///This controls the enable/disable state of the channel 15 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> s0ch15{}; 
        ///This controls the enable/disable state of the channel 14 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> s0ch14{}; 
        ///This controls the enable/disable state of the channel 13 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> s0ch13{}; 
        ///This controls the enable/disable state of the channel 12 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> s0ch12{}; 
        ///This controls the enable/disable state of the channel 11 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> s0ch11{}; 
        ///This controls the enable/disable state of the channel 10 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> s0ch10{}; 
        ///This controls the enable/disable state of the channel 9 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> s0ch09{}; 
        ///This controls the enable/disable state of the channel 8 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> s0ch08{}; 
        ///This controls the enable/disable state of the channel 7 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> s0ch07{}; 
        ///This controls the enable/disable state of the channel 6 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> s0ch06{}; 
        ///This controls the enable/disable state of the channel 5 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> s0ch05{}; 
        ///This controls the enable/disable state of the channel 4 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> s0ch04{}; 
        ///This controls the enable/disable state of the channel 3 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> s0ch03{}; 
        ///This controls the enable/disable state of the channel 2 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> s0ch02{}; 
        ///This controls the enable/disable state of the channel 1 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> s0ch01{}; 
        ///This controls the enable/disable state of the channel 0 in subframe 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> s0ch00{}; 
    }
    namespace Nonemcr2reg{    ///<Channel Control Register 2
        using Addr = Register::Address<0x4006c014,0x00000000,0,unsigned>;
        ///This controls the enable/disable state of the channel 31 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> s1ch31{}; 
        ///This controls the enable/disable state of the channel 30 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> s1ch30{}; 
        ///This controls the enable/disable state of the channel 29 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> s1ch29{}; 
        ///This controls the enable/disable state of the channel 28 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> s1ch28{}; 
        ///This controls the enable/disable state of the channel 27 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> s1ch27{}; 
        ///This controls the enable/disable state of the channel 26 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> s1ch26{}; 
        ///This controls the enable/disable state of the channel 25 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> s1ch25{}; 
        ///This controls the enable/disable state of the channel 24 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> s1ch24{}; 
        ///This controls the enable/disable state of the channel 23 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> s1ch23{}; 
        ///This controls the enable/disable state of the channel 22 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> s1ch22{}; 
        ///This controls the enable/disable state of the channel 21 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> s1ch21{}; 
        ///This controls the enable/disable state of the channel 20 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> s1ch20{}; 
        ///This controls the enable/disable state of the channel 19 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> s1ch19{}; 
        ///This controls the enable/disable state of the channel 18 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> s1ch18{}; 
        ///This controls the enable/disable state of the channel 17 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> s1ch17{}; 
        ///This controls the enable/disable state of the channel 16 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> s1ch16{}; 
        ///This controls the enable/disable state of the channel 15 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> s1ch15{}; 
        ///This controls the enable/disable state of the channel 14 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> s1ch14{}; 
        ///This controls the enable/disable state of the channel 13 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> s1ch13{}; 
        ///This controls the enable/disable state of the channel 12 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> s1ch12{}; 
        ///This controls the enable/disable state of the channel 11 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> s1ch11{}; 
        ///This controls the enable/disable state of the channel 10 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> s1ch10{}; 
        ///This controls the enable/disable state of the channel 9 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> s1ch09{}; 
        ///This controls the enable/disable state of the channel 8 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> s1ch08{}; 
        ///This controls the enable/disable state of the channel 7 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> s1ch07{}; 
        ///This controls the enable/disable state of the channel 6 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> s1ch06{}; 
        ///This controls the enable/disable state of the channel 5 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> s1ch05{}; 
        ///This controls the enable/disable state of the channel 4 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> s1ch04{}; 
        ///This controls the enable/disable state of the channel 3 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> s1ch03{}; 
        ///This controls the enable/disable state of the channel 2 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> s1ch02{}; 
        ///This controls the enable/disable state of the channel 1 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> s1ch01{}; 
        ///This controls the enable/disable state of the channel 0 in subframe 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> s1ch00{}; 
    }
    namespace Noneoprreg{    ///<Operation Control Register
        using Addr = Register::Address<0x4006c018,0xfefefffe,0,unsigned>;
        ///This sets the enabled/disabled state of the receive operation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rxenb{}; 
        ///This sets the enabled/disabled state of the transmit operation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> txenb{}; 
        ///This enables or disables the I2S interface
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> start{}; 
    }
    namespace Nonesrst{    ///<Soft Reset Register
        using Addr = Register::Address<0x4006c01c,0xfffffffe,0,unsigned>;
        ///Soft reset bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> srst{}; 
    }
    namespace Noneintcnt{    ///<Interrupt Control Register
        using Addr = Register::Address<0x4006c020,0x80c0f0c0,0,unsigned>;
        ///This bit masks the transmit FIFO underflow interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> txud1m{}; 
        ///This bit masks the transmit channel block size error interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tberm{}; 
        ///This bit masks the frame error interrupt mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ferrm{}; 
        ///This bit masks the transmit FIFO underflow interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> txud0m{}; 
        ///This bit masks the transmit FIFO overflow interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> txovm{}; 
        ///This bit masks the transmit DMA request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> txfdm{}; 
        ///This bit masks the transmit FIFO interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> txfim{}; 
        ///This bit masks the receive channel block size error interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rberm{}; 
        ///This bit masks the receive FIFO underflow interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rxudm{}; 
        ///This bit masks the receive FIFO overflow interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rxovm{}; 
        ///This bit masks the interrupts by EOPI of the STATUS register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eopm{}; 
        ///This bit masks the receive DMA request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rxfdm{}; 
        ///This bit masks the receive FIFO interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rxfim{}; 
        ///This bit sets the transmit FIFO threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tfth{}; 
        ///This is the bit for setting the packet receive completion timer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rptmr{}; 
        ///This bit sets the receive FIFO threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> rfth{}; 
    }
    namespace Nonestatus{    ///<Status Register
        using Addr = Register::Address<0x4006c024,0x00f00000,0,unsigned>;
        ///If the block size of the DMA transmit channel is set to a value larger than the transmit FIFO threshold value, this bit is set to 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> tberr{}; 
        ///If the block size of the DMA receive channel is set to a value larger than the receive FIFO threshold value, this bit is set to 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> rberr{}; 
        ///This indicates that a frame error has occurred
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ferr{}; 
        ///This is set to 1 when the transmit FIFO underflows at the frame start
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> txudr1{}; 
        ///This is set to 1 when the transmit FIFO underflows during frame transmission
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> txudr0{}; 
        ///This is set to 1 when the transmit FIFO overflows
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> txovr{}; 
        ///This is set to 1 when the receive FIFO underflows
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> rxudr{}; 
        ///This is set to 1 when the receive FIFO overflows
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rxovr{}; 
        ///This is the interrupt flag based on the receive timer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eopi{}; 
        ///This indicates the status of the serial transmit control unit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> bsy{}; 
        ///This is set to 1 when the transmit FIFO empty slot meets or exceeds the threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txfi{}; 
        ///This is set to 1 when the receive FIFO data count meets or exceeds the threshold value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rxfi{}; 
        ///This indicates the data count in the transmit FIFO
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> txnum{}; 
        ///This indicates the data count in the receive FIFO
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxnum{}; 
    }
    namespace Nonedmaact{    ///<DMA Startup Register
        using Addr = Register::Address<0x4006c028,0xfefefefe,0,unsigned>;
        ///This sets the operation mode of TXDREQ
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> tl1e0{}; 
        ///This bit is enabled when the same register TL1E0=0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tdmact{}; 
        ///This sets the operation mode of RXDREQ
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rl1e0{}; 
        ///This bit is enabled when the same register RL1E0=0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdmact{}; 
    }
    namespace Nonetstreg{    ///<Test Register
        using Addr = Register::Address<0x4006c02c,0xfffffffe,0,unsigned>;
        ///This sets the loopback mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lbmd{}; 
    }
}
