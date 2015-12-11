#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USART4 
    namespace Nonecfg{    ///<USART Configuration register. Basic USART configuration settings that typically are not changed during operation.
        using Addr = Register::Address<0x4004c000,0xff032502,0,unsigned>;
        ///USART Enable.
        enum class EnableVal {
            disabled=0x00000000,     ///<Disabled. The USART is disabled and the internal state machine and counters are reset. While Enable = 0, all USART interrupts and DMA transfers are disabled. When Enable is set again, CFG and most other control bits remain unchanged. For instance, when re-enabled, the USART will immediately generate a TxRdy interrupt (if  enabled in the INTENSET register) or a DMA transfer request because the transmitter has been reset and is therefore available.
            enabled=0x00000001,     ///<Enabled. The USART is enabled for operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnableVal> enable{}; 
        namespace EnableValC{
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::enabled> enabled{};
        }
        }
        ///Selects the data size for the USART.
        enum class DatalenVal {
            v7BitDataLength=0x00000000,     ///<7 bit Data length.
            v8BitDataLength=0x00000001,     ///<8 bit Data length.
            v9BitDataLength=0x00000002,     ///<9 bit data length. The 9th bit is commonly used for addressing in multidrop mode. See the ADDRDET bit in the CTL register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,DatalenVal> datalen{}; 
        namespace DatalenValC{
            constexpr Register::FieldValue<decltype(datalen)::Type,DatalenVal::v7BitDataLength> v7BitDataLength{};
            constexpr Register::FieldValue<decltype(datalen)::Type,DatalenVal::v8BitDataLength> v8BitDataLength{};
            constexpr Register::FieldValue<decltype(datalen)::Type,DatalenVal::v9BitDataLength> v9BitDataLength{};
        }
        }
        ///Selects what type of parity is used by the USART.
        enum class ParityselVal {
            noParity=0x00000000,     ///<No parity.
            evenParity=0x00000002,     ///<Even parity. Adds a bit to each character such that the number of 1s in a transmitted character is even, and the number of 1s in a received character is expected to be even.
            oddParity=0x00000003,     ///<Odd parity. Adds a bit to each character such that the number of 1s in a transmitted character is odd, and the number of 1s in a received character is expected to be odd.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,ParityselVal> paritysel{}; 
        namespace ParityselValC{
            constexpr Register::FieldValue<decltype(paritysel)::Type,ParityselVal::noParity> noParity{};
            constexpr Register::FieldValue<decltype(paritysel)::Type,ParityselVal::evenParity> evenParity{};
            constexpr Register::FieldValue<decltype(paritysel)::Type,ParityselVal::oddParity> oddParity{};
        }
        }
        ///Number of stop bits appended to transmitted data. Only a single stop bit is required for received data.
        enum class StoplenVal {
            v1StopBit=0x00000000,     ///<1 stop bit.
            v2StopBits=0x00000001,     ///<2 stop bits. This setting should only be used for asynchronous communication.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,StoplenVal> stoplen{}; 
        namespace StoplenValC{
            constexpr Register::FieldValue<decltype(stoplen)::Type,StoplenVal::v1StopBit> v1StopBit{};
            constexpr Register::FieldValue<decltype(stoplen)::Type,StoplenVal::v2StopBits> v2StopBits{};
        }
        }
        ///Selects standard or 32 kHz clocking mode.
        enum class Mode32kVal {
            standard=0x00000000,     ///<UART uses standard clocking.
            v32khz=0x00000001,     ///<UART uses the 32 kHz clock from the RTC oscillator as the clock source to the BRG, and uses a special bit clocking scheme.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Mode32kVal> mode32k{}; 
        namespace Mode32kValC{
            constexpr Register::FieldValue<decltype(mode32k)::Type,Mode32kVal::standard> standard{};
            constexpr Register::FieldValue<decltype(mode32k)::Type,Mode32kVal::v32khz> v32khz{};
        }
        }
        ///CTS Enable. Determines whether CTS is used for flow control. CTS can be from the input pin, or from the USART's own RTS if loopback mode is enabled. See Section 11.8.4 for more information.
        enum class CtsenVal {
            noFlowControl=0x00000000,     ///<No flow control. The transmitter does not receive any automatic flow control signal.
            flowControlEnabled=0x00000001,     ///<Flow control enabled. The transmitter uses  the CTS input (or RTS output in loopback mode) for flow control purposes.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,CtsenVal> ctsen{}; 
        namespace CtsenValC{
            constexpr Register::FieldValue<decltype(ctsen)::Type,CtsenVal::noFlowControl> noFlowControl{};
            constexpr Register::FieldValue<decltype(ctsen)::Type,CtsenVal::flowControlEnabled> flowControlEnabled{};
        }
        }
        ///Selects synchronous or asynchronous operation.
        enum class SyncenVal {
            asynchronous=0x00000000,     ///<Asynchronous mode is selected.
            synchronous=0x00000001,     ///<Synchronous mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,SyncenVal> syncen{}; 
        namespace SyncenValC{
            constexpr Register::FieldValue<decltype(syncen)::Type,SyncenVal::asynchronous> asynchronous{};
            constexpr Register::FieldValue<decltype(syncen)::Type,SyncenVal::synchronous> synchronous{};
        }
        }
        ///Selects the clock polarity and sampling edge of received data in synchronous mode.
        enum class ClkpolVal {
            fallingEdge=0x00000000,     ///<Falling edge. Un_RXD is sampled on the falling edge of SCLK.
            risingEdge=0x00000001,     ///<Rising edge. Un_RXD is sampled on the rising edge of SCLK.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ClkpolVal> clkpol{}; 
        namespace ClkpolValC{
            constexpr Register::FieldValue<decltype(clkpol)::Type,ClkpolVal::fallingEdge> fallingEdge{};
            constexpr Register::FieldValue<decltype(clkpol)::Type,ClkpolVal::risingEdge> risingEdge{};
        }
        }
        ///Synchronous mode Master select.
        enum class SyncmstVal {
            slave=0x00000000,     ///<Slave. When synchronous mode is enabled, the USART is a slave.
            master=0x00000001,     ///<Master. When synchronous mode is enabled, the USART is a master.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SyncmstVal> syncmst{}; 
        namespace SyncmstValC{
            constexpr Register::FieldValue<decltype(syncmst)::Type,SyncmstVal::slave> slave{};
            constexpr Register::FieldValue<decltype(syncmst)::Type,SyncmstVal::master> master{};
        }
        }
        ///Selects data loopback mode.
        enum class LoopVal {
            normalOperation=0x00000000,     ///<Normal operation.
            loopbackMode=0x00000001,     ///<Loopback mode. This provides a mechanism to perform diagnostic loopback testing for USART data. Serial data from the transmitter (Un_TXD) is connected internally to serial input of the receive (Un_RXD). Un_TXD and Un_RTS activity will also appear on external pins if these functions are configured to appear on device pins. The receiver RTS signal is also looped back to CTS and performs flow control if enabled by CTSEN.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LoopVal> loop{}; 
        namespace LoopValC{
            constexpr Register::FieldValue<decltype(loop)::Type,LoopVal::normalOperation> normalOperation{};
            constexpr Register::FieldValue<decltype(loop)::Type,LoopVal::loopbackMode> loopbackMode{};
        }
        }
        ///Output Enable Turnaround time enable for RS-485 operation.
        enum class OetaVal {
            deasserted=0x00000000,     ///<Deasserted. If selected by OESEL, the Output Enable signal deasserted at the end of the last stop bit of a transmission.
            asserted=0x00000001,     ///<Asserted. If selected by OESEL, the Output Enable signal remains asserted for 1 character time after then end the last stop bit of a transmission. OE will also remain asserted if another transmit begins before it is deasserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,OetaVal> oeta{}; 
        namespace OetaValC{
            constexpr Register::FieldValue<decltype(oeta)::Type,OetaVal::deasserted> deasserted{};
            constexpr Register::FieldValue<decltype(oeta)::Type,OetaVal::asserted> asserted{};
        }
        }
        ///Automatic Address matching enable.
        enum class AutoaddrVal {
            disabled=0x00000000,     ///<Disabled. When addressing is enabled by ADDRDET, address matching is done by software. This provides the possibility of versatile addressing (e.g. respond to more than one address).
            enabled=0x00000001,     ///<Enabled. When addressing is enabled by ADDRDET, address matching is done by hardware, using the value in the ADDR register as the address to match.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,AutoaddrVal> autoaddr{}; 
        namespace AutoaddrValC{
            constexpr Register::FieldValue<decltype(autoaddr)::Type,AutoaddrVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(autoaddr)::Type,AutoaddrVal::enabled> enabled{};
        }
        }
        ///Output Enable Select.
        enum class OeselVal {
            flowControl=0x00000000,     ///<Flow control. The RTS signal is used as the standard flow control function.
            outputEnable=0x00000001,     ///<Output enable. The RTS signal is taken over in order to provide an output enable signal to control an RS-485 transceiver.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,OeselVal> oesel{}; 
        namespace OeselValC{
            constexpr Register::FieldValue<decltype(oesel)::Type,OeselVal::flowControl> flowControl{};
            constexpr Register::FieldValue<decltype(oesel)::Type,OeselVal::outputEnable> outputEnable{};
        }
        }
        ///Output Enable Polarity.
        enum class OepolVal {
            low=0x00000000,     ///<Low. If selected by OESEL, the output enable is active low.
            high=0x00000001,     ///<High. If selected by OESEL, the output enable is active high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,OepolVal> oepol{}; 
        namespace OepolValC{
            constexpr Register::FieldValue<decltype(oepol)::Type,OepolVal::low> low{};
            constexpr Register::FieldValue<decltype(oepol)::Type,OepolVal::high> high{};
        }
        }
        ///Receive data polarity.
        enum class RxpolVal {
            notChanged=0x00000000,     ///<Not changed. The RX signal is used as it arrives from the pin. This means that the RX rest value is 1, start bit is 0, data is not inverted, and the stop bit is 1.
            inverted=0x00000001,     ///<Inverted. The RX signal is inverted before being used by the UART. This means that the RX rest value is 0, start bit is 1, data is inverted, and the stop bit is 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,RxpolVal> rxpol{}; 
        namespace RxpolValC{
            constexpr Register::FieldValue<decltype(rxpol)::Type,RxpolVal::notChanged> notChanged{};
            constexpr Register::FieldValue<decltype(rxpol)::Type,RxpolVal::inverted> inverted{};
        }
        }
        ///Transmit data polarity.
        enum class TxpolVal {
            notChanged=0x00000000,     ///<Not changed. The TX signal is sent out without change. This means that the TX rest value is 1, start bit is 0, data is not inverted, and the stop bit is 1.
            inverted=0x00000001,     ///<Inverted. The TX signal is inverted by the UART before being sent out. This means that the TX rest value is 0, start bit is 1, data is inverted, and the stop bit is 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,TxpolVal> txpol{}; 
        namespace TxpolValC{
            constexpr Register::FieldValue<decltype(txpol)::Type,TxpolVal::notChanged> notChanged{};
            constexpr Register::FieldValue<decltype(txpol)::Type,TxpolVal::inverted> inverted{};
        }
        }
    }
    namespace Nonectl{    ///<USART Control register. USART control settings that are more likely to change during operation.
        using Addr = Register::Address<0x4004c004,0xfffefcb9,0,unsigned>;
        ///Break Enable.
        enum class TxbrkenVal {
            normalOperation=0x00000000,     ///<Normal operation.
            continuousBreakIs=0x00000001,     ///<Continuous break is sent immediately when this bit is set, and remains until this bit is cleared. A break may be sent without danger of corrupting any currently transmitting character if the transmitter is first disabled (TXDIS in CTL is set) and then waiting for the transmitter to be disabled (TXDISINT in STAT = 1) before writing 1 to TXBRKEN.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TxbrkenVal> txbrken{}; 
        namespace TxbrkenValC{
            constexpr Register::FieldValue<decltype(txbrken)::Type,TxbrkenVal::normalOperation> normalOperation{};
            constexpr Register::FieldValue<decltype(txbrken)::Type,TxbrkenVal::continuousBreakIs> continuousBreakIs{};
        }
        }
        ///Enable address detect mode.
        enum class AddrdetVal {
            disabled=0x00000000,     ///<Disabled. The USART presents all incoming data.
            enabled=0x00000001,     ///<Enabled. The USART receiver ignores incoming data that does not have the most significant bit of the data (typically the 9th bit) = 1. When the data MSB bit = 1, the receiver treats the incoming data normally, generating a received data interrupt. Software can then check the data to see if this is an address that should be handled. If it is, the ADDRDET bit is cleared by software and further incoming data is handled normally.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,AddrdetVal> addrdet{}; 
        namespace AddrdetValC{
            constexpr Register::FieldValue<decltype(addrdet)::Type,AddrdetVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(addrdet)::Type,AddrdetVal::enabled> enabled{};
        }
        }
        ///Transmit Disable.
        enum class TxdisVal {
            notDisabled=0x00000000,     ///<Not disabled. USART transmitter is not disabled.
            disabled=0x00000001,     ///<Disabled. USART transmitter is disabled after any character currently being transmitted is complete. This feature can be used to facilitate software flow control.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TxdisVal> txdis{}; 
        namespace TxdisValC{
            constexpr Register::FieldValue<decltype(txdis)::Type,TxdisVal::notDisabled> notDisabled{};
            constexpr Register::FieldValue<decltype(txdis)::Type,TxdisVal::disabled> disabled{};
        }
        }
        ///Continuous Clock generation. By default, SCLK is only output while data is being transmitted in synchronous mode.
        enum class CcVal {
            clockOnCharacter=0x00000000,     ///<Clock on character. In synchronous mode, SCLK cycles only when characters are being sent on Un_TXD or to complete a character that is being received.
            continuousClock=0x00000001,     ///<Continuous clock. SCLK runs continuously in synchronous mode, allowing characters to be received on Un_RxD independently from transmission on Un_TXD).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,CcVal> cc{}; 
        namespace CcValC{
            constexpr Register::FieldValue<decltype(cc)::Type,CcVal::clockOnCharacter> clockOnCharacter{};
            constexpr Register::FieldValue<decltype(cc)::Type,CcVal::continuousClock> continuousClock{};
        }
        }
        ///Clear Continuous Clock.
        enum class ClrcconrxVal {
            noEffect=0x00000000,     ///<No effect on the CC bit.
            autoClear=0x00000001,     ///<Auto-clear. The CC bit is automatically cleared when a complete character has been received. This bit is cleared at the same time.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ClrcconrxVal> clrcconrx{}; 
        namespace ClrcconrxValC{
            constexpr Register::FieldValue<decltype(clrcconrx)::Type,ClrcconrxVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(clrcconrx)::Type,ClrcconrxVal::autoClear> autoClear{};
        }
        }
        ///Autobaud enable.
        enum class AutobaudVal {
            disabled=0x00000000,     ///<Disabled. UART is in normal operating mode.
            enabled=0x00000001,     ///<Enabled. UART is in autobaud mode. This bit should only be set when the UART receiver is idle. The first start bit of RX is measured and used the update the BRG register to match the received data rate. AUTOBAUD is cleared once this process is complete, or if there is an AERR. This bit can be cleared by software when set, but only when the UART receiver is idle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,AutobaudVal> autobaud{}; 
        namespace AutobaudValC{
            constexpr Register::FieldValue<decltype(autobaud)::Type,AutobaudVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(autobaud)::Type,AutobaudVal::enabled> enabled{};
        }
        }
    }
    namespace Nonestat{    ///<USART Status register. The complete status value can be read here. Writing ones clears some bits in the register. Some bits can be cleared by writing a 1 to them.
        using Addr = Register::Address<0x4004c008,0xfffe0280,0,unsigned>;
        ///Receiver Ready flag. When 1, indicates that data is available to be read from the receiver buffer. Cleared after a read of the RXDAT or RXDATSTAT registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Receiver Idle. When 0, indicates that the receiver is currently in the process of receiving data. When 1, indicates that the receiver is not currently in the process of receiving data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxidle{}; 
        ///Transmitter Ready flag. When 1, this bit indicates that data may be written to the transmit buffer. Previous data may still be in the process of being transmitted. Cleared when data is written to TXDAT. Set when  the data is moved from the transmit buffer to the transmit shift register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Transmitter Idle. When 0, indicates that the transmitter is currently in the process of sending data.When 1, indicate that the transmitter is not currently in the process of sending data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txidle{}; 
        ///This bit reflects the current state of the CTS signal, regardless of the setting of the CTSEN bit in the CFG register. This will be the value of the CTS input pin unless loopback mode is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cts{}; 
        ///This bit is set when a change in the state is detected for the CTS flag above. This bit is cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> deltacts{}; 
        ///Transmitter Disabled Interrupt flag. When 1, this bit indicates that the USART transmitter is fully idle after being disabled via the TXDIS in the CFG register (TXDIS = 1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txdisstat{}; 
        ///Overrun Error interrupt flag. This flag is set when a new character is received while the receiver buffer is still in use. If this occurs, the newly received character in the shift register is lost.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> overrunint{}; 
        ///Received Break. This bit reflects the current state of the receiver break detection logic. It is set when the Un_RXD pin remains low for 16 bit times. Note that FRAMERRINT will also be set when this condition occurs because the stop bit(s) for the character would be missing. RXBRK is cleared when the Un_RXD pin goes high.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rxbrk{}; 
        ///This bit is set when a change in the state of receiver break detection occurs. Cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> deltarxbrk{}; 
        ///This bit is set when a start is detected on the receiver input. Its purpose is primarily to allow wake-up from Deep-sleep or Power-down mode immediately when a start is detected. Cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> start{}; 
        ///Framing Error interrupt flag. This flag is set when a character is received with a missing stop bit at the expected location. This could be an indication of a baud rate or configuration mismatch with the transmitting source.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> framerrint{}; 
        ///Parity Error interrupt flag. This flag is set when a parity error is detected in a received character..
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> parityerrint{}; 
        ///Received Noise interrupt flag. Three samples of received data are taken in order to determine the value of each received data bit, except in synchronous mode. This acts as a noise filter if one sample disagrees. This flag is set when a received data bit contains one disagreeing sample. This could indicate line noise, a baud rate or character format mismatch, or loss of synchronization during data reception.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxnoiseint{}; 
        ///Auto-baud Error. An auto-baud error can occur if the BRG counts to its limit before the end of the start bit that is being measured, essentially an auto-baud time-out.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> aberr{}; 
    }
    namespace Noneintenset{    ///<Interrupt Enable read and Set register. Contains an individual interrupt enable bit for each potential USART interrupt. A complete value may be read from this register. Writing a 1 to any implemented bit position causes that bit to be set.
        using Addr = Register::Address<0x4004c00c,0xfffe0692,0,unsigned>;
        ///When 1, enables an interrupt when there is a received character available to be read from the RXDAT register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdyen{}; 
        ///When 1, enables an interrupt when the TXDAT register is available to take another character to transmit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdyen{}; 
        ///When 1, enables an interrupt when the transmitter becomes idle (TXIDLE = 1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txidleen{}; 
        ///When 1, enables an interrupt when there is a change in the state of the CTS input.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> deltactsen{}; 
        ///When 1, enables an interrupt when the transmitter is fully disabled as indicated by the TXDISINT flag in STAT. See description of the TXDISINT bit for details.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txdisen{}; 
        ///When 1, enables an interrupt when an overrun error occurred.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> overrunen{}; 
        ///When 1, enables an interrupt when a change of state has occurred in the detection of a received break condition (break condition asserted or deasserted).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> deltarxbrken{}; 
        ///When 1, enables an interrupt when a received start bit has been detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> starten{}; 
        ///When 1, enables an interrupt when a framing error has been detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> framerren{}; 
        ///When 1, enables an interrupt when a parity error has been detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> parityerren{}; 
        ///When 1, enables an interrupt when noise is detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxnoiseen{}; 
        ///When 1, enables an interrupt when an auto-baud error occurs.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> aberren{}; 
    }
    namespace Noneintenclr{    ///<Interrupt Enable Clear register. Allows clearing any combination of bits in the INTENSET register. Writing a 1 to any implemented bit position causes the corresponding bit to be cleared.
        using Addr = Register::Address<0x4004c010,0xfffe0692,0,unsigned>;
        ///Writing 1 clears the corresponding bit in the INTENSET register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdyclr{}; 
        ///Writing 1 clears the corresponding bit in the INTENSET register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdyclr{}; 
        ///Writing 1 clears the corresponding bit in the INTENSET register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txidleclr{}; 
        ///Writing 1 clears the corresponding bit in the INTENSET register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> deltactsclr{}; 
        ///Writing 1 clears the corresponding bit in the INTENSET register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txdisintclr{}; 
        ///Writing 1 clears the corresponding bit in the INTENSET register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> overrunclr{}; 
        ///Writing 1 clears the corresponding bit in the INTENSET register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> deltarxbrkclr{}; 
        ///Writing 1 clears the corresponding bit in the INTENSET register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> startclr{}; 
        ///Writing 1 clears the corresponding bit in the INTENSET register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> framerrclr{}; 
        ///Writing 1 clears the corresponding bit in the INTENSET register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> parityerrclr{}; 
        ///Writing 1 clears the corresponding bit in the INTENSET register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxnoiseclr{}; 
        ///Writing 1 clears the corresponding bit in the INTENSET register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> aberrclr{}; 
    }
    namespace Nonerxdat{    ///<Receiver Data register. Contains the last character received.
        using Addr = Register::Address<0x4004c014,0xfffffe00,0,unsigned>;
        ///The USART Receiver Data register contains the next received character. The number of bits that are relevant depends on the USART configuration settings.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rxdat{}; 
    }
    namespace Nonerxdatstat{    ///<Receiver Data with Status register. Combines the last character received with the current USART receive status. Allows DMA or software to recover incoming data and status together.
        using Addr = Register::Address<0x4004c018,0xffff1e00,0,unsigned>;
        ///The USART Receiver Data register contains the next received character. The number of bits that are relevant depends on the USART configuration settings.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rxdat{}; 
        ///Framing Error status flag. This bit is valid when there is a character to be read in the RXDAT register and reflects the status of that character. This bit will set when the character in RXDAT was received with a missing stop bit at the expected location. This could be an indication of a baud rate or configuration mismatch with the transmitting source.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> framerr{}; 
        ///Parity Error status flag. This bit is valid when there is a character to be read in the RXDAT register and reflects the status of that character. This bit will be set when a parity error is detected in a received character.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> parityerr{}; 
        ///Received Noise flag. See description of the RXNOISEINT bit in Table 133.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxnoise{}; 
    }
    namespace Nonetxdat{    ///<Transmit Data register. Data to be transmitted is written here.
        using Addr = Register::Address<0x4004c01c,0xfffffe00,0,unsigned>;
        ///Writing to the USART Transmit Data Register causes the data to be transmitted as soon as the transmit shift register is available and any conditions for transmitting data are met: CTS low (if CTSEN bit = 1), TXDIS bit = 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> txdat{}; 
    }
    namespace Nonebrg{    ///<Baud Rate Generator register. 16-bit integer baud rate divisor value.
        using Addr = Register::Address<0x4004c020,0xffff0000,0,unsigned>;
        ///This value is used to divide the USART input clock to determine the baud rate, based on the input clock from the FRG. 0 = The FRG clock is used directly by the USART function. 1 = The FRG clock is divided by 2 before use by the USART function. 2 = The FRG clock is divided by 3 before use by the USART function. ... 0xFFFF = The FRG clock is divided by 65,536 before use by the USART function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> brgval{}; 
    }
    namespace Noneintstat{    ///<Interrupt status register. Reflects interrupts that are currently enabled.
        using Addr = Register::Address<0x4004c024,0xfffe0692,0,unsigned>;
        ///Receiver Ready flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmitter Ready flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Transmitter idle status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txidle{}; 
        ///This bit is set when a change in the state of the CTS input is detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> deltacts{}; 
        ///Transmitter Disabled Interrupt flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txdisint{}; 
        ///Overrun Error interrupt flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> overrunint{}; 
        ///This bit is set when a change in the state of receiver break detection occurs.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> deltarxbrk{}; 
        ///This bit is set when a start is detected on the receiver input.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> start{}; 
        ///Framing Error interrupt flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> framerrint{}; 
        ///Parity Error interrupt flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> parityerrint{}; 
        ///Received Noise interrupt flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxnoiseint{}; 
        ///Auto-baud Error flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> aberr{}; 
    }
    namespace Noneosr{    ///<Oversample selection register for asynchronous communication.
        using Addr = Register::Address<0x4004c028,0xfffffff0,0,unsigned>;
        ///Oversample Selection Value. 0 to 3 = not supported 0x4 = 5 peripheral clocks are used to transmit and receive each data bit. 0x5 = 6 peripheral clocks are used to transmit and receive each data bit.  ... 0xF= 16 peripheral clocks are used to transmit and receive each data bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> osrval{}; 
    }
    namespace Noneaddr{    ///<Address register for automatic address matching.
        using Addr = Register::Address<0x4004c02c,0xffffff00,0,unsigned>;
        ///8-bit address used with automatic address matching. Used when address detection is enabled (ADDRDET in CTL = 1) and automatic address matching is enabled (AUTOADDR in CFG = 1).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> address{}; 
    }
}
