#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//SPI0
    namespace Nonecfg{    ///<SPI Configuration register
        using Addr = Register::Address<0x400a4000,0xfffff042,0,unsigned>;
        ///SPI enable.
        enum class enableVal {
            disabled=0x00000000,     ///<Disabled. The SPI is disabled and the internal
										state machine and counters are reset.
            enabled=0x00000001,     ///<Enabled. The SPI is enabled for
										operation.
        };
        namespace enableValC{
            constexpr MPL::Value<enableVal,enableVal::disabled> disabled{};
            constexpr MPL::Value<enableVal,enableVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,enableVal> enable{}; 
        ///Master mode select.
        enum class masterVal {
            slaveMode=0x00000000,     ///<Slave mode. The SPI will operate in slave mode.
										SCK, MOSI, and the SSEL signals are inputs, MISO is an
										output.
            masterMode=0x00000001,     ///<Master mode. The SPI will operate in master mode.
										SCK, MOSI, and the SSEL signals are outputs, MISO is an
										input.
        };
        namespace masterValC{
            constexpr MPL::Value<masterVal,masterVal::slaveMode> slaveMode{};
            constexpr MPL::Value<masterVal,masterVal::masterMode> masterMode{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,masterVal> master{}; 
        ///LSB First mode enable.
        enum class lsbfVal {
            standard=0x00000000,     ///<Standard. Data is transmitted and received in
										standard MSB first order.
            reverse=0x00000001,     ///<Reverse. Data is transmitted and received in
										reverse order (LSB first).
        };
        namespace lsbfValC{
            constexpr MPL::Value<lsbfVal,lsbfVal::standard> standard{};
            constexpr MPL::Value<lsbfVal,lsbfVal::reverse> reverse{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,lsbfVal> lsbf{}; 
        ///Clock Phase select.
        enum class cphaVal {
            change=0x00000000,     ///<Change. The SPI captures serial data on the first
										clock transition of the transfer (when the clock changes
										away from the rest state). Data is changed on the following
										edge.
            capture=0x00000001,     ///<Capture. The SPI changes serial data on the first
										clock transition of the transfer (when the clock changes
										away from the rest state). Data is captured on the following
										edge.
        };
        namespace cphaValC{
            constexpr MPL::Value<cphaVal,cphaVal::change> change{};
            constexpr MPL::Value<cphaVal,cphaVal::capture> capture{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,cphaVal> cpha{}; 
        ///Clock Polarity select.
        enum class cpolVal {
            low=0x00000000,     ///<Low. The rest state of the clock (between
										transfers) is low.
            high=0x00000001,     ///<High. The rest state of the clock (between
										transfers) is high.
        };
        namespace cpolValC{
            constexpr MPL::Value<cpolVal,cpolVal::low> low{};
            constexpr MPL::Value<cpolVal,cpolVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,cpolVal> cpol{}; 
        ///Loopback mode enable. Loopback mode applies only to Master
								mode, and connects transmit and receive data connected together to
								allow simple software testing.
        enum class loopVal {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace loopValC{
            constexpr MPL::Value<loopVal,loopVal::disabled> disabled{};
            constexpr MPL::Value<loopVal,loopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,loopVal> loop{}; 
        ///SSEL0 Polarity select.
        enum class spol0Val {
            low=0x00000000,     ///<Low. The SSEL0 pin is active low. The value in the
										SSEL0 fields of the RXDAT, TXDATCTL, and TXCTL registers
										related to SSEL0 is not inverted relative to the
										pins.
            high=0x00000001,     ///<High. The SSEL0 pin is active high. The value in
										the SSEL0 fields of the RXDAT, TXDATCTL, and TXCTL registers
										related to SSEL0 is inverted relative to the
										pins.
        };
        namespace spol0ValC{
            constexpr MPL::Value<spol0Val,spol0Val::low> low{};
            constexpr MPL::Value<spol0Val,spol0Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,spol0Val> spol0{}; 
        ///SSEL1 Polarity select.
        enum class spol1Val {
            low=0x00000000,     ///<Low. The SSEL1 pin is active low. The value in the
										SSEL1 fields of the RXDAT, TXDATCTL, and TXCTL registers
										related to SSEL1 is not inverted relative to the
										pins.
            high=0x00000001,     ///<High. The SSEL1 pin is active high. The value in
										the SSEL1 fields of the RXDAT, TXDATCTL, and TXCTL registers
										related to SSEL1 is inverted relative to the
										pins.
        };
        namespace spol1ValC{
            constexpr MPL::Value<spol1Val,spol1Val::low> low{};
            constexpr MPL::Value<spol1Val,spol1Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,spol1Val> spol1{}; 
        ///SSEL2 Polarity select.
        enum class spol2Val {
            low=0x00000000,     ///<Low. The SSEL2 pin is active low. The value in the
										SSEL2 fields of the RXDAT, TXDATCTL, and TXCTL registers
										related to SSEL2 is not inverted relative to the
										pins.
            high=0x00000001,     ///<High. The SSEL2 pin is active high. The value in
										the SSEL2 fields of the RXDAT, TXDATCTL, and TXCTL registers
										related to SSEL2 is inverted relative to the
										pins.
        };
        namespace spol2ValC{
            constexpr MPL::Value<spol2Val,spol2Val::low> low{};
            constexpr MPL::Value<spol2Val,spol2Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,spol2Val> spol2{}; 
        ///SSEL3 Polarity select.
        enum class spol3Val {
            low=0x00000000,     ///<Low. The SSEL3 pin is active low. The value in the
										SSEL3 fields of the RXDAT, TXDATCTL, and TXCTL registers
										related to SSEL3 is not inverted relative to the
										pins.
            high=0x00000001,     ///<High. The SSEL3 pin is active high. The value in
										the SSEL3 fields of the RXDAT, TXDATCTL, and TXCTL registers
										related to SSEL3 is inverted relative to the
										pins.
        };
        namespace spol3ValC{
            constexpr MPL::Value<spol3Val,spol3Val::low> low{};
            constexpr MPL::Value<spol3Val,spol3Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,spol3Val> spol3{}; 
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> preDelay{}; 
        ///Controls the amount of time between the end of a data
								transfer and SSEL deassertion. 0x0 = No additional time is inserted.
								0x1 = 1 SPI clock time is inserted. 0x2 = 2 SPI clock times are
								inserted. ... 0xF = 15 SPI clock times are inserted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> postDelay{}; 
        ///If the EOF flag is set, controls the minimum amount of time
								between the current frame and the next frame (or SSEL deassertion if
								EOT). 0x0 = No additional time is inserted. 0x1 = 1 SPI clock time
								is inserted. 0x2 = 2 SPI clock times are inserted. ... 0xF = 15 SPI
								clock times are inserted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> frameDelay{}; 
        ///Controls the minimum amount of time that the SSEL is
								deasserted between transfers. 0x0 = The minimum time that SSEL is
								deasserted is 1 SPI clock time. (Zero added time.) 0x1 = The minimum
								time that SSEL is deasserted is 2 SPI clock times. 0x2 = The minimum
								time that SSEL is deasserted is 3 SPI clock times. ... 0xF = The
								minimum time that SSEL is deasserted is 16 SPI clock
								times.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> transferDelay{}; 
    }
    namespace Nonestat{    ///<SPI Status. Some status flags can be cleared by writing a 1 to that
						bit position
        using Addr = Register::Address<0x400a4008,0xfffffe00,0,unsigned>;
        ///Receiver Ready flag. When 1, indicates that data is
								available to be read from the receiver buffer. Cleared after a read
								of the RXDAT register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmitter Ready flag. When 1, this bit indicates that
								data may be written to the transmit buffer. Previous data may still
								be in the process of being transmitted. Cleared when data is written
								to TXDAT or TXDATCTL until the data is moved to the transmit shift
								register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Receiver Overrun interrupt flag. This flag applies only to
								slave mode (Master = 0). This flag is set when the beginning of a
								received character is detected while the receiver buffer is still in
								use. If this occurs, the receiver buffer contents are preserved, and
								the incoming data is lost. Data received by the SPI should be
								considered undefined if RxOv is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxov{}; 
        ///Transmitter Underrun interrupt flag. This flag applies only
								to slave mode (Master = 0). In this case, the transmitter must begin
								sending new data on the next input clock if the transmitter is idle.
								If that data is not available in the transmitter holding register at
								that point, there is no data to transmit and the TXUR flag is set.
								Data transmitted by the SPI should be considered undefined if TXUR
								is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txur{}; 
        ///Slave Select Assert. This flag is set whenever any slave
								select transitions from deasserted to asserted, in both master and
								slave modes. This allows determining when the SPI transmit/receive
								functions become busy, and allows waking up the device from reduced
								power modes when a slave mode access begins. This flag is cleared by
								software.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ssa{}; 
        ///Slave Select Deassert. This flag is set whenever any
								asserted slave selects transition to deasserted, in both master and
								slave modes. This allows determining when the SPI transmit/receive
								functions become idle. This flag is cleared by
								software.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ssd{}; 
        ///Stalled status flag. This indicates whether the SPI is
								currently in a stall condition.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> stalled{}; 
        ///End Transfer control bit. Software can set this bit to
								force an end to the current transfer when the transmitter finishes
								any activity already in progress, as if the EOT flag had been set
								prior to the last transmission. This capability is included to
								support cases where it is not known when transmit data is written
								that it will be the end of a transfer. The bit is cleared when the
								transmitter becomes idle as the transfer comes to an end. Forcing an
								end of transfer in this manner causes any specified FRAME_DELAY and
								TRANSFER_DELAY to be inserted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> endtransfer{}; 
        ///Master idle status flag. This bit is 1 whenever the SPI
								master function is fully idle. This means that the transmit holding
								register is empty and the transmitter is not in the process of
								sending data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mstidle{}; 
    }
    namespace Noneintenset{    ///<SPI Interrupt Enable read and Set. A complete value may be read
						from this register. Writing a 1 to any implemented bit position causes that
						bit to be set.
        using Addr = Register::Address<0x400a400c,0xfffffec0,0,unsigned>;
        ///RX ready interrupt enable. Determines whether an interrupt
								occurs when receiver data is available.
        enum class rxrdyenVal {
            disabled=0x00000000,     ///<Disabled. No interrupt will be generated when
										receiver data is available.
            enabled=0x00000001,     ///<Enabled. An interrupt will be generated when
										receiver data is available in the RXDAT
										register.
        };
        namespace rxrdyenValC{
            constexpr MPL::Value<rxrdyenVal,rxrdyenVal::disabled> disabled{};
            constexpr MPL::Value<rxrdyenVal,rxrdyenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rxrdyenVal> rxrdyen{}; 
        ///TX ready interrupt enable. Determines whether an interrupt
								occurs when the transmitter holding register is
								available.
        enum class txrdyenVal {
            disabled=0x00000000,     ///<Disabled. No interrupt will be generated when the
										transmitter holding register is available.
            enabled=0x00000001,     ///<Enabled. An interrupt will be generated when data
										may be written to TXDAT.
        };
        namespace txrdyenValC{
            constexpr MPL::Value<txrdyenVal,txrdyenVal::disabled> disabled{};
            constexpr MPL::Value<txrdyenVal,txrdyenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,txrdyenVal> txrdyen{}; 
        ///RX overrun interrupt enable. Determines whether an
								interrupt occurs when a receiver overrun occurs. This happens in
								slave mode when there is a need for the receiver to move newly
								received data to the RXDAT register when it is already in use. The
								interface prevents receiver overrun in Master mode by not allowing a
								new transmission to begin when a receiver overrun would otherwise
								occur.
        enum class rxovenVal {
            disabled=0x00000000,     ///<Disabled. No interrupt will be generated when a
										receiver overrun occurs.
            enabled=0x00000001,     ///<Enabled. An interrupt will be generated if a
										receiver overrun occurs.
        };
        namespace rxovenValC{
            constexpr MPL::Value<rxovenVal,rxovenVal::disabled> disabled{};
            constexpr MPL::Value<rxovenVal,rxovenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rxovenVal> rxoven{}; 
        ///TX underrun interrupt enable. Determines whether an
								interrupt occurs when a transmitter underrun occurs. This happens in
								slave mode when there is a need to transmit data when none is
								available.
        enum class txurenVal {
            disabled=0x00000000,     ///<Disabled. No interrupt will be generated when the
										transmitter underruns.
            enabled=0x00000001,     ///<Enabled. An interrupt will be generated if the
										transmitter underruns.
        };
        namespace txurenValC{
            constexpr MPL::Value<txurenVal,txurenVal::disabled> disabled{};
            constexpr MPL::Value<txurenVal,txurenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,txurenVal> txuren{}; 
        ///Slave select assert interrupt enable. Determines whether an
								interrupt occurs when the Slave Select is asserted.
        enum class ssaenVal {
            disabled=0x00000000,     ///<Disabled. No interrupt will be generated when any
										Slave Select transitions from deasserted to
										asserted.
            enabled=0x00000001,     ///<Enabled. An interrupt will be generated when any
										Slave Select transitions from deasserted to
										asserted.
        };
        namespace ssaenValC{
            constexpr MPL::Value<ssaenVal,ssaenVal::disabled> disabled{};
            constexpr MPL::Value<ssaenVal,ssaenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ssaenVal> ssaen{}; 
        ///Slave select deassert interrupt enable. Determines whether
								an interrupt occurs when the Slave Select is
								deasserted.
        enum class ssdenVal {
            disabled=0x00000000,     ///<Disabled. No interrupt will be generated when all
										asserted Slave Selects transition to
										deasserted.
            enabled=0x00000001,     ///<Enabled. An interrupt will be generated when all
										asserted Slave Selects transition to
										deasserted.
        };
        namespace ssdenValC{
            constexpr MPL::Value<ssdenVal,ssdenVal::disabled> disabled{};
            constexpr MPL::Value<ssdenVal,ssdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ssdenVal> ssden{}; 
        ///Master idle interrupt enable
        enum class mstidleenVal {
            disabled=0x00000000,     ///<Disabled. No interrupt will be generated when the
										SPI master function is idle.
            enabled=0x00000001,     ///<Enabled. An interrupt will be generated when the
										SPI master function is idle.
        };
        namespace mstidleenValC{
            constexpr MPL::Value<mstidleenVal,mstidleenVal::disabled> disabled{};
            constexpr MPL::Value<mstidleenVal,mstidleenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,mstidleenVal> mstidleen{}; 
    }
    namespace Noneintenclr{    ///<SPI Interrupt Enable Clear. Writing a 1 to any implemented bit
						position causes the corresponding bit in INTENSET to be
						cleared.
        using Addr = Register::Address<0x400a4010,0xfffffec0,0,unsigned>;
        ///Writing 1 clears the corresponding bits in the INTENSET
								register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdyen{}; 
        ///Writing 1 clears the corresponding bits in the INTENSET
								register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdyen{}; 
        ///Writing 1 clears the corresponding bits in the INTENSET
								register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxoven{}; 
        ///Writing 1 clears the corresponding bits in the INTENSET
								register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txuren{}; 
        ///Writing 1 clears the corresponding bits in the INTENSET
								register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ssaen{}; 
        ///Writing 1 clears the corresponding bits in the INTENSET
								register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ssden{}; 
        ///Writing 1 clears the corresponding bits in the MSTIDLE
								register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mstidle{}; 
    }
    namespace Nonerxdat{    ///<SPI Receive Data
        using Addr = Register::Address<0x400a4014,0xffe00000,0,unsigned>;
        ///Receiver Data. This contains the next piece of received
								data. The number of bits that are used depends on the LEN setting in
								TXCTL / TXDATCTL.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxdat{}; 
        ///Slave Select for receive. This field allows the state of
								the SSEL0 pin to be saved along with received data. The value will
								reflect the SSEL0 pin for both master and slave operation. A zero
								indicates that a slave select is active. The actual polarity of each
								slave select pin is configured by the related SPOL bit in
								CFG.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rxssel0N{}; 
        ///Slave Select for receive. This field allows the state of
								the SSEL1 pin to be saved along with received data. The value will
								reflect the SSEL1 pin for both master and slave operation. A zero
								indicates that a slave select is active. The actual polarity of each
								slave select pin is configured by the related SPOL bit in
								CFG.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rxssel1N{}; 
        ///Slave Select for receive. This field allows the state of
								the SSEL2 pin to be saved along with received data. The value will
								reflect the SSEL2 pin for both master and slave operation. A zero
								indicates that a slave select is active. The actual polarity of each
								slave select pin is configured by the related SPOL bit in
								CFG.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rxssel2N{}; 
        ///Slave Select for receive. This field allows the state of
								the SSEL3 pin to be saved along with received data. The value will
								reflect the SSEL3 pin for both master and slave operation. A zero
								indicates that a slave select is active. The actual polarity of each
								slave select pin is configured by the related SPOL bit in
								CFG.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rxssel3N{}; 
        ///Start of Transfer flag. This flag will be 1 if this is the
								first data after the SSELs went from deasserted to asserted (i.e.,
								any previous transfer has ended). This information can be used to
								identify the first piece of data in cases where the transfer length
								is greater than 16 bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> sot{}; 
    }
    namespace Nonetxdatctl{    ///<SPI Transmit Data with Control
        using Addr = Register::Address<0x400a4018,0xf0800000,0,unsigned>;
        ///Transmit Data. This field provides from 1 to 16 bits of
								data to be transmitted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txdat{}; 
        ///Transmit Slave Select. This field asserts SSEL0 in master
								mode. The output on the pin is active LOW by default. The active
								state of the SSEL0 pin is configured by bits in the CFG
								register.
        enum class txssel0NVal {
            ssel0Asserted=0x00000000,     ///<SSEL0 asserted.
            ssel0NotAsserted=0x00000001,     ///<SSEL0 not asserted.
        };
        namespace txssel0NValC{
            constexpr MPL::Value<txssel0NVal,txssel0NVal::ssel0Asserted> ssel0Asserted{};
            constexpr MPL::Value<txssel0NVal,txssel0NVal::ssel0NotAsserted> ssel0NotAsserted{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,txssel0NVal> txssel0N{}; 
        ///Transmit Slave Select. This field asserts SSEL1 in master
								mode. The output on the pin is active LOW by default. The active
								state of the SSEL1 pin is configured by bits in the CFG
								register.
        enum class txssel1NVal {
            ssel1Asserted=0x00000000,     ///<SSEL1 asserted.
            ssel1NotAsserted=0x00000001,     ///<SSEL1 not asserted.
        };
        namespace txssel1NValC{
            constexpr MPL::Value<txssel1NVal,txssel1NVal::ssel1Asserted> ssel1Asserted{};
            constexpr MPL::Value<txssel1NVal,txssel1NVal::ssel1NotAsserted> ssel1NotAsserted{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,txssel1NVal> txssel1N{}; 
        ///Transmit Slave Select. This field asserts SSEL2 in master
								mode. The output on the pin is active LOW by default. The active
								state of the SSEL2 pin is configured by bits in the CFG
								register.
        enum class txssel2NVal {
            ssel2Asserted=0x00000000,     ///<SSEL2 asserted.
            ssel2NotAsserted=0x00000001,     ///<SSEL2 not asserted.
        };
        namespace txssel2NValC{
            constexpr MPL::Value<txssel2NVal,txssel2NVal::ssel2Asserted> ssel2Asserted{};
            constexpr MPL::Value<txssel2NVal,txssel2NVal::ssel2NotAsserted> ssel2NotAsserted{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,txssel2NVal> txssel2N{}; 
        ///Transmit Slave Select. This field asserts SSEL3 in master
								mode. The output on the pin is active LOW by default. The active
								state of the SSEL3 pin is configured by bits in the CFG
								register.
        enum class txssel3NVal {
            ssel3Asserted=0x00000000,     ///<SSEL3 asserted.
            ssel3NotAsserted=0x00000001,     ///<SSEL3 not asserted.
        };
        namespace txssel3NValC{
            constexpr MPL::Value<txssel3NVal,txssel3NVal::ssel3Asserted> ssel3Asserted{};
            constexpr MPL::Value<txssel3NVal,txssel3NVal::ssel3NotAsserted> ssel3NotAsserted{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,txssel3NVal> txssel3N{}; 
        ///End of Transfer. The asserted SSEL will be deasserted at
								the end of a transfer, and remain so for at least the time specified
								by the Transfer_delay value in the DLY register.
        enum class eotVal {
            sselNotDeasserted=0x00000000,     ///<SSEL not deasserted. This piece of data is not
										treated as the end of a transfer. SSEL will not be
										deasserted at the end of this data.
            sselDeasserted=0x00000001,     ///<SSEL deasserted. This piece of data is treated as
										the end of a transfer. SSEL will be deasserted at the end of
										this piece of data.
        };
        namespace eotValC{
            constexpr MPL::Value<eotVal,eotVal::sselNotDeasserted> sselNotDeasserted{};
            constexpr MPL::Value<eotVal,eotVal::sselDeasserted> sselDeasserted{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,eotVal> eot{}; 
        ///End of Frame. Between frames, a delay may be inserted, as
								defined by the FRAME_DELAY value in the DLY register. The end of a
								frame may not be particularly meaningful if the FRAME_DELAY value =
								0. This control can be used as part of the support for frame lengths
								greater than 16 bits.
        enum class eofVal {
            dataNotEof=0x00000000,     ///<Data not EOF. This piece of data transmitted is not
										treated as the end of a frame.
            dataEof=0x00000001,     ///<Data EOF. This piece of data is treated as the end
										of a frame, causing the FRAME_DELAY time to be inserted
										before subsequent data is transmitted.
        };
        namespace eofValC{
            constexpr MPL::Value<eofVal,eofVal::dataNotEof> dataNotEof{};
            constexpr MPL::Value<eofVal,eofVal::dataEof> dataEof{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,eofVal> eof{}; 
        ///Receive Ignore. This allows data to be transmitted using
								the SPI without the need to read unneeded data from the
								receiver.Setting this bit simplifies the transmit process and can be
								used with the DMA.
        enum class rxignoreVal {
            readReceivedData=0x00000000,     ///<Read received data. Received data must be read in
										order to allow transmission to progress. In slave mode, an
										overrun error will occur if received data is not read before
										new data is received.
            ignoreReceivedData=0x00000001,     ///<Ignore received data. Received data is ignored,
										allowing transmission without reading unneeded received
										data. No receiver flags are generated.
        };
        namespace rxignoreValC{
            constexpr MPL::Value<rxignoreVal,rxignoreVal::readReceivedData> readReceivedData{};
            constexpr MPL::Value<rxignoreVal,rxignoreVal::ignoreReceivedData> ignoreReceivedData{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,rxignoreVal> rxignore{}; 
        ///Data Length. Specifies the data length from 1 to 16 bits.
								Note that transfer lengths greater than 16 bits are supported by
								implementing multiple sequential transmits. 0x0 = Data transfer is 1
								bit in length. 0x1 = Data transfer is 2 bits in length. 0x2 = Data
								transfer is 3 bits in length. ... 0xF = Data transfer is 16 bits in
								length.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> len{}; 
    }
    namespace Nonetxdat{    ///<SPI Transmit Data
        using Addr = Register::Address<0x400a401c,0xffff0000,0,unsigned>;
        ///Transmit Data. This field provides from 4 to 16 bits of
								data to be transmitted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonetxctl{    ///<SPI Transmit Control
        using Addr = Register::Address<0x400a4020,0xf080ffff,0,unsigned>;
        ///Transmit Slave Select 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> txssel0N{}; 
        ///Transmit Slave Select 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txssel1N{}; 
        ///Transmit Slave Select 2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> txssel2N{}; 
        ///Transmit Slave Select 3.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> txssel3N{}; 
        ///End of Transfer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eot{}; 
        ///End of Frame.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eof{}; 
        ///Receive Ignore.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> rxignore{}; 
        ///Data transfer Length.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> len{}; 
    }
    namespace Nonediv{    ///<SPI clock Divider
        using Addr = Register::Address<0x400a4024,0xffff0000,0,unsigned>;
        ///Rate divider value. Specifies how the PCLK for the SPI is
								divided to produce the SPI clock rate in master mode. DIVVAL is -1
								encoded such that the value 0 results in PCLK/1, the value 1 results
								in PCLK/2, up to the maximum possible divide value of 0xFFFF, which
								results in PCLK/65536.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> divval{}; 
    }
    namespace Noneintstat{    ///<SPI Interrupt Status
        using Addr = Register::Address<0x400a4028,0xfffffec0,0,unsigned>;
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
        ///Master Idle status flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mstidle{}; 
    }
}
