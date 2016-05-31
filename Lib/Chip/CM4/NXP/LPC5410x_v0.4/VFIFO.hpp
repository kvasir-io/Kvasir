#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//System FIFO for Serial Peripherals 
    namespace VfifoFifoctlusart{    ///<USART FIFO global control register. These registers are byte,						halfword, and word addressable.The upper 16 bits of these registers provide						information about the System FIFO configuration, and are specific to each						device type.
        using Addr = Register::Address<0x1c038100,0x00000000,0x00000000,unsigned>;
        ///Pause all USARTs receive FIFO operations. This can be used								to prepare the System FIFO to reconfigure FIFO allocations among the								USART receivers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxpause{}; 
        ///All USART receive FIFOs are paused.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxpaused{}; 
        ///All USART receive FIFOs are empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxempty{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Pause all USARTs transmit FIFO operations. This can be used								to prepare the System FIFO to reconfigure FIFO allocations among the								USART transmitters.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txpause{}; 
        ///All USART transmit FIFOs are paused.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txpaused{}; 
        ///All USART transmit FIFOs are empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reports the receive FIFO space available for USARTs on this								FIFO. The reset value is device specific.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxfifototal{}; 
        ///Reports the transmit FIFO space available for USARTs on								this FIFO. The reset value is device specific.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txfifototal{}; 
    }
    namespace VfifoFifoupdateusart{    ///<USART FIFO global update register
        using Addr = Register::Address<0x1c038104,0x00000000,0x00000000,unsigned>;
        ///Writing 1 updates USART0 Rx FIFO size to match the USART0								RXSIZE. Must be done for all USARTs when any USART RXSIZE is								changed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usart0rxupdatesize{}; 
        ///Writing 1 updates USART1 Rx FIFO size to match the USART1								RXSIZE. Must be done for all USARTs when any USART RXSIZE is								changed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usart1rxupdatesize{}; 
        ///Writing 1 updates USART2 Rx FIFO size to match the USART2								RXSIZE. Must be done for all USARTs when any USART RXSIZE is								changed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usart2rxupdatesize{}; 
        ///Writing 1 updates USART3 Rx FIFO size to match the USART3								RXSIZE. Must be done for all USARTs when any USART RXSIZE is								changed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usart3rxupdatesize{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Writing 1 updates USART0 Tx FIFO size to match the USART0								TXSIZE. Must be done for all USARTs when any USART TXSIZE is								changed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> usart0txupdatesize{}; 
        ///Writing 1 updates USART1 Tx FIFO size to match the USART1								TXSIZE. Must be done for all USARTs when any USART TXSIZE is								changed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart1txupdatesize{}; 
        ///Writing 1 updates USART2 Tx FIFO size to match the USART2								TXSIZE. Must be done for all USARTs when any USART TXSIZE is								changed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usart2txupdatesize{}; 
        ///Writing 1 updates USART3 Tx FIFO size to match the USART3								TXSIZE. Must be done for all USARTs when any USART TXSIZE is								changed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> usart3txupdatesize{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoFifoctlspi{    ///<SPI FIFO global control register. These registers are byte,						halfword, and word addressable. The upper 16 bits of these registers provide						information about the System FIFO configuration, and are specific to each						device type.
        using Addr = Register::Address<0x1c038200,0x00000000,0x00000000,unsigned>;
        ///Pause all SPIs receive FIFO operations. This can be used to								prepare the System FIFO to reconfigure FIFO allocations among the								SPI receivers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxpause{}; 
        ///All SPI receive FIFOs are paused.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxpaused{}; 
        ///All SPI receive FIFOs are empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxempty{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Pause all SPIs transmit FIFO operations. This can be used								to prepare the System FIFO to reconfigure FIFO allocations among the								SPI transmitters.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txpause{}; 
        ///All SPI transmit FIFOs are paused.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txpaused{}; 
        ///All SPI transmit FIFOs are empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reports the receive FIFO space available for SPIs on the								System FIFO. The reset value is device specific.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxfifototal{}; 
        ///Reports the transmit FIFO space available for SPIs on the								System FIFO. The reset value is device specific.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txfifototal{}; 
    }
    namespace VfifoFifoupdatespi{    ///<SPI FIFO global update register
        using Addr = Register::Address<0x1c038204,0x00000004,0x00000000,unsigned>;
        ///Writing 1 updates SPI0 Rx FIFO size to match the SPI0								RXSIZE. Must be done for all SPIs when any SPI RXSIZE is								changed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> spi0rxupdatesize{}; 
        ///Writing 1 updates SPI1 Rx FIFO size to match the SPI1								RXSIZE. Must be done for all SPIs when any SPI RXSIZE is								changed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> spi1rxupdatesize{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,3),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Writing 1 updates SPI0 Tx FIFO size to match the SPI0								TXSIZE. Must be done for all SPIs when any SPI TXSIZE is								changed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> spi0txupdatesize{}; 
        ///Writing 1 updates SPI1 Tx FIFO size to match the SPI1								TXSIZE. Must be done for all SPIs when any SPI TXSIZE is								changed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> spi1txupdatesize{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,18),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoFifocfgusart0{    ///<FIFO configuration register for USART0
        using Addr = Register::Address<0x1c038110,0x00000000,0x00000000,unsigned>;
        ///Configures the USART receive FIFO size. A zero values								provides no System FIFO service for the related USART								receiver.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxsize{}; 
        ///Configures the USART transmit FIFO size. A zero values								provides no System FIFO service for the related USART								transmitter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> txsize{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoFifocfgusart1{    ///<FIFO configuration register for USART0
        using Addr = Register::Address<0x1c038114,0x00000000,0x00000000,unsigned>;
        ///Configures the USART receive FIFO size. A zero values								provides no System FIFO service for the related USART								receiver.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxsize{}; 
        ///Configures the USART transmit FIFO size. A zero values								provides no System FIFO service for the related USART								transmitter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> txsize{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoFifocfgusart2{    ///<FIFO configuration register for USART0
        using Addr = Register::Address<0x1c038118,0x00000000,0x00000000,unsigned>;
        ///Configures the USART receive FIFO size. A zero values								provides no System FIFO service for the related USART								receiver.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxsize{}; 
        ///Configures the USART transmit FIFO size. A zero values								provides no System FIFO service for the related USART								transmitter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> txsize{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoFifocfgusart3{    ///<FIFO configuration register for USART0
        using Addr = Register::Address<0x1c03811c,0x00000000,0x00000000,unsigned>;
        ///Configures the USART receive FIFO size. A zero values								provides no System FIFO service for the related USART								receiver.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxsize{}; 
        ///Configures the USART transmit FIFO size. A zero values								provides no System FIFO service for the related USART								transmitter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> txsize{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoFifocfgspi0{    ///<FIFO configuration register for SPI0
        using Addr = Register::Address<0x1c038210,0x00000000,0x00000000,unsigned>;
        ///Configures the SPI receive FIFO size. A zero values								provides no System FIFO service for the related SPI								receiver.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxsize{}; 
        ///Configures the SPI transmit FIFO size. A zero values								provides no System FIFO service for the related SPI								transmitter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> txsize{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoFifocfgspi1{    ///<FIFO configuration register for SPI0
        using Addr = Register::Address<0x1c038214,0x00000000,0x00000000,unsigned>;
        ///Configures the SPI receive FIFO size. A zero values								provides no System FIFO service for the related SPI								receiver.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxsize{}; 
        ///Configures the SPI transmit FIFO size. A zero values								provides no System FIFO service for the related SPI								transmitter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> txsize{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoCfgusart0{    ///<USART0 configuration
        using Addr = Register::Address<0x1c039000,0x00000000,0x00000000,unsigned>;
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Timeout Continue On Write. When 0, the timeout for the								related peripheral is reset every time data is transferred from the								peripheral into the receive FIFO. When 1, the timeout for the								related peripheral is not reset every time data is transferred into								the receive FIFO. This allows the timeout to be applied to								accumulated data, perhaps related to the FIFO								threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> timeoutcontonwrite{}; 
        ///Timeout Continue On Empty. When 0, the timeout for the								related peripheral is reset when the receive FIFO becomes empty.								When 1, the timeout for the related peripheral is not reset when the								receive FIFO becomes empty. This allows the timeout to be used to								flag idle peripherals, and could potentially be used to indicate the								end of a transmission of indeterminate length.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> timeoutcontonempty{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Specifies the least significant timer bit to compare to								TimeoutValue. See Section 24.5.7.1 below. Value can be 0 through								15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> timeoutbase{}; 
        ///Specifies the maximum time value for timeout at the timer								position identified by TimeoutBase. Minimum time TimeoutValue - 1.								is See Section 24.5.7.1 below. TimeoutValue should not be 0 or 1								when timeout is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> timeoutvalue{}; 
        ///Receive FIFO Threshold. The System FIFO indicates that the								threshold has been reached when the number of entries in the receive								FIFO is greater than this value. For example, when RxThreshold = 0,								the threshold is exceeded when there is at least one entry in the								receive FIFO. An interrupt can be generated when the RxThreshold has								been reached (see Section 24.5.10), but has no effect on DMA								requests, which are generated whenever the receiver FIFO is not								empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxthreshold{}; 
        ///Transmit FIFO Threshold. The System FIFO indicates that the								threshold has been reached when the number of free entries in the								transmit FIFO is less than or equal to this value. For example, when								TxThreshold = 0, the threshold is exceeded when there is at least								one free entry in the transmit FIFO. An interrupt can be generated								when the TxThreshold has been reached (see Section 24.5.10), but has								no effect on DMA requests, which are generated whenever the transmit								FIFO has any free entries.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txthreshold{}; 
    }
    namespace VfifoCfgusart1{    ///<USART0 configuration
        using Addr = Register::Address<0x1c039100,0x00000000,0x00000000,unsigned>;
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Timeout Continue On Write. When 0, the timeout for the								related peripheral is reset every time data is transferred from the								peripheral into the receive FIFO. When 1, the timeout for the								related peripheral is not reset every time data is transferred into								the receive FIFO. This allows the timeout to be applied to								accumulated data, perhaps related to the FIFO								threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> timeoutcontonwrite{}; 
        ///Timeout Continue On Empty. When 0, the timeout for the								related peripheral is reset when the receive FIFO becomes empty.								When 1, the timeout for the related peripheral is not reset when the								receive FIFO becomes empty. This allows the timeout to be used to								flag idle peripherals, and could potentially be used to indicate the								end of a transmission of indeterminate length.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> timeoutcontonempty{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Specifies the least significant timer bit to compare to								TimeoutValue. See Section 24.5.7.1 below. Value can be 0 through								15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> timeoutbase{}; 
        ///Specifies the maximum time value for timeout at the timer								position identified by TimeoutBase. Minimum time TimeoutValue - 1.								is See Section 24.5.7.1 below. TimeoutValue should not be 0 or 1								when timeout is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> timeoutvalue{}; 
        ///Receive FIFO Threshold. The System FIFO indicates that the								threshold has been reached when the number of entries in the receive								FIFO is greater than this value. For example, when RxThreshold = 0,								the threshold is exceeded when there is at least one entry in the								receive FIFO. An interrupt can be generated when the RxThreshold has								been reached (see Section 24.5.10), but has no effect on DMA								requests, which are generated whenever the receiver FIFO is not								empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxthreshold{}; 
        ///Transmit FIFO Threshold. The System FIFO indicates that the								threshold has been reached when the number of free entries in the								transmit FIFO is less than or equal to this value. For example, when								TxThreshold = 0, the threshold is exceeded when there is at least								one free entry in the transmit FIFO. An interrupt can be generated								when the TxThreshold has been reached (see Section 24.5.10), but has								no effect on DMA requests, which are generated whenever the transmit								FIFO has any free entries.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txthreshold{}; 
    }
    namespace VfifoCfgusart2{    ///<USART0 configuration
        using Addr = Register::Address<0x1c039200,0x00000000,0x00000000,unsigned>;
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Timeout Continue On Write. When 0, the timeout for the								related peripheral is reset every time data is transferred from the								peripheral into the receive FIFO. When 1, the timeout for the								related peripheral is not reset every time data is transferred into								the receive FIFO. This allows the timeout to be applied to								accumulated data, perhaps related to the FIFO								threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> timeoutcontonwrite{}; 
        ///Timeout Continue On Empty. When 0, the timeout for the								related peripheral is reset when the receive FIFO becomes empty.								When 1, the timeout for the related peripheral is not reset when the								receive FIFO becomes empty. This allows the timeout to be used to								flag idle peripherals, and could potentially be used to indicate the								end of a transmission of indeterminate length.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> timeoutcontonempty{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Specifies the least significant timer bit to compare to								TimeoutValue. See Section 24.5.7.1 below. Value can be 0 through								15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> timeoutbase{}; 
        ///Specifies the maximum time value for timeout at the timer								position identified by TimeoutBase. Minimum time TimeoutValue - 1.								is See Section 24.5.7.1 below. TimeoutValue should not be 0 or 1								when timeout is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> timeoutvalue{}; 
        ///Receive FIFO Threshold. The System FIFO indicates that the								threshold has been reached when the number of entries in the receive								FIFO is greater than this value. For example, when RxThreshold = 0,								the threshold is exceeded when there is at least one entry in the								receive FIFO. An interrupt can be generated when the RxThreshold has								been reached (see Section 24.5.10), but has no effect on DMA								requests, which are generated whenever the receiver FIFO is not								empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxthreshold{}; 
        ///Transmit FIFO Threshold. The System FIFO indicates that the								threshold has been reached when the number of free entries in the								transmit FIFO is less than or equal to this value. For example, when								TxThreshold = 0, the threshold is exceeded when there is at least								one free entry in the transmit FIFO. An interrupt can be generated								when the TxThreshold has been reached (see Section 24.5.10), but has								no effect on DMA requests, which are generated whenever the transmit								FIFO has any free entries.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txthreshold{}; 
    }
    namespace VfifoCfgusart3{    ///<USART0 configuration
        using Addr = Register::Address<0x1c039300,0x00000000,0x00000000,unsigned>;
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Timeout Continue On Write. When 0, the timeout for the								related peripheral is reset every time data is transferred from the								peripheral into the receive FIFO. When 1, the timeout for the								related peripheral is not reset every time data is transferred into								the receive FIFO. This allows the timeout to be applied to								accumulated data, perhaps related to the FIFO								threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> timeoutcontonwrite{}; 
        ///Timeout Continue On Empty. When 0, the timeout for the								related peripheral is reset when the receive FIFO becomes empty.								When 1, the timeout for the related peripheral is not reset when the								receive FIFO becomes empty. This allows the timeout to be used to								flag idle peripherals, and could potentially be used to indicate the								end of a transmission of indeterminate length.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> timeoutcontonempty{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Specifies the least significant timer bit to compare to								TimeoutValue. See Section 24.5.7.1 below. Value can be 0 through								15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> timeoutbase{}; 
        ///Specifies the maximum time value for timeout at the timer								position identified by TimeoutBase. Minimum time TimeoutValue - 1.								is See Section 24.5.7.1 below. TimeoutValue should not be 0 or 1								when timeout is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> timeoutvalue{}; 
        ///Receive FIFO Threshold. The System FIFO indicates that the								threshold has been reached when the number of entries in the receive								FIFO is greater than this value. For example, when RxThreshold = 0,								the threshold is exceeded when there is at least one entry in the								receive FIFO. An interrupt can be generated when the RxThreshold has								been reached (see Section 24.5.10), but has no effect on DMA								requests, which are generated whenever the receiver FIFO is not								empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxthreshold{}; 
        ///Transmit FIFO Threshold. The System FIFO indicates that the								threshold has been reached when the number of free entries in the								transmit FIFO is less than or equal to this value. For example, when								TxThreshold = 0, the threshold is exceeded when there is at least								one free entry in the transmit FIFO. An interrupt can be generated								when the TxThreshold has been reached (see Section 24.5.10), but has								no effect on DMA requests, which are generated whenever the transmit								FIFO has any free entries.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txthreshold{}; 
    }
    namespace VfifoStatusart0{    ///<USART0 status
        using Addr = Register::Address<0x1c039004,0x00000000,0x00000000,unsigned>;
        ///Receive FIFO Threshold. When 1, the receive FIFO threshold								has been reached. This is a read-only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxth{}; 
        ///Transmit FIFO Threshold. When 1, the transmit FIFO								threshold has been reached. This is a read-only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txth{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Timeout. When 1, the receive FIFO has timed								out, based on the timeout configuration in the CFGUSART register.								The timeout condition can be cleared by writing a 1 to this bit, by								enabling or disabling the timeout interrupt, or by writing a 1 to								the timeout interrupt enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeout{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Bus Error. When 1, a bus error has occurred while								processing data for USARTn. The bus error flag can be cleared by								writing a 1 to this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> buserr{}; 
        ///Receive FIFO Empty. When 1, the receive FIFO is currently								empty. This is a read-only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxempty{}; 
        ///Transmit FIFO Empty. When 1, the transmit FIFO is currently								empty. This is a read-only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Count. Indicates how many entries may be read								from the receive FIFO. 0 = FIFO empty. This is a read-only								field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxcount{}; 
        ///Transmit FIFO Count. Indicates how many entries may be								written to the transmit FIFO. 0 = FIFO full. This is a read-only								field that is valid only when the TxFIFO is fully configured and								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txcount{}; 
    }
    namespace VfifoStatusart1{    ///<USART0 status
        using Addr = Register::Address<0x1c039104,0x00000000,0x00000000,unsigned>;
        ///Receive FIFO Threshold. When 1, the receive FIFO threshold								has been reached. This is a read-only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxth{}; 
        ///Transmit FIFO Threshold. When 1, the transmit FIFO								threshold has been reached. This is a read-only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txth{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Timeout. When 1, the receive FIFO has timed								out, based on the timeout configuration in the CFGUSART register.								The timeout condition can be cleared by writing a 1 to this bit, by								enabling or disabling the timeout interrupt, or by writing a 1 to								the timeout interrupt enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeout{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Bus Error. When 1, a bus error has occurred while								processing data for USARTn. The bus error flag can be cleared by								writing a 1 to this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> buserr{}; 
        ///Receive FIFO Empty. When 1, the receive FIFO is currently								empty. This is a read-only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxempty{}; 
        ///Transmit FIFO Empty. When 1, the transmit FIFO is currently								empty. This is a read-only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Count. Indicates how many entries may be read								from the receive FIFO. 0 = FIFO empty. This is a read-only								field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxcount{}; 
        ///Transmit FIFO Count. Indicates how many entries may be								written to the transmit FIFO. 0 = FIFO full. This is a read-only								field that is valid only when the TxFIFO is fully configured and								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txcount{}; 
    }
    namespace VfifoStatusart2{    ///<USART0 status
        using Addr = Register::Address<0x1c039204,0x00000000,0x00000000,unsigned>;
        ///Receive FIFO Threshold. When 1, the receive FIFO threshold								has been reached. This is a read-only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxth{}; 
        ///Transmit FIFO Threshold. When 1, the transmit FIFO								threshold has been reached. This is a read-only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txth{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Timeout. When 1, the receive FIFO has timed								out, based on the timeout configuration in the CFGUSART register.								The timeout condition can be cleared by writing a 1 to this bit, by								enabling or disabling the timeout interrupt, or by writing a 1 to								the timeout interrupt enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeout{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Bus Error. When 1, a bus error has occurred while								processing data for USARTn. The bus error flag can be cleared by								writing a 1 to this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> buserr{}; 
        ///Receive FIFO Empty. When 1, the receive FIFO is currently								empty. This is a read-only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxempty{}; 
        ///Transmit FIFO Empty. When 1, the transmit FIFO is currently								empty. This is a read-only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Count. Indicates how many entries may be read								from the receive FIFO. 0 = FIFO empty. This is a read-only								field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxcount{}; 
        ///Transmit FIFO Count. Indicates how many entries may be								written to the transmit FIFO. 0 = FIFO full. This is a read-only								field that is valid only when the TxFIFO is fully configured and								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txcount{}; 
    }
    namespace VfifoStatusart3{    ///<USART0 status
        using Addr = Register::Address<0x1c039304,0x00000000,0x00000000,unsigned>;
        ///Receive FIFO Threshold. When 1, the receive FIFO threshold								has been reached. This is a read-only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxth{}; 
        ///Transmit FIFO Threshold. When 1, the transmit FIFO								threshold has been reached. This is a read-only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txth{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Timeout. When 1, the receive FIFO has timed								out, based on the timeout configuration in the CFGUSART register.								The timeout condition can be cleared by writing a 1 to this bit, by								enabling or disabling the timeout interrupt, or by writing a 1 to								the timeout interrupt enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeout{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Bus Error. When 1, a bus error has occurred while								processing data for USARTn. The bus error flag can be cleared by								writing a 1 to this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> buserr{}; 
        ///Receive FIFO Empty. When 1, the receive FIFO is currently								empty. This is a read-only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxempty{}; 
        ///Transmit FIFO Empty. When 1, the transmit FIFO is currently								empty. This is a read-only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Count. Indicates how many entries may be read								from the receive FIFO. 0 = FIFO empty. This is a read-only								field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxcount{}; 
        ///Transmit FIFO Count. Indicates how many entries may be								written to the transmit FIFO. 0 = FIFO full. This is a read-only								field that is valid only when the TxFIFO is fully configured and								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txcount{}; 
    }
    namespace VfifoIntstatusart0{    ///<USART0 interrupt status
        using Addr = Register::Address<0x1c039008,0x00000000,0x00000000,unsigned>;
        ///Receive FIFO Threshold. When 1, the receive FIFO threshold								has been reached, and the related interrupt is								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxth{}; 
        ///Transmit FIFO Threshold. When 1, the transmit FIFO								threshold has been reached, and the related interrupt is								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txth{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive Timeout. When 1, the receive FIFO has timed out,								based on the timeout configuration in the CFGUSART register, and the								related interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeout{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Bus Error. This is simply a copy of the same bit in the								STATUSART register. The bus error interrupt is always								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> buserr{}; 
        ///Receive FIFO Empty. This is simply a copy of the same bit								in the STATUSART register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxempty{}; 
        ///Transmit FIFO Empty. This is simply a copy of the same bit								in the STATUSART register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Count. This is simply a copy of the same field								in the STATUSART register, included here so an ISR can read all								needed status information in one read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxcount{}; 
        ///Transmit FIFO Available. This is simply a copy of the same								field in the STATUSART register, included here so an ISR can read								all needed status information in one read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txcount{}; 
    }
    namespace VfifoIntstatusart1{    ///<USART0 interrupt status
        using Addr = Register::Address<0x1c039108,0x00000000,0x00000000,unsigned>;
        ///Receive FIFO Threshold. When 1, the receive FIFO threshold								has been reached, and the related interrupt is								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxth{}; 
        ///Transmit FIFO Threshold. When 1, the transmit FIFO								threshold has been reached, and the related interrupt is								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txth{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive Timeout. When 1, the receive FIFO has timed out,								based on the timeout configuration in the CFGUSART register, and the								related interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeout{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Bus Error. This is simply a copy of the same bit in the								STATUSART register. The bus error interrupt is always								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> buserr{}; 
        ///Receive FIFO Empty. This is simply a copy of the same bit								in the STATUSART register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxempty{}; 
        ///Transmit FIFO Empty. This is simply a copy of the same bit								in the STATUSART register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Count. This is simply a copy of the same field								in the STATUSART register, included here so an ISR can read all								needed status information in one read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxcount{}; 
        ///Transmit FIFO Available. This is simply a copy of the same								field in the STATUSART register, included here so an ISR can read								all needed status information in one read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txcount{}; 
    }
    namespace VfifoIntstatusart2{    ///<USART0 interrupt status
        using Addr = Register::Address<0x1c039208,0x00000000,0x00000000,unsigned>;
        ///Receive FIFO Threshold. When 1, the receive FIFO threshold								has been reached, and the related interrupt is								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxth{}; 
        ///Transmit FIFO Threshold. When 1, the transmit FIFO								threshold has been reached, and the related interrupt is								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txth{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive Timeout. When 1, the receive FIFO has timed out,								based on the timeout configuration in the CFGUSART register, and the								related interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeout{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Bus Error. This is simply a copy of the same bit in the								STATUSART register. The bus error interrupt is always								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> buserr{}; 
        ///Receive FIFO Empty. This is simply a copy of the same bit								in the STATUSART register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxempty{}; 
        ///Transmit FIFO Empty. This is simply a copy of the same bit								in the STATUSART register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Count. This is simply a copy of the same field								in the STATUSART register, included here so an ISR can read all								needed status information in one read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxcount{}; 
        ///Transmit FIFO Available. This is simply a copy of the same								field in the STATUSART register, included here so an ISR can read								all needed status information in one read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txcount{}; 
    }
    namespace VfifoIntstatusart3{    ///<USART0 interrupt status
        using Addr = Register::Address<0x1c039308,0x00000000,0x00000000,unsigned>;
        ///Receive FIFO Threshold. When 1, the receive FIFO threshold								has been reached, and the related interrupt is								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxth{}; 
        ///Transmit FIFO Threshold. When 1, the transmit FIFO								threshold has been reached, and the related interrupt is								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txth{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive Timeout. When 1, the receive FIFO has timed out,								based on the timeout configuration in the CFGUSART register, and the								related interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeout{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Bus Error. This is simply a copy of the same bit in the								STATUSART register. The bus error interrupt is always								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> buserr{}; 
        ///Receive FIFO Empty. This is simply a copy of the same bit								in the STATUSART register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxempty{}; 
        ///Transmit FIFO Empty. This is simply a copy of the same bit								in the STATUSART register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Count. This is simply a copy of the same field								in the STATUSART register, included here so an ISR can read all								needed status information in one read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxcount{}; 
        ///Transmit FIFO Available. This is simply a copy of the same								field in the STATUSART register, included here so an ISR can read								all needed status information in one read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txcount{}; 
    }
    namespace VfifoCtlsetusart0{    ///<USART0 control read and set register. A complete value may be read						from this register. Writing a 1 to any implemented bit position causes that						bit to be set.
        using Addr = Register::Address<0x1c03900c,0x00000000,0x00000000,unsigned>;
        ///Receive FIFO Threshold Interrupt Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxthinten{}; 
        ///Transmit FIFO Threshold Interrupt Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txthinten{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Timeout Interrupt Enable. When enabled, this								also enables the timeout for this USART. Writing a 1 to this bit								resets the USART timeout logic.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeoutinten{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO flush. Writing a 1 to this bit forces the								receive FIFO to be empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxflush{}; 
        ///Transmit FIFO flush. Writing a 1 to this bit forces the								transmit FIFO to be empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txflush{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoCtlsetusart1{    ///<USART0 control read and set register. A complete value may be read						from this register. Writing a 1 to any implemented bit position causes that						bit to be set.
        using Addr = Register::Address<0x1c03910c,0x00000000,0x00000000,unsigned>;
        ///Receive FIFO Threshold Interrupt Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxthinten{}; 
        ///Transmit FIFO Threshold Interrupt Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txthinten{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Timeout Interrupt Enable. When enabled, this								also enables the timeout for this USART. Writing a 1 to this bit								resets the USART timeout logic.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeoutinten{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO flush. Writing a 1 to this bit forces the								receive FIFO to be empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxflush{}; 
        ///Transmit FIFO flush. Writing a 1 to this bit forces the								transmit FIFO to be empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txflush{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoCtlsetusart2{    ///<USART0 control read and set register. A complete value may be read						from this register. Writing a 1 to any implemented bit position causes that						bit to be set.
        using Addr = Register::Address<0x1c03920c,0x00000000,0x00000000,unsigned>;
        ///Receive FIFO Threshold Interrupt Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxthinten{}; 
        ///Transmit FIFO Threshold Interrupt Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txthinten{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Timeout Interrupt Enable. When enabled, this								also enables the timeout for this USART. Writing a 1 to this bit								resets the USART timeout logic.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeoutinten{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO flush. Writing a 1 to this bit forces the								receive FIFO to be empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxflush{}; 
        ///Transmit FIFO flush. Writing a 1 to this bit forces the								transmit FIFO to be empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txflush{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoCtlsetusart3{    ///<USART0 control read and set register. A complete value may be read						from this register. Writing a 1 to any implemented bit position causes that						bit to be set.
        using Addr = Register::Address<0x1c03930c,0x00000000,0x00000000,unsigned>;
        ///Receive FIFO Threshold Interrupt Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxthinten{}; 
        ///Transmit FIFO Threshold Interrupt Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txthinten{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Timeout Interrupt Enable. When enabled, this								also enables the timeout for this USART. Writing a 1 to this bit								resets the USART timeout logic.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeoutinten{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO flush. Writing a 1 to this bit forces the								receive FIFO to be empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxflush{}; 
        ///Transmit FIFO flush. Writing a 1 to this bit forces the								transmit FIFO to be empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txflush{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoCtlclrusart0{    ///<USART0 control clear register. Writing a 1 to any implemented bit						position causes the corresponding bit in the related CTLSET register to be						cleared.
        using Addr = Register::Address<0x1c039010,0x00000000,0x00000000,unsigned>;
        ///Receive FIFO Threshold Interrupt clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxthintclr{}; 
        ///Transmit FIFO Threshold Interrupt clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txthintclr{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Time-out Interrupt clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeoutintclr{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO flush clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxflushclr{}; 
        ///Transmit FIFO flush clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txflushclr{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoCtlclrusart1{    ///<USART0 control clear register. Writing a 1 to any implemented bit						position causes the corresponding bit in the related CTLSET register to be						cleared.
        using Addr = Register::Address<0x1c039110,0x00000000,0x00000000,unsigned>;
        ///Receive FIFO Threshold Interrupt clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxthintclr{}; 
        ///Transmit FIFO Threshold Interrupt clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txthintclr{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Time-out Interrupt clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeoutintclr{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO flush clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxflushclr{}; 
        ///Transmit FIFO flush clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txflushclr{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoCtlclrusart2{    ///<USART0 control clear register. Writing a 1 to any implemented bit						position causes the corresponding bit in the related CTLSET register to be						cleared.
        using Addr = Register::Address<0x1c039210,0x00000000,0x00000000,unsigned>;
        ///Receive FIFO Threshold Interrupt clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxthintclr{}; 
        ///Transmit FIFO Threshold Interrupt clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txthintclr{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Time-out Interrupt clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeoutintclr{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO flush clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxflushclr{}; 
        ///Transmit FIFO flush clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txflushclr{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoCtlclrusart3{    ///<USART0 control clear register. Writing a 1 to any implemented bit						position causes the corresponding bit in the related CTLSET register to be						cleared.
        using Addr = Register::Address<0x1c039310,0x00000000,0x00000000,unsigned>;
        ///Receive FIFO Threshold Interrupt clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxthintclr{}; 
        ///Transmit FIFO Threshold Interrupt clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txthintclr{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Time-out Interrupt clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeoutintclr{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO flush clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxflushclr{}; 
        ///Transmit FIFO flush clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txflushclr{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoRxdatusart0{    ///<USART0 received data
        using Addr = Register::Address<0x1c039014,0x00000000,0x00000000,unsigned>;
        ///The UART Receiver Data register contains the next received								character. The number of bits that are relevant depends on the UART								configuration settings.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rxdat{}; 
        ///Reserved, the value read from a reserved bit is not								defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoRxdatusart1{    ///<USART0 received data
        using Addr = Register::Address<0x1c039114,0x00000000,0x00000000,unsigned>;
        ///The UART Receiver Data register contains the next received								character. The number of bits that are relevant depends on the UART								configuration settings.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rxdat{}; 
        ///Reserved, the value read from a reserved bit is not								defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoRxdatusart2{    ///<USART0 received data
        using Addr = Register::Address<0x1c039214,0x00000000,0x00000000,unsigned>;
        ///The UART Receiver Data register contains the next received								character. The number of bits that are relevant depends on the UART								configuration settings.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rxdat{}; 
        ///Reserved, the value read from a reserved bit is not								defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoRxdatusart3{    ///<USART0 received data
        using Addr = Register::Address<0x1c039314,0x00000000,0x00000000,unsigned>;
        ///The UART Receiver Data register contains the next received								character. The number of bits that are relevant depends on the UART								configuration settings.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rxdat{}; 
        ///Reserved, the value read from a reserved bit is not								defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoRxdatstatusart0{    ///<USART0 received data with status
        using Addr = Register::Address<0x1c039018,0x00000000,0x00000000,unsigned>;
        ///The UART Receiver Data register contains the next received								character. The number of bits that are relevant depends on the UART								configuration settings.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rxdat{}; 
        ///Reserved, the value read from a reserved bit is not								defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Framing Error status flag. This bit is valid when there is								a character to be read in the RXDAT register and reflects the status								of that character. This bit will set when the character in RXDAT was								received with a missing stop bit at the expected location. This								could be an indication of a baud rate or configuration mismatch with								the transmitting source.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> framerr{}; 
        ///Parity Error status flag. This bit is valid when there is a								character to be read in the RXDAT register and reflects the status								of that character. This bit will be set when a parity error is								detected in a received character.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> parityerr{}; 
        ///Received Noise flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxnoise{}; 
        ///Reserved, the value read from a reserved bit is not								defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoRxdatstatusart1{    ///<USART0 received data with status
        using Addr = Register::Address<0x1c039118,0x00000000,0x00000000,unsigned>;
        ///The UART Receiver Data register contains the next received								character. The number of bits that are relevant depends on the UART								configuration settings.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rxdat{}; 
        ///Reserved, the value read from a reserved bit is not								defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Framing Error status flag. This bit is valid when there is								a character to be read in the RXDAT register and reflects the status								of that character. This bit will set when the character in RXDAT was								received with a missing stop bit at the expected location. This								could be an indication of a baud rate or configuration mismatch with								the transmitting source.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> framerr{}; 
        ///Parity Error status flag. This bit is valid when there is a								character to be read in the RXDAT register and reflects the status								of that character. This bit will be set when a parity error is								detected in a received character.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> parityerr{}; 
        ///Received Noise flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxnoise{}; 
        ///Reserved, the value read from a reserved bit is not								defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoRxdatstatusart2{    ///<USART0 received data with status
        using Addr = Register::Address<0x1c039218,0x00000000,0x00000000,unsigned>;
        ///The UART Receiver Data register contains the next received								character. The number of bits that are relevant depends on the UART								configuration settings.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rxdat{}; 
        ///Reserved, the value read from a reserved bit is not								defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Framing Error status flag. This bit is valid when there is								a character to be read in the RXDAT register and reflects the status								of that character. This bit will set when the character in RXDAT was								received with a missing stop bit at the expected location. This								could be an indication of a baud rate or configuration mismatch with								the transmitting source.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> framerr{}; 
        ///Parity Error status flag. This bit is valid when there is a								character to be read in the RXDAT register and reflects the status								of that character. This bit will be set when a parity error is								detected in a received character.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> parityerr{}; 
        ///Received Noise flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxnoise{}; 
        ///Reserved, the value read from a reserved bit is not								defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoRxdatstatusart3{    ///<USART0 received data with status
        using Addr = Register::Address<0x1c039318,0x00000000,0x00000000,unsigned>;
        ///The UART Receiver Data register contains the next received								character. The number of bits that are relevant depends on the UART								configuration settings.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rxdat{}; 
        ///Reserved, the value read from a reserved bit is not								defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Framing Error status flag. This bit is valid when there is								a character to be read in the RXDAT register and reflects the status								of that character. This bit will set when the character in RXDAT was								received with a missing stop bit at the expected location. This								could be an indication of a baud rate or configuration mismatch with								the transmitting source.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> framerr{}; 
        ///Parity Error status flag. This bit is valid when there is a								character to be read in the RXDAT register and reflects the status								of that character. This bit will be set when a parity error is								detected in a received character.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> parityerr{}; 
        ///Received Noise flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxnoise{}; 
        ///Reserved, the value read from a reserved bit is not								defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoTxdatusart0{    ///<USART0 transmit data
        using Addr = Register::Address<0x1c03901c,0x00000000,0x00000000,unsigned>;
        ///Writing to the UART Transmit Data Register causes the data								to be transmitted as soon as the transmit shift register is								available and the condition for transmitting data is met: TXDIS bit								= 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> txdat{}; 
        ///Reserved. Only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoTxdatusart1{    ///<USART0 transmit data
        using Addr = Register::Address<0x1c03911c,0x00000000,0x00000000,unsigned>;
        ///Writing to the UART Transmit Data Register causes the data								to be transmitted as soon as the transmit shift register is								available and the condition for transmitting data is met: TXDIS bit								= 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> txdat{}; 
        ///Reserved. Only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoTxdatusart2{    ///<USART0 transmit data
        using Addr = Register::Address<0x1c03921c,0x00000000,0x00000000,unsigned>;
        ///Writing to the UART Transmit Data Register causes the data								to be transmitted as soon as the transmit shift register is								available and the condition for transmitting data is met: TXDIS bit								= 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> txdat{}; 
        ///Reserved. Only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoTxdatusart3{    ///<USART0 transmit data
        using Addr = Register::Address<0x1c03931c,0x00000000,0x00000000,unsigned>;
        ///Writing to the UART Transmit Data Register causes the data								to be transmitted as soon as the transmit shift register is								available and the condition for transmitting data is met: TXDIS bit								= 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> txdat{}; 
        ///Reserved. Only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoCfgspi0{    ///<SPI0 configuration
        using Addr = Register::Address<0x1c03a000,0x00000000,0x00000000,unsigned>;
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Timeout Continue On Write. When 0, the timeout for the								related peripheral is reset every time data is transferred from the								peripheral into the receive FIFO. When 1, the timeout for the								related peripheral is not reset every time data is transferred into								the receive FIFO. This allows the timeout to be applied to								accumulated data, perhaps related to the FIFO								threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> timeoutcontonwrite{}; 
        ///Timeout Continue On Empty. When 0, the timeout for the								related peripheral is reset when the receive FIFO becomes empty.								When 1, the timeout for the related peripheral is not reset when the								receive FIFO becomes empty. This allows the timeout to be used to								flag idle peripherals, and could potentially be used to indicate the								end of a transmission of indeterminate length.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> timeoutcontonempty{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Specifies the least significant timer bit to compare to								TimeoutValue. Value can be 0 through 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> timeoutbase{}; 
        ///Specifies the maximum time value for timeout at the timer								position identified by TimeoutBase. Minimum time TimeoutValue - 1.								TimeoutValue should not be 0 or 1 when timeout is								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> timeoutvalue{}; 
        ///Receive FIFO Threshold. The System FIFO indicates that the								threshold has been reached when the number of entries in the receive								FIFO is greater than this value. For example, when RxThreshold = 0,								the threshold is exceeded when there is at least one entry in the								receive FIFO. An interrupt can be generated when the RxThreshold has								been reached, but has no effect on DMA requests, which are generated								whenever the receiver FIFO is not empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxthreshold{}; 
        ///Transmit FIFO Threshold. The System FIFO indicates that the								threshold has been reached when the number of free entries in the								transmit FIFO is less than or equal to this value. For example, when								TxThreshold = 0, the threshold is exceeded when there is at least								one free entry in the transmit FIFO. An interrupt can be generated								when the TxThreshold has been reached, but has no effect on DMA								requests, which are generated whenever the transmit FIFO has any								free entries.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txthreshold{}; 
    }
    namespace VfifoCfgspi1{    ///<SPI0 configuration
        using Addr = Register::Address<0x1c03a100,0x00000000,0x00000000,unsigned>;
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Timeout Continue On Write. When 0, the timeout for the								related peripheral is reset every time data is transferred from the								peripheral into the receive FIFO. When 1, the timeout for the								related peripheral is not reset every time data is transferred into								the receive FIFO. This allows the timeout to be applied to								accumulated data, perhaps related to the FIFO								threshold.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> timeoutcontonwrite{}; 
        ///Timeout Continue On Empty. When 0, the timeout for the								related peripheral is reset when the receive FIFO becomes empty.								When 1, the timeout for the related peripheral is not reset when the								receive FIFO becomes empty. This allows the timeout to be used to								flag idle peripherals, and could potentially be used to indicate the								end of a transmission of indeterminate length.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> timeoutcontonempty{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Specifies the least significant timer bit to compare to								TimeoutValue. Value can be 0 through 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> timeoutbase{}; 
        ///Specifies the maximum time value for timeout at the timer								position identified by TimeoutBase. Minimum time TimeoutValue - 1.								TimeoutValue should not be 0 or 1 when timeout is								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> timeoutvalue{}; 
        ///Receive FIFO Threshold. The System FIFO indicates that the								threshold has been reached when the number of entries in the receive								FIFO is greater than this value. For example, when RxThreshold = 0,								the threshold is exceeded when there is at least one entry in the								receive FIFO. An interrupt can be generated when the RxThreshold has								been reached, but has no effect on DMA requests, which are generated								whenever the receiver FIFO is not empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxthreshold{}; 
        ///Transmit FIFO Threshold. The System FIFO indicates that the								threshold has been reached when the number of free entries in the								transmit FIFO is less than or equal to this value. For example, when								TxThreshold = 0, the threshold is exceeded when there is at least								one free entry in the transmit FIFO. An interrupt can be generated								when the TxThreshold has been reached, but has no effect on DMA								requests, which are generated whenever the transmit FIFO has any								free entries.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txthreshold{}; 
    }
    namespace VfifoStatspi0{    ///<SPI0 status
        using Addr = Register::Address<0x1c03a004,0x00000000,0x00000000,unsigned>;
        ///Receive FIFO Threshold. When 1, the receive FIFO threshold								has been reached. This is a read-only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxth{}; 
        ///Transmit FIFO Threshold. When 1, the transmit FIFO								threshold has been reached. This is a read-only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txth{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Timeout. When 1, the receive FIFO has timed								out, based on the timeout configuration in the CFGSPI register. The								timeout condition can be cleared by writing a 1 to this bit, by								enabling or disabling the timeout interrupt, or by writing a 1 to								the timeout interrupt enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeout{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Bus Error. When 1, a bus error has occurred while								processing data for SPI. The bus error flag can be cleared by								writing a 1 to this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> buserr{}; 
        ///Receive FIFO Empty. When 1, the receive FIFO is currently								empty. This is a read-only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxempty{}; 
        ///Transmit FIFO Empty. When 1, the transmit FIFO is currently								empty. This is a read-only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Count. Indicates how many entries may be read								from the receive FIFO. 0 = FIFO empty. This is a read-only								field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxcount{}; 
        ///Transmit FIFO Count. Indicates how many entries may be								written to the transmit FIFO. 0 = FIFO full. This is a read-only								field that is valid only when the TxFIFO is fully configured and								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txcount{}; 
    }
    namespace VfifoStatspi1{    ///<SPI0 status
        using Addr = Register::Address<0x1c03a104,0x00000000,0x00000000,unsigned>;
        ///Receive FIFO Threshold. When 1, the receive FIFO threshold								has been reached. This is a read-only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxth{}; 
        ///Transmit FIFO Threshold. When 1, the transmit FIFO								threshold has been reached. This is a read-only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txth{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Timeout. When 1, the receive FIFO has timed								out, based on the timeout configuration in the CFGSPI register. The								timeout condition can be cleared by writing a 1 to this bit, by								enabling or disabling the timeout interrupt, or by writing a 1 to								the timeout interrupt enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeout{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Bus Error. When 1, a bus error has occurred while								processing data for SPI. The bus error flag can be cleared by								writing a 1 to this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> buserr{}; 
        ///Receive FIFO Empty. When 1, the receive FIFO is currently								empty. This is a read-only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxempty{}; 
        ///Transmit FIFO Empty. When 1, the transmit FIFO is currently								empty. This is a read-only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Count. Indicates how many entries may be read								from the receive FIFO. 0 = FIFO empty. This is a read-only								field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxcount{}; 
        ///Transmit FIFO Count. Indicates how many entries may be								written to the transmit FIFO. 0 = FIFO full. This is a read-only								field that is valid only when the TxFIFO is fully configured and								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txcount{}; 
    }
    namespace VfifoIntstatspi0{    ///<SPI0 interrupt status
        using Addr = Register::Address<0x1c03a008,0x00000000,0x00000000,unsigned>;
        ///Receive FIFO Threshold. When 1, the receive FIFO threshold								has been reached, and the related interrupt is								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxth{}; 
        ///Transmit FIFO Threshold. When 1, the transmit FIFO								threshold has been reached, and the related interrupt is								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txth{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive Timeout. When 1, the receive FIFO has timed out,								based on the timeout configuration in the CFGSPI register, and the								related interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeout{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Bus Error. This is simply a copy of the same bit in the								STATSPI register. The bus error interrupt is always								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> buserr{}; 
        ///Receive FIFO Empty. This is simply a copy of the same bit								in the STATSPI register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxempty{}; 
        ///Transmit FIFO Empty. This is simply a copy of the same bit								in the STATSPI register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Count. This is simply a copy of the same field								in the STATSPI register, included here so an ISR can read all needed								status information in one read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxcount{}; 
        ///Transmit FIFO Available. This is simply a copy of the same								field in the STATSPI register, included here so an ISR can read all								needed status information in one read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txcount{}; 
    }
    namespace VfifoIntstatspi1{    ///<SPI0 interrupt status
        using Addr = Register::Address<0x1c03a108,0x00000000,0x00000000,unsigned>;
        ///Receive FIFO Threshold. When 1, the receive FIFO threshold								has been reached, and the related interrupt is								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxth{}; 
        ///Transmit FIFO Threshold. When 1, the transmit FIFO								threshold has been reached, and the related interrupt is								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txth{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive Timeout. When 1, the receive FIFO has timed out,								based on the timeout configuration in the CFGSPI register, and the								related interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeout{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Bus Error. This is simply a copy of the same bit in the								STATSPI register. The bus error interrupt is always								enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> buserr{}; 
        ///Receive FIFO Empty. This is simply a copy of the same bit								in the STATSPI register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxempty{}; 
        ///Transmit FIFO Empty. This is simply a copy of the same bit								in the STATSPI register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Count. This is simply a copy of the same field								in the STATSPI register, included here so an ISR can read all needed								status information in one read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rxcount{}; 
        ///Transmit FIFO Available. This is simply a copy of the same								field in the STATSPI register, included here so an ISR can read all								needed status information in one read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> txcount{}; 
    }
    namespace VfifoCtlsetspi0{    ///<SPI0 control read and set register. A complete value may be read						from this register. Writing a 1 to any implemented bit position causes that						bit to be set.
        using Addr = Register::Address<0x1c03a00c,0x00000000,0x00000000,unsigned>;
        ///Receive FIFO Threshold Interrupt Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxthinten{}; 
        ///Transmit FIFO Threshold Interrupt Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txthinten{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Timeout Interrupt Enable. When enabled, this								also enables the timeout for this SPI. Writing a 1 to this bit								resets the SPI timeout logic.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeoutinten{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO flush. Writing a 1 to this bit forces the								receive FIFO to be empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxflush{}; 
        ///Transmit FIFO flush. Writing a 1 to this bit forces the								transmit FIFO to be empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txflush{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoCtlsetspi1{    ///<SPI0 control read and set register. A complete value may be read						from this register. Writing a 1 to any implemented bit position causes that						bit to be set.
        using Addr = Register::Address<0x1c03a10c,0x00000000,0x00000000,unsigned>;
        ///Receive FIFO Threshold Interrupt Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxthinten{}; 
        ///Transmit FIFO Threshold Interrupt Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txthinten{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Timeout Interrupt Enable. When enabled, this								also enables the timeout for this SPI. Writing a 1 to this bit								resets the SPI timeout logic.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeoutinten{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO flush. Writing a 1 to this bit forces the								receive FIFO to be empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxflush{}; 
        ///Transmit FIFO flush. Writing a 1 to this bit forces the								transmit FIFO to be empty.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txflush{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoCtlclrspi0{    ///<SPI0 control clear register. Writing a 1 to any implemented bit						position causes the corresponding bit in the related CTLSET register to be						cleared.
        using Addr = Register::Address<0x1c03a010,0x00000000,0x00000000,unsigned>;
        ///Writing ones to this register clears the corresponding bit								or bits in the CTLSETSPI register, if they are implemented. Bits								that do not correspond to defined bits in CTLSETSPI are reserved and								only zeroes should be written to them.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Threshold Interrupt clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxthintclr{}; 
        ///Transmit FIFO Threshold Interrupt clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txthintclr{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Timeout Interrupt clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeoutintclr{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO flush clear. do the clear bits 8 and 9 do								anything?
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxflushclr{}; 
        ///Transmit FIFO flush clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txflushclr{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoCtlclrspi1{    ///<SPI0 control clear register. Writing a 1 to any implemented bit						position causes the corresponding bit in the related CTLSET register to be						cleared.
        using Addr = Register::Address<0x1c03a110,0x00000000,0x00000000,unsigned>;
        ///Writing ones to this register clears the corresponding bit								or bits in the CTLSETSPI register, if they are implemented. Bits								that do not correspond to defined bits in CTLSETSPI are reserved and								only zeroes should be written to them.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Threshold Interrupt clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxthintclr{}; 
        ///Transmit FIFO Threshold Interrupt clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txthintclr{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO Timeout Interrupt clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxtimeoutintclr{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Receive FIFO flush clear. do the clear bits 8 and 9 do								anything?
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxflushclr{}; 
        ///Transmit FIFO flush clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txflushclr{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoRxdatspi0{    ///<SPI0 received data. These registers are half word						addressable.
        using Addr = Register::Address<0x1c03a014,0x00000000,0x00000000,unsigned>;
        ///Receiver Data. This contains the next piece of received								data. The number of bits that are used depends on the LEN setting in								TXCTL / TXDATCTL.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxdat{}; 
        ///Slave Select for receive. This field allows the state of								the SSEL0 pin to be saved along with received data. The value will								reflect the SSEL0 pin for both master and slave operation. A zero								indicates that a slave select is active. The actual polarity of each								slave select pin is configured by the related SPOL bit in								CFG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rxssel0N{}; 
        ///Slave Select for receive. This field allows the state of								the SSEL1 pin to be saved along with received data. The value will								reflect the SSEL1 pin for both master and slave operation. A zero								indicates that a slave select is active. The actual polarity of each								slave select pin is configured by the related SPOL bit in								CFG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rxssel1N{}; 
        ///Slave Select for receive. This field allows the state of								the SSEL2 pin to be saved along with received data. The value will								reflect the SSEL2 pin for both master and slave operation. A zero								indicates that a slave select is active. The actual polarity of each								slave select pin is configured by the related SPOL bit in								CFG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rxssel2N{}; 
        ///Slave Select for receive. This field allows the state of								the SSEL3 pin to be saved along with received data. The value will								reflect the SSEL3 pin for both master and slave operation. A zero								indicates that a slave select is active. The actual polarity of each								slave select pin is configured by the related SPOL bit in								CFG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rxssel3N{}; 
        ///Start of Transfer flag. This flag will be 1 if this is the								first data after the SSELs went from deasserted to asserted (i.e.,								any previous transfer has ended). This information can be used to								identify the first piece of data in cases where the transfer length								is greater than 16 bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> sot{}; 
        ///Reserved, the value read from a reserved bit is not								defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoRxdatspi1{    ///<SPI0 received data. These registers are half word						addressable.
        using Addr = Register::Address<0x1c03a114,0x00000000,0x00000000,unsigned>;
        ///Receiver Data. This contains the next piece of received								data. The number of bits that are used depends on the LEN setting in								TXCTL / TXDATCTL.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxdat{}; 
        ///Slave Select for receive. This field allows the state of								the SSEL0 pin to be saved along with received data. The value will								reflect the SSEL0 pin for both master and slave operation. A zero								indicates that a slave select is active. The actual polarity of each								slave select pin is configured by the related SPOL bit in								CFG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rxssel0N{}; 
        ///Slave Select for receive. This field allows the state of								the SSEL1 pin to be saved along with received data. The value will								reflect the SSEL1 pin for both master and slave operation. A zero								indicates that a slave select is active. The actual polarity of each								slave select pin is configured by the related SPOL bit in								CFG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rxssel1N{}; 
        ///Slave Select for receive. This field allows the state of								the SSEL2 pin to be saved along with received data. The value will								reflect the SSEL2 pin for both master and slave operation. A zero								indicates that a slave select is active. The actual polarity of each								slave select pin is configured by the related SPOL bit in								CFG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rxssel2N{}; 
        ///Slave Select for receive. This field allows the state of								the SSEL3 pin to be saved along with received data. The value will								reflect the SSEL3 pin for both master and slave operation. A zero								indicates that a slave select is active. The actual polarity of each								slave select pin is configured by the related SPOL bit in								CFG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rxssel3N{}; 
        ///Start of Transfer flag. This flag will be 1 if this is the								first data after the SSELs went from deasserted to asserted (i.e.,								any previous transfer has ended). This information can be used to								identify the first piece of data in cases where the transfer length								is greater than 16 bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> sot{}; 
        ///Reserved, the value read from a reserved bit is not								defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoTxdatspi0{    ///<SPI0 transmit data. These registers are half word						addressable.
        using Addr = Register::Address<0x1c03a018,0x00000000,0x00000000,unsigned>;
        ///Transmit Data. This field provides from 1 to 16 bits of								data to be transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txdat{}; 
        ///Transmit Slave Select. This field asserts SSEL0 in master								mode. The output on the pin is active LOW by default. The active								state of the SSEL0 pin is configured by bits in the CFG								register.
        enum class Txssel0nVal {
            asserted=0x00000000,     ///<Asserted. SSEL0 asserted.
            notAsserted=0x00000001,     ///<Not asserted. SSEL0 not asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Txssel0nVal> txssel0N{}; 
        namespace Txssel0nValC{
            constexpr Register::FieldValue<decltype(txssel0N)::Type,Txssel0nVal::asserted> asserted{};
            constexpr Register::FieldValue<decltype(txssel0N)::Type,Txssel0nVal::notAsserted> notAsserted{};
        }
        ///Transmit Slave Select. This field asserts SSEL1 in master								mode. The output on the pin is active LOW by default. The active								state of the SSEL1 pin is configured by bits in the CFG								register.
        enum class Txssel1nVal {
            asserted=0x00000000,     ///<Asserted. SSEL1 asserted.
            notAsserted=0x00000001,     ///<Not asserted. SSEL1 not asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Txssel1nVal> txssel1N{}; 
        namespace Txssel1nValC{
            constexpr Register::FieldValue<decltype(txssel1N)::Type,Txssel1nVal::asserted> asserted{};
            constexpr Register::FieldValue<decltype(txssel1N)::Type,Txssel1nVal::notAsserted> notAsserted{};
        }
        ///Transmit Slave Select. This field asserts SSEL2 in master								mode. The output on the pin is active LOW by default. The active								state of the SSEL2 pin is configured by bits in the CFG								register.
        enum class Txssel2nVal {
            asserted=0x00000000,     ///<Asserted. SSEL2 asserted.
            notAsserted=0x00000001,     ///<Not asserted. SSEL2 not asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Txssel2nVal> txssel2N{}; 
        namespace Txssel2nValC{
            constexpr Register::FieldValue<decltype(txssel2N)::Type,Txssel2nVal::asserted> asserted{};
            constexpr Register::FieldValue<decltype(txssel2N)::Type,Txssel2nVal::notAsserted> notAsserted{};
        }
        ///Transmit Slave Select. This field asserts SSEL3 in master								mode. The output on the pin is active LOW by default. The active								state of the SSEL3 pin is configured by bits in the CFG								register.
        enum class Txssel3nVal {
            asserted=0x00000000,     ///<Asserted. SSEL3 asserted.
            notAsserted=0x00000001,     ///<Not asserted. SSEL3 not asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Txssel3nVal> txssel3N{}; 
        namespace Txssel3nValC{
            constexpr Register::FieldValue<decltype(txssel3N)::Type,Txssel3nVal::asserted> asserted{};
            constexpr Register::FieldValue<decltype(txssel3N)::Type,Txssel3nVal::notAsserted> notAsserted{};
        }
        ///End of Transfer. The asserted SSEL will be deasserted at								the end of a transfer, and remain so for at least the time specified								by the Transfer_delay value in the DLY register.
        enum class EotVal {
            notDeasserted=0x00000000,     ///<Not deasserted. SSEL not deasserted. This piece of										data is not treated as the end of a transfer. SSEL will not										be deasserted at the end of this data.
            deasserted=0x00000001,     ///<Deasserted. SSEL deasserted. This piece of data is										treated as the end of a transfer. SSEL will be deasserted at										the end of this piece of data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,EotVal> eot{}; 
        namespace EotValC{
            constexpr Register::FieldValue<decltype(eot)::Type,EotVal::notDeasserted> notDeasserted{};
            constexpr Register::FieldValue<decltype(eot)::Type,EotVal::deasserted> deasserted{};
        }
        ///End of Frame. Between frames, a delay may be inserted, as								defined by the FRAME_DELAY value in the DLY register. The end of a								frame may not be particularly meaningful if the FRAME_DELAY value =								0. This control can be used as part of the support for frame lengths								greater than 16 bits.
        enum class EofVal {
            dataNotEof=0x00000000,     ///<Data not EOF. This piece of data transmitted is not										treated as the end of a frame.
            dataEof=0x00000001,     ///<Data EOF. This piece of data is treated as the end										of a frame, causing the FRAME_DELAY time to be inserted										before subsequent data is transmitted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,EofVal> eof{}; 
        namespace EofValC{
            constexpr Register::FieldValue<decltype(eof)::Type,EofVal::dataNotEof> dataNotEof{};
            constexpr Register::FieldValue<decltype(eof)::Type,EofVal::dataEof> dataEof{};
        }
        ///Receive Ignore. This allows data to be transmitted using								the SPI without the need to read unneeded data from the receiver to								simplify the transmit process and can be used with the								DMA.
        enum class RxignoreVal {
            readReceivedData=0x00000000,     ///<Read received data. Received data must be read in										order to allow transmission to progress. In slave mode, an										overrun error will occur if received data is not read before										new data is received.
            ignoreReceivedData=0x00000001,     ///<Ignore received data. Received data is ignored,										allowing transmission without reading unneeded received										data. No receiver flags are generated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,RxignoreVal> rxignore{}; 
        namespace RxignoreValC{
            constexpr Register::FieldValue<decltype(rxignore)::Type,RxignoreVal::readReceivedData> readReceivedData{};
            constexpr Register::FieldValue<decltype(rxignore)::Type,RxignoreVal::ignoreReceivedData> ignoreReceivedData{};
        }
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Data Length. Specifies the data length from 1 to 16 bits.								Note that transfer lengths greater than 16 bits are supported by								implementing multiple sequential data transmits. 0x0 = Data transfer								is 1 bit in length. 0x1 = Data transfer is 2 bits in length. 0x2 =								Data transfer is 3 bits in length. ... 0xF = Data transfer is 16								bits in length.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> len{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace VfifoTxdatspi1{    ///<SPI0 transmit data. These registers are half word						addressable.
        using Addr = Register::Address<0x1c03a118,0x00000000,0x00000000,unsigned>;
        ///Transmit Data. This field provides from 1 to 16 bits of								data to be transmitted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txdat{}; 
        ///Transmit Slave Select. This field asserts SSEL0 in master								mode. The output on the pin is active LOW by default. The active								state of the SSEL0 pin is configured by bits in the CFG								register.
        enum class Txssel0nVal {
            asserted=0x00000000,     ///<Asserted. SSEL0 asserted.
            notAsserted=0x00000001,     ///<Not asserted. SSEL0 not asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Txssel0nVal> txssel0N{}; 
        namespace Txssel0nValC{
            constexpr Register::FieldValue<decltype(txssel0N)::Type,Txssel0nVal::asserted> asserted{};
            constexpr Register::FieldValue<decltype(txssel0N)::Type,Txssel0nVal::notAsserted> notAsserted{};
        }
        ///Transmit Slave Select. This field asserts SSEL1 in master								mode. The output on the pin is active LOW by default. The active								state of the SSEL1 pin is configured by bits in the CFG								register.
        enum class Txssel1nVal {
            asserted=0x00000000,     ///<Asserted. SSEL1 asserted.
            notAsserted=0x00000001,     ///<Not asserted. SSEL1 not asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Txssel1nVal> txssel1N{}; 
        namespace Txssel1nValC{
            constexpr Register::FieldValue<decltype(txssel1N)::Type,Txssel1nVal::asserted> asserted{};
            constexpr Register::FieldValue<decltype(txssel1N)::Type,Txssel1nVal::notAsserted> notAsserted{};
        }
        ///Transmit Slave Select. This field asserts SSEL2 in master								mode. The output on the pin is active LOW by default. The active								state of the SSEL2 pin is configured by bits in the CFG								register.
        enum class Txssel2nVal {
            asserted=0x00000000,     ///<Asserted. SSEL2 asserted.
            notAsserted=0x00000001,     ///<Not asserted. SSEL2 not asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Txssel2nVal> txssel2N{}; 
        namespace Txssel2nValC{
            constexpr Register::FieldValue<decltype(txssel2N)::Type,Txssel2nVal::asserted> asserted{};
            constexpr Register::FieldValue<decltype(txssel2N)::Type,Txssel2nVal::notAsserted> notAsserted{};
        }
        ///Transmit Slave Select. This field asserts SSEL3 in master								mode. The output on the pin is active LOW by default. The active								state of the SSEL3 pin is configured by bits in the CFG								register.
        enum class Txssel3nVal {
            asserted=0x00000000,     ///<Asserted. SSEL3 asserted.
            notAsserted=0x00000001,     ///<Not asserted. SSEL3 not asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Txssel3nVal> txssel3N{}; 
        namespace Txssel3nValC{
            constexpr Register::FieldValue<decltype(txssel3N)::Type,Txssel3nVal::asserted> asserted{};
            constexpr Register::FieldValue<decltype(txssel3N)::Type,Txssel3nVal::notAsserted> notAsserted{};
        }
        ///End of Transfer. The asserted SSEL will be deasserted at								the end of a transfer, and remain so for at least the time specified								by the Transfer_delay value in the DLY register.
        enum class EotVal {
            notDeasserted=0x00000000,     ///<Not deasserted. SSEL not deasserted. This piece of										data is not treated as the end of a transfer. SSEL will not										be deasserted at the end of this data.
            deasserted=0x00000001,     ///<Deasserted. SSEL deasserted. This piece of data is										treated as the end of a transfer. SSEL will be deasserted at										the end of this piece of data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,EotVal> eot{}; 
        namespace EotValC{
            constexpr Register::FieldValue<decltype(eot)::Type,EotVal::notDeasserted> notDeasserted{};
            constexpr Register::FieldValue<decltype(eot)::Type,EotVal::deasserted> deasserted{};
        }
        ///End of Frame. Between frames, a delay may be inserted, as								defined by the FRAME_DELAY value in the DLY register. The end of a								frame may not be particularly meaningful if the FRAME_DELAY value =								0. This control can be used as part of the support for frame lengths								greater than 16 bits.
        enum class EofVal {
            dataNotEof=0x00000000,     ///<Data not EOF. This piece of data transmitted is not										treated as the end of a frame.
            dataEof=0x00000001,     ///<Data EOF. This piece of data is treated as the end										of a frame, causing the FRAME_DELAY time to be inserted										before subsequent data is transmitted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,EofVal> eof{}; 
        namespace EofValC{
            constexpr Register::FieldValue<decltype(eof)::Type,EofVal::dataNotEof> dataNotEof{};
            constexpr Register::FieldValue<decltype(eof)::Type,EofVal::dataEof> dataEof{};
        }
        ///Receive Ignore. This allows data to be transmitted using								the SPI without the need to read unneeded data from the receiver to								simplify the transmit process and can be used with the								DMA.
        enum class RxignoreVal {
            readReceivedData=0x00000000,     ///<Read received data. Received data must be read in										order to allow transmission to progress. In slave mode, an										overrun error will occur if received data is not read before										new data is received.
            ignoreReceivedData=0x00000001,     ///<Ignore received data. Received data is ignored,										allowing transmission without reading unneeded received										data. No receiver flags are generated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,RxignoreVal> rxignore{}; 
        namespace RxignoreValC{
            constexpr Register::FieldValue<decltype(rxignore)::Type,RxignoreVal::readReceivedData> readReceivedData{};
            constexpr Register::FieldValue<decltype(rxignore)::Type,RxignoreVal::ignoreReceivedData> ignoreReceivedData{};
        }
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Data Length. Specifies the data length from 1 to 16 bits.								Note that transfer lengths greater than 16 bits are supported by								implementing multiple sequential data transmits. 0x0 = Data transfer								is 1 bit in length. 0x1 = Data transfer is 2 bits in length. 0x2 =								Data transfer is 3 bits in length. ... 0xF = Data transfer is 16								bits in length.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> len{}; 
        ///Reserved. Read value is undefined, only zero should be								written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
