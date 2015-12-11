#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonedmaxbar0{    ///<Channel 0-7 Trigger Select
        using Addr = Register::Address<0x40037000,0x00000000,0,unsigned>;
        ///DMA Channel 0 Peripheral Select. 
        enum class Ch0selVal {
            dtm0A=0x00000000,     ///<Service DTM0 A data requests.
            spi0Tx=0x00000001,     ///<Service SPI0 TX data requests.
            aes0Tx=0x00000002,     ///<Service AES0 TX data requests.
            usart0Rx=0x00000003,     ///<Service USART0 RX data requests.
            i2c0Rx=0x00000004,     ///<Service I2C0 RX data requests.
            i2c0Tx=0x00000005,     ///<Service I2C0 TX data requests.
            epca0Capture=0x00000006,     ///<Service EPCA0 capture data requests.
            timer0l=0x00000007,     ///<Service TIMER0L overflow data requests.
            timer0h=0x00000008,     ///<Service TIMER0H overflow data requests.
            dma0t0Rise=0x00000009,     ///<Service DMA0T0 rising edge data requests.
            dma0t0Fall=0x0000000a,     ///<Service DMA0T0 falling edge data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,Ch0selVal> ch0sel{}; 
        namespace Ch0selValC{
            constexpr Register::FieldValue<decltype(ch0sel)::Type,Ch0selVal::dtm0A> dtm0A{};
            constexpr Register::FieldValue<decltype(ch0sel)::Type,Ch0selVal::spi0Tx> spi0Tx{};
            constexpr Register::FieldValue<decltype(ch0sel)::Type,Ch0selVal::aes0Tx> aes0Tx{};
            constexpr Register::FieldValue<decltype(ch0sel)::Type,Ch0selVal::usart0Rx> usart0Rx{};
            constexpr Register::FieldValue<decltype(ch0sel)::Type,Ch0selVal::i2c0Rx> i2c0Rx{};
            constexpr Register::FieldValue<decltype(ch0sel)::Type,Ch0selVal::i2c0Tx> i2c0Tx{};
            constexpr Register::FieldValue<decltype(ch0sel)::Type,Ch0selVal::epca0Capture> epca0Capture{};
            constexpr Register::FieldValue<decltype(ch0sel)::Type,Ch0selVal::timer0l> timer0l{};
            constexpr Register::FieldValue<decltype(ch0sel)::Type,Ch0selVal::timer0h> timer0h{};
            constexpr Register::FieldValue<decltype(ch0sel)::Type,Ch0selVal::dma0t0Rise> dma0t0Rise{};
            constexpr Register::FieldValue<decltype(ch0sel)::Type,Ch0selVal::dma0t0Fall> dma0t0Fall{};
        }
        ///DMA Channel 1 Peripheral Select. 
        enum class Ch1selVal {
            dtm0B=0x00000000,     ///<Service DTM0 B data requests.
            spi0Rx=0x00000001,     ///<Service SPI0 RX data requests.
            aes0Rx=0x00000002,     ///<Service AES0 RX data requests.
            usart0Tx=0x00000003,     ///<Service USART0 TX data requests.
            saradc0=0x00000004,     ///<Service SARADC0 data requests.
            epca0Capture=0x00000005,     ///<Service EPCA0 capture data requests.
            epca0Control=0x00000006,     ///<Service EPCA0 control data requests.
            timer1l=0x00000007,     ///<Service TIMER1L overflow data requests.
            timer1h=0x00000008,     ///<Service TIMER1H overflow data requests.
            dma0t1Rise=0x00000009,     ///<Service DMA0T1 rising edge data requests.
            dma0t1Fall=0x0000000a,     ///<Service DMA0T1 falling edge data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,Ch1selVal> ch1sel{}; 
        namespace Ch1selValC{
            constexpr Register::FieldValue<decltype(ch1sel)::Type,Ch1selVal::dtm0B> dtm0B{};
            constexpr Register::FieldValue<decltype(ch1sel)::Type,Ch1selVal::spi0Rx> spi0Rx{};
            constexpr Register::FieldValue<decltype(ch1sel)::Type,Ch1selVal::aes0Rx> aes0Rx{};
            constexpr Register::FieldValue<decltype(ch1sel)::Type,Ch1selVal::usart0Tx> usart0Tx{};
            constexpr Register::FieldValue<decltype(ch1sel)::Type,Ch1selVal::saradc0> saradc0{};
            constexpr Register::FieldValue<decltype(ch1sel)::Type,Ch1selVal::epca0Capture> epca0Capture{};
            constexpr Register::FieldValue<decltype(ch1sel)::Type,Ch1selVal::epca0Control> epca0Control{};
            constexpr Register::FieldValue<decltype(ch1sel)::Type,Ch1selVal::timer1l> timer1l{};
            constexpr Register::FieldValue<decltype(ch1sel)::Type,Ch1selVal::timer1h> timer1h{};
            constexpr Register::FieldValue<decltype(ch1sel)::Type,Ch1selVal::dma0t1Rise> dma0t1Rise{};
            constexpr Register::FieldValue<decltype(ch1sel)::Type,Ch1selVal::dma0t1Fall> dma0t1Fall{};
        }
        ///DMA Channel 2 Peripheral Select. 
        enum class Ch2selVal {
            dtm0C=0x00000000,     ///<Service DTM0 C data requests.
            dtm2A=0x00000001,     ///<Service DTM2 A data requests.
            encdec0Tx=0x00000002,     ///<Service ENCDEC0 TX data requests.
            aes0Xor=0x00000003,     ///<Service AES0 XOR data requests.
            spi1Tx=0x00000004,     ///<Service SPI1 TX data requests.
            usart0Rx=0x00000005,     ///<Service USART0 RX data requests.
            i2c0Rx=0x00000006,     ///<Service I2C0 RX data requests.
            idac0=0x00000007,     ///<Service IDAC0 data requests.
            timer0l=0x00000008,     ///<Service TIMER0L overflow data requests.
            timer0h=0x00000009,     ///<Service TIMER0H overflow data requests.
            dma0t0Rise=0x0000000a,     ///<Service DMA0T0 rising edge data requests.
            dma0t0Fall=0x0000000b,     ///<Service DMA0T0 falling edge data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,Ch2selVal> ch2sel{}; 
        namespace Ch2selValC{
            constexpr Register::FieldValue<decltype(ch2sel)::Type,Ch2selVal::dtm0C> dtm0C{};
            constexpr Register::FieldValue<decltype(ch2sel)::Type,Ch2selVal::dtm2A> dtm2A{};
            constexpr Register::FieldValue<decltype(ch2sel)::Type,Ch2selVal::encdec0Tx> encdec0Tx{};
            constexpr Register::FieldValue<decltype(ch2sel)::Type,Ch2selVal::aes0Xor> aes0Xor{};
            constexpr Register::FieldValue<decltype(ch2sel)::Type,Ch2selVal::spi1Tx> spi1Tx{};
            constexpr Register::FieldValue<decltype(ch2sel)::Type,Ch2selVal::usart0Rx> usart0Rx{};
            constexpr Register::FieldValue<decltype(ch2sel)::Type,Ch2selVal::i2c0Rx> i2c0Rx{};
            constexpr Register::FieldValue<decltype(ch2sel)::Type,Ch2selVal::idac0> idac0{};
            constexpr Register::FieldValue<decltype(ch2sel)::Type,Ch2selVal::timer0l> timer0l{};
            constexpr Register::FieldValue<decltype(ch2sel)::Type,Ch2selVal::timer0h> timer0h{};
            constexpr Register::FieldValue<decltype(ch2sel)::Type,Ch2selVal::dma0t0Rise> dma0t0Rise{};
            constexpr Register::FieldValue<decltype(ch2sel)::Type,Ch2selVal::dma0t0Fall> dma0t0Fall{};
        }
        ///DMA Channel 3 Peripheral Select. 
        enum class Ch3selVal {
            dtm0D=0x00000000,     ///<Service DTM0 D data requests.
            dtm2B=0x00000001,     ///<Service DTM2 B data requests.
            encdec0Rx=0x00000002,     ///<Service ENCDEC0 RX data requests.
            spi1Rx=0x00000003,     ///<Service SPI1 RX data requests.
            usart0Tx=0x00000004,     ///<Service USART0 TX data requests.
            i2c0Rx=0x00000005,     ///<Service I2C0 RX data requests.
            i2c0Tx=0x00000006,     ///<Service I2C0 TX data requests.
            timer1l=0x00000007,     ///<Service TIMER1L overflow data requests.
            timer1h=0x00000008,     ///<Service TIMER1H overflow data requests.
            dma0t1Rise=0x00000009,     ///<Service DMA0T1 rising edge data requests.
            dma0t1Fall=0x0000000a,     ///<Service DMA0T1 falling edge data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,Ch3selVal> ch3sel{}; 
        namespace Ch3selValC{
            constexpr Register::FieldValue<decltype(ch3sel)::Type,Ch3selVal::dtm0D> dtm0D{};
            constexpr Register::FieldValue<decltype(ch3sel)::Type,Ch3selVal::dtm2B> dtm2B{};
            constexpr Register::FieldValue<decltype(ch3sel)::Type,Ch3selVal::encdec0Rx> encdec0Rx{};
            constexpr Register::FieldValue<decltype(ch3sel)::Type,Ch3selVal::spi1Rx> spi1Rx{};
            constexpr Register::FieldValue<decltype(ch3sel)::Type,Ch3selVal::usart0Tx> usart0Tx{};
            constexpr Register::FieldValue<decltype(ch3sel)::Type,Ch3selVal::i2c0Rx> i2c0Rx{};
            constexpr Register::FieldValue<decltype(ch3sel)::Type,Ch3selVal::i2c0Tx> i2c0Tx{};
            constexpr Register::FieldValue<decltype(ch3sel)::Type,Ch3selVal::timer1l> timer1l{};
            constexpr Register::FieldValue<decltype(ch3sel)::Type,Ch3selVal::timer1h> timer1h{};
            constexpr Register::FieldValue<decltype(ch3sel)::Type,Ch3selVal::dma0t1Rise> dma0t1Rise{};
            constexpr Register::FieldValue<decltype(ch3sel)::Type,Ch3selVal::dma0t1Fall> dma0t1Fall{};
        }
        ///DMA Channel 4 Peripheral Select. 
        enum class Ch4selVal {
            dtm1A=0x00000000,     ///<Service DTM1 A data requests.
            dtm2C=0x00000001,     ///<Service DTM2 C data requests.
            spi0Tx=0x00000002,     ///<Service SPI1 TX data requests.
            aes0Tx=0x00000003,     ///<Service AES0 TX data requests.
            saradc0=0x00000004,     ///<Service SARADC0 data requests.
            epca0Capture=0x00000005,     ///<Service EPCA0 capture data requests.
            epca0Control=0x00000006,     ///<Service EPCA0 control data requests.
            timer0l=0x00000007,     ///<Service TIMER0L overflow data requests.
            timer0h=0x00000008,     ///<Service TIMER0H overflow data requests.
            dma0t0Rise=0x00000009,     ///<Service DMA0T0 rising edge data requests.
            dma0t0Fall=0x0000000a,     ///<Service DMA0T0 falling edge data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,Ch4selVal> ch4sel{}; 
        namespace Ch4selValC{
            constexpr Register::FieldValue<decltype(ch4sel)::Type,Ch4selVal::dtm1A> dtm1A{};
            constexpr Register::FieldValue<decltype(ch4sel)::Type,Ch4selVal::dtm2C> dtm2C{};
            constexpr Register::FieldValue<decltype(ch4sel)::Type,Ch4selVal::spi0Tx> spi0Tx{};
            constexpr Register::FieldValue<decltype(ch4sel)::Type,Ch4selVal::aes0Tx> aes0Tx{};
            constexpr Register::FieldValue<decltype(ch4sel)::Type,Ch4selVal::saradc0> saradc0{};
            constexpr Register::FieldValue<decltype(ch4sel)::Type,Ch4selVal::epca0Capture> epca0Capture{};
            constexpr Register::FieldValue<decltype(ch4sel)::Type,Ch4selVal::epca0Control> epca0Control{};
            constexpr Register::FieldValue<decltype(ch4sel)::Type,Ch4selVal::timer0l> timer0l{};
            constexpr Register::FieldValue<decltype(ch4sel)::Type,Ch4selVal::timer0h> timer0h{};
            constexpr Register::FieldValue<decltype(ch4sel)::Type,Ch4selVal::dma0t0Rise> dma0t0Rise{};
            constexpr Register::FieldValue<decltype(ch4sel)::Type,Ch4selVal::dma0t0Fall> dma0t0Fall{};
        }
        ///DMA Channel 5 Peripheral Select. 
        enum class Ch5selVal {
            dtm1B=0x00000000,     ///<Service DTM1 B data requests.
            dtm2D=0x00000001,     ///<Service DTM2 D data requests.
            spi0Rx=0x00000002,     ///<Service SPI0 RX data requests.
            aes0Rx=0x00000003,     ///<Service AES0 RX data requests.
            usart0Rx=0x00000004,     ///<Service USART0 RX data requests.
            i2c0Rx=0x00000005,     ///<Service I2C0 RX data requests.
            idac0=0x00000006,     ///<Service IDAC0 data requests.
            epca0Control=0x00000007,     ///<Service EPCA0 control data requests.
            timer1l=0x00000008,     ///<Service TIMER1L overflow data requests.
            timer1h=0x00000009,     ///<Service TIMER1H overflow data requests.
            dma0t1Rise=0x0000000a,     ///<Service DMA0T1 rising edge data requests.
            dma0t1Fall=0x0000000b,     ///<Service DMA0T1 falling edge data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,Ch5selVal> ch5sel{}; 
        namespace Ch5selValC{
            constexpr Register::FieldValue<decltype(ch5sel)::Type,Ch5selVal::dtm1B> dtm1B{};
            constexpr Register::FieldValue<decltype(ch5sel)::Type,Ch5selVal::dtm2D> dtm2D{};
            constexpr Register::FieldValue<decltype(ch5sel)::Type,Ch5selVal::spi0Rx> spi0Rx{};
            constexpr Register::FieldValue<decltype(ch5sel)::Type,Ch5selVal::aes0Rx> aes0Rx{};
            constexpr Register::FieldValue<decltype(ch5sel)::Type,Ch5selVal::usart0Rx> usart0Rx{};
            constexpr Register::FieldValue<decltype(ch5sel)::Type,Ch5selVal::i2c0Rx> i2c0Rx{};
            constexpr Register::FieldValue<decltype(ch5sel)::Type,Ch5selVal::idac0> idac0{};
            constexpr Register::FieldValue<decltype(ch5sel)::Type,Ch5selVal::epca0Control> epca0Control{};
            constexpr Register::FieldValue<decltype(ch5sel)::Type,Ch5selVal::timer1l> timer1l{};
            constexpr Register::FieldValue<decltype(ch5sel)::Type,Ch5selVal::timer1h> timer1h{};
            constexpr Register::FieldValue<decltype(ch5sel)::Type,Ch5selVal::dma0t1Rise> dma0t1Rise{};
            constexpr Register::FieldValue<decltype(ch5sel)::Type,Ch5selVal::dma0t1Fall> dma0t1Fall{};
        }
        ///DMA Channel 6 Peripheral Select. 
        enum class Ch6selVal {
            dtm1C=0x00000000,     ///<Service DTM1 C data requests.
            dtm2A=0x00000001,     ///<Service DTM2 A data requests.
            encdec0Tx=0x00000002,     ///<Service ENCDEC0 TX data requests.
            aes0Xor=0x00000003,     ///<Service AES0 XOR data requests.
            usart0Tx=0x00000004,     ///<Service USART0 TX data requests.
            i2c0Rx=0x00000005,     ///<Service I2C0 RX data requests.
            i2c0Tx=0x00000006,     ///<Service I2C0 TX data requests.
            saradc0=0x00000007,     ///<Service SARADC0 data requests.
            timer0l=0x00000008,     ///<Service TIMER0L overflow data requests.
            timer0h=0x00000009,     ///<Service TIMER0H overflow data requests.
            dma0t0Rise=0x0000000a,     ///<Service DMA0T0 rising edge data requests.
            dma0t0Fall=0x0000000b,     ///<Service DMA0T0 falling edge data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,Ch6selVal> ch6sel{}; 
        namespace Ch6selValC{
            constexpr Register::FieldValue<decltype(ch6sel)::Type,Ch6selVal::dtm1C> dtm1C{};
            constexpr Register::FieldValue<decltype(ch6sel)::Type,Ch6selVal::dtm2A> dtm2A{};
            constexpr Register::FieldValue<decltype(ch6sel)::Type,Ch6selVal::encdec0Tx> encdec0Tx{};
            constexpr Register::FieldValue<decltype(ch6sel)::Type,Ch6selVal::aes0Xor> aes0Xor{};
            constexpr Register::FieldValue<decltype(ch6sel)::Type,Ch6selVal::usart0Tx> usart0Tx{};
            constexpr Register::FieldValue<decltype(ch6sel)::Type,Ch6selVal::i2c0Rx> i2c0Rx{};
            constexpr Register::FieldValue<decltype(ch6sel)::Type,Ch6selVal::i2c0Tx> i2c0Tx{};
            constexpr Register::FieldValue<decltype(ch6sel)::Type,Ch6selVal::saradc0> saradc0{};
            constexpr Register::FieldValue<decltype(ch6sel)::Type,Ch6selVal::timer0l> timer0l{};
            constexpr Register::FieldValue<decltype(ch6sel)::Type,Ch6selVal::timer0h> timer0h{};
            constexpr Register::FieldValue<decltype(ch6sel)::Type,Ch6selVal::dma0t0Rise> dma0t0Rise{};
            constexpr Register::FieldValue<decltype(ch6sel)::Type,Ch6selVal::dma0t0Fall> dma0t0Fall{};
        }
        ///DMA Channel 7 Peripheral Select. 
        enum class Ch7selVal {
            dtm1D=0x00000000,     ///<Service DTM1 D data requests.
            dtm2B=0x00000001,     ///<Service DTM2 B data requests.
            encdec0Rx=0x00000002,     ///<Service ENCDEC0 RX data requests.
            spi1Tx=0x00000003,     ///<Service SPI1 TX data requests.
            usart0Rx=0x00000004,     ///<Service USART0 RX data requests.
            idac0=0x00000005,     ///<Service IDAC0 data requests.
            timer1l=0x00000006,     ///<Service TIMER1L overflow data requests.
            timer1h=0x00000007,     ///<Service TIMER1H overflow data requests.
            dma0t1Rise=0x00000008,     ///<Service DMA0T1 rising edge data requests.
            dma0t1Fall=0x00000009,     ///<Service DMA0T1 falling edge data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,Ch7selVal> ch7sel{}; 
        namespace Ch7selValC{
            constexpr Register::FieldValue<decltype(ch7sel)::Type,Ch7selVal::dtm1D> dtm1D{};
            constexpr Register::FieldValue<decltype(ch7sel)::Type,Ch7selVal::dtm2B> dtm2B{};
            constexpr Register::FieldValue<decltype(ch7sel)::Type,Ch7selVal::encdec0Rx> encdec0Rx{};
            constexpr Register::FieldValue<decltype(ch7sel)::Type,Ch7selVal::spi1Tx> spi1Tx{};
            constexpr Register::FieldValue<decltype(ch7sel)::Type,Ch7selVal::usart0Rx> usart0Rx{};
            constexpr Register::FieldValue<decltype(ch7sel)::Type,Ch7selVal::idac0> idac0{};
            constexpr Register::FieldValue<decltype(ch7sel)::Type,Ch7selVal::timer1l> timer1l{};
            constexpr Register::FieldValue<decltype(ch7sel)::Type,Ch7selVal::timer1h> timer1h{};
            constexpr Register::FieldValue<decltype(ch7sel)::Type,Ch7selVal::dma0t1Rise> dma0t1Rise{};
            constexpr Register::FieldValue<decltype(ch7sel)::Type,Ch7selVal::dma0t1Fall> dma0t1Fall{};
        }
    }
    namespace Nonedmaxbar1{    ///<Channel 8-15 Trigger Select
        using Addr = Register::Address<0x40037010,0xffffff00,0,unsigned>;
        ///DMA Channel 8 Peripheral Select. 
        enum class Ch8selVal {
            dtm2C=0x00000000,     ///<Service DTM2 C data requests.
            spi0Tx=0x00000001,     ///<Service SPI0 TX data requests.
            spi1Rx=0x00000002,     ///<Service SPI1 RX data requests.
            usart0Tx=0x00000003,     ///<Service USART0 TX data requests.
            i2c0Rx=0x00000004,     ///<Service I2C0 RX data requests.
            saradc0=0x00000005,     ///<Service SARADC0 data requests.
            epca0Capture=0x00000006,     ///<Service EPCA0 capture data requests.
            timer0l=0x00000007,     ///<Service TIMER0L overflow data requests.
            timer0h=0x00000008,     ///<Service TIMER0H overflow data requests.
            dma0t0Rise=0x00000009,     ///<Service DMA0T0 rising edge data requests.
            dma0t0Fall=0x0000000a,     ///<Service DMA0T0 falling edge data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,Ch8selVal> ch8sel{}; 
        namespace Ch8selValC{
            constexpr Register::FieldValue<decltype(ch8sel)::Type,Ch8selVal::dtm2C> dtm2C{};
            constexpr Register::FieldValue<decltype(ch8sel)::Type,Ch8selVal::spi0Tx> spi0Tx{};
            constexpr Register::FieldValue<decltype(ch8sel)::Type,Ch8selVal::spi1Rx> spi1Rx{};
            constexpr Register::FieldValue<decltype(ch8sel)::Type,Ch8selVal::usart0Tx> usart0Tx{};
            constexpr Register::FieldValue<decltype(ch8sel)::Type,Ch8selVal::i2c0Rx> i2c0Rx{};
            constexpr Register::FieldValue<decltype(ch8sel)::Type,Ch8selVal::saradc0> saradc0{};
            constexpr Register::FieldValue<decltype(ch8sel)::Type,Ch8selVal::epca0Capture> epca0Capture{};
            constexpr Register::FieldValue<decltype(ch8sel)::Type,Ch8selVal::timer0l> timer0l{};
            constexpr Register::FieldValue<decltype(ch8sel)::Type,Ch8selVal::timer0h> timer0h{};
            constexpr Register::FieldValue<decltype(ch8sel)::Type,Ch8selVal::dma0t0Rise> dma0t0Rise{};
            constexpr Register::FieldValue<decltype(ch8sel)::Type,Ch8selVal::dma0t0Fall> dma0t0Fall{};
        }
        ///DMA Channel 9 Peripheral Select. 
        enum class Ch9selVal {
            dtm2D=0x00000000,     ///<Service DTM2 D data requests.
            spi0Rx=0x00000001,     ///<Service SPI0 TX data requests.
            i2c0Rx=0x00000002,     ///<Service I2C0 RX data requests.
            i2c0Tx=0x00000003,     ///<Service I2C0 TX data requests.
            idac0=0x00000004,     ///<Service IDAC0 data requests.
            epca0Capture=0x00000005,     ///<Service EPCA0 capture data requests.
            epca0Control=0x00000006,     ///<Service EPCA0 control data requests.
            timer1l=0x00000007,     ///<Service TIMER1L overflow data requests.
            timer1h=0x00000008,     ///<Service TIMER1H overflow data requests.
            dma0t1Rise=0x00000009,     ///<Service DMA0T1 rising edge data requests.
            dma0t1Fall=0x0000000a,     ///<Service DMA0T1 falling edge data requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,Ch9selVal> ch9sel{}; 
        namespace Ch9selValC{
            constexpr Register::FieldValue<decltype(ch9sel)::Type,Ch9selVal::dtm2D> dtm2D{};
            constexpr Register::FieldValue<decltype(ch9sel)::Type,Ch9selVal::spi0Rx> spi0Rx{};
            constexpr Register::FieldValue<decltype(ch9sel)::Type,Ch9selVal::i2c0Rx> i2c0Rx{};
            constexpr Register::FieldValue<decltype(ch9sel)::Type,Ch9selVal::i2c0Tx> i2c0Tx{};
            constexpr Register::FieldValue<decltype(ch9sel)::Type,Ch9selVal::idac0> idac0{};
            constexpr Register::FieldValue<decltype(ch9sel)::Type,Ch9selVal::epca0Capture> epca0Capture{};
            constexpr Register::FieldValue<decltype(ch9sel)::Type,Ch9selVal::epca0Control> epca0Control{};
            constexpr Register::FieldValue<decltype(ch9sel)::Type,Ch9selVal::timer1l> timer1l{};
            constexpr Register::FieldValue<decltype(ch9sel)::Type,Ch9selVal::timer1h> timer1h{};
            constexpr Register::FieldValue<decltype(ch9sel)::Type,Ch9selVal::dma0t1Rise> dma0t1Rise{};
            constexpr Register::FieldValue<decltype(ch9sel)::Type,Ch9selVal::dma0t1Fall> dma0t1Fall{};
        }
    }
}
