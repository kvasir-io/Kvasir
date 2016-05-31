#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//SPI
    namespace Spi0Cfg{    ///<SPI Configuration register
        using Addr = Register::Address<0x40058000,0x00000000,0x00000000,unsigned>;
        ///SPI enable.
        enum class EnableVal {
            disabledTheSpiIs=0x00000000,     ///<Disabled. The SPI is disabled and the internal state machine and counters are reset.
            enabledTheSpiIs=0x00000001,     ///<Enabled. The SPI is enabled for operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnableVal> enable{}; 
        namespace EnableValC{
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::disabledTheSpiIs> disabledTheSpiIs{};
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::enabledTheSpiIs> enabledTheSpiIs{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Master mode select.
        enum class MasterVal {
            slaveModeTheSpi=0x00000000,     ///<Slave mode. The SPI will operate in slave mode. SCK, MOSI, and the SSEL signals are inputs, MISO is an output.
            masterModeTheSpi=0x00000001,     ///<Master mode. The SPI will operate in master mode. SCK, MOSI, and the SSEL signals are outputs, MISO is an input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,MasterVal> master{}; 
        namespace MasterValC{
            constexpr Register::FieldValue<decltype(master)::Type,MasterVal::slaveModeTheSpi> slaveModeTheSpi{};
            constexpr Register::FieldValue<decltype(master)::Type,MasterVal::masterModeTheSpi> masterModeTheSpi{};
        }
        ///LSB First mode enable.
        enum class LsbfVal {
            standardDataIsTr=0x00000000,     ///<Standard. Data is transmitted and received in standard MSB first order.
            reverseDataIsTra=0x00000001,     ///<Reverse. Data is transmitted and received in reverse order (LSB first).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,LsbfVal> lsbf{}; 
        namespace LsbfValC{
            constexpr Register::FieldValue<decltype(lsbf)::Type,LsbfVal::standardDataIsTr> standardDataIsTr{};
            constexpr Register::FieldValue<decltype(lsbf)::Type,LsbfVal::reverseDataIsTra> reverseDataIsTra{};
        }
        ///Clock Phase select. .
        enum class CphaVal {
            changeTheSpiCapt=0x00000000,     ///<Change. The SPI captures serial data on the first clock transition of the frame (when the clock changes away from the rest state). Data is changed on the following edge.
            captureTheSpiCha=0x00000001,     ///<Capture. The SPI changes serial data on the first clock transition of the frame (when the clock changes away from the rest state). Data is captured on the following edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CphaVal> cpha{}; 
        namespace CphaValC{
            constexpr Register::FieldValue<decltype(cpha)::Type,CphaVal::changeTheSpiCapt> changeTheSpiCapt{};
            constexpr Register::FieldValue<decltype(cpha)::Type,CphaVal::captureTheSpiCha> captureTheSpiCha{};
        }
        ///Clock Polarity select.
        enum class CpolVal {
            lowTheRestState=0x00000000,     ///<Low. The rest state of the clock (between frames) is low.
            highTheRestState=0x00000001,     ///<High. The rest state of the clock (between frames) is high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,CpolVal> cpol{}; 
        namespace CpolValC{
            constexpr Register::FieldValue<decltype(cpol)::Type,CpolVal::lowTheRestState> lowTheRestState{};
            constexpr Register::FieldValue<decltype(cpol)::Type,CpolVal::highTheRestState> highTheRestState{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Loopback mode enable. Loopback mode applies only to Master mode, and connects transmit and receive data connected together to allow simple software testing.
        enum class LoopVal {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LoopVal> loop{}; 
        namespace LoopValC{
            constexpr Register::FieldValue<decltype(loop)::Type,LoopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(loop)::Type,LoopVal::enabled> enabled{};
        }
        ///SSEL Polarity select.
        enum class SpolVal {
            lowTheSselPinIs=0x00000000,     ///<Low. The SSEL pin is active low. The value in the SSEL fields of the RXDAT, TXDATCTL, and TXCTL registers related to SSEL is not inverted relative to the pins.
            highTheSselPinI=0x00000001,     ///<High. The SSEL pin is active high. The value in the SSEL fields of the RXDAT, TXDATCTL, and TXCTL registers related to SSEL is inverted relative to the pins.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SpolVal> spol{}; 
        namespace SpolValC{
            constexpr Register::FieldValue<decltype(spol)::Type,SpolVal::lowTheSselPinIs> lowTheSselPinIs{};
            constexpr Register::FieldValue<decltype(spol)::Type,SpolVal::highTheSselPinI> highTheSselPinI{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Spi0Dly{    ///<SPI Delay register
        using Addr = Register::Address<0x40058004,0x00000000,0x00000000,unsigned>;
        ///Controls the amount of time between SSEL assertion and the beginning of a data frame.  There is always one SPI clock time between SSEL assertion and the first clock edge. This is not considered part of the pre-delay. 0x0 = No additional time is inserted. 0x1 = 1 SPI clock time is inserted. 0x2 = 2 SPI clock times are inserted. ... 0xF = 15 SPI clock times are inserted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> preDelay{}; 
        ///Controls the amount of time between the end of a data frame and SSEL deassertion.  0x0 = No additional time is inserted. 0x1 = 1 SPI clock time is inserted. 0x2 = 2 SPI clock times are inserted. ... 0xF = 15 SPI clock times are inserted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> postDelay{}; 
        ///Controls the minimum amount of time between adjacent data frames.  0x0 = No additional time is inserted. 0x1 = 1 SPI clock time is inserted. 0x2 = 2 SPI clock times are inserted. ... 0xF = 15 SPI clock times are inserted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> frameDelay{}; 
        ///Controls the minimum amount of time that the SSELs are deasserted between transfers.  0x0 = The minimum time that SSEL is deasserted is 1 SPI clock time. (Zero added time.) 0x1 = The minimum time that SSEL is deasserted is 2 SPI clock times. 0x2 = The minimum time that SSEL is deasserted is 3 SPI clock times. ... 0xF = The minimum time that SSEL is deasserted is 16 SPI clock times.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> transferDelay{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Spi0Stat{    ///<SPI Status. Some status flags can be cleared by writing a 1 to that bit position
        using Addr = Register::Address<0x40058008,0x00000000,0x00000000,unsigned>;
        ///Receiver Ready flag. When 1, indicates that data is available to be read from the receiver buffer. Cleared after a read of the RXDAT register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmitter Ready flag. When 1, this bit indicates that data may be written to the transmit buffer. Previous data may still be in the process of being transmitted. Cleared when data is written to TXDAT or TXDATCTL until the data is moved to the transmit shift register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Receiver Overrun interrupt flag. This flag is set when the beginning of a received character is detected while the receiver buffer is still in use. If this occurs, the receiver buffer contents are preserved, and the incoming data is lost. Data received by the SPI should be considered undefined if RxOv is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxov{}; 
        ///Transmitter Underrun interrupt flag. This flag applies only to slave mode (Master = 0). In this case, the transmitter must begin sending new data on the next input clock if the transmitter is idle. If that data is not available in the transmitter holding register at that point, there is no data to transmit and the TxUr flag is set. Data transmitted by the SPI should be considered undefined if TxUr is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txur{}; 
        ///Slave Select Assert. This flag is set whenever any slave select transitions from deasserted to asserted, in both master and slave modes. This allows determining when the SPI transmit/receive functions become busy, and allows waking up the device from reduced power modes when a slave mode access begins. This flag is cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ssa{}; 
        ///Slave Select Deassert. This flag is set whenever any asserted slave selects transition to deasserted, in both master and slave modes. This allows determining when the SPI transmit/receive functions become idle. This flag is cleared by software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ssd{}; 
        ///Stalled status flag. This indicates whether the SPI is currently in a stall condition.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalled{}; 
        ///End Transfer control bit. Software can set this bit to force an end to the current transfer when the transmitter finishes any activity already in progress, as if the EOT flag had been set prior to the last transmission. This capability is included to support cases where it is not known when transmit data is written that it will be the end of a transfer. The bit is cleared when the transmitter becomes Idle as the transfer comes to an end. Forcing an end of transfer in this manner causes any specified FrameDelay and TransferDelay to be inserted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> endtransfer{}; 
        ///Idle status flag. This bit is 1 whenever the SPI master function is fully idle. This means that the transmit holding register is empty and the transmitter is not in the process of sending data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> idle{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Spi0Intenset{    ///<SPI Interrupt Enable read and Set. A complete value may be read from this register. Writing a 1 to any implemented bit position causes that bit to be set.
        using Addr = Register::Address<0x4005800c,0x00000000,0x00000000,unsigned>;
        ///Determines whether an interrupt occurs when receiver data is available.
        enum class RxrdyenVal {
            noInterruptWillBe=0x00000000,     ///<No interrupt will be generated when receiver data is available.
            anInterruptWillBe=0x00000001,     ///<An interrupt will be generated when receiver data is available in the RXDAT register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RxrdyenVal> rxrdyen{}; 
        namespace RxrdyenValC{
            constexpr Register::FieldValue<decltype(rxrdyen)::Type,RxrdyenVal::noInterruptWillBe> noInterruptWillBe{};
            constexpr Register::FieldValue<decltype(rxrdyen)::Type,RxrdyenVal::anInterruptWillBe> anInterruptWillBe{};
        }
        ///Determines whether an interrupt occurs when the transmitter holding register is available.
        enum class TxrdyenVal {
            noInterruptWillBe=0x00000000,     ///<No interrupt will be generated when the transmitter holding register is available.
            anInterruptWillBe=0x00000001,     ///<An interrupt will be generated when data may be written to TXDAT.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TxrdyenVal> txrdyen{}; 
        namespace TxrdyenValC{
            constexpr Register::FieldValue<decltype(txrdyen)::Type,TxrdyenVal::noInterruptWillBe> noInterruptWillBe{};
            constexpr Register::FieldValue<decltype(txrdyen)::Type,TxrdyenVal::anInterruptWillBe> anInterruptWillBe{};
        }
        ///Determines whether an interrupt occurs when a receiver overrun occurs. This happens in slave mode when there is a need for the receiver to move newly received data to the RXDAT register when it is already in use. The interface prevents receiver overrun in Master mode by not allowing a new transmission to begin when a receiver overrun would otherwise occur.
        enum class RxovenVal {
            noInterruptWillBe=0x00000000,     ///<No interrupt will be generated when a receiver overrun occurs.
            anInterruptWillBe=0x00000001,     ///<An interrupt will be generated if a receiver overrun occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RxovenVal> rxoven{}; 
        namespace RxovenValC{
            constexpr Register::FieldValue<decltype(rxoven)::Type,RxovenVal::noInterruptWillBe> noInterruptWillBe{};
            constexpr Register::FieldValue<decltype(rxoven)::Type,RxovenVal::anInterruptWillBe> anInterruptWillBe{};
        }
        ///Determines whether an interrupt occurs when a transmitter underrun occurs. This happens in slave mode when there is a need to transmit data when none is available.
        enum class TxurenVal {
            noInterruptWillBe=0x00000000,     ///<No interrupt will be generated when the transmitter underruns.
            anInterruptWillBe=0x00000001,     ///<An interrupt will be generated if the transmitter underruns.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TxurenVal> txuren{}; 
        namespace TxurenValC{
            constexpr Register::FieldValue<decltype(txuren)::Type,TxurenVal::noInterruptWillBe> noInterruptWillBe{};
            constexpr Register::FieldValue<decltype(txuren)::Type,TxurenVal::anInterruptWillBe> anInterruptWillBe{};
        }
        ///Determines whether an interrupt occurs when one or more Slave Select is asserted.
        enum class SsaenVal {
            noInterruptWillBe=0x00000000,     ///<No interrupt will be generated when any Slave Select transitions from deasserted to asserted.
            anInterruptWillBe=0x00000001,     ///<An interrupt will be generated when any Slave Select transitions from deasserted to asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SsaenVal> ssaen{}; 
        namespace SsaenValC{
            constexpr Register::FieldValue<decltype(ssaen)::Type,SsaenVal::noInterruptWillBe> noInterruptWillBe{};
            constexpr Register::FieldValue<decltype(ssaen)::Type,SsaenVal::anInterruptWillBe> anInterruptWillBe{};
        }
        ///Determines whether an interrupt occurs when all Slave Selects are deasserted.
        enum class SsdenVal {
            noInterruptWillBe=0x00000000,     ///<No interrupt will be generated when all asserted Slave Selects transition to deasserted.
            anInterruptWillBe=0x00000001,     ///<An interrupt will be generated when all asserted Slave Selects transition to deasserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SsdenVal> ssden{}; 
        namespace SsdenValC{
            constexpr Register::FieldValue<decltype(ssden)::Type,SsdenVal::noInterruptWillBe> noInterruptWillBe{};
            constexpr Register::FieldValue<decltype(ssden)::Type,SsdenVal::anInterruptWillBe> anInterruptWillBe{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Spi0Intenclr{    ///<SPI Interrupt Enable Clear. Writing a 1 to any implemented bit position causes the corresponding bit in INTENSET to be cleared.
        using Addr = Register::Address<0x40058010,0x00000000,0x00000000,unsigned>;
        ///Writing 1 clears the corresponding bits in the INTENSET register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdyen{}; 
        ///Writing 1 clears the corresponding bits in the INTENSET register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdyen{}; 
        ///Writing 1 clears the corresponding bits in the INTENSET register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxoven{}; 
        ///Writing 1 clears the corresponding bits in the INTENSET register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txuren{}; 
        ///Writing 1 clears the corresponding bits in the INTENSET register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ssaen{}; 
        ///Writing 1 clears the corresponding bits in the INTENSET register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ssden{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Spi0Rxdat{    ///<SPI Receive Data
        using Addr = Register::Address<0x40058014,0x00000000,0x00000000,unsigned>;
        ///Receiver Data. This contains the next piece of received data. The number of bits that are used depends on the FLen setting in TXCTL / TXDATCTL.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxdat{}; 
        ///Slave Select for receive. This field allows the state of the  SSEL pin to be saved along with received data. The value will reflect the SSEL pin for both master and slave operation. A zero indicates that a slave select is active. The actual polarity of each slave select pin is configured by the related SPOL bit in CFG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rxsseln{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Start of Transfer flag. This flag will be 1 if this is the first frame after SSEL went from  deasserted to  asserted (i.e., any previous transfer has ended). This information can be used to identify the first piece of data in cases where the frame length is greater than 16 bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> sot{}; 
        ///Reserved, the value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Spi0Txdatctl{    ///<SPI Transmit Data with Control
        using Addr = Register::Address<0x40058018,0x00000000,0x00000000,unsigned>;
        ///Transmit Data. This field provides from 1 to 16 bits of data to be transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txdat{}; 
        ///Transmit Slave Select . This field controls what is output for SSEL in master mode.  The active state of the SSEL function is configured by bits in the CFG register.
        enum class TxsselnVal {
            sselAsserted=0x00000000,     ///<SSEL  asserted.
            sselNotAsserted=0x00000001,     ///<SSEL not asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,TxsselnVal> txsseln{}; 
        namespace TxsselnValC{
            constexpr Register::FieldValue<decltype(txsseln)::Type,TxsselnVal::sselAsserted> sselAsserted{};
            constexpr Register::FieldValue<decltype(txsseln)::Type,TxsselnVal::sselNotAsserted> sselNotAsserted{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///End of Transfer. The asserted SSEL will be deasserted at the end of a transfer, and remain so for at least the time specified by the Transfer_delay value in the DLY register.
        enum class EotVal {
            sselNotDeasserted=0x00000000,     ///<SSEL not deasserted. This piece of data is not treated as the end of a transfer. SSEL will not be deasserted at the end of this data.
            sselDeassertedThi=0x00000001,     ///<SSEL deasserted. This piece of data is treated as the end of a transfer. SSELs will be deasserted at the end of this piece of data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,EotVal> eot{}; 
        namespace EotValC{
            constexpr Register::FieldValue<decltype(eot)::Type,EotVal::sselNotDeasserted> sselNotDeasserted{};
            constexpr Register::FieldValue<decltype(eot)::Type,EotVal::sselDeassertedThi> sselDeassertedThi{};
        }
        ///End of Frame. Between frames, a delay may be inserted, as defined by the Frame_delay value in the DLY register. The end of a frame may not be particularly meaningful if the FRAME_DELAY value = 0. This control can be used as part of the support for frame lengths greater than 16 bits.
        enum class EofVal {
            dataNotEofThisP=0x00000000,     ///<Data not EOF. This piece of data transmitted is not treated as the end of a frame.
            dataEofThisPiece=0x00000001,     ///<Data EOF. This piece of data is treated as the end of a frame, causing the FRAME_DELAY time to be inserted before subsequent data is transmitted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,EofVal> eof{}; 
        namespace EofValC{
            constexpr Register::FieldValue<decltype(eof)::Type,EofVal::dataNotEofThisP> dataNotEofThisP{};
            constexpr Register::FieldValue<decltype(eof)::Type,EofVal::dataEofThisPiece> dataEofThisPiece{};
        }
        ///Receive Ignore. This allows data to be transmitted using the SPI without the need to read unneeded data from the receiver to simplify the transmit process.
        enum class RxignoreVal {
            readReceivedData=0x00000000,     ///<Read received data. Received data must be read in order to allow transmission to progress. In slave mode, an overrun error will occur if received data is not read before new data is received.
            ignoreReceivedData=0x00000001,     ///<Ignore received data. Received data is ignored, allowing transmission without reading unneeded received data. No receiver flags are generated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,RxignoreVal> rxignore{}; 
        namespace RxignoreValC{
            constexpr Register::FieldValue<decltype(rxignore)::Type,RxignoreVal::readReceivedData> readReceivedData{};
            constexpr Register::FieldValue<decltype(rxignore)::Type,RxignoreVal::ignoreReceivedData> ignoreReceivedData{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Frame Length. Specifies the frame length from 1 to 16 bits. Note that frame lengths greater than 16 bits are supported by multiple sequential frames Note that if a 1-bit frame is selected, the master function will always insert a delay with a length of one SCK time following the single clock seen on the SCK pin. 0x0 = Data frame is 1 bit in length. 0x1 = Data frame is 1 bit in length. 0x2 = Data frame is 3 bits in length. ... 0xF = Data frame is 16 bits in length.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> flen{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Spi0Txdat{    ///<SPI Transmit Data
        using Addr = Register::Address<0x4005801c,0x00000000,0x00000000,unsigned>;
        ///Transmit Data. This field provides from 4 to 16 bits of data to be transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
        ///Reserved. Only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Spi0Txctl{    ///<SPI Transmit Control
        using Addr = Register::Address<0x40058020,0x00000000,0x00000000,unsigned>;
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Transmit Slave Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> txSsel{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///End of Transfer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eot{}; 
        ///End of Frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eof{}; 
        ///Receive Ignore.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> rxignore{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Frame Length.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> flen{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Spi0Div{    ///<SPI clock Divider
        using Addr = Register::Address<0x40058024,0x00000000,0x00000000,unsigned>;
        ///Rate divider value -1. Specifies how the PCLK for the SPI is divided to produce the SPI clock rate in master mode.  DIVVAL is -1 encoded such that the value 0 results in PCLK/1, the value 1 results in PCLK/2, etc. the maximum possible divide is for the value 0xFFFF, which results in PCLK/65536.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> divval{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Spi0Intstat{    ///<SPI Interrupt Status
        using Addr = Register::Address<0x40058028,0x00000000,0x00000000,unsigned>;
        ///Receiver Ready flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmitter Ready flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Receiver Overrun interrupt flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxov{}; 
        ///Transmitter Underrun interrupt flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txur{}; 
        ///Slave Select Assert.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ssa{}; 
        ///Slave Select Deassert.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ssd{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
