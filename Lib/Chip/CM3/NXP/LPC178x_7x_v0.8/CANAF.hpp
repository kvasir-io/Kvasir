#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// CAN controller acceptance filter 
    namespace CanafAfmr{    ///<Acceptance Filter Register
        using Addr = Register::Address<0x4003c000,0x00000000,0x00000000,unsigned>;
        ///if AccBP is 0, the Acceptance Filter is not operational. All Rx messages on all CAN buses are ignored.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> accoff{}; 
        ///All Rx messages are accepted on enabled CAN controllers. Software must set this bit before modifying the contents of any of the registers described below, and before modifying the contents of Lookup Table RAM in any way other than setting or clearing Disable bits in Standard Identifier entries. When both this bit and AccOff are 0, the Acceptance filter operates to screen received CAN Identifiers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> accbp{}; 
        ///FullCAN mode
        enum class EfcanVal {
            softwareMustReadA=0x00000000,     ///<Software must read all messages for all enabled IDs on all enabled CAN buses, from the receiving CAN controllers.
            theAcceptanceFilte=0x00000001,     ///<The Acceptance Filter itself will take care of receiving and storing messages for selected Standard ID values on selected CAN buses. See Section 21.16 FullCAN mode on page 576.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,EfcanVal> efcan{}; 
        namespace EfcanValC{
            constexpr Register::FieldValue<decltype(efcan)::Type,EfcanVal::softwareMustReadA> softwareMustReadA{};
            constexpr Register::FieldValue<decltype(efcan)::Type,EfcanVal::theAcceptanceFilte> theAcceptanceFilte{};
        }
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CanafSffSa{    ///<Standard Frame Individual Start Address Register
        using Addr = Register::Address<0x4003c004,0x00000000,0x00000000,unsigned>;
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///The start address of the table of individual Standard Identifiers in AF Lookup RAM. If the table is empty, write the same value in this register and the SFF_GRP_sa register described below. For compatibility with possible future devices, write zeroes in bits 31:11 and 1:0 of this register. If the eFCAN bit in the AFMR is 1, this value also indicates the size of the table of Standard IDs which the Acceptance Filter will search and (if found) automatically store received messages in Acceptance Filter RAM.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,2),Register::ReadWriteAccess,unsigned> sffSa{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,11),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CanafSffGrpSa{    ///<Standard Frame Group Start Address Register
        using Addr = Register::Address<0x4003c008,0x00000000,0x00000000,unsigned>;
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///The start address of the table of grouped Standard Identifiers in AF Lookup RAM. If the table is empty, write the same value in this register and the EFF_sa register described below. The largest value that should be written to this register is 0x800, when only the Standard Individual table is used, and the last word (address 0x7FC) in AF Lookup Table RAM is used. For compatibility with possible future devices, please write zeroes in bits 31:12 and 1:0 of this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,2),Register::ReadWriteAccess,unsigned> sffGrpSa{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CanafEffSa{    ///<Extended Frame Start Address Register
        using Addr = Register::Address<0x4003c00c,0x00000000,0x00000000,unsigned>;
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///The start address of the table of individual Extended Identifiers in AF Lookup RAM. If the table is empty, write the same value in this register and the EFF_GRP_sa register described below. The largest value that should be written to this register is 0x800, when both Extended Tables are empty and the last word (address 0x7FC) in AF Lookup Table RAM is used. For compatibility with possible future devices, please write zeroes in bits 31:11 and 1:0 of this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,2),Register::ReadWriteAccess,unsigned> effSa{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,11),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CanafEffGrpSa{    ///<Extended Frame Group Start Address Register
        using Addr = Register::Address<0x4003c010,0x00000000,0x00000000,unsigned>;
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///The start address of the table of grouped Extended Identifiers in AF Lookup RAM. If the table is empty, write the same value in this register and the ENDofTable register described below. The largest value that should be written to this register is 0x800, when this table is empty and the last word (address 0x7FC) in AF Lookup Table RAM is used. For compatibility with possible future devices, please write zeroes in bits 31:12 and 1:0 of this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,2),Register::ReadWriteAccess,unsigned> effGrpSa{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CanafEndoftable{    ///<End of AF Tables register
        using Addr = Register::Address<0x4003c014,0x00000000,0x00000000,unsigned>;
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///The address above the last active address in the last active AF table. For compatibility with possible future devices, please write zeroes in bits 31:12 and 1:0 of this register. If the eFCAN bit in the AFMR is 0, the largest value that should be written to this register is 0x800, which allows the last word (address 0x7FC) in AF Lookup Table RAM to be used. If the eFCAN bit in the AFMR is 1, this value marks the start of the area of Acceptance Filter RAM, into which the Acceptance Filter will automatically receive messages for selected IDs on selected CAN buses. In this case, the maximum value that should be written to this register is 0x800 minus 6 times the value in SFF_sa. This allows 12 bytes of message storage between this address and the end of Acceptance Filter RAM, for each Standard ID that is specified between the start of Acceptance Filter RAM, and the next active AF table.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,2),Register::ReadWriteAccess,unsigned> endoftable{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CanafLuterrad{    ///<LUT Error Address register
        using Addr = Register::Address<0x4003c018,0x00000000,0x00000000,unsigned>;
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///It the LUT Error bit (below) is 1, this read-only field contains the address in AF Lookup Table RAM, at which the Acceptance Filter encountered an error in the content of the tables.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,2),Register::ReadWriteAccess,unsigned> luterrad{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,11),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CanafLuterr{    ///<LUT Error Register
        using Addr = Register::Address<0x4003c01c,0x00000000,0x00000000,unsigned>;
        ///This read-only bit is set to 1 if the Acceptance Filter encounters an error in the content of the tables in AF RAM. It is cleared when software reads the LUTerrAd register. This condition is ORed with the other CAN interrupts from the CAN controllers, to produce the request that is connected to the NVIC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> luterr{}; 
        ///Reserved, the value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CanafFcanie{    ///<FullCAN interrupt enable register
        using Addr = Register::Address<0x4003c020,0x00000000,0x00000000,unsigned>;
        ///Global FullCAN Interrupt Enable. When 1, this interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fcanie{}; 
        ///Reserved. Read value is undefined, only zero should be written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CanafFcanic0{    ///<FullCAN interrupt and capture register0
        using Addr = Register::Address<0x4003c024,0x00000000,0x00000000,unsigned>;
        ///FullCan Interrupt Pending 0 = FullCan Interrupt Pending bit 0. 1 = FullCan Interrupt Pending bit 1. ... 31 = FullCan Interrupt Pending bit 31.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> intpnd{}; 
    }
    namespace CanafFcanic1{    ///<FullCAN interrupt and capture register1
        using Addr = Register::Address<0x4003c028,0x00000000,0x00000000,unsigned>;
        ///FullCan Interrupt Pending bit 32. 0 = FullCan Interrupt Pending bit 32. 1 = FullCan Interrupt Pending bit 33. ... 31 = FullCan Interrupt Pending bit 63.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> intpnd32{}; 
    }
}
