#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Registers group
    namespace Pdma3PdmaCsrx{    ///<PDMA Control and Status Register CHx
        using Addr = Register::Address<0x50008300,0xff67ff00,0x00000000,unsigned>;
        ///PDMA Channel EnableSetting this bit to 1 enables PDMA's operation. If this bit is cleared, PDMA will ignore all PDMA request and force Bus Master into IDLE state.Note: SW_RST(PDMA_CSRx[1], x= 0~8) will clear this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pdmacen{}; 
        ///Software Engine Reset0 = Writing 0 to this bit has no effect.1 = Writing 1 to this bit will reset the internal state machine and pointers. The contents of control register will not be cleared. This bit will auto clear after few clock cycles.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::modify>,unsigned> swRst{}; 
        ///PDMA Mode Select00 = Memory to Memory mode (Memory-to-Memory).01 = IP to Memory mode (APB-to-Memory).10 = Memory to IP mode (Memory-to-APB).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> modeSel{}; 
        ///Transfer Source Address Direction Select00 = Transfer Source address is incremented successively.01 = Reserved.10 = Transfer Source address is fixed (This feature can be used when data where transferred from a single source to multiple destinations).11 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sadSel{}; 
        ///Transfer Destination Address Direction Select00 = Transfer Destination address is incremented successively.01 = Reserved.10 = Transfer Destination address is fixed (This feature can be used when data where transferred from multiple sources to a single destination).11 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dadSel{}; 
        ///Peripheral transfer Width Select00 = One word (32 bits) is transferred for every PDMA operation.01 = One byte (8 bits) is transferred for every PDMA operation.10 = One half-word (16 bits) is transferred for every PDMA operation.11 = Reserved.Note: This field is meaningful only when MODE_SEL is IP to Memory mode (APB-to-Memory) or Memory to IP mode (Memory-to-APB).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,19),Register::ReadWriteAccess,unsigned> apbTws{}; 
        ///Trig_EN0 = No effect.1 = Enable PDMA data read or write transfer.Note: When PDMA transfer completed, this bit will be cleared automatically.If the bus error occurs, all PDMA transfer will be stopped. Software must reset all PDMA channel, and then trigger again.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::modify>,unsigned> trigEn{}; 
    }
    namespace Pdma3PdmaSarx{    ///<PDMA Transfer Source Address Register CHx
        using Addr = Register::Address<0x50008304,0x00000000,0x00000000,unsigned>;
        ///PDMA Transfer Source Address RegisterThis field indicates a 32-bit source address of PDMA.Note : The source address must be word alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdmaSar{}; 
    }
    namespace Pdma3PdmaDarx{    ///<PDMA Transfer Destination Address Register CHx
        using Addr = Register::Address<0x50008308,0x00000000,0x00000000,unsigned>;
        ///PDMA Transfer Destination Address RegisterThis field indicates a 32-bit destination address of PDMA.Note : The destination address must be word alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdmaDar{}; 
    }
    namespace Pdma3PdmaBcrx{    ///<PDMA Transfer Byte Count Register CHx
        using Addr = Register::Address<0x5000830c,0xffff0000,0x00000000,unsigned>;
        ///PDMA Transfer Byte Count RegisterThis field indicates a 16-bit transfer byte count of PDMA.it must be word alignment.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pdmaBcr{}; 
    }
    namespace Pdma3PdmaPointx{    ///<PDMA Internal Buffer Pointer Register CHx
        using Addr = Register::Address<0x50008310,0xfffffff0,0x00000000,unsigned>;
        ///PDMA Internal Buffer Pointer Register (Read Only)This field indicates the internal buffer pointer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdmaPoint{}; 
    }
    namespace Pdma3PdmaCsarx{    ///<PDMA Current Source Address Register CHx
        using Addr = Register::Address<0x50008314,0x00000000,0x00000000,unsigned>;
        ///PDMA Current Source Address Register (Read Only)This field indicates the source address where the PDMA transfer is just occurring.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdmaCsar{}; 
    }
    namespace Pdma3PdmaCdarx{    ///<PDMA Current Destination Address Register CHx
        using Addr = Register::Address<0x50008318,0x00000000,0x00000000,unsigned>;
        ///PDMA Current Destination Address Register (Read Only)This field indicates the destination address where the PDMA transfer is just occurring.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdmaCdar{}; 
    }
    namespace Pdma3PdmaCbcrx{    ///<PDMA Current Byte Count Register CHx
        using Addr = Register::Address<0x5000831c,0xffff0000,0x00000000,unsigned>;
        ///PDMA Current Byte Count Register (Read Only)This field indicates the current remained byte count of PDMA.Note : SW_RST will clear this register value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdmaCbcr{}; 
    }
    namespace Pdma3PdmaIerx{    ///<PDMA Interrupt Enable Control Register CHx
        using Addr = Register::Address<0x50008320,0xfffffffc,0x00000000,unsigned>;
        ///PDMA Read/Write Target Abort Interrupt Enable0 = Disable target abort interrupt generation during PDMA transfer.1 = Enable target abort interrupt generation during PDMA transfer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tabortIe{}; 
        ///PDMA Transfer Done Interrupt Enable0 = Disable interrupt generator during PDMA transfer done.1 = Enable interrupt generator during PDMA transfer done.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> blkdIe{}; 
    }
    namespace Pdma3PdmaIsrx{    ///<PDMA Interrupt Status Register CHx
        using Addr = Register::Address<0x50008324,0xffffffff,0x00000000,unsigned>;
        ///PDMA Read/Write Target Abort Interrupt Flag0 = No bus ERROR response received.1 = Bus ERROR response received. NOTE: Software can write 1 to clear this bit to zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> tabortIf{}; 
        ///Block Transfer Done Interrupt FlagThis bit indicates that PDMA has finished all transfer.0 = Not finished yet.1 = Done.NOTE: Software can write 1 to clear this bit to zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> blkdIf{}; 
    }
    namespace Pdma3PdmaSbuf0Cx{    ///<PDMA Shared Buffer FIFO 0 Register CHx
        using Addr = Register::Address<0x50008380,0x00000000,0x00000000,unsigned>;
        ///PDMA Shared Buffer FIFO 0 (Read Only)Each channel has its own 1 word internal buffer. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdmaSbuf0{}; 
    }
}
