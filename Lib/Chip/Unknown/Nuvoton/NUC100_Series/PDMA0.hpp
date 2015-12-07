#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Registers group
    namespace NonepdmaCsrx{    ///<PDMA Control and Status Register CHx
        using Addr = Register::Address<0x50008000,0xff67ff00,0,unsigned>;
        ///PDMA Channel Enable
Setting this bit to 1 enables PDMA's operation. If this bit is cleared, PDMA will ignore all PDMA request and force Bus Master into IDLE state.
Note: SW_RST(PDMA_CSRx[1], x= 0~8) will clear this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pdmacen{}; 
        namespace PdmacenValC{
        }
        ///Software Engine Reset
0 = Writing 0 to this bit has no effect.
1 = Writing 1 to this bit will reset the internal state machine and pointers. The contents of control register will not be cleared. This bit will auto clear after few clock cycles.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swRst{}; 
        namespace SwrstValC{
        }
        ///PDMA Mode Select
00 = Memory to Memory mode (Memory-to-Memory).
01 = IP to Memory mode (APB-to-Memory).
10 = Memory to IP mode (Memory-to-APB).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> modeSel{}; 
        namespace ModeselValC{
        }
        ///Transfer Source Address Direction Select
00 = Transfer Source address is incremented successively.
01 = Reserved.
10 = Transfer Source address is fixed (This feature can be used when data where transferred from a single source to multiple destinations).
11 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sadSel{}; 
        namespace SadselValC{
        }
        ///Transfer Destination Address Direction Select
00 = Transfer Destination address is incremented successively.
01 = Reserved.
10 = Transfer Destination address is fixed (This feature can be used when data where transferred from multiple sources to a single destination).
11 = Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dadSel{}; 
        namespace DadselValC{
        }
        ///Peripheral transfer Width Select
00 = One word (32 bits) is transferred for every PDMA operation.
01 = One byte (8 bits) is transferred for every PDMA operation.
10 = One half-word (16 bits) is transferred for every PDMA operation.
11 = Reserved.
Note: This field is meaningful only when MODE_SEL is IP to Memory mode (APB-to-Memory) or Memory to IP mode (Memory-to-APB).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,19),Register::ReadWriteAccess,unsigned> apbTws{}; 
        namespace ApbtwsValC{
        }
        ///Trig_EN
0 = No effect.
1 = Enable PDMA data read or write transfer.
Note: When PDMA transfer completed, this bit will be cleared automatically.
If the bus error occurs, all PDMA transfer will be stopped. Software must reset all PDMA channel, and then trigger again.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> trigEn{}; 
        namespace TrigenValC{
        }
    }
    namespace NonepdmaSarx{    ///<PDMA Transfer Source Address Register CHx
        using Addr = Register::Address<0x50008004,0x00000000,0,unsigned>;
        ///PDMA Transfer Source Address Register
This field indicates a 32-bit source address of PDMA.
Note : The source address must be word alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdmaSar{}; 
        namespace PdmasarValC{
        }
    }
    namespace NonepdmaDarx{    ///<PDMA Transfer Destination Address Register CHx
        using Addr = Register::Address<0x50008008,0x00000000,0,unsigned>;
        ///PDMA Transfer Destination Address Register
This field indicates a 32-bit destination address of PDMA.
Note : The destination address must be word alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdmaDar{}; 
        namespace PdmadarValC{
        }
    }
    namespace NonepdmaBcrx{    ///<PDMA Transfer Byte Count Register CHx
        using Addr = Register::Address<0x5000800c,0xffff0000,0,unsigned>;
        ///PDMA Transfer Byte Count Register
This field indicates a 16-bit transfer byte count of PDMA.it must be word alignment.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pdmaBcr{}; 
        namespace PdmabcrValC{
        }
    }
    namespace NonepdmaPointx{    ///<PDMA Internal Buffer Pointer Register CHx
        using Addr = Register::Address<0x50008010,0xfffffff0,0,unsigned>;
        ///PDMA Internal Buffer Pointer Register (Read Only)
This field indicates the internal buffer pointer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pdmaPoint{}; 
        namespace PdmapointValC{
        }
    }
    namespace NonepdmaCsarx{    ///<PDMA Current Source Address Register CHx
        using Addr = Register::Address<0x50008014,0x00000000,0,unsigned>;
        ///PDMA Current Source Address Register (Read Only)
This field indicates the source address where the PDMA transfer is just occurring.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdmaCsar{}; 
        namespace PdmacsarValC{
        }
    }
    namespace NonepdmaCdarx{    ///<PDMA Current Destination Address Register CHx
        using Addr = Register::Address<0x50008018,0x00000000,0,unsigned>;
        ///PDMA Current Destination Address Register (Read Only)
This field indicates the destination address where the PDMA transfer is just occurring.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdmaCdar{}; 
        namespace PdmacdarValC{
        }
    }
    namespace NonepdmaCbcrx{    ///<PDMA Current Byte Count Register CHx
        using Addr = Register::Address<0x5000801c,0xffff0000,0,unsigned>;
        ///PDMA Current Byte Count Register (Read Only)
This field indicates the current remained byte count of PDMA.
Note : SW_RST will clear this register value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pdmaCbcr{}; 
        namespace PdmacbcrValC{
        }
    }
    namespace NonepdmaIerx{    ///<PDMA Interrupt Enable Control Register CHx
        using Addr = Register::Address<0x50008020,0xfffffffc,0,unsigned>;
        ///PDMA Read/Write Target Abort Interrupt Enable
0 = Disable target abort interrupt generation during PDMA transfer.
1 = Enable target abort interrupt generation during PDMA transfer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tabortIe{}; 
        namespace TabortieValC{
        }
        ///PDMA Transfer Done Interrupt Enable
0 = Disable interrupt generator during PDMA transfer done.
1 = Enable interrupt generator during PDMA transfer done.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> blkdIe{}; 
        namespace BlkdieValC{
        }
    }
    namespace NonepdmaIsrx{    ///<PDMA Interrupt Status Register CHx
        using Addr = Register::Address<0x50008024,0xfffffffc,0,unsigned>;
        ///PDMA Read/Write Target Abort Interrupt Flag
0 = No bus ERROR response received.
1 = Bus ERROR response received. 
NOTE: Software can write 1 to clear this bit to zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tabortIf{}; 
        namespace TabortifValC{
        }
        ///Block Transfer Done Interrupt Flag
This bit indicates that PDMA has finished all transfer.
0 = Not finished yet.
1 = Done.
NOTE: Software can write 1 to clear this bit to zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> blkdIf{}; 
        namespace BlkdifValC{
        }
    }
    namespace NonepdmaSbuf0Cx{    ///<PDMA Shared Buffer FIFO 0 Register CHx
        using Addr = Register::Address<0x50008080,0x00000000,0,unsigned>;
        ///PDMA Shared Buffer FIFO 0 (Read Only)
Each channel has its own 1 word internal buffer. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdmaSbuf0{}; 
        namespace Pdmasbuf0ValC{
        }
    }
}
