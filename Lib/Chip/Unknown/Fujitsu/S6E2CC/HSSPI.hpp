#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//HI-SPEED SPI Controller
    namespace Nonemctrl{    ///<Control Register
        using Addr = Register::Address<0xd0000000,0xffffffcc,0,unsigned>;
        ///Synchronizer circuit operation bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> syncon{}; 
        ///Module enable status bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mes{}; 
        ///Command sequencer mode enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> csen{}; 
        ///Module enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> men{}; 
    }
    namespace Nonepcc0{    ///<Peripheral Communication Setting Register 0
        using Addr = Register::Address<0xd0000004,0xff800000,0,unsigned>;
        ///Read deselect time setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> rddsel{}; 
        ///Write or different command deselect time setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,17),Register::ReadWriteAccess,unsigned> wrdsel{}; 
        ///Safe synchronization bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> safesync{}; 
        ///Clock division ratio setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,9),Register::ReadWriteAccess,unsigned> cdrs{}; 
        ///Endian setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sendian{}; 
        ///Shift direction setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sdir{}; 
        ///Slave-select-to-clock-start delay time setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> ss2cd{}; 
        ///Slave select polarity setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sspol{}; 
        ///Timing compensation setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rtm{}; 
        ///Serial data transmission/reception timing setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> aces{}; 
        ///Serial clock polarity setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Clock phase setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cpha{}; 
    }
    namespace Nonepcc1{    ///<Peripheral Communication Setting Registers 1
        using Addr = Register::Address<0xd0000008,0xffffffff,0,unsigned>;
    }
    namespace Nonepcc2{    ///<Peripheral Communication Setting Registers 2
        using Addr = Register::Address<0xd000000c,0xffffffff,0,unsigned>;
    }
    namespace Nonepcc3{    ///<Peripheral Communication Setting Registers 3
        using Addr = Register::Address<0xd0000010,0xffffffff,0,unsigned>;
    }
    namespace Nonetxf{    ///<Transmission Interrupt Factor Register
        using Addr = Register::Address<0xd0000014,0xffffff80,0,unsigned>;
        ///Slave select released detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tssrs{}; 
        ///TX-FIFO-exceeded-threshold detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tfmts{}; 
        ///TX-FIFO-less-than-or-equal-to-threshold detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tflets{}; 
        ///TX-FIFO underrun detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tfus{}; 
        ///TX-FIFO overrun detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tfos{}; 
        ///TX-FIFO and shift register empty detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tfes{}; 
        ///TX-FIFO full detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tffs{}; 
    }
    namespace Nonetxe{    ///<Transmission Interrupt Enable Register
        using Addr = Register::Address<0xd0000018,0xffffff80,0,unsigned>;
        ///Slave select released detection interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tssre{}; 
        ///TX-FIFO-exceeded-threshold detection interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tfmte{}; 
        ///TX-FIFO-less-than-or-equal-to-threshold detection interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tflete{}; 
        ///TX-FIFO underrun detection interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tfue{}; 
        ///TX-FIFO overrun detection interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tfoe{}; 
        ///TX-FIFO and shift register empty detection interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tfee{}; 
        ///TX-FIFO full detection interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tffe{}; 
    }
    namespace Nonetxc{    ///<Transmission Interrupt Clear Register
        using Addr = Register::Address<0xd000001c,0xffffff80,0,unsigned>;
        ///Slave select released detection clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tssrc{}; 
        ///TX-FIFO-exceeded-threshold detection clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tfmtc{}; 
        ///TX-FIFO-less-than-or-equal-to-threshold detection clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tfletc{}; 
        ///TX-FIFO underrun detection clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tfuc{}; 
        ///TX-FIFO overrun detection clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tfoc{}; 
        ///TX-FIFO and shift register empty detection clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tfec{}; 
        ///TX-FIFO full detection clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tffc{}; 
    }
    namespace Nonerxf{    ///<Reception Interrupt Factor Register
        using Addr = Register::Address<0xd0000020,0xffffff80,0,unsigned>;
        ///Slave select released detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rssrs{}; 
        ///RX-FIFO-exceeded-threshold detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rfmts{}; 
        ///RX-FIFO-less-than-or-equal-to-threshold detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rflets{}; 
        ///RX-FIFO underrun detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rfus{}; 
        ///RX-FIFO overrun detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rfos{}; 
        ///RX-FIFO empty detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rfes{}; 
        ///RX-FIFO full detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rffs{}; 
    }
    namespace Nonerxe{    ///<Reception Interrupt Enable Register
        using Addr = Register::Address<0xd0000024,0xffffff80,0,unsigned>;
        ///Slave select released detection interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rssre{}; 
        ///RX-FIFO-exceeded-threshold detection interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rfmte{}; 
        ///RX-FIFO-less-than-or-equal-to-threshold detection interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rflete{}; 
        ///RX-FIFO underrun detection interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rfue{}; 
        ///RX-FIFO overrun detection interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rfoe{}; 
        ///RX-FIFO and shift register empty-state detection interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rfee{}; 
        ///RX-FIFO full detection interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rffe{}; 
    }
    namespace Nonerxc{    ///<Interrupt Clear Register
        using Addr = Register::Address<0xd0000028,0xffffff80,0,unsigned>;
        ///Slave select released detection clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rssrc{}; 
        ///RX-FIFO-exceeded-threshold detection clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rfmtc{}; 
        ///RX-FIFO-less-than-or-equal-to-threshold detection clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rfletc{}; 
        ///RX-FIFO underrun detection clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rfuc{}; 
        ///RX-FIFO overrun detection clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rfoc{}; 
        ///RX-FIFO and shift register empty-state detection clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rfec{}; 
        ///RX-FIFO full detection clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rffc{}; 
    }
    namespace Nonefaultf{    ///<Fault Interrupt Factor Register
        using Addr = Register::Address<0xd000002c,0xffffffe0,0,unsigned>;
        ///DRCBSFS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> drcbsfs{}; 
        ///DWCBSFS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dwcbsfs{}; 
        ///Protection violation fault detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pvfs{}; 
        ///Write access fault detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wafs{}; 
        ///Unmapped memory access fault detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> umafs{}; 
    }
    namespace Nonefaultc{    ///<Fault Interrupt Clear Register
        using Addr = Register::Address<0xd0000030,0xffffffe0,0,unsigned>;
        ///DRCBSFC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> drcbsfc{}; 
        ///DWCBSFC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dwcbsfc{}; 
        ///Protection violation fault detection clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pvfc{}; 
        ///Write access fault detection clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wafc{}; 
        ///Unmapped memory access fault detection clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> umafc{}; 
    }
    namespace Nonedmcfg{    ///<Direct Mode Setting Register
        using Addr = Register::Address<0xd0000034,0xfffffffd,0,unsigned char>;
        ///Slave select deassertion setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ssdc{}; 
    }
    namespace Nonedmdmaen{    ///<DMDMAEN
        using Addr = Register::Address<0xd0000035,0xfffffffc,0,unsigned char>;
        ///TXDMAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txdmaen{}; 
        ///RXDMAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxdmaen{}; 
    }
    namespace Nonedmstart{    ///<Direct Mode Transfer Start Control Register
        using Addr = Register::Address<0xd0000038,0xfffffffe,0,unsigned char>;
        ///Transfer start bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> start{}; 
    }
    namespace Nonedmstop{    ///<Direct Mode Transfer Stop Control Register
        using Addr = Register::Address<0xd0000039,0xfffffffe,0,unsigned char>;
        ///Transfer stop bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> stop{}; 
    }
    namespace Nonedmpsel{    ///<Direct Mode Slave Select Register
        using Addr = Register::Address<0xd000003a,0xfffffffc,0,unsigned char>;
        ///Peripheral select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> psel{}; 
    }
    namespace Nonedmtrp{    ///<Direct Mode Transfer Protocol Setting Register
        using Addr = Register::Address<0xd000003b,0xfffffff0,0,unsigned char>;
        ///Transfer protocol setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> trp{}; 
    }
    namespace Nonedmbcc{    ///<Direct Mode Transfer Byte Count Setting Register
        using Addr = Register::Address<0xd000003c,0xffff0000,0,unsigned>;
        ///Transferred byte count setting value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> bcc{}; 
    }
    namespace Nonedmbcs{    ///<Direct Mode Transfer Remaining Count Register
        using Addr = Register::Address<0xd000003e,0xffff0000,0,unsigned>;
        ///Number of remaining bytes to transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> bcs{}; 
    }
    namespace Nonedmstatus{    ///<Direct Mode Status Register
        using Addr = Register::Address<0xd0000040,0xffe0e0fc,0,unsigned>;
        ///Remaining TX-FIFO data indication bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> txflevel{}; 
        ///Remaining RX-FIFO data indication bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> rxflevel{}; 
        ///Transmission status bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txactive{}; 
        ///Reception status bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxactive{}; 
    }
    namespace Nonefifocfg{    ///<FIFO Setting Register
        using Addr = Register::Address<0xd000004c,0xffffe000,0,unsigned>;
        ///TX-FIFO clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txflsh{}; 
        ///RX-FIFO clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rxflsh{}; 
        ///TX-FIFO transmission data control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txctrl{}; 
        ///FIFO bit width setting value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> fwidth{}; 
        ///TX-FIFO threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> txfth{}; 
        ///RX-FIFO threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> rxfth{}; 
    }
    namespace Nonetxfifo0{    ///<TX-FIFO0 Register
        using Addr = Register::Address<0xd0000050,0x00000000,0,unsigned>;
        ///TX-FIFO0 write data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txdata{}; 
    }
    namespace Nonetxfifo1{    ///<TX-FIFO1 Register
        using Addr = Register::Address<0xd0000054,0xffffffff,0,unsigned>;
    }
    namespace Nonetxfifo2{    ///<TX-FIFO2 Register
        using Addr = Register::Address<0xd0000058,0xffffffff,0,unsigned>;
    }
    namespace Nonetxfifo3{    ///<TX-FIFO3 Register
        using Addr = Register::Address<0xd000005c,0xffffffff,0,unsigned>;
    }
    namespace Nonetxfifo4{    ///<TX-FIFO4 Register
        using Addr = Register::Address<0xd0000060,0xffffffff,0,unsigned>;
    }
    namespace Nonetxfifo5{    ///<TX-FIFO5 Register
        using Addr = Register::Address<0xd0000064,0xffffffff,0,unsigned>;
    }
    namespace Nonetxfifo6{    ///<TX-FIFO6 Register
        using Addr = Register::Address<0xd0000068,0xffffffff,0,unsigned>;
    }
    namespace Nonetxfifo7{    ///<TX-FIFO7 Register
        using Addr = Register::Address<0xd000006c,0xffffffff,0,unsigned>;
    }
    namespace Nonetxfifo8{    ///<TX-FIFO8 Register
        using Addr = Register::Address<0xd0000070,0xffffffff,0,unsigned>;
    }
    namespace Nonetxfifo9{    ///<TX-FIFO9 Register
        using Addr = Register::Address<0xd0000074,0xffffffff,0,unsigned>;
    }
    namespace Nonetxfifo10{    ///<TX-FIFO10 Register
        using Addr = Register::Address<0xd0000078,0xffffffff,0,unsigned>;
    }
    namespace Nonetxfifo11{    ///<TX-FIFO11 Register
        using Addr = Register::Address<0xd000007c,0xffffffff,0,unsigned>;
    }
    namespace Nonetxfifo12{    ///<TX-FIFO12 Register
        using Addr = Register::Address<0xd0000080,0xffffffff,0,unsigned>;
    }
    namespace Nonetxfifo13{    ///<TX-FIFO13 Register
        using Addr = Register::Address<0xd0000084,0xffffffff,0,unsigned>;
    }
    namespace Nonetxfifo14{    ///<TX-FIFO14 Register
        using Addr = Register::Address<0xd0000088,0xffffffff,0,unsigned>;
    }
    namespace Nonetxfifo15{    ///<TX-FIFO15 Register
        using Addr = Register::Address<0xd000008c,0xffffffff,0,unsigned>;
    }
    namespace Nonerxfifo0{    ///<RX-FIFO0 Register
        using Addr = Register::Address<0xd0000090,0x00000000,0,unsigned>;
        ///RX-FIFO0 read data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxdata{}; 
    }
    namespace Nonerxfifo1{    ///<RX-FIFO1 read data
        using Addr = Register::Address<0xd0000094,0xffffffff,0,unsigned>;
    }
    namespace Nonerxfifo2{    ///<RX-FIFO2 read data
        using Addr = Register::Address<0xd0000098,0xffffffff,0,unsigned>;
    }
    namespace Nonerxfifo3{    ///<RX-FIFO3 read data
        using Addr = Register::Address<0xd000009c,0xffffffff,0,unsigned>;
    }
    namespace Nonerxfifo4{    ///<RX-FIFO4 read data
        using Addr = Register::Address<0xd00000a0,0xffffffff,0,unsigned>;
    }
    namespace Nonerxfifo5{    ///<RX-FIFO5 read data
        using Addr = Register::Address<0xd00000a4,0xffffffff,0,unsigned>;
    }
    namespace Nonerxfifo6{    ///<RX-FIFO6 read data
        using Addr = Register::Address<0xd00000a8,0xffffffff,0,unsigned>;
    }
    namespace Nonerxfifo7{    ///<RX-FIFO7 read data
        using Addr = Register::Address<0xd00000ac,0xffffffff,0,unsigned>;
    }
    namespace Nonerxfifo8{    ///<RX-FIFO8 read data
        using Addr = Register::Address<0xd00000b0,0xffffffff,0,unsigned>;
    }
    namespace Nonerxfifo9{    ///<RX-FIFO9 read data
        using Addr = Register::Address<0xd00000b4,0xffffffff,0,unsigned>;
    }
    namespace Nonerxfifo10{    ///<RX-FIFO10 read data
        using Addr = Register::Address<0xd00000b8,0xffffffff,0,unsigned>;
    }
    namespace Nonerxfifo11{    ///<RX-FIFO11 read data
        using Addr = Register::Address<0xd00000bc,0xffffffff,0,unsigned>;
    }
    namespace Nonerxfifo12{    ///<RX-FIFO12 read data
        using Addr = Register::Address<0xd00000c0,0xffffffff,0,unsigned>;
    }
    namespace Nonerxfifo13{    ///<RX-FIFO13 read data
        using Addr = Register::Address<0xd00000c4,0xffffffff,0,unsigned>;
    }
    namespace Nonerxfifo14{    ///<RX-FIFO14 read data
        using Addr = Register::Address<0xd00000c8,0xffffffff,0,unsigned>;
    }
    namespace Nonerxfifo15{    ///<RX-FIFO15 read data
        using Addr = Register::Address<0xd00000cc,0xffffffff,0,unsigned>;
    }
    namespace Nonecscfg{    ///<32
        using Addr = Register::Address<0xd00000d0,0xfff0f0f8,0,unsigned>;
        ///Memory device selection bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> msel{}; 
        ///Slave select 3 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ssel3en{}; 
        ///Slave select 2 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ssel2en{}; 
        ///Slave select 1 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ssel1en{}; 
        ///Slave select 0 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ssel0en{}; 
        ///SPI data width setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> mbm{}; 
        ///Readable/Writable or Read only selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sram{}; 
    }
    namespace Nonecsitime{    ///<Command Sequencer Idle Timer Setting Register
        using Addr = Register::Address<0xd00000d4,0xffff0000,0,unsigned>;
        ///Idle timer setting value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> itime{}; 
    }
    namespace Nonecsaext{    ///<Command Sequencer Address Extension Register
        using Addr = Register::Address<0xd00000d8,0x00001fff,0,unsigned>;
        ///Address extension bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,13),Register::ReadWriteAccess,unsigned> aext{}; 
    }
    namespace Nonerdcsdc0{    ///<Read Command Sequence Data/Control Register 0
        using Addr = Register::Address<0xd00000dc,0xffff00f0,0,unsigned>;
        ///Read command sequencer data/control setting values
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> rdcsdata{}; 
        ///Continuous instruction setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cont{}; 
        ///Serial interface width control bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> trp{}; 
        ///Decode control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dec{}; 
    }
    namespace Nonerdcsdc1{    ///<Read Command Sequence Data/Control Register 1
        using Addr = Register::Address<0xd00000de,0xffffffff,0,unsigned>;
    }
    namespace Nonerdcsdc2{    ///<Read Command Sequence Data/Control Register 2
        using Addr = Register::Address<0xd00000e0,0xffffffff,0,unsigned>;
    }
    namespace Nonerdcsdc3{    ///<Read Command Sequence Data/Control Register 3
        using Addr = Register::Address<0xd00000e2,0xffffffff,0,unsigned>;
    }
    namespace Nonerdcsdc4{    ///<Read Command Sequence Data/Control Register 4
        using Addr = Register::Address<0xd00000e4,0xffffffff,0,unsigned>;
    }
    namespace Nonerdcsdc5{    ///<Read Command Sequence Data/Control Register 5
        using Addr = Register::Address<0xd00000e6,0xffffffff,0,unsigned>;
    }
    namespace Nonerdcsdc6{    ///<Read Command Sequence Data/Control Register 6
        using Addr = Register::Address<0xd00000e8,0xffffffff,0,unsigned>;
    }
    namespace Nonerdcsdc7{    ///<Read Command Sequence Data/Control Register 7
        using Addr = Register::Address<0xd00000ea,0xffffffff,0,unsigned>;
    }
    namespace Nonewrcsdc0{    ///<Write Command Sequence Data/Control Register 0
        using Addr = Register::Address<0xd00000ec,0xffff00f0,0,unsigned>;
        ///Write command sequencer data/control setting values
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wrcsdata{}; 
        ///Continuous instruction setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cont{}; 
        ///Serial interface width control bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> trp{}; 
        ///Decode control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dec{}; 
    }
    namespace Nonewrcsdc1{    ///<Write Command Sequence Data/Control Register 1
        using Addr = Register::Address<0xd00000ee,0xffffffff,0,unsigned>;
    }
    namespace Nonewrcsdc2{    ///<Write Command Sequence Data/Control Register 2
        using Addr = Register::Address<0xd00000f0,0xffffffff,0,unsigned>;
    }
    namespace Nonewrcsdc3{    ///<Write Command Sequence Data/Control Register 3
        using Addr = Register::Address<0xd00000f2,0xffffffff,0,unsigned>;
    }
    namespace Nonewrcsdc4{    ///<Write Command Sequence Data/Control Register 4
        using Addr = Register::Address<0xd00000f4,0xffffffff,0,unsigned>;
    }
    namespace Nonewrcsdc5{    ///<Write Command Sequence Data/Control Register 5
        using Addr = Register::Address<0xd00000f6,0xffffffff,0,unsigned>;
    }
    namespace Nonewrcsdc6{    ///<Write Command Sequence Data/Control Register 6
        using Addr = Register::Address<0xd00000f8,0xffffffff,0,unsigned>;
    }
    namespace Nonewrcsdc7{    ///<Write Command Sequence Data/Control Register 7
        using Addr = Register::Address<0xd00000fa,0xffffffff,0,unsigned>;
    }
    namespace Nonemid{    ///<Module Identification Register
        using Addr = Register::Address<0xd00000fc,0x00000000,0,unsigned>;
        ///Module identification information bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mid{}; 
    }
    namespace Noneqdclkr{    ///<QDCLKR
        using Addr = Register::Address<0xd0000400,0xfffffff0,0,unsigned char>;
        ///QHDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> qhdiv{}; 
    }
    namespace Nonedbcnt{    ///<DBCNT
        using Addr = Register::Address<0xd0000404,0xfffffffc,0,unsigned char>;
        ///TXDBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txdben{}; 
        ///RXDBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxdben{}; 
    }
}
