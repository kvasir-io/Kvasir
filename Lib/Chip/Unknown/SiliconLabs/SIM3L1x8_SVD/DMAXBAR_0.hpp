#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonedmaxbar0{    ///<Channel 0-7 Trigger Select
        using Addr = Register::Address<0x40037000,0x00000000,0,unsigned>;
        ///DMA Channel 0 Peripheral Select. 
        enum class ch0selVal {
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
        namespace ch0selValC{
            constexpr MPL::Value<ch0selVal,ch0selVal::dtm0A> dtm0A{};
            constexpr MPL::Value<ch0selVal,ch0selVal::spi0Tx> spi0Tx{};
            constexpr MPL::Value<ch0selVal,ch0selVal::aes0Tx> aes0Tx{};
            constexpr MPL::Value<ch0selVal,ch0selVal::usart0Rx> usart0Rx{};
            constexpr MPL::Value<ch0selVal,ch0selVal::i2c0Rx> i2c0Rx{};
            constexpr MPL::Value<ch0selVal,ch0selVal::i2c0Tx> i2c0Tx{};
            constexpr MPL::Value<ch0selVal,ch0selVal::epca0Capture> epca0Capture{};
            constexpr MPL::Value<ch0selVal,ch0selVal::timer0l> timer0l{};
            constexpr MPL::Value<ch0selVal,ch0selVal::timer0h> timer0h{};
            constexpr MPL::Value<ch0selVal,ch0selVal::dma0t0Rise> dma0t0Rise{};
            constexpr MPL::Value<ch0selVal,ch0selVal::dma0t0Fall> dma0t0Fall{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,ch0selVal> ch0sel{}; 
        ///DMA Channel 1 Peripheral Select. 
        enum class ch1selVal {
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
        namespace ch1selValC{
            constexpr MPL::Value<ch1selVal,ch1selVal::dtm0B> dtm0B{};
            constexpr MPL::Value<ch1selVal,ch1selVal::spi0Rx> spi0Rx{};
            constexpr MPL::Value<ch1selVal,ch1selVal::aes0Rx> aes0Rx{};
            constexpr MPL::Value<ch1selVal,ch1selVal::usart0Tx> usart0Tx{};
            constexpr MPL::Value<ch1selVal,ch1selVal::saradc0> saradc0{};
            constexpr MPL::Value<ch1selVal,ch1selVal::epca0Capture> epca0Capture{};
            constexpr MPL::Value<ch1selVal,ch1selVal::epca0Control> epca0Control{};
            constexpr MPL::Value<ch1selVal,ch1selVal::timer1l> timer1l{};
            constexpr MPL::Value<ch1selVal,ch1selVal::timer1h> timer1h{};
            constexpr MPL::Value<ch1selVal,ch1selVal::dma0t1Rise> dma0t1Rise{};
            constexpr MPL::Value<ch1selVal,ch1selVal::dma0t1Fall> dma0t1Fall{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,ch1selVal> ch1sel{}; 
        ///DMA Channel 2 Peripheral Select. 
        enum class ch2selVal {
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
        namespace ch2selValC{
            constexpr MPL::Value<ch2selVal,ch2selVal::dtm0C> dtm0C{};
            constexpr MPL::Value<ch2selVal,ch2selVal::dtm2A> dtm2A{};
            constexpr MPL::Value<ch2selVal,ch2selVal::encdec0Tx> encdec0Tx{};
            constexpr MPL::Value<ch2selVal,ch2selVal::aes0Xor> aes0Xor{};
            constexpr MPL::Value<ch2selVal,ch2selVal::spi1Tx> spi1Tx{};
            constexpr MPL::Value<ch2selVal,ch2selVal::usart0Rx> usart0Rx{};
            constexpr MPL::Value<ch2selVal,ch2selVal::i2c0Rx> i2c0Rx{};
            constexpr MPL::Value<ch2selVal,ch2selVal::idac0> idac0{};
            constexpr MPL::Value<ch2selVal,ch2selVal::timer0l> timer0l{};
            constexpr MPL::Value<ch2selVal,ch2selVal::timer0h> timer0h{};
            constexpr MPL::Value<ch2selVal,ch2selVal::dma0t0Rise> dma0t0Rise{};
            constexpr MPL::Value<ch2selVal,ch2selVal::dma0t0Fall> dma0t0Fall{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,ch2selVal> ch2sel{}; 
        ///DMA Channel 3 Peripheral Select. 
        enum class ch3selVal {
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
        namespace ch3selValC{
            constexpr MPL::Value<ch3selVal,ch3selVal::dtm0D> dtm0D{};
            constexpr MPL::Value<ch3selVal,ch3selVal::dtm2B> dtm2B{};
            constexpr MPL::Value<ch3selVal,ch3selVal::encdec0Rx> encdec0Rx{};
            constexpr MPL::Value<ch3selVal,ch3selVal::spi1Rx> spi1Rx{};
            constexpr MPL::Value<ch3selVal,ch3selVal::usart0Tx> usart0Tx{};
            constexpr MPL::Value<ch3selVal,ch3selVal::i2c0Rx> i2c0Rx{};
            constexpr MPL::Value<ch3selVal,ch3selVal::i2c0Tx> i2c0Tx{};
            constexpr MPL::Value<ch3selVal,ch3selVal::timer1l> timer1l{};
            constexpr MPL::Value<ch3selVal,ch3selVal::timer1h> timer1h{};
            constexpr MPL::Value<ch3selVal,ch3selVal::dma0t1Rise> dma0t1Rise{};
            constexpr MPL::Value<ch3selVal,ch3selVal::dma0t1Fall> dma0t1Fall{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,ch3selVal> ch3sel{}; 
        ///DMA Channel 4 Peripheral Select. 
        enum class ch4selVal {
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
        namespace ch4selValC{
            constexpr MPL::Value<ch4selVal,ch4selVal::dtm1A> dtm1A{};
            constexpr MPL::Value<ch4selVal,ch4selVal::dtm2C> dtm2C{};
            constexpr MPL::Value<ch4selVal,ch4selVal::spi0Tx> spi0Tx{};
            constexpr MPL::Value<ch4selVal,ch4selVal::aes0Tx> aes0Tx{};
            constexpr MPL::Value<ch4selVal,ch4selVal::saradc0> saradc0{};
            constexpr MPL::Value<ch4selVal,ch4selVal::epca0Capture> epca0Capture{};
            constexpr MPL::Value<ch4selVal,ch4selVal::epca0Control> epca0Control{};
            constexpr MPL::Value<ch4selVal,ch4selVal::timer0l> timer0l{};
            constexpr MPL::Value<ch4selVal,ch4selVal::timer0h> timer0h{};
            constexpr MPL::Value<ch4selVal,ch4selVal::dma0t0Rise> dma0t0Rise{};
            constexpr MPL::Value<ch4selVal,ch4selVal::dma0t0Fall> dma0t0Fall{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,ch4selVal> ch4sel{}; 
        ///DMA Channel 5 Peripheral Select. 
        enum class ch5selVal {
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
        namespace ch5selValC{
            constexpr MPL::Value<ch5selVal,ch5selVal::dtm1B> dtm1B{};
            constexpr MPL::Value<ch5selVal,ch5selVal::dtm2D> dtm2D{};
            constexpr MPL::Value<ch5selVal,ch5selVal::spi0Rx> spi0Rx{};
            constexpr MPL::Value<ch5selVal,ch5selVal::aes0Rx> aes0Rx{};
            constexpr MPL::Value<ch5selVal,ch5selVal::usart0Rx> usart0Rx{};
            constexpr MPL::Value<ch5selVal,ch5selVal::i2c0Rx> i2c0Rx{};
            constexpr MPL::Value<ch5selVal,ch5selVal::idac0> idac0{};
            constexpr MPL::Value<ch5selVal,ch5selVal::epca0Control> epca0Control{};
            constexpr MPL::Value<ch5selVal,ch5selVal::timer1l> timer1l{};
            constexpr MPL::Value<ch5selVal,ch5selVal::timer1h> timer1h{};
            constexpr MPL::Value<ch5selVal,ch5selVal::dma0t1Rise> dma0t1Rise{};
            constexpr MPL::Value<ch5selVal,ch5selVal::dma0t1Fall> dma0t1Fall{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,ch5selVal> ch5sel{}; 
        ///DMA Channel 6 Peripheral Select. 
        enum class ch6selVal {
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
        namespace ch6selValC{
            constexpr MPL::Value<ch6selVal,ch6selVal::dtm1C> dtm1C{};
            constexpr MPL::Value<ch6selVal,ch6selVal::dtm2A> dtm2A{};
            constexpr MPL::Value<ch6selVal,ch6selVal::encdec0Tx> encdec0Tx{};
            constexpr MPL::Value<ch6selVal,ch6selVal::aes0Xor> aes0Xor{};
            constexpr MPL::Value<ch6selVal,ch6selVal::usart0Tx> usart0Tx{};
            constexpr MPL::Value<ch6selVal,ch6selVal::i2c0Rx> i2c0Rx{};
            constexpr MPL::Value<ch6selVal,ch6selVal::i2c0Tx> i2c0Tx{};
            constexpr MPL::Value<ch6selVal,ch6selVal::saradc0> saradc0{};
            constexpr MPL::Value<ch6selVal,ch6selVal::timer0l> timer0l{};
            constexpr MPL::Value<ch6selVal,ch6selVal::timer0h> timer0h{};
            constexpr MPL::Value<ch6selVal,ch6selVal::dma0t0Rise> dma0t0Rise{};
            constexpr MPL::Value<ch6selVal,ch6selVal::dma0t0Fall> dma0t0Fall{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,ch6selVal> ch6sel{}; 
        ///DMA Channel 7 Peripheral Select. 
        enum class ch7selVal {
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
        namespace ch7selValC{
            constexpr MPL::Value<ch7selVal,ch7selVal::dtm1D> dtm1D{};
            constexpr MPL::Value<ch7selVal,ch7selVal::dtm2B> dtm2B{};
            constexpr MPL::Value<ch7selVal,ch7selVal::encdec0Rx> encdec0Rx{};
            constexpr MPL::Value<ch7selVal,ch7selVal::spi1Tx> spi1Tx{};
            constexpr MPL::Value<ch7selVal,ch7selVal::usart0Rx> usart0Rx{};
            constexpr MPL::Value<ch7selVal,ch7selVal::idac0> idac0{};
            constexpr MPL::Value<ch7selVal,ch7selVal::timer1l> timer1l{};
            constexpr MPL::Value<ch7selVal,ch7selVal::timer1h> timer1h{};
            constexpr MPL::Value<ch7selVal,ch7selVal::dma0t1Rise> dma0t1Rise{};
            constexpr MPL::Value<ch7selVal,ch7selVal::dma0t1Fall> dma0t1Fall{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,ch7selVal> ch7sel{}; 
    }
    namespace Nonedmaxbar1{    ///<Channel 8-15 Trigger Select
        using Addr = Register::Address<0x40037010,0xffffff00,0,unsigned>;
        ///DMA Channel 8 Peripheral Select. 
        enum class ch8selVal {
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
        namespace ch8selValC{
            constexpr MPL::Value<ch8selVal,ch8selVal::dtm2C> dtm2C{};
            constexpr MPL::Value<ch8selVal,ch8selVal::spi0Tx> spi0Tx{};
            constexpr MPL::Value<ch8selVal,ch8selVal::spi1Rx> spi1Rx{};
            constexpr MPL::Value<ch8selVal,ch8selVal::usart0Tx> usart0Tx{};
            constexpr MPL::Value<ch8selVal,ch8selVal::i2c0Rx> i2c0Rx{};
            constexpr MPL::Value<ch8selVal,ch8selVal::saradc0> saradc0{};
            constexpr MPL::Value<ch8selVal,ch8selVal::epca0Capture> epca0Capture{};
            constexpr MPL::Value<ch8selVal,ch8selVal::timer0l> timer0l{};
            constexpr MPL::Value<ch8selVal,ch8selVal::timer0h> timer0h{};
            constexpr MPL::Value<ch8selVal,ch8selVal::dma0t0Rise> dma0t0Rise{};
            constexpr MPL::Value<ch8selVal,ch8selVal::dma0t0Fall> dma0t0Fall{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,ch8selVal> ch8sel{}; 
        ///DMA Channel 9 Peripheral Select. 
        enum class ch9selVal {
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
        namespace ch9selValC{
            constexpr MPL::Value<ch9selVal,ch9selVal::dtm2D> dtm2D{};
            constexpr MPL::Value<ch9selVal,ch9selVal::spi0Rx> spi0Rx{};
            constexpr MPL::Value<ch9selVal,ch9selVal::i2c0Rx> i2c0Rx{};
            constexpr MPL::Value<ch9selVal,ch9selVal::i2c0Tx> i2c0Tx{};
            constexpr MPL::Value<ch9selVal,ch9selVal::idac0> idac0{};
            constexpr MPL::Value<ch9selVal,ch9selVal::epca0Capture> epca0Capture{};
            constexpr MPL::Value<ch9selVal,ch9selVal::epca0Control> epca0Control{};
            constexpr MPL::Value<ch9selVal,ch9selVal::timer1l> timer1l{};
            constexpr MPL::Value<ch9selVal,ch9selVal::timer1h> timer1h{};
            constexpr MPL::Value<ch9selVal,ch9selVal::dma0t1Rise> dma0t1Rise{};
            constexpr MPL::Value<ch9selVal,ch9selVal::dma0t1Fall> dma0t1Fall{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,ch9selVal> ch9sel{}; 
    }
}
