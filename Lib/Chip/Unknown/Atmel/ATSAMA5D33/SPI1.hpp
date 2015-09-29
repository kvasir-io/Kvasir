#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial Peripheral Interface 1
    namespace Spi1Cr{    ///<Control Register
        using Addr = Register::Address<0xf8008000,0xfeffff7c,0,unsigned>;
        ///SPI Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> spien{}; 
        ///SPI Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> spidis{}; 
        ///SPI Software Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Last Transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> lastxfer{}; 
    }
    namespace Spi1Mr{    ///<Mode Register
        using Addr = Register::Address<0xf8008004,0x00f0ff48,0,unsigned>;
        ///Master/Slave Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mstr{}; 
        ///Peripheral Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ps{}; 
        ///Chip Select Decode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pcsdec{}; 
        ///Mode Fault Detection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> modfdis{}; 
        ///Wait Data Read Before Transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wdrbt{}; 
        ///Local Loopback Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> llb{}; 
        ///Peripheral Chip Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pcs{}; 
        ///Delay Between Chip Selects
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dlybcs{}; 
    }
    namespace Spi1Rdr{    ///<Receive Data Register
        using Addr = Register::Address<0xf8008008,0xfff00000,0,unsigned>;
        ///Receive Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rd{}; 
        ///Peripheral Chip Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pcs{}; 
    }
    namespace Spi1Tdr{    ///<Transmit Data Register
        using Addr = Register::Address<0xf800800c,0xfef00000,0,unsigned>;
        ///Transmit Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> td{}; 
        ///Peripheral Chip Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pcs{}; 
        ///Last Transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> lastxfer{}; 
    }
    namespace Spi1Sr{    ///<Status Register
        using Addr = Register::Address<0xf8008010,0xfffef8f0,0,unsigned>;
        ///Receive Data Register Full
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdrf{}; 
        ///Transmit Data Register Empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tdre{}; 
        ///Mode Fault Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> modf{}; 
        ///Overrun Error Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovres{}; 
        ///NSS Rising
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nssr{}; 
        ///Transmission Registers Empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Underrun Error Status (Slave Mode Only)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> undes{}; 
        ///SPI Enable Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> spiens{}; 
    }
    namespace Spi1Ier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xf8008014,0xfffff8f0,0,unsigned>;
        ///Receive Data Register Full Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdrf{}; 
        ///SPI Transmit Data Register Empty Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tdre{}; 
        ///Mode Fault Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> modf{}; 
        ///Overrun Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovres{}; 
        ///NSS Rising Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nssr{}; 
        ///Transmission Registers Empty Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Underrun Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> undes{}; 
    }
    namespace Spi1Idr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xf8008018,0xfffff8f0,0,unsigned>;
        ///Receive Data Register Full Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdrf{}; 
        ///SPI Transmit Data Register Empty Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tdre{}; 
        ///Mode Fault Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> modf{}; 
        ///Overrun Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovres{}; 
        ///NSS Rising Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nssr{}; 
        ///Transmission Registers Empty Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Underrun Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> undes{}; 
    }
    namespace Spi1Imr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xf800801c,0xfffff8f0,0,unsigned>;
        ///Receive Data Register Full Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdrf{}; 
        ///SPI Transmit Data Register Empty Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tdre{}; 
        ///Mode Fault Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> modf{}; 
        ///Overrun Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovres{}; 
        ///NSS Rising Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nssr{}; 
        ///Transmission Registers Empty Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Underrun Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> undes{}; 
    }
    namespace Spi1Csr0{    ///<Chip Select Register
        using Addr = Register::Address<0xf8008030,0x00000000,0,unsigned>;
        ///Clock Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Clock Phase
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ncpha{}; 
        ///Chip Select Not Active After Transfer (Ignored if CSAAT = 1)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> csnaat{}; 
        ///Chip Select Active After Transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> csaat{}; 
        ///Bits Per Transfer
        enum class bitsVal {
            v8Bit=0x00000000,     ///<8 bits for transfer
            v9Bit=0x00000001,     ///<9 bits for transfer
            v10Bit=0x00000002,     ///<10 bits for transfer
            v11Bit=0x00000003,     ///<11 bits for transfer
            v12Bit=0x00000004,     ///<12 bits for transfer
            v13Bit=0x00000005,     ///<13 bits for transfer
            v14Bit=0x00000006,     ///<14 bits for transfer
            v15Bit=0x00000007,     ///<15 bits for transfer
            v16Bit=0x00000008,     ///<16 bits for transfer
        };
        namespace bitsValC{
            constexpr MPL::Value<bitsVal,bitsVal::v8Bit> v8Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v9Bit> v9Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v10Bit> v10Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v11Bit> v11Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v12Bit> v12Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v13Bit> v13Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v14Bit> v14Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v15Bit> v15Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v16Bit> v16Bit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,bitsVal> bits{}; 
        ///Serial Clock Baud Rate
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> scbr{}; 
        ///Delay Before SPCK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dlybs{}; 
        ///Delay Between Consecutive Transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dlybct{}; 
    }
    namespace Spi1Csr1{    ///<Chip Select Register
        using Addr = Register::Address<0xf8008034,0x00000000,0,unsigned>;
        ///Clock Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Clock Phase
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ncpha{}; 
        ///Chip Select Not Active After Transfer (Ignored if CSAAT = 1)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> csnaat{}; 
        ///Chip Select Active After Transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> csaat{}; 
        ///Bits Per Transfer
        enum class bitsVal {
            v8Bit=0x00000000,     ///<8 bits for transfer
            v9Bit=0x00000001,     ///<9 bits for transfer
            v10Bit=0x00000002,     ///<10 bits for transfer
            v11Bit=0x00000003,     ///<11 bits for transfer
            v12Bit=0x00000004,     ///<12 bits for transfer
            v13Bit=0x00000005,     ///<13 bits for transfer
            v14Bit=0x00000006,     ///<14 bits for transfer
            v15Bit=0x00000007,     ///<15 bits for transfer
            v16Bit=0x00000008,     ///<16 bits for transfer
        };
        namespace bitsValC{
            constexpr MPL::Value<bitsVal,bitsVal::v8Bit> v8Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v9Bit> v9Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v10Bit> v10Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v11Bit> v11Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v12Bit> v12Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v13Bit> v13Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v14Bit> v14Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v15Bit> v15Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v16Bit> v16Bit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,bitsVal> bits{}; 
        ///Serial Clock Baud Rate
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> scbr{}; 
        ///Delay Before SPCK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dlybs{}; 
        ///Delay Between Consecutive Transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dlybct{}; 
    }
    namespace Spi1Csr2{    ///<Chip Select Register
        using Addr = Register::Address<0xf8008038,0x00000000,0,unsigned>;
        ///Clock Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Clock Phase
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ncpha{}; 
        ///Chip Select Not Active After Transfer (Ignored if CSAAT = 1)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> csnaat{}; 
        ///Chip Select Active After Transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> csaat{}; 
        ///Bits Per Transfer
        enum class bitsVal {
            v8Bit=0x00000000,     ///<8 bits for transfer
            v9Bit=0x00000001,     ///<9 bits for transfer
            v10Bit=0x00000002,     ///<10 bits for transfer
            v11Bit=0x00000003,     ///<11 bits for transfer
            v12Bit=0x00000004,     ///<12 bits for transfer
            v13Bit=0x00000005,     ///<13 bits for transfer
            v14Bit=0x00000006,     ///<14 bits for transfer
            v15Bit=0x00000007,     ///<15 bits for transfer
            v16Bit=0x00000008,     ///<16 bits for transfer
        };
        namespace bitsValC{
            constexpr MPL::Value<bitsVal,bitsVal::v8Bit> v8Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v9Bit> v9Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v10Bit> v10Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v11Bit> v11Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v12Bit> v12Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v13Bit> v13Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v14Bit> v14Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v15Bit> v15Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v16Bit> v16Bit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,bitsVal> bits{}; 
        ///Serial Clock Baud Rate
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> scbr{}; 
        ///Delay Before SPCK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dlybs{}; 
        ///Delay Between Consecutive Transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dlybct{}; 
    }
    namespace Spi1Csr3{    ///<Chip Select Register
        using Addr = Register::Address<0xf800803c,0x00000000,0,unsigned>;
        ///Clock Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Clock Phase
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ncpha{}; 
        ///Chip Select Not Active After Transfer (Ignored if CSAAT = 1)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> csnaat{}; 
        ///Chip Select Active After Transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> csaat{}; 
        ///Bits Per Transfer
        enum class bitsVal {
            v8Bit=0x00000000,     ///<8 bits for transfer
            v9Bit=0x00000001,     ///<9 bits for transfer
            v10Bit=0x00000002,     ///<10 bits for transfer
            v11Bit=0x00000003,     ///<11 bits for transfer
            v12Bit=0x00000004,     ///<12 bits for transfer
            v13Bit=0x00000005,     ///<13 bits for transfer
            v14Bit=0x00000006,     ///<14 bits for transfer
            v15Bit=0x00000007,     ///<15 bits for transfer
            v16Bit=0x00000008,     ///<16 bits for transfer
        };
        namespace bitsValC{
            constexpr MPL::Value<bitsVal,bitsVal::v8Bit> v8Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v9Bit> v9Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v10Bit> v10Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v11Bit> v11Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v12Bit> v12Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v13Bit> v13Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v14Bit> v14Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v15Bit> v15Bit{};
            constexpr MPL::Value<bitsVal,bitsVal::v16Bit> v16Bit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,bitsVal> bits{}; 
        ///Serial Clock Baud Rate
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> scbr{}; 
        ///Delay Before SPCK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dlybs{}; 
        ///Delay Between Consecutive Transfers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dlybct{}; 
    }
    namespace Spi1Wpmr{    ///<Write Protection Control Register
        using Addr = Register::Address<0xf80080e4,0x000000fe,0,unsigned>;
        ///Write Protection Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protection Key Password
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace Spi1Wpsr{    ///<Write Protection Status Register
        using Addr = Register::Address<0xf80080e8,0xffff00fe,0,unsigned>;
        ///Write Protection Violation Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        ///Write Protection Violation Source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
    }
}
