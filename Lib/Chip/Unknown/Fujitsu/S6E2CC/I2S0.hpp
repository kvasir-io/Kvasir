#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//I2S
    namespace Nonerxfdat{    ///<Receive FIFO Register
        using Addr = Register::Address<0x4006c000,0x00000000,0,unsigned>;
        ///Words received from the serial bus are written to the receive FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxdata{}; 
        namespace RxdataValC{
        }
    }
    namespace Nonetxfdat{    ///<Transmit FIFO Register
        using Addr = Register::Address<0x4006c004,0x00000000,0,unsigned>;
        ///As long as the transmit FIFO is not full, the words to be transmitted can be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txdata{}; 
        namespace TxdataValC{
        }
    }
    namespace Nonecntreg{    ///<Control Register
        using Addr = Register::Address<0x4006c008,0x00008000,0,unsigned>;
        ///When operating in master mode, this sets the clock division ratio for output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::ReadWriteAccess,unsigned> ckrt{}; 
        namespace CkrtValC{
        }
        ///Following the valid data of the frame, it can insert OVERHEAD bits to enable adjustment of the frame rate.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> ovhd{}; 
        namespace OvhdValC{
        }
        ///This sets the serial output data of the invalid transmit frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mskb{}; 
        namespace MskbValC{
        }
        ///This sets master or slave mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> msmd{}; 
        namespace MsmdValC{
        }
        ///This specifies the subframe configuration (number of subframes) of the frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sbfn{}; 
        namespace SbfnValC{
        }
        ///This sets the FIFO word configuration to one or two words
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rhll{}; 
        namespace RhllValC{
        }
        ///In master mode, this selects the base clock divider.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> eckm{}; 
        namespace EckmValC{
        }
        ///When the receive word length is smaller than the FIFO word length, this sets the upper bit extension mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bext{}; 
        namespace BextValC{
        }
        ///This sets the output mode of the frame sync signal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> frun{}; 
        namespace FrunValC{
        }
        ///This sets word bit shift order
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mlsb{}; 
        namespace MlsbValC{
        }
        ///This enables or disables the transmit function
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txdis{}; 
        namespace TxdisValC{
        }
        ///This enables or disables the receive function
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxdis{}; 
        namespace RxdisValC{
        }
        ///This specifies the point where data is sampled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> smpl{}; 
        namespace SmplValC{
        }
        ///This specifies the I2SCK polarity where drive sampling of the serial data is performed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpol{}; 
        namespace CpolValC{
        }
        ///This specifies the phase for I2SWS frame data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fsph{}; 
        namespace FsphValC{
        }
        ///This specifies the pulse width of I2SWS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fsln{}; 
        namespace FslnValC{
        }
        ///This sets the polarity of the I2SWS pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fspl{}; 
        namespace FsplValC{
        }
    }
    namespace Nonemcr0reg{    ///<Channel Control Register 0
        using Addr = Register::Address<0x4006c00c,0x80008000,0,unsigned>;
        ///This sets the number of channels for subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> s1chn{}; 
        namespace S1chnValC{
        }
        ///This sets the channel length of the channels that make up subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,21),Register::ReadWriteAccess,unsigned> s1chl{}; 
        namespace S1chlValC{
        }
        ///This sets the word length of the channels that make up subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> s1wdl{}; 
        namespace S1wdlValC{
        }
        ///This sets the number of channels for subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> s0chn{}; 
        namespace S0chnValC{
        }
        ///This sets the channel length of the channels that make up subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,5),Register::ReadWriteAccess,unsigned> s0chl{}; 
        namespace S0chlValC{
        }
        ///This sets the word length of the channels that make up subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> s0wdl{}; 
        namespace S0wdlValC{
        }
    }
    namespace Nonemcr1reg{    ///<Channel Control Register 1
        using Addr = Register::Address<0x4006c010,0x00000000,0,unsigned>;
        ///This controls the enable/disable state of the channel 31 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> s0ch31{}; 
        namespace S0ch31ValC{
        }
        ///This controls the enable/disable state of the channel 30 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> s0ch30{}; 
        namespace S0ch30ValC{
        }
        ///This controls the enable/disable state of the channel 29 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> s0ch29{}; 
        namespace S0ch29ValC{
        }
        ///This controls the enable/disable state of the channel 28 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> s0ch28{}; 
        namespace S0ch28ValC{
        }
        ///This controls the enable/disable state of the channel 27 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> s0ch27{}; 
        namespace S0ch27ValC{
        }
        ///This controls the enable/disable state of the channel 26 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> s0ch26{}; 
        namespace S0ch26ValC{
        }
        ///This controls the enable/disable state of the channel 25 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> s0ch25{}; 
        namespace S0ch25ValC{
        }
        ///This controls the enable/disable state of the channel 24 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> s0ch24{}; 
        namespace S0ch24ValC{
        }
        ///This controls the enable/disable state of the channel 23 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> s0ch23{}; 
        namespace S0ch23ValC{
        }
        ///This controls the enable/disable state of the channel 22 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> s0ch22{}; 
        namespace S0ch22ValC{
        }
        ///This controls the enable/disable state of the channel 21 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> s0ch21{}; 
        namespace S0ch21ValC{
        }
        ///This controls the enable/disable state of the channel 20 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> s0ch20{}; 
        namespace S0ch20ValC{
        }
        ///This controls the enable/disable state of the channel 19 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> s0ch19{}; 
        namespace S0ch19ValC{
        }
        ///This controls the enable/disable state of the channel 18 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> s0ch18{}; 
        namespace S0ch18ValC{
        }
        ///This controls the enable/disable state of the channel 17 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> s0ch17{}; 
        namespace S0ch17ValC{
        }
        ///This controls the enable/disable state of the channel 16 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> s0ch16{}; 
        namespace S0ch16ValC{
        }
        ///This controls the enable/disable state of the channel 15 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> s0ch15{}; 
        namespace S0ch15ValC{
        }
        ///This controls the enable/disable state of the channel 14 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> s0ch14{}; 
        namespace S0ch14ValC{
        }
        ///This controls the enable/disable state of the channel 13 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> s0ch13{}; 
        namespace S0ch13ValC{
        }
        ///This controls the enable/disable state of the channel 12 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> s0ch12{}; 
        namespace S0ch12ValC{
        }
        ///This controls the enable/disable state of the channel 11 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> s0ch11{}; 
        namespace S0ch11ValC{
        }
        ///This controls the enable/disable state of the channel 10 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> s0ch10{}; 
        namespace S0ch10ValC{
        }
        ///This controls the enable/disable state of the channel 9 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> s0ch09{}; 
        namespace S0ch09ValC{
        }
        ///This controls the enable/disable state of the channel 8 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> s0ch08{}; 
        namespace S0ch08ValC{
        }
        ///This controls the enable/disable state of the channel 7 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> s0ch07{}; 
        namespace S0ch07ValC{
        }
        ///This controls the enable/disable state of the channel 6 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> s0ch06{}; 
        namespace S0ch06ValC{
        }
        ///This controls the enable/disable state of the channel 5 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> s0ch05{}; 
        namespace S0ch05ValC{
        }
        ///This controls the enable/disable state of the channel 4 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> s0ch04{}; 
        namespace S0ch04ValC{
        }
        ///This controls the enable/disable state of the channel 3 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> s0ch03{}; 
        namespace S0ch03ValC{
        }
        ///This controls the enable/disable state of the channel 2 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> s0ch02{}; 
        namespace S0ch02ValC{
        }
        ///This controls the enable/disable state of the channel 1 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> s0ch01{}; 
        namespace S0ch01ValC{
        }
        ///This controls the enable/disable state of the channel 0 in subframe 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> s0ch00{}; 
        namespace S0ch00ValC{
        }
    }
    namespace Nonemcr2reg{    ///<Channel Control Register 2
        using Addr = Register::Address<0x4006c014,0x00000000,0,unsigned>;
        ///This controls the enable/disable state of the channel 31 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> s1ch31{}; 
        namespace S1ch31ValC{
        }
        ///This controls the enable/disable state of the channel 30 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> s1ch30{}; 
        namespace S1ch30ValC{
        }
        ///This controls the enable/disable state of the channel 29 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> s1ch29{}; 
        namespace S1ch29ValC{
        }
        ///This controls the enable/disable state of the channel 28 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> s1ch28{}; 
        namespace S1ch28ValC{
        }
        ///This controls the enable/disable state of the channel 27 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> s1ch27{}; 
        namespace S1ch27ValC{
        }
        ///This controls the enable/disable state of the channel 26 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> s1ch26{}; 
        namespace S1ch26ValC{
        }
        ///This controls the enable/disable state of the channel 25 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> s1ch25{}; 
        namespace S1ch25ValC{
        }
        ///This controls the enable/disable state of the channel 24 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> s1ch24{}; 
        namespace S1ch24ValC{
        }
        ///This controls the enable/disable state of the channel 23 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> s1ch23{}; 
        namespace S1ch23ValC{
        }
        ///This controls the enable/disable state of the channel 22 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> s1ch22{}; 
        namespace S1ch22ValC{
        }
        ///This controls the enable/disable state of the channel 21 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> s1ch21{}; 
        namespace S1ch21ValC{
        }
        ///This controls the enable/disable state of the channel 20 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> s1ch20{}; 
        namespace S1ch20ValC{
        }
        ///This controls the enable/disable state of the channel 19 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> s1ch19{}; 
        namespace S1ch19ValC{
        }
        ///This controls the enable/disable state of the channel 18 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> s1ch18{}; 
        namespace S1ch18ValC{
        }
        ///This controls the enable/disable state of the channel 17 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> s1ch17{}; 
        namespace S1ch17ValC{
        }
        ///This controls the enable/disable state of the channel 16 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> s1ch16{}; 
        namespace S1ch16ValC{
        }
        ///This controls the enable/disable state of the channel 15 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> s1ch15{}; 
        namespace S1ch15ValC{
        }
        ///This controls the enable/disable state of the channel 14 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> s1ch14{}; 
        namespace S1ch14ValC{
        }
        ///This controls the enable/disable state of the channel 13 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> s1ch13{}; 
        namespace S1ch13ValC{
        }
        ///This controls the enable/disable state of the channel 12 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> s1ch12{}; 
        namespace S1ch12ValC{
        }
        ///This controls the enable/disable state of the channel 11 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> s1ch11{}; 
        namespace S1ch11ValC{
        }
        ///This controls the enable/disable state of the channel 10 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> s1ch10{}; 
        namespace S1ch10ValC{
        }
        ///This controls the enable/disable state of the channel 9 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> s1ch09{}; 
        namespace S1ch09ValC{
        }
        ///This controls the enable/disable state of the channel 8 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> s1ch08{}; 
        namespace S1ch08ValC{
        }
        ///This controls the enable/disable state of the channel 7 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> s1ch07{}; 
        namespace S1ch07ValC{
        }
        ///This controls the enable/disable state of the channel 6 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> s1ch06{}; 
        namespace S1ch06ValC{
        }
        ///This controls the enable/disable state of the channel 5 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> s1ch05{}; 
        namespace S1ch05ValC{
        }
        ///This controls the enable/disable state of the channel 4 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> s1ch04{}; 
        namespace S1ch04ValC{
        }
        ///This controls the enable/disable state of the channel 3 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> s1ch03{}; 
        namespace S1ch03ValC{
        }
        ///This controls the enable/disable state of the channel 2 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> s1ch02{}; 
        namespace S1ch02ValC{
        }
        ///This controls the enable/disable state of the channel 1 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> s1ch01{}; 
        namespace S1ch01ValC{
        }
        ///This controls the enable/disable state of the channel 0 in subframe 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> s1ch00{}; 
        namespace S1ch00ValC{
        }
    }
    namespace Noneoprreg{    ///<Operation Control Register
        using Addr = Register::Address<0x4006c018,0xfefefffe,0,unsigned>;
        ///This sets the enabled/disabled state of the receive operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rxenb{}; 
        namespace RxenbValC{
        }
        ///This sets the enabled/disabled state of the transmit operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> txenb{}; 
        namespace TxenbValC{
        }
        ///This enables or disables the I2S interface
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> start{}; 
        namespace StartValC{
        }
    }
    namespace Nonesrst{    ///<Soft Reset Register
        using Addr = Register::Address<0x4006c01c,0xfffffffe,0,unsigned>;
        ///Soft reset bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> srst{}; 
        namespace SrstValC{
        }
    }
    namespace Noneintcnt{    ///<Interrupt Control Register
        using Addr = Register::Address<0x4006c020,0x80c0f0c0,0,unsigned>;
        ///This bit masks the transmit FIFO underflow interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> txud1m{}; 
        namespace Txud1mValC{
        }
        ///This bit masks the transmit channel block size error interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tberm{}; 
        namespace TbermValC{
        }
        ///This bit masks the frame error interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ferrm{}; 
        namespace FerrmValC{
        }
        ///This bit masks the transmit FIFO underflow interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> txud0m{}; 
        namespace Txud0mValC{
        }
        ///This bit masks the transmit FIFO overflow interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> txovm{}; 
        namespace TxovmValC{
        }
        ///This bit masks the transmit DMA request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> txfdm{}; 
        namespace TxfdmValC{
        }
        ///This bit masks the transmit FIFO interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> txfim{}; 
        namespace TxfimValC{
        }
        ///This bit masks the receive channel block size error interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rberm{}; 
        namespace RbermValC{
        }
        ///This bit masks the receive FIFO underflow interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rxudm{}; 
        namespace RxudmValC{
        }
        ///This bit masks the receive FIFO overflow interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rxovm{}; 
        namespace RxovmValC{
        }
        ///This bit masks the interrupts by EOPI of the STATUS register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eopm{}; 
        namespace EopmValC{
        }
        ///This bit masks the receive DMA request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rxfdm{}; 
        namespace RxfdmValC{
        }
        ///This bit masks the receive FIFO interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rxfim{}; 
        namespace RxfimValC{
        }
        ///This bit sets the transmit FIFO threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tfth{}; 
        namespace TfthValC{
        }
        ///This is the bit for setting the packet receive completion timer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rptmr{}; 
        namespace RptmrValC{
        }
        ///This bit sets the receive FIFO threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> rfth{}; 
        namespace RfthValC{
        }
    }
    namespace Nonestatus{    ///<Status Register
        using Addr = Register::Address<0x4006c024,0x00f00000,0,unsigned>;
        ///If the block size of the DMA transmit channel is set to a value larger than the transmit FIFO threshold value, this bit is set to 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> tberr{}; 
        namespace TberrValC{
        }
        ///If the block size of the DMA receive channel is set to a value larger than the receive FIFO threshold value, this bit is set to 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> rberr{}; 
        namespace RberrValC{
        }
        ///This indicates that a frame error has occurred
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ferr{}; 
        namespace FerrValC{
        }
        ///This is set to 1 when the transmit FIFO underflows at the frame start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> txudr1{}; 
        namespace Txudr1ValC{
        }
        ///This is set to 1 when the transmit FIFO underflows during frame transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> txudr0{}; 
        namespace Txudr0ValC{
        }
        ///This is set to 1 when the transmit FIFO overflows
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> txovr{}; 
        namespace TxovrValC{
        }
        ///This is set to 1 when the receive FIFO underflows
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> rxudr{}; 
        namespace RxudrValC{
        }
        ///This is set to 1 when the receive FIFO overflows
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rxovr{}; 
        namespace RxovrValC{
        }
        ///This is the interrupt flag based on the receive timer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eopi{}; 
        namespace EopiValC{
        }
        ///This indicates the status of the serial transmit control unit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> bsy{}; 
        namespace BsyValC{
        }
        ///This is set to 1 when the transmit FIFO empty slot meets or exceeds the threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txfi{}; 
        namespace TxfiValC{
        }
        ///This is set to 1 when the receive FIFO data count meets or exceeds the threshold value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rxfi{}; 
        namespace RxfiValC{
        }
        ///This indicates the data count in the transmit FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> txnum{}; 
        namespace TxnumValC{
        }
        ///This indicates the data count in the receive FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxnum{}; 
        namespace RxnumValC{
        }
    }
    namespace Nonedmaact{    ///<DMA Startup Register
        using Addr = Register::Address<0x4006c028,0xfefefefe,0,unsigned>;
        ///This sets the operation mode of TXDREQ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> tl1e0{}; 
        namespace Tl1e0ValC{
        }
        ///This bit is enabled when the same register TL1E0=0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tdmact{}; 
        namespace TdmactValC{
        }
        ///This sets the operation mode of RXDREQ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rl1e0{}; 
        namespace Rl1e0ValC{
        }
        ///This bit is enabled when the same register RL1E0=0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdmact{}; 
        namespace RdmactValC{
        }
    }
    namespace Nonetstreg{    ///<Test Register
        using Addr = Register::Address<0x4006c02c,0xfffffffe,0,unsigned>;
        ///This sets the loopback mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lbmd{}; 
        namespace LbmdValC{
        }
    }
}
