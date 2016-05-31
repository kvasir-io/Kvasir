#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Registers group
    namespace Spi2SpiCntrl{    ///<Control and Status Register
        using Addr = Register::Address<0x40130000,0xff210000,0x00000000,unsigned>;
        ///Go and Busy Status1 = In master mode, writing 1 to this bit to start the SPI data transfer; in slave mode, writing 1 to this bit indicates that the slave is ready to communicate with a master.0 = Writing 0 to this bit to stop data transfer if SPI is transferring.During the data transfer, this bit keeps the value of 1. As the transfer is finished, this bit will be cleared automatically.NOTE: All registers should be set before writing 1 to this GO_BUSY bit. The transfer result will be unpredictable if software changes related settings when GO_BUSY bit is 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::modify>,unsigned> goBusy{}; 
        ///Receive At Negative Edge1 = The received data input signal is latched at the falling edge of SPICLK.0 = The received data input signal is latched at the rising edge of SPICLK.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxNeg{}; 
        ///Transmit At Negative Edge1 = The transmitted data output signal is changed at the falling edge of SPICLK.0 = The transmitted data output signal is changed at the rising edge of SPICLK.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txNeg{}; 
        ///Transmit Bit LengthThis field specifies how many bits are transmitted in one transaction. Up to 32 bits can be transmitted.TX_BIT_LEN = 0x01 ... 1 bitTX_BIT_LEN = 0x02 ... 2 bits......TX_BIT_LEN = 0x1f ... 31 bitsTX_BIT_LEN = 0x00 .. 32 bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> txBitLen{}; 
        ///Numbers of Transmit/Receive WordThis field specifies how many transmit/receive word numbers should be executed in one transfer.00 = Only one transmit/receive word will be executed in one transfer.01 = Two successive transmit/receive words will be executed in one transfer. (burst mode)10 = Reserved.11 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> txNum{}; 
        ///LSB First1 = The LSB is sent first on the line (bit 0 of SPI_TX0/1), and the first bit received from the line will be put in the LSB position of the RX register (bit 0 of SPI_RX0/1).0 = The MSB is transmitted/received first (which bit in SPI_TX0/1 and SPI_RX0/1 register that is depends on the TX_BIT_LEN field).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> lsb{}; 
        ///Clock Polarity1 = SPICLK idle high.0 = SPICLK idle low.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clkp{}; 
        ///Suspend Interval (master only)These four bits provide configurable suspend interval between two successive transmit/receive transactions in a transfer. The suspend interval is from the last falling clock edge of the current transaction to the first rising clock edge of the successive transaction if CLKP = 0. If CLKP = 1, the interval is from the rising clock edge to the falling clock edge. The default value is 0x0. When TX_NUM = 00b, setting this field has no effect on transfer. The desired suspend interval is obtained according to the following equation:(SP_CYCLE[3:0] + 2)*period of SPI clockSP_CYCLE = 0x0 ... 2 SPICLK clock cycleSP_CYCLE = 0x1 ... 3 SPICLK clock cycle......SP_CYCLE = 0xe ... 16 SPICLK clock cycleSP_CYCLE = 0xf ... 17 SPICLK clock cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> spCycle{}; 
        ///Interrupt Flag1 = It indicates that the transfer is done. The interrupt flag is set if it was enable.0 = It indicates that the transfer does not finish yet.NOTE: This bit can be cleared by writing 1 to itself.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> if_{}; 
        ///Interrupt Enable1 = Enable MICROWIRE/SPI Interrupt.0 = Disable MICROWIRE/SPI Interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ie{}; 
        ///SLAVE Mode Indication1 = Slave mode.0 = Master mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> slave{}; 
        ///Reorder Mode Select00 = Disable both byte reorder and byte suspend functions.01 = Enable byte reorder function and insert a byte suspend interval (2~17 SPICLK cycles) among each byte. The setting of TX_BIT_LEN must be configured as 0x00. (32 bits/word).10 = Enable byte reorder function, but disable byte suspend function.11 = Disable byte reorder function, but insert a suspend interval (2~17 SPICLK cycles) among each byte. The setting of TX_BIT_LEN must be configured as 0x00. (32 bits/word).Byte reorder function is only available if TX_BIT_LEN is defined as 16, 24 and 32.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,19),Register::ReadWriteAccess,unsigned> reorder{}; 
        ///Two Bits Transfer Mode Active1 = Enable two-bit transfer mode.0 = disable two-bit transfer mode.Note that when enable TWOB, the serial transmitted 2-bit data output are from SPI_TX1/0, and the received 2-bit data input are put in SPI_RX1/0.Note that when enable TWOB, the setting of TX_NUM must be programmed as 0x00.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> twob{}; 
        ///Variable Clock Enable (master only)1 = The serial clock output frequency is variable. The output frequency is decided by the value of VARCLK, DIVIDER, and DIVIDER2.0 = The serial clock output frequency is fixed and decided only by the value of DIVIDER. Note that when enable this VARCLK_EN bit, the setting of TX_BIT_LEN must be programmed as 0x10 (16 bits mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> varclkEn{}; 
    }
    namespace Spi2SpiDivider{    ///<Clock Divider Register
        using Addr = Register::Address<0x40130004,0x00000000,0x00000000,unsigned>;
        ///Clock Divider Register (master only) The value in this field is the frequency divider of the system clock, PCLK, to generate the serial clock on the output SPICLK. The desired frequency is obtained according to the following equation:fsclk = fpclk / ((DIVIDER+1)*2)In slave mode, the period of SPI clock driven by a master shall equal or over 5 times the period of PCLK. In other words, the maximum frequency of SPI clock is the fifth of the frequency of slave's PCLK.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> divider{}; 
        ///Clock Divider 2 Register (master only) The value in this field is the 2nd frequency divider of the system clock, PCLK, to generate the serial clock on the output SPICLK. The desired frequency is obtained according to the following equation:fsclk = fpclk / ((DIVIDER2+1)*2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> divider2{}; 
    }
    namespace Spi2SpiSsr{    ///<Slave Select Register
        using Addr = Register::Address<0x40130008,0xffffffc0,0x00000000,unsigned>;
        ///Slave Select Register (master only)If AUTOSS bit is cleared, writing 1 to any bit location of this field sets the proper SPISSx0/1 line to an active state and writing 0 sets the line back to inactive state.If AUTOSS bit is set, writing 1 to any bit location of this field will select appropriate SPISSx0/1 line to be automatically driven to active state for the duration of the transmit/receive, and will be driven to inactive state for the rest of the time. (The active level of SPISSx0/1 is specified in SS_LVL).Note: 1. This interface can only drive one device/slave at a given time. Therefore, the slave select pin of the selected device must be set to its active level before starting any read or write transfer. 2. SPISSx0 is also defined as device/slave select input signal in slave mode. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ssr{}; 
        ///Slave Select Active LevelIt defines the active level of slave select signal (SPISSx0/1). 1 = The slave select signal SPISSx0/1 is active at high-level/rising-edge.0 = The slave select signal SPISSx0/1 is active at low-level/falling-edge..
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ssLvl{}; 
        ///Automatic Slave Select (master only)1 = If this bit is set, SPISSx0/1 signals are generated automatically. It means that slave select signal, which is set in SSR[1:0] register is asserted by the SPI controller when transmit/receive is started by setting GO_BUSY, and is de-asserted after each transmit/receive is finished.0 = If this bit is cleared, slave select signals are asserted and de-asserted by setting and clearing related bits in SSR[1:0] register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> autoss{}; 
        ///Slave Select Level Trigger (slave only)1: The slave select signal will be level-trigger. It depends on SS_LVL to decide the signal is active low or active high.0: The input slave select signal is edge-trigger. This is default value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ssLtrig{}; 
        ///Level Trigger FlagWhen the SS_LTRIG bit is set in slave mode, this bit can be read to indicate the received bit number is met the requirement or not.1 = The transaction number and the transferred bit length met the specified requirements which defined in TX_NUM and TX_BIT_LEN.0 = The transaction number or the transferred bit length of one transaction doesn't meet the specified requirements.Note: This bit is READ only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ltrigFlag{}; 
    }
    namespace Spi2SpiRx0{    ///<Data Receive Register 0
        using Addr = Register::Address<0x40130010,0x00000000,0x00000000,unsigned>;
        ///Data Receive RegisterThe Data Receive Registers hold the value of received data of the last executed transfer. The number of valid bits depend on the transmit bit length field in the SPI_CNTRL register. For example, if TX_BIT_LEN is set to 0x08 and TX_NUM is set to 0x0, bit RX0[7:0] holds the received data.NOTE: The Data Receive Registers are read only registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rx{}; 
    }
    namespace Spi2SpiRx1{    ///<Data Receive Register 1
        using Addr = Register::Address<0x40130014,0x00000000,0x00000000,unsigned>;
        ///Data Receive RegisterThe Data Receive Registers hold the value of received data of the last executed transfer. The number of valid bits depend on the transmit bit length field in the SPI_CNTRL register. For example, if TX_BIT_LEN is set to 0x08 and TX_NUM is set to 0x0, bit RX0[7:0] holds the received data.NOTE: The Data Receive Registers are read only registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rx{}; 
    }
    namespace Spi2SpiTx0{    ///<Data Transmit Register 0
        using Addr = Register::Address<0x40130020,0x00000000,0x00000000,unsigned>;
        ///Data Transmit RegisterThe Data Transmit Registers hold the data to be transmitted in the next transfer. The number of valid bits depend on the transmit bit length field in the CNTRL register. For example, if TX_BIT_LEN is set to 0x08 and the TX_NUM is set to 0x0, the bit TX0[7:0] will be transmitted in next transfer. If TX_BIT_LEN is set to 0x00 and TX_NUM is set to 0x1, the core will perform two successive 32-bit transmit/receive using the same setting (the order is TX0[31:0], TX1[31:0]).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tx{}; 
    }
    namespace Spi2SpiTx1{    ///<Data Transmit Register 1
        using Addr = Register::Address<0x40130024,0x00000000,0x00000000,unsigned>;
        ///Data Transmit RegisterThe Data Transmit Registers hold the data to be transmitted in the next transfer. The number of valid bits depend on the transmit bit length field in the CNTRL register. For example, if TX_BIT_LEN is set to 0x08 and the TX_NUM is set to 0x0, the bit TX0[7:0] will be transmitted in next transfer. If TX_BIT_LEN is set to 0x00 and TX_NUM is set to 0x1, the core will perform two successive 32-bit transmit/receive using the same setting (the order is TX0[31:0], TX1[31:0]).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tx{}; 
    }
    namespace Spi2SpiVarclk{    ///<Variable Clock Pattern Register
        using Addr = Register::Address<0x40130034,0x00000000,0x00000000,unsigned>;
        ///Variable Clock Pattern The value in this field is the frequency patterns of the SPI clock. If the bit patterns of VARCLK are 0, the output frequency of SPICLK is according the value of DIVIDER. If the bit patterns of VARCLK are 1, the output frequency of SPICLK is according the value of DIVIDER2. Refer to register SPI_DIVIDER.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> varclk{}; 
    }
    namespace Spi2SpiDma{    ///<SPI DMA control register
        using Addr = Register::Address<0x40130038,0xfffffffc,0x00000000,unsigned>;
        ///Transmit DMA startSet this bit to 1 will start the transmit DMA process. SPI module will issue request to DMA module automatically. If using DMA mode to transfer data, remember not to set GO_BUSY bit of SPI_CNTRL register. The DMA controller inside SPI module will set it automatically whenever necessary.Hardware will clear this bit automatically after DMA transfer done.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txDmaGo{}; 
        ///Receive DMA startSet this bit to 1 will start the receive DMA process. SPI module will issue request to DMA module automatically. Hardware will clear this bit automatically after DMA transfer done.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxDmaGo{}; 
    }
}
