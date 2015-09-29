#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USART
    namespace Nonecfg{    ///<USART Configuration register. Basic USART configuration settings that typically are not changed during operation.
        using Addr = Register::Address<0x40064000,0xffff2582,0,unsigned>;
        ///USART Enable.
        enum class enableVal {
            disabledTheUsart=0x00000000,     ///<Disabled. The USART is disabled and the internal state machine and counters are reset. While Enable = 0, all USART interrupts  are disabled. When Enable is set again, CFG and most other control bits remain unchanged. For instance, when re-enabled, the USART will immediately generate a TxRdy interrupt if  enabled because the transmitter has been reset and is therefore available.
            enabledTheUsartI=0x00000001,     ///<Enabled. The USART is enabled for operation.
        };
        namespace enableValC{
            constexpr MPL::Value<enableVal,enableVal::disabledTheUsart> disabledTheUsart{};
            constexpr MPL::Value<enableVal,enableVal::enabledTheUsartI> enabledTheUsartI{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,enableVal> enable{}; 
        ///Selects the data size for the USART.
        enum class datalenVal {
            v7BitDataLength=0x00000000,     ///<7 bit Data length.
            v8BitDataLength=0x00000001,     ///<8 bit Data length.
            v9BitDataLengthT=0x00000002,     ///<9 bit data length. The 9th bit is commonly used for addressing in multidrop mode. See the ADDRDET bit in the CTRL register.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace datalenValC{
            constexpr MPL::Value<datalenVal,datalenVal::v7BitDataLength> v7BitDataLength{};
            constexpr MPL::Value<datalenVal,datalenVal::v8BitDataLength> v8BitDataLength{};
            constexpr MPL::Value<datalenVal,datalenVal::v9BitDataLengthT> v9BitDataLengthT{};
            constexpr MPL::Value<datalenVal,datalenVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,datalenVal> datalen{}; 
        ///Selects what type of parity is used by the USART.
        enum class parityselVal {
            noParity=0x00000000,     ///<No parity.
            reserved=0x00000001,     ///<Reserved.
            evenParityAddsA=0x00000002,     ///<Even parity. Adds a bit to each character such that the number of 1s in a transmitted character is even, and the number of 1s in a received character is expected to be even.
            oddParityAddsAB=0x00000003,     ///<Odd parity. Adds a bit to each character such that the number of 1s in a transmitted character is odd, and the number of 1s in a received character is expected to be odd.
        };
        namespace parityselValC{
            constexpr MPL::Value<parityselVal,parityselVal::noParity> noParity{};
            constexpr MPL::Value<parityselVal,parityselVal::reserved> reserved{};
            constexpr MPL::Value<parityselVal,parityselVal::evenParityAddsA> evenParityAddsA{};
            constexpr MPL::Value<parityselVal,parityselVal::oddParityAddsAB> oddParityAddsAB{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,parityselVal> paritysel{}; 
        ///Number of stop bits appended to transmitted data. Only a single stop bit is required for received data.
        enum class stoplenVal {
            v1StopBit=0x00000000,     ///<1 stop bit.
            v2StopBitsThisSe=0x00000001,     ///<2 stop bits. This setting should only be used for asynchronous communication.
        };
        namespace stoplenValC{
            constexpr MPL::Value<stoplenVal,stoplenVal::v1StopBit> v1StopBit{};
            constexpr MPL::Value<stoplenVal,stoplenVal::v2StopBitsThisSe> v2StopBitsThisSe{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,stoplenVal> stoplen{}; 
        ///CTS Enable. Determines whether CTS is used for flow control. CTS can be from the input pin, or from the USART's own RTS if loopback mode is enabled. See Section 16.7.3 for more information.
        enum class ctsenVal {
            noFlowControlThe=0x00000000,     ///<No flow control. The transmitter does not receive any automatic flow control signal.
            flowControlEnabled=0x00000001,     ///<Flow control enabled. The transmitter uses external or internal CTS for flow control purposes.
        };
        namespace ctsenValC{
            constexpr MPL::Value<ctsenVal,ctsenVal::noFlowControlThe> noFlowControlThe{};
            constexpr MPL::Value<ctsenVal,ctsenVal::flowControlEnabled> flowControlEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ctsenVal> ctsen{}; 
        ///Selects synchronous or asynchronous operation.
        enum class syncenVal {
            asynchronousModeIs=0x00000000,     ///<Asynchronous mode is selected.
            synchronousModeIs=0x00000001,     ///<Synchronous mode is selected.
        };
        namespace syncenValC{
            constexpr MPL::Value<syncenVal,syncenVal::asynchronousModeIs> asynchronousModeIs{};
            constexpr MPL::Value<syncenVal,syncenVal::synchronousModeIs> synchronousModeIs{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,syncenVal> syncen{}; 
        ///Selects the clock polarity and sampling edge of received data in synchronous mode.
        enum class clkpolVal {
            fallingEdgeUnRxd=0x00000000,     ///<Falling edge. Un_RXD is sampled on the falling edge of SCLK.
            risingEdgeUnRxd=0x00000001,     ///<Rising edge. Un_RXD is sampled on the rising edge of SCLK.
        };
        namespace clkpolValC{
            constexpr MPL::Value<clkpolVal,clkpolVal::fallingEdgeUnRxd> fallingEdgeUnRxd{};
            constexpr MPL::Value<clkpolVal,clkpolVal::risingEdgeUnRxd> risingEdgeUnRxd{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,clkpolVal> clkpol{}; 
        ///Synchronous mode Master select.
        enum class syncmstVal {
            slaveWhenSynchron=0x00000000,     ///<Slave. When synchronous mode is enabled, the USART is a slave.
            masterWhenSynchro=0x00000001,     ///<Master. When synchronous mode is enabled, the USART is a master. In asynchronous mode, the baud rate clock will be output on SCLK if it is connected to a pin.
        };
        namespace syncmstValC{
            constexpr MPL::Value<syncmstVal,syncmstVal::slaveWhenSynchron> slaveWhenSynchron{};
            constexpr MPL::Value<syncmstVal,syncmstVal::masterWhenSynchro> masterWhenSynchro{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,syncmstVal> syncmst{}; 
        ///Selects data loopback mode.
        enum class loopVal {
            normalOperation=0x00000000,     ///<Normal operation.
            loopbackModeThis=0x00000001,     ///<Loopback mode. This provides a mechanism to perform diagnostic loopback testing for USART data. Serial data from the transmitter (Un_TXD) is connected internally to serial input of the receive (Un_RXD). Un_TXD and Un_RTS activity will also appear on external pins if these functions are configured to appear on device pins. The receiver RTS signal is also looped back to CTS and performs flow control if enabled by CTSEN.
        };
        namespace loopValC{
            constexpr MPL::Value<loopVal,loopVal::normalOperation> normalOperation{};
            constexpr MPL::Value<loopVal,loopVal::loopbackModeThis> loopbackModeThis{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,loopVal> loop{}; 
    }
    namespace Nonectrl{    ///<USART Control register. USART control settings that are more likely to change during operation.
        using Addr = Register::Address<0x40064004,0xfffffcb9,0,unsigned>;
        ///Break Enable.
        enum class txbrkenVal {
            normalOperation=0x00000000,     ///<Normal operation.
            continuousBreakIs=0x00000001,     ///<Continuous break is sent immediately when this bit is set, and remains until this bit is cleared. A break may be sent without danger of corrupting any currently transmitting character if the transmitter is first disabled (TXDIS in CTRL is set) and then waiting for the transmitter to be disabled (TXDISINT in STAT = 1) before writing 1 to TXBRKEN.
        };
        namespace txbrkenValC{
            constexpr MPL::Value<txbrkenVal,txbrkenVal::normalOperation> normalOperation{};
            constexpr MPL::Value<txbrkenVal,txbrkenVal::continuousBreakIs> continuousBreakIs{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,txbrkenVal> txbrken{}; 
        ///Enable address detect mode.
        enum class addrdetVal {
            enabledTheUsartR=0x00000000,     ///<Enabled. The USART receiver is enabled for all incoming data.
            disabledTheUsart=0x00000001,     ///<Disabled. The USART receiver ignores incoming data that does not have the most significant bit of the data (typically the 9th bit) = 1. When the data MSB bit = 1, the receiver treats the incoming data normally, generating a received data interrupt. Software can then check the data to see if this is an address that should be handled. If it is, the ADDRDET bit is cleared by software and further incoming data is handled normally.
        };
        namespace addrdetValC{
            constexpr MPL::Value<addrdetVal,addrdetVal::enabledTheUsartR> enabledTheUsartR{};
            constexpr MPL::Value<addrdetVal,addrdetVal::disabledTheUsart> disabledTheUsart{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,addrdetVal> addrdet{}; 
        ///Transmit Disable.
        enum class txdisVal {
            notDisabledUsart=0x00000000,     ///<Not disabled. USART transmitter is not disabled.
            disabledUsartTran=0x00000001,     ///<Disabled. USART transmitter is disabled after any character currently being transmitted is complete. This feature can be used to facilitate software flow control.
        };
        namespace txdisValC{
            constexpr MPL::Value<txdisVal,txdisVal::notDisabledUsart> notDisabledUsart{};
            constexpr MPL::Value<txdisVal,txdisVal::disabledUsartTran> disabledUsartTran{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,txdisVal> txdis{}; 
        ///Continuous Clock generation. By default, SCLK is only output while data is being transmitted in synchronous mode.
        enum class ccVal {
            clockOnCharacter=0x00000000,     ///<Clock on character. In synchronous mode, SCLK cycles only when characters are being sent on Un_TXD or to complete a character that is being received.
            continuousClockSc=0x00000001,     ///<Continuous clock. SCLK runs continuously in synchronous mode, allowing characters to be received on Un_RxD independently from transmission on Un_TXD).
        };
        namespace ccValC{
            constexpr MPL::Value<ccVal,ccVal::clockOnCharacter> clockOnCharacter{};
            constexpr MPL::Value<ccVal,ccVal::continuousClockSc> continuousClockSc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ccVal> cc{}; 
        ///Clear Continuous Clock.
        enum class clrccVal {
            noAffectOnTheCc=0x00000000,     ///<No affect on the CC bit.
            autoClearTheCcB=0x00000001,     ///<Auto-clear. The CC bit is automatically cleared when a complete character has been received. This bit is cleared at the same time.
        };
        namespace clrccValC{
            constexpr MPL::Value<clrccVal,clrccVal::noAffectOnTheCc> noAffectOnTheCc{};
            constexpr MPL::Value<clrccVal,clrccVal::autoClearTheCcB> autoClearTheCcB{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,clrccVal> clrcc{}; 
    }
    namespace Nonestat{    ///<USART Status register. The complete status value can be read here. Writing 1s clears some bits in the register. Some bits can be cleared by writing a 1 to them.
        using Addr = Register::Address<0x40064008,0xffff0280,0,unsigned>;
        ///Receiver Ready flag. When 1, indicates that data is available to be read from the receiver buffer. Cleared after a read of the RXDATA or RXDATASTAT registers.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Receiver Idle. When 0, indicates that the receiver is currently in the process of receiving data. When 1, indicates that the receiver is not currently in the process of receiving data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxidle{}; 
        ///Transmitter Ready flag. When 1, this bit indicates that data may be written to the transmit buffer. Previous data may still be in the process of being transmitted. Cleared when data is written to TXDATA until the data is moved to the transmit shift register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Transmitter Idle. When 0, indicates that the transmitter is currently in the process of sending data.When 1, indicate that the transmitter is not currently in the process of sending data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txidle{}; 
        ///This bit reflects the current state of the CTS signal, regardless of the setting of the CTSEN bit in the CFG register. This will be the value of the CTS input pin unless loopback mode is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cts{}; 
        ///This bit is set when a change in the state is detected for the CTS flag above. This bit is cleared by software.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> deltacts{}; 
        ///Transmitter Disabled Interrupt flag. When 1, this bit indicates that the USART transmitter is fully idle after being disabled via the TXDIS in the CFG register (TXDIS = 1).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txdisint{}; 
        ///Overrun Error interrupt flag. This flag is set when a new character is received while the receiver buffer is still in use. If this occurs, the newly received character in the shift register is lost.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> overrunint{}; 
        ///Received Break. This bit reflects the current state of the receiver break detection logic. It is set when the Un_RXD pin remains low for 16 bit times. Note that FRAMERRINT will also be set when this condition occurs because the stop bit(s) for the character would be missing. RXBRK is cleared when the Un_RXD pin goes high.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rxbrk{}; 
        ///This bit is set when a change in the state of receiver break detection occurs. Cleared by software.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> deltarxbrk{}; 
        ///This bit is set when a start is detected on the receiver input and subsequently confirmed by a mid-bit sample. Its purpose is primarily to allow wakeup from Power-down mode immediately when a start is detected. Cleared by software.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> start{}; 
        ///Framing Error interrupt flag. This flag is set when a character is received with a missing stop bit at the expected location. This could be an indication of a baud rate or configuration mismatch with the transmitting source.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> framerrint{}; 
        ///Parity Error interrupt flag. This flag is set when a parity error is detected in a received character, if parity is enabled via the Parity field in the CFG register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> parityerrint{}; 
        ///Received Noise interrupt flag. This bit is valid when there is a character to be read in the RXDATA register and reflects the status of that character. Three samples of received data are taken in order to determine the value of each received data bit, except in synchronous mode. This acts as a noise filter if one sample disagrees. The Noise bit is set when a received data bit contains one disagreeing sample. This could indicate line noise, a baud rate or character format mismatch, or loss of synchronization during data reception. RXNOISEINT is not updated during a received break.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxnoiseint{}; 
    }
    namespace Noneintenset{    ///<Interrupt Enable read and Set register. Contains an individual interrupt enable bit for each potential USART interrupt. A complete value may be read from this register. Writing a 1 to any implemented bit position causes that bit to be set.
        using Addr = Register::Address<0x4006400c,0xffff069a,0,unsigned>;
        ///When 1, enables an interrupt when there is a received character available to be read from the RXDATA register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdyen{}; 
        ///When 1, enables an interrupt when the TXDATA register is available to take another character to transmit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdyen{}; 
        ///When 1, enables an interrupt when there is a change in the state of the CTS input.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> deltactsen{}; 
        ///When 1, enables an interrupt when the transmitter is fully disabled as indicated by the TXDISINT flag in STAT. See description of the TXDISINT bit for details.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txdisinten{}; 
        ///When 1, enables an interrupt when an overrun error occurred.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> overrunen{}; 
        ///When 1, enables an interrupt when a change of state has occurred in the detection of a received break condition (break condition asserted or deasserted).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> deltarxbrken{}; 
        ///When 1, enables an interrupt when a received start bit has been detected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> starten{}; 
        ///When 1, enables an interrupt when a framing error has been detected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> framerren{}; 
        ///When 1, enables an interrupt when a parity error has been detected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> parityerren{}; 
        ///When 1, enables an interrupt when noise is detected. See description of the RXNOISEINT bit in Table 164.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxnoiseen{}; 
    }
    namespace Noneintenclr{    ///<Interrupt Enable Clear register. Allows clearing any combination of bits in the INTENSET register. Writing a 1 to any implemented bit position causes the corresponding bit to be cleared.
        using Addr = Register::Address<0x40064010,0xffff069a,0,unsigned>;
        ///Writing 1 clears the corresponding bit in the INTENSET register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdyclr{}; 
        ///Writing 1 clears the corresponding bit in the INTENSET register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdyclr{}; 
        ///Writing 1 clears the corresponding bit in the INTENSET register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> deltactsclr{}; 
        ///Writing 1 clears the corresponding bit in the INTENSET register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txdisintclr{}; 
        ///Writing 1 clears the corresponding bit in the INTENSET register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> overrunclr{}; 
        ///Writing 1 clears the corresponding bit in the INTENSET register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> deltarxbrkclr{}; 
        ///Writing 1 clears the corresponding bit in the INTENSET register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> startclr{}; 
        ///Writing 1 clears the corresponding bit in the INTENSET register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> framerrclr{}; 
        ///Writing 1 clears the corresponding bit in the INTENSET register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> parityerrclr{}; 
        ///Writing 1 clears the corresponding bit in the INTENSET register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxnoiseclr{}; 
    }
    namespace Nonerxdata{    ///<Receiver Data register. Contains the last character received.
        using Addr = Register::Address<0x40064014,0xfffffe00,0,unsigned>;
        ///The USART Receiver Data register contains the next received character. The number of bits that are relevant depends on the USART configuration settings.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rxdat{}; 
    }
    namespace Nonerxdatastat{    ///<Receiver Data with Status register. Combines the last character received with the current USART receive status. Allows software to recover incoming data and status together.
        using Addr = Register::Address<0x40064018,0xffff1e00,0,unsigned>;
        ///The USART Receiver Data register contains the next received character. The number of bits that are relevant depends on the USART configuration settings.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rxdat{}; 
        ///Framing Error status flag. This bit is valid when there is a character to be read in the RXDATA register and reflects the status of that character. This bit will set when the character in RXDAT was received with a missing stop bit at the expected location. This could be an indication of a baud rate or configuration mismatch with the transmitting source.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> framerr{}; 
        ///Parity Error status flag. This bit is valid when there is a character to be read in the RXDATA register and reflects the status of that character. This bit will be set when a parity error is detected in a received character.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> parityerr{}; 
        ///Received Noise flag. See description of the RxNoiseInt bit in Table 164.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxnoise{}; 
    }
    namespace Nonetxdata{    ///<Transmit Data register. Data to be transmitted is written here.
        using Addr = Register::Address<0x4006401c,0xfffffe00,0,unsigned>;
        ///Writing to the USART Transmit Data Register causes the data to be transmitted as soon as the transmit shift register is available.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> txdat{}; 
    }
    namespace Nonebrg{    ///<Baud Rate Generator register. 16-bit integer baud rate divisor value.
        using Addr = Register::Address<0x40064020,0xffff0000,0,unsigned>;
        ///This value is used to divide the USART input clock to determine the baud rate, based on the input clock from the FRG. 0 = The FRG clock is used directly by the USART function. 1 = The FRG clock is divided by 2 before use by the USART function. 2 = The FRG clock is divided by 3 before use by the USART function. ... 0xFFFF = The FRG clock is divided by 65,536 before use by the USART function.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> brgval{}; 
    }
    namespace Noneintstat{    ///<Interrupt status register. Reflects interrupts that are currently enabled.
        using Addr = Register::Address<0x40064024,0xffff069a,0,unsigned>;
        ///Receiver Ready flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmitter Ready flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///This bit is set when a change in the state of the CTS input is detected.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> deltacts{}; 
        ///Transmitter Disabled Interrupt flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txdisint{}; 
        ///Overrun Error interrupt flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> overrunint{}; 
        ///This bit is set when a change in the state of receiver break detection occurs.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> deltarxbrk{}; 
        ///This bit is set when a start is detected on the receiver input.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> start{}; 
        ///Framing Error interrupt flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> framerrint{}; 
        ///Parity Error interrupt flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> parityerrint{}; 
        ///Received Noise interrupt flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxnoiseint{}; 
    }
}
