#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx I2S interface Modification date=1/14/2011 Major revision=0 Minor revision=7 
    namespace I2s1Dao{    ///<I2S Digital Audio Output Register. Contains control bits for the I2S transmit channel.
        using Addr = Register::Address<0x400a3000,0x00000000,0x00000000,unsigned>;
        ///Selects the number of bytes in data as follows:
        enum class WordwidthVal {
            v8BitData=0x00000000,     ///<8-bit data
            v16BitData=0x00000001,     ///<16-bit data
            reservedDoNotUse=0x00000002,     ///<Reserved, do not use this setting
            v32BitData=0x00000003,     ///<32-bit data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,WordwidthVal> wordwidth{}; 
        namespace WordwidthValC{
            constexpr Register::FieldValue<decltype(wordwidth)::Type,WordwidthVal::v8BitData> v8BitData{};
            constexpr Register::FieldValue<decltype(wordwidth)::Type,WordwidthVal::v16BitData> v16BitData{};
            constexpr Register::FieldValue<decltype(wordwidth)::Type,WordwidthVal::reservedDoNotUse> reservedDoNotUse{};
            constexpr Register::FieldValue<decltype(wordwidth)::Type,WordwidthVal::v32BitData> v32BitData{};
        }
        ///When 1, data is of monaural format. When 0, the data is in stereo format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mono{}; 
        ///When 1, disables accesses on FIFOs, places the transmit channel in mute mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stop{}; 
        ///When 1, asynchronously resets the transmit channel and FIFO.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> reset{}; 
        ///When 0, the interface is in master mode. When 1, the interface is in slave mode. See Section 34.7.2 for a summary of useful combinations for this bit with TXMODE.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wsSel{}; 
        ///Word select half period minus 1, i.e. WS 64clk period -> ws_halfperiod = 31.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,6),Register::ReadWriteAccess,unsigned> wsHalfperiod{}; 
        ///When 1, the transmit channel sends only zeroes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mute{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace I2s1Dai{    ///<I2S Digital Audio Input Register. Contains control bits for the I2S receive channel.
        using Addr = Register::Address<0x400a3004,0x00000000,0x00000000,unsigned>;
        ///Selects the number of bytes in data as follows:
        enum class WordwidthVal {
            v8BitData=0x00000000,     ///<8-bit data
            v16BitData=0x00000001,     ///<16-bit data
            reservedDoNotUse=0x00000002,     ///<Reserved, do not use this setting
            v32BitData=0x00000003,     ///<32-bit data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,WordwidthVal> wordwidth{}; 
        namespace WordwidthValC{
            constexpr Register::FieldValue<decltype(wordwidth)::Type,WordwidthVal::v8BitData> v8BitData{};
            constexpr Register::FieldValue<decltype(wordwidth)::Type,WordwidthVal::v16BitData> v16BitData{};
            constexpr Register::FieldValue<decltype(wordwidth)::Type,WordwidthVal::reservedDoNotUse> reservedDoNotUse{};
            constexpr Register::FieldValue<decltype(wordwidth)::Type,WordwidthVal::v32BitData> v32BitData{};
        }
        ///When 1, data is of monaural format. When 0, the data is in stereo format.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mono{}; 
        ///When 1, disables accesses on FIFOs, places the transmit channel in mute mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stop{}; 
        ///When 1, asynchronously reset the transmit channel and FIFO.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> reset{}; 
        ///When 0, the interface is in master mode. When 1, the interface is in slave mode. See Section 34.7.2 for a summary of useful combinations for this bit with RXMODE.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wsSel{}; 
        ///Word select half period minus 1, i.e. WS 64clk period -> ws_halfperiod = 31.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,6),Register::ReadWriteAccess,unsigned> wsHalfperiod{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,15),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace I2s1Txfifo{    ///<I2S Transmit FIFO. Access register for the 8 x 32-bit transmitter FIFO.
        using Addr = Register::Address<0x400a3008,0x00000000,0x00000000,unsigned>;
        ///8 x 32-bit transmit FIFO.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> i2stxfifo{}; 
    }
    namespace I2s1Rxfifo{    ///<I2S Receive FIFO. Access register for the 8 x 32-bit receiver FIFO.
        using Addr = Register::Address<0x400a300c,0x00000000,0x00000000,unsigned>;
        ///8 x 32-bit transmit FIFO.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> i2srxfifo{}; 
    }
    namespace I2s1State{    ///<I2S Status Feedback Register. Contains status information about the I2S interface.
        using Addr = Register::Address<0x400a3010,0x00000000,0x00000000,unsigned>;
        ///This bit reflects the presence of Receive Interrupt or Transmit Interrupt. This is determined by comparing the current FIFO levels to the rx_depth_irq and tx_depth_irq fields in the IRQ register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irq{}; 
        ///This bit reflects the presence of Receive or Transmit DMA Request 1. This is determined by comparing the current FIFO levels to the rx_depth_dma1 and tx_depth_dma1 fields in the DMA1 register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmareq1{}; 
        ///This bit reflects the presence of Receive or Transmit DMA Request 2. This is determined by comparing the current FIFO levels to the rx_depth_dma2 and tx_depth_dma2 fields in the DMA2 register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmareq2{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reflects the current level of the Receive FIFO.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> rxLevel{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reflects the current level of the Transmit FIFO.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> txLevel{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace I2s1Dma1{    ///<I2S DMA Configuration Register 1. Contains control information for DMA request 1.
        using Addr = Register::Address<0x400a3014,0x00000000,0x00000000,unsigned>;
        ///When 1, enables DMA1 for I2S receive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxDma1Enable{}; 
        ///When 1, enables DMA1 for I2S transmit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txDma1Enable{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Set the FIFO level that triggers a receive DMA request on DMA1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> rxDepthDma1{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Set the FIFO level that triggers a transmit DMA request on DMA1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> txDepthDma1{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace I2s1Dma2{    ///<I2S DMA Configuration Register 2. Contains control information for DMA request 2.
        using Addr = Register::Address<0x400a3018,0x00000000,0x00000000,unsigned>;
        ///When 1, enables DMA1 for I2S receive.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxDma2Enable{}; 
        ///When 1, enables DMA1 for I2S transmit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txDma2Enable{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Set the FIFO level that triggers a receive DMA request on DMA2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> rxDepthDma2{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Set the FIFO level that triggers a transmit DMA request on DMA2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> txDepthDma2{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace I2s1Irq{    ///<I2S Interrupt Request Control Register. Contains bits that control how the I2S interrupt request is generated.
        using Addr = Register::Address<0x400a301c,0x00000000,0x00000000,unsigned>;
        ///When 1, enables I2S receive interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxIrqEnable{}; 
        ///When 1, enables I2S transmit interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txIrqEnable{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Set the FIFO level on which to create an irq request.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> rxDepthIrq{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Set the FIFO level on which to create an irq request.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> txDepthIrq{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace I2s1Txrate{    ///<I2S Transmit MCLK divider. This register determines the I2S TX MCLK rate by specifying the value to divide PCLK by in order to produce MCLK.
        using Addr = Register::Address<0x400a3020,0x00000000,0x00000000,unsigned>;
        ///I2S transmit MCLK rate denominator. This value is used to divide PCLK to produce the transmit MCLK. Eight bits of fractional divide supports a wide range of possibilities. A value of 0 stops the clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> yDivider{}; 
        ///I2S transmit MCLK rate numerator. This value is used to multiply PCLK by to produce the transmit MCLK. A value of 0 stops the clock. Eight bits of fractional divide supports a wide range of possibilities. Note: the resulting ratio X/Y is divided by 2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> xDivider{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace I2s1Rxrate{    ///<I2S Receive MCLK divider. This register determines the I2S RX MCLK rate by specifying the value to divide PCLK by in order to produce MCLK.
        using Addr = Register::Address<0x400a3024,0x00000000,0x00000000,unsigned>;
        ///I2S receive MCLK rate denominator. This value is used to divide PCLK to produce the receive MCLK. Eight bits of fractional divide supports a wide range of possibilities. A value of 0 stops the clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> yDivider{}; 
        ///I2S receive MCLK rate numerator. This value is used to multiply PCLK by to produce the receive MCLK. A value of 0 stops the clock. Eight bits of fractional divide supports a wide range of possibilities. Note: the resulting ratio X/Y is divided by 2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> xDivider{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace I2s1Txbitrate{    ///<I2S Transmit bit rate divider. This register determines the I2S transmit bit rate by specifying the value to divide TX_MCLK by in order to produce the transmit bit clock.
        using Addr = Register::Address<0x400a3028,0x00000000,0x00000000,unsigned>;
        ///I2S transmit bit rate. This value plus one is used to divide TX_MCLK to produce the transmit bit clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> txBitrate{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace I2s1Rxbitrate{    ///<I2S Receive bit rate divider. This register determines the I2S receive bit rate by specifying the value to divide RX_MCLK by in order to produce the receive bit clock.
        using Addr = Register::Address<0x400a302c,0x00000000,0x00000000,unsigned>;
        ///I2S receive bit rate. This value plus one is used to divide RX_MCLK to produce the receive bit clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> rxBitrate{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace I2s1Txmode{    ///<I2S Transmit mode control.
        using Addr = Register::Address<0x400a3030,0x00000000,0x00000000,unsigned>;
        ///Clock source selection for the transmit bit clock divider.
        enum class TxclkselVal {
            selectTheTxFracti=0x00000000,     ///<Select the TX fractional rate divider clock output as the source
            selectTheRxMclkS=0x00000002,     ///<Select the RX_MCLK signal as the TX_MCLK clock source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,TxclkselVal> txclksel{}; 
        namespace TxclkselValC{
            constexpr Register::FieldValue<decltype(txclksel)::Type,TxclkselVal::selectTheTxFracti> selectTheTxFracti{};
            constexpr Register::FieldValue<decltype(txclksel)::Type,TxclkselVal::selectTheRxMclkS> selectTheRxMclkS{};
        }
        ///Transmit 4-pin mode selection. When 1, enables 4-pin mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tx4pin{}; 
        ///Enable for the TX_MCLK output. When 0, output of TX_MCLK is not enabled. When 1, output of TX_MCLK is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txmcena{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace I2s1Rxmode{    ///<I2S Receive mode control.
        using Addr = Register::Address<0x400a3034,0x00000000,0x00000000,unsigned>;
        ///Clock source selection for the receive bit clock divider.
        enum class RxclkselVal {
            selectTheRxFracti=0x00000000,     ///<Select the RX fractional rate divider clock output as the source
            selectTheTxMclkS=0x00000002,     ///<Select the TX_MCLK signal as the RX_MCLK clock source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,RxclkselVal> rxclksel{}; 
        namespace RxclkselValC{
            constexpr Register::FieldValue<decltype(rxclksel)::Type,RxclkselVal::selectTheRxFracti> selectTheRxFracti{};
            constexpr Register::FieldValue<decltype(rxclksel)::Type,RxclkselVal::selectTheTxMclkS> selectTheTxMclkS{};
        }
        ///Receive 4-pin mode selection. When 1, enables 4-pin mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rx4pin{}; 
        ///Enable for the RX_MCLK output. When 0, output of RX_MCLK is not enabled. When 1, output of RX_MCLK is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rxmcena{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
