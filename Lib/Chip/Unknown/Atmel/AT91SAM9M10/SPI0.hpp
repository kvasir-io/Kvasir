#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial Peripheral Interface 0
    namespace Spi0Cr{    ///<Control Register
        using Addr = Register::Address<0xfffa4000,0xfeffff7c,0,unsigned>;
        ///SPI Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> spien{}; 
        ///SPI Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> spidis{}; 
        ///SPI Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Last Transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> lastxfer{}; 
    }
    namespace Spi0Mr{    ///<Mode Register
        using Addr = Register::Address<0xfffa4004,0x00f0ff48,0,unsigned>;
        ///Master/Slave Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mstr{}; 
        ///Peripheral Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ps{}; 
        ///Chip Select Decode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pcsdec{}; 
        ///Mode Fault Detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> modfdis{}; 
        ///Wait Data Read Before Transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wdrbt{}; 
        ///Local Loopback Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> llb{}; 
        ///Peripheral Chip Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pcs{}; 
        ///Delay Between Chip Selects
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dlybcs{}; 
    }
    namespace Spi0Rdr{    ///<Receive Data Register
        using Addr = Register::Address<0xfffa4008,0xfff00000,0,unsigned>;
        ///Receive Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rd{}; 
        ///Peripheral Chip Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pcs{}; 
    }
    namespace Spi0Tdr{    ///<Transmit Data Register
        using Addr = Register::Address<0xfffa400c,0xfef00000,0,unsigned>;
        ///Transmit Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> td{}; 
        ///Peripheral Chip Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> pcs{}; 
        ///Last Transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> lastxfer{}; 
    }
    namespace Spi0Sr{    ///<Status Register
        using Addr = Register::Address<0xfffa4010,0xfffefc00,0,unsigned>;
        ///Receive Data Register Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdrf{}; 
        ///Transmit Data Register Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tdre{}; 
        ///Mode Fault Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> modf{}; 
        ///Overrun Error Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovres{}; 
        ///End of RX buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///End of TX buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///RX Buffer Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///TX Buffer Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///NSS Rising
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nssr{}; 
        ///Transmission Registers Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///SPI Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> spiens{}; 
    }
    namespace Spi0Ier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xfffa4014,0xfffffc00,0,unsigned>;
        ///Receive Data Register Full Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdrf{}; 
        ///SPI Transmit Data Register Empty Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tdre{}; 
        ///Mode Fault Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> modf{}; 
        ///Overrun Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovres{}; 
        ///End of Receive Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///End of Transmit Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Receive Buffer Full Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///Transmit Buffer Empty Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///NSS Rising Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nssr{}; 
        ///Transmission Registers Empty Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
    }
    namespace Spi0Idr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xfffa4018,0xfffffc00,0,unsigned>;
        ///Receive Data Register Full Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdrf{}; 
        ///SPI Transmit Data Register Empty Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tdre{}; 
        ///Mode Fault Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> modf{}; 
        ///Overrun Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovres{}; 
        ///End of Receive Buffer Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///End of Transmit Buffer Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Receive Buffer Full Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///Transmit Buffer Empty Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///NSS Rising Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nssr{}; 
        ///Transmission Registers Empty Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
    }
    namespace Spi0Imr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xfffa401c,0xfffffc00,0,unsigned>;
        ///Receive Data Register Full Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdrf{}; 
        ///SPI Transmit Data Register Empty Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tdre{}; 
        ///Mode Fault Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> modf{}; 
        ///Overrun Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovres{}; 
        ///End of Receive Buffer Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///End of Transmit Buffer Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Receive Buffer Full Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///Transmit Buffer Empty Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///NSS Rising Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nssr{}; 
        ///Transmission Registers Empty Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
    }
    namespace Spi0Csr0{    ///<Chip Select Register
        using Addr = Register::Address<0xfffa4030,0x00000004,0,unsigned>;
        ///Clock Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Clock Phase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ncpha{}; 
        ///Chip Select Active After Transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> csaat{}; 
        ///Bits Per Transfer
        enum class BitsVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,BitsVal> bits{}; 
        namespace BitsValC{
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v8Bit> v8Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v9Bit> v9Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v10Bit> v10Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v11Bit> v11Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v12Bit> v12Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v13Bit> v13Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v14Bit> v14Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v15Bit> v15Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v16Bit> v16Bit{};
        }
        ///Serial Clock Baud Rate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> scbr{}; 
        ///Delay Before SPCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dlybs{}; 
        ///Delay Between Consecutive Transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dlybct{}; 
    }
    namespace Spi0Csr1{    ///<Chip Select Register
        using Addr = Register::Address<0xfffa4034,0x00000004,0,unsigned>;
        ///Clock Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Clock Phase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ncpha{}; 
        ///Chip Select Active After Transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> csaat{}; 
        ///Bits Per Transfer
        enum class BitsVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,BitsVal> bits{}; 
        namespace BitsValC{
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v8Bit> v8Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v9Bit> v9Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v10Bit> v10Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v11Bit> v11Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v12Bit> v12Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v13Bit> v13Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v14Bit> v14Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v15Bit> v15Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v16Bit> v16Bit{};
        }
        ///Serial Clock Baud Rate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> scbr{}; 
        ///Delay Before SPCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dlybs{}; 
        ///Delay Between Consecutive Transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dlybct{}; 
    }
    namespace Spi0Csr2{    ///<Chip Select Register
        using Addr = Register::Address<0xfffa4038,0x00000004,0,unsigned>;
        ///Clock Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Clock Phase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ncpha{}; 
        ///Chip Select Active After Transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> csaat{}; 
        ///Bits Per Transfer
        enum class BitsVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,BitsVal> bits{}; 
        namespace BitsValC{
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v8Bit> v8Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v9Bit> v9Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v10Bit> v10Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v11Bit> v11Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v12Bit> v12Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v13Bit> v13Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v14Bit> v14Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v15Bit> v15Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v16Bit> v16Bit{};
        }
        ///Serial Clock Baud Rate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> scbr{}; 
        ///Delay Before SPCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dlybs{}; 
        ///Delay Between Consecutive Transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dlybct{}; 
    }
    namespace Spi0Csr3{    ///<Chip Select Register
        using Addr = Register::Address<0xfffa403c,0x00000004,0,unsigned>;
        ///Clock Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Clock Phase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ncpha{}; 
        ///Chip Select Active After Transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> csaat{}; 
        ///Bits Per Transfer
        enum class BitsVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,BitsVal> bits{}; 
        namespace BitsValC{
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v8Bit> v8Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v9Bit> v9Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v10Bit> v10Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v11Bit> v11Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v12Bit> v12Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v13Bit> v13Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v14Bit> v14Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v15Bit> v15Bit{};
            constexpr Register::FieldValue<decltype(bits)::Type,BitsVal::v16Bit> v16Bit{};
        }
        ///Serial Clock Baud Rate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> scbr{}; 
        ///Delay Before SPCK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dlybs{}; 
        ///Delay Between Consecutive Transfers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dlybct{}; 
    }
    namespace Spi0Rpr{    ///<Receive Pointer Register
        using Addr = Register::Address<0xfffa4100,0x00000000,0,unsigned>;
        ///Receive Pointer Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxptr{}; 
    }
    namespace Spi0Rcr{    ///<Receive Counter Register
        using Addr = Register::Address<0xfffa4104,0xffff0000,0,unsigned>;
        ///Receive Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxctr{}; 
    }
    namespace Spi0Tpr{    ///<Transmit Pointer Register
        using Addr = Register::Address<0xfffa4108,0x00000000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txptr{}; 
    }
    namespace Spi0Tcr{    ///<Transmit Counter Register
        using Addr = Register::Address<0xfffa410c,0xffff0000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txctr{}; 
    }
    namespace Spi0Rnpr{    ///<Receive Next Pointer Register
        using Addr = Register::Address<0xfffa4110,0x00000000,0,unsigned>;
        ///Receive Next Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxnptr{}; 
    }
    namespace Spi0Rncr{    ///<Receive Next Counter Register
        using Addr = Register::Address<0xfffa4114,0xffff0000,0,unsigned>;
        ///Receive Next Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxnctr{}; 
    }
    namespace Spi0Tnpr{    ///<Transmit Next Pointer Register
        using Addr = Register::Address<0xfffa4118,0x00000000,0,unsigned>;
        ///Transmit Next Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txnptr{}; 
    }
    namespace Spi0Tncr{    ///<Transmit Next Counter Register
        using Addr = Register::Address<0xfffa411c,0xffff0000,0,unsigned>;
        ///Transmit Counter Next
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txnctr{}; 
    }
    namespace Spi0Ptcr{    ///<Transfer Control Register
        using Addr = Register::Address<0xfffa4120,0xfffffcfc,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Receiver Transfer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxtdis{}; 
        ///Transmitter Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
        ///Transmitter Transfer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txtdis{}; 
    }
    namespace Spi0Ptsr{    ///<Transfer Status Register
        using Addr = Register::Address<0xfffa4124,0xfffffefe,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Transmitter Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
    }
}
