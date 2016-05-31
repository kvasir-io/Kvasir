#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//SSP/SPI  
    namespace Ssp0Cr0{    ///<Control Register 0. Selects the serial clock rate, bus type, and data size.
        using Addr = Register::Address<0x40040000,0x00000000,0x00000000,unsigned>;
        ///Data Size Select. This field controls the number of bits transferred in each frame. Values 0000-0010 are not supported and should not be used.
        enum class DssVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,DssVal> dss{}; 
        namespace DssValC{
            constexpr Register::FieldValue<decltype(dss)::Type,DssVal::v4BitTransfer> v4BitTransfer{};
            constexpr Register::FieldValue<decltype(dss)::Type,DssVal::v5BitTransfer> v5BitTransfer{};
            constexpr Register::FieldValue<decltype(dss)::Type,DssVal::v6BitTransfer> v6BitTransfer{};
            constexpr Register::FieldValue<decltype(dss)::Type,DssVal::v7BitTransfer> v7BitTransfer{};
            constexpr Register::FieldValue<decltype(dss)::Type,DssVal::v8BitTransfer> v8BitTransfer{};
            constexpr Register::FieldValue<decltype(dss)::Type,DssVal::v9BitTransfer> v9BitTransfer{};
            constexpr Register::FieldValue<decltype(dss)::Type,DssVal::v10BitTransfer> v10BitTransfer{};
            constexpr Register::FieldValue<decltype(dss)::Type,DssVal::v11BitTransfer> v11BitTransfer{};
            constexpr Register::FieldValue<decltype(dss)::Type,DssVal::v12BitTransfer> v12BitTransfer{};
            constexpr Register::FieldValue<decltype(dss)::Type,DssVal::v13BitTransfer> v13BitTransfer{};
            constexpr Register::FieldValue<decltype(dss)::Type,DssVal::v14BitTransfer> v14BitTransfer{};
            constexpr Register::FieldValue<decltype(dss)::Type,DssVal::v15BitTransfer> v15BitTransfer{};
            constexpr Register::FieldValue<decltype(dss)::Type,DssVal::v16BitTransfer> v16BitTransfer{};
        }
        ///Frame Format.
        enum class FrfVal {
            spi=0x00000000,     ///<SPI
            ti=0x00000001,     ///<TI
            microwire=0x00000002,     ///<Microwire
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,FrfVal> frf{}; 
        namespace FrfValC{
            constexpr Register::FieldValue<decltype(frf)::Type,FrfVal::spi> spi{};
            constexpr Register::FieldValue<decltype(frf)::Type,FrfVal::ti> ti{};
            constexpr Register::FieldValue<decltype(frf)::Type,FrfVal::microwire> microwire{};
        }
        ///Clock Out Polarity. This bit is only used in SPI mode.
        enum class CpolVal {
            low=0x00000000,     ///<SPI controller maintains the bus clock low between frames.
            high=0x00000001,     ///<SPI controller maintains the bus clock high between frames.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CpolVal> cpol{}; 
        namespace CpolValC{
            constexpr Register::FieldValue<decltype(cpol)::Type,CpolVal::low> low{};
            constexpr Register::FieldValue<decltype(cpol)::Type,CpolVal::high> high{};
        }
        ///Clock Out Phase. This bit is only used in SPI mode.
        enum class CphaVal {
            firstclock=0x00000000,     ///<SPI controller captures serial data on the first clock transition of the frame, that is, the transition away from the inter-frame state of the clock line.
            secondclock=0x00000001,     ///<SPI controller captures serial data on the second clock transition of the frame, that is, the transition back to the inter-frame state of the clock line.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CphaVal> cpha{}; 
        namespace CphaValC{
            constexpr Register::FieldValue<decltype(cpha)::Type,CphaVal::firstclock> firstclock{};
            constexpr Register::FieldValue<decltype(cpha)::Type,CphaVal::secondclock> secondclock{};
        }
        ///Serial Clock Rate. The number of prescaler output clocks per bit on the bus, minus one. Given that CPSDVSR is the prescale divider, and the APB clock PCLK clocks the prescaler, the bit frequency is PCLK / (CPSDVSR X [SCR+1]).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> scr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ssp0Cr1{    ///<Control Register 1. Selects master/slave and other modes.
        using Addr = Register::Address<0x40040004,0x00000000,0x00000000,unsigned>;
        ///Loop Back Mode.
        enum class LbmVal {
            duringNormalOperat=0x00000000,     ///<During normal operation.
            serialInputIsTake=0x00000001,     ///<Serial input is taken from the serial output (MOSI or MISO) rather than the serial input pin (MISO or MOSI respectively).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,LbmVal> lbm{}; 
        namespace LbmValC{
            constexpr Register::FieldValue<decltype(lbm)::Type,LbmVal::duringNormalOperat> duringNormalOperat{};
            constexpr Register::FieldValue<decltype(lbm)::Type,LbmVal::serialInputIsTake> serialInputIsTake{};
        }
        ///SPI Enable.
        enum class SseVal {
            disabled=0x00000000,     ///<The SPI controller is disabled.
            enabled=0x00000001,     ///<The SPI controller will interact with other devices on the serial bus. Software should write the appropriate control information to the other SSP/SPI registers and interrupt controller registers, before setting this bit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SseVal> sse{}; 
        namespace SseValC{
            constexpr Register::FieldValue<decltype(sse)::Type,SseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sse)::Type,SseVal::enabled> enabled{};
        }
        ///Master/Slave Mode.This bit can only be written when the SSE bit is 0.
        enum class MsVal {
            master=0x00000000,     ///<The SPI controller acts as a master on the bus, driving the SCLK, MOSI, and SSEL lines and receiving the MISO line.
            slave=0x00000001,     ///<The SPI controller acts as a slave on the bus, driving MISO line and receiving SCLK, MOSI, and SSEL lines.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,MsVal> ms{}; 
        namespace MsValC{
            constexpr Register::FieldValue<decltype(ms)::Type,MsVal::master> master{};
            constexpr Register::FieldValue<decltype(ms)::Type,MsVal::slave> slave{};
        }
        ///Slave Output Disable. This bit is relevant only in slave mode (MS = 1). If it is 1, this blocks this SPI controller from driving the transmit data line (MISO).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sod{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ssp0Dr{    ///<Data Register. Writes fill the transmit FIFO, and reads empty the receive FIFO.
        using Addr = Register::Address<0x40040008,0x00000000,0x00000000,unsigned>;
        ///Write: software can write data to be sent in a future frame to this register whenever the TNF bit in the Status register is 1, indicating that the Tx FIFO is not full. If the Tx FIFO was previously empty and the SPI controller is not busy on the bus, transmission of the data will begin immediately. Otherwise the data written to this register will be sent as soon as all previous data has been sent (and received). If the data length is less than 16 bit, software must right-justify the data written to this register. Read: software can read data from this register whenever the RNE bit in the Status register is 1, indicating that the Rx FIFO is not empty. When software reads this register, the SPI controller returns data from the least recent frame in the Rx FIFO. If the data length is less than 16 bit, the data is right-justified in this field with higher order bits filled with 0s.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ssp0Sr{    ///<Status Register
        using Addr = Register::Address<0x4004000c,0x00000000,0x00000000,unsigned>;
        ///Transmit FIFO Empty. This bit is 1 is the Transmit FIFO is empty, 0 if not.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tfe{}; 
        ///Transmit FIFO Not Full. This bit is 0 if the Tx FIFO is full, 1 if not.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tnf{}; 
        ///Receive FIFO Not Empty. This bit is 0 if the Receive FIFO is empty, 1 if not.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rne{}; 
        ///Receive FIFO Full. This bit is 1 if the Receive FIFO is full, 0 if not.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rff{}; 
        ///Busy. This bit is 0 if the SPI controller is idle, 1 if it is currently sending/receiving a frame and/or the Tx FIFO is not empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bsy{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ssp0Cpsr{    ///<Clock Prescale Register
        using Addr = Register::Address<0x40040010,0x00000000,0x00000000,unsigned>;
        ///This even value between 2 and 254, by which SPI_PCLK is divided to yield the prescaler output clock. Bit 0 always reads as 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cpsdvsr{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ssp0Imsc{    ///<Interrupt Mask Set and Clear Register
        using Addr = Register::Address<0x40040014,0x00000000,0x00000000,unsigned>;
        ///Software should set this bit to enable interrupt when a Receive Overrun occurs, that is, when the Rx FIFO is full and another frame is completely received. The ARM spec implies that the preceding frame data is overwritten by the new frame data when this occurs.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rorim{}; 
        ///Software should set this bit to enable interrupt when a Receive Time-out condition occurs. A Receive Time-out occurs when the Rx FIFO is not empty, and no has not been read for a time-out period. The time-out period is the same for master and slave modes and is determined by the SSP bit rate: 32 bits at PCLK / (CPSDVSR X [SCR+1]).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rtim{}; 
        ///Software should set this bit to enable interrupt when the Rx FIFO is at least half full.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxim{}; 
        ///Software should set this bit to enable interrupt when the Tx FIFO is at least half empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txim{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ssp0Ris{    ///<Raw Interrupt Status Register
        using Addr = Register::Address<0x40040018,0x00000000,0x00000000,unsigned>;
        ///This bit is 1 if another frame was completely received while the RxFIFO was full. The ARM spec implies that the preceding frame data is overwritten by the new frame data when this occurs.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rorris{}; 
        ///This bit is 1 if the Rx FIFO is not empty, and has not been read for a time-out period. The time-out period is the same for master and slave modes and is determined by the SSP bit rate: 32 bits at PCLK / (CPSDVSR X [SCR+1]).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rtris{}; 
        ///This bit is 1 if the Rx FIFO is at least half full.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxris{}; 
        ///This bit is 1 if the Tx FIFO is at least half empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txris{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ssp0Mis{    ///<Masked Interrupt Status Register
        using Addr = Register::Address<0x4004001c,0x00000000,0x00000000,unsigned>;
        ///This bit is 1 if another frame was completely received while the RxFIFO was full, and this interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rormis{}; 
        ///This bit is 1 if the Rx FIFO is not empty, has not been read for a time-out period, and this interrupt is enabled. The time-out period is the same for master and slave modes and is determined by the SSP bit rate: 32 bits at PCLK / (CPSDVSR X [SCR+1]).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rtmis{}; 
        ///This bit is 1 if the Rx FIFO is at least half full, and this interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxmis{}; 
        ///This bit is 1 if the Tx FIFO is at least half empty, and this interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txmis{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Ssp0Icr{    ///<SSPICR Interrupt Clear Register
        using Addr = Register::Address<0x40040020,0x00000000,0x00000000,unsigned>;
        ///Writing a 1 to this bit clears the frame was received when RxFIFO was full interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> roric{}; 
        ///Writing a 1 to this bit clears the Rx FIFO was not empty and has not been read for a timeout period interrupt. The timeout period is the same for master and slave modes and is determined by the SSP bit rate: 32 bits at PCLK / (CPSDVSR X [SCR+1]).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rtic{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
