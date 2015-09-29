#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Pin connect block
    namespace Nonepinsel0{    ///<Pin function select register 0.
        using Addr = Register::Address<0x4002c000,0x3f000000,0,unsigned>;
        ///Pin function select P0.0.
        enum class p00Val {
            gpioP0=0x00000000,     ///<GPIO P0.0
            rd1=0x00000001,     ///<RD1
            txd3=0x00000002,     ///<TXD3
            sda1=0x00000003,     ///<SDA1
        };
        namespace p00ValC{
            constexpr MPL::Value<p00Val,p00Val::gpioP0> gpioP0{};
            constexpr MPL::Value<p00Val,p00Val::rd1> rd1{};
            constexpr MPL::Value<p00Val,p00Val::txd3> txd3{};
            constexpr MPL::Value<p00Val,p00Val::sda1> sda1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,p00Val> p00{}; 
        ///Pin function select P0.1.
        enum class p01Val {
            gpioP0=0x00000000,     ///<GPIO P0.1
            td1=0x00000001,     ///<TD1
            rxd3=0x00000002,     ///<RXD3
            scl1=0x00000003,     ///<SCL1
        };
        namespace p01ValC{
            constexpr MPL::Value<p01Val,p01Val::gpioP0> gpioP0{};
            constexpr MPL::Value<p01Val,p01Val::td1> td1{};
            constexpr MPL::Value<p01Val,p01Val::rxd3> rxd3{};
            constexpr MPL::Value<p01Val,p01Val::scl1> scl1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,p01Val> p01{}; 
        ///Pin function select P0.2.
        enum class p02Val {
            gpioP0=0x00000000,     ///<GPIO P0.2
            txd0=0x00000001,     ///<TXD0
            ad0=0x00000002,     ///<AD0.7
            reserved=0x00000003,     ///<Reserved
        };
        namespace p02ValC{
            constexpr MPL::Value<p02Val,p02Val::gpioP0> gpioP0{};
            constexpr MPL::Value<p02Val,p02Val::txd0> txd0{};
            constexpr MPL::Value<p02Val,p02Val::ad0> ad0{};
            constexpr MPL::Value<p02Val,p02Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,p02Val> p02{}; 
        ///Pin function select P0.3.
        enum class p03Val {
            gpioP0=0x00000000,     ///<GPIO P0.3.
            rxd0=0x00000001,     ///<RXD0
            ad0=0x00000002,     ///<AD0.6
            reserved=0x00000003,     ///<Reserved.
        };
        namespace p03ValC{
            constexpr MPL::Value<p03Val,p03Val::gpioP0> gpioP0{};
            constexpr MPL::Value<p03Val,p03Val::rxd0> rxd0{};
            constexpr MPL::Value<p03Val,p03Val::ad0> ad0{};
            constexpr MPL::Value<p03Val,p03Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,p03Val> p03{}; 
        ///Pin function select P0.4.
        enum class p04Val {
            gpioP0=0x00000000,     ///<GPIO P0.4.
            i2srxClk=0x00000001,     ///<I2SRX_CLK
            rd2=0x00000002,     ///<RD2
            cap2=0x00000003,     ///<CAP2.0
        };
        namespace p04ValC{
            constexpr MPL::Value<p04Val,p04Val::gpioP0> gpioP0{};
            constexpr MPL::Value<p04Val,p04Val::i2srxClk> i2srxClk{};
            constexpr MPL::Value<p04Val,p04Val::rd2> rd2{};
            constexpr MPL::Value<p04Val,p04Val::cap2> cap2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,p04Val> p04{}; 
        ///Pin function select P0.5.
        enum class p05Val {
            gpioP0=0x00000000,     ///<GPIO P0.5.
            i2srxWs=0x00000001,     ///<I2SRX_WS
            td2=0x00000002,     ///<TD2
            cap2=0x00000003,     ///<CAP2.1
        };
        namespace p05ValC{
            constexpr MPL::Value<p05Val,p05Val::gpioP0> gpioP0{};
            constexpr MPL::Value<p05Val,p05Val::i2srxWs> i2srxWs{};
            constexpr MPL::Value<p05Val,p05Val::td2> td2{};
            constexpr MPL::Value<p05Val,p05Val::cap2> cap2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,p05Val> p05{}; 
        ///Pin function select P0.6.
        enum class p06Val {
            gpioP0=0x00000000,     ///<GPIO P0.6.
            i2srxSda=0x00000001,     ///<I2SRX_SDA
            ssel1=0x00000002,     ///<SSEL1
            mat2=0x00000003,     ///<MAT2.0
        };
        namespace p06ValC{
            constexpr MPL::Value<p06Val,p06Val::gpioP0> gpioP0{};
            constexpr MPL::Value<p06Val,p06Val::i2srxSda> i2srxSda{};
            constexpr MPL::Value<p06Val,p06Val::ssel1> ssel1{};
            constexpr MPL::Value<p06Val,p06Val::mat2> mat2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,p06Val> p06{}; 
        ///Pin function select P0.7.
        enum class p07Val {
            gpioP0=0x00000000,     ///<GPIO P0.7.
            i2stxClk=0x00000001,     ///<I2STX_CLK
            sck1=0x00000002,     ///<SCK1
            mat2=0x00000003,     ///<MAT2.1
        };
        namespace p07ValC{
            constexpr MPL::Value<p07Val,p07Val::gpioP0> gpioP0{};
            constexpr MPL::Value<p07Val,p07Val::i2stxClk> i2stxClk{};
            constexpr MPL::Value<p07Val,p07Val::sck1> sck1{};
            constexpr MPL::Value<p07Val,p07Val::mat2> mat2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,p07Val> p07{}; 
        ///Pin function select P0.8.
        enum class p08Val {
            gpioP0=0x00000000,     ///<GPIO P0.8.
            i2stxWs=0x00000001,     ///<I2STX_WS
            miso1=0x00000002,     ///<MISO1
            mat2=0x00000003,     ///<MAT2.2
        };
        namespace p08ValC{
            constexpr MPL::Value<p08Val,p08Val::gpioP0> gpioP0{};
            constexpr MPL::Value<p08Val,p08Val::i2stxWs> i2stxWs{};
            constexpr MPL::Value<p08Val,p08Val::miso1> miso1{};
            constexpr MPL::Value<p08Val,p08Val::mat2> mat2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,p08Val> p08{}; 
        ///Pin function select P0.9.
        enum class p09Val {
            gpioP0=0x00000000,     ///<GPIO P0.9
            i2stxSda=0x00000001,     ///<I2STX_SDA
            mosi1=0x00000002,     ///<MOSI1
            mat2=0x00000003,     ///<MAT2.3
        };
        namespace p09ValC{
            constexpr MPL::Value<p09Val,p09Val::gpioP0> gpioP0{};
            constexpr MPL::Value<p09Val,p09Val::i2stxSda> i2stxSda{};
            constexpr MPL::Value<p09Val,p09Val::mosi1> mosi1{};
            constexpr MPL::Value<p09Val,p09Val::mat2> mat2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,p09Val> p09{}; 
        ///Pin function select P0.10.
        enum class p010Val {
            gpioP0=0x00000000,     ///<GPIO P0.10
            txd2=0x00000001,     ///<TXD2
            sda2=0x00000002,     ///<SDA2
            mat3=0x00000003,     ///<MAT3.0
        };
        namespace p010ValC{
            constexpr MPL::Value<p010Val,p010Val::gpioP0> gpioP0{};
            constexpr MPL::Value<p010Val,p010Val::txd2> txd2{};
            constexpr MPL::Value<p010Val,p010Val::sda2> sda2{};
            constexpr MPL::Value<p010Val,p010Val::mat3> mat3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,p010Val> p010{}; 
        ///Pin function select P0.11.
        enum class p011Val {
            gpioP0=0x00000000,     ///<GPIO P0.11
            rxd2=0x00000001,     ///<RXD2
            scl2=0x00000002,     ///<SCL2
            mat3=0x00000003,     ///<MAT3.1
        };
        namespace p011ValC{
            constexpr MPL::Value<p011Val,p011Val::gpioP0> gpioP0{};
            constexpr MPL::Value<p011Val,p011Val::rxd2> rxd2{};
            constexpr MPL::Value<p011Val,p011Val::scl2> scl2{};
            constexpr MPL::Value<p011Val,p011Val::mat3> mat3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,p011Val> p011{}; 
        ///Pin function select P0.15.
        enum class p015Val {
            gpioP0=0x00000000,     ///<GPIO P0.15
            txd1=0x00000001,     ///<TXD1
            sck0=0x00000002,     ///<SCK0
            sck=0x00000003,     ///<SCK
        };
        namespace p015ValC{
            constexpr MPL::Value<p015Val,p015Val::gpioP0> gpioP0{};
            constexpr MPL::Value<p015Val,p015Val::txd1> txd1{};
            constexpr MPL::Value<p015Val,p015Val::sck0> sck0{};
            constexpr MPL::Value<p015Val,p015Val::sck> sck{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,p015Val> p015{}; 
    }
    namespace Nonepinsel1{    ///<Pin function select register 1.
        using Addr = Register::Address<0x4002c004,0xc0000000,0,unsigned>;
        ///Pin function select P0.16.
        enum class p016Val {
            gpioP0=0x00000000,     ///<GPIO P0.16
            rxd1=0x00000001,     ///<RXD1
            ssel0=0x00000002,     ///<SSEL0
            ssel=0x00000003,     ///<SSEL
        };
        namespace p016ValC{
            constexpr MPL::Value<p016Val,p016Val::gpioP0> gpioP0{};
            constexpr MPL::Value<p016Val,p016Val::rxd1> rxd1{};
            constexpr MPL::Value<p016Val,p016Val::ssel0> ssel0{};
            constexpr MPL::Value<p016Val,p016Val::ssel> ssel{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,p016Val> p016{}; 
        ///Pin function select P0.17.
        enum class p017Val {
            gpioP0=0x00000000,     ///<GPIO P0.17
            cts1=0x00000001,     ///<CTS1
            miso0=0x00000002,     ///<MISO0
            miso=0x00000003,     ///<MISO
        };
        namespace p017ValC{
            constexpr MPL::Value<p017Val,p017Val::gpioP0> gpioP0{};
            constexpr MPL::Value<p017Val,p017Val::cts1> cts1{};
            constexpr MPL::Value<p017Val,p017Val::miso0> miso0{};
            constexpr MPL::Value<p017Val,p017Val::miso> miso{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,p017Val> p017{}; 
        ///Pin function select P0.18.
        enum class p018Val {
            gpioP0=0x00000000,     ///<GPIO P0.18
            dcd1=0x00000001,     ///<DCD1
            mosi0=0x00000002,     ///<MOSI0
            mosi=0x00000003,     ///<MOSI
        };
        namespace p018ValC{
            constexpr MPL::Value<p018Val,p018Val::gpioP0> gpioP0{};
            constexpr MPL::Value<p018Val,p018Val::dcd1> dcd1{};
            constexpr MPL::Value<p018Val,p018Val::mosi0> mosi0{};
            constexpr MPL::Value<p018Val,p018Val::mosi> mosi{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,p018Val> p018{}; 
        ///Pin function select P019.
        enum class p019Val {
            gpioP0=0x00000000,     ///<GPIO P0.19.
            dsr1=0x00000001,     ///<DSR1
            reserved=0x00000002,     ///<Reserved
            sda1=0x00000003,     ///<SDA1
        };
        namespace p019ValC{
            constexpr MPL::Value<p019Val,p019Val::gpioP0> gpioP0{};
            constexpr MPL::Value<p019Val,p019Val::dsr1> dsr1{};
            constexpr MPL::Value<p019Val,p019Val::reserved> reserved{};
            constexpr MPL::Value<p019Val,p019Val::sda1> sda1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,p019Val> p019{}; 
        ///Pin function select P0.20.
        enum class p020Val {
            gpioP0=0x00000000,     ///<GPIO P0.20.
            dtr1=0x00000001,     ///<DTR1
            reserved=0x00000002,     ///<Reserved
            scl1=0x00000003,     ///<SCL1
        };
        namespace p020ValC{
            constexpr MPL::Value<p020Val,p020Val::gpioP0> gpioP0{};
            constexpr MPL::Value<p020Val,p020Val::dtr1> dtr1{};
            constexpr MPL::Value<p020Val,p020Val::reserved> reserved{};
            constexpr MPL::Value<p020Val,p020Val::scl1> scl1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,p020Val> p020{}; 
        ///Pin function select P0.21.
        enum class p021Val {
            gpioPort0=0x00000000,     ///<GPIO Port 0.21.
            ri1=0x00000001,     ///<RI1
            reserved=0x00000002,     ///<Reserved
            rd1=0x00000003,     ///<RD1
        };
        namespace p021ValC{
            constexpr MPL::Value<p021Val,p021Val::gpioPort0> gpioPort0{};
            constexpr MPL::Value<p021Val,p021Val::ri1> ri1{};
            constexpr MPL::Value<p021Val,p021Val::reserved> reserved{};
            constexpr MPL::Value<p021Val,p021Val::rd1> rd1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,p021Val> p021{}; 
        ///Pin function select P022
        enum class p022Val {
            gpioP0=0x00000000,     ///<GPIO P0.22.
            rts1=0x00000001,     ///<RTS1
            reserved=0x00000002,     ///<Reserved
            td1=0x00000003,     ///<TD1
        };
        namespace p022ValC{
            constexpr MPL::Value<p022Val,p022Val::gpioP0> gpioP0{};
            constexpr MPL::Value<p022Val,p022Val::rts1> rts1{};
            constexpr MPL::Value<p022Val,p022Val::reserved> reserved{};
            constexpr MPL::Value<p022Val,p022Val::td1> td1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,p022Val> p022{}; 
        ///Pin function select P023.
        enum class p023Val {
            gpioP0=0x00000000,     ///<GPIO P0.23.
            ad0=0x00000001,     ///<AD0.0
            i2srxClk=0x00000002,     ///<I2SRX_CLK
            cap3=0x00000003,     ///<CAP3.0
        };
        namespace p023ValC{
            constexpr MPL::Value<p023Val,p023Val::gpioP0> gpioP0{};
            constexpr MPL::Value<p023Val,p023Val::ad0> ad0{};
            constexpr MPL::Value<p023Val,p023Val::i2srxClk> i2srxClk{};
            constexpr MPL::Value<p023Val,p023Val::cap3> cap3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,p023Val> p023{}; 
        ///Pin function select P0.24.
        enum class p024Val {
            gpioP0=0x00000000,     ///<GPIO P0.24.
            ad0=0x00000001,     ///<AD0.1
            i2srxWs=0x00000002,     ///<I2SRX_WS
            cap3=0x00000003,     ///<CAP3.1
        };
        namespace p024ValC{
            constexpr MPL::Value<p024Val,p024Val::gpioP0> gpioP0{};
            constexpr MPL::Value<p024Val,p024Val::ad0> ad0{};
            constexpr MPL::Value<p024Val,p024Val::i2srxWs> i2srxWs{};
            constexpr MPL::Value<p024Val,p024Val::cap3> cap3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,p024Val> p024{}; 
        ///Pin function select P0.25.
        enum class p025Val {
            gpioP0=0x00000000,     ///<GPIO P0.25
            ad0=0x00000001,     ///<AD0.2
            i2srxSda=0x00000002,     ///<I2SRX_SDA
            txd3=0x00000003,     ///<TXD3
        };
        namespace p025ValC{
            constexpr MPL::Value<p025Val,p025Val::gpioP0> gpioP0{};
            constexpr MPL::Value<p025Val,p025Val::ad0> ad0{};
            constexpr MPL::Value<p025Val,p025Val::i2srxSda> i2srxSda{};
            constexpr MPL::Value<p025Val,p025Val::txd3> txd3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,p025Val> p025{}; 
        ///Pin function select P0.26.
        enum class p026Val {
            gpioP0=0x00000000,     ///<GPIO P0.26
            ad0=0x00000001,     ///<AD0.3
            aout=0x00000002,     ///<AOUT
            rxd3=0x00000003,     ///<RXD3
        };
        namespace p026ValC{
            constexpr MPL::Value<p026Val,p026Val::gpioP0> gpioP0{};
            constexpr MPL::Value<p026Val,p026Val::ad0> ad0{};
            constexpr MPL::Value<p026Val,p026Val::aout> aout{};
            constexpr MPL::Value<p026Val,p026Val::rxd3> rxd3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,p026Val> p026{}; 
        ///Pin function select P0.27.
        enum class p027Val {
            gpioP0=0x00000000,     ///<GPIO P0.27
            sda0=0x00000001,     ///<SDA0
            usbSda=0x00000002,     ///<USB_SDA
            reserved=0x00000003,     ///<Reserved
        };
        namespace p027ValC{
            constexpr MPL::Value<p027Val,p027Val::gpioP0> gpioP0{};
            constexpr MPL::Value<p027Val,p027Val::sda0> sda0{};
            constexpr MPL::Value<p027Val,p027Val::usbSda> usbSda{};
            constexpr MPL::Value<p027Val,p027Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,p027Val> p027{}; 
        ///Pin function select P0.28.
        enum class p028Val {
            gpioP0=0x00000000,     ///<GPIO P0.28
            scl0=0x00000001,     ///<SCL0
            usbScl=0x00000002,     ///<USB_SCL
            reserved=0x00000003,     ///<Reserved
        };
        namespace p028ValC{
            constexpr MPL::Value<p028Val,p028Val::gpioP0> gpioP0{};
            constexpr MPL::Value<p028Val,p028Val::scl0> scl0{};
            constexpr MPL::Value<p028Val,p028Val::usbScl> usbScl{};
            constexpr MPL::Value<p028Val,p028Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,p028Val> p028{}; 
        ///Pin function select P0.29
        enum class p029Val {
            gpioP0=0x00000000,     ///<GPIO P0.29
            usbDp=0x00000001,     ///<USB_D+
            reserved=0x00000002,     ///<Reserved
            reserved=0x00000003,     ///<Reserved
        };
        namespace p029ValC{
            constexpr MPL::Value<p029Val,p029Val::gpioP0> gpioP0{};
            constexpr MPL::Value<p029Val,p029Val::usbDp> usbDp{};
            constexpr MPL::Value<p029Val,p029Val::reserved> reserved{};
            constexpr MPL::Value<p029Val,p029Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,p029Val> p029{}; 
        ///Pin function select P0.30.
        enum class p030Val {
            gpioP0=0x00000000,     ///<GPIO P0.30
            usbDm=0x00000001,     ///<USB_D-
            reserved=0x00000002,     ///<Reserved
            reserved=0x00000003,     ///<Reserved
        };
        namespace p030ValC{
            constexpr MPL::Value<p030Val,p030Val::gpioP0> gpioP0{};
            constexpr MPL::Value<p030Val,p030Val::usbDm> usbDm{};
            constexpr MPL::Value<p030Val,p030Val::reserved> reserved{};
            constexpr MPL::Value<p030Val,p030Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,p030Val> p030{}; 
    }
    namespace Nonepinsel2{    ///<Pin function select register 2.
        using Addr = Register::Address<0x4002c008,0x3f00fcf0,0,unsigned>;
        ///Pin function select P1.0.
        enum class p10Val {
            gpioP1=0x00000000,     ///<GPIO P1.0
            enetTxd0=0x00000001,     ///<ENET_TXD0
            reserved=0x00000002,     ///<Reserved
            reserved=0x00000003,     ///<Reserved
        };
        namespace p10ValC{
            constexpr MPL::Value<p10Val,p10Val::gpioP1> gpioP1{};
            constexpr MPL::Value<p10Val,p10Val::enetTxd0> enetTxd0{};
            constexpr MPL::Value<p10Val,p10Val::reserved> reserved{};
            constexpr MPL::Value<p10Val,p10Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,p10Val> p10{}; 
        ///Pin function select P1.1.
        enum class p11Val {
            gpioP1=0x00000000,     ///<GPIO P1.1
            enetTxd1=0x00000001,     ///<ENET_TXD1
            reserved=0x00000002,     ///<Reserved
            reserved=0x00000003,     ///<Reserved
        };
        namespace p11ValC{
            constexpr MPL::Value<p11Val,p11Val::gpioP1> gpioP1{};
            constexpr MPL::Value<p11Val,p11Val::enetTxd1> enetTxd1{};
            constexpr MPL::Value<p11Val,p11Val::reserved> reserved{};
            constexpr MPL::Value<p11Val,p11Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,p11Val> p11{}; 
        ///Pin function select P1.4.
        enum class p14Val {
            gpioP1=0x00000000,     ///<GPIO P1.4.
            enetTxEn=0x00000001,     ///<ENET_TX_EN
            reserved=0x00000002,     ///<Reserved
            reserved=0x00000003,     ///<Reserved
        };
        namespace p14ValC{
            constexpr MPL::Value<p14Val,p14Val::gpioP1> gpioP1{};
            constexpr MPL::Value<p14Val,p14Val::enetTxEn> enetTxEn{};
            constexpr MPL::Value<p14Val,p14Val::reserved> reserved{};
            constexpr MPL::Value<p14Val,p14Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,p14Val> p14{}; 
        ///Pin function select P1.8.
        enum class p18Val {
            gpioP1=0x00000000,     ///<GPIO P1.8.
            enetCrs=0x00000001,     ///<ENET_CRS
            reserved=0x00000002,     ///<Reserved
            reserved=0x00000003,     ///<Reserved
        };
        namespace p18ValC{
            constexpr MPL::Value<p18Val,p18Val::gpioP1> gpioP1{};
            constexpr MPL::Value<p18Val,p18Val::enetCrs> enetCrs{};
            constexpr MPL::Value<p18Val,p18Val::reserved> reserved{};
            constexpr MPL::Value<p18Val,p18Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,p18Val> p18{}; 
        ///Pin function select P1.9.
        enum class p19Val {
            gpioPort1=0x00000000,     ///<GPIO Port 1.9
            enetRxd0=0x00000001,     ///<ENET_RXD0
            reserved=0x00000002,     ///<Reserved
            reserved=0x00000003,     ///<Reserved
        };
        namespace p19ValC{
            constexpr MPL::Value<p19Val,p19Val::gpioPort1> gpioPort1{};
            constexpr MPL::Value<p19Val,p19Val::enetRxd0> enetRxd0{};
            constexpr MPL::Value<p19Val,p19Val::reserved> reserved{};
            constexpr MPL::Value<p19Val,p19Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,p19Val> p19{}; 
        ///Pin function select P1.10.
        enum class p110Val {
            gpioP1=0x00000000,     ///<GPIO P1.10
            enetRxd1=0x00000001,     ///<ENET_RXD1
            reserved=0x00000002,     ///<Reserved
            reserved=0x00000003,     ///<Reserved
        };
        namespace p110ValC{
            constexpr MPL::Value<p110Val,p110Val::gpioP1> gpioP1{};
            constexpr MPL::Value<p110Val,p110Val::enetRxd1> enetRxd1{};
            constexpr MPL::Value<p110Val,p110Val::reserved> reserved{};
            constexpr MPL::Value<p110Val,p110Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,p110Val> p110{}; 
        ///Pin function select P1.14.
        enum class p114Val {
            gpioP1=0x00000000,     ///<GPIO P1.14
            enetRxEr=0x00000001,     ///<ENET_RX_ER
            reserved=0x00000002,     ///<Reserved
            reserved=0x00000003,     ///<Reserved
        };
        namespace p114ValC{
            constexpr MPL::Value<p114Val,p114Val::gpioP1> gpioP1{};
            constexpr MPL::Value<p114Val,p114Val::enetRxEr> enetRxEr{};
            constexpr MPL::Value<p114Val,p114Val::reserved> reserved{};
            constexpr MPL::Value<p114Val,p114Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,p114Val> p114{}; 
        ///Pin function select P1.15.
        enum class p115Val {
            gpioP1=0x00000000,     ///<GPIO P1.15
            enetRefClk=0x00000001,     ///<ENET_REF_CLK
            reserved=0x00000002,     ///<Reserved
            reserved=0x00000003,     ///<Reserved
        };
        namespace p115ValC{
            constexpr MPL::Value<p115Val,p115Val::gpioP1> gpioP1{};
            constexpr MPL::Value<p115Val,p115Val::enetRefClk> enetRefClk{};
            constexpr MPL::Value<p115Val,p115Val::reserved> reserved{};
            constexpr MPL::Value<p115Val,p115Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,p115Val> p115{}; 
    }
    namespace Nonepinsel3{    ///<Pin function select register 3.
        using Addr = Register::Address<0x4002c00c,0x00000000,0,unsigned>;
        ///Pin function select P1.16.
        enum class p116Val {
            gpioP1=0x00000000,     ///<GPIO P1.16
            enetMdc=0x00000001,     ///<ENET_MDC
            reserved=0x00000002,     ///<Reserved
            reserved=0x00000003,     ///<Reserved
        };
        namespace p116ValC{
            constexpr MPL::Value<p116Val,p116Val::gpioP1> gpioP1{};
            constexpr MPL::Value<p116Val,p116Val::enetMdc> enetMdc{};
            constexpr MPL::Value<p116Val,p116Val::reserved> reserved{};
            constexpr MPL::Value<p116Val,p116Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,p116Val> p116{}; 
        ///Pin function select P1.17.
        enum class p117Val {
            gpioP1=0x00000000,     ///<GPIO P1.17
            enetMdio=0x00000001,     ///<ENET_MDIO
            reserved=0x00000002,     ///<Reserved
            reserved=0x00000003,     ///<Reserved
        };
        namespace p117ValC{
            constexpr MPL::Value<p117Val,p117Val::gpioP1> gpioP1{};
            constexpr MPL::Value<p117Val,p117Val::enetMdio> enetMdio{};
            constexpr MPL::Value<p117Val,p117Val::reserved> reserved{};
            constexpr MPL::Value<p117Val,p117Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,p117Val> p117{}; 
        ///Pin function select P1.18.
        enum class p118Val {
            gpioP1=0x00000000,     ///<GPIO P1.18
            usbUpLed=0x00000001,     ///<USB_UP_LED
            pwm1=0x00000002,     ///<PWM1.1
            cap1=0x00000003,     ///<CAP1.0
        };
        namespace p118ValC{
            constexpr MPL::Value<p118Val,p118Val::gpioP1> gpioP1{};
            constexpr MPL::Value<p118Val,p118Val::usbUpLed> usbUpLed{};
            constexpr MPL::Value<p118Val,p118Val::pwm1> pwm1{};
            constexpr MPL::Value<p118Val,p118Val::cap1> cap1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,p118Val> p118{}; 
        ///Pin function select P1.19.
        enum class p119Val {
            gpioP1=0x00000000,     ///<GPIO P1.19.
            mcoa0=0x00000001,     ///<MCOA0
            usbPpwr=0x00000002,     ///<USB_PPWR
            cap1=0x00000003,     ///<CAP1.1
        };
        namespace p119ValC{
            constexpr MPL::Value<p119Val,p119Val::gpioP1> gpioP1{};
            constexpr MPL::Value<p119Val,p119Val::mcoa0> mcoa0{};
            constexpr MPL::Value<p119Val,p119Val::usbPpwr> usbPpwr{};
            constexpr MPL::Value<p119Val,p119Val::cap1> cap1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,p119Val> p119{}; 
        ///Pin function select P1.20.
        enum class p120Val {
            gpioP1=0x00000000,     ///<GPIO P1.20.
            mci0=0x00000001,     ///<MCI0
            pwm1=0x00000002,     ///<PWM1.2
            sck0=0x00000003,     ///<SCK0
        };
        namespace p120ValC{
            constexpr MPL::Value<p120Val,p120Val::gpioP1> gpioP1{};
            constexpr MPL::Value<p120Val,p120Val::mci0> mci0{};
            constexpr MPL::Value<p120Val,p120Val::pwm1> pwm1{};
            constexpr MPL::Value<p120Val,p120Val::sck0> sck0{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,p120Val> p120{}; 
        ///Pin function select P1.21.
        enum class p121Val {
            gpioP1=0x00000000,     ///<GPIO P1.21.
            mcabort=0x00000001,     ///<MCABORT
            pwm1=0x00000002,     ///<PWM1.3
            ssel0=0x00000003,     ///<SSEL0
        };
        namespace p121ValC{
            constexpr MPL::Value<p121Val,p121Val::gpioP1> gpioP1{};
            constexpr MPL::Value<p121Val,p121Val::mcabort> mcabort{};
            constexpr MPL::Value<p121Val,p121Val::pwm1> pwm1{};
            constexpr MPL::Value<p121Val,p121Val::ssel0> ssel0{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,p121Val> p121{}; 
        ///Pin function select P1.22
        enum class p122Val {
            gpioP1=0x00000000,     ///<GPIO P1.22.
            mcob0=0x00000001,     ///<MCOB0
            usbPwrd=0x00000002,     ///<USB_PWRD
            mat1=0x00000003,     ///<MAT1.0
        };
        namespace p122ValC{
            constexpr MPL::Value<p122Val,p122Val::gpioP1> gpioP1{};
            constexpr MPL::Value<p122Val,p122Val::mcob0> mcob0{};
            constexpr MPL::Value<p122Val,p122Val::usbPwrd> usbPwrd{};
            constexpr MPL::Value<p122Val,p122Val::mat1> mat1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,p122Val> p122{}; 
        ///Pin function select P1.23.
        enum class p123Val {
            gpioP1=0x00000000,     ///<GPIO P1.23.
            mci1=0x00000001,     ///<MCI1
            pwm1=0x00000002,     ///<PWM1.4
            miso0=0x00000003,     ///<MISO0
        };
        namespace p123ValC{
            constexpr MPL::Value<p123Val,p123Val::gpioP1> gpioP1{};
            constexpr MPL::Value<p123Val,p123Val::mci1> mci1{};
            constexpr MPL::Value<p123Val,p123Val::pwm1> pwm1{};
            constexpr MPL::Value<p123Val,p123Val::miso0> miso0{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,p123Val> p123{}; 
        ///Pin function select P1.24.
        enum class p124Val {
            gpioP1=0x00000000,     ///<GPIO P1.24.
            mci2=0x00000001,     ///<MCI2
            pwm1=0x00000002,     ///<PWM1.5
            mosi0=0x00000003,     ///<MOSI0
        };
        namespace p124ValC{
            constexpr MPL::Value<p124Val,p124Val::gpioP1> gpioP1{};
            constexpr MPL::Value<p124Val,p124Val::mci2> mci2{};
            constexpr MPL::Value<p124Val,p124Val::pwm1> pwm1{};
            constexpr MPL::Value<p124Val,p124Val::mosi0> mosi0{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,p124Val> p124{}; 
        ///Pin function select P1.25.
        enum class p125Val {
            gpioP1=0x00000000,     ///<GPIO P1.25
            mcoa1=0x00000001,     ///<MCOA1
            reserved=0x00000002,     ///<Reserved
            mat1=0x00000003,     ///<MAT1.1
        };
        namespace p125ValC{
            constexpr MPL::Value<p125Val,p125Val::gpioP1> gpioP1{};
            constexpr MPL::Value<p125Val,p125Val::mcoa1> mcoa1{};
            constexpr MPL::Value<p125Val,p125Val::reserved> reserved{};
            constexpr MPL::Value<p125Val,p125Val::mat1> mat1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,p125Val> p125{}; 
        ///Pin function select P1.26.
        enum class p126Val {
            gpioP1=0x00000000,     ///<GPIO P1.26
            mcob1=0x00000001,     ///<MCOB1
            pwm1=0x00000002,     ///<PWM1.6
            cap0=0x00000003,     ///<CAP0.0
        };
        namespace p126ValC{
            constexpr MPL::Value<p126Val,p126Val::gpioP1> gpioP1{};
            constexpr MPL::Value<p126Val,p126Val::mcob1> mcob1{};
            constexpr MPL::Value<p126Val,p126Val::pwm1> pwm1{};
            constexpr MPL::Value<p126Val,p126Val::cap0> cap0{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,p126Val> p126{}; 
        ///Pin function select P1.27.
        enum class p127Val {
            gpioP1=0x00000000,     ///<GPIO P1.27
            clkout=0x00000001,     ///<CLKOUT
            usbOvrcr=0x00000002,     ///<USB_OVRCR
            cap0=0x00000003,     ///<CAP0.1
        };
        namespace p127ValC{
            constexpr MPL::Value<p127Val,p127Val::gpioP1> gpioP1{};
            constexpr MPL::Value<p127Val,p127Val::clkout> clkout{};
            constexpr MPL::Value<p127Val,p127Val::usbOvrcr> usbOvrcr{};
            constexpr MPL::Value<p127Val,p127Val::cap0> cap0{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,p127Val> p127{}; 
        ///Pin function select P1.28.
        enum class p128Val {
            gpioP1=0x00000000,     ///<GPIO P1.28
            mcoa2=0x00000001,     ///<MCOA2
            pcap1=0x00000002,     ///<PCAP1.0
            mat0=0x00000003,     ///<MAT0.0
        };
        namespace p128ValC{
            constexpr MPL::Value<p128Val,p128Val::gpioP1> gpioP1{};
            constexpr MPL::Value<p128Val,p128Val::mcoa2> mcoa2{};
            constexpr MPL::Value<p128Val,p128Val::pcap1> pcap1{};
            constexpr MPL::Value<p128Val,p128Val::mat0> mat0{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,p128Val> p128{}; 
        ///Pin function select P1.29
        enum class p129Val {
            gpioP1=0x00000000,     ///<GPIO P1.29
            mcob2=0x00000001,     ///<MCOB2
            pcap1=0x00000002,     ///<PCAP1.1
            mat0=0x00000003,     ///<MAT0.1
        };
        namespace p129ValC{
            constexpr MPL::Value<p129Val,p129Val::gpioP1> gpioP1{};
            constexpr MPL::Value<p129Val,p129Val::mcob2> mcob2{};
            constexpr MPL::Value<p129Val,p129Val::pcap1> pcap1{};
            constexpr MPL::Value<p129Val,p129Val::mat0> mat0{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,p129Val> p129{}; 
        ///Pin function select P1.30.
        enum class p130Val {
            gpioP1=0x00000000,     ///<GPIO P1.30
            reserved=0x00000001,     ///<Reserved
            vbus=0x00000002,     ///<VBUS
            ad0=0x00000003,     ///<AD0.4
        };
        namespace p130ValC{
            constexpr MPL::Value<p130Val,p130Val::gpioP1> gpioP1{};
            constexpr MPL::Value<p130Val,p130Val::reserved> reserved{};
            constexpr MPL::Value<p130Val,p130Val::vbus> vbus{};
            constexpr MPL::Value<p130Val,p130Val::ad0> ad0{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,p130Val> p130{}; 
        ///Pin function select P1.31.
        enum class p131Val {
            gpioPort1=0x00000000,     ///<GPIO Port 1.31
            reserved=0x00000001,     ///<Reserved
            sck1=0x00000002,     ///<SCK1
            ad0=0x00000003,     ///<AD0.5
        };
        namespace p131ValC{
            constexpr MPL::Value<p131Val,p131Val::gpioPort1> gpioPort1{};
            constexpr MPL::Value<p131Val,p131Val::reserved> reserved{};
            constexpr MPL::Value<p131Val,p131Val::sck1> sck1{};
            constexpr MPL::Value<p131Val,p131Val::ad0> ad0{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,p131Val> p131{}; 
    }
    namespace Nonepinsel4{    ///<Pin function select register 4
        using Addr = Register::Address<0x4002c010,0xf0000000,0,unsigned>;
        ///Pin function select P2.0.
        enum class p20Val {
            gpioP2=0x00000000,     ///<GPIO P2.0
            pwm1=0x00000001,     ///<PWM1.1
            txd1=0x00000002,     ///<TXD1
            reserved=0x00000003,     ///<Reserved
        };
        namespace p20ValC{
            constexpr MPL::Value<p20Val,p20Val::gpioP2> gpioP2{};
            constexpr MPL::Value<p20Val,p20Val::pwm1> pwm1{};
            constexpr MPL::Value<p20Val,p20Val::txd1> txd1{};
            constexpr MPL::Value<p20Val,p20Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,p20Val> p20{}; 
        ///Pin function select P2.1.
        enum class p21Val {
            gpioP2=0x00000000,     ///<GPIO P2.1
            pwm1=0x00000001,     ///<PWM1.2
            rxd1=0x00000002,     ///<RXD1
            reserved=0x00000003,     ///<Reserved
        };
        namespace p21ValC{
            constexpr MPL::Value<p21Val,p21Val::gpioP2> gpioP2{};
            constexpr MPL::Value<p21Val,p21Val::pwm1> pwm1{};
            constexpr MPL::Value<p21Val,p21Val::rxd1> rxd1{};
            constexpr MPL::Value<p21Val,p21Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,p21Val> p21{}; 
        ///Pin function select P2.2.
        enum class p22Val {
            gpioP2=0x00000000,     ///<GPIO P2.2
            pwm1=0x00000001,     ///<PWM1.3
            cts1=0x00000002,     ///<CTS1
            reserved=0x00000003,     ///<Reserved
        };
        namespace p22ValC{
            constexpr MPL::Value<p22Val,p22Val::gpioP2> gpioP2{};
            constexpr MPL::Value<p22Val,p22Val::pwm1> pwm1{};
            constexpr MPL::Value<p22Val,p22Val::cts1> cts1{};
            constexpr MPL::Value<p22Val,p22Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,p22Val> p22{}; 
        ///Pin function select P2.3.
        enum class p23Val {
            gpioP2=0x00000000,     ///<GPIO P2.3.
            pwm1=0x00000001,     ///<PWM1.4
            dcd1=0x00000002,     ///<DCD1
            reserved=0x00000003,     ///<Reserved.
        };
        namespace p23ValC{
            constexpr MPL::Value<p23Val,p23Val::gpioP2> gpioP2{};
            constexpr MPL::Value<p23Val,p23Val::pwm1> pwm1{};
            constexpr MPL::Value<p23Val,p23Val::dcd1> dcd1{};
            constexpr MPL::Value<p23Val,p23Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,p23Val> p23{}; 
        ///Pin function select P2.4.
        enum class p24Val {
            gpioP2=0x00000000,     ///<GPIO P2.4.
            pwm1=0x00000001,     ///<PWM1.5
            dsr1=0x00000002,     ///<DSR1
            reserved=0x00000003,     ///<Reserved.
        };
        namespace p24ValC{
            constexpr MPL::Value<p24Val,p24Val::gpioP2> gpioP2{};
            constexpr MPL::Value<p24Val,p24Val::pwm1> pwm1{};
            constexpr MPL::Value<p24Val,p24Val::dsr1> dsr1{};
            constexpr MPL::Value<p24Val,p24Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,p24Val> p24{}; 
        ///Pin function select P2.5.
        enum class p25Val {
            gpioP2=0x00000000,     ///<GPIO P2.5.
            pwm1=0x00000001,     ///<PWM1.6
            dtr1=0x00000002,     ///<DTR1
            reserved=0x00000003,     ///<Reserved
        };
        namespace p25ValC{
            constexpr MPL::Value<p25Val,p25Val::gpioP2> gpioP2{};
            constexpr MPL::Value<p25Val,p25Val::pwm1> pwm1{};
            constexpr MPL::Value<p25Val,p25Val::dtr1> dtr1{};
            constexpr MPL::Value<p25Val,p25Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,p25Val> p25{}; 
        ///Pin function select P2.6.
        enum class p26Val {
            gpioP2=0x00000000,     ///<GPIO P2.6.
            pcap1=0x00000001,     ///<PCAP1.0
            ri1=0x00000002,     ///<RI1
            reserved=0x00000003,     ///<Reserved
        };
        namespace p26ValC{
            constexpr MPL::Value<p26Val,p26Val::gpioP2> gpioP2{};
            constexpr MPL::Value<p26Val,p26Val::pcap1> pcap1{};
            constexpr MPL::Value<p26Val,p26Val::ri1> ri1{};
            constexpr MPL::Value<p26Val,p26Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,p26Val> p26{}; 
        ///Pin function select P2.7.
        enum class p27Val {
            gpioP2=0x00000000,     ///<GPIO P2.7.
            rd2=0x00000001,     ///<RD2
            rts1=0x00000002,     ///<RTS1
            reserved=0x00000003,     ///<Reserved
        };
        namespace p27ValC{
            constexpr MPL::Value<p27Val,p27Val::gpioP2> gpioP2{};
            constexpr MPL::Value<p27Val,p27Val::rd2> rd2{};
            constexpr MPL::Value<p27Val,p27Val::rts1> rts1{};
            constexpr MPL::Value<p27Val,p27Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,p27Val> p27{}; 
        ///Pin function select P2.8.
        enum class p28Val {
            gpioP2=0x00000000,     ///<GPIO P2.8.
            td2=0x00000001,     ///<TD2
            txd2=0x00000002,     ///<TXD2
            enetMdc=0x00000003,     ///<ENET_MDC
        };
        namespace p28ValC{
            constexpr MPL::Value<p28Val,p28Val::gpioP2> gpioP2{};
            constexpr MPL::Value<p28Val,p28Val::td2> td2{};
            constexpr MPL::Value<p28Val,p28Val::txd2> txd2{};
            constexpr MPL::Value<p28Val,p28Val::enetMdc> enetMdc{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,p28Val> p28{}; 
        ///Pin function select P2.9.
        enum class p29Val {
            gpioP2=0x00000000,     ///<GPIO P2.9
            usbConnect=0x00000001,     ///<USB_CONNECT
            rxd2=0x00000002,     ///<RXD2
            enetMdio=0x00000003,     ///<ENET_MDIO
        };
        namespace p29ValC{
            constexpr MPL::Value<p29Val,p29Val::gpioP2> gpioP2{};
            constexpr MPL::Value<p29Val,p29Val::usbConnect> usbConnect{};
            constexpr MPL::Value<p29Val,p29Val::rxd2> rxd2{};
            constexpr MPL::Value<p29Val,p29Val::enetMdio> enetMdio{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,p29Val> p29{}; 
        ///Pin function select P2.10.
        enum class p210Val {
            gpioP2=0x00000000,     ///<GPIO P2.10
            eint0=0x00000001,     ///<EINT0
            nmi=0x00000002,     ///<NMI
            reserved=0x00000003,     ///<Reserved
        };
        namespace p210ValC{
            constexpr MPL::Value<p210Val,p210Val::gpioP2> gpioP2{};
            constexpr MPL::Value<p210Val,p210Val::eint0> eint0{};
            constexpr MPL::Value<p210Val,p210Val::nmi> nmi{};
            constexpr MPL::Value<p210Val,p210Val::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,p210Val> p210{}; 
        ///Pin function select P2.11.
        enum class p211Val {
            gpioP2=0x00000000,     ///<GPIO P2.11
            eint1=0x00000001,     ///<EINT1
            reserved=0x00000002,     ///<Reserved
            i2stxClk=0x00000003,     ///<I2STX_CLK
        };
        namespace p211ValC{
            constexpr MPL::Value<p211Val,p211Val::gpioP2> gpioP2{};
            constexpr MPL::Value<p211Val,p211Val::eint1> eint1{};
            constexpr MPL::Value<p211Val,p211Val::reserved> reserved{};
            constexpr MPL::Value<p211Val,p211Val::i2stxClk> i2stxClk{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,p211Val> p211{}; 
        ///Pin function select P2.12.
        enum class p212Val {
            gpioP2=0x00000000,     ///<GPIO P2.12
            eint2=0x00000001,     ///<EINT2
            reserved=0x00000002,     ///<Reserved
            i2stxWs=0x00000003,     ///<I2STX_WS
        };
        namespace p212ValC{
            constexpr MPL::Value<p212Val,p212Val::gpioP2> gpioP2{};
            constexpr MPL::Value<p212Val,p212Val::eint2> eint2{};
            constexpr MPL::Value<p212Val,p212Val::reserved> reserved{};
            constexpr MPL::Value<p212Val,p212Val::i2stxWs> i2stxWs{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,p212Val> p212{}; 
        ///Pin function select P2.13.
        enum class p213Val {
            gpioP2=0x00000000,     ///<GPIO P2.13
            eint3=0x00000001,     ///<EINT3
            reserved=0x00000002,     ///<Reserved
            i2stxSda=0x00000003,     ///<I2STX_SDA
        };
        namespace p213ValC{
            constexpr MPL::Value<p213Val,p213Val::gpioP2> gpioP2{};
            constexpr MPL::Value<p213Val,p213Val::eint3> eint3{};
            constexpr MPL::Value<p213Val,p213Val::reserved> reserved{};
            constexpr MPL::Value<p213Val,p213Val::i2stxSda> i2stxSda{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,p213Val> p213{}; 
    }
    namespace Nonepinsel7{    ///<Pin function select register 7
        using Addr = Register::Address<0x4002c01c,0xffc3ffff,0,unsigned>;
        ///Pin function select P3.25.
        enum class p325Val {
            gpioP3=0x00000000,     ///<GPIO P3.25
            reserved=0x00000001,     ///<Reserved
            mat0=0x00000002,     ///<MAT0.0
            pwm1=0x00000003,     ///<PWM1.2
        };
        namespace p325ValC{
            constexpr MPL::Value<p325Val,p325Val::gpioP3> gpioP3{};
            constexpr MPL::Value<p325Val,p325Val::reserved> reserved{};
            constexpr MPL::Value<p325Val,p325Val::mat0> mat0{};
            constexpr MPL::Value<p325Val,p325Val::pwm1> pwm1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,p325Val> p325{}; 
        ///Pin function select P3.26.
        enum class p326Val {
            gpioP3=0x00000000,     ///<GPIO P3.26
            stclk=0x00000001,     ///<STCLK
            mat0=0x00000002,     ///<MAT0.1
            pwm1=0x00000003,     ///<PWM1.3
        };
        namespace p326ValC{
            constexpr MPL::Value<p326Val,p326Val::gpioP3> gpioP3{};
            constexpr MPL::Value<p326Val,p326Val::stclk> stclk{};
            constexpr MPL::Value<p326Val,p326Val::mat0> mat0{};
            constexpr MPL::Value<p326Val,p326Val::pwm1> pwm1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,p326Val> p326{}; 
    }
    namespace Nonepinsel9{    ///<Pin function select register 9
        using Addr = Register::Address<0x4002c024,0xf0ffffff,0,unsigned>;
        ///Pin function select P4.28.
        enum class p428Val {
            gpioP4=0x00000000,     ///<GPIO P4.28
            rxMclk=0x00000001,     ///<RX_MCLK
            mat2=0x00000002,     ///<MAT2.0
            txd3=0x00000003,     ///<TXD3
        };
        namespace p428ValC{
            constexpr MPL::Value<p428Val,p428Val::gpioP4> gpioP4{};
            constexpr MPL::Value<p428Val,p428Val::rxMclk> rxMclk{};
            constexpr MPL::Value<p428Val,p428Val::mat2> mat2{};
            constexpr MPL::Value<p428Val,p428Val::txd3> txd3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,p428Val> p428{}; 
        ///Pin function select P4.29.
        enum class p429Val {
            gpioP4=0x00000000,     ///<GPIO P4.29
            txMclk=0x00000001,     ///<TX_MCLK
            mat2=0x00000002,     ///<MAT2.1
            rxd3=0x00000003,     ///<RXD3
        };
        namespace p429ValC{
            constexpr MPL::Value<p429Val,p429Val::gpioP4> gpioP4{};
            constexpr MPL::Value<p429Val,p429Val::txMclk> txMclk{};
            constexpr MPL::Value<p429Val,p429Val::mat2> mat2{};
            constexpr MPL::Value<p429Val,p429Val::rxd3> rxd3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,p429Val> p429{}; 
    }
    namespace Nonepinsel10{    ///<Pin function select register 10
        using Addr = Register::Address<0x4002c028,0xfffffff7,0,unsigned>;
        ///TPIU interface pins control.
        enum class tpiuctrlVal {
            disabled=0x00000000,     ///<Disabled. TPIU interface is disabled.
            enabled=0x00000001,     ///<Enabled. TPIU interface is enabled. TPIU signals are available on the pins hosting them regardless of the PINSEL4 content.
        };
        namespace tpiuctrlValC{
            constexpr MPL::Value<tpiuctrlVal,tpiuctrlVal::disabled> disabled{};
            constexpr MPL::Value<tpiuctrlVal,tpiuctrlVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,tpiuctrlVal> tpiuctrl{}; 
    }
    namespace Nonepinmode0{    ///<Pin mode select register 0
        using Addr = Register::Address<0x4002c040,0x3f000000,0,unsigned>;
        ///Port 0 pin 0 on-chip pull-up/down resistor control.
        enum class p000modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.0 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.0 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.0 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.0 has a pull-down resistor enabled.
        };
        namespace p000modeValC{
            constexpr MPL::Value<p000modeVal,p000modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p000modeVal,p000modeVal::repeater> repeater{};
            constexpr MPL::Value<p000modeVal,p000modeVal::disabled> disabled{};
            constexpr MPL::Value<p000modeVal,p000modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,p000modeVal> p000mode{}; 
        ///Port 0 pin 1 control.
        enum class p001modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.1 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.1 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.1 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.1 has a pull-down resistor enabled.
        };
        namespace p001modeValC{
            constexpr MPL::Value<p001modeVal,p001modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p001modeVal,p001modeVal::repeater> repeater{};
            constexpr MPL::Value<p001modeVal,p001modeVal::disabled> disabled{};
            constexpr MPL::Value<p001modeVal,p001modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,p001modeVal> p001mode{}; 
        ///Port 0 pin 2 control.
        enum class p002modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.2 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.2 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.2 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.2 has a pull-down resistor enabled.
        };
        namespace p002modeValC{
            constexpr MPL::Value<p002modeVal,p002modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p002modeVal,p002modeVal::repeater> repeater{};
            constexpr MPL::Value<p002modeVal,p002modeVal::disabled> disabled{};
            constexpr MPL::Value<p002modeVal,p002modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,p002modeVal> p002mode{}; 
        ///Port 0 pin 3 control.
        enum class p003modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.3 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.3 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.3 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.3 has a pull-down resistor enabled.
        };
        namespace p003modeValC{
            constexpr MPL::Value<p003modeVal,p003modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p003modeVal,p003modeVal::repeater> repeater{};
            constexpr MPL::Value<p003modeVal,p003modeVal::disabled> disabled{};
            constexpr MPL::Value<p003modeVal,p003modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,p003modeVal> p003mode{}; 
        ///Port 0 pin 4 control.
        enum class p004modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.4 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.4 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.4 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.4 has a pull-down resistor enabled.
        };
        namespace p004modeValC{
            constexpr MPL::Value<p004modeVal,p004modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p004modeVal,p004modeVal::repeater> repeater{};
            constexpr MPL::Value<p004modeVal,p004modeVal::disabled> disabled{};
            constexpr MPL::Value<p004modeVal,p004modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,p004modeVal> p004mode{}; 
        ///Port 0 pin 5 control.
        enum class p005modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.5 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.5 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.5 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.5 has a pull-down resistor enabled.
        };
        namespace p005modeValC{
            constexpr MPL::Value<p005modeVal,p005modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p005modeVal,p005modeVal::repeater> repeater{};
            constexpr MPL::Value<p005modeVal,p005modeVal::disabled> disabled{};
            constexpr MPL::Value<p005modeVal,p005modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,p005modeVal> p005mode{}; 
        ///Port 0 pin 6 control.
        enum class p006modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.6 pin has a pull-up resistor enabled.
            disabled=0x00000001,     ///<Disabled. Repeater. P0.6 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.6 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.6 has a pull-down resistor enabled.
        };
        namespace p006modeValC{
            constexpr MPL::Value<p006modeVal,p006modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p006modeVal,p006modeVal::disabled> disabled{};
            constexpr MPL::Value<p006modeVal,p006modeVal::disabled> disabled{};
            constexpr MPL::Value<p006modeVal,p006modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,p006modeVal> p006mode{}; 
        ///Port 0 pin 7 control.
        enum class p007modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.7 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.7 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.7 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.7 has a pull-down resistor enabled.
        };
        namespace p007modeValC{
            constexpr MPL::Value<p007modeVal,p007modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p007modeVal,p007modeVal::repeater> repeater{};
            constexpr MPL::Value<p007modeVal,p007modeVal::disabled> disabled{};
            constexpr MPL::Value<p007modeVal,p007modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,p007modeVal> p007mode{}; 
        ///Port 0 pin 8 control.
        enum class p008modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.8 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.8 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.8 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.8 has a pull-down resistor enabled.
        };
        namespace p008modeValC{
            constexpr MPL::Value<p008modeVal,p008modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p008modeVal,p008modeVal::repeater> repeater{};
            constexpr MPL::Value<p008modeVal,p008modeVal::disabled> disabled{};
            constexpr MPL::Value<p008modeVal,p008modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,p008modeVal> p008mode{}; 
        ///Port 0 pin 9 control.
        enum class p009modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.9 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.9 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.9 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.9 has a pull-down resistor enabled.
        };
        namespace p009modeValC{
            constexpr MPL::Value<p009modeVal,p009modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p009modeVal,p009modeVal::repeater> repeater{};
            constexpr MPL::Value<p009modeVal,p009modeVal::disabled> disabled{};
            constexpr MPL::Value<p009modeVal,p009modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,p009modeVal> p009mode{}; 
        ///Port 0 pin 10 control.
        enum class p010modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.10 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.10 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.10 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.10 has a pull-down resistor enabled.
        };
        namespace p010modeValC{
            constexpr MPL::Value<p010modeVal,p010modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p010modeVal,p010modeVal::repeater> repeater{};
            constexpr MPL::Value<p010modeVal,p010modeVal::disabled> disabled{};
            constexpr MPL::Value<p010modeVal,p010modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,p010modeVal> p010mode{}; 
        ///Port 0 pin 11 control.
        enum class p011modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.11 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.11 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.11 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.11 has a pull-down resistor enabled.
        };
        namespace p011modeValC{
            constexpr MPL::Value<p011modeVal,p011modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p011modeVal,p011modeVal::repeater> repeater{};
            constexpr MPL::Value<p011modeVal,p011modeVal::disabled> disabled{};
            constexpr MPL::Value<p011modeVal,p011modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,p011modeVal> p011mode{}; 
        ///Port 0 pin 15 control.
        enum class p015modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.15 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.15 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.15 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.15 has a pull-down resistor enabled.
        };
        namespace p015modeValC{
            constexpr MPL::Value<p015modeVal,p015modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p015modeVal,p015modeVal::repeater> repeater{};
            constexpr MPL::Value<p015modeVal,p015modeVal::disabled> disabled{};
            constexpr MPL::Value<p015modeVal,p015modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,p015modeVal> p015mode{}; 
    }
    namespace Nonepinmode1{    ///<Pin mode select register 1
        using Addr = Register::Address<0x4002c044,0xffc00000,0,unsigned>;
        ///Port 1 pin 16 control.
        enum class p016modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.16 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.16 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.16 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.16 has a pull-down resistor enabled.
        };
        namespace p016modeValC{
            constexpr MPL::Value<p016modeVal,p016modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p016modeVal,p016modeVal::repeater> repeater{};
            constexpr MPL::Value<p016modeVal,p016modeVal::disabled> disabled{};
            constexpr MPL::Value<p016modeVal,p016modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,p016modeVal> p016mode{}; 
        ///Port 1 pin 17 control.
        enum class p017modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.17 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.17 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.17 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.17 has a pull-down resistor enabled.
        };
        namespace p017modeValC{
            constexpr MPL::Value<p017modeVal,p017modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p017modeVal,p017modeVal::repeater> repeater{};
            constexpr MPL::Value<p017modeVal,p017modeVal::disabled> disabled{};
            constexpr MPL::Value<p017modeVal,p017modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,p017modeVal> p017mode{}; 
        ///Port 1 pin 18 control.
        enum class p018modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.18 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.18 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.18 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.18 has a pull-down resistor enabled.
        };
        namespace p018modeValC{
            constexpr MPL::Value<p018modeVal,p018modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p018modeVal,p018modeVal::repeater> repeater{};
            constexpr MPL::Value<p018modeVal,p018modeVal::disabled> disabled{};
            constexpr MPL::Value<p018modeVal,p018modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,p018modeVal> p018mode{}; 
        ///Port 1 pin 19 control.
        enum class p019modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.19 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.19 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.19 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.19 has a pull-down resistor enabled.
        };
        namespace p019modeValC{
            constexpr MPL::Value<p019modeVal,p019modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p019modeVal,p019modeVal::repeater> repeater{};
            constexpr MPL::Value<p019modeVal,p019modeVal::disabled> disabled{};
            constexpr MPL::Value<p019modeVal,p019modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,p019modeVal> p019mode{}; 
        ///Port 1 pin 20 control.
        enum class p020modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.20 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.20 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.20 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.20 has a pull-down resistor enabled.
        };
        namespace p020modeValC{
            constexpr MPL::Value<p020modeVal,p020modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p020modeVal,p020modeVal::repeater> repeater{};
            constexpr MPL::Value<p020modeVal,p020modeVal::disabled> disabled{};
            constexpr MPL::Value<p020modeVal,p020modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,p020modeVal> p020mode{}; 
        ///Port 1 pin 21 control.
        enum class p021modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.21 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.21 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.21 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.21 has a pull-down resistor enabled.
        };
        namespace p021modeValC{
            constexpr MPL::Value<p021modeVal,p021modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p021modeVal,p021modeVal::repeater> repeater{};
            constexpr MPL::Value<p021modeVal,p021modeVal::disabled> disabled{};
            constexpr MPL::Value<p021modeVal,p021modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,p021modeVal> p021mode{}; 
        ///Port 1 pin 22 control.
        enum class p022modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.22 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.22 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.22 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.22 has a pull-down resistor enabled.
        };
        namespace p022modeValC{
            constexpr MPL::Value<p022modeVal,p022modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p022modeVal,p022modeVal::repeater> repeater{};
            constexpr MPL::Value<p022modeVal,p022modeVal::disabled> disabled{};
            constexpr MPL::Value<p022modeVal,p022modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,p022modeVal> p022mode{}; 
        ///Port 1 pin 23 control.
        enum class p023modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.23 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.23 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.23 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.23 has a pull-down resistor enabled.
        };
        namespace p023modeValC{
            constexpr MPL::Value<p023modeVal,p023modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p023modeVal,p023modeVal::repeater> repeater{};
            constexpr MPL::Value<p023modeVal,p023modeVal::disabled> disabled{};
            constexpr MPL::Value<p023modeVal,p023modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,p023modeVal> p023mode{}; 
        ///Port 1 pin 24 control.
        enum class p024modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.24 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.24 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.24 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.24 has a pull-down resistor enabled.
        };
        namespace p024modeValC{
            constexpr MPL::Value<p024modeVal,p024modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p024modeVal,p024modeVal::repeater> repeater{};
            constexpr MPL::Value<p024modeVal,p024modeVal::disabled> disabled{};
            constexpr MPL::Value<p024modeVal,p024modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,p024modeVal> p024mode{}; 
        ///Port 1 pin 25 control.
        enum class p025modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.25 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.25 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.25 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.25 has a pull-down resistor enabled.
        };
        namespace p025modeValC{
            constexpr MPL::Value<p025modeVal,p025modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p025modeVal,p025modeVal::repeater> repeater{};
            constexpr MPL::Value<p025modeVal,p025modeVal::disabled> disabled{};
            constexpr MPL::Value<p025modeVal,p025modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,p025modeVal> p025mode{}; 
        ///Port 1 pin 26 control.
        enum class p026modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.26 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.26 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.26 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.26 has a pull-down resistor enabled.
        };
        namespace p026modeValC{
            constexpr MPL::Value<p026modeVal,p026modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p026modeVal,p026modeVal::repeater> repeater{};
            constexpr MPL::Value<p026modeVal,p026modeVal::disabled> disabled{};
            constexpr MPL::Value<p026modeVal,p026modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,p026modeVal> p026mode{}; 
    }
    namespace Nonepinmode2{    ///<Pin mode select register 2
        using Addr = Register::Address<0x4002c048,0x0fc0fcf0,0,unsigned>;
        ///Port 1 pin 0 control.
        enum class p100modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.0 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.0 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.0 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.0 has a pull-down resistor enabled.
        };
        namespace p100modeValC{
            constexpr MPL::Value<p100modeVal,p100modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p100modeVal,p100modeVal::repeater> repeater{};
            constexpr MPL::Value<p100modeVal,p100modeVal::disabled> disabled{};
            constexpr MPL::Value<p100modeVal,p100modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,p100modeVal> p100mode{}; 
        ///Port 1 pin 1 control.
        enum class p101modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.1 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.1 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.1 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.1 has a pull-down resistor enabled.
        };
        namespace p101modeValC{
            constexpr MPL::Value<p101modeVal,p101modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p101modeVal,p101modeVal::repeater> repeater{};
            constexpr MPL::Value<p101modeVal,p101modeVal::disabled> disabled{};
            constexpr MPL::Value<p101modeVal,p101modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,p101modeVal> p101mode{}; 
        ///Port 1 pin 4 control.
        enum class p104modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.4 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.4 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.4 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.4 has a pull-down resistor enabled.
        };
        namespace p104modeValC{
            constexpr MPL::Value<p104modeVal,p104modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p104modeVal,p104modeVal::repeater> repeater{};
            constexpr MPL::Value<p104modeVal,p104modeVal::disabled> disabled{};
            constexpr MPL::Value<p104modeVal,p104modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,p104modeVal> p104mode{}; 
        ///Port 1 pin 8 control.
        enum class p108modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.8 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.8 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.8 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.8 has a pull-down resistor enabled.
        };
        namespace p108modeValC{
            constexpr MPL::Value<p108modeVal,p108modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p108modeVal,p108modeVal::repeater> repeater{};
            constexpr MPL::Value<p108modeVal,p108modeVal::disabled> disabled{};
            constexpr MPL::Value<p108modeVal,p108modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,p108modeVal> p108mode{}; 
        ///Port 1 pin 9 control.
        enum class p109modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.9 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.9 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.9 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.9 has a pull-down resistor enabled.
        };
        namespace p109modeValC{
            constexpr MPL::Value<p109modeVal,p109modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p109modeVal,p109modeVal::repeater> repeater{};
            constexpr MPL::Value<p109modeVal,p109modeVal::disabled> disabled{};
            constexpr MPL::Value<p109modeVal,p109modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,p109modeVal> p109mode{}; 
        ///Port 1 pin 10 control.
        enum class p110modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.10 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.10 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.10 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.10 has a pull-down resistor enabled.
        };
        namespace p110modeValC{
            constexpr MPL::Value<p110modeVal,p110modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p110modeVal,p110modeVal::repeater> repeater{};
            constexpr MPL::Value<p110modeVal,p110modeVal::disabled> disabled{};
            constexpr MPL::Value<p110modeVal,p110modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,p110modeVal> p110mode{}; 
        ///Port 1 pin 14 control.
        enum class p114modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.14 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.14 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.14 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.14 has a pull-down resistor enabled.
        };
        namespace p114modeValC{
            constexpr MPL::Value<p114modeVal,p114modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p114modeVal,p114modeVal::repeater> repeater{};
            constexpr MPL::Value<p114modeVal,p114modeVal::disabled> disabled{};
            constexpr MPL::Value<p114modeVal,p114modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,p114modeVal> p114mode{}; 
        ///Port 1 pin 15 control.
        enum class p115modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.15 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.15 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.15 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.15 has a pull-down resistor enabled.
        };
        namespace p115modeValC{
            constexpr MPL::Value<p115modeVal,p115modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p115modeVal,p115modeVal::repeater> repeater{};
            constexpr MPL::Value<p115modeVal,p115modeVal::disabled> disabled{};
            constexpr MPL::Value<p115modeVal,p115modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,p115modeVal> p115mode{}; 
    }
    namespace Nonepinmode3{    ///<Pin mode select register 3.
        using Addr = Register::Address<0x4002c04c,0x00000000,0,unsigned>;
        ///Port 1 pin 16 control.
        enum class p116modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.16 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.16 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.16 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.16 has a pull-down resistor enabled.
        };
        namespace p116modeValC{
            constexpr MPL::Value<p116modeVal,p116modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p116modeVal,p116modeVal::repeater> repeater{};
            constexpr MPL::Value<p116modeVal,p116modeVal::disabled> disabled{};
            constexpr MPL::Value<p116modeVal,p116modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,p116modeVal> p116mode{}; 
        ///Port 1 pin 17 control.
        enum class p117modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.17 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.17 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.17 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.17 has a pull-down resistor enabled.
        };
        namespace p117modeValC{
            constexpr MPL::Value<p117modeVal,p117modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p117modeVal,p117modeVal::repeater> repeater{};
            constexpr MPL::Value<p117modeVal,p117modeVal::disabled> disabled{};
            constexpr MPL::Value<p117modeVal,p117modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,p117modeVal> p117mode{}; 
        ///Port 1 pin 18 control.
        enum class p118modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.18 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.18 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.18 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.18 has a pull-down resistor enabled.
        };
        namespace p118modeValC{
            constexpr MPL::Value<p118modeVal,p118modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p118modeVal,p118modeVal::repeater> repeater{};
            constexpr MPL::Value<p118modeVal,p118modeVal::disabled> disabled{};
            constexpr MPL::Value<p118modeVal,p118modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,p118modeVal> p118mode{}; 
        ///Port 1 pin 19 control.
        enum class p119modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.19 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.19 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.19 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.19 has a pull-down resistor enabled.
        };
        namespace p119modeValC{
            constexpr MPL::Value<p119modeVal,p119modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p119modeVal,p119modeVal::repeater> repeater{};
            constexpr MPL::Value<p119modeVal,p119modeVal::disabled> disabled{};
            constexpr MPL::Value<p119modeVal,p119modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,p119modeVal> p119mode{}; 
        ///Port 1 pin 20 control.
        enum class p120modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.20 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.20 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.20 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.20 has a pull-down resistor enabled.
        };
        namespace p120modeValC{
            constexpr MPL::Value<p120modeVal,p120modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p120modeVal,p120modeVal::repeater> repeater{};
            constexpr MPL::Value<p120modeVal,p120modeVal::disabled> disabled{};
            constexpr MPL::Value<p120modeVal,p120modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,p120modeVal> p120mode{}; 
        ///Port 1 pin 21 control.
        enum class p121modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.21 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.21 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.21 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.21 has a pull-down resistor enabled.
        };
        namespace p121modeValC{
            constexpr MPL::Value<p121modeVal,p121modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p121modeVal,p121modeVal::repeater> repeater{};
            constexpr MPL::Value<p121modeVal,p121modeVal::disabled> disabled{};
            constexpr MPL::Value<p121modeVal,p121modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,p121modeVal> p121mode{}; 
        ///Port 1 pin 22 control.
        enum class p122modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.22 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.22 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.22 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.22 has a pull-down resistor enabled.
        };
        namespace p122modeValC{
            constexpr MPL::Value<p122modeVal,p122modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p122modeVal,p122modeVal::repeater> repeater{};
            constexpr MPL::Value<p122modeVal,p122modeVal::disabled> disabled{};
            constexpr MPL::Value<p122modeVal,p122modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,p122modeVal> p122mode{}; 
        ///Port 1 pin 23 control.
        enum class p123modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.23 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.23 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.23 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.23 has a pull-down resistor enabled.
        };
        namespace p123modeValC{
            constexpr MPL::Value<p123modeVal,p123modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p123modeVal,p123modeVal::repeater> repeater{};
            constexpr MPL::Value<p123modeVal,p123modeVal::disabled> disabled{};
            constexpr MPL::Value<p123modeVal,p123modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,p123modeVal> p123mode{}; 
        ///Port 1 pin 24 control.
        enum class p124modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.24 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.24 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.24 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.24 has a pull-down resistor enabled.
        };
        namespace p124modeValC{
            constexpr MPL::Value<p124modeVal,p124modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p124modeVal,p124modeVal::repeater> repeater{};
            constexpr MPL::Value<p124modeVal,p124modeVal::disabled> disabled{};
            constexpr MPL::Value<p124modeVal,p124modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,p124modeVal> p124mode{}; 
        ///Port 1 pin 25 control.
        enum class p125modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.25 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.25 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.25 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.25 has a pull-down resistor enabled.
        };
        namespace p125modeValC{
            constexpr MPL::Value<p125modeVal,p125modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p125modeVal,p125modeVal::repeater> repeater{};
            constexpr MPL::Value<p125modeVal,p125modeVal::disabled> disabled{};
            constexpr MPL::Value<p125modeVal,p125modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,p125modeVal> p125mode{}; 
        ///Port 1 pin 26 control.
        enum class p126modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.26 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.26 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.26 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.26 has a pull-down resistor enabled.
        };
        namespace p126modeValC{
            constexpr MPL::Value<p126modeVal,p126modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p126modeVal,p126modeVal::repeater> repeater{};
            constexpr MPL::Value<p126modeVal,p126modeVal::disabled> disabled{};
            constexpr MPL::Value<p126modeVal,p126modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,p126modeVal> p126mode{}; 
        ///Port 1 pin 27 control.
        enum class p127modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.27 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.27 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.27 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.27 has a pull-down resistor enabled.
        };
        namespace p127modeValC{
            constexpr MPL::Value<p127modeVal,p127modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p127modeVal,p127modeVal::repeater> repeater{};
            constexpr MPL::Value<p127modeVal,p127modeVal::disabled> disabled{};
            constexpr MPL::Value<p127modeVal,p127modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,p127modeVal> p127mode{}; 
        ///Port 1 pin 28 control.
        enum class p128modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.28 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.28 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.28 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.28 has a pull-down resistor enabled.
        };
        namespace p128modeValC{
            constexpr MPL::Value<p128modeVal,p128modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p128modeVal,p128modeVal::repeater> repeater{};
            constexpr MPL::Value<p128modeVal,p128modeVal::disabled> disabled{};
            constexpr MPL::Value<p128modeVal,p128modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,p128modeVal> p128mode{}; 
        ///Port 1 pin 29 control.
        enum class p129modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.29 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.29 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.29 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.29 has a pull-down resistor enabled.
        };
        namespace p129modeValC{
            constexpr MPL::Value<p129modeVal,p129modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p129modeVal,p129modeVal::repeater> repeater{};
            constexpr MPL::Value<p129modeVal,p129modeVal::disabled> disabled{};
            constexpr MPL::Value<p129modeVal,p129modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,p129modeVal> p129mode{}; 
        ///Port 1 pin 30 control.
        enum class p130modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.30 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.30 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.30 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.30 has a pull-down resistor enabled.
        };
        namespace p130modeValC{
            constexpr MPL::Value<p130modeVal,p130modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p130modeVal,p130modeVal::repeater> repeater{};
            constexpr MPL::Value<p130modeVal,p130modeVal::disabled> disabled{};
            constexpr MPL::Value<p130modeVal,p130modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,p130modeVal> p130mode{}; 
        ///Port 1 pin 31 control.
        enum class p131modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.31 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.31 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.31 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.31 has a pull-down resistor enabled.
        };
        namespace p131modeValC{
            constexpr MPL::Value<p131modeVal,p131modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p131modeVal,p131modeVal::repeater> repeater{};
            constexpr MPL::Value<p131modeVal,p131modeVal::disabled> disabled{};
            constexpr MPL::Value<p131modeVal,p131modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,p131modeVal> p131mode{}; 
    }
    namespace Nonepinmode4{    ///<Pin mode select register 4
        using Addr = Register::Address<0x4002c050,0xf0000000,0,unsigned>;
        ///Port 2 pin 0 control.
        enum class p200modeVal {
            pullUp=0x00000000,     ///<Pull-up. P2.0 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P2.0 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P2.0 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P2.0 has a pull-down resistor enabled.
        };
        namespace p200modeValC{
            constexpr MPL::Value<p200modeVal,p200modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p200modeVal,p200modeVal::repeater> repeater{};
            constexpr MPL::Value<p200modeVal,p200modeVal::disabled> disabled{};
            constexpr MPL::Value<p200modeVal,p200modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,p200modeVal> p200mode{}; 
        ///Port 2 pin 1 control.
        enum class p201modeVal {
            pullUp=0x00000000,     ///<Pull-up. P2.1 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P2.1 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P2.1 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P2.1 has a pull-down resistor enabled.
        };
        namespace p201modeValC{
            constexpr MPL::Value<p201modeVal,p201modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p201modeVal,p201modeVal::repeater> repeater{};
            constexpr MPL::Value<p201modeVal,p201modeVal::disabled> disabled{};
            constexpr MPL::Value<p201modeVal,p201modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,p201modeVal> p201mode{}; 
        ///Port 2 pin 2 control.
        enum class p202modeVal {
            pullUp=0x00000000,     ///<Pull-up. P2.2 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P2.2 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P2.2 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P2.2 has a pull-down resistor enabled.
        };
        namespace p202modeValC{
            constexpr MPL::Value<p202modeVal,p202modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p202modeVal,p202modeVal::repeater> repeater{};
            constexpr MPL::Value<p202modeVal,p202modeVal::disabled> disabled{};
            constexpr MPL::Value<p202modeVal,p202modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,p202modeVal> p202mode{}; 
        ///Port 2 pin 3 control.
        enum class p203modeVal {
            pullUp=0x00000000,     ///<Pull-up. P2.3 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P2.3 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P2.3 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P2.3 has a pull-down resistor enabled.
        };
        namespace p203modeValC{
            constexpr MPL::Value<p203modeVal,p203modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p203modeVal,p203modeVal::repeater> repeater{};
            constexpr MPL::Value<p203modeVal,p203modeVal::disabled> disabled{};
            constexpr MPL::Value<p203modeVal,p203modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,p203modeVal> p203mode{}; 
        ///Port 2 pin 4 control.
        enum class p204modeVal {
            pullUp=0x00000000,     ///<Pull-up. P2.4 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P2.4 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P2.4 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P2.4 has a pull-down resistor enabled.
        };
        namespace p204modeValC{
            constexpr MPL::Value<p204modeVal,p204modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p204modeVal,p204modeVal::repeater> repeater{};
            constexpr MPL::Value<p204modeVal,p204modeVal::disabled> disabled{};
            constexpr MPL::Value<p204modeVal,p204modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,p204modeVal> p204mode{}; 
        ///Port 2 pin 5 control.
        enum class p205modeVal {
            pullUp=0x00000000,     ///<Pull-up. P2.5 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P2.5 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P2.5 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P2.5 has a pull-down resistor enabled.
        };
        namespace p205modeValC{
            constexpr MPL::Value<p205modeVal,p205modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p205modeVal,p205modeVal::repeater> repeater{};
            constexpr MPL::Value<p205modeVal,p205modeVal::disabled> disabled{};
            constexpr MPL::Value<p205modeVal,p205modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,p205modeVal> p205mode{}; 
        ///Port 2 pin 6 control.
        enum class p206modeVal {
            pullUp=0x00000000,     ///<Pull-up. P2.6 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P2.6 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P2.6 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P2.6 has a pull-down resistor enabled.
        };
        namespace p206modeValC{
            constexpr MPL::Value<p206modeVal,p206modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p206modeVal,p206modeVal::repeater> repeater{};
            constexpr MPL::Value<p206modeVal,p206modeVal::disabled> disabled{};
            constexpr MPL::Value<p206modeVal,p206modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,p206modeVal> p206mode{}; 
        ///Port 2 pin 7 control.
        enum class p207modeVal {
            pullUp=0x00000000,     ///<Pull-up. P2.7 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P2.7 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P2.7 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P2.7 has a pull-down resistor enabled.
        };
        namespace p207modeValC{
            constexpr MPL::Value<p207modeVal,p207modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p207modeVal,p207modeVal::repeater> repeater{};
            constexpr MPL::Value<p207modeVal,p207modeVal::disabled> disabled{};
            constexpr MPL::Value<p207modeVal,p207modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,p207modeVal> p207mode{}; 
        ///Port 2 pin 8 control.
        enum class p208modeVal {
            pullUp=0x00000000,     ///<Pull-up. P2.8 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P2.8 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P2.8 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P2.8 has a pull-down resistor enabled.
        };
        namespace p208modeValC{
            constexpr MPL::Value<p208modeVal,p208modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p208modeVal,p208modeVal::repeater> repeater{};
            constexpr MPL::Value<p208modeVal,p208modeVal::disabled> disabled{};
            constexpr MPL::Value<p208modeVal,p208modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,p208modeVal> p208mode{}; 
        ///Port 2 pin 9 control.
        enum class p209modeVal {
            pullUp=0x00000000,     ///<Pull-up. P2.9 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P2.9 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P2.9 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P2.9 has a pull-down resistor enabled.
        };
        namespace p209modeValC{
            constexpr MPL::Value<p209modeVal,p209modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p209modeVal,p209modeVal::repeater> repeater{};
            constexpr MPL::Value<p209modeVal,p209modeVal::disabled> disabled{};
            constexpr MPL::Value<p209modeVal,p209modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,p209modeVal> p209mode{}; 
        ///Port 2 pin 10 control.
        enum class p210modeVal {
            pullUp=0x00000000,     ///<Pull-up. P2.10 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P2.10 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P2.10 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P2.10 has a pull-down resistor enabled.
        };
        namespace p210modeValC{
            constexpr MPL::Value<p210modeVal,p210modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p210modeVal,p210modeVal::repeater> repeater{};
            constexpr MPL::Value<p210modeVal,p210modeVal::disabled> disabled{};
            constexpr MPL::Value<p210modeVal,p210modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,p210modeVal> p210mode{}; 
        ///Port 2 pin 11 control.
        enum class p211modeVal {
            pullUp=0x00000000,     ///<Pull-up. P2.11 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P2.11 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P2.11 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P2.11 has a pull-down resistor enabled.
        };
        namespace p211modeValC{
            constexpr MPL::Value<p211modeVal,p211modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p211modeVal,p211modeVal::repeater> repeater{};
            constexpr MPL::Value<p211modeVal,p211modeVal::disabled> disabled{};
            constexpr MPL::Value<p211modeVal,p211modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,p211modeVal> p211mode{}; 
        ///Port 2 pin 12 control.
        enum class p212modeVal {
            pullUp=0x00000000,     ///<Pull-up. P2.12 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P2.12 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P2.12 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P2.12 has a pull-down resistor enabled.
        };
        namespace p212modeValC{
            constexpr MPL::Value<p212modeVal,p212modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p212modeVal,p212modeVal::repeater> repeater{};
            constexpr MPL::Value<p212modeVal,p212modeVal::disabled> disabled{};
            constexpr MPL::Value<p212modeVal,p212modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,p212modeVal> p212mode{}; 
        ///Port 2 pin 13 control.
        enum class p213modeVal {
            pullUp=0x00000000,     ///<Pull-up. P2.13 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P2.13 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P2.13 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P2.13 has a pull-down resistor enabled.
        };
        namespace p213modeValC{
            constexpr MPL::Value<p213modeVal,p213modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p213modeVal,p213modeVal::repeater> repeater{};
            constexpr MPL::Value<p213modeVal,p213modeVal::disabled> disabled{};
            constexpr MPL::Value<p213modeVal,p213modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,p213modeVal> p213mode{}; 
    }
    namespace Nonepinmode7{    ///<Pin mode select register 7
        using Addr = Register::Address<0x4002c05c,0xffc3ffff,0,unsigned>;
        ///Port 3 pin 25 control.
        enum class p325modeVal {
            pullUp=0x00000000,     ///<Pull-up. P3.25 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P3.25 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P3.25 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P3.25 has a pull-down resistor enabled.
        };
        namespace p325modeValC{
            constexpr MPL::Value<p325modeVal,p325modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p325modeVal,p325modeVal::repeater> repeater{};
            constexpr MPL::Value<p325modeVal,p325modeVal::disabled> disabled{};
            constexpr MPL::Value<p325modeVal,p325modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,p325modeVal> p325mode{}; 
        ///Port 3 pin 26 control.
        enum class p326modeVal {
            pullUp=0x00000000,     ///<Pull-up. P3.26 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P3.26 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P3.26 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P3.26 has a pull-down resistor enabled.
        };
        namespace p326modeValC{
            constexpr MPL::Value<p326modeVal,p326modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p326modeVal,p326modeVal::repeater> repeater{};
            constexpr MPL::Value<p326modeVal,p326modeVal::disabled> disabled{};
            constexpr MPL::Value<p326modeVal,p326modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,p326modeVal> p326mode{}; 
    }
    namespace Nonepinmode9{    ///<Pin mode select register 9
        using Addr = Register::Address<0x4002c064,0xf0ffffff,0,unsigned>;
        ///Port 4 pin 28 control.
        enum class p428modeVal {
            pullUp=0x00000000,     ///<Pull-up. P4.28 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P4.28 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P4.28 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P4.28 has a pull-down resistor enabled.
        };
        namespace p428modeValC{
            constexpr MPL::Value<p428modeVal,p428modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p428modeVal,p428modeVal::repeater> repeater{};
            constexpr MPL::Value<p428modeVal,p428modeVal::disabled> disabled{};
            constexpr MPL::Value<p428modeVal,p428modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,p428modeVal> p428mode{}; 
        ///Port 4 pin 29 control.
        enum class p429modeVal {
            pullUp=0x00000000,     ///<Pull-up. P4.29 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P4.29 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P4.29 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P4.29 has a pull-down resistor enabled.
        };
        namespace p429modeValC{
            constexpr MPL::Value<p429modeVal,p429modeVal::pullUp> pullUp{};
            constexpr MPL::Value<p429modeVal,p429modeVal::repeater> repeater{};
            constexpr MPL::Value<p429modeVal,p429modeVal::disabled> disabled{};
            constexpr MPL::Value<p429modeVal,p429modeVal::pullDown> pullDown{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,p429modeVal> p429mode{}; 
    }
    namespace NonepinmodeOd0{    ///<Open drain mode control register 0
        using Addr = Register::Address<0x4002c068,0x98007000,0,unsigned>;
        ///Port 0 pin 0 open drain mode control. Pins may potentially be used for I2C-buses using standard port pins. If so, they should be configured for open drain mode via the related bits in PINMODE_OD0.
        enum class p000odVal {
            normal=0x00000000,     ///<Normal. P0.0 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.0 pin is in the open drain mode.
        };
        namespace p000odValC{
            constexpr MPL::Value<p000odVal,p000odVal::normal> normal{};
            constexpr MPL::Value<p000odVal,p000odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,p000odVal> p000od{}; 
        ///Port 0 pin 1 open drain mode control. Pins may potentially be used for I2C-buses using standard port pins. If so, they should be configured for open drain mode via the related bits in PINMODE_OD0.
        enum class p001odVal {
            normal=0x00000000,     ///<Normal. P0.1 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.1 pin is in the open drain mode.
        };
        namespace p001odValC{
            constexpr MPL::Value<p001odVal,p001odVal::normal> normal{};
            constexpr MPL::Value<p001odVal,p001odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,p001odVal> p001od{}; 
        ///Port 0 pin 2 open drain mode control
        enum class p002odVal {
            normal=0x00000000,     ///<Normal. P0.2 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.2 pin is in the open drain mode.
        };
        namespace p002odValC{
            constexpr MPL::Value<p002odVal,p002odVal::normal> normal{};
            constexpr MPL::Value<p002odVal,p002odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,p002odVal> p002od{}; 
        ///Port 0 pin 3 open drain mode control
        enum class p003odVal {
            normal=0x00000000,     ///<Normal. P0.3 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.3 pin is in the open drain mode.
        };
        namespace p003odValC{
            constexpr MPL::Value<p003odVal,p003odVal::normal> normal{};
            constexpr MPL::Value<p003odVal,p003odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,p003odVal> p003od{}; 
        ///Port 0 pin 4 open drain mode control
        enum class p004odVal {
            normal=0x00000000,     ///<Normal. P0.4 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.4 pin is in the open drain mode.
        };
        namespace p004odValC{
            constexpr MPL::Value<p004odVal,p004odVal::normal> normal{};
            constexpr MPL::Value<p004odVal,p004odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,p004odVal> p004od{}; 
        ///Port 0 pin 5 open drain mode control
        enum class p005odVal {
            normal=0x00000000,     ///<Normal. P0.5 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.5 pin is in the open drain mode.
        };
        namespace p005odValC{
            constexpr MPL::Value<p005odVal,p005odVal::normal> normal{};
            constexpr MPL::Value<p005odVal,p005odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,p005odVal> p005od{}; 
        ///Port 0 pin 6 open drain mode control
        enum class p006odVal {
            normal=0x00000000,     ///<Normal. P0.6 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.6 pin is in the open drain mode.
        };
        namespace p006odValC{
            constexpr MPL::Value<p006odVal,p006odVal::normal> normal{};
            constexpr MPL::Value<p006odVal,p006odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,p006odVal> p006od{}; 
        ///Port 0 pin 7 open drain mode control
        enum class p007odVal {
            normal=0x00000000,     ///<Normal. P0.7 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.7 pin is in the open drain mode.
        };
        namespace p007odValC{
            constexpr MPL::Value<p007odVal,p007odVal::normal> normal{};
            constexpr MPL::Value<p007odVal,p007odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,p007odVal> p007od{}; 
        ///Port 0 pin 8 open drain mode control
        enum class p008odVal {
            normal=0x00000000,     ///<Normal. P0.8 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.8 pin is in the open drain mode.
        };
        namespace p008odValC{
            constexpr MPL::Value<p008odVal,p008odVal::normal> normal{};
            constexpr MPL::Value<p008odVal,p008odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,p008odVal> p008od{}; 
        ///Port 0 pin 9 open drain mode control
        enum class p009odVal {
            normal=0x00000000,     ///<Normal. P0.9 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.9 pin is in the open drain mode.
        };
        namespace p009odValC{
            constexpr MPL::Value<p009odVal,p009odVal::normal> normal{};
            constexpr MPL::Value<p009odVal,p009odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,p009odVal> p009od{}; 
        ///Port 0 pin 10 open drain mode control. Pins may potentially be used for I2C-buses using standard port pins. If so, they should be configured for open drain mode via the related bits in PINMODE_OD0.
        enum class p010odVal {
            normal=0x00000000,     ///<Normal. P0.10 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.10 pin is in the open drain mode.
        };
        namespace p010odValC{
            constexpr MPL::Value<p010odVal,p010odVal::normal> normal{};
            constexpr MPL::Value<p010odVal,p010odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,p010odVal> p010od{}; 
        ///Port 0 pin 11 open drain mode control. Pins may potentially be used for I2C-buses using standard port pins. If so, they should be configured for open drain mode via the related bits in PINMODE_OD0.
        enum class p011odVal {
            normal=0x00000000,     ///<Normal. P0.11 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.11 pin is in the open drain mode.
        };
        namespace p011odValC{
            constexpr MPL::Value<p011odVal,p011odVal::normal> normal{};
            constexpr MPL::Value<p011odVal,p011odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,p011odVal> p011od{}; 
        ///Port 0 pin 15 open drain mode control
        enum class p015odVal {
            normal=0x00000000,     ///<Normal. P0.15 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.15 pin is in the open drain mode.
        };
        namespace p015odValC{
            constexpr MPL::Value<p015odVal,p015odVal::normal> normal{};
            constexpr MPL::Value<p015odVal,p015odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,p015odVal> p015od{}; 
        ///Port 0 pin 16 open drain mode control
        enum class p016odVal {
            normal=0x00000000,     ///<Normal. P0.16 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.16 pin is in the open drain mode.
        };
        namespace p016odValC{
            constexpr MPL::Value<p016odVal,p016odVal::normal> normal{};
            constexpr MPL::Value<p016odVal,p016odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,p016odVal> p016od{}; 
        ///Port 0 pin 17 open drain mode control
        enum class p017odVal {
            normal=0x00000000,     ///<Normal. P0.17 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.17 pin is in the open drain mode.
        };
        namespace p017odValC{
            constexpr MPL::Value<p017odVal,p017odVal::normal> normal{};
            constexpr MPL::Value<p017odVal,p017odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,p017odVal> p017od{}; 
        ///Port 0 pin 18 open drain mode control
        enum class p018odVal {
            normal=0x00000000,     ///<Normal. P0.18 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.18 pin is in the open drain mode.
        };
        namespace p018odValC{
            constexpr MPL::Value<p018odVal,p018odVal::normal> normal{};
            constexpr MPL::Value<p018odVal,p018odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,p018odVal> p018od{}; 
        ///Port 0 pin 19 open drain mode control. Pins may potentially be used for I2C-buses using standard port pins. If so, they should be configured for open drain mode via the related bits in PINMODE_OD0.
        enum class p019odVal {
            normal=0x00000000,     ///<Normal. P0.19 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.19 pin is in the open drain mode.
        };
        namespace p019odValC{
            constexpr MPL::Value<p019odVal,p019odVal::normal> normal{};
            constexpr MPL::Value<p019odVal,p019odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,p019odVal> p019od{}; 
        ///Port 0 pin 20open drain mode control. Pins may potentially be used for I2C-buses using standard port pins. If so, they should be configured for open drain mode via the related bits in PINMODE_OD0.
        enum class p020odVal {
            normal=0x00000000,     ///<Normal. P0.20 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.20 pin is in the open drain mode.
        };
        namespace p020odValC{
            constexpr MPL::Value<p020odVal,p020odVal::normal> normal{};
            constexpr MPL::Value<p020odVal,p020odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,p020odVal> p020od{}; 
        ///Port 0 pin 21 open drain mode control
        enum class p021odVal {
            normal=0x00000000,     ///<Normal. P0.21 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.21 pin is in the open drain mode.
        };
        namespace p021odValC{
            constexpr MPL::Value<p021odVal,p021odVal::normal> normal{};
            constexpr MPL::Value<p021odVal,p021odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,p021odVal> p021od{}; 
        ///Port 0 pin 22 open drain mode control
        enum class p022odVal {
            normal=0x00000000,     ///<Normal. P0.22 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.22 pin is in the open drain mode.
        };
        namespace p022odValC{
            constexpr MPL::Value<p022odVal,p022odVal::normal> normal{};
            constexpr MPL::Value<p022odVal,p022odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,p022odVal> p022od{}; 
        ///Port 0 pin 23 open drain mode control
        enum class p023odVal {
            normal=0x00000000,     ///<Normal. P0.23 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.23 pin is in the open drain mode.
        };
        namespace p023odValC{
            constexpr MPL::Value<p023odVal,p023odVal::normal> normal{};
            constexpr MPL::Value<p023odVal,p023odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,p023odVal> p023od{}; 
        ///Port 0 pin 24open drain mode control
        enum class p024odVal {
            normal=0x00000000,     ///<Normal. P0.23 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.23 pin is in the open drain mode.
        };
        namespace p024odValC{
            constexpr MPL::Value<p024odVal,p024odVal::normal> normal{};
            constexpr MPL::Value<p024odVal,p024odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,p024odVal> p024od{}; 
        ///Port 0 pin 25 open drain mode control
        enum class p025odVal {
            normal=0x00000000,     ///<Normal. P0.25 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.25 pin is in the open drain mode.
        };
        namespace p025odValC{
            constexpr MPL::Value<p025odVal,p025odVal::normal> normal{};
            constexpr MPL::Value<p025odVal,p025odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,p025odVal> p025od{}; 
        ///Port 0 pin 26 open drain mode control
        enum class p026odVal {
            normal=0x00000000,     ///<Normal. P0.26 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.26 pin is in the open drain mode.
        };
        namespace p026odValC{
            constexpr MPL::Value<p026odVal,p026odVal::normal> normal{};
            constexpr MPL::Value<p026odVal,p026odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,p026odVal> p026od{}; 
        ///Port 0 pin 29 open drain mode control
        enum class p029odVal {
            normal=0x00000000,     ///<Normal. P0.29 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.29 pin is in the open drain mode.
        };
        namespace p029odValC{
            constexpr MPL::Value<p029odVal,p029odVal::normal> normal{};
            constexpr MPL::Value<p029odVal,p029odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,p029odVal> p029od{}; 
        ///Port 0 pin 30 open drain mode control
        enum class p030odVal {
            normal=0x00000000,     ///<Normal. P0.30 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.30 pin is in the open drain mode.
        };
        namespace p030odValC{
            constexpr MPL::Value<p030odVal,p030odVal::normal> normal{};
            constexpr MPL::Value<p030odVal,p030odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,p030odVal> p030od{}; 
    }
    namespace NonepinmodeOd1{    ///<Open drain mode control register 1
        using Addr = Register::Address<0x4002c06c,0x000038ec,0,unsigned>;
        ///Port 1 pin 0 open drain mode control.
        enum class p100odVal {
            normal=0x00000000,     ///<Normal. P1.0 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.0 pin is in the open drain mode.
        };
        namespace p100odValC{
            constexpr MPL::Value<p100odVal,p100odVal::normal> normal{};
            constexpr MPL::Value<p100odVal,p100odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,p100odVal> p100od{}; 
        ///Port 1 pin 1 open drain mode control, see P1.00OD
        enum class p101odVal {
            normal=0x00000000,     ///<Normal. P1.1 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.1 pin is in the open drain mode.
        };
        namespace p101odValC{
            constexpr MPL::Value<p101odVal,p101odVal::normal> normal{};
            constexpr MPL::Value<p101odVal,p101odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,p101odVal> p101od{}; 
        ///Port 1 pin 4 open drain mode control, see P1.00OD
        enum class p104odVal {
            normal=0x00000000,     ///<Normal. P1.4 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.4 pin is in the open drain mode.
        };
        namespace p104odValC{
            constexpr MPL::Value<p104odVal,p104odVal::normal> normal{};
            constexpr MPL::Value<p104odVal,p104odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,p104odVal> p104od{}; 
        ///Port 1 pin 8 open drain mode control, see P1.00OD
        enum class p108odVal {
            normal=0x00000000,     ///<Normal. P1.8 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.8 pin is in the open drain mode.
        };
        namespace p108odValC{
            constexpr MPL::Value<p108odVal,p108odVal::normal> normal{};
            constexpr MPL::Value<p108odVal,p108odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,p108odVal> p108od{}; 
        ///Port 1 pin 9 open drain mode control, see P1.00OD
        enum class p109odVal {
            normal=0x00000000,     ///<Normal. P1.9 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.9 pin is in the open drain mode.
        };
        namespace p109odValC{
            constexpr MPL::Value<p109odVal,p109odVal::normal> normal{};
            constexpr MPL::Value<p109odVal,p109odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,p109odVal> p109od{}; 
        ///Port 1 pin 10 open drain mode control, see P1.00OD
        enum class p110odVal {
            normal=0x00000000,     ///<Normal. P1.10 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.10 pin is in the open drain mode.
        };
        namespace p110odValC{
            constexpr MPL::Value<p110odVal,p110odVal::normal> normal{};
            constexpr MPL::Value<p110odVal,p110odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,p110odVal> p110od{}; 
        ///Port 1 pin 14 open drain mode control, see P1.00OD
        enum class p114odVal {
            normal=0x00000000,     ///<Normal. P1.14 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.14 pin is in the open drain mode.
        };
        namespace p114odValC{
            constexpr MPL::Value<p114odVal,p114odVal::normal> normal{};
            constexpr MPL::Value<p114odVal,p114odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,p114odVal> p114od{}; 
        ///Port 1 pin 15 open drain mode control, see P1.00OD
        enum class p115odVal {
            normal=0x00000000,     ///<Normal. P1.15 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.15 pin is in the open drain mode.
        };
        namespace p115odValC{
            constexpr MPL::Value<p115odVal,p115odVal::normal> normal{};
            constexpr MPL::Value<p115odVal,p115odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,p115odVal> p115od{}; 
        ///Port 1 pin 16 open drain mode control, see P1.00OD
        enum class p116odVal {
            normal=0x00000000,     ///<Normal. P1.16 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.16 pin is in the open drain mode.
        };
        namespace p116odValC{
            constexpr MPL::Value<p116odVal,p116odVal::normal> normal{};
            constexpr MPL::Value<p116odVal,p116odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,p116odVal> p116od{}; 
        ///Port 1 pin 17 open drain mode control, see P1.00OD
        enum class p117odVal {
            normal=0x00000000,     ///<Normal. P1.17 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.17 pin is in the open drain mode.
        };
        namespace p117odValC{
            constexpr MPL::Value<p117odVal,p117odVal::normal> normal{};
            constexpr MPL::Value<p117odVal,p117odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,p117odVal> p117od{}; 
        ///Port 1 pin 18 open drain mode control, see P1.00OD
        enum class p118odVal {
            normal=0x00000000,     ///<Normal. P1.18 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.18 pin is in the open drain mode.
        };
        namespace p118odValC{
            constexpr MPL::Value<p118odVal,p118odVal::normal> normal{};
            constexpr MPL::Value<p118odVal,p118odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,p118odVal> p118od{}; 
        ///Port 1 pin 19 open drain mode control, see P1.00OD
        enum class p119odVal {
            normal=0x00000000,     ///<Normal. P1.19 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.19 pin is in the open drain mode.
        };
        namespace p119odValC{
            constexpr MPL::Value<p119odVal,p119odVal::normal> normal{};
            constexpr MPL::Value<p119odVal,p119odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,p119odVal> p119od{}; 
        ///Port 1 pin 20open drain mode control, see P1.00OD
        enum class p120odVal {
            normal=0x00000000,     ///<Normal. P1.20 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.20 pin is in the open drain mode.
        };
        namespace p120odValC{
            constexpr MPL::Value<p120odVal,p120odVal::normal> normal{};
            constexpr MPL::Value<p120odVal,p120odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,p120odVal> p120od{}; 
        ///Port 1 pin 21 open drain mode control, see P1.00OD
        enum class p121odVal {
            normal=0x00000000,     ///<Normal. P1.21 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.21 pin is in the open drain mode.
        };
        namespace p121odValC{
            constexpr MPL::Value<p121odVal,p121odVal::normal> normal{};
            constexpr MPL::Value<p121odVal,p121odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,p121odVal> p121od{}; 
        ///Port 1 pin 22 open drain mode control, see P1.00OD
        enum class p122odVal {
            normal=0x00000000,     ///<Normal. P1.22 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.22 pin is in the open drain mode.
        };
        namespace p122odValC{
            constexpr MPL::Value<p122odVal,p122odVal::normal> normal{};
            constexpr MPL::Value<p122odVal,p122odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,p122odVal> p122od{}; 
        ///Port 1 pin 23 open drain mode control, see P1.00OD
        enum class p123odVal {
            normal=0x00000000,     ///<Normal. P1.23 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.23 pin is in the open drain mode.
        };
        namespace p123odValC{
            constexpr MPL::Value<p123odVal,p123odVal::normal> normal{};
            constexpr MPL::Value<p123odVal,p123odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,p123odVal> p123od{}; 
        ///Port 1 pin 24open drain mode control, see P1.00OD
        enum class p124odVal {
            normal=0x00000000,     ///<Normal. P1.24 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.24 pin is in the open drain mode.
        };
        namespace p124odValC{
            constexpr MPL::Value<p124odVal,p124odVal::normal> normal{};
            constexpr MPL::Value<p124odVal,p124odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,p124odVal> p124od{}; 
        ///Port 1 pin 25 open drain mode control, see P1.00OD
        enum class p125odVal {
            normal=0x00000000,     ///<Normal. P1.25 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.25 pin is in the open drain mode.
        };
        namespace p125odValC{
            constexpr MPL::Value<p125odVal,p125odVal::normal> normal{};
            constexpr MPL::Value<p125odVal,p125odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,p125odVal> p125od{}; 
        ///Port 1 pin 26 open drain mode control, see P1.00OD
        enum class p126odVal {
            normal=0x00000000,     ///<Normal. P1.26 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.26 pin is in the open drain mode.
        };
        namespace p126odValC{
            constexpr MPL::Value<p126odVal,p126odVal::normal> normal{};
            constexpr MPL::Value<p126odVal,p126odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,p126odVal> p126od{}; 
        ///Port 1 pin 27 open drain mode control, see P1.00OD
        enum class p127odVal {
            normal=0x00000000,     ///<Normal. P1.27 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.27 pin is in the open drain mode.
        };
        namespace p127odValC{
            constexpr MPL::Value<p127odVal,p127odVal::normal> normal{};
            constexpr MPL::Value<p127odVal,p127odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,p127odVal> p127od{}; 
        ///Port 1 pin 28 open drain mode control, see P1.00OD
        enum class p128odVal {
            normal=0x00000000,     ///<Normal. P1.28 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.28 pin is in the open drain mode.
        };
        namespace p128odValC{
            constexpr MPL::Value<p128odVal,p128odVal::normal> normal{};
            constexpr MPL::Value<p128odVal,p128odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,p128odVal> p128od{}; 
        ///Port 1 pin 29 open drain mode control, see P1.00OD
        enum class p129odVal {
            normal=0x00000000,     ///<Normal. P1.29 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.29 pin is in the open drain mode.
        };
        namespace p129odValC{
            constexpr MPL::Value<p129odVal,p129odVal::normal> normal{};
            constexpr MPL::Value<p129odVal,p129odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,p129odVal> p129od{}; 
        ///Port 1 pin 30 open drain mode control, see P1.00OD
        enum class p130odVal {
            normal=0x00000000,     ///<Normal. P1.30 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.30 pin is in the open drain mode.
        };
        namespace p130odValC{
            constexpr MPL::Value<p130odVal,p130odVal::normal> normal{};
            constexpr MPL::Value<p130odVal,p130odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,p130odVal> p130od{}; 
        ///Port 1 pin 31 open drain mode control.
        enum class p131odVal {
            normal=0x00000000,     ///<Normal. P1.31 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.31 pin is in the open drain mode.
        };
        namespace p131odValC{
            constexpr MPL::Value<p131odVal,p131odVal::normal> normal{};
            constexpr MPL::Value<p131odVal,p131odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,p131odVal> p131od{}; 
    }
    namespace NonepinmodeOd2{    ///<Open drain mode control register 2
        using Addr = Register::Address<0x4002c070,0xffffc000,0,unsigned>;
        ///Port 2 pin 0 open drain mode control.
        enum class p200odVal {
            normal=0x00000000,     ///<Normal. P2.0 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P2.0 pin is in the open drain mode.
        };
        namespace p200odValC{
            constexpr MPL::Value<p200odVal,p200odVal::normal> normal{};
            constexpr MPL::Value<p200odVal,p200odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,p200odVal> p200od{}; 
        ///Port 2 pin 1 open drain mode control, see P2.00OD
        enum class p201odVal {
            normal=0x00000000,     ///<Normal. P2.1 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P2.1p in is in the open drain mode.
        };
        namespace p201odValC{
            constexpr MPL::Value<p201odVal,p201odVal::normal> normal{};
            constexpr MPL::Value<p201odVal,p201odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,p201odVal> p201od{}; 
        ///Port 2 pin 2 open drain mode control, see P2.00OD
        enum class p202odVal {
            normal=0x00000000,     ///<Normal. P2.2 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P2.2 pin is in the open drain mode.
        };
        namespace p202odValC{
            constexpr MPL::Value<p202odVal,p202odVal::normal> normal{};
            constexpr MPL::Value<p202odVal,p202odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,p202odVal> p202od{}; 
        ///Port 2 pin 3 open drain mode control, see P2.00OD
        enum class p203odVal {
            normal=0x00000000,     ///<Normal. P2.3 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P2.3 pin is in the open drain mode.
        };
        namespace p203odValC{
            constexpr MPL::Value<p203odVal,p203odVal::normal> normal{};
            constexpr MPL::Value<p203odVal,p203odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,p203odVal> p203od{}; 
        ///Port 2 pin 4 open drain mode control, see P2.00OD
        enum class p204odVal {
            normal=0x00000000,     ///<Normal. P2.4 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P2.4 pin is in the open drain mode.
        };
        namespace p204odValC{
            constexpr MPL::Value<p204odVal,p204odVal::normal> normal{};
            constexpr MPL::Value<p204odVal,p204odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,p204odVal> p204od{}; 
        ///Port 2 pin 5 open drain mode control, see P2.00OD
        enum class p205odVal {
            normal=0x00000000,     ///<Normal. P2.5 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P2.5 pin is in the open drain mode.
        };
        namespace p205odValC{
            constexpr MPL::Value<p205odVal,p205odVal::normal> normal{};
            constexpr MPL::Value<p205odVal,p205odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,p205odVal> p205od{}; 
        ///Port 2 pin 6 open drain mode control, see P2.00OD
        enum class p206odVal {
            normal=0x00000000,     ///<Normal. P2.6 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P2.6 pin is in the open drain mode.
        };
        namespace p206odValC{
            constexpr MPL::Value<p206odVal,p206odVal::normal> normal{};
            constexpr MPL::Value<p206odVal,p206odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,p206odVal> p206od{}; 
        ///Port 2 pin 7 open drain mode control, see P2.00OD
        enum class p207odVal {
            normal=0x00000000,     ///<Normal. P2.7 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P2.7 pin is in the open drain mode.
        };
        namespace p207odValC{
            constexpr MPL::Value<p207odVal,p207odVal::normal> normal{};
            constexpr MPL::Value<p207odVal,p207odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,p207odVal> p207od{}; 
        ///Port 2 pin 8 open drain mode control, see P2.00OD
        enum class p208odVal {
            normal=0x00000000,     ///<Normal. P2.8 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P2.8 pin is in the open drain mode.
        };
        namespace p208odValC{
            constexpr MPL::Value<p208odVal,p208odVal::normal> normal{};
            constexpr MPL::Value<p208odVal,p208odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,p208odVal> p208od{}; 
        ///Port 2 pin 9 open drain mode control, see P2.00OD
        enum class p209odVal {
            normal=0x00000000,     ///<Normal. P2.9 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P2.9 pin is in the open drain mode.
        };
        namespace p209odValC{
            constexpr MPL::Value<p209odVal,p209odVal::normal> normal{};
            constexpr MPL::Value<p209odVal,p209odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,p209odVal> p209od{}; 
        ///Port 2 pin 10 open drain mode control, see P2.00OD
        enum class p210odVal {
            normal=0x00000000,     ///<Normal. P2.10 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P2.10 pin is in the open drain mode.
        };
        namespace p210odValC{
            constexpr MPL::Value<p210odVal,p210odVal::normal> normal{};
            constexpr MPL::Value<p210odVal,p210odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,p210odVal> p210od{}; 
        ///Port 2 pin 11 open drain mode control, see P2.00OD
        enum class p211odVal {
            normal=0x00000000,     ///<Normal. P2.11 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P2.11 pin is in the open drain mode.
        };
        namespace p211odValC{
            constexpr MPL::Value<p211odVal,p211odVal::normal> normal{};
            constexpr MPL::Value<p211odVal,p211odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,p211odVal> p211od{}; 
        ///Port 2 pin 12 open drain mode control, see P2.00OD
        enum class p212odVal {
            normal=0x00000000,     ///<Normal. P2.12 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P2.12 pin is in the open drain mode.
        };
        namespace p212odValC{
            constexpr MPL::Value<p212odVal,p212odVal::normal> normal{};
            constexpr MPL::Value<p212odVal,p212odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,p212odVal> p212od{}; 
        ///Port 2 pin 13 open drain mode control, see P2.00OD
        enum class p213odVal {
            normal=0x00000000,     ///<Normal. P2.13 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P2.13 pin is in the open drain mode.
        };
        namespace p213odValC{
            constexpr MPL::Value<p213odVal,p213odVal::normal> normal{};
            constexpr MPL::Value<p213odVal,p213odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,p213odVal> p213od{}; 
    }
    namespace NonepinmodeOd3{    ///<Open drain mode control register 3
        using Addr = Register::Address<0x4002c074,0xf9ffffff,0,unsigned>;
        ///Port 3 pin 25 open drain mode control.
        enum class p325odVal {
            normal=0x00000000,     ///<Normal. P3.25 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P3.25 pin is in the open drain mode.
        };
        namespace p325odValC{
            constexpr MPL::Value<p325odVal,p325odVal::normal> normal{};
            constexpr MPL::Value<p325odVal,p325odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,p325odVal> p325od{}; 
        ///Port 3 pin 26 open drain mode control, see P3.25OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p326od{}; 
    }
    namespace NonepinmodeOd4{    ///<Open drain mode control register 4
        using Addr = Register::Address<0x4002c078,0xcfffffff,0,unsigned>;
        ///Port 4 pin 28 open drain mode control.
        enum class p428odVal {
            normal=0x00000000,     ///<Normal. P4.28 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P4.28 pin is in the open drain mode.
        };
        namespace p428odValC{
            constexpr MPL::Value<p428odVal,p428odVal::normal> normal{};
            constexpr MPL::Value<p428odVal,p428odVal::openDrain> openDrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,p428odVal> p428od{}; 
        ///Port 4 pin 29 open drain mode control, see P4.28OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p429od{}; 
    }
    namespace Nonei2cpadcfg{    ///<I2C Pin Configuration register
        using Addr = Register::Address<0x4002c07c,0xfffffff0,0,unsigned>;
        ///Drive mode control for the SDA0 pin, P0.27.
        enum class sdadrv0Val {
            standard=0x00000000,     ///<Standard. The SDA0 pin is in the standard drive mode.
            fastModePlus=0x00000001,     ///<Fast-mode plus. The SDA0 pin is in Fast Mode Plus drive mode.
        };
        namespace sdadrv0ValC{
            constexpr MPL::Value<sdadrv0Val,sdadrv0Val::standard> standard{};
            constexpr MPL::Value<sdadrv0Val,sdadrv0Val::fastModePlus> fastModePlus{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,sdadrv0Val> sdadrv0{}; 
        ///I 2C filter mode control for the SDA0 pin, P0.27.
        enum class sdai2c0Val {
            enabled=0x00000000,     ///<Enabled. The SDA0 pin has I2C glitch filtering and slew rate control enabled.
            disabled=0x00000001,     ///<Disabled. The SDA0 pin has I2C glitch filtering and slew rate control disabled.
        };
        namespace sdai2c0ValC{
            constexpr MPL::Value<sdai2c0Val,sdai2c0Val::enabled> enabled{};
            constexpr MPL::Value<sdai2c0Val,sdai2c0Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,sdai2c0Val> sdai2c0{}; 
        ///Drive mode control for the SCL0 pin, P0.28.
        enum class scldrv0Val {
            standard=0x00000000,     ///<Standard. The SCL0 pin is in the standard drive mode.
            fastModePlus=0x00000001,     ///<Fast-mode plus. The SCL0 pin is in Fast Mode Plus drive mode.
        };
        namespace scldrv0ValC{
            constexpr MPL::Value<scldrv0Val,scldrv0Val::standard> standard{};
            constexpr MPL::Value<scldrv0Val,scldrv0Val::fastModePlus> fastModePlus{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,scldrv0Val> scldrv0{}; 
        ///I 2C filter mode control for the SCL0 pin, P0.28.
        enum class scli2c0Val {
            enabled=0x00000000,     ///<Enabled. The SCL0 pin has I2C glitch filtering and slew rate control enabled.
            disabled=0x00000001,     ///<Disabled. The SCL0 pin has I2C glitch filtering and slew rate control disabled.
        };
        namespace scli2c0ValC{
            constexpr MPL::Value<scli2c0Val,scli2c0Val::enabled> enabled{};
            constexpr MPL::Value<scli2c0Val,scli2c0Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,scli2c0Val> scli2c0{}; 
    }
}
