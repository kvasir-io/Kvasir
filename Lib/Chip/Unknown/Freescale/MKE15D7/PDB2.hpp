#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Programmable Delay Block
    namespace Pdb2Sc{    ///<Status and Control Register
        using Addr = Register::Address<0x40027000,0xfff00010,0,unsigned>;
        ///Load OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ldok{}; 
        ///Continuous Mode Enable
        enum class ContVal {
            v0=0x00000000,     ///<PDB operation in One-Shot mode
            v1=0x00000001,     ///<PDB operation in Continuous mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ContVal> cont{}; 
        namespace ContValC{
            constexpr Register::FieldValue<decltype(cont)::Type,ContVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cont)::Type,ContVal::v1> v1{};
        }
        }
        ///Multiplication Factor Select for Prescaler
        enum class MultVal {
            v00=0x00000000,     ///<Multiplication factor is 1
            v01=0x00000001,     ///<Multiplication factor is 10
            v10=0x00000002,     ///<Multiplication factor is 20
            v11=0x00000003,     ///<Multiplication factor is 40
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,MultVal> mult{}; 
        namespace MultValC{
            constexpr Register::FieldValue<decltype(mult)::Type,MultVal::v00> v00{};
            constexpr Register::FieldValue<decltype(mult)::Type,MultVal::v01> v01{};
            constexpr Register::FieldValue<decltype(mult)::Type,MultVal::v10> v10{};
            constexpr Register::FieldValue<decltype(mult)::Type,MultVal::v11> v11{};
        }
        }
        ///PDB Interrupt Enable.
        enum class PdbieVal {
            v0=0x00000000,     ///<PDB interrupt disabled
            v1=0x00000001,     ///<PDB interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,PdbieVal> pdbie{}; 
        namespace PdbieValC{
            constexpr Register::FieldValue<decltype(pdbie)::Type,PdbieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pdbie)::Type,PdbieVal::v1> v1{};
        }
        }
        ///PDB Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pdbif{}; 
        ///PDB Enable
        enum class PdbenVal {
            v0=0x00000000,     ///<PDB disabled. Counter is off.
            v1=0x00000001,     ///<PDB enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,PdbenVal> pdben{}; 
        namespace PdbenValC{
            constexpr Register::FieldValue<decltype(pdben)::Type,PdbenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pdben)::Type,PdbenVal::v1> v1{};
        }
        }
        ///Trigger Input Source Select
        enum class TrgselVal {
            v0000=0x00000000,     ///<Trigger-In 0 is selected
            v0001=0x00000001,     ///<Trigger-In 1 is selected
            v0010=0x00000002,     ///<Trigger-In 2 is selected
            v0011=0x00000003,     ///<Trigger-In 3 is selected
            v0100=0x00000004,     ///<Trigger-In 4 is selected
            v0101=0x00000005,     ///<Trigger-In 5 is selected
            v0110=0x00000006,     ///<Trigger-In 6 is selected
            v0111=0x00000007,     ///<Trigger-In 7 is selected
            v1000=0x00000008,     ///<Trigger-In 8 is selected
            v1001=0x00000009,     ///<Trigger-In 9 is selected
            v1010=0x0000000a,     ///<Trigger-In 10 is selected
            v1011=0x0000000b,     ///<Trigger-In 11 is selected
            v1100=0x0000000c,     ///<Trigger-In 12 is selected
            v1101=0x0000000d,     ///<Trigger-In 13 is selected
            v1110=0x0000000e,     ///<Trigger-In 14 is selected
            v1111=0x0000000f,     ///<Software trigger is selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,TrgselVal> trgsel{}; 
        namespace TrgselValC{
            constexpr Register::FieldValue<decltype(trgsel)::Type,TrgselVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(trgsel)::Type,TrgselVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(trgsel)::Type,TrgselVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(trgsel)::Type,TrgselVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(trgsel)::Type,TrgselVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(trgsel)::Type,TrgselVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(trgsel)::Type,TrgselVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(trgsel)::Type,TrgselVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(trgsel)::Type,TrgselVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(trgsel)::Type,TrgselVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(trgsel)::Type,TrgselVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(trgsel)::Type,TrgselVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(trgsel)::Type,TrgselVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(trgsel)::Type,TrgselVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(trgsel)::Type,TrgselVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(trgsel)::Type,TrgselVal::v1111> v1111{};
        }
        }
        ///Prescaler Divider Select
        enum class PrescalerVal {
            v000=0x00000000,     ///<Counting uses the peripheral clock divided by multiplication factor selected by MULT.
            v001=0x00000001,     ///<Counting uses the peripheral clock divided by twice of the multiplication factor selected by MULT.
            v010=0x00000002,     ///<Counting uses the peripheral clock divided by four times of the multiplication factor selected by MULT.
            v011=0x00000003,     ///<Counting uses the peripheral clock divided by eight times of the multiplication factor selected by MULT.
            v100=0x00000004,     ///<Counting uses the peripheral clock divided by 16 times of the multiplication factor selected by MULT.
            v101=0x00000005,     ///<Counting uses the peripheral clock divided by 32 times of the multiplication factor selected by MULT.
            v110=0x00000006,     ///<Counting uses the peripheral clock divided by 64 times of the multiplication factor selected by MULT.
            v111=0x00000007,     ///<Counting uses the peripheral clock divided by 128 times of the multiplication factor selected by MULT.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,PrescalerVal> prescaler{}; 
        namespace PrescalerValC{
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::v000> v000{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::v001> v001{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::v010> v010{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::v011> v011{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::v100> v100{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::v101> v101{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::v110> v110{};
            constexpr Register::FieldValue<decltype(prescaler)::Type,PrescalerVal::v111> v111{};
        }
        }
        ///DMA Enable
        enum class DmaenVal {
            v0=0x00000000,     ///<DMA disabled
            v1=0x00000001,     ///<DMA enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DmaenVal> dmaen{}; 
        namespace DmaenValC{
            constexpr Register::FieldValue<decltype(dmaen)::Type,DmaenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmaen)::Type,DmaenVal::v1> v1{};
        }
        }
        ///Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> swtrig{}; 
        ///PDB Sequence Error Interrupt Enable
        enum class PdbeieVal {
            v0=0x00000000,     ///<PDB sequence error interrupt disabled.
            v1=0x00000001,     ///<PDB sequence error interrupt enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,PdbeieVal> pdbeie{}; 
        namespace PdbeieValC{
            constexpr Register::FieldValue<decltype(pdbeie)::Type,PdbeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pdbeie)::Type,PdbeieVal::v1> v1{};
        }
        }
        ///Load Mode Select
        enum class LdmodVal {
            v00=0x00000000,     ///<The internal registers are loaded with the values from their buffers immediately after 1 is written to LDOK.
            v01=0x00000001,     ///<The internal registers are loaded with the values from their buffers when the PDB counter reaches the MOD register value after 1 is written to LDOK.
            v10=0x00000002,     ///<The internal registers are loaded with the values from their buffers when a trigger input event is detected after 1 is written to LDOK.
            v11=0x00000003,     ///<The internal registers are loaded with the values from their buffers when either the PDB counter reaches the MOD register value or a trigger input event is detected, after 1 is written to LDOK.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,LdmodVal> ldmod{}; 
        namespace LdmodValC{
            constexpr Register::FieldValue<decltype(ldmod)::Type,LdmodVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ldmod)::Type,LdmodVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ldmod)::Type,LdmodVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ldmod)::Type,LdmodVal::v11> v11{};
        }
        }
    }
    namespace Pdb2Mod{    ///<Modulus Register
        using Addr = Register::Address<0x40027004,0xffff0000,0,unsigned>;
        ///PDB Modulus
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mod{}; 
    }
    namespace Pdb2Cnt{    ///<Counter Register
        using Addr = Register::Address<0x40027008,0xffff0000,0,unsigned>;
        ///PDB Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace Pdb2Idly{    ///<Interrupt Delay Register
        using Addr = Register::Address<0x4002700c,0xffff0000,0,unsigned>;
        ///PDB Interrupt Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> idly{}; 
    }
    namespace Pdb2Chc1{    ///<Channel n Control Register 1
        using Addr = Register::Address<0x40027010,0xffff0000,0,unsigned>;
        ///PDB Channel Pre-Trigger Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///PDB Channel Pre-Trigger Output Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> tos{}; 
    }
    namespace Pdb2Chs{    ///<Channel n Status Register
        using Addr = Register::Address<0x40027014,0xff00ff00,0,unsigned>;
        ///PDB Channel Sequence Error Flags
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> err{}; 
        ///PDB Channel Flags
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> cf{}; 
    }
    namespace Pdb2Chdly0{    ///<Channel n Delay 0 Register
        using Addr = Register::Address<0x40027018,0xffff0000,0,unsigned>;
        ///PDB Channel Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dly{}; 
    }
    namespace Pdb2Chdly1{    ///<Channel n Delay 1 Register
        using Addr = Register::Address<0x4002701c,0xffff0000,0,unsigned>;
        ///PDB Channel Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dly{}; 
    }
    namespace Pdb2Chdly2{    ///<Channel n Delay 2 Register
        using Addr = Register::Address<0x40027020,0xffff0000,0,unsigned>;
        ///PDB Channel Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dly{}; 
    }
    namespace Pdb2Chdly3{    ///<Channel n Delay 3 Register
        using Addr = Register::Address<0x40027024,0xffff0000,0,unsigned>;
        ///PDB Channel Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dly{}; 
    }
    namespace Pdb2Poen{    ///<Pulse-Out n Enable Register
        using Addr = Register::Address<0x40027190,0xffffff00,0,unsigned>;
        ///PDB Pulse-Out Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> poen{}; 
    }
    namespace Pdb2Podly{    ///<Pulse-Out n Delay Register
        using Addr = Register::Address<0x40027194,0x00000000,0,unsigned>;
        ///PDB Pulse-Out Delay 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dly2{}; 
        ///PDB Pulse-Out Delay 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> dly1{}; 
    }
}
