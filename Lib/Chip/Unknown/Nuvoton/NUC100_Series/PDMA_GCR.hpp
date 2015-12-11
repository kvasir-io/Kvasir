#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Registers group
    namespace NonepdmaGcrcsr{    ///<PDMA Global Control Register
        using Addr = Register::Address<0x50008f00,0xfffe00ff,0,unsigned>;
        ///PDMA Controller Channel 0 Clock Enable Control
0 = Disable
1 = Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clk0En{}; 
        ///PDMA Controller Channel 1 Clock Enable Control(Medium Density Only)
0 = Disable
1 = Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clk1En{}; 
        ///PDMA Controller Channel 2 Clock Enable Control(Medium Density Only)
0 = Disable
1 = Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clk2En{}; 
        ///PDMA Controller Channel 3 Clock Enable Control(Medium Density Only)
0 = Disable
1 = Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clk3En{}; 
        ///PDMA Controller Channel 4 Clock Enable Control(Medium Density Only)
0 = Disable
1 = Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clk4En{}; 
        ///PDMA Controller Channel 5 Clock Enable Control(Medium Density Only)
0 = Disable
1 = Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clk5En{}; 
        ///PDMA Controller Channel 6 Clock Enable Control(Medium Density Only)
0 = Disable
1 = Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clk6En{}; 
        ///PDMA Controller Channel 7 Clock Enable Control(Medium Density Only)
0 = Disable
1 = Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clk7En{}; 
        ///PDMA Controller Channel 8 Clock Enable Control(Medium Density Only)
0 = Disable
1 = Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clk8En{}; 
    }
    namespace Nonepdssr0{    ///<PDMA Service Selection Control Register 0
        using Addr = Register::Address<0x50008f04,0x00000000,0,unsigned>;
        ///PDMA SPI0 RX Selection
This filed defines which PDMA channel is connected to the on-chip peripheral SPI0 RX. Software can change the channel RX setting by SPI0_RXSEL
4'b0000: CH0
4'b0001: CH1
4'b0010: CH2
4'b0011: CH3 
4'b0100: CH4 
4'b0101: CH5
4'b0110: CH6
4'b0111: CH7
4'b1000: CH8
Others : Reserved
Note : Ex : SPI0_RXSEL = 4'b0110, that means SPI0_RX is connected to PDMA_CH6(Low Density should set as 4'b0000 for PDMA channel 0 only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> spi0Rxsel{}; 
        ///PDMA SPI0 TX Selection
This filed defines which PDMA channel is connected to the on-chip peripheral SPI0 TX. Software can configure the TX channel setting by SPI0_TXSEL. The channel configuration is the same as SPI0_RXSEL field. Please refer to the explanation of SPI0_RXSEL.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> spi0Txsel{}; 
        ///PDMA SPI1 RX Selection
This filed defines which PDMA channel is connected to the on-chip peripheral SPI1 RX. Software can configure the RX channel setting by SPI1_RXSEL. The channel configuration is the same as SPI0_RXSEL field. Please refer to the explanation of SPI0_RXSEL.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> spi1Rxsel{}; 
        ///PDMA SPI1 TX Selection
This filed defines which PDMA channel is connected to the on-chip peripheral SPI1 TX. Software can configure the TX channel setting by SPI1_TXSEL. The channel configuration is the same as SPI0_RXSEL field. Please refer to the explanation of SPI0_RXSEL.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> spi1Txsel{}; 
        ///PDMA SPI2 RX Selection (Medium Density Only)
This filed defines which PDMA channel is connected to the on-chip peripheral SPI2 RX. Software can configure the RX channel setting by SPI2_RXSEL. The channel configuration is the same as SPI0_RXSEL field. Please refer to the explanation of SPI0_RXSEL.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> spi2Rxsel{}; 
        ///PDMA SPI2 TX Selection (Medium Density Only)
This filed defines which PDMA channel is connected to the on-chip peripheral SPI2 TX. Software can configure the TX channel setting by SPI2_TXSEL. The channel configuration is the same as SPI0_RXSEL field. Please refer to the explanation of SPI0_RXSEL.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> spi2Txsel{}; 
        ///PDMA SPI3 RX Selection (Medium Density Only)
This filed defines which PDMA channel is connected to the on-chip peripheral SPI3 RX. Software can configure the RX channel setting by SPI3_RXSEL. The channel configuration is the same as SPI0_RXSEL field. Please refer to the explanation of SPI0_RXSEL.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> spi3Rxsel{}; 
        ///PDMA SPI3 TX Selection (Medium Density Only)
This filed defines which PDMA channel is connected to the on-chip peripheral SPI3 TX. Software can configure the TX channel setting by SPI3_TXSEL. The channel configuration is the same as SPI0_RXSEL field. Please refer to the explanation of SPI0_RXSEL.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> spi3Txsel{}; 
    }
    namespace Nonepdssr1{    ///<PDMA Service Selection Control Register 1
        using Addr = Register::Address<0x50008f08,0xf0ff0000,0,unsigned>;
        ///This filed defines which PDMA channel is connected to the on-chip peripheral UART0 RX. Software can change the channel RX setting by UART0_RXSEL
4'b0000: CH0
4'b0001: CH1
4'b0010: CH2
4'b0011: CH3 
4'b0100: CH4 
4'b0101: CH5
4'b0110: CH6
4'b0111: CH7
4'b1000: CH8
Others : Reserved
Note : Ex : UART0_RXSEL = 4'b0110, that means UART0_RX is connected to PDMA_CH6(Low Density should set as 4'b0000 for PDMA channel 0 only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> uart0Rxsel{}; 
        ///PDMA UART0 TX Selection
This filed defines which PDMA channel is connected to the on-chip peripheral UART0 TX. Software can configure the TX channel setting by UART0_TXSEL. The channel configuration is the same as UART0_RXSEL field. Please refer to the explanation of UART0_RXSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> uart0Txsel{}; 
        ///PDMA UART1 RX Selection
This filed defines which PDMA channel is connected to the on-chip peripheral UART1 RX. Software can configure the RX channel setting by UART1_RXSEL. The channel configuration is the same as UART0_RXSEL field. Please refer to the explanation of UART0_RXSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> uart1Rxsel{}; 
        ///PDMA UART1 TX Selection
This filed defines which PDMA channel is connected to the on-chip peripheral UART1 TX. Software can configure the TX channel setting by UART1_TXSEL. The channel configuration is the same as UART0_RXSEL field. Please refer to the explanation of UART0_RXSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> uart1Txsel{}; 
        ///PDMA ADC RX Selection
This filed defines which PDMA channel is connected to the on-chip peripheral ADC RX. Software can configure the RX channel setting by ADC_RXSEL. The channel configuration is the same as UART0_RXSEL field. Please refer to the explanation of UART0_RXSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> adcRxsel{}; 
    }
    namespace NonepdmaGcrisr{    ///<PDMA Global Interrupt Register
        using Addr = Register::Address<0x50008f0c,0x7ffffe00,0,unsigned>;
        ///Interrupt Pin Status of Channel 0
This bit is the Interrupt pin status of PDMA channel0.
Note: This bit is read only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> intr0{}; 
        ///Interrupt Pin Status of Channel 1 (Medium Density Only)
This bit is the Interrupt pin status of PDMA channel1.
Note: This bit is read only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> intr1{}; 
        ///Interrupt Pin Status of Channel 2 (Medium Density Only)
This bit is the Interrupt pin status of PDMA channel2.
Note: This bit is read only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> intr2{}; 
        ///Interrupt Pin Status of Channel 3 (Medium Density Only)
This bit is the Interrupt pin status of PDMA channel3.
Note: This bit is read only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intr3{}; 
        ///Interrupt Pin Status of Channel 4 (Medium Density Only)
This bit is the Interrupt pin status of PDMA channel4.
Note: This bit is read only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> intr4{}; 
        ///Interrupt Pin Status of Channel 5 (Medium Density Only)
This bit is the Interrupt pin status of PDMA channel5.
Note: This bit is read only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intr5{}; 
        ///Interrupt Pin Status of Channel 6 (Medium Density Only)
This bit is the Interrupt pin status of PDMA channel 6.
Note: This bit is read only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> intr6{}; 
        ///Interrupt Pin Status of Channel 7 (Medium Density Only)
This bit is the Interrupt pin status of PDMA channel 7.
Note: This bit is read only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> intr7{}; 
        ///Interrupt Pin Status of Channel 4 (Medium Density Only)
This bit is the Interrupt pin status of PDMA channel 8.
Note: This bit is read only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> intr8{}; 
        ///Interrupt Pin Status
This bit is the Interrupt pin status of PDMA controller.
Note: This bit is read only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> intr{}; 
    }
    namespace Nonepdssr2{    ///<PDMA Service Selection Control Register 2
        using Addr = Register::Address<0x50008f10,0xffffff00,0,unsigned>;
        ///PDMA I2S RX Selection

This filed defines which PDMA channel is connected to the on-chip peripheral I2S RX. Software can change the channel RX setting by I2S_RXSEL
4'b0000: CH0
4'b0001: CH1
4'b0010: CH2
4'b0011: CH3 
4'b0100: CH4 
4'b0101: CH5
4'b0110: CH6
4'b0111: CH7
4'b1000: CH8
Others : Reserved
Note : Ex : I2S_RXSEL = 4'b0110, that means I2S_RX is connected to PDMA_CH6(Low Density should set as 4'b0000 for PDMA channel 0 only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> i2sRxsel{}; 
        ///PDMA I2S TX Selection
This filed defines which PDMA channel is connected to the on-chip peripheral I2S TX. Software can configure the TX channel setting by I2S_TXSEL. The channel configuration is the same as I2S_RXSEL field. Please refer to the explanation of I2S_RXSEL.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> i2sTxsel{}; 
    }
}
