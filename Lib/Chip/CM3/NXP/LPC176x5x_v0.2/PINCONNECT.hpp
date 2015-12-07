#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Pin connect block
    namespace Nonepinsel0{    ///<Pin function select register 0.
        using Addr = Register::Address<0x4002c000,0x3f000000,0,unsigned>;
        ///Pin function select P0.0.
        enum class P00Val {
            gpioP0=0x00000000,     ///<GPIO P0.0
            rd1=0x00000001,     ///<RD1
            txd3=0x00000002,     ///<TXD3
            sda1=0x00000003,     ///<SDA1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,P00Val> p00{}; 
        namespace P00ValC{
            constexpr Register::FieldValue<decltype(p00),P00Val::gpioP0> gpioP0{};
            constexpr Register::FieldValue<decltype(p00),P00Val::rd1> rd1{};
            constexpr Register::FieldValue<decltype(p00),P00Val::txd3> txd3{};
            constexpr Register::FieldValue<decltype(p00),P00Val::sda1> sda1{};
        }
        ///Pin function select P0.1.
        enum class P01Val {
            gpioP0=0x00000000,     ///<GPIO P0.1
            td1=0x00000001,     ///<TD1
            rxd3=0x00000002,     ///<RXD3
            scl1=0x00000003,     ///<SCL1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,P01Val> p01{}; 
        namespace P01ValC{
            constexpr Register::FieldValue<decltype(p01),P01Val::gpioP0> gpioP0{};
            constexpr Register::FieldValue<decltype(p01),P01Val::td1> td1{};
            constexpr Register::FieldValue<decltype(p01),P01Val::rxd3> rxd3{};
            constexpr Register::FieldValue<decltype(p01),P01Val::scl1> scl1{};
        }
        ///Pin function select P0.2.
        enum class P02Val {
            gpioP0=0x00000000,     ///<GPIO P0.2
            txd0=0x00000001,     ///<TXD0
            ad0=0x00000002,     ///<AD0.7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,P02Val> p02{}; 
        namespace P02ValC{
            constexpr Register::FieldValue<decltype(p02),P02Val::gpioP0> gpioP0{};
            constexpr Register::FieldValue<decltype(p02),P02Val::txd0> txd0{};
            constexpr Register::FieldValue<decltype(p02),P02Val::ad0> ad0{};
        }
        ///Pin function select P0.3.
        enum class P03Val {
            gpioP0=0x00000000,     ///<GPIO P0.3.
            rxd0=0x00000001,     ///<RXD0
            ad0=0x00000002,     ///<AD0.6
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,P03Val> p03{}; 
        namespace P03ValC{
            constexpr Register::FieldValue<decltype(p03),P03Val::gpioP0> gpioP0{};
            constexpr Register::FieldValue<decltype(p03),P03Val::rxd0> rxd0{};
            constexpr Register::FieldValue<decltype(p03),P03Val::ad0> ad0{};
        }
        ///Pin function select P0.4.
        enum class P04Val {
            gpioP0=0x00000000,     ///<GPIO P0.4.
            i2srxClk=0x00000001,     ///<I2SRX_CLK
            rd2=0x00000002,     ///<RD2
            cap2=0x00000003,     ///<CAP2.0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,P04Val> p04{}; 
        namespace P04ValC{
            constexpr Register::FieldValue<decltype(p04),P04Val::gpioP0> gpioP0{};
            constexpr Register::FieldValue<decltype(p04),P04Val::i2srxClk> i2srxClk{};
            constexpr Register::FieldValue<decltype(p04),P04Val::rd2> rd2{};
            constexpr Register::FieldValue<decltype(p04),P04Val::cap2> cap2{};
        }
        ///Pin function select P0.5.
        enum class P05Val {
            gpioP0=0x00000000,     ///<GPIO P0.5.
            i2srxWs=0x00000001,     ///<I2SRX_WS
            td2=0x00000002,     ///<TD2
            cap2=0x00000003,     ///<CAP2.1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,P05Val> p05{}; 
        namespace P05ValC{
            constexpr Register::FieldValue<decltype(p05),P05Val::gpioP0> gpioP0{};
            constexpr Register::FieldValue<decltype(p05),P05Val::i2srxWs> i2srxWs{};
            constexpr Register::FieldValue<decltype(p05),P05Val::td2> td2{};
            constexpr Register::FieldValue<decltype(p05),P05Val::cap2> cap2{};
        }
        ///Pin function select P0.6.
        enum class P06Val {
            gpioP0=0x00000000,     ///<GPIO P0.6.
            i2srxSda=0x00000001,     ///<I2SRX_SDA
            ssel1=0x00000002,     ///<SSEL1
            mat2=0x00000003,     ///<MAT2.0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,P06Val> p06{}; 
        namespace P06ValC{
            constexpr Register::FieldValue<decltype(p06),P06Val::gpioP0> gpioP0{};
            constexpr Register::FieldValue<decltype(p06),P06Val::i2srxSda> i2srxSda{};
            constexpr Register::FieldValue<decltype(p06),P06Val::ssel1> ssel1{};
            constexpr Register::FieldValue<decltype(p06),P06Val::mat2> mat2{};
        }
        ///Pin function select P0.7.
        enum class P07Val {
            gpioP0=0x00000000,     ///<GPIO P0.7.
            i2stxClk=0x00000001,     ///<I2STX_CLK
            sck1=0x00000002,     ///<SCK1
            mat2=0x00000003,     ///<MAT2.1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,P07Val> p07{}; 
        namespace P07ValC{
            constexpr Register::FieldValue<decltype(p07),P07Val::gpioP0> gpioP0{};
            constexpr Register::FieldValue<decltype(p07),P07Val::i2stxClk> i2stxClk{};
            constexpr Register::FieldValue<decltype(p07),P07Val::sck1> sck1{};
            constexpr Register::FieldValue<decltype(p07),P07Val::mat2> mat2{};
        }
        ///Pin function select P0.8.
        enum class P08Val {
            gpioP0=0x00000000,     ///<GPIO P0.8.
            i2stxWs=0x00000001,     ///<I2STX_WS
            miso1=0x00000002,     ///<MISO1
            mat2=0x00000003,     ///<MAT2.2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,P08Val> p08{}; 
        namespace P08ValC{
            constexpr Register::FieldValue<decltype(p08),P08Val::gpioP0> gpioP0{};
            constexpr Register::FieldValue<decltype(p08),P08Val::i2stxWs> i2stxWs{};
            constexpr Register::FieldValue<decltype(p08),P08Val::miso1> miso1{};
            constexpr Register::FieldValue<decltype(p08),P08Val::mat2> mat2{};
        }
        ///Pin function select P0.9.
        enum class P09Val {
            gpioP0=0x00000000,     ///<GPIO P0.9
            i2stxSda=0x00000001,     ///<I2STX_SDA
            mosi1=0x00000002,     ///<MOSI1
            mat2=0x00000003,     ///<MAT2.3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,P09Val> p09{}; 
        namespace P09ValC{
            constexpr Register::FieldValue<decltype(p09),P09Val::gpioP0> gpioP0{};
            constexpr Register::FieldValue<decltype(p09),P09Val::i2stxSda> i2stxSda{};
            constexpr Register::FieldValue<decltype(p09),P09Val::mosi1> mosi1{};
            constexpr Register::FieldValue<decltype(p09),P09Val::mat2> mat2{};
        }
        ///Pin function select P0.10.
        enum class P010Val {
            gpioP0=0x00000000,     ///<GPIO P0.10
            txd2=0x00000001,     ///<TXD2
            sda2=0x00000002,     ///<SDA2
            mat3=0x00000003,     ///<MAT3.0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,P010Val> p010{}; 
        namespace P010ValC{
            constexpr Register::FieldValue<decltype(p010),P010Val::gpioP0> gpioP0{};
            constexpr Register::FieldValue<decltype(p010),P010Val::txd2> txd2{};
            constexpr Register::FieldValue<decltype(p010),P010Val::sda2> sda2{};
            constexpr Register::FieldValue<decltype(p010),P010Val::mat3> mat3{};
        }
        ///Pin function select P0.11.
        enum class P011Val {
            gpioP0=0x00000000,     ///<GPIO P0.11
            rxd2=0x00000001,     ///<RXD2
            scl2=0x00000002,     ///<SCL2
            mat3=0x00000003,     ///<MAT3.1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,P011Val> p011{}; 
        namespace P011ValC{
            constexpr Register::FieldValue<decltype(p011),P011Val::gpioP0> gpioP0{};
            constexpr Register::FieldValue<decltype(p011),P011Val::rxd2> rxd2{};
            constexpr Register::FieldValue<decltype(p011),P011Val::scl2> scl2{};
            constexpr Register::FieldValue<decltype(p011),P011Val::mat3> mat3{};
        }
        ///Pin function select P0.15.
        enum class P015Val {
            gpioP0=0x00000000,     ///<GPIO P0.15
            txd1=0x00000001,     ///<TXD1
            sck0=0x00000002,     ///<SCK0
            sck=0x00000003,     ///<SCK
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,P015Val> p015{}; 
        namespace P015ValC{
            constexpr Register::FieldValue<decltype(p015),P015Val::gpioP0> gpioP0{};
            constexpr Register::FieldValue<decltype(p015),P015Val::txd1> txd1{};
            constexpr Register::FieldValue<decltype(p015),P015Val::sck0> sck0{};
            constexpr Register::FieldValue<decltype(p015),P015Val::sck> sck{};
        }
    }
    namespace Nonepinsel1{    ///<Pin function select register 1.
        using Addr = Register::Address<0x4002c004,0xc0000000,0,unsigned>;
        ///Pin function select P0.16.
        enum class P016Val {
            gpioP0=0x00000000,     ///<GPIO P0.16
            rxd1=0x00000001,     ///<RXD1
            ssel0=0x00000002,     ///<SSEL0
            ssel=0x00000003,     ///<SSEL
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,P016Val> p016{}; 
        namespace P016ValC{
            constexpr Register::FieldValue<decltype(p016),P016Val::gpioP0> gpioP0{};
            constexpr Register::FieldValue<decltype(p016),P016Val::rxd1> rxd1{};
            constexpr Register::FieldValue<decltype(p016),P016Val::ssel0> ssel0{};
            constexpr Register::FieldValue<decltype(p016),P016Val::ssel> ssel{};
        }
        ///Pin function select P0.17.
        enum class P017Val {
            gpioP0=0x00000000,     ///<GPIO P0.17
            cts1=0x00000001,     ///<CTS1
            miso0=0x00000002,     ///<MISO0
            miso=0x00000003,     ///<MISO
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,P017Val> p017{}; 
        namespace P017ValC{
            constexpr Register::FieldValue<decltype(p017),P017Val::gpioP0> gpioP0{};
            constexpr Register::FieldValue<decltype(p017),P017Val::cts1> cts1{};
            constexpr Register::FieldValue<decltype(p017),P017Val::miso0> miso0{};
            constexpr Register::FieldValue<decltype(p017),P017Val::miso> miso{};
        }
        ///Pin function select P0.18.
        enum class P018Val {
            gpioP0=0x00000000,     ///<GPIO P0.18
            dcd1=0x00000001,     ///<DCD1
            mosi0=0x00000002,     ///<MOSI0
            mosi=0x00000003,     ///<MOSI
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,P018Val> p018{}; 
        namespace P018ValC{
            constexpr Register::FieldValue<decltype(p018),P018Val::gpioP0> gpioP0{};
            constexpr Register::FieldValue<decltype(p018),P018Val::dcd1> dcd1{};
            constexpr Register::FieldValue<decltype(p018),P018Val::mosi0> mosi0{};
            constexpr Register::FieldValue<decltype(p018),P018Val::mosi> mosi{};
        }
        ///Pin function select P019.
        enum class P019Val {
            gpioP0=0x00000000,     ///<GPIO P0.19.
            dsr1=0x00000001,     ///<DSR1
            sda1=0x00000003,     ///<SDA1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,P019Val> p019{}; 
        namespace P019ValC{
            constexpr Register::FieldValue<decltype(p019),P019Val::gpioP0> gpioP0{};
            constexpr Register::FieldValue<decltype(p019),P019Val::dsr1> dsr1{};
            constexpr Register::FieldValue<decltype(p019),P019Val::sda1> sda1{};
        }
        ///Pin function select P0.20.
        enum class P020Val {
            gpioP0=0x00000000,     ///<GPIO P0.20.
            dtr1=0x00000001,     ///<DTR1
            scl1=0x00000003,     ///<SCL1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,P020Val> p020{}; 
        namespace P020ValC{
            constexpr Register::FieldValue<decltype(p020),P020Val::gpioP0> gpioP0{};
            constexpr Register::FieldValue<decltype(p020),P020Val::dtr1> dtr1{};
            constexpr Register::FieldValue<decltype(p020),P020Val::scl1> scl1{};
        }
        ///Pin function select P0.21.
        enum class P021Val {
            gpioPort0=0x00000000,     ///<GPIO Port 0.21.
            ri1=0x00000001,     ///<RI1
            rd1=0x00000003,     ///<RD1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,P021Val> p021{}; 
        namespace P021ValC{
            constexpr Register::FieldValue<decltype(p021),P021Val::gpioPort0> gpioPort0{};
            constexpr Register::FieldValue<decltype(p021),P021Val::ri1> ri1{};
            constexpr Register::FieldValue<decltype(p021),P021Val::rd1> rd1{};
        }
        ///Pin function select P022
        enum class P022Val {
            gpioP0=0x00000000,     ///<GPIO P0.22.
            rts1=0x00000001,     ///<RTS1
            td1=0x00000003,     ///<TD1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,P022Val> p022{}; 
        namespace P022ValC{
            constexpr Register::FieldValue<decltype(p022),P022Val::gpioP0> gpioP0{};
            constexpr Register::FieldValue<decltype(p022),P022Val::rts1> rts1{};
            constexpr Register::FieldValue<decltype(p022),P022Val::td1> td1{};
        }
        ///Pin function select P023.
        enum class P023Val {
            gpioP0=0x00000000,     ///<GPIO P0.23.
            ad0=0x00000001,     ///<AD0.0
            i2srxClk=0x00000002,     ///<I2SRX_CLK
            cap3=0x00000003,     ///<CAP3.0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,P023Val> p023{}; 
        namespace P023ValC{
            constexpr Register::FieldValue<decltype(p023),P023Val::gpioP0> gpioP0{};
            constexpr Register::FieldValue<decltype(p023),P023Val::ad0> ad0{};
            constexpr Register::FieldValue<decltype(p023),P023Val::i2srxClk> i2srxClk{};
            constexpr Register::FieldValue<decltype(p023),P023Val::cap3> cap3{};
        }
        ///Pin function select P0.24.
        enum class P024Val {
            gpioP0=0x00000000,     ///<GPIO P0.24.
            ad0=0x00000001,     ///<AD0.1
            i2srxWs=0x00000002,     ///<I2SRX_WS
            cap3=0x00000003,     ///<CAP3.1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,P024Val> p024{}; 
        namespace P024ValC{
            constexpr Register::FieldValue<decltype(p024),P024Val::gpioP0> gpioP0{};
            constexpr Register::FieldValue<decltype(p024),P024Val::ad0> ad0{};
            constexpr Register::FieldValue<decltype(p024),P024Val::i2srxWs> i2srxWs{};
            constexpr Register::FieldValue<decltype(p024),P024Val::cap3> cap3{};
        }
        ///Pin function select P0.25.
        enum class P025Val {
            gpioP0=0x00000000,     ///<GPIO P0.25
            ad0=0x00000001,     ///<AD0.2
            i2srxSda=0x00000002,     ///<I2SRX_SDA
            txd3=0x00000003,     ///<TXD3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,P025Val> p025{}; 
        namespace P025ValC{
            constexpr Register::FieldValue<decltype(p025),P025Val::gpioP0> gpioP0{};
            constexpr Register::FieldValue<decltype(p025),P025Val::ad0> ad0{};
            constexpr Register::FieldValue<decltype(p025),P025Val::i2srxSda> i2srxSda{};
            constexpr Register::FieldValue<decltype(p025),P025Val::txd3> txd3{};
        }
        ///Pin function select P0.26.
        enum class P026Val {
            gpioP0=0x00000000,     ///<GPIO P0.26
            ad0=0x00000001,     ///<AD0.3
            aout=0x00000002,     ///<AOUT
            rxd3=0x00000003,     ///<RXD3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,P026Val> p026{}; 
        namespace P026ValC{
            constexpr Register::FieldValue<decltype(p026),P026Val::gpioP0> gpioP0{};
            constexpr Register::FieldValue<decltype(p026),P026Val::ad0> ad0{};
            constexpr Register::FieldValue<decltype(p026),P026Val::aout> aout{};
            constexpr Register::FieldValue<decltype(p026),P026Val::rxd3> rxd3{};
        }
        ///Pin function select P0.27.
        enum class P027Val {
            gpioP0=0x00000000,     ///<GPIO P0.27
            sda0=0x00000001,     ///<SDA0
            usbSda=0x00000002,     ///<USB_SDA
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,P027Val> p027{}; 
        namespace P027ValC{
            constexpr Register::FieldValue<decltype(p027),P027Val::gpioP0> gpioP0{};
            constexpr Register::FieldValue<decltype(p027),P027Val::sda0> sda0{};
            constexpr Register::FieldValue<decltype(p027),P027Val::usbSda> usbSda{};
        }
        ///Pin function select P0.28.
        enum class P028Val {
            gpioP0=0x00000000,     ///<GPIO P0.28
            scl0=0x00000001,     ///<SCL0
            usbScl=0x00000002,     ///<USB_SCL
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,P028Val> p028{}; 
        namespace P028ValC{
            constexpr Register::FieldValue<decltype(p028),P028Val::gpioP0> gpioP0{};
            constexpr Register::FieldValue<decltype(p028),P028Val::scl0> scl0{};
            constexpr Register::FieldValue<decltype(p028),P028Val::usbScl> usbScl{};
        }
        ///Pin function select P0.29
        enum class P029Val {
            gpioP0=0x00000000,     ///<GPIO P0.29
            usbDp=0x00000001,     ///<USB_D+
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,P029Val> p029{}; 
        namespace P029ValC{
            constexpr Register::FieldValue<decltype(p029),P029Val::gpioP0> gpioP0{};
            constexpr Register::FieldValue<decltype(p029),P029Val::usbDp> usbDp{};
        }
        ///Pin function select P0.30.
        enum class P030Val {
            gpioP0=0x00000000,     ///<GPIO P0.30
            usbDm=0x00000001,     ///<USB_D-
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,P030Val> p030{}; 
        namespace P030ValC{
            constexpr Register::FieldValue<decltype(p030),P030Val::gpioP0> gpioP0{};
            constexpr Register::FieldValue<decltype(p030),P030Val::usbDm> usbDm{};
        }
    }
    namespace Nonepinsel2{    ///<Pin function select register 2.
        using Addr = Register::Address<0x4002c008,0x3f00fcf0,0,unsigned>;
        ///Pin function select P1.0.
        enum class P10Val {
            gpioP1=0x00000000,     ///<GPIO P1.0
            enetTxd0=0x00000001,     ///<ENET_TXD0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,P10Val> p10{}; 
        namespace P10ValC{
            constexpr Register::FieldValue<decltype(p10),P10Val::gpioP1> gpioP1{};
            constexpr Register::FieldValue<decltype(p10),P10Val::enetTxd0> enetTxd0{};
        }
        ///Pin function select P1.1.
        enum class P11Val {
            gpioP1=0x00000000,     ///<GPIO P1.1
            enetTxd1=0x00000001,     ///<ENET_TXD1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,P11Val> p11{}; 
        namespace P11ValC{
            constexpr Register::FieldValue<decltype(p11),P11Val::gpioP1> gpioP1{};
            constexpr Register::FieldValue<decltype(p11),P11Val::enetTxd1> enetTxd1{};
        }
        ///Pin function select P1.4.
        enum class P14Val {
            gpioP1=0x00000000,     ///<GPIO P1.4.
            enetTxEn=0x00000001,     ///<ENET_TX_EN
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,P14Val> p14{}; 
        namespace P14ValC{
            constexpr Register::FieldValue<decltype(p14),P14Val::gpioP1> gpioP1{};
            constexpr Register::FieldValue<decltype(p14),P14Val::enetTxEn> enetTxEn{};
        }
        ///Pin function select P1.8.
        enum class P18Val {
            gpioP1=0x00000000,     ///<GPIO P1.8.
            enetCrs=0x00000001,     ///<ENET_CRS
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,P18Val> p18{}; 
        namespace P18ValC{
            constexpr Register::FieldValue<decltype(p18),P18Val::gpioP1> gpioP1{};
            constexpr Register::FieldValue<decltype(p18),P18Val::enetCrs> enetCrs{};
        }
        ///Pin function select P1.9.
        enum class P19Val {
            gpioPort1=0x00000000,     ///<GPIO Port 1.9
            enetRxd0=0x00000001,     ///<ENET_RXD0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,P19Val> p19{}; 
        namespace P19ValC{
            constexpr Register::FieldValue<decltype(p19),P19Val::gpioPort1> gpioPort1{};
            constexpr Register::FieldValue<decltype(p19),P19Val::enetRxd0> enetRxd0{};
        }
        ///Pin function select P1.10.
        enum class P110Val {
            gpioP1=0x00000000,     ///<GPIO P1.10
            enetRxd1=0x00000001,     ///<ENET_RXD1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,P110Val> p110{}; 
        namespace P110ValC{
            constexpr Register::FieldValue<decltype(p110),P110Val::gpioP1> gpioP1{};
            constexpr Register::FieldValue<decltype(p110),P110Val::enetRxd1> enetRxd1{};
        }
        ///Pin function select P1.14.
        enum class P114Val {
            gpioP1=0x00000000,     ///<GPIO P1.14
            enetRxEr=0x00000001,     ///<ENET_RX_ER
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,P114Val> p114{}; 
        namespace P114ValC{
            constexpr Register::FieldValue<decltype(p114),P114Val::gpioP1> gpioP1{};
            constexpr Register::FieldValue<decltype(p114),P114Val::enetRxEr> enetRxEr{};
        }
        ///Pin function select P1.15.
        enum class P115Val {
            gpioP1=0x00000000,     ///<GPIO P1.15
            enetRefClk=0x00000001,     ///<ENET_REF_CLK
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,P115Val> p115{}; 
        namespace P115ValC{
            constexpr Register::FieldValue<decltype(p115),P115Val::gpioP1> gpioP1{};
            constexpr Register::FieldValue<decltype(p115),P115Val::enetRefClk> enetRefClk{};
        }
    }
    namespace Nonepinsel3{    ///<Pin function select register 3.
        using Addr = Register::Address<0x4002c00c,0x00000000,0,unsigned>;
        ///Pin function select P1.16.
        enum class P116Val {
            gpioP1=0x00000000,     ///<GPIO P1.16
            enetMdc=0x00000001,     ///<ENET_MDC
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,P116Val> p116{}; 
        namespace P116ValC{
            constexpr Register::FieldValue<decltype(p116),P116Val::gpioP1> gpioP1{};
            constexpr Register::FieldValue<decltype(p116),P116Val::enetMdc> enetMdc{};
        }
        ///Pin function select P1.17.
        enum class P117Val {
            gpioP1=0x00000000,     ///<GPIO P1.17
            enetMdio=0x00000001,     ///<ENET_MDIO
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,P117Val> p117{}; 
        namespace P117ValC{
            constexpr Register::FieldValue<decltype(p117),P117Val::gpioP1> gpioP1{};
            constexpr Register::FieldValue<decltype(p117),P117Val::enetMdio> enetMdio{};
        }
        ///Pin function select P1.18.
        enum class P118Val {
            gpioP1=0x00000000,     ///<GPIO P1.18
            usbUpLed=0x00000001,     ///<USB_UP_LED
            pwm1=0x00000002,     ///<PWM1.1
            cap1=0x00000003,     ///<CAP1.0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,P118Val> p118{}; 
        namespace P118ValC{
            constexpr Register::FieldValue<decltype(p118),P118Val::gpioP1> gpioP1{};
            constexpr Register::FieldValue<decltype(p118),P118Val::usbUpLed> usbUpLed{};
            constexpr Register::FieldValue<decltype(p118),P118Val::pwm1> pwm1{};
            constexpr Register::FieldValue<decltype(p118),P118Val::cap1> cap1{};
        }
        ///Pin function select P1.19.
        enum class P119Val {
            gpioP1=0x00000000,     ///<GPIO P1.19.
            mcoa0=0x00000001,     ///<MCOA0
            usbPpwr=0x00000002,     ///<USB_PPWR
            cap1=0x00000003,     ///<CAP1.1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,P119Val> p119{}; 
        namespace P119ValC{
            constexpr Register::FieldValue<decltype(p119),P119Val::gpioP1> gpioP1{};
            constexpr Register::FieldValue<decltype(p119),P119Val::mcoa0> mcoa0{};
            constexpr Register::FieldValue<decltype(p119),P119Val::usbPpwr> usbPpwr{};
            constexpr Register::FieldValue<decltype(p119),P119Val::cap1> cap1{};
        }
        ///Pin function select P1.20.
        enum class P120Val {
            gpioP1=0x00000000,     ///<GPIO P1.20.
            mci0=0x00000001,     ///<MCI0
            pwm1=0x00000002,     ///<PWM1.2
            sck0=0x00000003,     ///<SCK0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,P120Val> p120{}; 
        namespace P120ValC{
            constexpr Register::FieldValue<decltype(p120),P120Val::gpioP1> gpioP1{};
            constexpr Register::FieldValue<decltype(p120),P120Val::mci0> mci0{};
            constexpr Register::FieldValue<decltype(p120),P120Val::pwm1> pwm1{};
            constexpr Register::FieldValue<decltype(p120),P120Val::sck0> sck0{};
        }
        ///Pin function select P1.21.
        enum class P121Val {
            gpioP1=0x00000000,     ///<GPIO P1.21.
            mcabort=0x00000001,     ///<MCABORT
            pwm1=0x00000002,     ///<PWM1.3
            ssel0=0x00000003,     ///<SSEL0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,P121Val> p121{}; 
        namespace P121ValC{
            constexpr Register::FieldValue<decltype(p121),P121Val::gpioP1> gpioP1{};
            constexpr Register::FieldValue<decltype(p121),P121Val::mcabort> mcabort{};
            constexpr Register::FieldValue<decltype(p121),P121Val::pwm1> pwm1{};
            constexpr Register::FieldValue<decltype(p121),P121Val::ssel0> ssel0{};
        }
        ///Pin function select P1.22
        enum class P122Val {
            gpioP1=0x00000000,     ///<GPIO P1.22.
            mcob0=0x00000001,     ///<MCOB0
            usbPwrd=0x00000002,     ///<USB_PWRD
            mat1=0x00000003,     ///<MAT1.0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,P122Val> p122{}; 
        namespace P122ValC{
            constexpr Register::FieldValue<decltype(p122),P122Val::gpioP1> gpioP1{};
            constexpr Register::FieldValue<decltype(p122),P122Val::mcob0> mcob0{};
            constexpr Register::FieldValue<decltype(p122),P122Val::usbPwrd> usbPwrd{};
            constexpr Register::FieldValue<decltype(p122),P122Val::mat1> mat1{};
        }
        ///Pin function select P1.23.
        enum class P123Val {
            gpioP1=0x00000000,     ///<GPIO P1.23.
            mci1=0x00000001,     ///<MCI1
            pwm1=0x00000002,     ///<PWM1.4
            miso0=0x00000003,     ///<MISO0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,P123Val> p123{}; 
        namespace P123ValC{
            constexpr Register::FieldValue<decltype(p123),P123Val::gpioP1> gpioP1{};
            constexpr Register::FieldValue<decltype(p123),P123Val::mci1> mci1{};
            constexpr Register::FieldValue<decltype(p123),P123Val::pwm1> pwm1{};
            constexpr Register::FieldValue<decltype(p123),P123Val::miso0> miso0{};
        }
        ///Pin function select P1.24.
        enum class P124Val {
            gpioP1=0x00000000,     ///<GPIO P1.24.
            mci2=0x00000001,     ///<MCI2
            pwm1=0x00000002,     ///<PWM1.5
            mosi0=0x00000003,     ///<MOSI0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,P124Val> p124{}; 
        namespace P124ValC{
            constexpr Register::FieldValue<decltype(p124),P124Val::gpioP1> gpioP1{};
            constexpr Register::FieldValue<decltype(p124),P124Val::mci2> mci2{};
            constexpr Register::FieldValue<decltype(p124),P124Val::pwm1> pwm1{};
            constexpr Register::FieldValue<decltype(p124),P124Val::mosi0> mosi0{};
        }
        ///Pin function select P1.25.
        enum class P125Val {
            gpioP1=0x00000000,     ///<GPIO P1.25
            mcoa1=0x00000001,     ///<MCOA1
            mat1=0x00000003,     ///<MAT1.1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,P125Val> p125{}; 
        namespace P125ValC{
            constexpr Register::FieldValue<decltype(p125),P125Val::gpioP1> gpioP1{};
            constexpr Register::FieldValue<decltype(p125),P125Val::mcoa1> mcoa1{};
            constexpr Register::FieldValue<decltype(p125),P125Val::mat1> mat1{};
        }
        ///Pin function select P1.26.
        enum class P126Val {
            gpioP1=0x00000000,     ///<GPIO P1.26
            mcob1=0x00000001,     ///<MCOB1
            pwm1=0x00000002,     ///<PWM1.6
            cap0=0x00000003,     ///<CAP0.0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,P126Val> p126{}; 
        namespace P126ValC{
            constexpr Register::FieldValue<decltype(p126),P126Val::gpioP1> gpioP1{};
            constexpr Register::FieldValue<decltype(p126),P126Val::mcob1> mcob1{};
            constexpr Register::FieldValue<decltype(p126),P126Val::pwm1> pwm1{};
            constexpr Register::FieldValue<decltype(p126),P126Val::cap0> cap0{};
        }
        ///Pin function select P1.27.
        enum class P127Val {
            gpioP1=0x00000000,     ///<GPIO P1.27
            clkout=0x00000001,     ///<CLKOUT
            usbOvrcr=0x00000002,     ///<USB_OVRCR
            cap0=0x00000003,     ///<CAP0.1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,P127Val> p127{}; 
        namespace P127ValC{
            constexpr Register::FieldValue<decltype(p127),P127Val::gpioP1> gpioP1{};
            constexpr Register::FieldValue<decltype(p127),P127Val::clkout> clkout{};
            constexpr Register::FieldValue<decltype(p127),P127Val::usbOvrcr> usbOvrcr{};
            constexpr Register::FieldValue<decltype(p127),P127Val::cap0> cap0{};
        }
        ///Pin function select P1.28.
        enum class P128Val {
            gpioP1=0x00000000,     ///<GPIO P1.28
            mcoa2=0x00000001,     ///<MCOA2
            pcap1=0x00000002,     ///<PCAP1.0
            mat0=0x00000003,     ///<MAT0.0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,P128Val> p128{}; 
        namespace P128ValC{
            constexpr Register::FieldValue<decltype(p128),P128Val::gpioP1> gpioP1{};
            constexpr Register::FieldValue<decltype(p128),P128Val::mcoa2> mcoa2{};
            constexpr Register::FieldValue<decltype(p128),P128Val::pcap1> pcap1{};
            constexpr Register::FieldValue<decltype(p128),P128Val::mat0> mat0{};
        }
        ///Pin function select P1.29
        enum class P129Val {
            gpioP1=0x00000000,     ///<GPIO P1.29
            mcob2=0x00000001,     ///<MCOB2
            pcap1=0x00000002,     ///<PCAP1.1
            mat0=0x00000003,     ///<MAT0.1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,P129Val> p129{}; 
        namespace P129ValC{
            constexpr Register::FieldValue<decltype(p129),P129Val::gpioP1> gpioP1{};
            constexpr Register::FieldValue<decltype(p129),P129Val::mcob2> mcob2{};
            constexpr Register::FieldValue<decltype(p129),P129Val::pcap1> pcap1{};
            constexpr Register::FieldValue<decltype(p129),P129Val::mat0> mat0{};
        }
        ///Pin function select P1.30.
        enum class P130Val {
            gpioP1=0x00000000,     ///<GPIO P1.30
            vbus=0x00000002,     ///<VBUS
            ad0=0x00000003,     ///<AD0.4
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,P130Val> p130{}; 
        namespace P130ValC{
            constexpr Register::FieldValue<decltype(p130),P130Val::gpioP1> gpioP1{};
            constexpr Register::FieldValue<decltype(p130),P130Val::vbus> vbus{};
            constexpr Register::FieldValue<decltype(p130),P130Val::ad0> ad0{};
        }
        ///Pin function select P1.31.
        enum class P131Val {
            gpioPort1=0x00000000,     ///<GPIO Port 1.31
            sck1=0x00000002,     ///<SCK1
            ad0=0x00000003,     ///<AD0.5
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,P131Val> p131{}; 
        namespace P131ValC{
            constexpr Register::FieldValue<decltype(p131),P131Val::gpioPort1> gpioPort1{};
            constexpr Register::FieldValue<decltype(p131),P131Val::sck1> sck1{};
            constexpr Register::FieldValue<decltype(p131),P131Val::ad0> ad0{};
        }
    }
    namespace Nonepinsel4{    ///<Pin function select register 4
        using Addr = Register::Address<0x4002c010,0xf0000000,0,unsigned>;
        ///Pin function select P2.0.
        enum class P20Val {
            gpioP2=0x00000000,     ///<GPIO P2.0
            pwm1=0x00000001,     ///<PWM1.1
            txd1=0x00000002,     ///<TXD1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,P20Val> p20{}; 
        namespace P20ValC{
            constexpr Register::FieldValue<decltype(p20),P20Val::gpioP2> gpioP2{};
            constexpr Register::FieldValue<decltype(p20),P20Val::pwm1> pwm1{};
            constexpr Register::FieldValue<decltype(p20),P20Val::txd1> txd1{};
        }
        ///Pin function select P2.1.
        enum class P21Val {
            gpioP2=0x00000000,     ///<GPIO P2.1
            pwm1=0x00000001,     ///<PWM1.2
            rxd1=0x00000002,     ///<RXD1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,P21Val> p21{}; 
        namespace P21ValC{
            constexpr Register::FieldValue<decltype(p21),P21Val::gpioP2> gpioP2{};
            constexpr Register::FieldValue<decltype(p21),P21Val::pwm1> pwm1{};
            constexpr Register::FieldValue<decltype(p21),P21Val::rxd1> rxd1{};
        }
        ///Pin function select P2.2.
        enum class P22Val {
            gpioP2=0x00000000,     ///<GPIO P2.2
            pwm1=0x00000001,     ///<PWM1.3
            cts1=0x00000002,     ///<CTS1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,P22Val> p22{}; 
        namespace P22ValC{
            constexpr Register::FieldValue<decltype(p22),P22Val::gpioP2> gpioP2{};
            constexpr Register::FieldValue<decltype(p22),P22Val::pwm1> pwm1{};
            constexpr Register::FieldValue<decltype(p22),P22Val::cts1> cts1{};
        }
        ///Pin function select P2.3.
        enum class P23Val {
            gpioP2=0x00000000,     ///<GPIO P2.3.
            pwm1=0x00000001,     ///<PWM1.4
            dcd1=0x00000002,     ///<DCD1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,P23Val> p23{}; 
        namespace P23ValC{
            constexpr Register::FieldValue<decltype(p23),P23Val::gpioP2> gpioP2{};
            constexpr Register::FieldValue<decltype(p23),P23Val::pwm1> pwm1{};
            constexpr Register::FieldValue<decltype(p23),P23Val::dcd1> dcd1{};
        }
        ///Pin function select P2.4.
        enum class P24Val {
            gpioP2=0x00000000,     ///<GPIO P2.4.
            pwm1=0x00000001,     ///<PWM1.5
            dsr1=0x00000002,     ///<DSR1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,P24Val> p24{}; 
        namespace P24ValC{
            constexpr Register::FieldValue<decltype(p24),P24Val::gpioP2> gpioP2{};
            constexpr Register::FieldValue<decltype(p24),P24Val::pwm1> pwm1{};
            constexpr Register::FieldValue<decltype(p24),P24Val::dsr1> dsr1{};
        }
        ///Pin function select P2.5.
        enum class P25Val {
            gpioP2=0x00000000,     ///<GPIO P2.5.
            pwm1=0x00000001,     ///<PWM1.6
            dtr1=0x00000002,     ///<DTR1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,P25Val> p25{}; 
        namespace P25ValC{
            constexpr Register::FieldValue<decltype(p25),P25Val::gpioP2> gpioP2{};
            constexpr Register::FieldValue<decltype(p25),P25Val::pwm1> pwm1{};
            constexpr Register::FieldValue<decltype(p25),P25Val::dtr1> dtr1{};
        }
        ///Pin function select P2.6.
        enum class P26Val {
            gpioP2=0x00000000,     ///<GPIO P2.6.
            pcap1=0x00000001,     ///<PCAP1.0
            ri1=0x00000002,     ///<RI1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,P26Val> p26{}; 
        namespace P26ValC{
            constexpr Register::FieldValue<decltype(p26),P26Val::gpioP2> gpioP2{};
            constexpr Register::FieldValue<decltype(p26),P26Val::pcap1> pcap1{};
            constexpr Register::FieldValue<decltype(p26),P26Val::ri1> ri1{};
        }
        ///Pin function select P2.7.
        enum class P27Val {
            gpioP2=0x00000000,     ///<GPIO P2.7.
            rd2=0x00000001,     ///<RD2
            rts1=0x00000002,     ///<RTS1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,P27Val> p27{}; 
        namespace P27ValC{
            constexpr Register::FieldValue<decltype(p27),P27Val::gpioP2> gpioP2{};
            constexpr Register::FieldValue<decltype(p27),P27Val::rd2> rd2{};
            constexpr Register::FieldValue<decltype(p27),P27Val::rts1> rts1{};
        }
        ///Pin function select P2.8.
        enum class P28Val {
            gpioP2=0x00000000,     ///<GPIO P2.8.
            td2=0x00000001,     ///<TD2
            txd2=0x00000002,     ///<TXD2
            enetMdc=0x00000003,     ///<ENET_MDC
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,P28Val> p28{}; 
        namespace P28ValC{
            constexpr Register::FieldValue<decltype(p28),P28Val::gpioP2> gpioP2{};
            constexpr Register::FieldValue<decltype(p28),P28Val::td2> td2{};
            constexpr Register::FieldValue<decltype(p28),P28Val::txd2> txd2{};
            constexpr Register::FieldValue<decltype(p28),P28Val::enetMdc> enetMdc{};
        }
        ///Pin function select P2.9.
        enum class P29Val {
            gpioP2=0x00000000,     ///<GPIO P2.9
            usbConnect=0x00000001,     ///<USB_CONNECT
            rxd2=0x00000002,     ///<RXD2
            enetMdio=0x00000003,     ///<ENET_MDIO
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,P29Val> p29{}; 
        namespace P29ValC{
            constexpr Register::FieldValue<decltype(p29),P29Val::gpioP2> gpioP2{};
            constexpr Register::FieldValue<decltype(p29),P29Val::usbConnect> usbConnect{};
            constexpr Register::FieldValue<decltype(p29),P29Val::rxd2> rxd2{};
            constexpr Register::FieldValue<decltype(p29),P29Val::enetMdio> enetMdio{};
        }
        ///Pin function select P2.10.
        enum class P210Val {
            gpioP2=0x00000000,     ///<GPIO P2.10
            eint0=0x00000001,     ///<EINT0
            nmi=0x00000002,     ///<NMI
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,P210Val> p210{}; 
        namespace P210ValC{
            constexpr Register::FieldValue<decltype(p210),P210Val::gpioP2> gpioP2{};
            constexpr Register::FieldValue<decltype(p210),P210Val::eint0> eint0{};
            constexpr Register::FieldValue<decltype(p210),P210Val::nmi> nmi{};
        }
        ///Pin function select P2.11.
        enum class P211Val {
            gpioP2=0x00000000,     ///<GPIO P2.11
            eint1=0x00000001,     ///<EINT1
            i2stxClk=0x00000003,     ///<I2STX_CLK
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,P211Val> p211{}; 
        namespace P211ValC{
            constexpr Register::FieldValue<decltype(p211),P211Val::gpioP2> gpioP2{};
            constexpr Register::FieldValue<decltype(p211),P211Val::eint1> eint1{};
            constexpr Register::FieldValue<decltype(p211),P211Val::i2stxClk> i2stxClk{};
        }
        ///Pin function select P2.12.
        enum class P212Val {
            gpioP2=0x00000000,     ///<GPIO P2.12
            eint2=0x00000001,     ///<EINT2
            i2stxWs=0x00000003,     ///<I2STX_WS
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,P212Val> p212{}; 
        namespace P212ValC{
            constexpr Register::FieldValue<decltype(p212),P212Val::gpioP2> gpioP2{};
            constexpr Register::FieldValue<decltype(p212),P212Val::eint2> eint2{};
            constexpr Register::FieldValue<decltype(p212),P212Val::i2stxWs> i2stxWs{};
        }
        ///Pin function select P2.13.
        enum class P213Val {
            gpioP2=0x00000000,     ///<GPIO P2.13
            eint3=0x00000001,     ///<EINT3
            i2stxSda=0x00000003,     ///<I2STX_SDA
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,P213Val> p213{}; 
        namespace P213ValC{
            constexpr Register::FieldValue<decltype(p213),P213Val::gpioP2> gpioP2{};
            constexpr Register::FieldValue<decltype(p213),P213Val::eint3> eint3{};
            constexpr Register::FieldValue<decltype(p213),P213Val::i2stxSda> i2stxSda{};
        }
    }
    namespace Nonepinsel7{    ///<Pin function select register 7
        using Addr = Register::Address<0x4002c01c,0xffc3ffff,0,unsigned>;
        ///Pin function select P3.25.
        enum class P325Val {
            gpioP3=0x00000000,     ///<GPIO P3.25
            mat0=0x00000002,     ///<MAT0.0
            pwm1=0x00000003,     ///<PWM1.2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,P325Val> p325{}; 
        namespace P325ValC{
            constexpr Register::FieldValue<decltype(p325),P325Val::gpioP3> gpioP3{};
            constexpr Register::FieldValue<decltype(p325),P325Val::mat0> mat0{};
            constexpr Register::FieldValue<decltype(p325),P325Val::pwm1> pwm1{};
        }
        ///Pin function select P3.26.
        enum class P326Val {
            gpioP3=0x00000000,     ///<GPIO P3.26
            stclk=0x00000001,     ///<STCLK
            mat0=0x00000002,     ///<MAT0.1
            pwm1=0x00000003,     ///<PWM1.3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,P326Val> p326{}; 
        namespace P326ValC{
            constexpr Register::FieldValue<decltype(p326),P326Val::gpioP3> gpioP3{};
            constexpr Register::FieldValue<decltype(p326),P326Val::stclk> stclk{};
            constexpr Register::FieldValue<decltype(p326),P326Val::mat0> mat0{};
            constexpr Register::FieldValue<decltype(p326),P326Val::pwm1> pwm1{};
        }
    }
    namespace Nonepinsel9{    ///<Pin function select register 9
        using Addr = Register::Address<0x4002c024,0xf0ffffff,0,unsigned>;
        ///Pin function select P4.28.
        enum class P428Val {
            gpioP4=0x00000000,     ///<GPIO P4.28
            rxMclk=0x00000001,     ///<RX_MCLK
            mat2=0x00000002,     ///<MAT2.0
            txd3=0x00000003,     ///<TXD3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,P428Val> p428{}; 
        namespace P428ValC{
            constexpr Register::FieldValue<decltype(p428),P428Val::gpioP4> gpioP4{};
            constexpr Register::FieldValue<decltype(p428),P428Val::rxMclk> rxMclk{};
            constexpr Register::FieldValue<decltype(p428),P428Val::mat2> mat2{};
            constexpr Register::FieldValue<decltype(p428),P428Val::txd3> txd3{};
        }
        ///Pin function select P4.29.
        enum class P429Val {
            gpioP4=0x00000000,     ///<GPIO P4.29
            txMclk=0x00000001,     ///<TX_MCLK
            mat2=0x00000002,     ///<MAT2.1
            rxd3=0x00000003,     ///<RXD3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,P429Val> p429{}; 
        namespace P429ValC{
            constexpr Register::FieldValue<decltype(p429),P429Val::gpioP4> gpioP4{};
            constexpr Register::FieldValue<decltype(p429),P429Val::txMclk> txMclk{};
            constexpr Register::FieldValue<decltype(p429),P429Val::mat2> mat2{};
            constexpr Register::FieldValue<decltype(p429),P429Val::rxd3> rxd3{};
        }
    }
    namespace Nonepinsel10{    ///<Pin function select register 10
        using Addr = Register::Address<0x4002c028,0xfffffff7,0,unsigned>;
        ///TPIU interface pins control.
        enum class TpiuctrlVal {
            disabled=0x00000000,     ///<Disabled. TPIU interface is disabled.
            enabled=0x00000001,     ///<Enabled. TPIU interface is enabled. TPIU signals are available on the pins hosting them regardless of the PINSEL4 content.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TpiuctrlVal> tpiuctrl{}; 
        namespace TpiuctrlValC{
            constexpr Register::FieldValue<decltype(tpiuctrl),TpiuctrlVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(tpiuctrl),TpiuctrlVal::enabled> enabled{};
        }
    }
    namespace Nonepinmode0{    ///<Pin mode select register 0
        using Addr = Register::Address<0x4002c040,0x3f000000,0,unsigned>;
        ///Port 0 pin 0 on-chip pull-up/down resistor control.
        enum class P000modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.0 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.0 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.0 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.0 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,P000modeVal> p000mode{}; 
        namespace P000modeValC{
            constexpr Register::FieldValue<decltype(p000mode),P000modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p000mode),P000modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p000mode),P000modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p000mode),P000modeVal::pullDown> pullDown{};
        }
        ///Port 0 pin 1 control.
        enum class P001modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.1 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.1 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.1 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.1 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,P001modeVal> p001mode{}; 
        namespace P001modeValC{
            constexpr Register::FieldValue<decltype(p001mode),P001modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p001mode),P001modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p001mode),P001modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p001mode),P001modeVal::pullDown> pullDown{};
        }
        ///Port 0 pin 2 control.
        enum class P002modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.2 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.2 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.2 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.2 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,P002modeVal> p002mode{}; 
        namespace P002modeValC{
            constexpr Register::FieldValue<decltype(p002mode),P002modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p002mode),P002modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p002mode),P002modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p002mode),P002modeVal::pullDown> pullDown{};
        }
        ///Port 0 pin 3 control.
        enum class P003modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.3 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.3 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.3 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.3 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,P003modeVal> p003mode{}; 
        namespace P003modeValC{
            constexpr Register::FieldValue<decltype(p003mode),P003modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p003mode),P003modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p003mode),P003modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p003mode),P003modeVal::pullDown> pullDown{};
        }
        ///Port 0 pin 4 control.
        enum class P004modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.4 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.4 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.4 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.4 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,P004modeVal> p004mode{}; 
        namespace P004modeValC{
            constexpr Register::FieldValue<decltype(p004mode),P004modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p004mode),P004modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p004mode),P004modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p004mode),P004modeVal::pullDown> pullDown{};
        }
        ///Port 0 pin 5 control.
        enum class P005modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.5 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.5 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.5 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.5 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,P005modeVal> p005mode{}; 
        namespace P005modeValC{
            constexpr Register::FieldValue<decltype(p005mode),P005modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p005mode),P005modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p005mode),P005modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p005mode),P005modeVal::pullDown> pullDown{};
        }
        ///Port 0 pin 6 control.
        enum class P006modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.6 pin has a pull-up resistor enabled.
            disabled=0x00000001,     ///<Disabled. Repeater. P0.6 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.6 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.6 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,P006modeVal> p006mode{}; 
        namespace P006modeValC{
            constexpr Register::FieldValue<decltype(p006mode),P006modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p006mode),P006modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p006mode),P006modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p006mode),P006modeVal::pullDown> pullDown{};
        }
        ///Port 0 pin 7 control.
        enum class P007modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.7 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.7 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.7 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.7 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,P007modeVal> p007mode{}; 
        namespace P007modeValC{
            constexpr Register::FieldValue<decltype(p007mode),P007modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p007mode),P007modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p007mode),P007modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p007mode),P007modeVal::pullDown> pullDown{};
        }
        ///Port 0 pin 8 control.
        enum class P008modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.8 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.8 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.8 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.8 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,P008modeVal> p008mode{}; 
        namespace P008modeValC{
            constexpr Register::FieldValue<decltype(p008mode),P008modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p008mode),P008modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p008mode),P008modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p008mode),P008modeVal::pullDown> pullDown{};
        }
        ///Port 0 pin 9 control.
        enum class P009modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.9 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.9 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.9 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.9 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,P009modeVal> p009mode{}; 
        namespace P009modeValC{
            constexpr Register::FieldValue<decltype(p009mode),P009modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p009mode),P009modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p009mode),P009modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p009mode),P009modeVal::pullDown> pullDown{};
        }
        ///Port 0 pin 10 control.
        enum class P010modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.10 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.10 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.10 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.10 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,P010modeVal> p010mode{}; 
        namespace P010modeValC{
            constexpr Register::FieldValue<decltype(p010mode),P010modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p010mode),P010modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p010mode),P010modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p010mode),P010modeVal::pullDown> pullDown{};
        }
        ///Port 0 pin 11 control.
        enum class P011modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.11 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.11 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.11 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.11 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,P011modeVal> p011mode{}; 
        namespace P011modeValC{
            constexpr Register::FieldValue<decltype(p011mode),P011modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p011mode),P011modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p011mode),P011modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p011mode),P011modeVal::pullDown> pullDown{};
        }
        ///Port 0 pin 15 control.
        enum class P015modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.15 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.15 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.15 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.15 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,P015modeVal> p015mode{}; 
        namespace P015modeValC{
            constexpr Register::FieldValue<decltype(p015mode),P015modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p015mode),P015modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p015mode),P015modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p015mode),P015modeVal::pullDown> pullDown{};
        }
    }
    namespace Nonepinmode1{    ///<Pin mode select register 1
        using Addr = Register::Address<0x4002c044,0xffc00000,0,unsigned>;
        ///Port 1 pin 16 control.
        enum class P016modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.16 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.16 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.16 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.16 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,P016modeVal> p016mode{}; 
        namespace P016modeValC{
            constexpr Register::FieldValue<decltype(p016mode),P016modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p016mode),P016modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p016mode),P016modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p016mode),P016modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 17 control.
        enum class P017modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.17 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.17 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.17 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.17 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,P017modeVal> p017mode{}; 
        namespace P017modeValC{
            constexpr Register::FieldValue<decltype(p017mode),P017modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p017mode),P017modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p017mode),P017modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p017mode),P017modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 18 control.
        enum class P018modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.18 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.18 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.18 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.18 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,P018modeVal> p018mode{}; 
        namespace P018modeValC{
            constexpr Register::FieldValue<decltype(p018mode),P018modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p018mode),P018modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p018mode),P018modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p018mode),P018modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 19 control.
        enum class P019modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.19 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.19 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.19 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.19 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,P019modeVal> p019mode{}; 
        namespace P019modeValC{
            constexpr Register::FieldValue<decltype(p019mode),P019modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p019mode),P019modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p019mode),P019modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p019mode),P019modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 20 control.
        enum class P020modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.20 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.20 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.20 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.20 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,P020modeVal> p020mode{}; 
        namespace P020modeValC{
            constexpr Register::FieldValue<decltype(p020mode),P020modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p020mode),P020modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p020mode),P020modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p020mode),P020modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 21 control.
        enum class P021modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.21 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.21 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.21 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.21 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,P021modeVal> p021mode{}; 
        namespace P021modeValC{
            constexpr Register::FieldValue<decltype(p021mode),P021modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p021mode),P021modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p021mode),P021modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p021mode),P021modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 22 control.
        enum class P022modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.22 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.22 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.22 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.22 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,P022modeVal> p022mode{}; 
        namespace P022modeValC{
            constexpr Register::FieldValue<decltype(p022mode),P022modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p022mode),P022modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p022mode),P022modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p022mode),P022modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 23 control.
        enum class P023modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.23 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.23 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.23 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.23 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,P023modeVal> p023mode{}; 
        namespace P023modeValC{
            constexpr Register::FieldValue<decltype(p023mode),P023modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p023mode),P023modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p023mode),P023modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p023mode),P023modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 24 control.
        enum class P024modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.24 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.24 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.24 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.24 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,P024modeVal> p024mode{}; 
        namespace P024modeValC{
            constexpr Register::FieldValue<decltype(p024mode),P024modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p024mode),P024modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p024mode),P024modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p024mode),P024modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 25 control.
        enum class P025modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.25 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.25 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.25 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.25 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,P025modeVal> p025mode{}; 
        namespace P025modeValC{
            constexpr Register::FieldValue<decltype(p025mode),P025modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p025mode),P025modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p025mode),P025modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p025mode),P025modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 26 control.
        enum class P026modeVal {
            pullUp=0x00000000,     ///<Pull-up. P0.26 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P0.26 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P0.26 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P0.26 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,P026modeVal> p026mode{}; 
        namespace P026modeValC{
            constexpr Register::FieldValue<decltype(p026mode),P026modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p026mode),P026modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p026mode),P026modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p026mode),P026modeVal::pullDown> pullDown{};
        }
    }
    namespace Nonepinmode2{    ///<Pin mode select register 2
        using Addr = Register::Address<0x4002c048,0x0fc0fcf0,0,unsigned>;
        ///Port 1 pin 0 control.
        enum class P100modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.0 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.0 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.0 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.0 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,P100modeVal> p100mode{}; 
        namespace P100modeValC{
            constexpr Register::FieldValue<decltype(p100mode),P100modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p100mode),P100modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p100mode),P100modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p100mode),P100modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 1 control.
        enum class P101modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.1 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.1 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.1 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.1 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,P101modeVal> p101mode{}; 
        namespace P101modeValC{
            constexpr Register::FieldValue<decltype(p101mode),P101modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p101mode),P101modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p101mode),P101modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p101mode),P101modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 4 control.
        enum class P104modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.4 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.4 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.4 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.4 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,P104modeVal> p104mode{}; 
        namespace P104modeValC{
            constexpr Register::FieldValue<decltype(p104mode),P104modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p104mode),P104modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p104mode),P104modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p104mode),P104modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 8 control.
        enum class P108modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.8 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.8 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.8 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.8 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,P108modeVal> p108mode{}; 
        namespace P108modeValC{
            constexpr Register::FieldValue<decltype(p108mode),P108modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p108mode),P108modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p108mode),P108modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p108mode),P108modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 9 control.
        enum class P109modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.9 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.9 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.9 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.9 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,P109modeVal> p109mode{}; 
        namespace P109modeValC{
            constexpr Register::FieldValue<decltype(p109mode),P109modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p109mode),P109modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p109mode),P109modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p109mode),P109modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 10 control.
        enum class P110modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.10 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.10 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.10 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.10 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,P110modeVal> p110mode{}; 
        namespace P110modeValC{
            constexpr Register::FieldValue<decltype(p110mode),P110modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p110mode),P110modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p110mode),P110modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p110mode),P110modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 14 control.
        enum class P114modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.14 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.14 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.14 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.14 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,P114modeVal> p114mode{}; 
        namespace P114modeValC{
            constexpr Register::FieldValue<decltype(p114mode),P114modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p114mode),P114modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p114mode),P114modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p114mode),P114modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 15 control.
        enum class P115modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.15 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.15 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.15 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.15 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,P115modeVal> p115mode{}; 
        namespace P115modeValC{
            constexpr Register::FieldValue<decltype(p115mode),P115modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p115mode),P115modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p115mode),P115modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p115mode),P115modeVal::pullDown> pullDown{};
        }
    }
    namespace Nonepinmode3{    ///<Pin mode select register 3.
        using Addr = Register::Address<0x4002c04c,0x00000000,0,unsigned>;
        ///Port 1 pin 16 control.
        enum class P116modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.16 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.16 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.16 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.16 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,P116modeVal> p116mode{}; 
        namespace P116modeValC{
            constexpr Register::FieldValue<decltype(p116mode),P116modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p116mode),P116modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p116mode),P116modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p116mode),P116modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 17 control.
        enum class P117modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.17 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.17 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.17 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.17 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,P117modeVal> p117mode{}; 
        namespace P117modeValC{
            constexpr Register::FieldValue<decltype(p117mode),P117modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p117mode),P117modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p117mode),P117modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p117mode),P117modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 18 control.
        enum class P118modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.18 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.18 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.18 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.18 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,P118modeVal> p118mode{}; 
        namespace P118modeValC{
            constexpr Register::FieldValue<decltype(p118mode),P118modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p118mode),P118modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p118mode),P118modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p118mode),P118modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 19 control.
        enum class P119modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.19 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.19 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.19 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.19 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,P119modeVal> p119mode{}; 
        namespace P119modeValC{
            constexpr Register::FieldValue<decltype(p119mode),P119modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p119mode),P119modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p119mode),P119modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p119mode),P119modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 20 control.
        enum class P120modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.20 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.20 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.20 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.20 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,P120modeVal> p120mode{}; 
        namespace P120modeValC{
            constexpr Register::FieldValue<decltype(p120mode),P120modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p120mode),P120modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p120mode),P120modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p120mode),P120modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 21 control.
        enum class P121modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.21 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.21 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.21 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.21 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,P121modeVal> p121mode{}; 
        namespace P121modeValC{
            constexpr Register::FieldValue<decltype(p121mode),P121modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p121mode),P121modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p121mode),P121modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p121mode),P121modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 22 control.
        enum class P122modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.22 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.22 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.22 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.22 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,P122modeVal> p122mode{}; 
        namespace P122modeValC{
            constexpr Register::FieldValue<decltype(p122mode),P122modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p122mode),P122modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p122mode),P122modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p122mode),P122modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 23 control.
        enum class P123modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.23 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.23 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.23 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.23 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,P123modeVal> p123mode{}; 
        namespace P123modeValC{
            constexpr Register::FieldValue<decltype(p123mode),P123modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p123mode),P123modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p123mode),P123modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p123mode),P123modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 24 control.
        enum class P124modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.24 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.24 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.24 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.24 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,P124modeVal> p124mode{}; 
        namespace P124modeValC{
            constexpr Register::FieldValue<decltype(p124mode),P124modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p124mode),P124modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p124mode),P124modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p124mode),P124modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 25 control.
        enum class P125modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.25 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.25 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.25 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.25 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,P125modeVal> p125mode{}; 
        namespace P125modeValC{
            constexpr Register::FieldValue<decltype(p125mode),P125modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p125mode),P125modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p125mode),P125modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p125mode),P125modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 26 control.
        enum class P126modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.26 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.26 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.26 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.26 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,P126modeVal> p126mode{}; 
        namespace P126modeValC{
            constexpr Register::FieldValue<decltype(p126mode),P126modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p126mode),P126modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p126mode),P126modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p126mode),P126modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 27 control.
        enum class P127modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.27 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.27 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.27 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.27 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,P127modeVal> p127mode{}; 
        namespace P127modeValC{
            constexpr Register::FieldValue<decltype(p127mode),P127modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p127mode),P127modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p127mode),P127modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p127mode),P127modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 28 control.
        enum class P128modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.28 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.28 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.28 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.28 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,P128modeVal> p128mode{}; 
        namespace P128modeValC{
            constexpr Register::FieldValue<decltype(p128mode),P128modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p128mode),P128modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p128mode),P128modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p128mode),P128modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 29 control.
        enum class P129modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.29 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.29 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.29 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.29 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,P129modeVal> p129mode{}; 
        namespace P129modeValC{
            constexpr Register::FieldValue<decltype(p129mode),P129modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p129mode),P129modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p129mode),P129modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p129mode),P129modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 30 control.
        enum class P130modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.30 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.30 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.30 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.30 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,P130modeVal> p130mode{}; 
        namespace P130modeValC{
            constexpr Register::FieldValue<decltype(p130mode),P130modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p130mode),P130modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p130mode),P130modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p130mode),P130modeVal::pullDown> pullDown{};
        }
        ///Port 1 pin 31 control.
        enum class P131modeVal {
            pullUp=0x00000000,     ///<Pull-up. P1.31 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P1.31 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P1.31 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P1.31 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,P131modeVal> p131mode{}; 
        namespace P131modeValC{
            constexpr Register::FieldValue<decltype(p131mode),P131modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p131mode),P131modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p131mode),P131modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p131mode),P131modeVal::pullDown> pullDown{};
        }
    }
    namespace Nonepinmode4{    ///<Pin mode select register 4
        using Addr = Register::Address<0x4002c050,0xf0000000,0,unsigned>;
        ///Port 2 pin 0 control.
        enum class P200modeVal {
            pullUp=0x00000000,     ///<Pull-up. P2.0 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P2.0 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P2.0 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P2.0 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,P200modeVal> p200mode{}; 
        namespace P200modeValC{
            constexpr Register::FieldValue<decltype(p200mode),P200modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p200mode),P200modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p200mode),P200modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p200mode),P200modeVal::pullDown> pullDown{};
        }
        ///Port 2 pin 1 control.
        enum class P201modeVal {
            pullUp=0x00000000,     ///<Pull-up. P2.1 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P2.1 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P2.1 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P2.1 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,P201modeVal> p201mode{}; 
        namespace P201modeValC{
            constexpr Register::FieldValue<decltype(p201mode),P201modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p201mode),P201modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p201mode),P201modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p201mode),P201modeVal::pullDown> pullDown{};
        }
        ///Port 2 pin 2 control.
        enum class P202modeVal {
            pullUp=0x00000000,     ///<Pull-up. P2.2 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P2.2 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P2.2 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P2.2 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,P202modeVal> p202mode{}; 
        namespace P202modeValC{
            constexpr Register::FieldValue<decltype(p202mode),P202modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p202mode),P202modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p202mode),P202modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p202mode),P202modeVal::pullDown> pullDown{};
        }
        ///Port 2 pin 3 control.
        enum class P203modeVal {
            pullUp=0x00000000,     ///<Pull-up. P2.3 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P2.3 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P2.3 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P2.3 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,P203modeVal> p203mode{}; 
        namespace P203modeValC{
            constexpr Register::FieldValue<decltype(p203mode),P203modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p203mode),P203modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p203mode),P203modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p203mode),P203modeVal::pullDown> pullDown{};
        }
        ///Port 2 pin 4 control.
        enum class P204modeVal {
            pullUp=0x00000000,     ///<Pull-up. P2.4 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P2.4 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P2.4 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P2.4 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,P204modeVal> p204mode{}; 
        namespace P204modeValC{
            constexpr Register::FieldValue<decltype(p204mode),P204modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p204mode),P204modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p204mode),P204modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p204mode),P204modeVal::pullDown> pullDown{};
        }
        ///Port 2 pin 5 control.
        enum class P205modeVal {
            pullUp=0x00000000,     ///<Pull-up. P2.5 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P2.5 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P2.5 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P2.5 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,P205modeVal> p205mode{}; 
        namespace P205modeValC{
            constexpr Register::FieldValue<decltype(p205mode),P205modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p205mode),P205modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p205mode),P205modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p205mode),P205modeVal::pullDown> pullDown{};
        }
        ///Port 2 pin 6 control.
        enum class P206modeVal {
            pullUp=0x00000000,     ///<Pull-up. P2.6 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P2.6 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P2.6 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P2.6 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,P206modeVal> p206mode{}; 
        namespace P206modeValC{
            constexpr Register::FieldValue<decltype(p206mode),P206modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p206mode),P206modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p206mode),P206modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p206mode),P206modeVal::pullDown> pullDown{};
        }
        ///Port 2 pin 7 control.
        enum class P207modeVal {
            pullUp=0x00000000,     ///<Pull-up. P2.7 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P2.7 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P2.7 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P2.7 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,P207modeVal> p207mode{}; 
        namespace P207modeValC{
            constexpr Register::FieldValue<decltype(p207mode),P207modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p207mode),P207modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p207mode),P207modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p207mode),P207modeVal::pullDown> pullDown{};
        }
        ///Port 2 pin 8 control.
        enum class P208modeVal {
            pullUp=0x00000000,     ///<Pull-up. P2.8 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P2.8 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P2.8 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P2.8 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,P208modeVal> p208mode{}; 
        namespace P208modeValC{
            constexpr Register::FieldValue<decltype(p208mode),P208modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p208mode),P208modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p208mode),P208modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p208mode),P208modeVal::pullDown> pullDown{};
        }
        ///Port 2 pin 9 control.
        enum class P209modeVal {
            pullUp=0x00000000,     ///<Pull-up. P2.9 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P2.9 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P2.9 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P2.9 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,P209modeVal> p209mode{}; 
        namespace P209modeValC{
            constexpr Register::FieldValue<decltype(p209mode),P209modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p209mode),P209modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p209mode),P209modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p209mode),P209modeVal::pullDown> pullDown{};
        }
        ///Port 2 pin 10 control.
        enum class P210modeVal {
            pullUp=0x00000000,     ///<Pull-up. P2.10 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P2.10 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P2.10 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P2.10 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,P210modeVal> p210mode{}; 
        namespace P210modeValC{
            constexpr Register::FieldValue<decltype(p210mode),P210modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p210mode),P210modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p210mode),P210modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p210mode),P210modeVal::pullDown> pullDown{};
        }
        ///Port 2 pin 11 control.
        enum class P211modeVal {
            pullUp=0x00000000,     ///<Pull-up. P2.11 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P2.11 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P2.11 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P2.11 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,P211modeVal> p211mode{}; 
        namespace P211modeValC{
            constexpr Register::FieldValue<decltype(p211mode),P211modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p211mode),P211modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p211mode),P211modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p211mode),P211modeVal::pullDown> pullDown{};
        }
        ///Port 2 pin 12 control.
        enum class P212modeVal {
            pullUp=0x00000000,     ///<Pull-up. P2.12 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P2.12 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P2.12 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P2.12 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,P212modeVal> p212mode{}; 
        namespace P212modeValC{
            constexpr Register::FieldValue<decltype(p212mode),P212modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p212mode),P212modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p212mode),P212modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p212mode),P212modeVal::pullDown> pullDown{};
        }
        ///Port 2 pin 13 control.
        enum class P213modeVal {
            pullUp=0x00000000,     ///<Pull-up. P2.13 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P2.13 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P2.13 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P2.13 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,P213modeVal> p213mode{}; 
        namespace P213modeValC{
            constexpr Register::FieldValue<decltype(p213mode),P213modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p213mode),P213modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p213mode),P213modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p213mode),P213modeVal::pullDown> pullDown{};
        }
    }
    namespace Nonepinmode7{    ///<Pin mode select register 7
        using Addr = Register::Address<0x4002c05c,0xffc3ffff,0,unsigned>;
        ///Port 3 pin 25 control.
        enum class P325modeVal {
            pullUp=0x00000000,     ///<Pull-up. P3.25 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P3.25 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P3.25 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P3.25 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,P325modeVal> p325mode{}; 
        namespace P325modeValC{
            constexpr Register::FieldValue<decltype(p325mode),P325modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p325mode),P325modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p325mode),P325modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p325mode),P325modeVal::pullDown> pullDown{};
        }
        ///Port 3 pin 26 control.
        enum class P326modeVal {
            pullUp=0x00000000,     ///<Pull-up. P3.26 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P3.26 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P3.26 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P3.26 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,P326modeVal> p326mode{}; 
        namespace P326modeValC{
            constexpr Register::FieldValue<decltype(p326mode),P326modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p326mode),P326modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p326mode),P326modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p326mode),P326modeVal::pullDown> pullDown{};
        }
    }
    namespace Nonepinmode9{    ///<Pin mode select register 9
        using Addr = Register::Address<0x4002c064,0xf0ffffff,0,unsigned>;
        ///Port 4 pin 28 control.
        enum class P428modeVal {
            pullUp=0x00000000,     ///<Pull-up. P4.28 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P4.28 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P4.28 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P4.28 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,P428modeVal> p428mode{}; 
        namespace P428modeValC{
            constexpr Register::FieldValue<decltype(p428mode),P428modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p428mode),P428modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p428mode),P428modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p428mode),P428modeVal::pullDown> pullDown{};
        }
        ///Port 4 pin 29 control.
        enum class P429modeVal {
            pullUp=0x00000000,     ///<Pull-up. P4.29 pin has a pull-up resistor enabled.
            repeater=0x00000001,     ///<Repeater. P4.29 pin has repeater mode enabled.
            disabled=0x00000002,     ///<Disabled. P4.29 pin has neither pull-up nor pull-down.
            pullDown=0x00000003,     ///<Pull-down. P4.29 has a pull-down resistor enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,P429modeVal> p429mode{}; 
        namespace P429modeValC{
            constexpr Register::FieldValue<decltype(p429mode),P429modeVal::pullUp> pullUp{};
            constexpr Register::FieldValue<decltype(p429mode),P429modeVal::repeater> repeater{};
            constexpr Register::FieldValue<decltype(p429mode),P429modeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(p429mode),P429modeVal::pullDown> pullDown{};
        }
    }
    namespace NonepinmodeOd0{    ///<Open drain mode control register 0
        using Addr = Register::Address<0x4002c068,0x98007000,0,unsigned>;
        ///Port 0 pin 0 open drain mode control. Pins may potentially be used for I2C-buses using standard port pins. If so, they should be configured for open drain mode via the related bits in PINMODE_OD0.
        enum class P000odVal {
            normal=0x00000000,     ///<Normal. P0.0 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.0 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,P000odVal> p000od{}; 
        namespace P000odValC{
            constexpr Register::FieldValue<decltype(p000od),P000odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p000od),P000odVal::openDrain> openDrain{};
        }
        ///Port 0 pin 1 open drain mode control. Pins may potentially be used for I2C-buses using standard port pins. If so, they should be configured for open drain mode via the related bits in PINMODE_OD0.
        enum class P001odVal {
            normal=0x00000000,     ///<Normal. P0.1 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.1 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,P001odVal> p001od{}; 
        namespace P001odValC{
            constexpr Register::FieldValue<decltype(p001od),P001odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p001od),P001odVal::openDrain> openDrain{};
        }
        ///Port 0 pin 2 open drain mode control
        enum class P002odVal {
            normal=0x00000000,     ///<Normal. P0.2 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.2 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,P002odVal> p002od{}; 
        namespace P002odValC{
            constexpr Register::FieldValue<decltype(p002od),P002odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p002od),P002odVal::openDrain> openDrain{};
        }
        ///Port 0 pin 3 open drain mode control
        enum class P003odVal {
            normal=0x00000000,     ///<Normal. P0.3 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.3 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,P003odVal> p003od{}; 
        namespace P003odValC{
            constexpr Register::FieldValue<decltype(p003od),P003odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p003od),P003odVal::openDrain> openDrain{};
        }
        ///Port 0 pin 4 open drain mode control
        enum class P004odVal {
            normal=0x00000000,     ///<Normal. P0.4 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.4 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,P004odVal> p004od{}; 
        namespace P004odValC{
            constexpr Register::FieldValue<decltype(p004od),P004odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p004od),P004odVal::openDrain> openDrain{};
        }
        ///Port 0 pin 5 open drain mode control
        enum class P005odVal {
            normal=0x00000000,     ///<Normal. P0.5 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.5 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,P005odVal> p005od{}; 
        namespace P005odValC{
            constexpr Register::FieldValue<decltype(p005od),P005odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p005od),P005odVal::openDrain> openDrain{};
        }
        ///Port 0 pin 6 open drain mode control
        enum class P006odVal {
            normal=0x00000000,     ///<Normal. P0.6 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.6 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,P006odVal> p006od{}; 
        namespace P006odValC{
            constexpr Register::FieldValue<decltype(p006od),P006odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p006od),P006odVal::openDrain> openDrain{};
        }
        ///Port 0 pin 7 open drain mode control
        enum class P007odVal {
            normal=0x00000000,     ///<Normal. P0.7 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.7 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,P007odVal> p007od{}; 
        namespace P007odValC{
            constexpr Register::FieldValue<decltype(p007od),P007odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p007od),P007odVal::openDrain> openDrain{};
        }
        ///Port 0 pin 8 open drain mode control
        enum class P008odVal {
            normal=0x00000000,     ///<Normal. P0.8 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.8 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,P008odVal> p008od{}; 
        namespace P008odValC{
            constexpr Register::FieldValue<decltype(p008od),P008odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p008od),P008odVal::openDrain> openDrain{};
        }
        ///Port 0 pin 9 open drain mode control
        enum class P009odVal {
            normal=0x00000000,     ///<Normal. P0.9 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.9 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,P009odVal> p009od{}; 
        namespace P009odValC{
            constexpr Register::FieldValue<decltype(p009od),P009odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p009od),P009odVal::openDrain> openDrain{};
        }
        ///Port 0 pin 10 open drain mode control. Pins may potentially be used for I2C-buses using standard port pins. If so, they should be configured for open drain mode via the related bits in PINMODE_OD0.
        enum class P010odVal {
            normal=0x00000000,     ///<Normal. P0.10 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.10 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,P010odVal> p010od{}; 
        namespace P010odValC{
            constexpr Register::FieldValue<decltype(p010od),P010odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p010od),P010odVal::openDrain> openDrain{};
        }
        ///Port 0 pin 11 open drain mode control. Pins may potentially be used for I2C-buses using standard port pins. If so, they should be configured for open drain mode via the related bits in PINMODE_OD0.
        enum class P011odVal {
            normal=0x00000000,     ///<Normal. P0.11 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.11 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,P011odVal> p011od{}; 
        namespace P011odValC{
            constexpr Register::FieldValue<decltype(p011od),P011odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p011od),P011odVal::openDrain> openDrain{};
        }
        ///Port 0 pin 15 open drain mode control
        enum class P015odVal {
            normal=0x00000000,     ///<Normal. P0.15 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.15 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,P015odVal> p015od{}; 
        namespace P015odValC{
            constexpr Register::FieldValue<decltype(p015od),P015odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p015od),P015odVal::openDrain> openDrain{};
        }
        ///Port 0 pin 16 open drain mode control
        enum class P016odVal {
            normal=0x00000000,     ///<Normal. P0.16 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.16 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,P016odVal> p016od{}; 
        namespace P016odValC{
            constexpr Register::FieldValue<decltype(p016od),P016odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p016od),P016odVal::openDrain> openDrain{};
        }
        ///Port 0 pin 17 open drain mode control
        enum class P017odVal {
            normal=0x00000000,     ///<Normal. P0.17 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.17 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,P017odVal> p017od{}; 
        namespace P017odValC{
            constexpr Register::FieldValue<decltype(p017od),P017odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p017od),P017odVal::openDrain> openDrain{};
        }
        ///Port 0 pin 18 open drain mode control
        enum class P018odVal {
            normal=0x00000000,     ///<Normal. P0.18 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.18 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,P018odVal> p018od{}; 
        namespace P018odValC{
            constexpr Register::FieldValue<decltype(p018od),P018odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p018od),P018odVal::openDrain> openDrain{};
        }
        ///Port 0 pin 19 open drain mode control. Pins may potentially be used for I2C-buses using standard port pins. If so, they should be configured for open drain mode via the related bits in PINMODE_OD0.
        enum class P019odVal {
            normal=0x00000000,     ///<Normal. P0.19 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.19 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,P019odVal> p019od{}; 
        namespace P019odValC{
            constexpr Register::FieldValue<decltype(p019od),P019odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p019od),P019odVal::openDrain> openDrain{};
        }
        ///Port 0 pin 20open drain mode control. Pins may potentially be used for I2C-buses using standard port pins. If so, they should be configured for open drain mode via the related bits in PINMODE_OD0.
        enum class P020odVal {
            normal=0x00000000,     ///<Normal. P0.20 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.20 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,P020odVal> p020od{}; 
        namespace P020odValC{
            constexpr Register::FieldValue<decltype(p020od),P020odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p020od),P020odVal::openDrain> openDrain{};
        }
        ///Port 0 pin 21 open drain mode control
        enum class P021odVal {
            normal=0x00000000,     ///<Normal. P0.21 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.21 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,P021odVal> p021od{}; 
        namespace P021odValC{
            constexpr Register::FieldValue<decltype(p021od),P021odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p021od),P021odVal::openDrain> openDrain{};
        }
        ///Port 0 pin 22 open drain mode control
        enum class P022odVal {
            normal=0x00000000,     ///<Normal. P0.22 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.22 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,P022odVal> p022od{}; 
        namespace P022odValC{
            constexpr Register::FieldValue<decltype(p022od),P022odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p022od),P022odVal::openDrain> openDrain{};
        }
        ///Port 0 pin 23 open drain mode control
        enum class P023odVal {
            normal=0x00000000,     ///<Normal. P0.23 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.23 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,P023odVal> p023od{}; 
        namespace P023odValC{
            constexpr Register::FieldValue<decltype(p023od),P023odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p023od),P023odVal::openDrain> openDrain{};
        }
        ///Port 0 pin 24open drain mode control
        enum class P024odVal {
            normal=0x00000000,     ///<Normal. P0.23 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.23 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,P024odVal> p024od{}; 
        namespace P024odValC{
            constexpr Register::FieldValue<decltype(p024od),P024odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p024od),P024odVal::openDrain> openDrain{};
        }
        ///Port 0 pin 25 open drain mode control
        enum class P025odVal {
            normal=0x00000000,     ///<Normal. P0.25 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.25 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,P025odVal> p025od{}; 
        namespace P025odValC{
            constexpr Register::FieldValue<decltype(p025od),P025odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p025od),P025odVal::openDrain> openDrain{};
        }
        ///Port 0 pin 26 open drain mode control
        enum class P026odVal {
            normal=0x00000000,     ///<Normal. P0.26 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.26 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,P026odVal> p026od{}; 
        namespace P026odValC{
            constexpr Register::FieldValue<decltype(p026od),P026odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p026od),P026odVal::openDrain> openDrain{};
        }
        ///Port 0 pin 29 open drain mode control
        enum class P029odVal {
            normal=0x00000000,     ///<Normal. P0.29 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.29 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,P029odVal> p029od{}; 
        namespace P029odValC{
            constexpr Register::FieldValue<decltype(p029od),P029odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p029od),P029odVal::openDrain> openDrain{};
        }
        ///Port 0 pin 30 open drain mode control
        enum class P030odVal {
            normal=0x00000000,     ///<Normal. P0.30 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P0.30 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,P030odVal> p030od{}; 
        namespace P030odValC{
            constexpr Register::FieldValue<decltype(p030od),P030odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p030od),P030odVal::openDrain> openDrain{};
        }
    }
    namespace NonepinmodeOd1{    ///<Open drain mode control register 1
        using Addr = Register::Address<0x4002c06c,0x000038ec,0,unsigned>;
        ///Port 1 pin 0 open drain mode control.
        enum class P100odVal {
            normal=0x00000000,     ///<Normal. P1.0 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.0 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,P100odVal> p100od{}; 
        namespace P100odValC{
            constexpr Register::FieldValue<decltype(p100od),P100odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p100od),P100odVal::openDrain> openDrain{};
        }
        ///Port 1 pin 1 open drain mode control, see P1.00OD
        enum class P101odVal {
            normal=0x00000000,     ///<Normal. P1.1 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.1 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,P101odVal> p101od{}; 
        namespace P101odValC{
            constexpr Register::FieldValue<decltype(p101od),P101odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p101od),P101odVal::openDrain> openDrain{};
        }
        ///Port 1 pin 4 open drain mode control, see P1.00OD
        enum class P104odVal {
            normal=0x00000000,     ///<Normal. P1.4 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.4 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,P104odVal> p104od{}; 
        namespace P104odValC{
            constexpr Register::FieldValue<decltype(p104od),P104odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p104od),P104odVal::openDrain> openDrain{};
        }
        ///Port 1 pin 8 open drain mode control, see P1.00OD
        enum class P108odVal {
            normal=0x00000000,     ///<Normal. P1.8 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.8 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,P108odVal> p108od{}; 
        namespace P108odValC{
            constexpr Register::FieldValue<decltype(p108od),P108odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p108od),P108odVal::openDrain> openDrain{};
        }
        ///Port 1 pin 9 open drain mode control, see P1.00OD
        enum class P109odVal {
            normal=0x00000000,     ///<Normal. P1.9 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.9 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,P109odVal> p109od{}; 
        namespace P109odValC{
            constexpr Register::FieldValue<decltype(p109od),P109odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p109od),P109odVal::openDrain> openDrain{};
        }
        ///Port 1 pin 10 open drain mode control, see P1.00OD
        enum class P110odVal {
            normal=0x00000000,     ///<Normal. P1.10 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.10 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,P110odVal> p110od{}; 
        namespace P110odValC{
            constexpr Register::FieldValue<decltype(p110od),P110odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p110od),P110odVal::openDrain> openDrain{};
        }
        ///Port 1 pin 14 open drain mode control, see P1.00OD
        enum class P114odVal {
            normal=0x00000000,     ///<Normal. P1.14 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.14 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,P114odVal> p114od{}; 
        namespace P114odValC{
            constexpr Register::FieldValue<decltype(p114od),P114odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p114od),P114odVal::openDrain> openDrain{};
        }
        ///Port 1 pin 15 open drain mode control, see P1.00OD
        enum class P115odVal {
            normal=0x00000000,     ///<Normal. P1.15 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.15 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,P115odVal> p115od{}; 
        namespace P115odValC{
            constexpr Register::FieldValue<decltype(p115od),P115odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p115od),P115odVal::openDrain> openDrain{};
        }
        ///Port 1 pin 16 open drain mode control, see P1.00OD
        enum class P116odVal {
            normal=0x00000000,     ///<Normal. P1.16 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.16 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,P116odVal> p116od{}; 
        namespace P116odValC{
            constexpr Register::FieldValue<decltype(p116od),P116odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p116od),P116odVal::openDrain> openDrain{};
        }
        ///Port 1 pin 17 open drain mode control, see P1.00OD
        enum class P117odVal {
            normal=0x00000000,     ///<Normal. P1.17 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.17 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,P117odVal> p117od{}; 
        namespace P117odValC{
            constexpr Register::FieldValue<decltype(p117od),P117odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p117od),P117odVal::openDrain> openDrain{};
        }
        ///Port 1 pin 18 open drain mode control, see P1.00OD
        enum class P118odVal {
            normal=0x00000000,     ///<Normal. P1.18 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.18 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,P118odVal> p118od{}; 
        namespace P118odValC{
            constexpr Register::FieldValue<decltype(p118od),P118odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p118od),P118odVal::openDrain> openDrain{};
        }
        ///Port 1 pin 19 open drain mode control, see P1.00OD
        enum class P119odVal {
            normal=0x00000000,     ///<Normal. P1.19 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.19 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,P119odVal> p119od{}; 
        namespace P119odValC{
            constexpr Register::FieldValue<decltype(p119od),P119odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p119od),P119odVal::openDrain> openDrain{};
        }
        ///Port 1 pin 20open drain mode control, see P1.00OD
        enum class P120odVal {
            normal=0x00000000,     ///<Normal. P1.20 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.20 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,P120odVal> p120od{}; 
        namespace P120odValC{
            constexpr Register::FieldValue<decltype(p120od),P120odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p120od),P120odVal::openDrain> openDrain{};
        }
        ///Port 1 pin 21 open drain mode control, see P1.00OD
        enum class P121odVal {
            normal=0x00000000,     ///<Normal. P1.21 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.21 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,P121odVal> p121od{}; 
        namespace P121odValC{
            constexpr Register::FieldValue<decltype(p121od),P121odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p121od),P121odVal::openDrain> openDrain{};
        }
        ///Port 1 pin 22 open drain mode control, see P1.00OD
        enum class P122odVal {
            normal=0x00000000,     ///<Normal. P1.22 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.22 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,P122odVal> p122od{}; 
        namespace P122odValC{
            constexpr Register::FieldValue<decltype(p122od),P122odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p122od),P122odVal::openDrain> openDrain{};
        }
        ///Port 1 pin 23 open drain mode control, see P1.00OD
        enum class P123odVal {
            normal=0x00000000,     ///<Normal. P1.23 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.23 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,P123odVal> p123od{}; 
        namespace P123odValC{
            constexpr Register::FieldValue<decltype(p123od),P123odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p123od),P123odVal::openDrain> openDrain{};
        }
        ///Port 1 pin 24open drain mode control, see P1.00OD
        enum class P124odVal {
            normal=0x00000000,     ///<Normal. P1.24 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.24 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,P124odVal> p124od{}; 
        namespace P124odValC{
            constexpr Register::FieldValue<decltype(p124od),P124odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p124od),P124odVal::openDrain> openDrain{};
        }
        ///Port 1 pin 25 open drain mode control, see P1.00OD
        enum class P125odVal {
            normal=0x00000000,     ///<Normal. P1.25 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.25 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,P125odVal> p125od{}; 
        namespace P125odValC{
            constexpr Register::FieldValue<decltype(p125od),P125odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p125od),P125odVal::openDrain> openDrain{};
        }
        ///Port 1 pin 26 open drain mode control, see P1.00OD
        enum class P126odVal {
            normal=0x00000000,     ///<Normal. P1.26 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.26 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,P126odVal> p126od{}; 
        namespace P126odValC{
            constexpr Register::FieldValue<decltype(p126od),P126odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p126od),P126odVal::openDrain> openDrain{};
        }
        ///Port 1 pin 27 open drain mode control, see P1.00OD
        enum class P127odVal {
            normal=0x00000000,     ///<Normal. P1.27 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.27 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,P127odVal> p127od{}; 
        namespace P127odValC{
            constexpr Register::FieldValue<decltype(p127od),P127odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p127od),P127odVal::openDrain> openDrain{};
        }
        ///Port 1 pin 28 open drain mode control, see P1.00OD
        enum class P128odVal {
            normal=0x00000000,     ///<Normal. P1.28 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.28 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,P128odVal> p128od{}; 
        namespace P128odValC{
            constexpr Register::FieldValue<decltype(p128od),P128odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p128od),P128odVal::openDrain> openDrain{};
        }
        ///Port 1 pin 29 open drain mode control, see P1.00OD
        enum class P129odVal {
            normal=0x00000000,     ///<Normal. P1.29 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.29 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,P129odVal> p129od{}; 
        namespace P129odValC{
            constexpr Register::FieldValue<decltype(p129od),P129odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p129od),P129odVal::openDrain> openDrain{};
        }
        ///Port 1 pin 30 open drain mode control, see P1.00OD
        enum class P130odVal {
            normal=0x00000000,     ///<Normal. P1.30 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.30 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,P130odVal> p130od{}; 
        namespace P130odValC{
            constexpr Register::FieldValue<decltype(p130od),P130odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p130od),P130odVal::openDrain> openDrain{};
        }
        ///Port 1 pin 31 open drain mode control.
        enum class P131odVal {
            normal=0x00000000,     ///<Normal. P1.31 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P1.31 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,P131odVal> p131od{}; 
        namespace P131odValC{
            constexpr Register::FieldValue<decltype(p131od),P131odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p131od),P131odVal::openDrain> openDrain{};
        }
    }
    namespace NonepinmodeOd2{    ///<Open drain mode control register 2
        using Addr = Register::Address<0x4002c070,0xffffc000,0,unsigned>;
        ///Port 2 pin 0 open drain mode control.
        enum class P200odVal {
            normal=0x00000000,     ///<Normal. P2.0 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P2.0 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,P200odVal> p200od{}; 
        namespace P200odValC{
            constexpr Register::FieldValue<decltype(p200od),P200odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p200od),P200odVal::openDrain> openDrain{};
        }
        ///Port 2 pin 1 open drain mode control, see P2.00OD
        enum class P201odVal {
            normal=0x00000000,     ///<Normal. P2.1 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P2.1p in is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,P201odVal> p201od{}; 
        namespace P201odValC{
            constexpr Register::FieldValue<decltype(p201od),P201odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p201od),P201odVal::openDrain> openDrain{};
        }
        ///Port 2 pin 2 open drain mode control, see P2.00OD
        enum class P202odVal {
            normal=0x00000000,     ///<Normal. P2.2 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P2.2 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,P202odVal> p202od{}; 
        namespace P202odValC{
            constexpr Register::FieldValue<decltype(p202od),P202odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p202od),P202odVal::openDrain> openDrain{};
        }
        ///Port 2 pin 3 open drain mode control, see P2.00OD
        enum class P203odVal {
            normal=0x00000000,     ///<Normal. P2.3 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P2.3 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,P203odVal> p203od{}; 
        namespace P203odValC{
            constexpr Register::FieldValue<decltype(p203od),P203odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p203od),P203odVal::openDrain> openDrain{};
        }
        ///Port 2 pin 4 open drain mode control, see P2.00OD
        enum class P204odVal {
            normal=0x00000000,     ///<Normal. P2.4 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P2.4 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,P204odVal> p204od{}; 
        namespace P204odValC{
            constexpr Register::FieldValue<decltype(p204od),P204odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p204od),P204odVal::openDrain> openDrain{};
        }
        ///Port 2 pin 5 open drain mode control, see P2.00OD
        enum class P205odVal {
            normal=0x00000000,     ///<Normal. P2.5 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P2.5 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,P205odVal> p205od{}; 
        namespace P205odValC{
            constexpr Register::FieldValue<decltype(p205od),P205odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p205od),P205odVal::openDrain> openDrain{};
        }
        ///Port 2 pin 6 open drain mode control, see P2.00OD
        enum class P206odVal {
            normal=0x00000000,     ///<Normal. P2.6 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P2.6 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,P206odVal> p206od{}; 
        namespace P206odValC{
            constexpr Register::FieldValue<decltype(p206od),P206odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p206od),P206odVal::openDrain> openDrain{};
        }
        ///Port 2 pin 7 open drain mode control, see P2.00OD
        enum class P207odVal {
            normal=0x00000000,     ///<Normal. P2.7 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P2.7 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,P207odVal> p207od{}; 
        namespace P207odValC{
            constexpr Register::FieldValue<decltype(p207od),P207odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p207od),P207odVal::openDrain> openDrain{};
        }
        ///Port 2 pin 8 open drain mode control, see P2.00OD
        enum class P208odVal {
            normal=0x00000000,     ///<Normal. P2.8 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P2.8 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,P208odVal> p208od{}; 
        namespace P208odValC{
            constexpr Register::FieldValue<decltype(p208od),P208odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p208od),P208odVal::openDrain> openDrain{};
        }
        ///Port 2 pin 9 open drain mode control, see P2.00OD
        enum class P209odVal {
            normal=0x00000000,     ///<Normal. P2.9 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P2.9 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,P209odVal> p209od{}; 
        namespace P209odValC{
            constexpr Register::FieldValue<decltype(p209od),P209odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p209od),P209odVal::openDrain> openDrain{};
        }
        ///Port 2 pin 10 open drain mode control, see P2.00OD
        enum class P210odVal {
            normal=0x00000000,     ///<Normal. P2.10 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P2.10 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,P210odVal> p210od{}; 
        namespace P210odValC{
            constexpr Register::FieldValue<decltype(p210od),P210odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p210od),P210odVal::openDrain> openDrain{};
        }
        ///Port 2 pin 11 open drain mode control, see P2.00OD
        enum class P211odVal {
            normal=0x00000000,     ///<Normal. P2.11 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P2.11 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,P211odVal> p211od{}; 
        namespace P211odValC{
            constexpr Register::FieldValue<decltype(p211od),P211odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p211od),P211odVal::openDrain> openDrain{};
        }
        ///Port 2 pin 12 open drain mode control, see P2.00OD
        enum class P212odVal {
            normal=0x00000000,     ///<Normal. P2.12 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P2.12 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,P212odVal> p212od{}; 
        namespace P212odValC{
            constexpr Register::FieldValue<decltype(p212od),P212odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p212od),P212odVal::openDrain> openDrain{};
        }
        ///Port 2 pin 13 open drain mode control, see P2.00OD
        enum class P213odVal {
            normal=0x00000000,     ///<Normal. P2.13 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P2.13 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,P213odVal> p213od{}; 
        namespace P213odValC{
            constexpr Register::FieldValue<decltype(p213od),P213odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p213od),P213odVal::openDrain> openDrain{};
        }
    }
    namespace NonepinmodeOd3{    ///<Open drain mode control register 3
        using Addr = Register::Address<0x4002c074,0xf9ffffff,0,unsigned>;
        ///Port 3 pin 25 open drain mode control.
        enum class P325odVal {
            normal=0x00000000,     ///<Normal. P3.25 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P3.25 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,P325odVal> p325od{}; 
        namespace P325odValC{
            constexpr Register::FieldValue<decltype(p325od),P325odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p325od),P325odVal::openDrain> openDrain{};
        }
        ///Port 3 pin 26 open drain mode control, see P3.25OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p326od{}; 
        namespace P326odValC{
        }
    }
    namespace NonepinmodeOd4{    ///<Open drain mode control register 4
        using Addr = Register::Address<0x4002c078,0xcfffffff,0,unsigned>;
        ///Port 4 pin 28 open drain mode control.
        enum class P428odVal {
            normal=0x00000000,     ///<Normal. P4.28 pin is in the normal (not open drain) mode.
            openDrain=0x00000001,     ///<Open-drain. P4.28 pin is in the open drain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,P428odVal> p428od{}; 
        namespace P428odValC{
            constexpr Register::FieldValue<decltype(p428od),P428odVal::normal> normal{};
            constexpr Register::FieldValue<decltype(p428od),P428odVal::openDrain> openDrain{};
        }
        ///Port 4 pin 29 open drain mode control, see P4.28OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p429od{}; 
        namespace P429odValC{
        }
    }
    namespace Nonei2cpadcfg{    ///<I2C Pin Configuration register
        using Addr = Register::Address<0x4002c07c,0xfffffff0,0,unsigned>;
        ///Drive mode control for the SDA0 pin, P0.27.
        enum class Sdadrv0Val {
            standard=0x00000000,     ///<Standard. The SDA0 pin is in the standard drive mode.
            fastModePlus=0x00000001,     ///<Fast-mode plus. The SDA0 pin is in Fast Mode Plus drive mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Sdadrv0Val> sdadrv0{}; 
        namespace Sdadrv0ValC{
            constexpr Register::FieldValue<decltype(sdadrv0),Sdadrv0Val::standard> standard{};
            constexpr Register::FieldValue<decltype(sdadrv0),Sdadrv0Val::fastModePlus> fastModePlus{};
        }
        ///I 2C filter mode control for the SDA0 pin, P0.27.
        enum class Sdai2c0Val {
            enabled=0x00000000,     ///<Enabled. The SDA0 pin has I2C glitch filtering and slew rate control enabled.
            disabled=0x00000001,     ///<Disabled. The SDA0 pin has I2C glitch filtering and slew rate control disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Sdai2c0Val> sdai2c0{}; 
        namespace Sdai2c0ValC{
            constexpr Register::FieldValue<decltype(sdai2c0),Sdai2c0Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(sdai2c0),Sdai2c0Val::disabled> disabled{};
        }
        ///Drive mode control for the SCL0 pin, P0.28.
        enum class Scldrv0Val {
            standard=0x00000000,     ///<Standard. The SCL0 pin is in the standard drive mode.
            fastModePlus=0x00000001,     ///<Fast-mode plus. The SCL0 pin is in Fast Mode Plus drive mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Scldrv0Val> scldrv0{}; 
        namespace Scldrv0ValC{
            constexpr Register::FieldValue<decltype(scldrv0),Scldrv0Val::standard> standard{};
            constexpr Register::FieldValue<decltype(scldrv0),Scldrv0Val::fastModePlus> fastModePlus{};
        }
        ///I 2C filter mode control for the SCL0 pin, P0.28.
        enum class Scli2c0Val {
            enabled=0x00000000,     ///<Enabled. The SCL0 pin has I2C glitch filtering and slew rate control enabled.
            disabled=0x00000001,     ///<Disabled. The SCL0 pin has I2C glitch filtering and slew rate control disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Scli2c0Val> scli2c0{}; 
        namespace Scli2c0ValC{
            constexpr Register::FieldValue<decltype(scli2c0),Scli2c0Val::enabled> enabled{};
            constexpr Register::FieldValue<decltype(scli2c0),Scli2c0Val::disabled> disabled{};
        }
    }
}
