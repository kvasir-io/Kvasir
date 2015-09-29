#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System FIFO for Serial Peripherals 
    namespace Nonefifoctlusart{    ///<USART FIFO global control register. These registers are byte,
						halfword, and word addressable.The upper 16 bits of these registers provide
						information about the System FIFO configuration, and are specific to each
						device type.
        using Addr = Register::Address<0x1c038100,0x0000f8f8,0,unsigned>;
        ///Pause all USARTs receive FIFO operations. This can be used
								to prepare the System FIFO to reconfigure FIFO allocations among the
								USART receivers.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxpause{}; 
        ///All USART receive FIFOs are paused.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxpaused{}; 
        ///All USART receive FIFOs are empty.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxempty{}; 
        ///Pause all USARTs transmit FIFO operations. This can be used
								to prepare the System FIFO to reconfigure FIFO allocations among the
								USART transmitters.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txpause{}; 
        ///All USART transmit FIFOs are paused.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txpaused{}; 
        ///All USART transmit FIFOs are empty.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Reports the receive FIFO space available for USARTs on this
								FIFO. The reset value is device specific.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxfifototal{}; 
        ///Reports the transmit FIFO space available for USARTs on
								this FIFO. The reset value is device specific.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txfifototal{}; 
    }
    namespace Nonefifoupdateusart{    ///<USART FIFO global update register
        using Addr = Register::Address<0x1c038104,0xfff0fff0,0,unsigned>;
        ///Writing 1 updates USART0 Rx FIFO size to match the USART0
								RXSIZE. Must be done for all USARTs when any USART RXSIZE is
								changed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usart0rxupdatesize{}; 
        ///Writing 1 updates USART1 Rx FIFO size to match the USART1
								RXSIZE. Must be done for all USARTs when any USART RXSIZE is
								changed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usart1rxupdatesize{}; 
        ///Writing 1 updates USART2 Rx FIFO size to match the USART2
								RXSIZE. Must be done for all USARTs when any USART RXSIZE is
								changed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usart2rxupdatesize{}; 
        ///Writing 1 updates USART3 Rx FIFO size to match the USART3
								RXSIZE. Must be done for all USARTs when any USART RXSIZE is
								changed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usart3rxupdatesize{}; 
        ///Writing 1 updates USART0 Tx FIFO size to match the USART0
								TXSIZE. Must be done for all USARTs when any USART TXSIZE is
								changed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> usart0txupdatesize{}; 
        ///Writing 1 updates USART1 Tx FIFO size to match the USART1
								TXSIZE. Must be done for all USARTs when any USART TXSIZE is
								changed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart1txupdatesize{}; 
        ///Writing 1 updates USART2 Tx FIFO size to match the USART2
								TXSIZE. Must be done for all USARTs when any USART TXSIZE is
								changed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usart2txupdatesize{}; 
        ///Writing 1 updates USART3 Tx FIFO size to match the USART3
								TXSIZE. Must be done for all USARTs when any USART TXSIZE is
								changed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> usart3txupdatesize{}; 
    }
    namespace Nonefifocfgusart0{    ///<FIFO configuration register for USART0
        using Addr = Register::Address<0x1c038110,0xffff0000,0,unsigned>;
        ///Configures the USART receive FIFO size. A zero values
								provides no System FIFO service for the related USART
								receiver.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxsize{}; 
        ///Configures the USART transmit FIFO size. A zero values
								provides no System FIFO service for the related USART
								transmitter.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> txsize{}; 
    }
    namespace Nonefifocfgusart1{    ///<FIFO configuration register for USART0
        using Addr = Register::Address<0x1c038114,0xffff0000,0,unsigned>;
        ///Configures the USART receive FIFO size. A zero values
								provides no System FIFO service for the related USART
								receiver.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxsize{}; 
        ///Configures the USART transmit FIFO size. A zero values
								provides no System FIFO service for the related USART
								transmitter.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> txsize{}; 
    }
    namespace Nonefifocfgusart2{    ///<FIFO configuration register for USART0
        using Addr = Register::Address<0x1c038118,0xffff0000,0,unsigned>;
        ///Configures the USART receive FIFO size. A zero values
								provides no System FIFO service for the related USART
								receiver.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxsize{}; 
        ///Configures the USART transmit FIFO size. A zero values
								provides no System FIFO service for the related USART
								transmitter.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> txsize{}; 
    }
    namespace Nonefifocfgusart3{    ///<FIFO configuration register for USART0
        using Addr = Register::Address<0x1c03811c,0xffff0000,0,unsigned>;
        ///Configures the USART receive FIFO size. A zero values
								provides no System FIFO service for the related USART
								receiver.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxsize{}; 
        ///Configures the USART transmit FIFO size. A zero values
								provides no System FIFO service for the related USART
								transmitter.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> txsize{}; 
    }
    namespace Nonefifoctlspi{    ///<SPI FIFO global control register. These registers are byte,
						halfword, and word addressable. The upper 16 bits of these registers provide
						information about the System FIFO configuration, and are specific to each
						device type.
        using Addr = Register::Address<0x1c038200,0x0000f8f8,0,unsigned>;
        ///Pause all SPIs receive FIFO operations. This can be used to
								prepare the System FIFO to reconfigure FIFO allocations among the
								SPI receivers.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxpause{}; 
        ///All SPI receive FIFOs are paused.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxpaused{}; 
        ///All SPI receive FIFOs are empty.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxempty{}; 
        ///Pause all SPIs transmit FIFO operations. This can be used
								to prepare the System FIFO to reconfigure FIFO allocations among the
								SPI transmitters.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txpause{}; 
        ///All SPI transmit FIFOs are paused.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txpaused{}; 
        ///All SPI transmit FIFOs are empty.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Reports the receive FIFO space available for SPIs on the
								System FIFO. The reset value is device specific.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxfifototal{}; 
        ///Reports the transmit FIFO space available for SPIs on the
								System FIFO. The reset value is device specific.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txfifototal{}; 
    }
    namespace Nonefifoupdatespi{    ///<SPI FIFO global update register
        using Addr = Register::Address<0x1c038204,0xfffcfffc,0,unsigned>;
        ///Writing 1 updates SPI0 Rx FIFO size to match the SPI0
								RXSIZE. Must be done for all SPIs when any SPI RXSIZE is
								changed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> spi0rxupdatesize{}; 
        ///Writing 1 updates SPI1 Rx FIFO size to match the SPI1
								RXSIZE. Must be done for all SPIs when any SPI RXSIZE is
								changed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> spi1rxupdatesize{}; 
        ///Writing 1 updates SPI0 Tx FIFO size to match the SPI0
								TXSIZE. Must be done for all SPIs when any SPI TXSIZE is
								changed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> spi0txupdatesize{}; 
        ///Writing 1 updates SPI1 Tx FIFO size to match the SPI1
								TXSIZE. Must be done for all SPIs when any SPI TXSIZE is
								changed.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> spi1txupdatesize{}; 
    }
    namespace Nonefifocfgspi0{    ///<FIFO configuration register for SPI0
        using Addr = Register::Address<0x1c038210,0xffff0000,0,unsigned>;
        ///Configures the SPI receive FIFO size. A zero values
								provides no System FIFO service for the related SPI
								receiver.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxsize{}; 
        ///Configures the SPI transmit FIFO size. A zero values
								provides no System FIFO service for the related SPI
								transmitter.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> txsize{}; 
    }
    namespace Nonefifocfgspi1{    ///<FIFO configuration register for SPI0
        using Addr = Register::Address<0x1c038214,0xffff0000,0,unsigned>;
        ///Configures the SPI receive FIFO size. A zero values
								provides no System FIFO service for the related SPI
								receiver.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxsize{}; 
        ///Configures the SPI transmit FIFO size. A zero values
								provides no System FIFO service for the related SPI
								transmitter.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> txsize{}; 
    }
    namespace Nonecfgusart0{    ///<USART0 configuration
        using Addr = Register::Address<0x1c039000,0x000000cf,0,unsigned>;
        ///Timeout Continue On Write. When 0, the timeout for the
								related peripheral is reset every time data is transferred from the
								peripheral into the receive FIFO. When 1, the timeout for the
								related peripheral is not reset every time data is transferred into
								the receive FIFO. This allows the timeout to be applied to
								accumulated data, perhaps related to the FIFO
								threshold.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> timeoutcontonwrite{}; 
        ///Timeout Continue On Empty. When 0, the timeout for the
								related peripheral is reset when the receive FIFO becomes empty.
								When 1, the timeout for the related peripheral is not reset when the
								receive FIFO becomes empty. This allows the timeout to be used to
								flag idle peripherals, and could potentially be used to indicate the
								end of a transmission of indeterminate length.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> timeoutcontonempty{}; 
        ///Specifies the least significant timer bit to compare to
								TimeoutValue. See Section 24.5.7.1 below. Value can be 0 through
								15.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> timeoutbase{}; 
        ///Specifies the maximum time value for timeout at the timer
								position identified by TimeoutBase. Minimum time TimeoutValue - 1.
								is See Section 24.5.7.1 below. TimeoutValue should not be 0 or 1
								when timeout is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> timeoutvalue{}; 
        ///Receive FIFO Threshold. The System FIFO indicates that the
								threshold has been reached when the number of entries in the receive
								FIFO is greater than this value. For example, when RxThreshold = 0,
								the threshold is exceeded when there is at least one entry in the
								receive FIFO. An interrupt can be generated when the RxThreshold has
								been reached (see Section 24.5.10), but has no effect on DMA
								requests, which are generated whenever the receiver FIFO is not
								empty.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxthreshold{}; 
        ///Transmit FIFO Threshold. The System FIFO indicates that the
								threshold has been reached when the number of free entries in the
								transmit FIFO is less than or equal to this value. For example, when
								TxThreshold = 0, the threshold is exceeded when there is at least
								one free entry in the transmit FIFO. An interrupt can be generated
								when the TxThreshold has been reached (see Section 24.5.10), but has
								no effect on DMA requests, which are generated whenever the transmit
								FIFO has any free entries.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txthreshold{}; 
    }
    namespace Nonecfgusart1{    ///<USART0 configuration
        using Addr = Register::Address<0x1c039100,0x000000cf,0,unsigned>;
        ///Timeout Continue On Write. When 0, the timeout for the
								related peripheral is reset every time data is transferred from the
								peripheral into the receive FIFO. When 1, the timeout for the
								related peripheral is not reset every time data is transferred into
								the receive FIFO. This allows the timeout to be applied to
								accumulated data, perhaps related to the FIFO
								threshold.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> timeoutcontonwrite{}; 
        ///Timeout Continue On Empty. When 0, the timeout for the
								related peripheral is reset when the receive FIFO becomes empty.
								When 1, the timeout for the related peripheral is not reset when the
								receive FIFO becomes empty. This allows the timeout to be used to
								flag idle peripherals, and could potentially be used to indicate the
								end of a transmission of indeterminate length.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> timeoutcontonempty{}; 
        ///Specifies the least significant timer bit to compare to
								TimeoutValue. See Section 24.5.7.1 below. Value can be 0 through
								15.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> timeoutbase{}; 
        ///Specifies the maximum time value for timeout at the timer
								position identified by TimeoutBase. Minimum time TimeoutValue - 1.
								is See Section 24.5.7.1 below. TimeoutValue should not be 0 or 1
								when timeout is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> timeoutvalue{}; 
        ///Receive FIFO Threshold. The System FIFO indicates that the
								threshold has been reached when the number of entries in the receive
								FIFO is greater than this value. For example, when RxThreshold = 0,
								the threshold is exceeded when there is at least one entry in the
								receive FIFO. An interrupt can be generated when the RxThreshold has
								been reached (see Section 24.5.10), but has no effect on DMA
								requests, which are generated whenever the receiver FIFO is not
								empty.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxthreshold{}; 
        ///Transmit FIFO Threshold. The System FIFO indicates that the
								threshold has been reached when the number of free entries in the
								transmit FIFO is less than or equal to this value. For example, when
								TxThreshold = 0, the threshold is exceeded when there is at least
								one free entry in the transmit FIFO. An interrupt can be generated
								when the TxThreshold has been reached (see Section 24.5.10), but has
								no effect on DMA requests, which are generated whenever the transmit
								FIFO has any free entries.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txthreshold{}; 
    }
    namespace Nonecfgusart2{    ///<USART0 configuration
        using Addr = Register::Address<0x1c039200,0x000000cf,0,unsigned>;
        ///Timeout Continue On Write. When 0, the timeout for the
								related peripheral is reset every time data is transferred from the
								peripheral into the receive FIFO. When 1, the timeout for the
								related peripheral is not reset every time data is transferred into
								the receive FIFO. This allows the timeout to be applied to
								accumulated data, perhaps related to the FIFO
								threshold.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> timeoutcontonwrite{}; 
        ///Timeout Continue On Empty. When 0, the timeout for the
								related peripheral is reset when the receive FIFO becomes empty.
								When 1, the timeout for the related peripheral is not reset when the
								receive FIFO becomes empty. This allows the timeout to be used to
								flag idle peripherals, and could potentially be used to indicate the
								end of a transmission of indeterminate length.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> timeoutcontonempty{}; 
        ///Specifies the least significant timer bit to compare to
								TimeoutValue. See Section 24.5.7.1 below. Value can be 0 through
								15.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> timeoutbase{}; 
        ///Specifies the maximum time value for timeout at the timer
								position identified by TimeoutBase. Minimum time TimeoutValue - 1.
								is See Section 24.5.7.1 below. TimeoutValue should not be 0 or 1
								when timeout is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> timeoutvalue{}; 
        ///Receive FIFO Threshold. The System FIFO indicates that the
								threshold has been reached when the number of entries in the receive
								FIFO is greater than this value. For example, when RxThreshold = 0,
								the threshold is exceeded when there is at least one entry in the
								receive FIFO. An interrupt can be generated when the RxThreshold has
								been reached (see Section 24.5.10), but has no effect on DMA
								requests, which are generated whenever the receiver FIFO is not
								empty.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxthreshold{}; 
        ///Transmit FIFO Threshold. The System FIFO indicates that the
								threshold has been reached when the number of free entries in the
								transmit FIFO is less than or equal to this value. For example, when
								TxThreshold = 0, the threshold is exceeded when there is at least
								one free entry in the transmit FIFO. An interrupt can be generated
								when the TxThreshold has been reached (see Section 24.5.10), but has
								no effect on DMA requests, which are generated whenever the transmit
								FIFO has any free entries.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txthreshold{}; 
    }
    namespace Nonecfgusart3{    ///<USART0 configuration
        using Addr = Register::Address<0x1c039300,0x000000cf,0,unsigned>;
        ///Timeout Continue On Write. When 0, the timeout for the
								related peripheral is reset every time data is transferred from the
								peripheral into the receive FIFO. When 1, the timeout for the
								related peripheral is not reset every time data is transferred into
								the receive FIFO. This allows the timeout to be applied to
								accumulated data, perhaps related to the FIFO
								threshold.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> timeoutcontonwrite{}; 
        ///Timeout Continue On Empty. When 0, the timeout for the
								related peripheral is reset when the receive FIFO becomes empty.
								When 1, the timeout for the related peripheral is not reset when the
								receive FIFO becomes empty. This allows the timeout to be used to
								flag idle peripherals, and could potentially be used to indicate the
								end of a transmission of indeterminate length.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> timeoutcontonempty{}; 
        ///Specifies the least significant timer bit to compare to
								TimeoutValue. See Section 24.5.7.1 below. Value can be 0 through
								15.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> timeoutbase{}; 
        ///Specifies the maximum time value for timeout at the timer
								position identified by TimeoutBase. Minimum time TimeoutValue - 1.
								is See Section 24.5.7.1 below. TimeoutValue should not be 0 or 1
								when timeout is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> timeoutvalue{}; 
        ///Receive FIFO Threshold. The System FIFO indicates that the
								threshold has been reached when the number of entries in the receive
								FIFO is greater than this value. For example, when RxThreshold = 0,
								the threshold is exceeded when there is at least one entry in the
								receive FIFO. An interrupt can be generated when the RxThreshold has
								been reached (see Section 24.5.10), but has no effect on DMA
								requests, which are generated whenever the receiver FIFO is not
								empty.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxthreshold{}; 
        ///Transmit FIFO Threshold. The System FIFO indicates that the
								threshold has been reached when the number of free entries in the
								transmit FIFO is less than or equal to this value. For example, when
								TxThreshold = 0, the threshold is exceeded when there is at least
								one free entry in the transmit FIFO. An interrupt can be generated
								when the TxThreshold has been reached (see Section 24.5.10), but has
								no effect on DMA requests, which are generated whenever the transmit
								FIFO has any free entries.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txthreshold{}; 
    }
    namespace Nonestatusart0{    ///<USART0 status
        using Addr = Register::Address<0x1c039004,0x0000fc6c,0,unsigned>;
        ///Receive FIFO Threshold. When 1, the receive FIFO threshold
								has been reached. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxth{}; 
        ///Transmit FIFO Threshold. When 1, the transmit FIFO
								threshold has been reached. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txth{}; 
        ///Receive FIFO Timeout. When 1, the receive FIFO has timed
								out, based on the timeout configuration in the CFGUSART register.
								The timeout condition can be cleared by writing a 1 to this bit, by
								enabling or disabling the timeout interrupt, or by writing a 1 to
								the timeout interrupt enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeout{}; 
        ///Bus Error. When 1, a bus error has occurred while
								processing data for USARTn. The bus error flag can be cleared by
								writing a 1 to this bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> buserr{}; 
        ///Receive FIFO Empty. When 1, the receive FIFO is currently
								empty. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxempty{}; 
        ///Transmit FIFO Empty. When 1, the transmit FIFO is currently
								empty. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Receive FIFO Count. Indicates how many entries may be read
								from the receive FIFO. 0 = FIFO empty. This is a read-only
								field.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxcount{}; 
        ///Transmit FIFO Count. Indicates how many entries may be
								written to the transmit FIFO. 0 = FIFO full. This is a read-only
								field that is valid only when the TxFIFO is fully configured and
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txcount{}; 
    }
    namespace Nonestatusart1{    ///<USART0 status
        using Addr = Register::Address<0x1c039104,0x0000fc6c,0,unsigned>;
        ///Receive FIFO Threshold. When 1, the receive FIFO threshold
								has been reached. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxth{}; 
        ///Transmit FIFO Threshold. When 1, the transmit FIFO
								threshold has been reached. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txth{}; 
        ///Receive FIFO Timeout. When 1, the receive FIFO has timed
								out, based on the timeout configuration in the CFGUSART register.
								The timeout condition can be cleared by writing a 1 to this bit, by
								enabling or disabling the timeout interrupt, or by writing a 1 to
								the timeout interrupt enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeout{}; 
        ///Bus Error. When 1, a bus error has occurred while
								processing data for USARTn. The bus error flag can be cleared by
								writing a 1 to this bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> buserr{}; 
        ///Receive FIFO Empty. When 1, the receive FIFO is currently
								empty. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxempty{}; 
        ///Transmit FIFO Empty. When 1, the transmit FIFO is currently
								empty. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Receive FIFO Count. Indicates how many entries may be read
								from the receive FIFO. 0 = FIFO empty. This is a read-only
								field.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxcount{}; 
        ///Transmit FIFO Count. Indicates how many entries may be
								written to the transmit FIFO. 0 = FIFO full. This is a read-only
								field that is valid only when the TxFIFO is fully configured and
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txcount{}; 
    }
    namespace Nonestatusart2{    ///<USART0 status
        using Addr = Register::Address<0x1c039204,0x0000fc6c,0,unsigned>;
        ///Receive FIFO Threshold. When 1, the receive FIFO threshold
								has been reached. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxth{}; 
        ///Transmit FIFO Threshold. When 1, the transmit FIFO
								threshold has been reached. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txth{}; 
        ///Receive FIFO Timeout. When 1, the receive FIFO has timed
								out, based on the timeout configuration in the CFGUSART register.
								The timeout condition can be cleared by writing a 1 to this bit, by
								enabling or disabling the timeout interrupt, or by writing a 1 to
								the timeout interrupt enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeout{}; 
        ///Bus Error. When 1, a bus error has occurred while
								processing data for USARTn. The bus error flag can be cleared by
								writing a 1 to this bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> buserr{}; 
        ///Receive FIFO Empty. When 1, the receive FIFO is currently
								empty. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxempty{}; 
        ///Transmit FIFO Empty. When 1, the transmit FIFO is currently
								empty. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Receive FIFO Count. Indicates how many entries may be read
								from the receive FIFO. 0 = FIFO empty. This is a read-only
								field.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxcount{}; 
        ///Transmit FIFO Count. Indicates how many entries may be
								written to the transmit FIFO. 0 = FIFO full. This is a read-only
								field that is valid only when the TxFIFO is fully configured and
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txcount{}; 
    }
    namespace Nonestatusart3{    ///<USART0 status
        using Addr = Register::Address<0x1c039304,0x0000fc6c,0,unsigned>;
        ///Receive FIFO Threshold. When 1, the receive FIFO threshold
								has been reached. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxth{}; 
        ///Transmit FIFO Threshold. When 1, the transmit FIFO
								threshold has been reached. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txth{}; 
        ///Receive FIFO Timeout. When 1, the receive FIFO has timed
								out, based on the timeout configuration in the CFGUSART register.
								The timeout condition can be cleared by writing a 1 to this bit, by
								enabling or disabling the timeout interrupt, or by writing a 1 to
								the timeout interrupt enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeout{}; 
        ///Bus Error. When 1, a bus error has occurred while
								processing data for USARTn. The bus error flag can be cleared by
								writing a 1 to this bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> buserr{}; 
        ///Receive FIFO Empty. When 1, the receive FIFO is currently
								empty. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxempty{}; 
        ///Transmit FIFO Empty. When 1, the transmit FIFO is currently
								empty. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Receive FIFO Count. Indicates how many entries may be read
								from the receive FIFO. 0 = FIFO empty. This is a read-only
								field.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxcount{}; 
        ///Transmit FIFO Count. Indicates how many entries may be
								written to the transmit FIFO. 0 = FIFO full. This is a read-only
								field that is valid only when the TxFIFO is fully configured and
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txcount{}; 
    }
    namespace Noneintstatusart0{    ///<USART0 interrupt status
        using Addr = Register::Address<0x1c039008,0x0000fc6c,0,unsigned>;
        ///Receive FIFO Threshold. When 1, the receive FIFO threshold
								has been reached, and the related interrupt is
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxth{}; 
        ///Transmit FIFO Threshold. When 1, the transmit FIFO
								threshold has been reached, and the related interrupt is
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txth{}; 
        ///Receive Timeout. When 1, the receive FIFO has timed out,
								based on the timeout configuration in the CFGUSART register, and the
								related interrupt is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeout{}; 
        ///Bus Error. This is simply a copy of the same bit in the
								STATUSART register. The bus error interrupt is always
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> buserr{}; 
        ///Receive FIFO Empty. This is simply a copy of the same bit
								in the STATUSART register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxempty{}; 
        ///Transmit FIFO Empty. This is simply a copy of the same bit
								in the STATUSART register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Receive FIFO Count. This is simply a copy of the same field
								in the STATUSART register, included here so an ISR can read all
								needed status information in one read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxcount{}; 
        ///Transmit FIFO Available. This is simply a copy of the same
								field in the STATUSART register, included here so an ISR can read
								all needed status information in one read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txcount{}; 
    }
    namespace Noneintstatusart1{    ///<USART0 interrupt status
        using Addr = Register::Address<0x1c039108,0x0000fc6c,0,unsigned>;
        ///Receive FIFO Threshold. When 1, the receive FIFO threshold
								has been reached, and the related interrupt is
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxth{}; 
        ///Transmit FIFO Threshold. When 1, the transmit FIFO
								threshold has been reached, and the related interrupt is
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txth{}; 
        ///Receive Timeout. When 1, the receive FIFO has timed out,
								based on the timeout configuration in the CFGUSART register, and the
								related interrupt is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeout{}; 
        ///Bus Error. This is simply a copy of the same bit in the
								STATUSART register. The bus error interrupt is always
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> buserr{}; 
        ///Receive FIFO Empty. This is simply a copy of the same bit
								in the STATUSART register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxempty{}; 
        ///Transmit FIFO Empty. This is simply a copy of the same bit
								in the STATUSART register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Receive FIFO Count. This is simply a copy of the same field
								in the STATUSART register, included here so an ISR can read all
								needed status information in one read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxcount{}; 
        ///Transmit FIFO Available. This is simply a copy of the same
								field in the STATUSART register, included here so an ISR can read
								all needed status information in one read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txcount{}; 
    }
    namespace Noneintstatusart2{    ///<USART0 interrupt status
        using Addr = Register::Address<0x1c039208,0x0000fc6c,0,unsigned>;
        ///Receive FIFO Threshold. When 1, the receive FIFO threshold
								has been reached, and the related interrupt is
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxth{}; 
        ///Transmit FIFO Threshold. When 1, the transmit FIFO
								threshold has been reached, and the related interrupt is
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txth{}; 
        ///Receive Timeout. When 1, the receive FIFO has timed out,
								based on the timeout configuration in the CFGUSART register, and the
								related interrupt is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeout{}; 
        ///Bus Error. This is simply a copy of the same bit in the
								STATUSART register. The bus error interrupt is always
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> buserr{}; 
        ///Receive FIFO Empty. This is simply a copy of the same bit
								in the STATUSART register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxempty{}; 
        ///Transmit FIFO Empty. This is simply a copy of the same bit
								in the STATUSART register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Receive FIFO Count. This is simply a copy of the same field
								in the STATUSART register, included here so an ISR can read all
								needed status information in one read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxcount{}; 
        ///Transmit FIFO Available. This is simply a copy of the same
								field in the STATUSART register, included here so an ISR can read
								all needed status information in one read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txcount{}; 
    }
    namespace Noneintstatusart3{    ///<USART0 interrupt status
        using Addr = Register::Address<0x1c039308,0x0000fc6c,0,unsigned>;
        ///Receive FIFO Threshold. When 1, the receive FIFO threshold
								has been reached, and the related interrupt is
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxth{}; 
        ///Transmit FIFO Threshold. When 1, the transmit FIFO
								threshold has been reached, and the related interrupt is
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txth{}; 
        ///Receive Timeout. When 1, the receive FIFO has timed out,
								based on the timeout configuration in the CFGUSART register, and the
								related interrupt is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeout{}; 
        ///Bus Error. This is simply a copy of the same bit in the
								STATUSART register. The bus error interrupt is always
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> buserr{}; 
        ///Receive FIFO Empty. This is simply a copy of the same bit
								in the STATUSART register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxempty{}; 
        ///Transmit FIFO Empty. This is simply a copy of the same bit
								in the STATUSART register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Receive FIFO Count. This is simply a copy of the same field
								in the STATUSART register, included here so an ISR can read all
								needed status information in one read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxcount{}; 
        ///Transmit FIFO Available. This is simply a copy of the same
								field in the STATUSART register, included here so an ISR can read
								all needed status information in one read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txcount{}; 
    }
    namespace Nonectlsetusart0{    ///<USART0 control read and set register. A complete value may be read
						from this register. Writing a 1 to any implemented bit position causes that
						bit to be set.
        using Addr = Register::Address<0x1c03900c,0xfffffcec,0,unsigned>;
        ///Receive FIFO Threshold Interrupt Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxthinten{}; 
        ///Transmit FIFO Threshold Interrupt Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txthinten{}; 
        ///Receive FIFO Timeout Interrupt Enable. When enabled, this
								also enables the timeout for this USART. Writing a 1 to this bit
								resets the USART timeout logic.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeoutinten{}; 
        ///Receive FIFO flush. Writing a 1 to this bit forces the
								receive FIFO to be empty.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxflush{}; 
        ///Transmit FIFO flush. Writing a 1 to this bit forces the
								transmit FIFO to be empty.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txflush{}; 
    }
    namespace Nonectlsetusart1{    ///<USART0 control read and set register. A complete value may be read
						from this register. Writing a 1 to any implemented bit position causes that
						bit to be set.
        using Addr = Register::Address<0x1c03910c,0xfffffcec,0,unsigned>;
        ///Receive FIFO Threshold Interrupt Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxthinten{}; 
        ///Transmit FIFO Threshold Interrupt Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txthinten{}; 
        ///Receive FIFO Timeout Interrupt Enable. When enabled, this
								also enables the timeout for this USART. Writing a 1 to this bit
								resets the USART timeout logic.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeoutinten{}; 
        ///Receive FIFO flush. Writing a 1 to this bit forces the
								receive FIFO to be empty.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxflush{}; 
        ///Transmit FIFO flush. Writing a 1 to this bit forces the
								transmit FIFO to be empty.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txflush{}; 
    }
    namespace Nonectlsetusart2{    ///<USART0 control read and set register. A complete value may be read
						from this register. Writing a 1 to any implemented bit position causes that
						bit to be set.
        using Addr = Register::Address<0x1c03920c,0xfffffcec,0,unsigned>;
        ///Receive FIFO Threshold Interrupt Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxthinten{}; 
        ///Transmit FIFO Threshold Interrupt Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txthinten{}; 
        ///Receive FIFO Timeout Interrupt Enable. When enabled, this
								also enables the timeout for this USART. Writing a 1 to this bit
								resets the USART timeout logic.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeoutinten{}; 
        ///Receive FIFO flush. Writing a 1 to this bit forces the
								receive FIFO to be empty.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxflush{}; 
        ///Transmit FIFO flush. Writing a 1 to this bit forces the
								transmit FIFO to be empty.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txflush{}; 
    }
    namespace Nonectlsetusart3{    ///<USART0 control read and set register. A complete value may be read
						from this register. Writing a 1 to any implemented bit position causes that
						bit to be set.
        using Addr = Register::Address<0x1c03930c,0xfffffcec,0,unsigned>;
        ///Receive FIFO Threshold Interrupt Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxthinten{}; 
        ///Transmit FIFO Threshold Interrupt Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txthinten{}; 
        ///Receive FIFO Timeout Interrupt Enable. When enabled, this
								also enables the timeout for this USART. Writing a 1 to this bit
								resets the USART timeout logic.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeoutinten{}; 
        ///Receive FIFO flush. Writing a 1 to this bit forces the
								receive FIFO to be empty.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxflush{}; 
        ///Transmit FIFO flush. Writing a 1 to this bit forces the
								transmit FIFO to be empty.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txflush{}; 
    }
    namespace Nonectlclrusart0{    ///<USART0 control clear register. Writing a 1 to any implemented bit
						position causes the corresponding bit in the related CTLSET register to be
						cleared.
        using Addr = Register::Address<0x1c039010,0xfffffcec,0,unsigned>;
        ///Receive FIFO Threshold Interrupt clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxthintclr{}; 
        ///Transmit FIFO Threshold Interrupt clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txthintclr{}; 
        ///Receive FIFO Time-out Interrupt clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeoutintclr{}; 
        ///Receive FIFO flush clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxflushclr{}; 
        ///Transmit FIFO flush clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txflushclr{}; 
    }
    namespace Nonectlclrusart1{    ///<USART0 control clear register. Writing a 1 to any implemented bit
						position causes the corresponding bit in the related CTLSET register to be
						cleared.
        using Addr = Register::Address<0x1c039110,0xfffffcec,0,unsigned>;
        ///Receive FIFO Threshold Interrupt clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxthintclr{}; 
        ///Transmit FIFO Threshold Interrupt clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txthintclr{}; 
        ///Receive FIFO Time-out Interrupt clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeoutintclr{}; 
        ///Receive FIFO flush clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxflushclr{}; 
        ///Transmit FIFO flush clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txflushclr{}; 
    }
    namespace Nonectlclrusart2{    ///<USART0 control clear register. Writing a 1 to any implemented bit
						position causes the corresponding bit in the related CTLSET register to be
						cleared.
        using Addr = Register::Address<0x1c039210,0xfffffcec,0,unsigned>;
        ///Receive FIFO Threshold Interrupt clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxthintclr{}; 
        ///Transmit FIFO Threshold Interrupt clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txthintclr{}; 
        ///Receive FIFO Time-out Interrupt clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeoutintclr{}; 
        ///Receive FIFO flush clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxflushclr{}; 
        ///Transmit FIFO flush clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txflushclr{}; 
    }
    namespace Nonectlclrusart3{    ///<USART0 control clear register. Writing a 1 to any implemented bit
						position causes the corresponding bit in the related CTLSET register to be
						cleared.
        using Addr = Register::Address<0x1c039310,0xfffffcec,0,unsigned>;
        ///Receive FIFO Threshold Interrupt clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxthintclr{}; 
        ///Transmit FIFO Threshold Interrupt clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txthintclr{}; 
        ///Receive FIFO Time-out Interrupt clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeoutintclr{}; 
        ///Receive FIFO flush clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxflushclr{}; 
        ///Transmit FIFO flush clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txflushclr{}; 
    }
    namespace Nonerxdatusart0{    ///<USART0 received data
        using Addr = Register::Address<0x1c039014,0xfffffe00,0,unsigned>;
        ///The UART Receiver Data register contains the next received
								character. The number of bits that are relevant depends on the UART
								configuration settings.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rxdat{}; 
    }
    namespace Nonerxdatusart1{    ///<USART0 received data
        using Addr = Register::Address<0x1c039114,0xfffffe00,0,unsigned>;
        ///The UART Receiver Data register contains the next received
								character. The number of bits that are relevant depends on the UART
								configuration settings.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rxdat{}; 
    }
    namespace Nonerxdatusart2{    ///<USART0 received data
        using Addr = Register::Address<0x1c039214,0xfffffe00,0,unsigned>;
        ///The UART Receiver Data register contains the next received
								character. The number of bits that are relevant depends on the UART
								configuration settings.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rxdat{}; 
    }
    namespace Nonerxdatusart3{    ///<USART0 received data
        using Addr = Register::Address<0x1c039314,0xfffffe00,0,unsigned>;
        ///The UART Receiver Data register contains the next received
								character. The number of bits that are relevant depends on the UART
								configuration settings.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rxdat{}; 
    }
    namespace Nonerxdatstatusart0{    ///<USART0 received data with status
        using Addr = Register::Address<0x1c039018,0xffff1e00,0,unsigned>;
        ///The UART Receiver Data register contains the next received
								character. The number of bits that are relevant depends on the UART
								configuration settings.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rxdat{}; 
        ///Framing Error status flag. This bit is valid when there is
								a character to be read in the RXDAT register and reflects the status
								of that character. This bit will set when the character in RXDAT was
								received with a missing stop bit at the expected location. This
								could be an indication of a baud rate or configuration mismatch with
								the transmitting source.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> framerr{}; 
        ///Parity Error status flag. This bit is valid when there is a
								character to be read in the RXDAT register and reflects the status
								of that character. This bit will be set when a parity error is
								detected in a received character.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> parityerr{}; 
        ///Received Noise flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxnoise{}; 
    }
    namespace Nonerxdatstatusart1{    ///<USART0 received data with status
        using Addr = Register::Address<0x1c039118,0xffff1e00,0,unsigned>;
        ///The UART Receiver Data register contains the next received
								character. The number of bits that are relevant depends on the UART
								configuration settings.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rxdat{}; 
        ///Framing Error status flag. This bit is valid when there is
								a character to be read in the RXDAT register and reflects the status
								of that character. This bit will set when the character in RXDAT was
								received with a missing stop bit at the expected location. This
								could be an indication of a baud rate or configuration mismatch with
								the transmitting source.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> framerr{}; 
        ///Parity Error status flag. This bit is valid when there is a
								character to be read in the RXDAT register and reflects the status
								of that character. This bit will be set when a parity error is
								detected in a received character.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> parityerr{}; 
        ///Received Noise flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxnoise{}; 
    }
    namespace Nonerxdatstatusart2{    ///<USART0 received data with status
        using Addr = Register::Address<0x1c039218,0xffff1e00,0,unsigned>;
        ///The UART Receiver Data register contains the next received
								character. The number of bits that are relevant depends on the UART
								configuration settings.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rxdat{}; 
        ///Framing Error status flag. This bit is valid when there is
								a character to be read in the RXDAT register and reflects the status
								of that character. This bit will set when the character in RXDAT was
								received with a missing stop bit at the expected location. This
								could be an indication of a baud rate or configuration mismatch with
								the transmitting source.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> framerr{}; 
        ///Parity Error status flag. This bit is valid when there is a
								character to be read in the RXDAT register and reflects the status
								of that character. This bit will be set when a parity error is
								detected in a received character.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> parityerr{}; 
        ///Received Noise flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxnoise{}; 
    }
    namespace Nonerxdatstatusart3{    ///<USART0 received data with status
        using Addr = Register::Address<0x1c039318,0xffff1e00,0,unsigned>;
        ///The UART Receiver Data register contains the next received
								character. The number of bits that are relevant depends on the UART
								configuration settings.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rxdat{}; 
        ///Framing Error status flag. This bit is valid when there is
								a character to be read in the RXDAT register and reflects the status
								of that character. This bit will set when the character in RXDAT was
								received with a missing stop bit at the expected location. This
								could be an indication of a baud rate or configuration mismatch with
								the transmitting source.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> framerr{}; 
        ///Parity Error status flag. This bit is valid when there is a
								character to be read in the RXDAT register and reflects the status
								of that character. This bit will be set when a parity error is
								detected in a received character.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> parityerr{}; 
        ///Received Noise flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxnoise{}; 
    }
    namespace Nonetxdatusart0{    ///<USART0 transmit data
        using Addr = Register::Address<0x1c03901c,0xfffffe00,0,unsigned>;
        ///Writing to the UART Transmit Data Register causes the data
								to be transmitted as soon as the transmit shift register is
								available and the condition for transmitting data is met: TXDIS bit
								= 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> txdat{}; 
    }
    namespace Nonetxdatusart1{    ///<USART0 transmit data
        using Addr = Register::Address<0x1c03911c,0xfffffe00,0,unsigned>;
        ///Writing to the UART Transmit Data Register causes the data
								to be transmitted as soon as the transmit shift register is
								available and the condition for transmitting data is met: TXDIS bit
								= 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> txdat{}; 
    }
    namespace Nonetxdatusart2{    ///<USART0 transmit data
        using Addr = Register::Address<0x1c03921c,0xfffffe00,0,unsigned>;
        ///Writing to the UART Transmit Data Register causes the data
								to be transmitted as soon as the transmit shift register is
								available and the condition for transmitting data is met: TXDIS bit
								= 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> txdat{}; 
    }
    namespace Nonetxdatusart3{    ///<USART0 transmit data
        using Addr = Register::Address<0x1c03931c,0xfffffe00,0,unsigned>;
        ///Writing to the UART Transmit Data Register causes the data
								to be transmitted as soon as the transmit shift register is
								available and the condition for transmitting data is met: TXDIS bit
								= 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> txdat{}; 
    }
    namespace Nonecfgspi0{    ///<SPI0 configuration
        using Addr = Register::Address<0x1c03a000,0x000000cf,0,unsigned>;
        ///Timeout Continue On Write. When 0, the timeout for the
								related peripheral is reset every time data is transferred from the
								peripheral into the receive FIFO. When 1, the timeout for the
								related peripheral is not reset every time data is transferred into
								the receive FIFO. This allows the timeout to be applied to
								accumulated data, perhaps related to the FIFO
								threshold.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> timeoutcontonwrite{}; 
        ///Timeout Continue On Empty. When 0, the timeout for the
								related peripheral is reset when the receive FIFO becomes empty.
								When 1, the timeout for the related peripheral is not reset when the
								receive FIFO becomes empty. This allows the timeout to be used to
								flag idle peripherals, and could potentially be used to indicate the
								end of a transmission of indeterminate length.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> timeoutcontonempty{}; 
        ///Specifies the least significant timer bit to compare to
								TimeoutValue. Value can be 0 through 15.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> timeoutbase{}; 
        ///Specifies the maximum time value for timeout at the timer
								position identified by TimeoutBase. Minimum time TimeoutValue - 1.
								TimeoutValue should not be 0 or 1 when timeout is
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> timeoutvalue{}; 
        ///Receive FIFO Threshold. The System FIFO indicates that the
								threshold has been reached when the number of entries in the receive
								FIFO is greater than this value. For example, when RxThreshold = 0,
								the threshold is exceeded when there is at least one entry in the
								receive FIFO. An interrupt can be generated when the RxThreshold has
								been reached, but has no effect on DMA requests, which are generated
								whenever the receiver FIFO is not empty.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxthreshold{}; 
        ///Transmit FIFO Threshold. The System FIFO indicates that the
								threshold has been reached when the number of free entries in the
								transmit FIFO is less than or equal to this value. For example, when
								TxThreshold = 0, the threshold is exceeded when there is at least
								one free entry in the transmit FIFO. An interrupt can be generated
								when the TxThreshold has been reached, but has no effect on DMA
								requests, which are generated whenever the transmit FIFO has any
								free entries.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txthreshold{}; 
    }
    namespace Nonecfgspi1{    ///<SPI0 configuration
        using Addr = Register::Address<0x1c03a100,0x000000cf,0,unsigned>;
        ///Timeout Continue On Write. When 0, the timeout for the
								related peripheral is reset every time data is transferred from the
								peripheral into the receive FIFO. When 1, the timeout for the
								related peripheral is not reset every time data is transferred into
								the receive FIFO. This allows the timeout to be applied to
								accumulated data, perhaps related to the FIFO
								threshold.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> timeoutcontonwrite{}; 
        ///Timeout Continue On Empty. When 0, the timeout for the
								related peripheral is reset when the receive FIFO becomes empty.
								When 1, the timeout for the related peripheral is not reset when the
								receive FIFO becomes empty. This allows the timeout to be used to
								flag idle peripherals, and could potentially be used to indicate the
								end of a transmission of indeterminate length.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> timeoutcontonempty{}; 
        ///Specifies the least significant timer bit to compare to
								TimeoutValue. Value can be 0 through 15.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> timeoutbase{}; 
        ///Specifies the maximum time value for timeout at the timer
								position identified by TimeoutBase. Minimum time TimeoutValue - 1.
								TimeoutValue should not be 0 or 1 when timeout is
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> timeoutvalue{}; 
        ///Receive FIFO Threshold. The System FIFO indicates that the
								threshold has been reached when the number of entries in the receive
								FIFO is greater than this value. For example, when RxThreshold = 0,
								the threshold is exceeded when there is at least one entry in the
								receive FIFO. An interrupt can be generated when the RxThreshold has
								been reached, but has no effect on DMA requests, which are generated
								whenever the receiver FIFO is not empty.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxthreshold{}; 
        ///Transmit FIFO Threshold. The System FIFO indicates that the
								threshold has been reached when the number of free entries in the
								transmit FIFO is less than or equal to this value. For example, when
								TxThreshold = 0, the threshold is exceeded when there is at least
								one free entry in the transmit FIFO. An interrupt can be generated
								when the TxThreshold has been reached, but has no effect on DMA
								requests, which are generated whenever the transmit FIFO has any
								free entries.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txthreshold{}; 
    }
    namespace Nonestatspi0{    ///<SPI0 status
        using Addr = Register::Address<0x1c03a004,0x0000fc6c,0,unsigned>;
        ///Receive FIFO Threshold. When 1, the receive FIFO threshold
								has been reached. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxth{}; 
        ///Transmit FIFO Threshold. When 1, the transmit FIFO
								threshold has been reached. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txth{}; 
        ///Receive FIFO Timeout. When 1, the receive FIFO has timed
								out, based on the timeout configuration in the CFGSPI register. The
								timeout condition can be cleared by writing a 1 to this bit, by
								enabling or disabling the timeout interrupt, or by writing a 1 to
								the timeout interrupt enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeout{}; 
        ///Bus Error. When 1, a bus error has occurred while
								processing data for SPI. The bus error flag can be cleared by
								writing a 1 to this bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> buserr{}; 
        ///Receive FIFO Empty. When 1, the receive FIFO is currently
								empty. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxempty{}; 
        ///Transmit FIFO Empty. When 1, the transmit FIFO is currently
								empty. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Receive FIFO Count. Indicates how many entries may be read
								from the receive FIFO. 0 = FIFO empty. This is a read-only
								field.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxcount{}; 
        ///Transmit FIFO Count. Indicates how many entries may be
								written to the transmit FIFO. 0 = FIFO full. This is a read-only
								field that is valid only when the TxFIFO is fully configured and
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txcount{}; 
    }
    namespace Nonestatspi1{    ///<SPI0 status
        using Addr = Register::Address<0x1c03a104,0x0000fc6c,0,unsigned>;
        ///Receive FIFO Threshold. When 1, the receive FIFO threshold
								has been reached. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxth{}; 
        ///Transmit FIFO Threshold. When 1, the transmit FIFO
								threshold has been reached. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txth{}; 
        ///Receive FIFO Timeout. When 1, the receive FIFO has timed
								out, based on the timeout configuration in the CFGSPI register. The
								timeout condition can be cleared by writing a 1 to this bit, by
								enabling or disabling the timeout interrupt, or by writing a 1 to
								the timeout interrupt enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeout{}; 
        ///Bus Error. When 1, a bus error has occurred while
								processing data for SPI. The bus error flag can be cleared by
								writing a 1 to this bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> buserr{}; 
        ///Receive FIFO Empty. When 1, the receive FIFO is currently
								empty. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxempty{}; 
        ///Transmit FIFO Empty. When 1, the transmit FIFO is currently
								empty. This is a read-only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Receive FIFO Count. Indicates how many entries may be read
								from the receive FIFO. 0 = FIFO empty. This is a read-only
								field.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxcount{}; 
        ///Transmit FIFO Count. Indicates how many entries may be
								written to the transmit FIFO. 0 = FIFO full. This is a read-only
								field that is valid only when the TxFIFO is fully configured and
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txcount{}; 
    }
    namespace Noneintstatspi0{    ///<SPI0 interrupt status
        using Addr = Register::Address<0x1c03a008,0x0000fc6c,0,unsigned>;
        ///Receive FIFO Threshold. When 1, the receive FIFO threshold
								has been reached, and the related interrupt is
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxth{}; 
        ///Transmit FIFO Threshold. When 1, the transmit FIFO
								threshold has been reached, and the related interrupt is
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txth{}; 
        ///Receive Timeout. When 1, the receive FIFO has timed out,
								based on the timeout configuration in the CFGSPI register, and the
								related interrupt is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeout{}; 
        ///Bus Error. This is simply a copy of the same bit in the
								STATSPI register. The bus error interrupt is always
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> buserr{}; 
        ///Receive FIFO Empty. This is simply a copy of the same bit
								in the STATSPI register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxempty{}; 
        ///Transmit FIFO Empty. This is simply a copy of the same bit
								in the STATSPI register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Receive FIFO Count. This is simply a copy of the same field
								in the STATSPI register, included here so an ISR can read all needed
								status information in one read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxcount{}; 
        ///Transmit FIFO Available. This is simply a copy of the same
								field in the STATSPI register, included here so an ISR can read all
								needed status information in one read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txcount{}; 
    }
    namespace Noneintstatspi1{    ///<SPI0 interrupt status
        using Addr = Register::Address<0x1c03a108,0x0000fc6c,0,unsigned>;
        ///Receive FIFO Threshold. When 1, the receive FIFO threshold
								has been reached, and the related interrupt is
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxth{}; 
        ///Transmit FIFO Threshold. When 1, the transmit FIFO
								threshold has been reached, and the related interrupt is
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txth{}; 
        ///Receive Timeout. When 1, the receive FIFO has timed out,
								based on the timeout configuration in the CFGSPI register, and the
								related interrupt is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeout{}; 
        ///Bus Error. This is simply a copy of the same bit in the
								STATSPI register. The bus error interrupt is always
								enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> buserr{}; 
        ///Receive FIFO Empty. This is simply a copy of the same bit
								in the STATSPI register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxempty{}; 
        ///Transmit FIFO Empty. This is simply a copy of the same bit
								in the STATSPI register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Receive FIFO Count. This is simply a copy of the same field
								in the STATSPI register, included here so an ISR can read all needed
								status information in one read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxcount{}; 
        ///Transmit FIFO Available. This is simply a copy of the same
								field in the STATSPI register, included here so an ISR can read all
								needed status information in one read.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txcount{}; 
    }
    namespace Nonectlsetspi0{    ///<SPI0 control read and set register. A complete value may be read
						from this register. Writing a 1 to any implemented bit position causes that
						bit to be set.
        using Addr = Register::Address<0x1c03a00c,0xfffffcec,0,unsigned>;
        ///Receive FIFO Threshold Interrupt Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxthinten{}; 
        ///Transmit FIFO Threshold Interrupt Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txthinten{}; 
        ///Receive FIFO Timeout Interrupt Enable. When enabled, this
								also enables the timeout for this SPI. Writing a 1 to this bit
								resets the SPI timeout logic.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeoutinten{}; 
        ///Receive FIFO flush. Writing a 1 to this bit forces the
								receive FIFO to be empty.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxflush{}; 
        ///Transmit FIFO flush. Writing a 1 to this bit forces the
								transmit FIFO to be empty.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txflush{}; 
    }
    namespace Nonectlsetspi1{    ///<SPI0 control read and set register. A complete value may be read
						from this register. Writing a 1 to any implemented bit position causes that
						bit to be set.
        using Addr = Register::Address<0x1c03a10c,0xfffffcec,0,unsigned>;
        ///Receive FIFO Threshold Interrupt Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxthinten{}; 
        ///Transmit FIFO Threshold Interrupt Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txthinten{}; 
        ///Receive FIFO Timeout Interrupt Enable. When enabled, this
								also enables the timeout for this SPI. Writing a 1 to this bit
								resets the SPI timeout logic.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeoutinten{}; 
        ///Receive FIFO flush. Writing a 1 to this bit forces the
								receive FIFO to be empty.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxflush{}; 
        ///Transmit FIFO flush. Writing a 1 to this bit forces the
								transmit FIFO to be empty.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txflush{}; 
    }
    namespace Nonectlclrspi0{    ///<SPI0 control clear register. Writing a 1 to any implemented bit
						position causes the corresponding bit in the related CTLSET register to be
						cleared.
        using Addr = Register::Address<0x1c03a010,0xfffffcec,0,unsigned>;
        ///Receive FIFO Threshold Interrupt clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxthintclr{}; 
        ///Transmit FIFO Threshold Interrupt clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txthintclr{}; 
        ///Receive FIFO Timeout Interrupt clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeoutintclr{}; 
        ///Receive FIFO flush clear. do the clear bits 8 and 9 do
								anything?
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxflushclr{}; 
        ///Transmit FIFO flush clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txflushclr{}; 
    }
    namespace Nonectlclrspi1{    ///<SPI0 control clear register. Writing a 1 to any implemented bit
						position causes the corresponding bit in the related CTLSET register to be
						cleared.
        using Addr = Register::Address<0x1c03a110,0xfffffcec,0,unsigned>;
        ///Receive FIFO Threshold Interrupt clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxthintclr{}; 
        ///Transmit FIFO Threshold Interrupt clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txthintclr{}; 
        ///Receive FIFO Timeout Interrupt clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeoutintclr{}; 
        ///Receive FIFO flush clear. do the clear bits 8 and 9 do
								anything?
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxflushclr{}; 
        ///Transmit FIFO flush clear.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txflushclr{}; 
    }
    namespace Nonerxdatspi0{    ///<SPI0 received data. These registers are half word
						addressable.
        using Addr = Register::Address<0x1c03a014,0xffe00000,0,unsigned>;
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
    namespace Nonerxdatspi1{    ///<SPI0 received data. These registers are half word
						addressable.
        using Addr = Register::Address<0x1c03a114,0xffe00000,0,unsigned>;
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
    namespace Nonetxdatspi0{    ///<SPI0 transmit data. These registers are half word
						addressable.
        using Addr = Register::Address<0x1c03a018,0xf0800000,0,unsigned>;
        ///Transmit Data. This field provides from 1 to 16 bits of
								data to be transmitted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txdat{}; 
        ///Transmit Slave Select. This field asserts SSEL0 in master
								mode. The output on the pin is active LOW by default. The active
								state of the SSEL0 pin is configured by bits in the CFG
								register.
        enum class txssel0NVal {
            asserted=0x00000000,     ///<Asserted. SSEL0 asserted.
            notAsserted=0x00000001,     ///<Not asserted. SSEL0 not asserted.
        };
        namespace txssel0NValC{
            constexpr MPL::Value<txssel0NVal,txssel0NVal::asserted> asserted{};
            constexpr MPL::Value<txssel0NVal,txssel0NVal::notAsserted> notAsserted{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,txssel0NVal> txssel0N{}; 
        ///Transmit Slave Select. This field asserts SSEL1 in master
								mode. The output on the pin is active LOW by default. The active
								state of the SSEL1 pin is configured by bits in the CFG
								register.
        enum class txssel1NVal {
            asserted=0x00000000,     ///<Asserted. SSEL1 asserted.
            notAsserted=0x00000001,     ///<Not asserted. SSEL1 not asserted.
        };
        namespace txssel1NValC{
            constexpr MPL::Value<txssel1NVal,txssel1NVal::asserted> asserted{};
            constexpr MPL::Value<txssel1NVal,txssel1NVal::notAsserted> notAsserted{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,txssel1NVal> txssel1N{}; 
        ///Transmit Slave Select. This field asserts SSEL2 in master
								mode. The output on the pin is active LOW by default. The active
								state of the SSEL2 pin is configured by bits in the CFG
								register.
        enum class txssel2NVal {
            asserted=0x00000000,     ///<Asserted. SSEL2 asserted.
            notAsserted=0x00000001,     ///<Not asserted. SSEL2 not asserted.
        };
        namespace txssel2NValC{
            constexpr MPL::Value<txssel2NVal,txssel2NVal::asserted> asserted{};
            constexpr MPL::Value<txssel2NVal,txssel2NVal::notAsserted> notAsserted{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,txssel2NVal> txssel2N{}; 
        ///Transmit Slave Select. This field asserts SSEL3 in master
								mode. The output on the pin is active LOW by default. The active
								state of the SSEL3 pin is configured by bits in the CFG
								register.
        enum class txssel3NVal {
            asserted=0x00000000,     ///<Asserted. SSEL3 asserted.
            notAsserted=0x00000001,     ///<Not asserted. SSEL3 not asserted.
        };
        namespace txssel3NValC{
            constexpr MPL::Value<txssel3NVal,txssel3NVal::asserted> asserted{};
            constexpr MPL::Value<txssel3NVal,txssel3NVal::notAsserted> notAsserted{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,txssel3NVal> txssel3N{}; 
        ///End of Transfer. The asserted SSEL will be deasserted at
								the end of a transfer, and remain so for at least the time specified
								by the Transfer_delay value in the DLY register.
        enum class eotVal {
            notDeasserted=0x00000000,     ///<Not deasserted. SSEL not deasserted. This piece of
										data is not treated as the end of a transfer. SSEL will not
										be deasserted at the end of this data.
            deasserted=0x00000001,     ///<Deasserted. SSEL deasserted. This piece of data is
										treated as the end of a transfer. SSEL will be deasserted at
										the end of this piece of data.
        };
        namespace eotValC{
            constexpr MPL::Value<eotVal,eotVal::notDeasserted> notDeasserted{};
            constexpr MPL::Value<eotVal,eotVal::deasserted> deasserted{};
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
								the SPI without the need to read unneeded data from the receiver to
								simplify the transmit process and can be used with the
								DMA.
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
								implementing multiple sequential data transmits. 0x0 = Data transfer
								is 1 bit in length. 0x1 = Data transfer is 2 bits in length. 0x2 =
								Data transfer is 3 bits in length. ... 0xF = Data transfer is 16
								bits in length.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> len{}; 
    }
    namespace Nonetxdatspi1{    ///<SPI0 transmit data. These registers are half word
						addressable.
        using Addr = Register::Address<0x1c03a118,0xf0800000,0,unsigned>;
        ///Transmit Data. This field provides from 1 to 16 bits of
								data to be transmitted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txdat{}; 
        ///Transmit Slave Select. This field asserts SSEL0 in master
								mode. The output on the pin is active LOW by default. The active
								state of the SSEL0 pin is configured by bits in the CFG
								register.
        enum class txssel0NVal {
            asserted=0x00000000,     ///<Asserted. SSEL0 asserted.
            notAsserted=0x00000001,     ///<Not asserted. SSEL0 not asserted.
        };
        namespace txssel0NValC{
            constexpr MPL::Value<txssel0NVal,txssel0NVal::asserted> asserted{};
            constexpr MPL::Value<txssel0NVal,txssel0NVal::notAsserted> notAsserted{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,txssel0NVal> txssel0N{}; 
        ///Transmit Slave Select. This field asserts SSEL1 in master
								mode. The output on the pin is active LOW by default. The active
								state of the SSEL1 pin is configured by bits in the CFG
								register.
        enum class txssel1NVal {
            asserted=0x00000000,     ///<Asserted. SSEL1 asserted.
            notAsserted=0x00000001,     ///<Not asserted. SSEL1 not asserted.
        };
        namespace txssel1NValC{
            constexpr MPL::Value<txssel1NVal,txssel1NVal::asserted> asserted{};
            constexpr MPL::Value<txssel1NVal,txssel1NVal::notAsserted> notAsserted{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,txssel1NVal> txssel1N{}; 
        ///Transmit Slave Select. This field asserts SSEL2 in master
								mode. The output on the pin is active LOW by default. The active
								state of the SSEL2 pin is configured by bits in the CFG
								register.
        enum class txssel2NVal {
            asserted=0x00000000,     ///<Asserted. SSEL2 asserted.
            notAsserted=0x00000001,     ///<Not asserted. SSEL2 not asserted.
        };
        namespace txssel2NValC{
            constexpr MPL::Value<txssel2NVal,txssel2NVal::asserted> asserted{};
            constexpr MPL::Value<txssel2NVal,txssel2NVal::notAsserted> notAsserted{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,txssel2NVal> txssel2N{}; 
        ///Transmit Slave Select. This field asserts SSEL3 in master
								mode. The output on the pin is active LOW by default. The active
								state of the SSEL3 pin is configured by bits in the CFG
								register.
        enum class txssel3NVal {
            asserted=0x00000000,     ///<Asserted. SSEL3 asserted.
            notAsserted=0x00000001,     ///<Not asserted. SSEL3 not asserted.
        };
        namespace txssel3NValC{
            constexpr MPL::Value<txssel3NVal,txssel3NVal::asserted> asserted{};
            constexpr MPL::Value<txssel3NVal,txssel3NVal::notAsserted> notAsserted{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,txssel3NVal> txssel3N{}; 
        ///End of Transfer. The asserted SSEL will be deasserted at
								the end of a transfer, and remain so for at least the time specified
								by the Transfer_delay value in the DLY register.
        enum class eotVal {
            notDeasserted=0x00000000,     ///<Not deasserted. SSEL not deasserted. This piece of
										data is not treated as the end of a transfer. SSEL will not
										be deasserted at the end of this data.
            deasserted=0x00000001,     ///<Deasserted. SSEL deasserted. This piece of data is
										treated as the end of a transfer. SSEL will be deasserted at
										the end of this piece of data.
        };
        namespace eotValC{
            constexpr MPL::Value<eotVal,eotVal::notDeasserted> notDeasserted{};
            constexpr MPL::Value<eotVal,eotVal::deasserted> deasserted{};
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
								the SPI without the need to read unneeded data from the receiver to
								simplify the transmit process and can be used with the
								DMA.
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
								implementing multiple sequential data transmits. 0x0 = Data transfer
								is 1 bit in length. 0x1 = Data transfer is 2 bits in length. 0x2 =
								Data transfer is 3 bits in length. ... 0xF = Data transfer is 16
								bits in length.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> len{}; 
    }
}
