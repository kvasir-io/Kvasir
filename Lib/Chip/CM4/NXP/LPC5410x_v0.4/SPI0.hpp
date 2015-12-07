#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//SPI0
    namespace Nonecfg{    ///<SPI Configuration register
        using Addr = Register::Address<0x400a4000,0xfffff042,0,unsigned>;
        ///SPI enable.
        enum class EnableVal {
            disabled=0x00000000,     ///<Disabled. The SPI is disabled and the internal
										state machine and counters are reset.
            enabled=0x00000001,     ///<Enabled. The SPI is enabled for
										operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnableVal> enable{}; 
        namespace EnableValC{
            constexpr Register::FieldValue<decltype(enable),EnableVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(enable),EnableVal::enabled> enabled{};
        }
        ///Master mode select.
        enum class MasterVal {
            slaveMode=0x00000000,     ///<Slave mode. The SPI will operate in slave mode.
										SCK, MOSI, and the SSEL signals are inputs, MISO is an
										output.
            masterMode=0x00000001,     ///<Master mode. The SPI will operate in master mode.
										SCK, MOSI, and the SSEL signals are outputs, MISO is an
										input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,MasterVal> master{}; 
        namespace MasterValC{
            constexpr Register::FieldValue<decltype(master),MasterVal::slaveMode> slaveMode{};
            constexpr Register::FieldValue<decltype(master),MasterVal::masterMode> masterMode{};
        }
        ///LSB First mode enable.
        enum class LsbfVal {
            standard=0x00000000,     ///<Standard. Data is transmitted and received in
										standard MSB first order.
            reverse=0x00000001,     ///<Reverse. Data is transmitted and received in
										reverse order (LSB first).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,LsbfVal> lsbf{}; 
        namespace LsbfValC{
            constexpr Register::FieldValue<decltype(lsbf),LsbfVal::standard> standard{};
            constexpr Register::FieldValue<decltype(lsbf),LsbfVal::reverse> reverse{};
        }
        ///Clock Phase select.
        enum class CphaVal {
            change=0x00000000,     ///<Change. The SPI captures serial data on the first
										clock transition of the transfer (when the clock changes
										away from the rest state). Data is changed on the following
										edge.
            capture=0x00000001,     ///<Capture. The SPI changes serial data on the first
										clock transition of the transfer (when the clock changes
										away from the rest state). Data is captured on the following
										edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CphaVal> cpha{}; 
        namespace CphaValC{
            constexpr Register::FieldValue<decltype(cpha),CphaVal::change> change{};
            constexpr Register::FieldValue<decltype(cpha),CphaVal::capture> capture{};
        }
        ///Clock Polarity select.
        enum class CpolVal {
            low=0x00000000,     ///<Low. The rest state of the clock (between
										transfers) is low.
            high=0x00000001,     ///<High. The rest state of the clock (between
										transfers) is high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,CpolVal> cpol{}; 
        namespace CpolValC{
            constexpr Register::FieldValue<decltype(cpol),CpolVal::low> low{};
            constexpr Register::FieldValue<decltype(cpol),CpolVal::high> high{};
        }
        ///Loopback mode enable. Loopback mode applies only to Master
								mode, and connects transmit and receive data connected together to
								allow simple software testing.
        enum class LoopVal {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LoopVal> loop{}; 
        namespace LoopValC{
            constexpr Register::FieldValue<decltype(loop),LoopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(loop),LoopVal::enabled> enabled{};
        }
        ///SSEL0 Polarity select.
        enum class Spol0Val {
            low=0x00000000,     ///<Low. The SSEL0 pin is active low. The value in the
										SSEL0 fields of the RXDAT, TXDATCTL, and TXCTL registers
										related to SSEL0 is not inverted relative to the
										pins.
            high=0x00000001,     ///<High. The SSEL0 pin is active high. The value in
										the SSEL0 fields of the RXDAT, TXDATCTL, and TXCTL registers
										related to SSEL0 is inverted relative to the
										pins.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Spol0Val> spol0{}; 
        namespace Spol0ValC{
            constexpr Register::FieldValue<decltype(spol0),Spol0Val::low> low{};
            constexpr Register::FieldValue<decltype(spol0),Spol0Val::high> high{};
        }
        ///SSEL1 Polarity select.
        enum class Spol1Val {
            low=0x00000000,     ///<Low. The SSEL1 pin is active low. The value in the
										SSEL1 fields of the RXDAT, TXDATCTL, and TXCTL registers
										related to SSEL1 is not inverted relative to the
										pins.
            high=0x00000001,     ///<High. The SSEL1 pin is active high. The value in
										the SSEL1 fields of the RXDAT, TXDATCTL, and TXCTL registers
										related to SSEL1 is inverted relative to the
										pins.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Spol1Val> spol1{}; 
        namespace Spol1ValC{
            constexpr Register::FieldValue<decltype(spol1),Spol1Val::low> low{};
            constexpr Register::FieldValue<decltype(spol1),Spol1Val::high> high{};
        }
        ///SSEL2 Polarity select.
        enum class Spol2Val {
            low=0x00000000,     ///<Low. The SSEL2 pin is active low. The value in the
										SSEL2 fields of the RXDAT, TXDATCTL, and TXCTL registers
										related to SSEL2 is not inverted relative to the
										pins.
            high=0x00000001,     ///<High. The SSEL2 pin is active high. The value in
										the SSEL2 fields of the RXDAT, TXDATCTL, and TXCTL registers
										related to SSEL2 is inverted relative to the
										pins.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Spol2Val> spol2{}; 
        namespace Spol2ValC{
            constexpr Register::FieldValue<decltype(spol2),Spol2Val::low> low{};
            constexpr Register::FieldValue<decltype(spol2),Spol2Val::high> high{};
        }
        ///SSEL3 Polarity select.
        enum class Spol3Val {
            low=0x00000000,     ///<Low. The SSEL3 pin is active low. The value in the
										SSEL3 fields of the RXDAT, TXDATCTL, and TXCTL registers
										related to SSEL3 is not inverted relative to the
										pins.
            high=0x00000001,     ///<High. The SSEL3 pin is active high. The value in
										the SSEL3 fields of the RXDAT, TXDATCTL, and TXCTL registers
										related to SSEL3 is inverted relative to the
										pins.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Spol3Val> spol3{}; 
        namespace Spol3ValC{
            constexpr Register::FieldValue<decltype(spol3),Spol3Val::low> low{};
            constexpr Register::FieldValue<decltype(spol3),Spol3Val::high> high{};
        }
    }
    namespace Nonedly{    ///<SPI Delay register
        using Addr = Register::Address<0x400a4004,0xffff0000,0,unsigned>;
        ///Controls the amount of time between SSEL assertion and the
								beginning of a data transfer. There is always one SPI clock time
								between SSEL assertion and the first clock edge. This is not
								considered part of the pre-delay. 0x0 = No additional time is
								inserted. 0x1 = 1 SPI clock time is inserted. 0x2 = 2 SPI clock
								times are inserted. ... 0xF = 15 SPI clock times are
								inserted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> preDelay{}; 
        namespace PredelayValC{
        }
        ///Controls the amount of time between the end of a data
								transfer and SSEL deassertion. 0x0 = No additional time is inserted.
								0x1 = 1 SPI clock time is inserted. 0x2 = 2 SPI clock times are
								inserted. ... 0xF = 15 SPI clock times are inserted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> postDelay{}; 
        namespace PostdelayValC{
        }
        ///If the EOF flag is set, controls the minimum amount of time
								between the current frame and the next frame (or SSEL deassertion if
								EOT). 0x0 = No additional time is inserted. 0x1 = 1 SPI clock time
								is inserted. 0x2 = 2 SPI clock times are inserted. ... 0xF = 15 SPI
								clock times are inserted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> frameDelay{}; 
        namespace FramedelayValC{
        }
        ///Controls the minimum amount of time that the SSEL is
								deasserted between transfers. 0x0 = The minimum time that SSEL is
								deasserted is 1 SPI clock time. (Zero added time.) 0x1 = The minimum
								time that SSEL is deasserted is 2 SPI clock times. 0x2 = The minimum
								time that SSEL is deasserted is 3 SPI clock times. ... 0xF = The
								minimum time that SSEL is deasserted is 16 SPI clock
								times.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> transferDelay{}; 
        namespace TransferdelayValC{
        }
    }
    namespace Nonestat{    ///<SPI Status. Some status flags can be cleared by writing a 1 to that
						bit position
        using Addr = Register::Address<0x400a4008,0xfffffe00,0,unsigned>;
        ///Receiver Ready flag. When 1, indicates that data is
								available to be read from the receiver buffer. Cleared after a read
								of the RXDAT register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        namespace RxrdyValC{
        }
        ///Transmitter Ready flag. When 1, this bit indicates that
								data may be written to the transmit buffer. Previous data may still
								be in the process of being transmitted. Cleared when data is written
								to TXDAT or TXDATCTL until the data is moved to the transmit shift
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///Receiver Overrun interrupt flag. This flag applies only to
								slave mode (Master = 0). This flag is set when the beginning of a
								received character is detected while the receiver buffer is still in
								use. If this occurs, the receiver buffer contents are preserved, and
								the incoming data is lost. Data received by the SPI should be
								considered undefined if RxOv is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxov{}; 
        namespace RxovValC{
        }
        ///Transmitter Underrun interrupt flag. This flag applies only
								to slave mode (Master = 0). In this case, the transmitter must begin
								sending new data on the next input clock if the transmitter is idle.
								If that data is not available in the transmitter holding register at
								that point, there is no data to transmit and the TXUR flag is set.
								Data transmitted by the SPI should be considered undefined if TXUR
								is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txur{}; 
        namespace TxurValC{
        }
        ///Slave Select Assert. This flag is set whenever any slave
								select transitions from deasserted to asserted, in both master and
								slave modes. This allows determining when the SPI transmit/receive
								functions become busy, and allows waking up the device from reduced
								power modes when a slave mode access begins. This flag is cleared by
								software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ssa{}; 
        namespace SsaValC{
        }
        ///Slave Select Deassert. This flag is set whenever any
								asserted slave selects transition to deasserted, in both master and
								slave modes. This allows determining when the SPI transmit/receive
								functions become idle. This flag is cleared by
								software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ssd{}; 
        namespace SsdValC{
        }
        ///Stalled status flag. This indicates whether the SPI is
								currently in a stall condition.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalled{}; 
        namespace StalledValC{
        }
        ///End Transfer control bit. Software can set this bit to
								force an end to the current transfer when the transmitter finishes
								any activity already in progress, as if the EOT flag had been set
								prior to the last transmission. This capability is included to
								support cases where it is not known when transmit data is written
								that it will be the end of a transfer. The bit is cleared when the
								transmitter becomes idle as the transfer comes to an end. Forcing an
								end of transfer in this manner causes any specified FRAME_DELAY and
								TRANSFER_DELAY to be inserted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> endtransfer{}; 
        namespace EndtransferValC{
        }
        ///Master idle status flag. This bit is 1 whenever the SPI
								master function is fully idle. This means that the transmit holding
								register is empty and the transmitter is not in the process of
								sending data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mstidle{}; 
        namespace MstidleValC{
        }
    }
    namespace Noneintenset{    ///<SPI Interrupt Enable read and Set. A complete value may be read
						from this register. Writing a 1 to any implemented bit position causes that
						bit to be set.
        using Addr = Register::Address<0x400a400c,0xfffffec0,0,unsigned>;
        ///RX ready interrupt enable. Determines whether an interrupt
								occurs when receiver data is available.
        enum class RxrdyenVal {
            disabled=0x00000000,     ///<Disabled. No interrupt will be generated when
										receiver data is available.
            enabled=0x00000001,     ///<Enabled. An interrupt will be generated when
										receiver data is available in the RXDAT
										register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RxrdyenVal> rxrdyen{}; 
        namespace RxrdyenValC{
            constexpr Register::FieldValue<decltype(rxrdyen),RxrdyenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxrdyen),RxrdyenVal::enabled> enabled{};
        }
        ///TX ready interrupt enable. Determines whether an interrupt
								occurs when the transmitter holding register is
								available.
        enum class TxrdyenVal {
            disabled=0x00000000,     ///<Disabled. No interrupt will be generated when the
										transmitter holding register is available.
            enabled=0x00000001,     ///<Enabled. An interrupt will be generated when data
										may be written to TXDAT.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TxrdyenVal> txrdyen{}; 
        namespace TxrdyenValC{
            constexpr Register::FieldValue<decltype(txrdyen),TxrdyenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txrdyen),TxrdyenVal::enabled> enabled{};
        }
        ///RX overrun interrupt enable. Determines whether an
								interrupt occurs when a receiver overrun occurs. This happens in
								slave mode when there is a need for the receiver to move newly
								received data to the RXDAT register when it is already in use. The
								interface prevents receiver overrun in Master mode by not allowing a
								new transmission to begin when a receiver overrun would otherwise
								occur.
        enum class RxovenVal {
            disabled=0x00000000,     ///<Disabled. No interrupt will be generated when a
										receiver overrun occurs.
            enabled=0x00000001,     ///<Enabled. An interrupt will be generated if a
										receiver overrun occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RxovenVal> rxoven{}; 
        namespace RxovenValC{
            constexpr Register::FieldValue<decltype(rxoven),RxovenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxoven),RxovenVal::enabled> enabled{};
        }
        ///TX underrun interrupt enable. Determines whether an
								interrupt occurs when a transmitter underrun occurs. This happens in
								slave mode when there is a need to transmit data when none is
								available.
        enum class TxurenVal {
            disabled=0x00000000,     ///<Disabled. No interrupt will be generated when the
										transmitter underruns.
            enabled=0x00000001,     ///<Enabled. An interrupt will be generated if the
										transmitter underruns.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TxurenVal> txuren{}; 
        namespace TxurenValC{
            constexpr Register::FieldValue<decltype(txuren),TxurenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txuren),TxurenVal::enabled> enabled{};
        }
        ///Slave select assert interrupt enable. Determines whether an
								interrupt occurs when the Slave Select is asserted.
        enum class SsaenVal {
            disabled=0x00000000,     ///<Disabled. No interrupt will be generated when any
										Slave Select transitions from deasserted to
										asserted.
            enabled=0x00000001,     ///<Enabled. An interrupt will be generated when any
										Slave Select transitions from deasserted to
										asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SsaenVal> ssaen{}; 
        namespace SsaenValC{
            constexpr Register::FieldValue<decltype(ssaen),SsaenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ssaen),SsaenVal::enabled> enabled{};
        }
        ///Slave select deassert interrupt enable. Determines whether
								an interrupt occurs when the Slave Select is
								deasserted.
        enum class SsdenVal {
            disabled=0x00000000,     ///<Disabled. No interrupt will be generated when all
										asserted Slave Selects transition to
										deasserted.
            enabled=0x00000001,     ///<Enabled. An interrupt will be generated when all
										asserted Slave Selects transition to
										deasserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SsdenVal> ssden{}; 
        namespace SsdenValC{
            constexpr Register::FieldValue<decltype(ssden),SsdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ssden),SsdenVal::enabled> enabled{};
        }
        ///Master idle interrupt enable
        enum class MstidleenVal {
            disabled=0x00000000,     ///<Disabled. No interrupt will be generated when the
										SPI master function is idle.
            enabled=0x00000001,     ///<Enabled. An interrupt will be generated when the
										SPI master function is idle.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,MstidleenVal> mstidleen{}; 
        namespace MstidleenValC{
            constexpr Register::FieldValue<decltype(mstidleen),MstidleenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(mstidleen),MstidleenVal::enabled> enabled{};
        }
    }
    namespace Noneintenclr{    ///<SPI Interrupt Enable Clear. Writing a 1 to any implemented bit
						position causes the corresponding bit in INTENSET to be
						cleared.
        using Addr = Register::Address<0x400a4010,0xfffffec0,0,unsigned>;
        ///Writing 1 clears the corresponding bits in the INTENSET
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdyen{}; 
        namespace RxrdyenValC{
        }
        ///Writing 1 clears the corresponding bits in the INTENSET
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdyen{}; 
        namespace TxrdyenValC{
        }
        ///Writing 1 clears the corresponding bits in the INTENSET
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxoven{}; 
        namespace RxovenValC{
        }
        ///Writing 1 clears the corresponding bits in the INTENSET
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txuren{}; 
        namespace TxurenValC{
        }
        ///Writing 1 clears the corresponding bits in the INTENSET
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ssaen{}; 
        namespace SsaenValC{
        }
        ///Writing 1 clears the corresponding bits in the INTENSET
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ssden{}; 
        namespace SsdenValC{
        }
        ///Writing 1 clears the corresponding bits in the MSTIDLE
								register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mstidle{}; 
        namespace MstidleValC{
        }
    }
    namespace Nonerxdat{    ///<SPI Receive Data
        using Addr = Register::Address<0x400a4014,0xffe00000,0,unsigned>;
        ///Receiver Data. This contains the next piece of received
								data. The number of bits that are used depends on the LEN setting in
								TXCTL / TXDATCTL.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxdat{}; 
        namespace RxdatValC{
        }
        ///Slave Select for receive. This field allows the state of
								the SSEL0 pin to be saved along with received data. The value will
								reflect the SSEL0 pin for both master and slave operation. A zero
								indicates that a slave select is active. The actual polarity of each
								slave select pin is configured by the related SPOL bit in
								CFG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rxssel0N{}; 
        namespace Rxssel0nValC{
        }
        ///Slave Select for receive. This field allows the state of
								the SSEL1 pin to be saved along with received data. The value will
								reflect the SSEL1 pin for both master and slave operation. A zero
								indicates that a slave select is active. The actual polarity of each
								slave select pin is configured by the related SPOL bit in
								CFG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rxssel1N{}; 
        namespace Rxssel1nValC{
        }
        ///Slave Select for receive. This field allows the state of
								the SSEL2 pin to be saved along with received data. The value will
								reflect the SSEL2 pin for both master and slave operation. A zero
								indicates that a slave select is active. The actual polarity of each
								slave select pin is configured by the related SPOL bit in
								CFG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rxssel2N{}; 
        namespace Rxssel2nValC{
        }
        ///Slave Select for receive. This field allows the state of
								the SSEL3 pin to be saved along with received data. The value will
								reflect the SSEL3 pin for both master and slave operation. A zero
								indicates that a slave select is active. The actual polarity of each
								slave select pin is configured by the related SPOL bit in
								CFG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rxssel3N{}; 
        namespace Rxssel3nValC{
        }
        ///Start of Transfer flag. This flag will be 1 if this is the
								first data after the SSELs went from deasserted to asserted (i.e.,
								any previous transfer has ended). This information can be used to
								identify the first piece of data in cases where the transfer length
								is greater than 16 bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> sot{}; 
        namespace SotValC{
        }
    }
    namespace Nonetxdatctl{    ///<SPI Transmit Data with Control
        using Addr = Register::Address<0x400a4018,0xf0800000,0,unsigned>;
        ///Transmit Data. This field provides from 1 to 16 bits of
								data to be transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txdat{}; 
        namespace TxdatValC{
        }
        ///Transmit Slave Select. This field asserts SSEL0 in master
								mode. The output on the pin is active LOW by default. The active
								state of the SSEL0 pin is configured by bits in the CFG
								register.
        enum class Txssel0nVal {
            ssel0Asserted=0x00000000,     ///<SSEL0 asserted.
            ssel0NotAsserted=0x00000001,     ///<SSEL0 not asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Txssel0nVal> txssel0N{}; 
        namespace Txssel0nValC{
            constexpr Register::FieldValue<decltype(txssel0N),Txssel0nVal::ssel0Asserted> ssel0Asserted{};
            constexpr Register::FieldValue<decltype(txssel0N),Txssel0nVal::ssel0NotAsserted> ssel0NotAsserted{};
        }
        ///Transmit Slave Select. This field asserts SSEL1 in master
								mode. The output on the pin is active LOW by default. The active
								state of the SSEL1 pin is configured by bits in the CFG
								register.
        enum class Txssel1nVal {
            ssel1Asserted=0x00000000,     ///<SSEL1 asserted.
            ssel1NotAsserted=0x00000001,     ///<SSEL1 not asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Txssel1nVal> txssel1N{}; 
        namespace Txssel1nValC{
            constexpr Register::FieldValue<decltype(txssel1N),Txssel1nVal::ssel1Asserted> ssel1Asserted{};
            constexpr Register::FieldValue<decltype(txssel1N),Txssel1nVal::ssel1NotAsserted> ssel1NotAsserted{};
        }
        ///Transmit Slave Select. This field asserts SSEL2 in master
								mode. The output on the pin is active LOW by default. The active
								state of the SSEL2 pin is configured by bits in the CFG
								register.
        enum class Txssel2nVal {
            ssel2Asserted=0x00000000,     ///<SSEL2 asserted.
            ssel2NotAsserted=0x00000001,     ///<SSEL2 not asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Txssel2nVal> txssel2N{}; 
        namespace Txssel2nValC{
            constexpr Register::FieldValue<decltype(txssel2N),Txssel2nVal::ssel2Asserted> ssel2Asserted{};
            constexpr Register::FieldValue<decltype(txssel2N),Txssel2nVal::ssel2NotAsserted> ssel2NotAsserted{};
        }
        ///Transmit Slave Select. This field asserts SSEL3 in master
								mode. The output on the pin is active LOW by default. The active
								state of the SSEL3 pin is configured by bits in the CFG
								register.
        enum class Txssel3nVal {
            ssel3Asserted=0x00000000,     ///<SSEL3 asserted.
            ssel3NotAsserted=0x00000001,     ///<SSEL3 not asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Txssel3nVal> txssel3N{}; 
        namespace Txssel3nValC{
            constexpr Register::FieldValue<decltype(txssel3N),Txssel3nVal::ssel3Asserted> ssel3Asserted{};
            constexpr Register::FieldValue<decltype(txssel3N),Txssel3nVal::ssel3NotAsserted> ssel3NotAsserted{};
        }
        ///End of Transfer. The asserted SSEL will be deasserted at
								the end of a transfer, and remain so for at least the time specified
								by the Transfer_delay value in the DLY register.
        enum class EotVal {
            sselNotDeasserted=0x00000000,     ///<SSEL not deasserted. This piece of data is not
										treated as the end of a transfer. SSEL will not be
										deasserted at the end of this data.
            sselDeasserted=0x00000001,     ///<SSEL deasserted. This piece of data is treated as
										the end of a transfer. SSEL will be deasserted at the end of
										this piece of data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,EotVal> eot{}; 
        namespace EotValC{
            constexpr Register::FieldValue<decltype(eot),EotVal::sselNotDeasserted> sselNotDeasserted{};
            constexpr Register::FieldValue<decltype(eot),EotVal::sselDeasserted> sselDeasserted{};
        }
        ///End of Frame. Between frames, a delay may be inserted, as
								defined by the FRAME_DELAY value in the DLY register. The end of a
								frame may not be particularly meaningful if the FRAME_DELAY value =
								0. This control can be used as part of the support for frame lengths
								greater than 16 bits.
        enum class EofVal {
            dataNotEof=0x00000000,     ///<Data not EOF. This piece of data transmitted is not
										treated as the end of a frame.
            dataEof=0x00000001,     ///<Data EOF. This piece of data is treated as the end
										of a frame, causing the FRAME_DELAY time to be inserted
										before subsequent data is transmitted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,EofVal> eof{}; 
        namespace EofValC{
            constexpr Register::FieldValue<decltype(eof),EofVal::dataNotEof> dataNotEof{};
            constexpr Register::FieldValue<decltype(eof),EofVal::dataEof> dataEof{};
        }
        ///Receive Ignore. This allows data to be transmitted using
								the SPI without the need to read unneeded data from the
								receiver.Setting this bit simplifies the transmit process and can be
								used with the DMA.
        enum class RxignoreVal {
            readReceivedData=0x00000000,     ///<Read received data. Received data must be read in
										order to allow transmission to progress. In slave mode, an
										overrun error will occur if received data is not read before
										new data is received.
            ignoreReceivedData=0x00000001,     ///<Ignore received data. Received data is ignored,
										allowing transmission without reading unneeded received
										data. No receiver flags are generated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,RxignoreVal> rxignore{}; 
        namespace RxignoreValC{
            constexpr Register::FieldValue<decltype(rxignore),RxignoreVal::readReceivedData> readReceivedData{};
            constexpr Register::FieldValue<decltype(rxignore),RxignoreVal::ignoreReceivedData> ignoreReceivedData{};
        }
        ///Data Length. Specifies the data length from 1 to 16 bits.
								Note that transfer lengths greater than 16 bits are supported by
								implementing multiple sequential transmits. 0x0 = Data transfer is 1
								bit in length. 0x1 = Data transfer is 2 bits in length. 0x2 = Data
								transfer is 3 bits in length. ... 0xF = Data transfer is 16 bits in
								length.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> len{}; 
        namespace LenValC{
        }
    }
    namespace Nonetxdat{    ///<SPI Transmit Data
        using Addr = Register::Address<0x400a401c,0xffff0000,0,unsigned>;
        ///Transmit Data. This field provides from 4 to 16 bits of
								data to be transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Nonetxctl{    ///<SPI Transmit Control
        using Addr = Register::Address<0x400a4020,0xf080ffff,0,unsigned>;
        ///Transmit Slave Select 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> txssel0N{}; 
        namespace Txssel0nValC{
        }
        ///Transmit Slave Select 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txssel1N{}; 
        namespace Txssel1nValC{
        }
        ///Transmit Slave Select 2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> txssel2N{}; 
        namespace Txssel2nValC{
        }
        ///Transmit Slave Select 3.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> txssel3N{}; 
        namespace Txssel3nValC{
        }
        ///End of Transfer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eot{}; 
        namespace EotValC{
        }
        ///End of Frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eof{}; 
        namespace EofValC{
        }
        ///Receive Ignore.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> rxignore{}; 
        namespace RxignoreValC{
        }
        ///Data transfer Length.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> len{}; 
        namespace LenValC{
        }
    }
    namespace Nonediv{    ///<SPI clock Divider
        using Addr = Register::Address<0x400a4024,0xffff0000,0,unsigned>;
        ///Rate divider value. Specifies how the PCLK for the SPI is
								divided to produce the SPI clock rate in master mode. DIVVAL is -1
								encoded such that the value 0 results in PCLK/1, the value 1 results
								in PCLK/2, up to the maximum possible divide value of 0xFFFF, which
								results in PCLK/65536.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> divval{}; 
        namespace DivvalValC{
        }
    }
    namespace Noneintstat{    ///<SPI Interrupt Status
        using Addr = Register::Address<0x400a4028,0xfffffec0,0,unsigned>;
        ///Receiver Ready flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        namespace RxrdyValC{
        }
        ///Transmitter Ready flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///Receiver Overrun interrupt flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxov{}; 
        namespace RxovValC{
        }
        ///Transmitter Underrun interrupt flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txur{}; 
        namespace TxurValC{
        }
        ///Slave Select Assert.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ssa{}; 
        namespace SsaValC{
        }
        ///Slave Select Deassert.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ssd{}; 
        namespace SsdValC{
        }
        ///Master Idle status flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mstidle{}; 
        namespace MstidleValC{
        }
    }
}
