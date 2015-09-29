#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Programmable Delay Block
    namespace Pdb0Sc{    ///<Status and Control Register
        using Addr = Register::Address<0x40036000,0xfff00010,0,unsigned>;
        ///Load OK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ldok{}; 
        ///Continuous Mode Enable
        enum class contVal {
            v0=0x00000000,     ///<PDB operation in One-Shot mode
            v1=0x00000001,     ///<PDB operation in Continuous mode
        };
        namespace contValC{
            constexpr MPL::Value<contVal,contVal::v0> v0{};
            constexpr MPL::Value<contVal,contVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,contVal> cont{}; 
        ///Multiplication Factor Select for Prescaler
        enum class multVal {
            v00=0x00000000,     ///<Multiplication factor is 1
            v01=0x00000001,     ///<Multiplication factor is 10
            v10=0x00000002,     ///<Multiplication factor is 20
            v11=0x00000003,     ///<Multiplication factor is 40
        };
        namespace multValC{
            constexpr MPL::Value<multVal,multVal::v00> v00{};
            constexpr MPL::Value<multVal,multVal::v01> v01{};
            constexpr MPL::Value<multVal,multVal::v10> v10{};
            constexpr MPL::Value<multVal,multVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,multVal> mult{}; 
        ///PDB Interrupt Enable.
        enum class pdbieVal {
            v0=0x00000000,     ///<PDB interrupt disabled
            v1=0x00000001,     ///<PDB interrupt enabled
        };
        namespace pdbieValC{
            constexpr MPL::Value<pdbieVal,pdbieVal::v0> v0{};
            constexpr MPL::Value<pdbieVal,pdbieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,pdbieVal> pdbie{}; 
        ///PDB Interrupt Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pdbif{}; 
        ///PDB Enable
        enum class pdbenVal {
            v0=0x00000000,     ///<PDB disabled. Counter is off.
            v1=0x00000001,     ///<PDB enabled
        };
        namespace pdbenValC{
            constexpr MPL::Value<pdbenVal,pdbenVal::v0> v0{};
            constexpr MPL::Value<pdbenVal,pdbenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pdbenVal> pdben{}; 
        ///Trigger Input Source Select
        enum class trgselVal {
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
        namespace trgselValC{
            constexpr MPL::Value<trgselVal,trgselVal::v0000> v0000{};
            constexpr MPL::Value<trgselVal,trgselVal::v0001> v0001{};
            constexpr MPL::Value<trgselVal,trgselVal::v0010> v0010{};
            constexpr MPL::Value<trgselVal,trgselVal::v0011> v0011{};
            constexpr MPL::Value<trgselVal,trgselVal::v0100> v0100{};
            constexpr MPL::Value<trgselVal,trgselVal::v0101> v0101{};
            constexpr MPL::Value<trgselVal,trgselVal::v0110> v0110{};
            constexpr MPL::Value<trgselVal,trgselVal::v0111> v0111{};
            constexpr MPL::Value<trgselVal,trgselVal::v1000> v1000{};
            constexpr MPL::Value<trgselVal,trgselVal::v1001> v1001{};
            constexpr MPL::Value<trgselVal,trgselVal::v1010> v1010{};
            constexpr MPL::Value<trgselVal,trgselVal::v1011> v1011{};
            constexpr MPL::Value<trgselVal,trgselVal::v1100> v1100{};
            constexpr MPL::Value<trgselVal,trgselVal::v1101> v1101{};
            constexpr MPL::Value<trgselVal,trgselVal::v1110> v1110{};
            constexpr MPL::Value<trgselVal,trgselVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,trgselVal> trgsel{}; 
        ///Prescaler Divider Select
        enum class prescalerVal {
            v000=0x00000000,     ///<Counting uses the peripheral clock divided by multiplication factor selected by MULT.
            v001=0x00000001,     ///<Counting uses the peripheral clock divided by twice of the multiplication factor selected by MULT.
            v010=0x00000002,     ///<Counting uses the peripheral clock divided by four times of the multiplication factor selected by MULT.
            v011=0x00000003,     ///<Counting uses the peripheral clock divided by eight times of the multiplication factor selected by MULT.
            v100=0x00000004,     ///<Counting uses the peripheral clock divided by 16 times of the multiplication factor selected by MULT.
            v101=0x00000005,     ///<Counting uses the peripheral clock divided by 32 times of the multiplication factor selected by MULT.
            v110=0x00000006,     ///<Counting uses the peripheral clock divided by 64 times of the multiplication factor selected by MULT.
            v111=0x00000007,     ///<Counting uses the peripheral clock divided by 128 times of the multiplication factor selected by MULT.
        };
        namespace prescalerValC{
            constexpr MPL::Value<prescalerVal,prescalerVal::v000> v000{};
            constexpr MPL::Value<prescalerVal,prescalerVal::v001> v001{};
            constexpr MPL::Value<prescalerVal,prescalerVal::v010> v010{};
            constexpr MPL::Value<prescalerVal,prescalerVal::v011> v011{};
            constexpr MPL::Value<prescalerVal,prescalerVal::v100> v100{};
            constexpr MPL::Value<prescalerVal,prescalerVal::v101> v101{};
            constexpr MPL::Value<prescalerVal,prescalerVal::v110> v110{};
            constexpr MPL::Value<prescalerVal,prescalerVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,prescalerVal> prescaler{}; 
        ///DMA Enable
        enum class dmaenVal {
            v0=0x00000000,     ///<DMA disabled
            v1=0x00000001,     ///<DMA enabled
        };
        namespace dmaenValC{
            constexpr MPL::Value<dmaenVal,dmaenVal::v0> v0{};
            constexpr MPL::Value<dmaenVal,dmaenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,dmaenVal> dmaen{}; 
        ///Software Trigger
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> swtrig{}; 
        ///PDB Sequence Error Interrupt Enable
        enum class pdbeieVal {
            v0=0x00000000,     ///<PDB sequence error interrupt disabled.
            v1=0x00000001,     ///<PDB sequence error interrupt enabled.
        };
        namespace pdbeieValC{
            constexpr MPL::Value<pdbeieVal,pdbeieVal::v0> v0{};
            constexpr MPL::Value<pdbeieVal,pdbeieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,pdbeieVal> pdbeie{}; 
        ///Load Mode Select
        enum class ldmodVal {
            v00=0x00000000,     ///<The internal registers are loaded with the values from their buffers immediately after 1 is written to LDOK.
            v01=0x00000001,     ///<The internal registers are loaded with the values from their buffers when the PDB counter reaches the MOD register value after 1 is written to LDOK.
            v10=0x00000002,     ///<The internal registers are loaded with the values from their buffers when a trigger input event is detected after 1 is written to LDOK.
            v11=0x00000003,     ///<The internal registers are loaded with the values from their buffers when either the PDB counter reaches the MOD register value or a trigger input event is detected, after 1 is written to LDOK.
        };
        namespace ldmodValC{
            constexpr MPL::Value<ldmodVal,ldmodVal::v00> v00{};
            constexpr MPL::Value<ldmodVal,ldmodVal::v01> v01{};
            constexpr MPL::Value<ldmodVal,ldmodVal::v10> v10{};
            constexpr MPL::Value<ldmodVal,ldmodVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,ldmodVal> ldmod{}; 
    }
    namespace Pdb0Mod{    ///<Modulus Register
        using Addr = Register::Address<0x40036004,0xffff0000,0,unsigned>;
        ///PDB Modulus.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mod{}; 
    }
    namespace Pdb0Cnt{    ///<Counter Register
        using Addr = Register::Address<0x40036008,0xffff0000,0,unsigned>;
        ///PDB Counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace Pdb0Idly{    ///<Interrupt Delay Register
        using Addr = Register::Address<0x4003600c,0xffff0000,0,unsigned>;
        ///PDB Interrupt Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> idly{}; 
    }
    namespace Pdb0Chc1{    ///<Channel n Control Register 1
        using Addr = Register::Address<0x40036010,0xff000000,0,unsigned>;
        ///PDB Channel Pre-Trigger Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///PDB Channel Pre-Trigger Output Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> tos{}; 
        ///PDB Channel Pre-Trigger Back-to-Back Operation Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> bb{}; 
    }
    namespace Pdb0Chs{    ///<Channel n Status Register
        using Addr = Register::Address<0x40036014,0xff00ff00,0,unsigned>;
        ///PDB Channel Sequence Error Flags
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> err{}; 
        ///PDB Channel Flags
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> cf{}; 
    }
    namespace Pdb0Chdly0{    ///<Channel n Delay 0 Register
        using Addr = Register::Address<0x40036018,0xffff0000,0,unsigned>;
        ///PDB Channel Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dly{}; 
    }
    namespace Pdb0Chdly1{    ///<Channel n Delay 1 Register
        using Addr = Register::Address<0x4003601c,0xffff0000,0,unsigned>;
        ///PDB Channel Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dly{}; 
    }
    namespace Pdb0Poen{    ///<Pulse-Out n Enable Register
        using Addr = Register::Address<0x40036190,0xffffff00,0,unsigned>;
        ///PDB Pulse-Out Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> poen{}; 
    }
    namespace Pdb0Po0dly{    ///<Pulse-Out n Delay Register
        using Addr = Register::Address<0x40036194,0x00000000,0,unsigned>;
        ///PDB Pulse-Out Delay 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dly2{}; 
        ///PDB Pulse-Out Delay 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> dly1{}; 
    }
    namespace Pdb0Po1dly{    ///<Pulse-Out n Delay Register
        using Addr = Register::Address<0x40036198,0x00000000,0,unsigned>;
        ///PDB Pulse-Out Delay 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dly2{}; 
        ///PDB Pulse-Out Delay 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> dly1{}; 
    }
}
