#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Nested Vectored Interrupt Controller
    namespace Nonenviciser0{    ///<Interrupt Set Enable Register n
        using Addr = Register::Address<0xe000e100,0x00000000,0,unsigned>;
        ///Interrupt set enable bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setena{}; 
    }
    namespace Nonenviciser1{    ///<Interrupt Set Enable Register n
        using Addr = Register::Address<0xe000e104,0x00000000,0,unsigned>;
        ///Interrupt set enable bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setena{}; 
    }
    namespace Nonenviciser2{    ///<Interrupt Set Enable Register n
        using Addr = Register::Address<0xe000e108,0x00000000,0,unsigned>;
        ///Interrupt set enable bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setena{}; 
    }
    namespace Nonenviciser3{    ///<Interrupt Set Enable Register n
        using Addr = Register::Address<0xe000e10c,0x00000000,0,unsigned>;
        ///Interrupt set enable bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setena{}; 
    }
    namespace Nonenvicicer0{    ///<Interrupt Clear Enable Register n
        using Addr = Register::Address<0xe000e180,0x00000000,0,unsigned>;
        ///Interrupt clear-enable bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrena{}; 
    }
    namespace Nonenvicicer1{    ///<Interrupt Clear Enable Register n
        using Addr = Register::Address<0xe000e184,0x00000000,0,unsigned>;
        ///Interrupt clear-enable bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrena{}; 
    }
    namespace Nonenvicicer2{    ///<Interrupt Clear Enable Register n
        using Addr = Register::Address<0xe000e188,0x00000000,0,unsigned>;
        ///Interrupt clear-enable bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrena{}; 
    }
    namespace Nonenvicicer3{    ///<Interrupt Clear Enable Register n
        using Addr = Register::Address<0xe000e18c,0x00000000,0,unsigned>;
        ///Interrupt clear-enable bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrena{}; 
    }
    namespace Nonenvicispr0{    ///<Interrupt Set Pending Register n
        using Addr = Register::Address<0xe000e200,0x00000000,0,unsigned>;
        ///Interrupt set-pending bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setpend{}; 
    }
    namespace Nonenvicispr1{    ///<Interrupt Set Pending Register n
        using Addr = Register::Address<0xe000e204,0x00000000,0,unsigned>;
        ///Interrupt set-pending bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setpend{}; 
    }
    namespace Nonenvicispr2{    ///<Interrupt Set Pending Register n
        using Addr = Register::Address<0xe000e208,0x00000000,0,unsigned>;
        ///Interrupt set-pending bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setpend{}; 
    }
    namespace Nonenvicispr3{    ///<Interrupt Set Pending Register n
        using Addr = Register::Address<0xe000e20c,0x00000000,0,unsigned>;
        ///Interrupt set-pending bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setpend{}; 
    }
    namespace Nonenvicicpr0{    ///<Interrupt Clear Pending Register n
        using Addr = Register::Address<0xe000e280,0x00000000,0,unsigned>;
        ///Interrupt clear-pending bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrpend{}; 
    }
    namespace Nonenvicicpr1{    ///<Interrupt Clear Pending Register n
        using Addr = Register::Address<0xe000e284,0x00000000,0,unsigned>;
        ///Interrupt clear-pending bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrpend{}; 
    }
    namespace Nonenvicicpr2{    ///<Interrupt Clear Pending Register n
        using Addr = Register::Address<0xe000e288,0x00000000,0,unsigned>;
        ///Interrupt clear-pending bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrpend{}; 
    }
    namespace Nonenvicicpr3{    ///<Interrupt Clear Pending Register n
        using Addr = Register::Address<0xe000e28c,0x00000000,0,unsigned>;
        ///Interrupt clear-pending bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrpend{}; 
    }
    namespace Nonenviciabr0{    ///<Interrupt Active bit Register n
        using Addr = Register::Address<0xe000e300,0x00000000,0,unsigned>;
        ///Interrupt active flags
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> active{}; 
    }
    namespace Nonenviciabr1{    ///<Interrupt Active bit Register n
        using Addr = Register::Address<0xe000e304,0x00000000,0,unsigned>;
        ///Interrupt active flags
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> active{}; 
    }
    namespace Nonenviciabr2{    ///<Interrupt Active bit Register n
        using Addr = Register::Address<0xe000e308,0x00000000,0,unsigned>;
        ///Interrupt active flags
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> active{}; 
    }
    namespace Nonenviciabr3{    ///<Interrupt Active bit Register n
        using Addr = Register::Address<0xe000e30c,0x00000000,0,unsigned>;
        ///Interrupt active flags
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> active{}; 
    }
    namespace Nonenvicip0{    ///<Interrupt Priority Register 0
        using Addr = Register::Address<0xe000e400,0xffffff00,0,unsigned char>;
        ///Priority of the INT_DMA0interrupt 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri0{}; 
    }
    namespace Nonenvicip1{    ///<Interrupt Priority Register 1
        using Addr = Register::Address<0xe000e401,0xffffff00,0,unsigned char>;
        ///Priority of the INT_DMA1interrupt 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri1{}; 
    }
    namespace Nonenvicip2{    ///<Interrupt Priority Register 2
        using Addr = Register::Address<0xe000e402,0xffffff00,0,unsigned char>;
        ///Priority of the INT_DMA2interrupt 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri2{}; 
    }
    namespace Nonenvicip3{    ///<Interrupt Priority Register 3
        using Addr = Register::Address<0xe000e403,0xffffff00,0,unsigned char>;
        ///Priority of the INT_DMA3interrupt 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri3{}; 
    }
    namespace Nonenvicip4{    ///<Interrupt Priority Register 4
        using Addr = Register::Address<0xe000e404,0xffffff00,0,unsigned char>;
        ///Priority of the INT_DMA4interrupt 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri4{}; 
    }
    namespace Nonenvicip5{    ///<Interrupt Priority Register 5
        using Addr = Register::Address<0xe000e405,0xffffff00,0,unsigned char>;
        ///Priority of the INT_DMA5interrupt 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri5{}; 
    }
    namespace Nonenvicip6{    ///<Interrupt Priority Register 6
        using Addr = Register::Address<0xe000e406,0xffffff00,0,unsigned char>;
        ///Priority of the INT_DMA6interrupt 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri6{}; 
    }
    namespace Nonenvicip7{    ///<Interrupt Priority Register 7
        using Addr = Register::Address<0xe000e407,0xffffff00,0,unsigned char>;
        ///Priority of the INT_DMA7interrupt 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri7{}; 
    }
    namespace Nonenvicip8{    ///<Interrupt Priority Register 8
        using Addr = Register::Address<0xe000e408,0xffffff00,0,unsigned char>;
        ///Priority of the INT_DMA8interrupt 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri8{}; 
    }
    namespace Nonenvicip9{    ///<Interrupt Priority Register 9
        using Addr = Register::Address<0xe000e409,0xffffff00,0,unsigned char>;
        ///Priority of the INT_DMA9interrupt 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri9{}; 
    }
    namespace Nonenvicip10{    ///<Interrupt Priority Register 10
        using Addr = Register::Address<0xe000e40a,0xffffff00,0,unsigned char>;
        ///Priority of the INT_DMA10interrupt 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri10{}; 
    }
    namespace Nonenvicip11{    ///<Interrupt Priority Register 11
        using Addr = Register::Address<0xe000e40b,0xffffff00,0,unsigned char>;
        ///Priority of the INT_DMA11interrupt 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri11{}; 
    }
    namespace Nonenvicip12{    ///<Interrupt Priority Register 12
        using Addr = Register::Address<0xe000e40c,0xffffff00,0,unsigned char>;
        ///Priority of the INT_DMA12interrupt 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri12{}; 
    }
    namespace Nonenvicip13{    ///<Interrupt Priority Register 13
        using Addr = Register::Address<0xe000e40d,0xffffff00,0,unsigned char>;
        ///Priority of the INT_DMA13interrupt 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri13{}; 
    }
    namespace Nonenvicip14{    ///<Interrupt Priority Register 14
        using Addr = Register::Address<0xe000e40e,0xffffff00,0,unsigned char>;
        ///Priority of the INT_DMA14interrupt 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri14{}; 
    }
    namespace Nonenvicip15{    ///<Interrupt Priority Register 15
        using Addr = Register::Address<0xe000e40f,0xffffff00,0,unsigned char>;
        ///Priority of the INT_DMA15interrupt 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri15{}; 
    }
    namespace Nonenvicip16{    ///<Interrupt Priority Register 16
        using Addr = Register::Address<0xe000e410,0xffffff00,0,unsigned char>;
        ///Priority of the INT_DMA_Errorinterrupt 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri16{}; 
    }
    namespace Nonenvicip17{    ///<Interrupt Priority Register 17
        using Addr = Register::Address<0xe000e411,0xffffff00,0,unsigned char>;
        ///Priority of the INT_MCMinterrupt 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri17{}; 
    }
    namespace Nonenvicip18{    ///<Interrupt Priority Register 18
        using Addr = Register::Address<0xe000e412,0xffffff00,0,unsigned char>;
        ///Priority of the INT_FTFLinterrupt 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri18{}; 
    }
    namespace Nonenvicip19{    ///<Interrupt Priority Register 19
        using Addr = Register::Address<0xe000e413,0xffffff00,0,unsigned char>;
        ///Priority of the INT_Read_Collisioninterrupt 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri19{}; 
    }
    namespace Nonenvicip20{    ///<Interrupt Priority Register 20
        using Addr = Register::Address<0xe000e414,0xffffff00,0,unsigned char>;
        ///Priority of the INT_LVD_LVWinterrupt 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri20{}; 
    }
    namespace Nonenvicip21{    ///<Interrupt Priority Register 21
        using Addr = Register::Address<0xe000e415,0xffffff00,0,unsigned char>;
        ///Priority of the INT_LLWinterrupt 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri21{}; 
    }
    namespace Nonenvicip22{    ///<Interrupt Priority Register 22
        using Addr = Register::Address<0xe000e416,0xffffff00,0,unsigned char>;
        ///Priority of the INT_WDOG_EWMinterrupt 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri22{}; 
    }
    namespace Nonenvicip23{    ///<Interrupt Priority Register 23
        using Addr = Register::Address<0xe000e417,0xffffff00,0,unsigned char>;
        ///Priority of the INT_RNGinterrupt 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri23{}; 
    }
    namespace Nonenvicip24{    ///<Interrupt Priority Register 24
        using Addr = Register::Address<0xe000e418,0xffffff00,0,unsigned char>;
        ///Priority of the INT_I2C0interrupt 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri24{}; 
    }
    namespace Nonenvicip25{    ///<Interrupt Priority Register 25
        using Addr = Register::Address<0xe000e419,0xffffff00,0,unsigned char>;
        ///Priority of the INT_I2C1interrupt 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri25{}; 
    }
    namespace Nonenvicip26{    ///<Interrupt Priority Register 26
        using Addr = Register::Address<0xe000e41a,0xffffff00,0,unsigned char>;
        ///Priority of the INT_SPI0interrupt 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri26{}; 
    }
    namespace Nonenvicip27{    ///<Interrupt Priority Register 27
        using Addr = Register::Address<0xe000e41b,0xffffff00,0,unsigned char>;
        ///Priority of the INT_SPI1interrupt 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri27{}; 
    }
    namespace Nonenvicip28{    ///<Interrupt Priority Register 28
        using Addr = Register::Address<0xe000e41c,0xffffff00,0,unsigned char>;
        ///Priority of the INT_SPI2interrupt 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri28{}; 
    }
    namespace Nonenvicip29{    ///<Interrupt Priority Register 29
        using Addr = Register::Address<0xe000e41d,0xffffff00,0,unsigned char>;
        ///Priority of the INT_CAN0_ORed_Message_bufferinterrupt 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri29{}; 
    }
    namespace Nonenvicip30{    ///<Interrupt Priority Register 30
        using Addr = Register::Address<0xe000e41e,0xffffff00,0,unsigned char>;
        ///Priority of the INT_CAN0_Bus_Offinterrupt 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri30{}; 
    }
    namespace Nonenvicip31{    ///<Interrupt Priority Register 31
        using Addr = Register::Address<0xe000e41f,0xffffff00,0,unsigned char>;
        ///Priority of the INT_CAN0_Errorinterrupt 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri31{}; 
    }
    namespace Nonenvicip32{    ///<Interrupt Priority Register 32
        using Addr = Register::Address<0xe000e420,0xffffff00,0,unsigned char>;
        ///Priority of the INT_CAN0_Tx_Warninginterrupt 32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri32{}; 
    }
    namespace Nonenvicip33{    ///<Interrupt Priority Register 33
        using Addr = Register::Address<0xe000e421,0xffffff00,0,unsigned char>;
        ///Priority of the INT_CAN0_Rx_Warninginterrupt 33
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri33{}; 
    }
    namespace Nonenvicip34{    ///<Interrupt Priority Register 34
        using Addr = Register::Address<0xe000e422,0xffffff00,0,unsigned char>;
        ///Priority of the INT_CAN0_Wake_Upinterrupt 34
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri34{}; 
    }
    namespace Nonenvicip35{    ///<Interrupt Priority Register 35
        using Addr = Register::Address<0xe000e423,0xffffff00,0,unsigned char>;
        ///Priority of the INT_I2S0_Txinterrupt 35
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri35{}; 
    }
    namespace Nonenvicip36{    ///<Interrupt Priority Register 36
        using Addr = Register::Address<0xe000e424,0xffffff00,0,unsigned char>;
        ///Priority of the INT_I2S0_Rxinterrupt 36
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri36{}; 
    }
    namespace Nonenvicip37{    ///<Interrupt Priority Register 37
        using Addr = Register::Address<0xe000e425,0xffffff00,0,unsigned char>;
        ///Priority of the INT_CAN1_ORed_Message_bufferinterrupt 37
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri37{}; 
    }
    namespace Nonenvicip38{    ///<Interrupt Priority Register 38
        using Addr = Register::Address<0xe000e426,0xffffff00,0,unsigned char>;
        ///Priority of the INT_CAN1_Bus_Offinterrupt 38
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri38{}; 
    }
    namespace Nonenvicip39{    ///<Interrupt Priority Register 39
        using Addr = Register::Address<0xe000e427,0xffffff00,0,unsigned char>;
        ///Priority of the INT_CAN1_Errorinterrupt 39
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri39{}; 
    }
    namespace Nonenvicip40{    ///<Interrupt Priority Register 40
        using Addr = Register::Address<0xe000e428,0xffffff00,0,unsigned char>;
        ///Priority of the INT_CAN1_Tx_Warninginterrupt 40
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri40{}; 
    }
    namespace Nonenvicip41{    ///<Interrupt Priority Register 41
        using Addr = Register::Address<0xe000e429,0xffffff00,0,unsigned char>;
        ///Priority of the INT_CAN1_Rx_Warninginterrupt 41
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri41{}; 
    }
    namespace Nonenvicip42{    ///<Interrupt Priority Register 42
        using Addr = Register::Address<0xe000e42a,0xffffff00,0,unsigned char>;
        ///Priority of the INT_CAN1_Wake_Upinterrupt 42
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri42{}; 
    }
    namespace Nonenvicip43{    ///<Interrupt Priority Register 43
        using Addr = Register::Address<0xe000e42b,0xffffff00,0,unsigned char>;
        ///Priority of interrupt 43
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri43{}; 
    }
    namespace Nonenvicip44{    ///<Interrupt Priority Register 44
        using Addr = Register::Address<0xe000e42c,0xffffff00,0,unsigned char>;
        ///Priority of the INT_UART0_LONinterrupt 44
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri44{}; 
    }
    namespace Nonenvicip45{    ///<Interrupt Priority Register 45
        using Addr = Register::Address<0xe000e42d,0xffffff00,0,unsigned char>;
        ///Priority of the INT_UART0_RX_TXinterrupt 45
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri45{}; 
    }
    namespace Nonenvicip46{    ///<Interrupt Priority Register 46
        using Addr = Register::Address<0xe000e42e,0xffffff00,0,unsigned char>;
        ///Priority of the INT_UART0_ERRinterrupt 46
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri46{}; 
    }
    namespace Nonenvicip47{    ///<Interrupt Priority Register 47
        using Addr = Register::Address<0xe000e42f,0xffffff00,0,unsigned char>;
        ///Priority of the INT_UART1_RX_TXinterrupt 47
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri47{}; 
    }
    namespace Nonenvicip48{    ///<Interrupt Priority Register 48
        using Addr = Register::Address<0xe000e430,0xffffff00,0,unsigned char>;
        ///Priority of the INT_UART1_ERRinterrupt 48
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri48{}; 
    }
    namespace Nonenvicip49{    ///<Interrupt Priority Register 49
        using Addr = Register::Address<0xe000e431,0xffffff00,0,unsigned char>;
        ///Priority of the INT_UART2_RX_TXinterrupt 49
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri49{}; 
    }
    namespace Nonenvicip50{    ///<Interrupt Priority Register 50
        using Addr = Register::Address<0xe000e432,0xffffff00,0,unsigned char>;
        ///Priority of the INT_UART2_ERRinterrupt 50
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri50{}; 
    }
    namespace Nonenvicip51{    ///<Interrupt Priority Register 51
        using Addr = Register::Address<0xe000e433,0xffffff00,0,unsigned char>;
        ///Priority of the INT_UART3_RX_TXinterrupt 51
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri51{}; 
    }
    namespace Nonenvicip52{    ///<Interrupt Priority Register 52
        using Addr = Register::Address<0xe000e434,0xffffff00,0,unsigned char>;
        ///Priority of the INT_UART3_ERRinterrupt 52
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri52{}; 
    }
    namespace Nonenvicip53{    ///<Interrupt Priority Register 53
        using Addr = Register::Address<0xe000e435,0xffffff00,0,unsigned char>;
        ///Priority of the INT_UART4_RX_TXinterrupt 53
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri53{}; 
    }
    namespace Nonenvicip54{    ///<Interrupt Priority Register 54
        using Addr = Register::Address<0xe000e436,0xffffff00,0,unsigned char>;
        ///Priority of the INT_UART4_ERRinterrupt 54
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri54{}; 
    }
    namespace Nonenvicip55{    ///<Interrupt Priority Register 55
        using Addr = Register::Address<0xe000e437,0xffffff00,0,unsigned char>;
        ///Priority of the INT_UART5_RX_TXinterrupt 55
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri55{}; 
    }
    namespace Nonenvicip56{    ///<Interrupt Priority Register 56
        using Addr = Register::Address<0xe000e438,0xffffff00,0,unsigned char>;
        ///Priority of the INT_UART5_ERRinterrupt 56
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri56{}; 
    }
    namespace Nonenvicip57{    ///<Interrupt Priority Register 57
        using Addr = Register::Address<0xe000e439,0xffffff00,0,unsigned char>;
        ///Priority of the INT_ADC0interrupt 57
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri57{}; 
    }
    namespace Nonenvicip58{    ///<Interrupt Priority Register 58
        using Addr = Register::Address<0xe000e43a,0xffffff00,0,unsigned char>;
        ///Priority of the INT_ADC1interrupt 58
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri58{}; 
    }
    namespace Nonenvicip59{    ///<Interrupt Priority Register 59
        using Addr = Register::Address<0xe000e43b,0xffffff00,0,unsigned char>;
        ///Priority of the INT_CMP0interrupt 59
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri59{}; 
    }
    namespace Nonenvicip60{    ///<Interrupt Priority Register 60
        using Addr = Register::Address<0xe000e43c,0xffffff00,0,unsigned char>;
        ///Priority of the INT_CMP1interrupt 60
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri60{}; 
    }
    namespace Nonenvicip61{    ///<Interrupt Priority Register 61
        using Addr = Register::Address<0xe000e43d,0xffffff00,0,unsigned char>;
        ///Priority of the INT_CMP2interrupt 61
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri61{}; 
    }
    namespace Nonenvicip62{    ///<Interrupt Priority Register 62
        using Addr = Register::Address<0xe000e43e,0xffffff00,0,unsigned char>;
        ///Priority of the INT_FTM0interrupt 62
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri62{}; 
    }
    namespace Nonenvicip63{    ///<Interrupt Priority Register 63
        using Addr = Register::Address<0xe000e43f,0xffffff00,0,unsigned char>;
        ///Priority of the INT_FTM1interrupt 63
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri63{}; 
    }
    namespace Nonenvicip64{    ///<Interrupt Priority Register 64
        using Addr = Register::Address<0xe000e440,0xffffff00,0,unsigned char>;
        ///Priority of the INT_FTM2interrupt 64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri64{}; 
    }
    namespace Nonenvicip65{    ///<Interrupt Priority Register 65
        using Addr = Register::Address<0xe000e441,0xffffff00,0,unsigned char>;
        ///Priority of the INT_CMTinterrupt 65
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri65{}; 
    }
    namespace Nonenvicip66{    ///<Interrupt Priority Register 66
        using Addr = Register::Address<0xe000e442,0xffffff00,0,unsigned char>;
        ///Priority of the INT_RTCinterrupt 66
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri66{}; 
    }
    namespace Nonenvicip67{    ///<Interrupt Priority Register 67
        using Addr = Register::Address<0xe000e443,0xffffff00,0,unsigned char>;
        ///Priority of the INT_RTC_Secondsinterrupt 67
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri67{}; 
    }
    namespace Nonenvicip68{    ///<Interrupt Priority Register 68
        using Addr = Register::Address<0xe000e444,0xffffff00,0,unsigned char>;
        ///Priority of the INT_PIT0interrupt 68
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri68{}; 
    }
    namespace Nonenvicip69{    ///<Interrupt Priority Register 69
        using Addr = Register::Address<0xe000e445,0xffffff00,0,unsigned char>;
        ///Priority of the INT_PIT1interrupt 69
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri69{}; 
    }
    namespace Nonenvicip70{    ///<Interrupt Priority Register 70
        using Addr = Register::Address<0xe000e446,0xffffff00,0,unsigned char>;
        ///Priority of the INT_PIT2interrupt 70
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri70{}; 
    }
    namespace Nonenvicip71{    ///<Interrupt Priority Register 71
        using Addr = Register::Address<0xe000e447,0xffffff00,0,unsigned char>;
        ///Priority of the INT_PIT3interrupt 71
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri71{}; 
    }
    namespace Nonenvicip72{    ///<Interrupt Priority Register 72
        using Addr = Register::Address<0xe000e448,0xffffff00,0,unsigned char>;
        ///Priority of the INT_PDB0interrupt 72
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri72{}; 
    }
    namespace Nonenvicip73{    ///<Interrupt Priority Register 73
        using Addr = Register::Address<0xe000e449,0xffffff00,0,unsigned char>;
        ///Priority of the INT_USB0interrupt 73
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri73{}; 
    }
    namespace Nonenvicip74{    ///<Interrupt Priority Register 74
        using Addr = Register::Address<0xe000e44a,0xffffff00,0,unsigned char>;
        ///Priority of the INT_USBDCDinterrupt 74
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri74{}; 
    }
    namespace Nonenvicip75{    ///<Interrupt Priority Register 75
        using Addr = Register::Address<0xe000e44b,0xffffff00,0,unsigned char>;
        ///Priority of the INT_ENET_1588_Timerinterrupt 75
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri75{}; 
    }
    namespace Nonenvicip76{    ///<Interrupt Priority Register 76
        using Addr = Register::Address<0xe000e44c,0xffffff00,0,unsigned char>;
        ///Priority of the INT_ENET_Transmitinterrupt 76
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri76{}; 
    }
    namespace Nonenvicip77{    ///<Interrupt Priority Register 77
        using Addr = Register::Address<0xe000e44d,0xffffff00,0,unsigned char>;
        ///Priority of the INT_ENET_Receiveinterrupt 77
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri77{}; 
    }
    namespace Nonenvicip78{    ///<Interrupt Priority Register 78
        using Addr = Register::Address<0xe000e44e,0xffffff00,0,unsigned char>;
        ///Priority of the INT_ENET_Errorinterrupt 78
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri78{}; 
    }
    namespace Nonenvicip79{    ///<Interrupt Priority Register 79
        using Addr = Register::Address<0xe000e44f,0xffffff00,0,unsigned char>;
        ///Priority of interrupt 79
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri79{}; 
    }
    namespace Nonenvicip80{    ///<Interrupt Priority Register 80
        using Addr = Register::Address<0xe000e450,0xffffff00,0,unsigned char>;
        ///Priority of the INT_SDHCinterrupt 80
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri80{}; 
    }
    namespace Nonenvicip81{    ///<Interrupt Priority Register 81
        using Addr = Register::Address<0xe000e451,0xffffff00,0,unsigned char>;
        ///Priority of the INT_DAC0interrupt 81
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri81{}; 
    }
    namespace Nonenvicip82{    ///<Interrupt Priority Register 82
        using Addr = Register::Address<0xe000e452,0xffffff00,0,unsigned char>;
        ///Priority of the INT_DAC1interrupt 82
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri82{}; 
    }
    namespace Nonenvicip83{    ///<Interrupt Priority Register 83
        using Addr = Register::Address<0xe000e453,0xffffff00,0,unsigned char>;
        ///Priority of the INT_TSI0interrupt 83
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri83{}; 
    }
    namespace Nonenvicip84{    ///<Interrupt Priority Register 84
        using Addr = Register::Address<0xe000e454,0xffffff00,0,unsigned char>;
        ///Priority of the INT_MCGinterrupt 84
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri84{}; 
    }
    namespace Nonenvicip85{    ///<Interrupt Priority Register 85
        using Addr = Register::Address<0xe000e455,0xffffff00,0,unsigned char>;
        ///Priority of the INT_LPTMR0interrupt 85
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri85{}; 
    }
    namespace Nonenvicip86{    ///<Interrupt Priority Register 86
        using Addr = Register::Address<0xe000e456,0xffffff00,0,unsigned char>;
        ///Priority of interrupt 86
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri86{}; 
    }
    namespace Nonenvicip87{    ///<Interrupt Priority Register 87
        using Addr = Register::Address<0xe000e457,0xffffff00,0,unsigned char>;
        ///Priority of the INT_PORTAinterrupt 87
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri87{}; 
    }
    namespace Nonenvicip88{    ///<Interrupt Priority Register 88
        using Addr = Register::Address<0xe000e458,0xffffff00,0,unsigned char>;
        ///Priority of the INT_PORTBinterrupt 88
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri88{}; 
    }
    namespace Nonenvicip89{    ///<Interrupt Priority Register 89
        using Addr = Register::Address<0xe000e459,0xffffff00,0,unsigned char>;
        ///Priority of the INT_PORTCinterrupt 89
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri89{}; 
    }
    namespace Nonenvicip90{    ///<Interrupt Priority Register 90
        using Addr = Register::Address<0xe000e45a,0xffffff00,0,unsigned char>;
        ///Priority of the INT_PORTDinterrupt 90
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri90{}; 
    }
    namespace Nonenvicip91{    ///<Interrupt Priority Register 91
        using Addr = Register::Address<0xe000e45b,0xffffff00,0,unsigned char>;
        ///Priority of the INT_PORTEinterrupt 91
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri91{}; 
    }
    namespace Nonenvicip92{    ///<Interrupt Priority Register 92
        using Addr = Register::Address<0xe000e45c,0xffffff00,0,unsigned char>;
        ///Priority of interrupt 92
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri92{}; 
    }
    namespace Nonenvicip93{    ///<Interrupt Priority Register 93
        using Addr = Register::Address<0xe000e45d,0xffffff00,0,unsigned char>;
        ///Priority of interrupt 93
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri93{}; 
    }
    namespace Nonenvicip94{    ///<Interrupt Priority Register 94
        using Addr = Register::Address<0xe000e45e,0xffffff00,0,unsigned char>;
        ///Priority of the INT_SWIinterrupt 94
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri94{}; 
    }
    namespace Nonenvicip95{    ///<Interrupt Priority Register 95
        using Addr = Register::Address<0xe000e45f,0xffffff00,0,unsigned char>;
        ///Priority of interrupt 95
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri95{}; 
    }
    namespace Nonenvicip96{    ///<Interrupt Priority Register 96
        using Addr = Register::Address<0xe000e460,0xffffff00,0,unsigned char>;
        ///Priority of interrupt 96
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri96{}; 
    }
    namespace Nonenvicip97{    ///<Interrupt Priority Register 97
        using Addr = Register::Address<0xe000e461,0xffffff00,0,unsigned char>;
        ///Priority of interrupt 97
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri97{}; 
    }
    namespace Nonenvicip98{    ///<Interrupt Priority Register 98
        using Addr = Register::Address<0xe000e462,0xffffff00,0,unsigned char>;
        ///Priority of interrupt 98
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri98{}; 
    }
    namespace Nonenvicip99{    ///<Interrupt Priority Register 99
        using Addr = Register::Address<0xe000e463,0xffffff00,0,unsigned char>;
        ///Priority of interrupt 99
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri99{}; 
    }
    namespace Nonenvicip100{    ///<Interrupt Priority Register 100
        using Addr = Register::Address<0xe000e464,0xffffff00,0,unsigned char>;
        ///Priority of interrupt 100
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri100{}; 
    }
    namespace Nonenvicip101{    ///<Interrupt Priority Register 101
        using Addr = Register::Address<0xe000e465,0xffffff00,0,unsigned char>;
        ///Priority of interrupt 101
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri101{}; 
    }
    namespace Nonenvicip102{    ///<Interrupt Priority Register 102
        using Addr = Register::Address<0xe000e466,0xffffff00,0,unsigned char>;
        ///Priority of interrupt 102
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri102{}; 
    }
    namespace Nonenvicip103{    ///<Interrupt Priority Register 103
        using Addr = Register::Address<0xe000e467,0xffffff00,0,unsigned char>;
        ///Priority of interrupt 103
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri103{}; 
    }
    namespace Nonenvicip104{    ///<Interrupt Priority Register 104
        using Addr = Register::Address<0xe000e468,0xffffff00,0,unsigned char>;
        ///Priority of interrupt 104
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri104{}; 
    }
    namespace Nonenvicip105{    ///<Interrupt Priority Register 105
        using Addr = Register::Address<0xe000e469,0xffffff00,0,unsigned char>;
        ///Priority of interrupt 105
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pri105{}; 
    }
    namespace Nonenvicstir{    ///<Software Trigger Interrupt Register
        using Addr = Register::Address<0xe000ef00,0xfffffe00,0,unsigned>;
        ///Interrupt ID of the interrupt to trigger, in the range 0-239. For example, a value of 0x03 specifies interrupt IRQ3.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> intid{}; 
    }
}
