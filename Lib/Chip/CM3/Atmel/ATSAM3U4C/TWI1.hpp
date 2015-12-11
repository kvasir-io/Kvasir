#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Two-wire Interface 1
    namespace Twi1Cr{    ///<Control Register
        using Addr = Register::Address<0x40088000,0xffffff00,0,unsigned>;
        ///Send a START Condition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> start{}; 
        ///Send a STOP Condition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> stop{}; 
        ///TWI Master Mode Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msen{}; 
        ///TWI Master Mode Disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> msdis{}; 
        ///TWI Slave Mode Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sven{}; 
        ///TWI Slave Mode Disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> svdis{}; 
        ///SMBUS Quick Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> quick{}; 
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> swrst{}; 
    }
    namespace Twi1Mmr{    ///<Master Mode Register
        using Addr = Register::Address<0x40088004,0xff80ecff,0,unsigned>;
        ///Internal Device Address Size
        enum class IadrszVal {
            none=0x00000000,     ///<No internal device address
            v1Byte=0x00000001,     ///<One-byte internal device address
            v2Byte=0x00000002,     ///<Two-byte internal device address
            v3Byte=0x00000003,     ///<Three-byte internal device address
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,IadrszVal> iadrsz{}; 
        namespace IadrszValC{
            constexpr Register::FieldValue<decltype(iadrsz)::Type,IadrszVal::none> none{};
            constexpr Register::FieldValue<decltype(iadrsz)::Type,IadrszVal::v1Byte> v1Byte{};
            constexpr Register::FieldValue<decltype(iadrsz)::Type,IadrszVal::v2Byte> v2Byte{};
            constexpr Register::FieldValue<decltype(iadrsz)::Type,IadrszVal::v3Byte> v3Byte{};
        }
        ///Master Read Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mread{}; 
        ///Device Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> dadr{}; 
    }
    namespace Twi1Smr{    ///<Slave Mode Register
        using Addr = Register::Address<0x40088008,0xff80ffff,0,unsigned>;
        ///Slave Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> sadr{}; 
    }
    namespace Twi1Iadr{    ///<Internal Address Register
        using Addr = Register::Address<0x4008800c,0xff000000,0,unsigned>;
        ///Internal Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> iadr{}; 
    }
    namespace Twi1Cwgr{    ///<Clock Waveform Generator Register
        using Addr = Register::Address<0x40088010,0xfff80000,0,unsigned>;
        ///Clock Low Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cldiv{}; 
        ///Clock High Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> chdiv{}; 
        ///Clock Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ckdiv{}; 
    }
    namespace Twi1Sr{    ///<Status Register
        using Addr = Register::Address<0x40088020,0xffff0080,0,unsigned>;
        ///Transmission Completed (automatically set / reset)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        ///Receive Holding Register Ready (automatically set / reset)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmit Holding Register Ready (automatically set / reset)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Slave Read (automatically set / reset)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> svread{}; 
        ///Slave Access (automatically set / reset)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> svacc{}; 
        ///General Call Access (clear on read)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gacc{}; 
        ///Overrun Error (clear on read)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Not Acknowledged (clear on read)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nack{}; 
        ///Arbitration Lost (clear on read)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> arblst{}; 
        ///Clock Wait State (automatically set / reset)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sclws{}; 
        ///End Of Slave Access (clear on read)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eosacc{}; 
        ///End of RX buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///End of TX buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///RX Buffer Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///TX Buffer Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txbufe{}; 
    }
    namespace Twi1Ier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x40088024,0xffff0088,0,unsigned>;
        ///Transmission Completed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        ///Receive Holding Register Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmit Holding Register Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Slave Access Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> svacc{}; 
        ///General Call Access Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gacc{}; 
        ///Overrun Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Not Acknowledge Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nack{}; 
        ///Arbitration Lost Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> arblst{}; 
        ///Clock Wait State Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sclWs{}; 
        ///End Of Slave Access Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eosacc{}; 
        ///End of Receive Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///End of Transmit Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Receive Buffer Full Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///Transmit Buffer Empty Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txbufe{}; 
    }
    namespace Twi1Idr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x40088028,0xffff0088,0,unsigned>;
        ///Transmission Completed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        ///Receive Holding Register Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmit Holding Register Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Slave Access Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> svacc{}; 
        ///General Call Access Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gacc{}; 
        ///Overrun Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Not Acknowledge Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nack{}; 
        ///Arbitration Lost Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> arblst{}; 
        ///Clock Wait State Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sclWs{}; 
        ///End Of Slave Access Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eosacc{}; 
        ///End of Receive Buffer Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///End of Transmit Buffer Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Receive Buffer Full Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///Transmit Buffer Empty Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txbufe{}; 
    }
    namespace Twi1Imr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x4008802c,0xffff0088,0,unsigned>;
        ///Transmission Completed Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        ///Receive Holding Register Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmit Holding Register Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Slave Access Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> svacc{}; 
        ///General Call Access Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gacc{}; 
        ///Overrun Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Not Acknowledge Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nack{}; 
        ///Arbitration Lost Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> arblst{}; 
        ///Clock Wait State Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sclWs{}; 
        ///End Of Slave Access Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eosacc{}; 
        ///End of Receive Buffer Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///End of Transmit Buffer Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Receive Buffer Full Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///Transmit Buffer Empty Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txbufe{}; 
    }
    namespace Twi1Rhr{    ///<Receive Holding Register
        using Addr = Register::Address<0x40088030,0xffffff00,0,unsigned>;
        ///Master or Slave Receive Holding Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxdata{}; 
    }
    namespace Twi1Thr{    ///<Transmit Holding Register
        using Addr = Register::Address<0x40088034,0xffffff00,0,unsigned>;
        ///Master or Slave Transmit Holding Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txdata{}; 
    }
    namespace Twi1Rpr{    ///<Receive Pointer Register
        using Addr = Register::Address<0x40088100,0x00000000,0,unsigned>;
        ///Receive Pointer Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxptr{}; 
    }
    namespace Twi1Rcr{    ///<Receive Counter Register
        using Addr = Register::Address<0x40088104,0xffff0000,0,unsigned>;
        ///Receive Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxctr{}; 
    }
    namespace Twi1Tpr{    ///<Transmit Pointer Register
        using Addr = Register::Address<0x40088108,0x00000000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txptr{}; 
    }
    namespace Twi1Tcr{    ///<Transmit Counter Register
        using Addr = Register::Address<0x4008810c,0xffff0000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txctr{}; 
    }
    namespace Twi1Rnpr{    ///<Receive Next Pointer Register
        using Addr = Register::Address<0x40088110,0x00000000,0,unsigned>;
        ///Receive Next Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxnptr{}; 
    }
    namespace Twi1Rncr{    ///<Receive Next Counter Register
        using Addr = Register::Address<0x40088114,0xffff0000,0,unsigned>;
        ///Receive Next Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxnctr{}; 
    }
    namespace Twi1Tnpr{    ///<Transmit Next Pointer Register
        using Addr = Register::Address<0x40088118,0x00000000,0,unsigned>;
        ///Transmit Next Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txnptr{}; 
    }
    namespace Twi1Tncr{    ///<Transmit Next Counter Register
        using Addr = Register::Address<0x4008811c,0xffff0000,0,unsigned>;
        ///Transmit Counter Next
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txnctr{}; 
    }
    namespace Twi1Ptcr{    ///<Transfer Control Register
        using Addr = Register::Address<0x40088120,0xfffffcfc,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Receiver Transfer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxtdis{}; 
        ///Transmitter Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
        ///Transmitter Transfer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txtdis{}; 
    }
    namespace Twi1Ptsr{    ///<Transfer Status Register
        using Addr = Register::Address<0x40088124,0xfffffefe,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Transmitter Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
    }
}
