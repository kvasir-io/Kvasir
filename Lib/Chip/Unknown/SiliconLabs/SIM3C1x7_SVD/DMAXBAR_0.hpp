#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonedmaxbar0{    ///<Channel 0-7 Trigger Select
        using Addr = Register::Address<0x40037000,0x00000000,0,unsigned>;
        ///DMA Channel 0 Peripheral Select. 
        enum class Ch0selVal {
            spi1Rx=0x00000001,     ///<Service SPI1 RX data requests.
            usart0Rx=0x00000002,     ///<Service USART0 RX data requests.
            i2c0Tx=0x00000003,     ///<Service I2C0 TX data requests.
            dma0t0Rise=0x00000004,     ///<Service DMAXT0 (PB1.10) rising edge data requests.
            dma0t0Fall=0x00000005,     ///<Service DMAXT0 (PB1.10) falling edge data requests.
            dma0t1Rise=0x00000006,     ///<Service DMAXT1 (PB1.11) rising edge data requests.
            dma0t1Fall=0x00000007,     ///<Service DMAXT1 (PB1.11) falling edge data requests.
            timer0l=0x00000008,     ///<Service TIMER0L overflow data requests.
            timer0h=0x00000009,     ///<Service TIMER0H overflow data requests.
            timer1l=0x0000000a,     ///<Service TIMER1L overflow data requests.
            timer1h=0x0000000b,     ///<Service TIMER1H overflow data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,Ch0selVal> ch0sel{}; 
        namespace Ch0selValC{
            constexpr Register::FieldValue<decltype(ch0sel)::Type,Ch0selVal::spi1Rx> spi1Rx{};
            constexpr Register::FieldValue<decltype(ch0sel)::Type,Ch0selVal::usart0Rx> usart0Rx{};
            constexpr Register::FieldValue<decltype(ch0sel)::Type,Ch0selVal::i2c0Tx> i2c0Tx{};
            constexpr Register::FieldValue<decltype(ch0sel)::Type,Ch0selVal::dma0t0Rise> dma0t0Rise{};
            constexpr Register::FieldValue<decltype(ch0sel)::Type,Ch0selVal::dma0t0Fall> dma0t0Fall{};
            constexpr Register::FieldValue<decltype(ch0sel)::Type,Ch0selVal::dma0t1Rise> dma0t1Rise{};
            constexpr Register::FieldValue<decltype(ch0sel)::Type,Ch0selVal::dma0t1Fall> dma0t1Fall{};
            constexpr Register::FieldValue<decltype(ch0sel)::Type,Ch0selVal::timer0l> timer0l{};
            constexpr Register::FieldValue<decltype(ch0sel)::Type,Ch0selVal::timer0h> timer0h{};
            constexpr Register::FieldValue<decltype(ch0sel)::Type,Ch0selVal::timer1l> timer1l{};
            constexpr Register::FieldValue<decltype(ch0sel)::Type,Ch0selVal::timer1h> timer1h{};
        }
        ///DMA Channel 1 Peripheral Select. 
        enum class Ch1selVal {
            spi0Rx=0x00000001,     ///<Service SPI0 RX data requests.
            usart1Rx=0x00000002,     ///<Service USART1 RX data requests.
            i2c0Rx=0x00000003,     ///<Service I2C0 RX data requests.
            idac1=0x00000004,     ///<Service IDAC1 data requests.
            epca0Control=0x00000005,     ///<Service EPCA0 control data requests.
            dma0t0Rise=0x00000006,     ///<Service DMAXT0 (PB1.10) rising edge data requests.
            dma0t0Fall=0x00000007,     ///<Service DMAXT0 (PB1.10) falling edge data requests.
            dma0t1Rise=0x00000008,     ///<Service DMAXT1 (PB1.11) rising edge data requests.
            dma0t1Fall=0x00000009,     ///<Service DMAXT1 (PB1.11) falling edge data requests.
            timer0l=0x0000000a,     ///<Service TIMER0L overflow data requests.
            timer1l=0x0000000b,     ///<Service TIMER1L overflow data requests.
            timer1h=0x0000000c,     ///<Service TIMER1H overflow data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,Ch1selVal> ch1sel{}; 
        namespace Ch1selValC{
            constexpr Register::FieldValue<decltype(ch1sel)::Type,Ch1selVal::spi0Rx> spi0Rx{};
            constexpr Register::FieldValue<decltype(ch1sel)::Type,Ch1selVal::usart1Rx> usart1Rx{};
            constexpr Register::FieldValue<decltype(ch1sel)::Type,Ch1selVal::i2c0Rx> i2c0Rx{};
            constexpr Register::FieldValue<decltype(ch1sel)::Type,Ch1selVal::idac1> idac1{};
            constexpr Register::FieldValue<decltype(ch1sel)::Type,Ch1selVal::epca0Control> epca0Control{};
            constexpr Register::FieldValue<decltype(ch1sel)::Type,Ch1selVal::dma0t0Rise> dma0t0Rise{};
            constexpr Register::FieldValue<decltype(ch1sel)::Type,Ch1selVal::dma0t0Fall> dma0t0Fall{};
            constexpr Register::FieldValue<decltype(ch1sel)::Type,Ch1selVal::dma0t1Rise> dma0t1Rise{};
            constexpr Register::FieldValue<decltype(ch1sel)::Type,Ch1selVal::dma0t1Fall> dma0t1Fall{};
            constexpr Register::FieldValue<decltype(ch1sel)::Type,Ch1selVal::timer0l> timer0l{};
            constexpr Register::FieldValue<decltype(ch1sel)::Type,Ch1selVal::timer1l> timer1l{};
            constexpr Register::FieldValue<decltype(ch1sel)::Type,Ch1selVal::timer1h> timer1h{};
        }
        ///DMA Channel 2 Peripheral Select. 
        enum class Ch2selVal {
            spi0Tx=0x00000001,     ///<Service SPI0 TX data requests.
            usart0Tx=0x00000002,     ///<Service USART0 TX data requests.
            saradc0=0x00000003,     ///<Service SARADC0 data requests.
            idac1=0x00000004,     ///<Service IDAC1 data requests.
            i2s0Tx=0x00000005,     ///<Service I2S0 TX data requests.
            epca0Control=0x00000006,     ///<Service EPCA0 control data requests.
            dma0t0Rise=0x00000007,     ///<Service DMAXT0 (PB1.10) rising edge data requests.
            dma0t0Fall=0x00000008,     ///<Service DMAXT0 (PB1.10) falling edge data requests.
            dma0t1Rise=0x00000009,     ///<Service DMAXT1 (PB1.11) rising edge data requests.
            dma0t1Fall=0x0000000a,     ///<Service DMAXT1 (PB1.11) falling edge data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,Ch2selVal> ch2sel{}; 
        namespace Ch2selValC{
            constexpr Register::FieldValue<decltype(ch2sel)::Type,Ch2selVal::spi0Tx> spi0Tx{};
            constexpr Register::FieldValue<decltype(ch2sel)::Type,Ch2selVal::usart0Tx> usart0Tx{};
            constexpr Register::FieldValue<decltype(ch2sel)::Type,Ch2selVal::saradc0> saradc0{};
            constexpr Register::FieldValue<decltype(ch2sel)::Type,Ch2selVal::idac1> idac1{};
            constexpr Register::FieldValue<decltype(ch2sel)::Type,Ch2selVal::i2s0Tx> i2s0Tx{};
            constexpr Register::FieldValue<decltype(ch2sel)::Type,Ch2selVal::epca0Control> epca0Control{};
            constexpr Register::FieldValue<decltype(ch2sel)::Type,Ch2selVal::dma0t0Rise> dma0t0Rise{};
            constexpr Register::FieldValue<decltype(ch2sel)::Type,Ch2selVal::dma0t0Fall> dma0t0Fall{};
            constexpr Register::FieldValue<decltype(ch2sel)::Type,Ch2selVal::dma0t1Rise> dma0t1Rise{};
            constexpr Register::FieldValue<decltype(ch2sel)::Type,Ch2selVal::dma0t1Fall> dma0t1Fall{};
        }
        ///DMA Channel 3 Peripheral Select. 
        enum class Ch3selVal {
            saradc1=0x00000001,     ///<Service SARADC1 data requests.
            idac0=0x00000002,     ///<Service IDAC0 data requests.
            i2s0Tx=0x00000003,     ///<Service I2S0 TX data requests.
            epca0Capture=0x00000004,     ///<Service EPCA0 capture data requests.
            dma0t0Rise=0x00000005,     ///<Service DMAXT0 (PB1.10) rising edge data requests.
            dma0t0Fall=0x00000006,     ///<Service DMAXT0 (PB1.10) falling edge data requests.
            dma0t1Rise=0x00000007,     ///<Service DMAXT1 (PB1.11) rising edge data requests.
            dma0t1Fall=0x00000008,     ///<Service DMAXT1 (PB1.11) falling edge data requests.
            timer1h=0x00000009,     ///<Service TIMER1H overflow data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,Ch3selVal> ch3sel{}; 
        namespace Ch3selValC{
            constexpr Register::FieldValue<decltype(ch3sel)::Type,Ch3selVal::saradc1> saradc1{};
            constexpr Register::FieldValue<decltype(ch3sel)::Type,Ch3selVal::idac0> idac0{};
            constexpr Register::FieldValue<decltype(ch3sel)::Type,Ch3selVal::i2s0Tx> i2s0Tx{};
            constexpr Register::FieldValue<decltype(ch3sel)::Type,Ch3selVal::epca0Capture> epca0Capture{};
            constexpr Register::FieldValue<decltype(ch3sel)::Type,Ch3selVal::dma0t0Rise> dma0t0Rise{};
            constexpr Register::FieldValue<decltype(ch3sel)::Type,Ch3selVal::dma0t0Fall> dma0t0Fall{};
            constexpr Register::FieldValue<decltype(ch3sel)::Type,Ch3selVal::dma0t1Rise> dma0t1Rise{};
            constexpr Register::FieldValue<decltype(ch3sel)::Type,Ch3selVal::dma0t1Fall> dma0t1Fall{};
            constexpr Register::FieldValue<decltype(ch3sel)::Type,Ch3selVal::timer1h> timer1h{};
        }
        ///DMA Channel 4 Peripheral Select. 
        enum class Ch4selVal {
            spi1Tx=0x00000001,     ///<Service SPI1 TX data requests.
            usart0Tx=0x00000002,     ///<Service USART0 TX data requests.
            saradc0=0x00000003,     ///<Service SARADC0 data requests.
            i2s0Rx=0x00000004,     ///<Service I2S0 RX data requests.
            epca0Capture=0x00000005,     ///<Service EPCA0 capture data requests.
            dma0t0Rise=0x00000006,     ///<Service DMAXT0 (PB1.10) rising edge data requests.
            dma0t0Fall=0x00000007,     ///<Service DMAXT0 (PB1.10) falling edge data requests.
            dma0t1Rise=0x00000008,     ///<Service DMAXT1 (PB1.11) rising edge data requests.
            dma0t1Fall=0x00000009,     ///<Service DMAXT1 (PB1.11) falling edge data requests.
            timer0h=0x0000000a,     ///<Service TIMER0H overflow data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,Ch4selVal> ch4sel{}; 
        namespace Ch4selValC{
            constexpr Register::FieldValue<decltype(ch4sel)::Type,Ch4selVal::spi1Tx> spi1Tx{};
            constexpr Register::FieldValue<decltype(ch4sel)::Type,Ch4selVal::usart0Tx> usart0Tx{};
            constexpr Register::FieldValue<decltype(ch4sel)::Type,Ch4selVal::saradc0> saradc0{};
            constexpr Register::FieldValue<decltype(ch4sel)::Type,Ch4selVal::i2s0Rx> i2s0Rx{};
            constexpr Register::FieldValue<decltype(ch4sel)::Type,Ch4selVal::epca0Capture> epca0Capture{};
            constexpr Register::FieldValue<decltype(ch4sel)::Type,Ch4selVal::dma0t0Rise> dma0t0Rise{};
            constexpr Register::FieldValue<decltype(ch4sel)::Type,Ch4selVal::dma0t0Fall> dma0t0Fall{};
            constexpr Register::FieldValue<decltype(ch4sel)::Type,Ch4selVal::dma0t1Rise> dma0t1Rise{};
            constexpr Register::FieldValue<decltype(ch4sel)::Type,Ch4selVal::dma0t1Fall> dma0t1Fall{};
            constexpr Register::FieldValue<decltype(ch4sel)::Type,Ch4selVal::timer0h> timer0h{};
        }
        ///DMA Channel 5 Peripheral Select. 
        enum class Ch5selVal {
            aes0Tx=0x00000001,     ///<Service AES0 TX data requests.
            usart1Tx=0x00000002,     ///<Service USART1 TX data requests.
            saradc0=0x00000003,     ///<Service SARADC0 data requests.
            i2s0Rx=0x00000004,     ///<Service I2S0 RX data requests.
            dma0t0Rise=0x00000005,     ///<Service DMAXT0 (PB1.10) rising edge data requests.
            dma0t0Fall=0x00000006,     ///<Service DMAXT0 (PB1.10) falling edge data requests.
            dma0t1Rise=0x00000007,     ///<Service DMAXT1 (PB1.11) rising edge data requests.
            dma0t1Fall=0x00000008,     ///<Service DMAXT1 (PB1.11) falling edge data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,Ch5selVal> ch5sel{}; 
        namespace Ch5selValC{
            constexpr Register::FieldValue<decltype(ch5sel)::Type,Ch5selVal::aes0Tx> aes0Tx{};
            constexpr Register::FieldValue<decltype(ch5sel)::Type,Ch5selVal::usart1Tx> usart1Tx{};
            constexpr Register::FieldValue<decltype(ch5sel)::Type,Ch5selVal::saradc0> saradc0{};
            constexpr Register::FieldValue<decltype(ch5sel)::Type,Ch5selVal::i2s0Rx> i2s0Rx{};
            constexpr Register::FieldValue<decltype(ch5sel)::Type,Ch5selVal::dma0t0Rise> dma0t0Rise{};
            constexpr Register::FieldValue<decltype(ch5sel)::Type,Ch5selVal::dma0t0Fall> dma0t0Fall{};
            constexpr Register::FieldValue<decltype(ch5sel)::Type,Ch5selVal::dma0t1Rise> dma0t1Rise{};
            constexpr Register::FieldValue<decltype(ch5sel)::Type,Ch5selVal::dma0t1Fall> dma0t1Fall{};
        }
        ///DMA Channel 6 Peripheral Select. 
        enum class Ch6selVal {
            aes0Rx=0x00000001,     ///<Service AES0 RX data requests.
            usart0Rx=0x00000002,     ///<Service USART0 RX data requests.
            i2c0Rx=0x00000003,     ///<Service I2C0 RX data requests.
            idac0=0x00000004,     ///<Service IDAC0 data requests.
            dma0t0Rise=0x00000005,     ///<Service DMAXT0 (PB1.10) rising edge data requests.
            dma0t0Fall=0x00000006,     ///<Service DMAXT0 (PB1.10) falling edge data requests.
            dma0t1Rise=0x00000007,     ///<Service DMAXT1 (PB1.11) rising edge data requests.
            dma0t1Fall=0x00000008,     ///<Service DMAXT1 (PB1.11) falling edge data requests.
            timer0h=0x00000009,     ///<Service TIMER0H overflow data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,Ch6selVal> ch6sel{}; 
        namespace Ch6selValC{
            constexpr Register::FieldValue<decltype(ch6sel)::Type,Ch6selVal::aes0Rx> aes0Rx{};
            constexpr Register::FieldValue<decltype(ch6sel)::Type,Ch6selVal::usart0Rx> usart0Rx{};
            constexpr Register::FieldValue<decltype(ch6sel)::Type,Ch6selVal::i2c0Rx> i2c0Rx{};
            constexpr Register::FieldValue<decltype(ch6sel)::Type,Ch6selVal::idac0> idac0{};
            constexpr Register::FieldValue<decltype(ch6sel)::Type,Ch6selVal::dma0t0Rise> dma0t0Rise{};
            constexpr Register::FieldValue<decltype(ch6sel)::Type,Ch6selVal::dma0t0Fall> dma0t0Fall{};
            constexpr Register::FieldValue<decltype(ch6sel)::Type,Ch6selVal::dma0t1Rise> dma0t1Rise{};
            constexpr Register::FieldValue<decltype(ch6sel)::Type,Ch6selVal::dma0t1Fall> dma0t1Fall{};
            constexpr Register::FieldValue<decltype(ch6sel)::Type,Ch6selVal::timer0h> timer0h{};
        }
        ///DMA Channel 7 Peripheral Select. 
        enum class Ch7selVal {
            aes0Xor=0x00000001,     ///<Service AES0 XOR data requests.
            spi1Tx=0x00000002,     ///<Service SPI1 TX data requests.
            usart0Tx=0x00000003,     ///<Service USART0 TX data requests.
            dma0t0Rise=0x00000004,     ///<Service DMAXT0 (PB1.10) rising edge data requests.
            dma0t0Fall=0x00000005,     ///<Service DMAXT0 (PB1.10) falling edge data requests.
            dma0t1Rise=0x00000006,     ///<Service DMAXT1 (PB1.11) rising edge data requests.
            dma0t1Fall=0x00000007,     ///<Service DMAXT1 (PB1.11) falling edge data requests.
            timer0l=0x00000008,     ///<Service TIMER0L overflow data requests.
            timer1l=0x00000009,     ///<Service TIMER1L overflow data requests.
            timer1h=0x0000000a,     ///<Service TIMER1H overflow data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,Ch7selVal> ch7sel{}; 
        namespace Ch7selValC{
            constexpr Register::FieldValue<decltype(ch7sel)::Type,Ch7selVal::aes0Xor> aes0Xor{};
            constexpr Register::FieldValue<decltype(ch7sel)::Type,Ch7selVal::spi1Tx> spi1Tx{};
            constexpr Register::FieldValue<decltype(ch7sel)::Type,Ch7selVal::usart0Tx> usart0Tx{};
            constexpr Register::FieldValue<decltype(ch7sel)::Type,Ch7selVal::dma0t0Rise> dma0t0Rise{};
            constexpr Register::FieldValue<decltype(ch7sel)::Type,Ch7selVal::dma0t0Fall> dma0t0Fall{};
            constexpr Register::FieldValue<decltype(ch7sel)::Type,Ch7selVal::dma0t1Rise> dma0t1Rise{};
            constexpr Register::FieldValue<decltype(ch7sel)::Type,Ch7selVal::dma0t1Fall> dma0t1Fall{};
            constexpr Register::FieldValue<decltype(ch7sel)::Type,Ch7selVal::timer0l> timer0l{};
            constexpr Register::FieldValue<decltype(ch7sel)::Type,Ch7selVal::timer1l> timer1l{};
            constexpr Register::FieldValue<decltype(ch7sel)::Type,Ch7selVal::timer1h> timer1h{};
        }
    }
    namespace Nonedmaxbar1{    ///<Channel 8-15 Trigger Select
        using Addr = Register::Address<0x40037010,0x00000000,0,unsigned>;
        ///DMA Channel 8 Peripheral Select. 
        enum class Ch8selVal {
            usart1Rx=0x00000001,     ///<Service USART1 RX data requests.
            spi1Rx=0x00000002,     ///<Service SPI1 RX data requests.
            usart0Rx=0x00000003,     ///<Service USART0 RX data requests.
            epca0Capture=0x00000004,     ///<Service EPCA0 capture data requests.
            dma0t0Rise=0x00000005,     ///<Service DMAXT0 (PB1.10) rising edge data requests.
            dma0t0Fall=0x00000006,     ///<Service DMAXT0 (PB1.10) falling edge data requests.
            dma0t1Rise=0x00000007,     ///<Service DMAXT1 (PB1.11) rising edge data requests.
            dma0t1Fall=0x00000008,     ///<Service DMAXT1 (PB1.11) falling edge data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,Ch8selVal> ch8sel{}; 
        namespace Ch8selValC{
            constexpr Register::FieldValue<decltype(ch8sel)::Type,Ch8selVal::usart1Rx> usart1Rx{};
            constexpr Register::FieldValue<decltype(ch8sel)::Type,Ch8selVal::spi1Rx> spi1Rx{};
            constexpr Register::FieldValue<decltype(ch8sel)::Type,Ch8selVal::usart0Rx> usart0Rx{};
            constexpr Register::FieldValue<decltype(ch8sel)::Type,Ch8selVal::epca0Capture> epca0Capture{};
            constexpr Register::FieldValue<decltype(ch8sel)::Type,Ch8selVal::dma0t0Rise> dma0t0Rise{};
            constexpr Register::FieldValue<decltype(ch8sel)::Type,Ch8selVal::dma0t0Fall> dma0t0Fall{};
            constexpr Register::FieldValue<decltype(ch8sel)::Type,Ch8selVal::dma0t1Rise> dma0t1Rise{};
            constexpr Register::FieldValue<decltype(ch8sel)::Type,Ch8selVal::dma0t1Fall> dma0t1Fall{};
        }
        ///DMA Channel 9 Peripheral Select. 
        enum class Ch9selVal {
            usart1Tx=0x00000001,     ///<Service USART1 TX data requests.
            i2c0Tx=0x00000002,     ///<Service I2C0 TX data requests.
            epca0Capture=0x00000003,     ///<Service EPCA0 capture data requests.
            dma0t0Rise=0x00000004,     ///<Service DMAXT0 (PB1.10) rising edge data requests.
            dma0t0Fall=0x00000005,     ///<Service DMAXT0 (PB1.10) falling edge data requests.
            dma0t1Rise=0x00000006,     ///<Service DMAXT1 (PB1.11) rising edge data requests.
            dma0t1Fall=0x00000007,     ///<Service DMAXT1 (PB1.11) falling edge data requests.
            timer0h=0x00000008,     ///<Service TIMER0H overflow data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,Ch9selVal> ch9sel{}; 
        namespace Ch9selValC{
            constexpr Register::FieldValue<decltype(ch9sel)::Type,Ch9selVal::usart1Tx> usart1Tx{};
            constexpr Register::FieldValue<decltype(ch9sel)::Type,Ch9selVal::i2c0Tx> i2c0Tx{};
            constexpr Register::FieldValue<decltype(ch9sel)::Type,Ch9selVal::epca0Capture> epca0Capture{};
            constexpr Register::FieldValue<decltype(ch9sel)::Type,Ch9selVal::dma0t0Rise> dma0t0Rise{};
            constexpr Register::FieldValue<decltype(ch9sel)::Type,Ch9selVal::dma0t0Fall> dma0t0Fall{};
            constexpr Register::FieldValue<decltype(ch9sel)::Type,Ch9selVal::dma0t1Rise> dma0t1Rise{};
            constexpr Register::FieldValue<decltype(ch9sel)::Type,Ch9selVal::dma0t1Fall> dma0t1Fall{};
            constexpr Register::FieldValue<decltype(ch9sel)::Type,Ch9selVal::timer0h> timer0h{};
        }
        ///DMA Channel 10 Peripheral Select. 
        enum class Ch10selVal {
            aes0Tx=0x00000001,     ///<Service AES0 TX data requests.
            saradc1=0x00000002,     ///<Service SARADC1 data requests.
            i2s0Rx=0x00000003,     ///<Service I2S0 RX data requests.
            dma0t0Rise=0x00000004,     ///<Service DMAXT0 (PB1.10) rising edge data requests.
            dma0t0Fall=0x00000005,     ///<Service DMAXT0 (PB1.10) falling edge data requests.
            dma0t1Rise=0x00000006,     ///<Service DMAXT1 (PB1.11) rising edge data requests.
            dma0t1Fall=0x00000007,     ///<Service DMAXT1 (PB1.11) falling edge data requests.
            timer1h=0x00000008,     ///<Service TIMER1H overflow data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,Ch10selVal> ch10sel{}; 
        namespace Ch10selValC{
            constexpr Register::FieldValue<decltype(ch10sel)::Type,Ch10selVal::aes0Tx> aes0Tx{};
            constexpr Register::FieldValue<decltype(ch10sel)::Type,Ch10selVal::saradc1> saradc1{};
            constexpr Register::FieldValue<decltype(ch10sel)::Type,Ch10selVal::i2s0Rx> i2s0Rx{};
            constexpr Register::FieldValue<decltype(ch10sel)::Type,Ch10selVal::dma0t0Rise> dma0t0Rise{};
            constexpr Register::FieldValue<decltype(ch10sel)::Type,Ch10selVal::dma0t0Fall> dma0t0Fall{};
            constexpr Register::FieldValue<decltype(ch10sel)::Type,Ch10selVal::dma0t1Rise> dma0t1Rise{};
            constexpr Register::FieldValue<decltype(ch10sel)::Type,Ch10selVal::dma0t1Fall> dma0t1Fall{};
            constexpr Register::FieldValue<decltype(ch10sel)::Type,Ch10selVal::timer1h> timer1h{};
        }
        ///DMA Channel 11 Peripheral Select. 
        enum class Ch11selVal {
            aes0Rx=0x00000001,     ///<Service AES0 RX data requests.
            usart1Rx=0x00000002,     ///<Service USART1 RX data requests.
            usart0Rx=0x00000003,     ///<Service USART0 RX data requests.
            i2c0Rx=0x00000004,     ///<Service I2C0 RX data requests.
            i2s0Rx=0x00000005,     ///<Service I2S0 RX data requests.
            dma0t0Rise=0x00000006,     ///<Service DMAXT0 (PB1.10) rising edge data requests.
            dma0t0Fall=0x00000007,     ///<Service DMAXT0 (PB1.10) falling edge data requests.
            dma0t1Rise=0x00000008,     ///<Service DMAXT1 (PB1.11) rising edge data requests.
            dma0t1Fall=0x00000009,     ///<Service DMAXT1 (PB1.11) falling edge data requests.
            timer0h=0x0000000a,     ///<Service TIMER0H overflow data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,Ch11selVal> ch11sel{}; 
        namespace Ch11selValC{
            constexpr Register::FieldValue<decltype(ch11sel)::Type,Ch11selVal::aes0Rx> aes0Rx{};
            constexpr Register::FieldValue<decltype(ch11sel)::Type,Ch11selVal::usart1Rx> usart1Rx{};
            constexpr Register::FieldValue<decltype(ch11sel)::Type,Ch11selVal::usart0Rx> usart0Rx{};
            constexpr Register::FieldValue<decltype(ch11sel)::Type,Ch11selVal::i2c0Rx> i2c0Rx{};
            constexpr Register::FieldValue<decltype(ch11sel)::Type,Ch11selVal::i2s0Rx> i2s0Rx{};
            constexpr Register::FieldValue<decltype(ch11sel)::Type,Ch11selVal::dma0t0Rise> dma0t0Rise{};
            constexpr Register::FieldValue<decltype(ch11sel)::Type,Ch11selVal::dma0t0Fall> dma0t0Fall{};
            constexpr Register::FieldValue<decltype(ch11sel)::Type,Ch11selVal::dma0t1Rise> dma0t1Rise{};
            constexpr Register::FieldValue<decltype(ch11sel)::Type,Ch11selVal::dma0t1Fall> dma0t1Fall{};
            constexpr Register::FieldValue<decltype(ch11sel)::Type,Ch11selVal::timer0h> timer0h{};
        }
        ///DMA Channel 12 Peripheral Select. 
        enum class Ch12selVal {
            aes0Xor=0x00000001,     ///<Service AES0 XOR data requests.
            usart1Tx=0x00000002,     ///<Service USART1 TX data requests.
            spi1Tx=0x00000003,     ///<Service SPI1 TX data requests.
            idac1=0x00000004,     ///<Service IDAC1 data requests.
            i2s0Tx=0x00000005,     ///<Service I2S0 TX data requests.
            dma0t0Rise=0x00000006,     ///<Service DMAXT0 (PB1.10) rising edge data requests.
            dma0t0Fall=0x00000007,     ///<Service DMAXT0 (PB1.10) falling edge data requests.
            dma0t1Rise=0x00000008,     ///<Service DMAXT1 (PB1.11) rising edge data requests.
            dma0t1Fall=0x00000009,     ///<Service DMAXT1 (PB1.11) falling edge data requests.
            timer0l=0x0000000a,     ///<Service TIMER0L overflow data requests.
            timer1l=0x0000000b,     ///<Service TIMER1L overflow data requests.
            timer1h=0x0000000c,     ///<Service TIMER1H overflow data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,Ch12selVal> ch12sel{}; 
        namespace Ch12selValC{
            constexpr Register::FieldValue<decltype(ch12sel)::Type,Ch12selVal::aes0Xor> aes0Xor{};
            constexpr Register::FieldValue<decltype(ch12sel)::Type,Ch12selVal::usart1Tx> usart1Tx{};
            constexpr Register::FieldValue<decltype(ch12sel)::Type,Ch12selVal::spi1Tx> spi1Tx{};
            constexpr Register::FieldValue<decltype(ch12sel)::Type,Ch12selVal::idac1> idac1{};
            constexpr Register::FieldValue<decltype(ch12sel)::Type,Ch12selVal::i2s0Tx> i2s0Tx{};
            constexpr Register::FieldValue<decltype(ch12sel)::Type,Ch12selVal::dma0t0Rise> dma0t0Rise{};
            constexpr Register::FieldValue<decltype(ch12sel)::Type,Ch12selVal::dma0t0Fall> dma0t0Fall{};
            constexpr Register::FieldValue<decltype(ch12sel)::Type,Ch12selVal::dma0t1Rise> dma0t1Rise{};
            constexpr Register::FieldValue<decltype(ch12sel)::Type,Ch12selVal::dma0t1Fall> dma0t1Fall{};
            constexpr Register::FieldValue<decltype(ch12sel)::Type,Ch12selVal::timer0l> timer0l{};
            constexpr Register::FieldValue<decltype(ch12sel)::Type,Ch12selVal::timer1l> timer1l{};
            constexpr Register::FieldValue<decltype(ch12sel)::Type,Ch12selVal::timer1h> timer1h{};
        }
        ///DMA Channel 13 Peripheral Select. 
        enum class Ch13selVal {
            spi0Rx=0x00000001,     ///<Service SPI0 RX data requests.
            usart0Rx=0x00000002,     ///<Service USART0 RX data requests.
            idac1=0x00000003,     ///<Service IDAC1 data requests.
            i2s0Tx=0x00000004,     ///<Service I2S0 TX data requests.
            dma0t0Rise=0x00000005,     ///<Service DMAXT0 (PB1.10) rising edge data requests.
            dma0t0Fall=0x00000006,     ///<Service DMAXT0 (PB1.10) falling edge data requests.
            dma0t1Rise=0x00000007,     ///<Service DMAXT1 (PB1.11) rising edge data requests.
            dma0t1Fall=0x00000008,     ///<Service DMAXT1 (PB1.11) falling edge data requests.
            timer0h=0x00000009,     ///<Service TIMER0H overflow data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,Ch13selVal> ch13sel{}; 
        namespace Ch13selValC{
            constexpr Register::FieldValue<decltype(ch13sel)::Type,Ch13selVal::spi0Rx> spi0Rx{};
            constexpr Register::FieldValue<decltype(ch13sel)::Type,Ch13selVal::usart0Rx> usart0Rx{};
            constexpr Register::FieldValue<decltype(ch13sel)::Type,Ch13selVal::idac1> idac1{};
            constexpr Register::FieldValue<decltype(ch13sel)::Type,Ch13selVal::i2s0Tx> i2s0Tx{};
            constexpr Register::FieldValue<decltype(ch13sel)::Type,Ch13selVal::dma0t0Rise> dma0t0Rise{};
            constexpr Register::FieldValue<decltype(ch13sel)::Type,Ch13selVal::dma0t0Fall> dma0t0Fall{};
            constexpr Register::FieldValue<decltype(ch13sel)::Type,Ch13selVal::dma0t1Rise> dma0t1Rise{};
            constexpr Register::FieldValue<decltype(ch13sel)::Type,Ch13selVal::dma0t1Fall> dma0t1Fall{};
            constexpr Register::FieldValue<decltype(ch13sel)::Type,Ch13selVal::timer0h> timer0h{};
        }
        ///DMA Channel 14 Peripheral Select. 
        enum class Ch14selVal {
            spi0Tx=0x00000001,     ///<Service SPI0 TX data requests.
            usart0Tx=0x00000002,     ///<Service USART0 TX data requests.
            idac0=0x00000003,     ///<Service IDAC0 data requests.
            epca0Control=0x00000004,     ///<Service EPCA0 control data requests.
            dma0t0Rise=0x00000005,     ///<Service DMAXT0 (PB1.10) rising edge data requests.
            dma0t0Fall=0x00000006,     ///<Service DMAXT0 (PB1.10) falling edge data requests.
            dma0t1Rise=0x00000007,     ///<Service DMAXT1 (PB1.11) rising edge data requests.
            dma0t1Fall=0x00000008,     ///<Service DMAXT1 (PB1.11) falling edge data requests.
            timer0l=0x00000009,     ///<Service TIMER0L overflow data requests.
            timer1l=0x0000000a,     ///<Service TIMER1L overflow data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,Ch14selVal> ch14sel{}; 
        namespace Ch14selValC{
            constexpr Register::FieldValue<decltype(ch14sel)::Type,Ch14selVal::spi0Tx> spi0Tx{};
            constexpr Register::FieldValue<decltype(ch14sel)::Type,Ch14selVal::usart0Tx> usart0Tx{};
            constexpr Register::FieldValue<decltype(ch14sel)::Type,Ch14selVal::idac0> idac0{};
            constexpr Register::FieldValue<decltype(ch14sel)::Type,Ch14selVal::epca0Control> epca0Control{};
            constexpr Register::FieldValue<decltype(ch14sel)::Type,Ch14selVal::dma0t0Rise> dma0t0Rise{};
            constexpr Register::FieldValue<decltype(ch14sel)::Type,Ch14selVal::dma0t0Fall> dma0t0Fall{};
            constexpr Register::FieldValue<decltype(ch14sel)::Type,Ch14selVal::dma0t1Rise> dma0t1Rise{};
            constexpr Register::FieldValue<decltype(ch14sel)::Type,Ch14selVal::dma0t1Fall> dma0t1Fall{};
            constexpr Register::FieldValue<decltype(ch14sel)::Type,Ch14selVal::timer0l> timer0l{};
            constexpr Register::FieldValue<decltype(ch14sel)::Type,Ch14selVal::timer1l> timer1l{};
        }
        ///DMA Channel 15 Peripheral Select. 
        enum class Ch15selVal {
            saradc1=0x00000001,     ///<Service SARADC1 data requests.
            idac0=0x00000002,     ///<Service IDAC0 data requests.
            epca0Control=0x00000003,     ///<Service EPCA0 control data requests.
            dma0t0Rise=0x00000004,     ///<Service DMAXT0 (PB1.10) rising edge data requests.
            dma0t0Fall=0x00000005,     ///<Service DMAXT0 (PB1.10) falling edge data requests.
            dma0t1Rise=0x00000006,     ///<Service DMAXT1 (PB1.11) rising edge data requests.
            dma0t1Fall=0x00000007,     ///<Service DMAXT1 (PB1.11) falling edge data requests.
            timer0h=0x00000008,     ///<Service TIMER0H overflow data requests.
            timer1h=0x00000009,     ///<Service TIMER1H overflow data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,Ch15selVal> ch15sel{}; 
        namespace Ch15selValC{
            constexpr Register::FieldValue<decltype(ch15sel)::Type,Ch15selVal::saradc1> saradc1{};
            constexpr Register::FieldValue<decltype(ch15sel)::Type,Ch15selVal::idac0> idac0{};
            constexpr Register::FieldValue<decltype(ch15sel)::Type,Ch15selVal::epca0Control> epca0Control{};
            constexpr Register::FieldValue<decltype(ch15sel)::Type,Ch15selVal::dma0t0Rise> dma0t0Rise{};
            constexpr Register::FieldValue<decltype(ch15sel)::Type,Ch15selVal::dma0t0Fall> dma0t0Fall{};
            constexpr Register::FieldValue<decltype(ch15sel)::Type,Ch15selVal::dma0t1Rise> dma0t1Rise{};
            constexpr Register::FieldValue<decltype(ch15sel)::Type,Ch15selVal::dma0t1Fall> dma0t1Fall{};
            constexpr Register::FieldValue<decltype(ch15sel)::Type,Ch15selVal::timer0h> timer0h{};
            constexpr Register::FieldValue<decltype(ch15sel)::Type,Ch15selVal::timer1h> timer1h{};
        }
    }
}
