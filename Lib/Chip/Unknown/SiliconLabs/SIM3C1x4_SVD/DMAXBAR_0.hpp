#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonedmaxbar0{    ///<Channel 0-7 Trigger Select
        using Addr = Register::Address<0x40037000,0x00000000,0,unsigned>;
        ///DMA Channel 0 Peripheral Select. 
        enum class ch0selVal {
            spi1Rx=0x00000001,     ///<Service SPI1 RX data requests.
            usart0Rx=0x00000002,     ///<Service USART0 RX data requests.
            i2c0Tx=0x00000003,     ///<Service I2C0 TX data requests.
            dma0t0Rise=0x00000004,     ///<Service DMAXT0 (PB0.10) rising edge data requests.
            dma0t0Fall=0x00000005,     ///<Service DMAXT0 (PB0.10) falling edge data requests.
            dma0t1Rise=0x00000006,     ///<Service DMAXT1 (PB0.11) rising edge data requests.
            dma0t1Fall=0x00000007,     ///<Service DMAXT1 (PB0.11) falling edge data requests.
            timer0l=0x00000008,     ///<Service TIMER0L overflow data requests.
            timer0h=0x00000009,     ///<Service TIMER0H overflow data requests.
            timer1l=0x0000000a,     ///<Service TIMER1L overflow data requests.
            timer1h=0x0000000b,     ///<Service TIMER1H overflow data requests.
        };
        namespace ch0selValC{
            constexpr MPL::Value<ch0selVal,ch0selVal::spi1Rx> spi1Rx{};
            constexpr MPL::Value<ch0selVal,ch0selVal::usart0Rx> usart0Rx{};
            constexpr MPL::Value<ch0selVal,ch0selVal::i2c0Tx> i2c0Tx{};
            constexpr MPL::Value<ch0selVal,ch0selVal::dma0t0Rise> dma0t0Rise{};
            constexpr MPL::Value<ch0selVal,ch0selVal::dma0t0Fall> dma0t0Fall{};
            constexpr MPL::Value<ch0selVal,ch0selVal::dma0t1Rise> dma0t1Rise{};
            constexpr MPL::Value<ch0selVal,ch0selVal::dma0t1Fall> dma0t1Fall{};
            constexpr MPL::Value<ch0selVal,ch0selVal::timer0l> timer0l{};
            constexpr MPL::Value<ch0selVal,ch0selVal::timer0h> timer0h{};
            constexpr MPL::Value<ch0selVal,ch0selVal::timer1l> timer1l{};
            constexpr MPL::Value<ch0selVal,ch0selVal::timer1h> timer1h{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,ch0selVal> ch0sel{}; 
        ///DMA Channel 1 Peripheral Select. 
        enum class ch1selVal {
            spi0Rx=0x00000001,     ///<Service SPI0 RX data requests.
            usart1Rx=0x00000002,     ///<Service USART1 RX data requests.
            i2c0Rx=0x00000003,     ///<Service I2C0 RX data requests.
            idac1=0x00000004,     ///<Service IDAC1 data requests.
            epca0Control=0x00000005,     ///<Service EPCA0 control data requests.
            dma0t0Rise=0x00000006,     ///<Service DMAXT0 (PB0.10) rising edge data requests.
            dma0t0Fall=0x00000007,     ///<Service DMAXT0 (PB0.10) falling edge data requests.
            dma0t1Rise=0x00000008,     ///<Service DMAXT1 (PB0.11) rising edge data requests.
            dma0t1Fall=0x00000009,     ///<Service DMAXT1 (PB0.11) falling edge data requests.
            timer0l=0x0000000a,     ///<Service TIMER0L overflow data requests.
            timer1l=0x0000000b,     ///<Service TIMER1L overflow data requests.
            timer1h=0x0000000c,     ///<Service TIMER1H overflow data requests.
        };
        namespace ch1selValC{
            constexpr MPL::Value<ch1selVal,ch1selVal::spi0Rx> spi0Rx{};
            constexpr MPL::Value<ch1selVal,ch1selVal::usart1Rx> usart1Rx{};
            constexpr MPL::Value<ch1selVal,ch1selVal::i2c0Rx> i2c0Rx{};
            constexpr MPL::Value<ch1selVal,ch1selVal::idac1> idac1{};
            constexpr MPL::Value<ch1selVal,ch1selVal::epca0Control> epca0Control{};
            constexpr MPL::Value<ch1selVal,ch1selVal::dma0t0Rise> dma0t0Rise{};
            constexpr MPL::Value<ch1selVal,ch1selVal::dma0t0Fall> dma0t0Fall{};
            constexpr MPL::Value<ch1selVal,ch1selVal::dma0t1Rise> dma0t1Rise{};
            constexpr MPL::Value<ch1selVal,ch1selVal::dma0t1Fall> dma0t1Fall{};
            constexpr MPL::Value<ch1selVal,ch1selVal::timer0l> timer0l{};
            constexpr MPL::Value<ch1selVal,ch1selVal::timer1l> timer1l{};
            constexpr MPL::Value<ch1selVal,ch1selVal::timer1h> timer1h{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,ch1selVal> ch1sel{}; 
        ///DMA Channel 2 Peripheral Select. 
        enum class ch2selVal {
            spi0Tx=0x00000001,     ///<Service SPI0 TX data requests.
            usart0Tx=0x00000002,     ///<Service USART0 TX data requests.
            saradc0=0x00000003,     ///<Service SARADC0 data requests.
            idac1=0x00000004,     ///<Service IDAC1 data requests.
            i2s0Tx=0x00000005,     ///<Service I2S0 TX data requests.
            epca0Control=0x00000006,     ///<Service EPCA0 control data requests.
            dma0t0Rise=0x00000007,     ///<Service DMAXT0 (PB0.10) rising edge data requests.
            dma0t0Fall=0x00000008,     ///<Service DMAXT0 (PB0.10) falling edge data requests.
            dma0t1Rise=0x00000009,     ///<Service DMAXT1 (PB0.11) rising edge data requests.
            dma0t1Fall=0x0000000a,     ///<Service DMAXT1 (PB0.11) falling edge data requests.
        };
        namespace ch2selValC{
            constexpr MPL::Value<ch2selVal,ch2selVal::spi0Tx> spi0Tx{};
            constexpr MPL::Value<ch2selVal,ch2selVal::usart0Tx> usart0Tx{};
            constexpr MPL::Value<ch2selVal,ch2selVal::saradc0> saradc0{};
            constexpr MPL::Value<ch2selVal,ch2selVal::idac1> idac1{};
            constexpr MPL::Value<ch2selVal,ch2selVal::i2s0Tx> i2s0Tx{};
            constexpr MPL::Value<ch2selVal,ch2selVal::epca0Control> epca0Control{};
            constexpr MPL::Value<ch2selVal,ch2selVal::dma0t0Rise> dma0t0Rise{};
            constexpr MPL::Value<ch2selVal,ch2selVal::dma0t0Fall> dma0t0Fall{};
            constexpr MPL::Value<ch2selVal,ch2selVal::dma0t1Rise> dma0t1Rise{};
            constexpr MPL::Value<ch2selVal,ch2selVal::dma0t1Fall> dma0t1Fall{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,ch2selVal> ch2sel{}; 
        ///DMA Channel 3 Peripheral Select. 
        enum class ch3selVal {
            saradc1=0x00000001,     ///<Service SARADC1 data requests.
            idac0=0x00000002,     ///<Service IDAC0 data requests.
            i2s0Tx=0x00000003,     ///<Service I2S0 TX data requests.
            epca0Capture=0x00000004,     ///<Service EPCA0 capture data requests.
            dma0t0Rise=0x00000005,     ///<Service DMAXT0 (PB0.10) rising edge data requests.
            dma0t0Fall=0x00000006,     ///<Service DMAXT0 (PB0.10) falling edge data requests.
            dma0t1Rise=0x00000007,     ///<Service DMAXT1 (PB0.11) rising edge data requests.
            dma0t1Fall=0x00000008,     ///<Service DMAXT1 (PB0.11) falling edge data requests.
            timer1h=0x00000009,     ///<Service TIMER1H overflow data requests.
        };
        namespace ch3selValC{
            constexpr MPL::Value<ch3selVal,ch3selVal::saradc1> saradc1{};
            constexpr MPL::Value<ch3selVal,ch3selVal::idac0> idac0{};
            constexpr MPL::Value<ch3selVal,ch3selVal::i2s0Tx> i2s0Tx{};
            constexpr MPL::Value<ch3selVal,ch3selVal::epca0Capture> epca0Capture{};
            constexpr MPL::Value<ch3selVal,ch3selVal::dma0t0Rise> dma0t0Rise{};
            constexpr MPL::Value<ch3selVal,ch3selVal::dma0t0Fall> dma0t0Fall{};
            constexpr MPL::Value<ch3selVal,ch3selVal::dma0t1Rise> dma0t1Rise{};
            constexpr MPL::Value<ch3selVal,ch3selVal::dma0t1Fall> dma0t1Fall{};
            constexpr MPL::Value<ch3selVal,ch3selVal::timer1h> timer1h{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,ch3selVal> ch3sel{}; 
        ///DMA Channel 4 Peripheral Select. 
        enum class ch4selVal {
            spi1Tx=0x00000001,     ///<Service SPI1 TX data requests.
            usart0Tx=0x00000002,     ///<Service USART0 TX data requests.
            saradc0=0x00000003,     ///<Service SARADC0 data requests.
            i2s0Rx=0x00000004,     ///<Service I2S0 RX data requests.
            epca0Capture=0x00000005,     ///<Service EPCA0 capture data requests.
            dma0t0Rise=0x00000006,     ///<Service DMAXT0 (PB0.10) rising edge data requests.
            dma0t0Fall=0x00000007,     ///<Service DMAXT0 (PB0.10) falling edge data requests.
            dma0t1Rise=0x00000008,     ///<Service DMAXT1 (PB0.11) rising edge data requests.
            dma0t1Fall=0x00000009,     ///<Service DMAXT1 (PB0.11) falling edge data requests.
            timer0h=0x0000000a,     ///<Service TIMER0H overflow data requests.
        };
        namespace ch4selValC{
            constexpr MPL::Value<ch4selVal,ch4selVal::spi1Tx> spi1Tx{};
            constexpr MPL::Value<ch4selVal,ch4selVal::usart0Tx> usart0Tx{};
            constexpr MPL::Value<ch4selVal,ch4selVal::saradc0> saradc0{};
            constexpr MPL::Value<ch4selVal,ch4selVal::i2s0Rx> i2s0Rx{};
            constexpr MPL::Value<ch4selVal,ch4selVal::epca0Capture> epca0Capture{};
            constexpr MPL::Value<ch4selVal,ch4selVal::dma0t0Rise> dma0t0Rise{};
            constexpr MPL::Value<ch4selVal,ch4selVal::dma0t0Fall> dma0t0Fall{};
            constexpr MPL::Value<ch4selVal,ch4selVal::dma0t1Rise> dma0t1Rise{};
            constexpr MPL::Value<ch4selVal,ch4selVal::dma0t1Fall> dma0t1Fall{};
            constexpr MPL::Value<ch4selVal,ch4selVal::timer0h> timer0h{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,ch4selVal> ch4sel{}; 
        ///DMA Channel 5 Peripheral Select. 
        enum class ch5selVal {
            aes0Tx=0x00000001,     ///<Service AES0 TX data requests.
            usart1Tx=0x00000002,     ///<Service USART1 TX data requests.
            saradc0=0x00000003,     ///<Service SARADC0 data requests.
            i2s0Rx=0x00000004,     ///<Service I2S0 RX data requests.
            dma0t0Rise=0x00000005,     ///<Service DMAXT0 (PB0.10) rising edge data requests.
            dma0t0Fall=0x00000006,     ///<Service DMAXT0 (PB0.10) falling edge data requests.
            dma0t1Rise=0x00000007,     ///<Service DMAXT1 (PB0.11) rising edge data requests.
            dma0t1Fall=0x00000008,     ///<Service DMAXT1 (PB0.11) falling edge data requests.
        };
        namespace ch5selValC{
            constexpr MPL::Value<ch5selVal,ch5selVal::aes0Tx> aes0Tx{};
            constexpr MPL::Value<ch5selVal,ch5selVal::usart1Tx> usart1Tx{};
            constexpr MPL::Value<ch5selVal,ch5selVal::saradc0> saradc0{};
            constexpr MPL::Value<ch5selVal,ch5selVal::i2s0Rx> i2s0Rx{};
            constexpr MPL::Value<ch5selVal,ch5selVal::dma0t0Rise> dma0t0Rise{};
            constexpr MPL::Value<ch5selVal,ch5selVal::dma0t0Fall> dma0t0Fall{};
            constexpr MPL::Value<ch5selVal,ch5selVal::dma0t1Rise> dma0t1Rise{};
            constexpr MPL::Value<ch5selVal,ch5selVal::dma0t1Fall> dma0t1Fall{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,ch5selVal> ch5sel{}; 
        ///DMA Channel 6 Peripheral Select. 
        enum class ch6selVal {
            aes0Rx=0x00000001,     ///<Service AES0 RX data requests.
            usart0Rx=0x00000002,     ///<Service USART0 RX data requests.
            i2c0Rx=0x00000003,     ///<Service I2C0 RX data requests.
            idac0=0x00000004,     ///<Service IDAC0 data requests.
            dma0t0Rise=0x00000005,     ///<Service DMAXT0 (PB0.10) rising edge data requests.
            dma0t0Fall=0x00000006,     ///<Service DMAXT0 (PB0.10) falling edge data requests.
            dma0t1Rise=0x00000007,     ///<Service DMAXT1 (PB0.11) rising edge data requests.
            dma0t1Fall=0x00000008,     ///<Service DMAXT1 (PB0.11) falling edge data requests.
            timer0h=0x00000009,     ///<Service TIMER0H overflow data requests.
        };
        namespace ch6selValC{
            constexpr MPL::Value<ch6selVal,ch6selVal::aes0Rx> aes0Rx{};
            constexpr MPL::Value<ch6selVal,ch6selVal::usart0Rx> usart0Rx{};
            constexpr MPL::Value<ch6selVal,ch6selVal::i2c0Rx> i2c0Rx{};
            constexpr MPL::Value<ch6selVal,ch6selVal::idac0> idac0{};
            constexpr MPL::Value<ch6selVal,ch6selVal::dma0t0Rise> dma0t0Rise{};
            constexpr MPL::Value<ch6selVal,ch6selVal::dma0t0Fall> dma0t0Fall{};
            constexpr MPL::Value<ch6selVal,ch6selVal::dma0t1Rise> dma0t1Rise{};
            constexpr MPL::Value<ch6selVal,ch6selVal::dma0t1Fall> dma0t1Fall{};
            constexpr MPL::Value<ch6selVal,ch6selVal::timer0h> timer0h{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,ch6selVal> ch6sel{}; 
        ///DMA Channel 7 Peripheral Select. 
        enum class ch7selVal {
            aes0Xor=0x00000001,     ///<Service AES0 XOR data requests.
            spi1Tx=0x00000002,     ///<Service SPI1 TX data requests.
            usart0Tx=0x00000003,     ///<Service USART0 TX data requests.
            dma0t0Rise=0x00000004,     ///<Service DMAXT0 (PB0.10) rising edge data requests.
            dma0t0Fall=0x00000005,     ///<Service DMAXT0 (PB0.10) falling edge data requests.
            dma0t1Rise=0x00000006,     ///<Service DMAXT1 (PB0.11) rising edge data requests.
            dma0t1Fall=0x00000007,     ///<Service DMAXT1 (PB0.11) falling edge data requests.
            timer0l=0x00000008,     ///<Service TIMER0L overflow data requests.
            timer1l=0x00000009,     ///<Service TIMER1L overflow data requests.
            timer1h=0x0000000a,     ///<Service TIMER1H overflow data requests.
        };
        namespace ch7selValC{
            constexpr MPL::Value<ch7selVal,ch7selVal::aes0Xor> aes0Xor{};
            constexpr MPL::Value<ch7selVal,ch7selVal::spi1Tx> spi1Tx{};
            constexpr MPL::Value<ch7selVal,ch7selVal::usart0Tx> usart0Tx{};
            constexpr MPL::Value<ch7selVal,ch7selVal::dma0t0Rise> dma0t0Rise{};
            constexpr MPL::Value<ch7selVal,ch7selVal::dma0t0Fall> dma0t0Fall{};
            constexpr MPL::Value<ch7selVal,ch7selVal::dma0t1Rise> dma0t1Rise{};
            constexpr MPL::Value<ch7selVal,ch7selVal::dma0t1Fall> dma0t1Fall{};
            constexpr MPL::Value<ch7selVal,ch7selVal::timer0l> timer0l{};
            constexpr MPL::Value<ch7selVal,ch7selVal::timer1l> timer1l{};
            constexpr MPL::Value<ch7selVal,ch7selVal::timer1h> timer1h{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,ch7selVal> ch7sel{}; 
    }
    namespace Nonedmaxbar1{    ///<Channel 8-15 Trigger Select
        using Addr = Register::Address<0x40037010,0x00000000,0,unsigned>;
        ///DMA Channel 8 Peripheral Select. 
        enum class ch8selVal {
            usart1Rx=0x00000001,     ///<Service USART1 RX data requests.
            spi1Rx=0x00000002,     ///<Service SPI1 RX data requests.
            usart0Rx=0x00000003,     ///<Service USART0 RX data requests.
            epca0Capture=0x00000004,     ///<Service EPCA0 capture data requests.
            dma0t0Rise=0x00000005,     ///<Service DMAXT0 (PB0.10) rising edge data requests.
            dma0t0Fall=0x00000006,     ///<Service DMAXT0 (PB0.10) falling edge data requests.
            dma0t1Rise=0x00000007,     ///<Service DMAXT1 (PB0.11) rising edge data requests.
            dma0t1Fall=0x00000008,     ///<Service DMAXT1 (PB0.11) falling edge data requests.
        };
        namespace ch8selValC{
            constexpr MPL::Value<ch8selVal,ch8selVal::usart1Rx> usart1Rx{};
            constexpr MPL::Value<ch8selVal,ch8selVal::spi1Rx> spi1Rx{};
            constexpr MPL::Value<ch8selVal,ch8selVal::usart0Rx> usart0Rx{};
            constexpr MPL::Value<ch8selVal,ch8selVal::epca0Capture> epca0Capture{};
            constexpr MPL::Value<ch8selVal,ch8selVal::dma0t0Rise> dma0t0Rise{};
            constexpr MPL::Value<ch8selVal,ch8selVal::dma0t0Fall> dma0t0Fall{};
            constexpr MPL::Value<ch8selVal,ch8selVal::dma0t1Rise> dma0t1Rise{};
            constexpr MPL::Value<ch8selVal,ch8selVal::dma0t1Fall> dma0t1Fall{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,ch8selVal> ch8sel{}; 
        ///DMA Channel 9 Peripheral Select. 
        enum class ch9selVal {
            usart1Tx=0x00000001,     ///<Service USART1 TX data requests.
            i2c0Tx=0x00000002,     ///<Service I2C0 TX data requests.
            epca0Capture=0x00000003,     ///<Service EPCA0 capture data requests.
            dma0t0Rise=0x00000004,     ///<Service DMAXT0 (PB0.10) rising edge data requests.
            dma0t0Fall=0x00000005,     ///<Service DMAXT0 (PB0.10) falling edge data requests.
            dma0t1Rise=0x00000006,     ///<Service DMAXT1 (PB0.11) rising edge data requests.
            dma0t1Fall=0x00000007,     ///<Service DMAXT1 (PB0.11) falling edge data requests.
            timer0h=0x00000008,     ///<Service TIMER0H overflow data requests.
        };
        namespace ch9selValC{
            constexpr MPL::Value<ch9selVal,ch9selVal::usart1Tx> usart1Tx{};
            constexpr MPL::Value<ch9selVal,ch9selVal::i2c0Tx> i2c0Tx{};
            constexpr MPL::Value<ch9selVal,ch9selVal::epca0Capture> epca0Capture{};
            constexpr MPL::Value<ch9selVal,ch9selVal::dma0t0Rise> dma0t0Rise{};
            constexpr MPL::Value<ch9selVal,ch9selVal::dma0t0Fall> dma0t0Fall{};
            constexpr MPL::Value<ch9selVal,ch9selVal::dma0t1Rise> dma0t1Rise{};
            constexpr MPL::Value<ch9selVal,ch9selVal::dma0t1Fall> dma0t1Fall{};
            constexpr MPL::Value<ch9selVal,ch9selVal::timer0h> timer0h{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,ch9selVal> ch9sel{}; 
        ///DMA Channel 10 Peripheral Select. 
        enum class ch10selVal {
            aes0Tx=0x00000001,     ///<Service AES0 TX data requests.
            saradc1=0x00000002,     ///<Service SARADC1 data requests.
            i2s0Rx=0x00000003,     ///<Service I2S0 RX data requests.
            dma0t0Rise=0x00000004,     ///<Service DMAXT0 (PB0.10) rising edge data requests.
            dma0t0Fall=0x00000005,     ///<Service DMAXT0 (PB0.10) falling edge data requests.
            dma0t1Rise=0x00000006,     ///<Service DMAXT1 (PB0.11) rising edge data requests.
            dma0t1Fall=0x00000007,     ///<Service DMAXT1 (PB0.11) falling edge data requests.
            timer1h=0x00000008,     ///<Service TIMER1H overflow data requests.
        };
        namespace ch10selValC{
            constexpr MPL::Value<ch10selVal,ch10selVal::aes0Tx> aes0Tx{};
            constexpr MPL::Value<ch10selVal,ch10selVal::saradc1> saradc1{};
            constexpr MPL::Value<ch10selVal,ch10selVal::i2s0Rx> i2s0Rx{};
            constexpr MPL::Value<ch10selVal,ch10selVal::dma0t0Rise> dma0t0Rise{};
            constexpr MPL::Value<ch10selVal,ch10selVal::dma0t0Fall> dma0t0Fall{};
            constexpr MPL::Value<ch10selVal,ch10selVal::dma0t1Rise> dma0t1Rise{};
            constexpr MPL::Value<ch10selVal,ch10selVal::dma0t1Fall> dma0t1Fall{};
            constexpr MPL::Value<ch10selVal,ch10selVal::timer1h> timer1h{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,ch10selVal> ch10sel{}; 
        ///DMA Channel 11 Peripheral Select. 
        enum class ch11selVal {
            aes0Rx=0x00000001,     ///<Service AES0 RX data requests.
            usart1Rx=0x00000002,     ///<Service USART1 RX data requests.
            usart0Rx=0x00000003,     ///<Service USART0 RX data requests.
            i2c0Rx=0x00000004,     ///<Service I2C0 RX data requests.
            i2s0Rx=0x00000005,     ///<Service I2S0 RX data requests.
            dma0t0Rise=0x00000006,     ///<Service DMAXT0 (PB0.10) rising edge data requests.
            dma0t0Fall=0x00000007,     ///<Service DMAXT0 (PB0.10) falling edge data requests.
            dma0t1Rise=0x00000008,     ///<Service DMAXT1 (PB0.11) rising edge data requests.
            dma0t1Fall=0x00000009,     ///<Service DMAXT1 (PB0.11) falling edge data requests.
            timer0h=0x0000000a,     ///<Service TIMER0H overflow data requests.
        };
        namespace ch11selValC{
            constexpr MPL::Value<ch11selVal,ch11selVal::aes0Rx> aes0Rx{};
            constexpr MPL::Value<ch11selVal,ch11selVal::usart1Rx> usart1Rx{};
            constexpr MPL::Value<ch11selVal,ch11selVal::usart0Rx> usart0Rx{};
            constexpr MPL::Value<ch11selVal,ch11selVal::i2c0Rx> i2c0Rx{};
            constexpr MPL::Value<ch11selVal,ch11selVal::i2s0Rx> i2s0Rx{};
            constexpr MPL::Value<ch11selVal,ch11selVal::dma0t0Rise> dma0t0Rise{};
            constexpr MPL::Value<ch11selVal,ch11selVal::dma0t0Fall> dma0t0Fall{};
            constexpr MPL::Value<ch11selVal,ch11selVal::dma0t1Rise> dma0t1Rise{};
            constexpr MPL::Value<ch11selVal,ch11selVal::dma0t1Fall> dma0t1Fall{};
            constexpr MPL::Value<ch11selVal,ch11selVal::timer0h> timer0h{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,ch11selVal> ch11sel{}; 
        ///DMA Channel 12 Peripheral Select. 
        enum class ch12selVal {
            aes0Xor=0x00000001,     ///<Service AES0 XOR data requests.
            usart1Tx=0x00000002,     ///<Service USART1 TX data requests.
            spi1Tx=0x00000003,     ///<Service SPI1 TX data requests.
            idac1=0x00000004,     ///<Service IDAC1 data requests.
            i2s0Tx=0x00000005,     ///<Service I2S0 TX data requests.
            dma0t0Rise=0x00000006,     ///<Service DMAXT0 (PB0.10) rising edge data requests.
            dma0t0Fall=0x00000007,     ///<Service DMAXT0 (PB0.10) falling edge data requests.
            dma0t1Rise=0x00000008,     ///<Service DMAXT1 (PB0.11) rising edge data requests.
            dma0t1Fall=0x00000009,     ///<Service DMAXT1 (PB0.11) falling edge data requests.
            timer0l=0x0000000a,     ///<Service TIMER0L overflow data requests.
            timer1l=0x0000000b,     ///<Service TIMER1L overflow data requests.
            timer1h=0x0000000c,     ///<Service TIMER1H overflow data requests.
        };
        namespace ch12selValC{
            constexpr MPL::Value<ch12selVal,ch12selVal::aes0Xor> aes0Xor{};
            constexpr MPL::Value<ch12selVal,ch12selVal::usart1Tx> usart1Tx{};
            constexpr MPL::Value<ch12selVal,ch12selVal::spi1Tx> spi1Tx{};
            constexpr MPL::Value<ch12selVal,ch12selVal::idac1> idac1{};
            constexpr MPL::Value<ch12selVal,ch12selVal::i2s0Tx> i2s0Tx{};
            constexpr MPL::Value<ch12selVal,ch12selVal::dma0t0Rise> dma0t0Rise{};
            constexpr MPL::Value<ch12selVal,ch12selVal::dma0t0Fall> dma0t0Fall{};
            constexpr MPL::Value<ch12selVal,ch12selVal::dma0t1Rise> dma0t1Rise{};
            constexpr MPL::Value<ch12selVal,ch12selVal::dma0t1Fall> dma0t1Fall{};
            constexpr MPL::Value<ch12selVal,ch12selVal::timer0l> timer0l{};
            constexpr MPL::Value<ch12selVal,ch12selVal::timer1l> timer1l{};
            constexpr MPL::Value<ch12selVal,ch12selVal::timer1h> timer1h{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,ch12selVal> ch12sel{}; 
        ///DMA Channel 13 Peripheral Select. 
        enum class ch13selVal {
            spi0Rx=0x00000001,     ///<Service SPI0 RX data requests.
            usart0Rx=0x00000002,     ///<Service USART0 RX data requests.
            idac1=0x00000003,     ///<Service IDAC1 data requests.
            i2s0Tx=0x00000004,     ///<Service I2S0 TX data requests.
            dma0t0Rise=0x00000005,     ///<Service DMAXT0 (PB0.10) rising edge data requests.
            dma0t0Fall=0x00000006,     ///<Service DMAXT0 (PB0.10) falling edge data requests.
            dma0t1Rise=0x00000007,     ///<Service DMAXT1 (PB0.11) rising edge data requests.
            dma0t1Fall=0x00000008,     ///<Service DMAXT1 (PB0.11) falling edge data requests.
            timer0h=0x00000009,     ///<Service TIMER0H overflow data requests.
        };
        namespace ch13selValC{
            constexpr MPL::Value<ch13selVal,ch13selVal::spi0Rx> spi0Rx{};
            constexpr MPL::Value<ch13selVal,ch13selVal::usart0Rx> usart0Rx{};
            constexpr MPL::Value<ch13selVal,ch13selVal::idac1> idac1{};
            constexpr MPL::Value<ch13selVal,ch13selVal::i2s0Tx> i2s0Tx{};
            constexpr MPL::Value<ch13selVal,ch13selVal::dma0t0Rise> dma0t0Rise{};
            constexpr MPL::Value<ch13selVal,ch13selVal::dma0t0Fall> dma0t0Fall{};
            constexpr MPL::Value<ch13selVal,ch13selVal::dma0t1Rise> dma0t1Rise{};
            constexpr MPL::Value<ch13selVal,ch13selVal::dma0t1Fall> dma0t1Fall{};
            constexpr MPL::Value<ch13selVal,ch13selVal::timer0h> timer0h{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,ch13selVal> ch13sel{}; 
        ///DMA Channel 14 Peripheral Select. 
        enum class ch14selVal {
            spi0Tx=0x00000001,     ///<Service SPI0 TX data requests.
            usart0Tx=0x00000002,     ///<Service USART0 TX data requests.
            idac0=0x00000003,     ///<Service IDAC0 data requests.
            epca0Control=0x00000004,     ///<Service EPCA0 control data requests.
            dma0t0Rise=0x00000005,     ///<Service DMAXT0 (PB0.10) rising edge data requests.
            dma0t0Fall=0x00000006,     ///<Service DMAXT0 (PB0.10) falling edge data requests.
            dma0t1Rise=0x00000007,     ///<Service DMAXT1 (PB0.11) rising edge data requests.
            dma0t1Fall=0x00000008,     ///<Service DMAXT1 (PB0.11) falling edge data requests.
            timer0l=0x00000009,     ///<Service TIMER0L overflow data requests.
            timer1l=0x0000000a,     ///<Service TIMER1L overflow data requests.
        };
        namespace ch14selValC{
            constexpr MPL::Value<ch14selVal,ch14selVal::spi0Tx> spi0Tx{};
            constexpr MPL::Value<ch14selVal,ch14selVal::usart0Tx> usart0Tx{};
            constexpr MPL::Value<ch14selVal,ch14selVal::idac0> idac0{};
            constexpr MPL::Value<ch14selVal,ch14selVal::epca0Control> epca0Control{};
            constexpr MPL::Value<ch14selVal,ch14selVal::dma0t0Rise> dma0t0Rise{};
            constexpr MPL::Value<ch14selVal,ch14selVal::dma0t0Fall> dma0t0Fall{};
            constexpr MPL::Value<ch14selVal,ch14selVal::dma0t1Rise> dma0t1Rise{};
            constexpr MPL::Value<ch14selVal,ch14selVal::dma0t1Fall> dma0t1Fall{};
            constexpr MPL::Value<ch14selVal,ch14selVal::timer0l> timer0l{};
            constexpr MPL::Value<ch14selVal,ch14selVal::timer1l> timer1l{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,ch14selVal> ch14sel{}; 
        ///DMA Channel 15 Peripheral Select. 
        enum class ch15selVal {
            saradc1=0x00000001,     ///<Service SARADC1 data requests.
            idac0=0x00000002,     ///<Service IDAC0 data requests.
            epca0Control=0x00000003,     ///<Service EPCA0 control data requests.
            dma0t0Rise=0x00000004,     ///<Service DMAXT0 (PB0.10) rising edge data requests.
            dma0t0Fall=0x00000005,     ///<Service DMAXT0 (PB0.10) falling edge data requests.
            dma0t1Rise=0x00000006,     ///<Service DMAXT1 (PB0.11) rising edge data requests.
            dma0t1Fall=0x00000007,     ///<Service DMAXT1 (PB0.11) falling edge data requests.
            timer0h=0x00000008,     ///<Service TIMER0H overflow data requests.
            timer1h=0x00000009,     ///<Service TIMER1H overflow data requests.
        };
        namespace ch15selValC{
            constexpr MPL::Value<ch15selVal,ch15selVal::saradc1> saradc1{};
            constexpr MPL::Value<ch15selVal,ch15selVal::idac0> idac0{};
            constexpr MPL::Value<ch15selVal,ch15selVal::epca0Control> epca0Control{};
            constexpr MPL::Value<ch15selVal,ch15selVal::dma0t0Rise> dma0t0Rise{};
            constexpr MPL::Value<ch15selVal,ch15selVal::dma0t0Fall> dma0t0Fall{};
            constexpr MPL::Value<ch15selVal,ch15selVal::dma0t1Rise> dma0t1Rise{};
            constexpr MPL::Value<ch15selVal,ch15selVal::dma0t1Fall> dma0t1Fall{};
            constexpr MPL::Value<ch15selVal,ch15selVal::timer0h> timer0h{};
            constexpr MPL::Value<ch15selVal,ch15selVal::timer1h> timer1h{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,ch15selVal> ch15sel{}; 
    }
}
