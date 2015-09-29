#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//SSP1 controller
    namespace Nonecr0{    ///<Control Register 0. Selects the serial clock rate, bus type, and data size.
        using Addr = Register::Address<0x40030000,0xffff0000,0,unsigned>;
        ///Data Size Select. This field controls the number of bits transferred in each frame. Values 0000-0010 are not supported and should not be used.
        enum class dssVal {
            v4BitTransfer=0x00000003,     ///<4-bit transfer
            v5BitTransfer=0x00000004,     ///<5-bit transfer
            v6BitTransfer=0x00000005,     ///<6-bit transfer
            v7BitTransfer=0x00000006,     ///<7-bit transfer
            v8BitTransfer=0x00000007,     ///<8-bit transfer
            v9BitTransfer=0x00000008,     ///<9-bit transfer
            v10BitTransfer=0x00000009,     ///<10-bit transfer
            v11BitTransfer=0x0000000a,     ///<11-bit transfer
            v12BitTransfer=0x0000000b,     ///<12-bit transfer
            v13BitTransfer=0x0000000c,     ///<13-bit transfer
            v14BitTransfer=0x0000000d,     ///<14-bit transfer
            v15BitTransfer=0x0000000e,     ///<15-bit transfer
            v16BitTransfer=0x0000000f,     ///<16-bit transfer
        };
        namespace dssValC{
            constexpr MPL::Value<dssVal,dssVal::v4BitTransfer> v4BitTransfer{};
            constexpr MPL::Value<dssVal,dssVal::v5BitTransfer> v5BitTransfer{};
            constexpr MPL::Value<dssVal,dssVal::v6BitTransfer> v6BitTransfer{};
            constexpr MPL::Value<dssVal,dssVal::v7BitTransfer> v7BitTransfer{};
            constexpr MPL::Value<dssVal,dssVal::v8BitTransfer> v8BitTransfer{};
            constexpr MPL::Value<dssVal,dssVal::v9BitTransfer> v9BitTransfer{};
            constexpr MPL::Value<dssVal,dssVal::v10BitTransfer> v10BitTransfer{};
            constexpr MPL::Value<dssVal,dssVal::v11BitTransfer> v11BitTransfer{};
            constexpr MPL::Value<dssVal,dssVal::v12BitTransfer> v12BitTransfer{};
            constexpr MPL::Value<dssVal,dssVal::v13BitTransfer> v13BitTransfer{};
            constexpr MPL::Value<dssVal,dssVal::v14BitTransfer> v14BitTransfer{};
            constexpr MPL::Value<dssVal,dssVal::v15BitTransfer> v15BitTransfer{};
            constexpr MPL::Value<dssVal,dssVal::v16BitTransfer> v16BitTransfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,dssVal> dss{}; 
        ///Frame Format.
        enum class frfVal {
            spi=0x00000000,     ///<SPI
            ti=0x00000001,     ///<TI
            microwire=0x00000002,     ///<Microwire
            thisCombinationIs=0x00000003,     ///<This combination is not supported and should not be used.
        };
        namespace frfValC{
            constexpr MPL::Value<frfVal,frfVal::spi> spi{};
            constexpr MPL::Value<frfVal,frfVal::ti> ti{};
            constexpr MPL::Value<frfVal,frfVal::microwire> microwire{};
            constexpr MPL::Value<frfVal,frfVal::thisCombinationIs> thisCombinationIs{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,frfVal> frf{}; 
        ///Clock Out Polarity. This bit is only used in SPI mode.
        enum class cpolVal {
            busLow=0x00000000,     ///<SSP controller maintains the bus clock low between frames.
            busHigh=0x00000001,     ///<SSP controller maintains the bus clock high between frames.
        };
        namespace cpolValC{
            constexpr MPL::Value<cpolVal,cpolVal::busLow> busLow{};
            constexpr MPL::Value<cpolVal,cpolVal::busHigh> busHigh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,cpolVal> cpol{}; 
        ///Clock Out Phase. This bit is only used in SPI mode.
        enum class cphaVal {
            firstClock=0x00000000,     ///<SSP controller captures serial data on the first clock transition of the frame, that is, the transition away from the inter-frame state of the clock line.
            secondClock=0x00000001,     ///<SSP controller captures serial data on the second clock transition of the frame, that is, the transition back to the inter-frame state of the clock line.
        };
        namespace cphaValC{
            constexpr MPL::Value<cphaVal,cphaVal::firstClock> firstClock{};
            constexpr MPL::Value<cphaVal,cphaVal::secondClock> secondClock{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,cphaVal> cpha{}; 
        ///Serial Clock Rate. The number of prescaler-output clocks per bit on the bus, minus one. Given that CPSDVSR is the prescale divider, and the APB clock PCLK clocks the prescaler, the bit frequency is PCLK / (CPSDVSR X [SCR+1]).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> scr{}; 
    }
    namespace Nonecr1{    ///<Control Register 1. Selects master/slave and other modes.
        using Addr = Register::Address<0x40030004,0xfffffff0,0,unsigned>;
        ///Loop Back Mode.
        enum class lbmVal {
            normal=0x00000000,     ///<During normal operation.
            ouptu=0x00000001,     ///<Serial input is taken from the serial output (MOSI or MISO) rather than the serial input pin (MISO or MOSI respectively).
        };
        namespace lbmValC{
            constexpr MPL::Value<lbmVal,lbmVal::normal> normal{};
            constexpr MPL::Value<lbmVal,lbmVal::ouptu> ouptu{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,lbmVal> lbm{}; 
        ///SSP Enable.
        enum class sseVal {
            disabled=0x00000000,     ///<The SSP controller is disabled.
            enabled=0x00000001,     ///<The SSP controller will interact with other devices on the serial bus. Software should write the appropriate control information to the other SSP registers and interrupt controller registers, before setting this bit.
        };
        namespace sseValC{
            constexpr MPL::Value<sseVal,sseVal::disabled> disabled{};
            constexpr MPL::Value<sseVal,sseVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,sseVal> sse{}; 
        ///Master/Slave Mode.This bit can only be written when the SSE bit is 0.
        enum class msVal {
            master=0x00000000,     ///<The SSP controller acts as a master on the bus, driving the SCLK, MOSI, and SSEL lines and receiving the MISO line.
            slave=0x00000001,     ///<The SSP controller acts as a slave on the bus, driving MISO line and receiving SCLK, MOSI, and SSEL lines.
        };
        namespace msValC{
            constexpr MPL::Value<msVal,msVal::master> master{};
            constexpr MPL::Value<msVal,msVal::slave> slave{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,msVal> ms{}; 
        ///Slave Output Disable. This bit is relevant only in slave mode (MS = 1). If it is 1, this blocks this SSP controller from driving the transmit data line (MISO).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sod{}; 
    }
    namespace Nonedr{    ///<Data Register. Writes fill the transmit FIFO, and reads empty the receive FIFO.
        using Addr = Register::Address<0x40030008,0xffff0000,0,unsigned>;
        ///Write: software can write data to be sent in a future frame to this register whenever the TNF bit in the Status register is 1, indicating that the Tx FIFO is not full. If the Tx FIFO was previously empty and the SSP controller is not busy on the bus, transmission of the data will begin immediately. Otherwise the data written to this register will be sent as soon as all previous data has been sent (and received). If the data length is less than 16 bits, software must right-justify the data written to this register. Read: software can read data from this register whenever the RNE bit in the Status register is 1, indicating that the Rx FIFO is not empty. When software reads this register, the SSP controller returns data from the least recent frame in the Rx FIFO. If the data length is less than 16 bits, the data is right-justified in this field with higher order bits filled with 0s.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonesr{    ///<Status Register
        using Addr = Register::Address<0x4003000c,0xffffffe0,0,unsigned>;
        ///Transmit FIFO Empty. This bit is 1 is the Transmit FIFO is empty, 0 if not.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tfe{}; 
        ///Transmit FIFO Not Full. This bit is 0 if the Tx FIFO is full, 1 if not.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tnf{}; 
        ///Receive FIFO Not Empty. This bit is 0 if the Receive FIFO is empty, 1 if not.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rne{}; 
        ///Receive FIFO Full. This bit is 1 if the Receive FIFO is full, 0 if not.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rff{}; 
        ///Busy. This bit is 0 if the SSPn controller is idle, or 1 if it is currently sending/receiving a frame and/or the Tx FIFO is not empty.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bsy{}; 
    }
    namespace Nonecpsr{    ///<Clock Prescale Register
        using Addr = Register::Address<0x40030010,0xffffff00,0,unsigned>;
        ///This even value between 2 and 254, by which PCLK is divided to yield the prescaler output clock. Bit 0 always reads as 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cpsdvsr{}; 
    }
    namespace Noneimsc{    ///<Interrupt Mask Set and Clear Register
        using Addr = Register::Address<0x40030014,0xfffffff0,0,unsigned>;
        ///Software should set this bit to enable interrupt when a Receive Overrun occurs, that is, when the Rx FIFO is full and another frame is completely received. The ARM spec implies that the preceding frame data is overwritten by the new frame data when this occurs.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rorim{}; 
        ///Software should set this bit to enable interrupt when a Receive Time-out condition occurs. A Receive Time-out occurs when the Rx FIFO is not empty, and no has not been read for a time-out period. The time-out period is the same for master and slave modes and is determined by the SSP bit rate: 32 bits at PCLK / (CPSDVSR X [SCR+1]).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rtim{}; 
        ///Software should set this bit to enable interrupt when the Rx FIFO is at least half full.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxim{}; 
        ///Software should set this bit to enable interrupt when the Tx FIFO is at least half empty.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txim{}; 
    }
    namespace Noneris{    ///<Raw Interrupt Status Register
        using Addr = Register::Address<0x40030018,0xfffffff0,0,unsigned>;
        ///This bit is 1 if another frame was completely received while the RxFIFO was full. The ARM spec implies that the preceding frame data is overwritten by the new frame data when this occurs.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rorris{}; 
        ///This bit is 1 if the Rx FIFO is not empty, and has not been read for a time-out period. The time-out period is the same for master and slave modes and is determined by the SSP bit rate: 32 bits at PCLK / (CPSDVSR X [SCR+1]).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rtris{}; 
        ///This bit is 1 if the Rx FIFO is at least half full.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxris{}; 
        ///This bit is 1 if the Tx FIFO is at least half empty.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txris{}; 
    }
    namespace Nonemis{    ///<Masked Interrupt Status Register
        using Addr = Register::Address<0x4003001c,0xfffffff0,0,unsigned>;
        ///This bit is 1 if another frame was completely received while the RxFIFO was full, and this interrupt is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rormis{}; 
        ///This bit is 1 if the Rx FIFO is not empty, has not been read for a time-out period, and this interrupt is enabled. The time-out period is the same for master and slave modes and is determined by the SSP bit rate: 32 bits at PCLK / (CPSDVSR X [SCR+1]).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rtmis{}; 
        ///This bit is 1 if the Rx FIFO is at least half full, and this interrupt is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxmis{}; 
        ///This bit is 1 if the Tx FIFO is at least half empty, and this interrupt is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txmis{}; 
    }
    namespace Noneicr{    ///<SSPICR Interrupt Clear Register
        using Addr = Register::Address<0x40030020,0xfffffffc,0,unsigned>;
        ///Writing a 1 to this bit clears the   frame was received when RxFIFO was full interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> roric{}; 
        ///Writing a 1 to this bit clears the Rx FIFO was not empty and has not been read for a time-out period interrupt. The time-out period is the same for master and slave modes and is determined by the SSP bit rate: 32 bits at PCLK / (CPSDVSR / [SCR+1]).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rtic{}; 
    }
    namespace Nonedmacr{    ///<SSP0 DMA control register
        using Addr = Register::Address<0x40030024,0xfffffffc,0,unsigned>;
        ///Receive DMA Enable. When this bit is set to one 1, DMA for the receive FIFO is enabled, otherwise receive DMA is disabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxdmae{}; 
        ///Transmit DMA Enable. When this bit is set to one 1, DMA for the transmit FIFO is enabled, otherwise transmit DMA is disabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txdmae{}; 
    }
}
