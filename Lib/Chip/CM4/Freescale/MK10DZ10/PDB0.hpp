#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Programmable Delay Block
    namespace Pdb0Sc{    ///<Status and Control Register
        using Addr = Register::Address<0x40036000,0xfff00010,0,unsigned>;
        ///Load OK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ldok{}; 
        namespace LdokValC{
        }
        ///Continuous Mode Enable
        enum class ContVal {
            v0=0x00000000,     ///<PDB operation in One-Shot mode
            v1=0x00000001,     ///<PDB operation in Continuous mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ContVal> cont{}; 
        namespace ContValC{
            constexpr Register::FieldValue<decltype(cont),ContVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cont),ContVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(mult),MultVal::v00> v00{};
            constexpr Register::FieldValue<decltype(mult),MultVal::v01> v01{};
            constexpr Register::FieldValue<decltype(mult),MultVal::v10> v10{};
            constexpr Register::FieldValue<decltype(mult),MultVal::v11> v11{};
        }
        ///PDB Interrupt Enable.
        enum class PdbieVal {
            v0=0x00000000,     ///<PDB interrupt disabled
            v1=0x00000001,     ///<PDB interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,PdbieVal> pdbie{}; 
        namespace PdbieValC{
            constexpr Register::FieldValue<decltype(pdbie),PdbieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pdbie),PdbieVal::v1> v1{};
        }
        ///PDB Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pdbif{}; 
        namespace PdbifValC{
        }
        ///PDB Enable
        enum class PdbenVal {
            v0=0x00000000,     ///<PDB disabled. Counter is off.
            v1=0x00000001,     ///<PDB enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,PdbenVal> pdben{}; 
        namespace PdbenValC{
            constexpr Register::FieldValue<decltype(pdben),PdbenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pdben),PdbenVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(trgsel),TrgselVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(trgsel),TrgselVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(trgsel),TrgselVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(trgsel),TrgselVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(trgsel),TrgselVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(trgsel),TrgselVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(trgsel),TrgselVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(trgsel),TrgselVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(trgsel),TrgselVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(trgsel),TrgselVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(trgsel),TrgselVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(trgsel),TrgselVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(trgsel),TrgselVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(trgsel),TrgselVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(trgsel),TrgselVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(trgsel),TrgselVal::v1111> v1111{};
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
            constexpr Register::FieldValue<decltype(prescaler),PrescalerVal::v000> v000{};
            constexpr Register::FieldValue<decltype(prescaler),PrescalerVal::v001> v001{};
            constexpr Register::FieldValue<decltype(prescaler),PrescalerVal::v010> v010{};
            constexpr Register::FieldValue<decltype(prescaler),PrescalerVal::v011> v011{};
            constexpr Register::FieldValue<decltype(prescaler),PrescalerVal::v100> v100{};
            constexpr Register::FieldValue<decltype(prescaler),PrescalerVal::v101> v101{};
            constexpr Register::FieldValue<decltype(prescaler),PrescalerVal::v110> v110{};
            constexpr Register::FieldValue<decltype(prescaler),PrescalerVal::v111> v111{};
        }
        ///DMA Enable
        enum class DmaenVal {
            v0=0x00000000,     ///<DMA disabled
            v1=0x00000001,     ///<DMA enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DmaenVal> dmaen{}; 
        namespace DmaenValC{
            constexpr Register::FieldValue<decltype(dmaen),DmaenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmaen),DmaenVal::v1> v1{};
        }
        ///Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> swtrig{}; 
        namespace SwtrigValC{
        }
        ///PDB Sequence Error Interrupt Enable
        enum class PdbeieVal {
            v0=0x00000000,     ///<PDB sequence error interrupt disabled.
            v1=0x00000001,     ///<PDB sequence error interrupt enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,PdbeieVal> pdbeie{}; 
        namespace PdbeieValC{
            constexpr Register::FieldValue<decltype(pdbeie),PdbeieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pdbeie),PdbeieVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(ldmod),LdmodVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ldmod),LdmodVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ldmod),LdmodVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ldmod),LdmodVal::v11> v11{};
        }
    }
    namespace Pdb0Mod{    ///<Modulus Register
        using Addr = Register::Address<0x40036004,0xffff0000,0,unsigned>;
        ///PDB Modulus.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mod{}; 
        namespace ModValC{
        }
    }
    namespace Pdb0Cnt{    ///<Counter Register
        using Addr = Register::Address<0x40036008,0xffff0000,0,unsigned>;
        ///PDB Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace Pdb0Idly{    ///<Interrupt Delay Register
        using Addr = Register::Address<0x4003600c,0xffff0000,0,unsigned>;
        ///PDB Interrupt Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> idly{}; 
        namespace IdlyValC{
        }
    }
    namespace Pdb0Ch0c1{    ///<Channel n Control Register 1
        using Addr = Register::Address<0x40036010,0xff000000,0,unsigned>;
        ///PDB Channel Pre-Trigger Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
        ///PDB Channel Pre-Trigger Output Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> tos{}; 
        namespace TosValC{
        }
        ///PDB Channel Pre-Trigger Back-to-Back Operation Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> bb{}; 
        namespace BbValC{
        }
    }
    namespace Pdb0Ch1c1{    ///<Channel n Control Register 1
        using Addr = Register::Address<0x40036038,0xff000000,0,unsigned>;
        ///PDB Channel Pre-Trigger Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
        ///PDB Channel Pre-Trigger Output Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> tos{}; 
        namespace TosValC{
        }
        ///PDB Channel Pre-Trigger Back-to-Back Operation Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> bb{}; 
        namespace BbValC{
        }
    }
    namespace Pdb0Ch0s{    ///<Channel n Status Register
        using Addr = Register::Address<0x40036014,0xff00ff00,0,unsigned>;
        ///PDB Channel Sequence Error Flags
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> err{}; 
        namespace ErrValC{
        }
        ///PDB Channel Flags
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> cf{}; 
        namespace CfValC{
        }
    }
    namespace Pdb0Ch1s{    ///<Channel n Status Register
        using Addr = Register::Address<0x4003603c,0xff00ff00,0,unsigned>;
        ///PDB Channel Sequence Error Flags
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> err{}; 
        namespace ErrValC{
        }
        ///PDB Channel Flags
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> cf{}; 
        namespace CfValC{
        }
    }
    namespace Pdb0Ch0dly0{    ///<Channel n Delay 0 Register
        using Addr = Register::Address<0x40036018,0xffff0000,0,unsigned>;
        ///PDB Channel Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dly{}; 
        namespace DlyValC{
        }
    }
    namespace Pdb0Ch1dly0{    ///<Channel n Delay 0 Register
        using Addr = Register::Address<0x40036040,0xffff0000,0,unsigned>;
        ///PDB Channel Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dly{}; 
        namespace DlyValC{
        }
    }
    namespace Pdb0Ch0dly1{    ///<Channel n Delay 1 Register
        using Addr = Register::Address<0x4003601c,0xffff0000,0,unsigned>;
        ///PDB Channel Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dly{}; 
        namespace DlyValC{
        }
    }
    namespace Pdb0Ch1dly1{    ///<Channel n Delay 1 Register
        using Addr = Register::Address<0x40036044,0xffff0000,0,unsigned>;
        ///PDB Channel Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dly{}; 
        namespace DlyValC{
        }
    }
    namespace Pdb0Dacintc0{    ///<DAC Interval Trigger n Control Register
        using Addr = Register::Address<0x40036150,0xfffffffc,0,unsigned>;
        ///DAC Interval Trigger Enable
        enum class ToeVal {
            v0=0x00000000,     ///<DAC interval trigger disabled.
            v1=0x00000001,     ///<DAC interval trigger enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ToeVal> toe{}; 
        namespace ToeValC{
            constexpr Register::FieldValue<decltype(toe),ToeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(toe),ToeVal::v1> v1{};
        }
        ///DAC External Trigger Input Enable
        enum class ExtVal {
            v0=0x00000000,     ///<DAC external trigger input disabled. DAC interval counter is reset and started counting when a rising edge is detected on selected trigger input source or software trigger is selected and SWTRIG is written with 1.
            v1=0x00000001,     ///<DAC external trigger input enabled. DAC interval counter is bypassed and DAC external trigger input triggers the DAC interval trigger.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ExtVal> ext{}; 
        namespace ExtValC{
            constexpr Register::FieldValue<decltype(ext),ExtVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ext),ExtVal::v1> v1{};
        }
    }
    namespace Pdb0Dacintc1{    ///<DAC Interval Trigger n Control Register
        using Addr = Register::Address<0x40036158,0xfffffffc,0,unsigned>;
        ///DAC Interval Trigger Enable
        enum class ToeVal {
            v0=0x00000000,     ///<DAC interval trigger disabled.
            v1=0x00000001,     ///<DAC interval trigger enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ToeVal> toe{}; 
        namespace ToeValC{
            constexpr Register::FieldValue<decltype(toe),ToeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(toe),ToeVal::v1> v1{};
        }
        ///DAC External Trigger Input Enable
        enum class ExtVal {
            v0=0x00000000,     ///<DAC external trigger input disabled. DAC interval counter is reset and started counting when a rising edge is detected on selected trigger input source or software trigger is selected and SWTRIG is written with 1.
            v1=0x00000001,     ///<DAC external trigger input enabled. DAC interval counter is bypassed and DAC external trigger input triggers the DAC interval trigger.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ExtVal> ext{}; 
        namespace ExtValC{
            constexpr Register::FieldValue<decltype(ext),ExtVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ext),ExtVal::v1> v1{};
        }
    }
    namespace Pdb0Dacint0{    ///<DAC Interval n Register
        using Addr = Register::Address<0x40036154,0xffff0000,0,unsigned>;
        ///DAC Interval
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> int_{}; 
        namespace Int_ValC{
        }
    }
    namespace Pdb0Dacint1{    ///<DAC Interval n Register
        using Addr = Register::Address<0x4003615c,0xffff0000,0,unsigned>;
        ///DAC Interval
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> int_{}; 
        namespace Int_ValC{
        }
    }
    namespace Pdb0Poen{    ///<Pulse-Out n Enable Register
        using Addr = Register::Address<0x40036190,0xffffff00,0,unsigned>;
        ///PDB Pulse-Out Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> poen{}; 
        namespace PoenValC{
        }
    }
    namespace Pdb0Podly{    ///<Pulse-Out n Delay Register
        using Addr = Register::Address<0x40036194,0x00000000,0,unsigned>;
        ///PDB Pulse-Out Delay 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dly2{}; 
        namespace Dly2ValC{
        }
        ///PDB Pulse-Out Delay 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> dly1{}; 
        namespace Dly1ValC{
        }
    }
}
