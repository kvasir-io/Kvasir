#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial Peripheral Interface 1
    namespace Spi1Cr{    ///<Control Register
        using Addr = Register::Address<0xfffcc000,0xfeffff7c,0,unsigned>;
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
        using Addr = Register::Address<0xfffcc004,0x00f0ff48,0,unsigned>;
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
        using Addr = Register::Address<0xfffcc008,0xfff00000,0,unsigned>;
        ///Receive Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rd{}; 
        ///Peripheral Chip Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pcs{}; 
    }
    namespace Spi1Tdr{    ///<Transmit Data Register
        using Addr = Register::Address<0xfffcc00c,0xfef00000,0,unsigned>;
        ///Transmit Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> td{}; 
        ///Peripheral Chip Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pcs{}; 
        ///Last Transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> lastxfer{}; 
    }
    namespace Spi1Sr{    ///<Status Register
        using Addr = Register::Address<0xfffcc010,0xfffefcf0,0,unsigned>;
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
        ///SPI Enable Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> spiens{}; 
    }
    namespace Spi1Ier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xfffcc014,0xfffffcf0,0,unsigned>;
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
    }
    namespace Spi1Idr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xfffcc018,0xfffffcf0,0,unsigned>;
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
    }
    namespace Spi1Imr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xfffcc01c,0xfffffcf0,0,unsigned>;
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
    }
    namespace Spi1Csr0{    ///<Chip Select Register
        using Addr = Register::Address<0xfffcc030,0x00000004,0,unsigned>;
        ///Clock Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Clock Phase
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ncpha{}; 
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
        using Addr = Register::Address<0xfffcc034,0x00000004,0,unsigned>;
        ///Clock Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Clock Phase
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ncpha{}; 
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
        using Addr = Register::Address<0xfffcc038,0x00000004,0,unsigned>;
        ///Clock Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Clock Phase
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ncpha{}; 
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
        using Addr = Register::Address<0xfffcc03c,0x00000004,0,unsigned>;
        ///Clock Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Clock Phase
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ncpha{}; 
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
        using Addr = Register::Address<0xfffcc0e4,0x000000fe,0,unsigned>;
        ///Write Protection Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protection Key Password
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace Spi1Wpsr{    ///<Write Protection Status Register
        using Addr = Register::Address<0xfffcc0e8,0xffff00fe,0,unsigned>;
        ///Write Protection Violation Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        ///Write Protection Violation Source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
    }
    namespace Spi1Rpr{    ///<Receive Pointer Register
        using Addr = Register::Address<0xfffcc100,0x00000000,0,unsigned>;
        ///Receive Pointer Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxptr{}; 
    }
    namespace Spi1Rcr{    ///<Receive Counter Register
        using Addr = Register::Address<0xfffcc104,0xffff0000,0,unsigned>;
        ///Receive Counter Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxctr{}; 
    }
    namespace Spi1Tpr{    ///<Transmit Pointer Register
        using Addr = Register::Address<0xfffcc108,0x00000000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txptr{}; 
    }
    namespace Spi1Tcr{    ///<Transmit Counter Register
        using Addr = Register::Address<0xfffcc10c,0xffff0000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txctr{}; 
    }
    namespace Spi1Rnpr{    ///<Receive Next Pointer Register
        using Addr = Register::Address<0xfffcc110,0x00000000,0,unsigned>;
        ///Receive Next Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxnptr{}; 
    }
    namespace Spi1Rncr{    ///<Receive Next Counter Register
        using Addr = Register::Address<0xfffcc114,0xffff0000,0,unsigned>;
        ///Receive Next Counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxnctr{}; 
    }
    namespace Spi1Tnpr{    ///<Transmit Next Pointer Register
        using Addr = Register::Address<0xfffcc118,0x00000000,0,unsigned>;
        ///Transmit Next Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txnptr{}; 
    }
    namespace Spi1Tncr{    ///<Transmit Next Counter Register
        using Addr = Register::Address<0xfffcc11c,0xffff0000,0,unsigned>;
        ///Transmit Counter Next
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txnctr{}; 
    }
    namespace Spi1Ptcr{    ///<Transfer Control Register
        using Addr = Register::Address<0xfffcc120,0xfffffcfc,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Receiver Transfer Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxtdis{}; 
        ///Transmitter Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
        ///Transmitter Transfer Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txtdis{}; 
    }
    namespace Spi1Ptsr{    ///<Transfer Status Register
        using Addr = Register::Address<0xfffcc124,0xfffffefe,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Transmitter Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
    }
}
