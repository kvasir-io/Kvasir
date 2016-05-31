#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Registers group
    namespace I2sI2sCon{    ///<I2S Control Register
        using Addr = Register::Address<0x401a0000,0xffc00000,0x00000000,unsigned>;
        ///Enable I2S Controller1 = Enable0 = Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> i2sen{}; 
        ///Transmit Enable1 = Enable data transmit0 = Disable data transmit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txen{}; 
        ///Receive Enable1 = Enable data receive0 = Disable data receive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxen{}; 
        ///Transmit Mute Enable1 = Transmit channel zero0 = Transmit data is shifted from buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mute{}; 
        ///Word Width00 = data is 8 bit01 = data is 16 bit10 = data is 24 bit11 = data is 32 bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> wordwidth{}; 
        ///Monaural Data1 = Data is monaural format0 = Data is stereo format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mono{}; 
        ///Data Format1 = MSB justified data format0 = I2S data format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> format{}; 
        ///Slave ModeI2S can operate as master or slave. For master mode, I2S_BCLK and I2S_LRCLK pins are output mode and send bit clock from NuMicro(TM) NUC100 series to Audio CODEC chip. In slave mode, I2S_BCLK and I2S_LRCLK pins are input mode and I2S_BCLK and I2S_LRCLK signals are received from outer Audio CODEC chip.1 = Slave mode0 = Master mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> slave{}; 
        ///Transmit FIFO Threshold LevelIf remain data word (32 bits) in transmit FIFO is the same or less than threshold level then TXTHI flag is set.000 = 0 word data in transmit FIFO001 = 1 word data in transmit FIFO010 = 2 words data in transmit FIFO011 = 3 words data in transmit FIFO100 = 4 word data in transmit FIFO101 = 5 word data in transmit FIFO110 = 6 word data in transmit FIFO111 = 7 word data in transmit FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> txth{}; 
        ///Receive FIFO Threshold LevelWhen received data word(s) in buffer is equal or higher than threshold level then RXTHI flag is set.000 = 1 word data in receive FIFO001 = 2 word data in receive FIFO010 = 3 word data in receive FIFO011 = 4 word data in receive FIFO100 = 5 word data in receive FIFO101 = 6 word data in receive FIFO110 = 7 word data in receive FIFO111 = 8 word data in receive FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> rxth{}; 
        ///Master Clock EnableIf NuMicro(TM) NUC100 series external crystal clock is frequency 2*N*256fs then software can program MCLK_DIV[2:0] in I2S_CLKDIV register to get 256fs clock to audio codec chip.1 = Enable master clock0 = Disable master clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mclken{}; 
        ///Right channel zero cross detect enableIf this bit is set to 1, when left channel data sign bit change or next shift data bits are all zero then RZCF flag in I2S_STATUS register is set to 1.1 = Enable right channel zero cross detect0 = Disable right channel zero cross detect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rchzcen{}; 
        ///Left channel zero cross detect enableIf this bit is set to 1, when left channel data sign bit change or next shift data bits are all zero then LZCF flag in I2S_STATUS register is set to 1.1 = Enable left channel zero cross detect0 = Disable left channel zero cross detect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lchzcen{}; 
        ///Clear Transmit FIFOWrite 1 to clear transmit FIFO, internal pointer is reset to FIFO start point, and TXFIFO_LEVEL[3:0] returns to zero and transmit FIFO becomes empty but data in transmit FIFO is not changed.This bit is clear by hardware automatically, read it return zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::modify>,unsigned> clrTxfifo{}; 
        ///Clear Receive FIFOWrite 1 to clear receive FIFO, internal pointer is reset to FIFO start point, and RXFIFO_LEVEL[3:0] returns to zero and receive FIFO becomes empty.This bit is clear by hardware automatically, read it return zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::modify>,unsigned> clrRxfifo{}; 
        ///Enable Transmit DMAWhen TX DMA is enabled, I2S requests DMA to transfer data from SRAM to transmit FIFO if FIFO is not full.1 = Enable TX DMA0 = Disable TX DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> txdma{}; 
        ///Enable Receive DMAWhen RX DMA is enabled, I2S requests DMA to transfer data from receive FIFO to SRAM if FIFO is not empty.1 = Enable RX DMA0 = Disable RX DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rxdma{}; 
    }
    namespace I2sI2sClkdiv{    ///<I2S Clock Divider Register
        using Addr = Register::Address<0x401a0004,0xffff00f8,0x00000000,unsigned>;
        ///Master Clock DividerIf chip external crystal frequency is (2xMCLK_DIV)*256fs then software can program these bits to generate 256fs clock frequency to audio codec chip. If MCLK_DIV is set to 0, MCLK is the same as external clock input.For example, sampling rate is 24 kHz and chip external crystal clock is 12.288 MHz, set MCLK_DIV=1.F_MCLK = F_I2SCLK/(2x(MCLK_DIV)) (When MCLK_DIV is >= 1 )F_MCLK = F_I2SCLK (When MCLK_DIV is set to 0 )
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> mclkDiv{}; 
        ///Bit Clock DividerIf I2S operates in master mode, bit clock is provided by NuMicro(TM) NUC100 series. Software can program these bits to generate sampling rate clock frequency.F_BCLK = F_I2SCLK /(2x(BCLK_DIV + 1))
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> bclkDiv{}; 
    }
    namespace I2sI2sIe{    ///<I2S Interrupt Enable Register
        using Addr = Register::Address<0x401a0008,0xffffe0f8,0x00000000,unsigned>;
        ///Receive FIFO underflow interrupt enableIf software read receive FIFO when it is empty then RXUDF flag in I2SSTATUS register is set to 1.1 = Enable interrupt0 = Disable interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxudfie{}; 
        ///Receive FIFO overflow interrupt enable1 = Enable interrupt0 = Disable interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxovfie{}; 
        ///Receive FIFO threshold level interruptWhen data word in receive FIFO is equal or higher then RXTH[2:0] and the RXTHI bit is set to 1. If RXTHIE bit is enabled, interrupt occur.1 = Enable interrupt0 = Disable interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxthie{}; 
        ///Transmit FIFO underflow interrupt enableInterrupt occurs if this bit is set to 1 and transmit FIFO underflow flag is set to 1.1 = Enable interrupt0 = Disable interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txudfie{}; 
        ///Transmit FIFO overflow interrupt enableInterrupt occurs if this bit is set to 1 and transmit FIFO overflow flag is set to 1.1 = Enable interrupt0 = Disable interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txovfie{}; 
        ///Transmit FIFO threshold level interrupt enableInterrupt occurs if this bit is set to 1 and data words in transmit FIFO is less than TXTH[2:0].1 = Enable interrupt0 = Disable interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txthie{}; 
        ///Right channel zero cross interrupt enableInterrupt occurs if this bit is set to 1 and right channel zero cross.1 = Enable interrupt0 = Disable interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rzcie{}; 
        ///Left channel zero cross interrupt enableInterrupt occurs if this bit is set to 1 and left channel zero cross.1 = Enable interrupt0 = Disable interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> lzcie{}; 
    }
    namespace I2sI2sStatus{    ///<I2S Status Register
        using Addr = Register::Address<0x401a000c,0x00c3e3f0,0x00000000,unsigned>;
        ///I2S Interrupt flag1 = I2S interrupt0 = No I2S interrupIt is wire-OR of I2STXINT and I2SRXINT bits.This bit is read only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> i2sint{}; 
        ///I2S receive interrupt1 = Receive interrupt0 = No receive interruptThis bit is read only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> i2srxint{}; 
        ///I2S transmit interrupt1 = Transmit interrupt0 = No transmit interruptThis bit is read only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> i2stxint{}; 
        ///Right channelThis bit indicate current transmit data is belong to right channel.1 = Right channel0 = Left channelThis bit is read only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> right{}; 
        ///Receive FIFO underflow flagRead receive FIFO when it is empty, this bit set to 1 indicate underflow occur.1 = Underflow occur0 = No underflow occurWrite 1 to clear this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> rxudf{}; 
        ///Receive FIFO overflow flagWhen receive FIFO is full and receive hardware attempt write to data into receive FIFO then this bit is set to 1, data in 1st buffer is overwrote.1 = Overflow occur0 = No overflow occurWrite 1 to clear this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> rxovf{}; 
        ///Receive FIFO threshold flagWhen data word(s) in receive FIFO is equal or higher than threshold value set in RXTH[2:0] the RXTHF bit becomes to 1. It keeps at 1 till RXFIFO_LEVEL[3:0] less than RXTH[1:0] after software read RXFIFO register.1 = Data word(s) in FIFO is equal or higher than threshold level0 = Data word(s) in FIFO is lower than threshold levelThis bit is read only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxthf{}; 
        ///Receive FIFO fullThis bit reflect data words number in receive FIFO is 8.1 = Full0 = Not fullThis bit is read only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxfull{}; 
        ///Receive FIFO emptyThis bit reflects data words number in receive FIFO is zero.1 = Empty0 = Not emptyThis bit is read only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxempty{}; 
        ///Transmit FIFO underflow flagWhen transmit FIFO is empty and shift logic hardware read data from data FIFO causes this set to 1.1 = Underflow0 = No underflowSoftware can write 1 to clear this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> txudf{}; 
        ///Transmit FIFO overflow flagWrite data to transmit FIFO when it is full and this bit set to 1.1 = Overflow0 = No overflowSoftware can write 1 to clear this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> txovf{}; 
        ///Transmit FIFO threshold flagWhen data word(s) in transmit FIFO is equal or lower than threshold value set in TXTH[2:0] the TXTHF bit becomes to 1. It keeps at 1 till TXFIFO_LEVEL[3:0] is higher than TXTH[1:0] after software write TXFIFO register.1 = Data word(s) in FIFO is equal or lower than threshold level0 = Data word(s) in FIFO is higher than threshold level This bit is read only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txthf{}; 
        ///Transmit FIFO fullThis bit reflect data word number in transmit FIFO is 8.1 = Full0 = Not fullThis bit is read only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txfull{}; 
        ///Transmit FIFO emptyThis bit reflect data word number in transmit FIFO is zero.1 = Empty0 = Not emptyThis bit is read only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txempty{}; 
        ///Transmit BusyThis bit is clear to 0 when all data in transmit FIFO and shift buffer is shifted out. And set to 1 when 1st data is load to shift buffer.1 = Transmit shift buffer is busy0 = Transmit shift buffer is emptyThis bit is read only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txbusy{}; 
        ///Right channel zero cross flagIt indicates right channel next sample data sign bit is changed or all data bits are zero.1 = Right channel zero cross is detected0 = No zero crossSoftware can write 1 to clear this bit to zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> rzcf{}; 
        ///Left channel zero cross flagIt indicates left channel next sample data sign bit is changed or all data bits are zero.1 = Left channel zero cross is detected0 = No zero crossSoftware can write 1 to clear this bit to zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> lzcf{}; 
        ///Receive FIFO levelThese bits indicate word number in receive FIFO.0000 = No data0001 = 1 word in receive FIFO0010 = 2 word in receive FIFO0011 = 3 word in receive FIFO0100 = 4 word in receive FIFO0101 = 5 word in receive FIFO0110 = 6 word in receive FIFO0111 = 7 word in receive FIFO1000 = 8 word in receive FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxLevel{}; 
        ///Transmit FIFO levelThese bits indicate word number in Transmit FIFO.0000 = No data0001 = 1 word in Transmit FIFO0010 = 2 word in Transmit FIFO0011 = 3 word in Transmit FIFO0100 = 4 word in Transmit FIFO0101 = 5 word in Transmit FIFO0110 = 6 word in Transmit FIFO0111 = 7 word in Transmit FIFO1000 = 8 word in Transmit FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txLevel{}; 
    }
    namespace I2sI2sTxfifo{    ///<I2S Transmit FIFO Register
        using Addr = Register::Address<0x401a0010,0x00000000,0x00000000,unsigned>;
        ///Transmit FIFO registerI2S contains 8 words (8x32 bit) data buffer for data transmit. Write data to this register to prepare data for transmit. The remain word number is indicated by TX_LEVEL[3:0] in I2S_STATUS.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txfifo{}; 
    }
    namespace I2sI2sRxfifo{    ///<I2S Receive FIFO Register
        using Addr = Register::Address<0x401a0014,0x00000000,0x00000000,unsigned>;
        ///Receive FIFO registerI2S contains 8 words (8x32 bit) data buffer for data receive. Read this register to get data in FIFO. The remaining data word number is indicated by RX_LEVEL[3:0] in I2S_STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxfifo{}; 
    }
}
