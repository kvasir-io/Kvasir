#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//SPI
    namespace Nonecfg{    ///<SPI Configuration register
        using Addr = Register::Address<0x40058000,0xfffffe42,0,unsigned>;
        ///SPI enable.
        enum class enableVal {
            disabledTheSpiIs=0x00000000,     ///<Disabled. The SPI is disabled and the internal state machine and counters are reset.
            enabledTheSpiIs=0x00000001,     ///<Enabled. The SPI is enabled for operation.
        };
        namespace enableValC{
            constexpr MPL::Value<enableVal,enableVal::disabledTheSpiIs> disabledTheSpiIs{};
            constexpr MPL::Value<enableVal,enableVal::enabledTheSpiIs> enabledTheSpiIs{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,enableVal> enable{}; 
        ///Master mode select.
        enum class masterVal {
            slaveModeTheSpi=0x00000000,     ///<Slave mode. The SPI will operate in slave mode. SCK, MOSI, and the SSEL signals are inputs, MISO is an output.
            masterModeTheSpi=0x00000001,     ///<Master mode. The SPI will operate in master mode. SCK, MOSI, and the SSEL signals are outputs, MISO is an input.
        };
        namespace masterValC{
            constexpr MPL::Value<masterVal,masterVal::slaveModeTheSpi> slaveModeTheSpi{};
            constexpr MPL::Value<masterVal,masterVal::masterModeTheSpi> masterModeTheSpi{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,masterVal> master{}; 
        ///LSB First mode enable.
        enum class lsbfVal {
            standardDataIsTr=0x00000000,     ///<Standard. Data is transmitted and received in standard MSB first order.
            reverseDataIsTra=0x00000001,     ///<Reverse. Data is transmitted and received in reverse order (LSB first).
        };
        namespace lsbfValC{
            constexpr MPL::Value<lsbfVal,lsbfVal::standardDataIsTr> standardDataIsTr{};
            constexpr MPL::Value<lsbfVal,lsbfVal::reverseDataIsTra> reverseDataIsTra{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,lsbfVal> lsbf{}; 
        ///Clock Phase select. .
        enum class cphaVal {
            changeTheSpiCapt=0x00000000,     ///<Change. The SPI captures serial data on the first clock transition of the frame (when the clock changes away from the rest state). Data is changed on the following edge.
            captureTheSpiCha=0x00000001,     ///<Capture. The SPI changes serial data on the first clock transition of the frame (when the clock changes away from the rest state). Data is captured on the following edge.
        };
        namespace cphaValC{
            constexpr MPL::Value<cphaVal,cphaVal::changeTheSpiCapt> changeTheSpiCapt{};
            constexpr MPL::Value<cphaVal,cphaVal::captureTheSpiCha> captureTheSpiCha{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,cphaVal> cpha{}; 
        ///Clock Polarity select.
        enum class cpolVal {
            lowTheRestState=0x00000000,     ///<Low. The rest state of the clock (between frames) is low.
            highTheRestState=0x00000001,     ///<High. The rest state of the clock (between frames) is high.
        };
        namespace cpolValC{
            constexpr MPL::Value<cpolVal,cpolVal::lowTheRestState> lowTheRestState{};
            constexpr MPL::Value<cpolVal,cpolVal::highTheRestState> highTheRestState{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,cpolVal> cpol{}; 
        ///Loopback mode enable. Loopback mode applies only to Master mode, and connects transmit and receive data connected together to allow simple software testing.
        enum class loopVal {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace loopValC{
            constexpr MPL::Value<loopVal,loopVal::disabled> disabled{};
            constexpr MPL::Value<loopVal,loopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,loopVal> loop{}; 
        ///SSEL Polarity select.
        enum class spolVal {
            lowTheSselPinIs=0x00000000,     ///<Low. The SSEL pin is active low. The value in the SSEL fields of the RXDAT, TXDATCTL, and TXCTL registers related to SSEL is not inverted relative to the pins.
            highTheSselPinI=0x00000001,     ///<High. The SSEL pin is active high. The value in the SSEL fields of the RXDAT, TXDATCTL, and TXCTL registers related to SSEL is inverted relative to the pins.
        };
        namespace spolValC{
            constexpr MPL::Value<spolVal,spolVal::lowTheSselPinIs> lowTheSselPinIs{};
            constexpr MPL::Value<spolVal,spolVal::highTheSselPinI> highTheSselPinI{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,spolVal> spol{}; 
    }
    namespace Nonedly{    ///<SPI Delay register
        using Addr = Register::Address<0x40058004,0xffff0000,0,unsigned>;
        ///Controls the amount of time between SSEL assertion and the beginning of a data frame.  There is always one SPI clock time between SSEL assertion and the first clock edge. This is not considered part of the pre-delay. 0x0 = No additional time is inserted. 0x1 = 1 SPI clock time is inserted. 0x2 = 2 SPI clock times are inserted. ... 0xF = 15 SPI clock times are inserted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> preDelay{}; 
        ///Controls the amount of time between the end of a data frame and SSEL deassertion.  0x0 = No additional time is inserted. 0x1 = 1 SPI clock time is inserted. 0x2 = 2 SPI clock times are inserted. ... 0xF = 15 SPI clock times are inserted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> postDelay{}; 
        ///Controls the minimum amount of time between adjacent data frames.  0x0 = No additional time is inserted. 0x1 = 1 SPI clock time is inserted. 0x2 = 2 SPI clock times are inserted. ... 0xF = 15 SPI clock times are inserted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> frameDelay{}; 
        ///Controls the minimum amount of time that the SSELs are deasserted between transfers.  0x0 = The minimum time that SSEL is deasserted is 1 SPI clock time. (Zero added time.) 0x1 = The minimum time that SSEL is deasserted is 2 SPI clock times. 0x2 = The minimum time that SSEL is deasserted is 3 SPI clock times. ... 0xF = The minimum time that SSEL is deasserted is 16 SPI clock times.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> transferDelay{}; 
    }
    namespace Nonestat{    ///<SPI Status. Some status flags can be cleared by writing a 1 to that bit position
        using Addr = Register::Address<0x40058008,0xfffffe00,0,unsigned>;
        ///Receiver Ready flag. When 1, indicates that data is available to be read from the receiver buffer. Cleared after a read of the RXDAT register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmitter Ready flag. When 1, this bit indicates that data may be written to the transmit buffer. Previous data may still be in the process of being transmitted. Cleared when data is written to TXDAT or TXDATCTL until the data is moved to the transmit shift register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Receiver Overrun interrupt flag. This flag is set when the beginning of a received character is detected while the receiver buffer is still in use. If this occurs, the receiver buffer contents are preserved, and the incoming data is lost. Data received by the SPI should be considered undefined if RxOv is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxov{}; 
        ///Transmitter Underrun interrupt flag. This flag applies only to slave mode (Master = 0). In this case, the transmitter must begin sending new data on the next input clock if the transmitter is idle. If that data is not available in the transmitter holding register at that point, there is no data to transmit and the TxUr flag is set. Data transmitted by the SPI should be considered undefined if TxUr is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txur{}; 
        ///Slave Select Assert. This flag is set whenever any slave select transitions from deasserted to asserted, in both master and slave modes. This allows determining when the SPI transmit/receive functions become busy, and allows waking up the device from reduced power modes when a slave mode access begins. This flag is cleared by software.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ssa{}; 
        ///Slave Select Deassert. This flag is set whenever any asserted slave selects transition to deasserted, in both master and slave modes. This allows determining when the SPI transmit/receive functions become idle. This flag is cleared by software.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ssd{}; 
        ///Stalled status flag. This indicates whether the SPI is currently in a stall condition.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalled{}; 
        ///End Transfer control bit. Software can set this bit to force an end to the current transfer when the transmitter finishes any activity already in progress, as if the EOT flag had been set prior to the last transmission. This capability is included to support cases where it is not known when transmit data is written that it will be the end of a transfer. The bit is cleared when the transmitter becomes Idle as the transfer comes to an end. Forcing an end of transfer in this manner causes any specified FrameDelay and TransferDelay to be inserted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> endtransfer{}; 
        ///Idle status flag. This bit is 1 whenever the SPI master function is fully idle. This means that the transmit holding register is empty and the transmitter is not in the process of sending data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> idle{}; 
    }
    namespace Noneintenset{    ///<SPI Interrupt Enable read and Set. A complete value may be read from this register. Writing a 1 to any implemented bit position causes that bit to be set.
        using Addr = Register::Address<0x4005800c,0xffffffc0,0,unsigned>;
        ///Determines whether an interrupt occurs when receiver data is available.
        enum class rxrdyenVal {
            noInterruptWillBe=0x00000000,     ///<No interrupt will be generated when receiver data is available.
            anInterruptWillBe=0x00000001,     ///<An interrupt will be generated when receiver data is available in the RXDAT register.
        };
        namespace rxrdyenValC{
            constexpr MPL::Value<rxrdyenVal,rxrdyenVal::noInterruptWillBe> noInterruptWillBe{};
            constexpr MPL::Value<rxrdyenVal,rxrdyenVal::anInterruptWillBe> anInterruptWillBe{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rxrdyenVal> rxrdyen{}; 
        ///Determines whether an interrupt occurs when the transmitter holding register is available.
        enum class txrdyenVal {
            noInterruptWillBe=0x00000000,     ///<No interrupt will be generated when the transmitter holding register is available.
            anInterruptWillBe=0x00000001,     ///<An interrupt will be generated when data may be written to TXDAT.
        };
        namespace txrdyenValC{
            constexpr MPL::Value<txrdyenVal,txrdyenVal::noInterruptWillBe> noInterruptWillBe{};
            constexpr MPL::Value<txrdyenVal,txrdyenVal::anInterruptWillBe> anInterruptWillBe{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,txrdyenVal> txrdyen{}; 
        ///Determines whether an interrupt occurs when a receiver overrun occurs. This happens in slave mode when there is a need for the receiver to move newly received data to the RXDAT register when it is already in use. The interface prevents receiver overrun in Master mode by not allowing a new transmission to begin when a receiver overrun would otherwise occur.
        enum class rxovenVal {
            noInterruptWillBe=0x00000000,     ///<No interrupt will be generated when a receiver overrun occurs.
            anInterruptWillBe=0x00000001,     ///<An interrupt will be generated if a receiver overrun occurs.
        };
        namespace rxovenValC{
            constexpr MPL::Value<rxovenVal,rxovenVal::noInterruptWillBe> noInterruptWillBe{};
            constexpr MPL::Value<rxovenVal,rxovenVal::anInterruptWillBe> anInterruptWillBe{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rxovenVal> rxoven{}; 
        ///Determines whether an interrupt occurs when a transmitter underrun occurs. This happens in slave mode when there is a need to transmit data when none is available.
        enum class txurenVal {
            noInterruptWillBe=0x00000000,     ///<No interrupt will be generated when the transmitter underruns.
            anInterruptWillBe=0x00000001,     ///<An interrupt will be generated if the transmitter underruns.
        };
        namespace txurenValC{
            constexpr MPL::Value<txurenVal,txurenVal::noInterruptWillBe> noInterruptWillBe{};
            constexpr MPL::Value<txurenVal,txurenVal::anInterruptWillBe> anInterruptWillBe{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,txurenVal> txuren{}; 
        ///Determines whether an interrupt occurs when one or more Slave Select is asserted.
        enum class ssaenVal {
            noInterruptWillBe=0x00000000,     ///<No interrupt will be generated when any Slave Select transitions from deasserted to asserted.
            anInterruptWillBe=0x00000001,     ///<An interrupt will be generated when any Slave Select transitions from deasserted to asserted.
        };
        namespace ssaenValC{
            constexpr MPL::Value<ssaenVal,ssaenVal::noInterruptWillBe> noInterruptWillBe{};
            constexpr MPL::Value<ssaenVal,ssaenVal::anInterruptWillBe> anInterruptWillBe{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ssaenVal> ssaen{}; 
        ///Determines whether an interrupt occurs when all Slave Selects are deasserted.
        enum class ssdenVal {
            noInterruptWillBe=0x00000000,     ///<No interrupt will be generated when all asserted Slave Selects transition to deasserted.
            anInterruptWillBe=0x00000001,     ///<An interrupt will be generated when all asserted Slave Selects transition to deasserted.
        };
        namespace ssdenValC{
            constexpr MPL::Value<ssdenVal,ssdenVal::noInterruptWillBe> noInterruptWillBe{};
            constexpr MPL::Value<ssdenVal,ssdenVal::anInterruptWillBe> anInterruptWillBe{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ssdenVal> ssden{}; 
    }
    namespace Noneintenclr{    ///<SPI Interrupt Enable Clear. Writing a 1 to any implemented bit position causes the corresponding bit in INTENSET to be cleared.
        using Addr = Register::Address<0x40058010,0xffffffc0,0,unsigned>;
        ///Writing 1 clears the corresponding bits in the INTENSET register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdyen{}; 
        ///Writing 1 clears the corresponding bits in the INTENSET register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdyen{}; 
        ///Writing 1 clears the corresponding bits in the INTENSET register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxoven{}; 
        ///Writing 1 clears the corresponding bits in the INTENSET register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txuren{}; 
        ///Writing 1 clears the corresponding bits in the INTENSET register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ssaen{}; 
        ///Writing 1 clears the corresponding bits in the INTENSET register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ssden{}; 
    }
    namespace Nonerxdat{    ///<SPI Receive Data
        using Addr = Register::Address<0x40058014,0xffee0000,0,unsigned>;
        ///Receiver Data. This contains the next piece of received data. The number of bits that are used depends on the FLen setting in TXCTL / TXDATCTL.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxdat{}; 
        ///Slave Select for receive. This field allows the state of the  SSEL pin to be saved along with received data. The value will reflect the SSEL pin for both master and slave operation. A zero indicates that a slave select is active. The actual polarity of each slave select pin is configured by the related SPOL bit in CFG.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rxsseln{}; 
        ///Start of Transfer flag. This flag will be 1 if this is the first frame after SSEL went from  deasserted to  asserted (i.e., any previous transfer has ended). This information can be used to identify the first piece of data in cases where the frame length is greater than 16 bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> sot{}; 
    }
    namespace Nonetxdatctl{    ///<SPI Transmit Data with Control
        using Addr = Register::Address<0x40058018,0xf08e0000,0,unsigned>;
        ///Transmit Data. This field provides from 1 to 16 bits of data to be transmitted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txdat{}; 
        ///Transmit Slave Select . This field controls what is output for SSEL in master mode.  The active state of the SSEL function is configured by bits in the CFG register.
        enum class txsselnVal {
            sselAsserted=0x00000000,     ///<SSEL  asserted.
            sselNotAsserted=0x00000001,     ///<SSEL not asserted.
        };
        namespace txsselnValC{
            constexpr MPL::Value<txsselnVal,txsselnVal::sselAsserted> sselAsserted{};
            constexpr MPL::Value<txsselnVal,txsselnVal::sselNotAsserted> sselNotAsserted{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,txsselnVal> txsseln{}; 
        ///End of Transfer. The asserted SSEL will be deasserted at the end of a transfer, and remain so for at least the time specified by the Transfer_delay value in the DLY register.
        enum class eotVal {
            sselNotDeasserted=0x00000000,     ///<SSEL not deasserted. This piece of data is not treated as the end of a transfer. SSEL will not be deasserted at the end of this data.
            sselDeassertedThi=0x00000001,     ///<SSEL deasserted. This piece of data is treated as the end of a transfer. SSELs will be deasserted at the end of this piece of data.
        };
        namespace eotValC{
            constexpr MPL::Value<eotVal,eotVal::sselNotDeasserted> sselNotDeasserted{};
            constexpr MPL::Value<eotVal,eotVal::sselDeassertedThi> sselDeassertedThi{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,eotVal> eot{}; 
        ///End of Frame. Between frames, a delay may be inserted, as defined by the Frame_delay value in the DLY register. The end of a frame may not be particularly meaningful if the FRAME_DELAY value = 0. This control can be used as part of the support for frame lengths greater than 16 bits.
        enum class eofVal {
            dataNotEofThisP=0x00000000,     ///<Data not EOF. This piece of data transmitted is not treated as the end of a frame.
            dataEofThisPiece=0x00000001,     ///<Data EOF. This piece of data is treated as the end of a frame, causing the FRAME_DELAY time to be inserted before subsequent data is transmitted.
        };
        namespace eofValC{
            constexpr MPL::Value<eofVal,eofVal::dataNotEofThisP> dataNotEofThisP{};
            constexpr MPL::Value<eofVal,eofVal::dataEofThisPiece> dataEofThisPiece{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,eofVal> eof{}; 
        ///Receive Ignore. This allows data to be transmitted using the SPI without the need to read unneeded data from the receiver to simplify the transmit process.
        enum class rxignoreVal {
            readReceivedData=0x00000000,     ///<Read received data. Received data must be read in order to allow transmission to progress. In slave mode, an overrun error will occur if received data is not read before new data is received.
            ignoreReceivedData=0x00000001,     ///<Ignore received data. Received data is ignored, allowing transmission without reading unneeded received data. No receiver flags are generated.
        };
        namespace rxignoreValC{
            constexpr MPL::Value<rxignoreVal,rxignoreVal::readReceivedData> readReceivedData{};
            constexpr MPL::Value<rxignoreVal,rxignoreVal::ignoreReceivedData> ignoreReceivedData{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,rxignoreVal> rxignore{}; 
        ///Frame Length. Specifies the frame length from 1 to 16 bits. Note that frame lengths greater than 16 bits are supported by multiple sequential frames Note that if a 1-bit frame is selected, the master function will always insert a delay with a length of one SCK time following the single clock seen on the SCK pin. 0x0 = Data frame is 1 bit in length. 0x1 = Data frame is 1 bit in length. 0x2 = Data frame is 3 bits in length. ... 0xF = Data frame is 16 bits in length.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> flen{}; 
    }
    namespace Nonetxdat{    ///<SPI Transmit Data
        using Addr = Register::Address<0x4005801c,0xffff0000,0,unsigned>;
        ///Transmit Data. This field provides from 4 to 16 bits of data to be transmitted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonetxctl{    ///<SPI Transmit Control
        using Addr = Register::Address<0x40058020,0xf08effff,0,unsigned>;
        ///Transmit Slave Select.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> txSsel{}; 
        ///End of Transfer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eot{}; 
        ///End of Frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eof{}; 
        ///Receive Ignore.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> rxignore{}; 
        ///Frame Length.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> flen{}; 
    }
    namespace Nonediv{    ///<SPI clock Divider
        using Addr = Register::Address<0x40058024,0xffff0000,0,unsigned>;
        ///Rate divider value -1. Specifies how the PCLK for the SPI is divided to produce the SPI clock rate in master mode.  DIVVAL is -1 encoded such that the value 0 results in PCLK/1, the value 1 results in PCLK/2, etc. the maximum possible divide is for the value 0xFFFF, which results in PCLK/65536.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> divval{}; 
    }
    namespace Noneintstat{    ///<SPI Interrupt Status
        using Addr = Register::Address<0x40058028,0xffffffc0,0,unsigned>;
        ///Receiver Ready flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmitter Ready flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Receiver Overrun interrupt flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxov{}; 
        ///Transmitter Underrun interrupt flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txur{}; 
        ///Slave Select Assert.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ssa{}; 
        ///Slave Select Deassert.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ssd{}; 
    }
}
