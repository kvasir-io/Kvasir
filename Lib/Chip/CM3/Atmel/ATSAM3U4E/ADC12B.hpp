#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog-to-Digital Converter 12bits
    namespace Adc12bCr{    ///<Control Register
        using Addr = Register::Address<0x400a8000,0xfffffffc,0,unsigned>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        namespace SwrstValC{
        }
        ///Start Conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> start{}; 
        namespace StartValC{
        }
    }
    namespace Adc12bMr{    ///<Mode Register
        using Addr = Register::Address<0x400a8004,0xf00000c0,0,unsigned>;
        ///Trigger Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> trgen{}; 
        namespace TrgenValC{
        }
        ///Trigger Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> trgsel{}; 
        namespace TrgselValC{
        }
        ///Resolution
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lowres{}; 
        namespace LowresValC{
        }
        ///Sleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sleep{}; 
        namespace SleepValC{
        }
        ///Prescaler Rate Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> prescal{}; 
        namespace PrescalValC{
        }
        ///Start Up Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> startup{}; 
        namespace StartupValC{
        }
        ///Sample & Hold Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> shtim{}; 
        namespace ShtimValC{
        }
    }
    namespace Adc12bCher{    ///<Channel Enable Register
        using Addr = Register::Address<0x400a8010,0xffffff00,0,unsigned>;
        ///Channel 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0{}; 
        namespace Ch0ValC{
        }
        ///Channel 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1{}; 
        namespace Ch1ValC{
        }
        ///Channel 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2{}; 
        namespace Ch2ValC{
        }
        ///Channel 3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3{}; 
        namespace Ch3ValC{
        }
        ///Channel 4 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch4{}; 
        namespace Ch4ValC{
        }
        ///Channel 5 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch5{}; 
        namespace Ch5ValC{
        }
        ///Channel 6 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch6{}; 
        namespace Ch6ValC{
        }
        ///Channel 7 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ch7{}; 
        namespace Ch7ValC{
        }
    }
    namespace Adc12bChdr{    ///<Channel Disable Register
        using Addr = Register::Address<0x400a8014,0xffffff00,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0{}; 
        namespace Ch0ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1{}; 
        namespace Ch1ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2{}; 
        namespace Ch2ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3{}; 
        namespace Ch3ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch4{}; 
        namespace Ch4ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch5{}; 
        namespace Ch5ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch6{}; 
        namespace Ch6ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ch7{}; 
        namespace Ch7ValC{
        }
    }
    namespace Adc12bChsr{    ///<Channel Status Register
        using Addr = Register::Address<0x400a8018,0xffffff00,0,unsigned>;
        ///Channel 0 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0{}; 
        namespace Ch0ValC{
        }
        ///Channel 1 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1{}; 
        namespace Ch1ValC{
        }
        ///Channel 2 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2{}; 
        namespace Ch2ValC{
        }
        ///Channel 3 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3{}; 
        namespace Ch3ValC{
        }
        ///Channel 4 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch4{}; 
        namespace Ch4ValC{
        }
        ///Channel 5 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch5{}; 
        namespace Ch5ValC{
        }
        ///Channel 6 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch6{}; 
        namespace Ch6ValC{
        }
        ///Channel 7 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ch7{}; 
        namespace Ch7ValC{
        }
    }
    namespace Adc12bSr{    ///<Status Register
        using Addr = Register::Address<0x400a801c,0xfff00000,0,unsigned>;
        ///End of Conversion 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoc0{}; 
        namespace Eoc0ValC{
        }
        ///End of Conversion 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        namespace Eoc1ValC{
        }
        ///End of Conversion 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc2{}; 
        namespace Eoc2ValC{
        }
        ///End of Conversion 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eoc3{}; 
        namespace Eoc3ValC{
        }
        ///End of Conversion 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eoc4{}; 
        namespace Eoc4ValC{
        }
        ///End of Conversion 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eoc5{}; 
        namespace Eoc5ValC{
        }
        ///End of Conversion 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eoc6{}; 
        namespace Eoc6ValC{
        }
        ///End of Conversion 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eoc7{}; 
        namespace Eoc7ValC{
        }
        ///Overrun Error 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ovre0{}; 
        namespace Ovre0ValC{
        }
        ///Overrun Error 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ovre1{}; 
        namespace Ovre1ValC{
        }
        ///Overrun Error 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ovre2{}; 
        namespace Ovre2ValC{
        }
        ///Overrun Error 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ovre3{}; 
        namespace Ovre3ValC{
        }
        ///Overrun Error 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ovre4{}; 
        namespace Ovre4ValC{
        }
        ///Overrun Error 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ovre5{}; 
        namespace Ovre5ValC{
        }
        ///Overrun Error 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ovre6{}; 
        namespace Ovre6ValC{
        }
        ///Overrun Error 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ovre7{}; 
        namespace Ovre7ValC{
        }
        ///Data Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> drdy{}; 
        namespace DrdyValC{
        }
        ///General Overrun Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> govre{}; 
        namespace GovreValC{
        }
        ///End of RX Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> endrx{}; 
        namespace EndrxValC{
        }
        ///RX Buffer Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        namespace RxbuffValC{
        }
    }
    namespace Adc12bLcdr{    ///<Last Converted Data Register
        using Addr = Register::Address<0x400a8020,0xfffff000,0,unsigned>;
        ///Last Data Converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ldata{}; 
        namespace LdataValC{
        }
    }
    namespace Adc12bIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x400a8024,0xfff00000,0,unsigned>;
        ///End of Conversion Interrupt Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoc0{}; 
        namespace Eoc0ValC{
        }
        ///End of Conversion Interrupt Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        namespace Eoc1ValC{
        }
        ///End of Conversion Interrupt Enable 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc2{}; 
        namespace Eoc2ValC{
        }
        ///End of Conversion Interrupt Enable 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eoc3{}; 
        namespace Eoc3ValC{
        }
        ///End of Conversion Interrupt Enable 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eoc4{}; 
        namespace Eoc4ValC{
        }
        ///End of Conversion Interrupt Enable 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eoc5{}; 
        namespace Eoc5ValC{
        }
        ///End of Conversion Interrupt Enable 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eoc6{}; 
        namespace Eoc6ValC{
        }
        ///End of Conversion Interrupt Enable 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eoc7{}; 
        namespace Eoc7ValC{
        }
        ///Overrun Error Interrupt Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ovre0{}; 
        namespace Ovre0ValC{
        }
        ///Overrun Error Interrupt Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ovre1{}; 
        namespace Ovre1ValC{
        }
        ///Overrun Error Interrupt Enable 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ovre2{}; 
        namespace Ovre2ValC{
        }
        ///Overrun Error Interrupt Enable 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ovre3{}; 
        namespace Ovre3ValC{
        }
        ///Overrun Error Interrupt Enable 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ovre4{}; 
        namespace Ovre4ValC{
        }
        ///Overrun Error Interrupt Enable 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ovre5{}; 
        namespace Ovre5ValC{
        }
        ///Overrun Error Interrupt Enable 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ovre6{}; 
        namespace Ovre6ValC{
        }
        ///Overrun Error Interrupt Enable 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ovre7{}; 
        namespace Ovre7ValC{
        }
        ///Data Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> drdy{}; 
        namespace DrdyValC{
        }
        ///General Overrun Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> govre{}; 
        namespace GovreValC{
        }
        ///End of Receive Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> endrx{}; 
        namespace EndrxValC{
        }
        ///Receive Buffer Full Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        namespace RxbuffValC{
        }
    }
    namespace Adc12bIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x400a8028,0xfff00000,0,unsigned>;
        ///End of Conversion Interrupt Disable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoc0{}; 
        namespace Eoc0ValC{
        }
        ///End of Conversion Interrupt Disable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        namespace Eoc1ValC{
        }
        ///End of Conversion Interrupt Disable 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc2{}; 
        namespace Eoc2ValC{
        }
        ///End of Conversion Interrupt Disable 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eoc3{}; 
        namespace Eoc3ValC{
        }
        ///End of Conversion Interrupt Disable 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eoc4{}; 
        namespace Eoc4ValC{
        }
        ///End of Conversion Interrupt Disable 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eoc5{}; 
        namespace Eoc5ValC{
        }
        ///End of Conversion Interrupt Disable 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eoc6{}; 
        namespace Eoc6ValC{
        }
        ///End of Conversion Interrupt Disable 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eoc7{}; 
        namespace Eoc7ValC{
        }
        ///Overrun Error Interrupt Disable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ovre0{}; 
        namespace Ovre0ValC{
        }
        ///Overrun Error Interrupt Disable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ovre1{}; 
        namespace Ovre1ValC{
        }
        ///Overrun Error Interrupt Disable 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ovre2{}; 
        namespace Ovre2ValC{
        }
        ///Overrun Error Interrupt Disable 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ovre3{}; 
        namespace Ovre3ValC{
        }
        ///Overrun Error Interrupt Disable 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ovre4{}; 
        namespace Ovre4ValC{
        }
        ///Overrun Error Interrupt Disable 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ovre5{}; 
        namespace Ovre5ValC{
        }
        ///Overrun Error Interrupt Disable 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ovre6{}; 
        namespace Ovre6ValC{
        }
        ///Overrun Error Interrupt Disable 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ovre7{}; 
        namespace Ovre7ValC{
        }
        ///Data Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> drdy{}; 
        namespace DrdyValC{
        }
        ///General Overrun Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> govre{}; 
        namespace GovreValC{
        }
        ///End of Receive Buffer Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> endrx{}; 
        namespace EndrxValC{
        }
        ///Receive Buffer Full Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        namespace RxbuffValC{
        }
    }
    namespace Adc12bImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x400a802c,0xfff00000,0,unsigned>;
        ///End of Conversion Interrupt Mask 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoc0{}; 
        namespace Eoc0ValC{
        }
        ///End of Conversion Interrupt Mask 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        namespace Eoc1ValC{
        }
        ///End of Conversion Interrupt Mask 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc2{}; 
        namespace Eoc2ValC{
        }
        ///End of Conversion Interrupt Mask 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eoc3{}; 
        namespace Eoc3ValC{
        }
        ///End of Conversion Interrupt Mask 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eoc4{}; 
        namespace Eoc4ValC{
        }
        ///End of Conversion Interrupt Mask 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eoc5{}; 
        namespace Eoc5ValC{
        }
        ///End of Conversion Interrupt Mask 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eoc6{}; 
        namespace Eoc6ValC{
        }
        ///End of Conversion Interrupt Mask 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eoc7{}; 
        namespace Eoc7ValC{
        }
        ///Overrun Error Interrupt Mask 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ovre0{}; 
        namespace Ovre0ValC{
        }
        ///Overrun Error Interrupt Mask 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ovre1{}; 
        namespace Ovre1ValC{
        }
        ///Overrun Error Interrupt Mask 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ovre2{}; 
        namespace Ovre2ValC{
        }
        ///Overrun Error Interrupt Mask 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ovre3{}; 
        namespace Ovre3ValC{
        }
        ///Overrun Error Interrupt Mask 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ovre4{}; 
        namespace Ovre4ValC{
        }
        ///Overrun Error Interrupt Mask 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ovre5{}; 
        namespace Ovre5ValC{
        }
        ///Overrun Error Interrupt Mask 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ovre6{}; 
        namespace Ovre6ValC{
        }
        ///Overrun Error Interrupt Mask 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ovre7{}; 
        namespace Ovre7ValC{
        }
        ///Data Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> drdy{}; 
        namespace DrdyValC{
        }
        ///General Overrun Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> govre{}; 
        namespace GovreValC{
        }
        ///End of Receive Buffer Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> endrx{}; 
        namespace EndrxValC{
        }
        ///Receive Buffer Full Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        namespace RxbuffValC{
        }
    }
    namespace Adc12bCdr0{    ///<Channel Data Register
        using Addr = Register::Address<0x400a8030,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Adc12bCdr1{    ///<Channel Data Register
        using Addr = Register::Address<0x400a8034,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Adc12bCdr2{    ///<Channel Data Register
        using Addr = Register::Address<0x400a8038,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Adc12bCdr3{    ///<Channel Data Register
        using Addr = Register::Address<0x400a803c,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Adc12bCdr4{    ///<Channel Data Register
        using Addr = Register::Address<0x400a8040,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Adc12bCdr5{    ///<Channel Data Register
        using Addr = Register::Address<0x400a8044,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Adc12bCdr6{    ///<Channel Data Register
        using Addr = Register::Address<0x400a8048,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Adc12bCdr7{    ///<Channel Data Register
        using Addr = Register::Address<0x400a804c,0xfffff000,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Adc12bAcr{    ///<Analog Control Register
        using Addr = Register::Address<0x400a8064,0xfffcfcfc,0,unsigned>;
        ///Input Gain
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> gain{}; 
        namespace GainValC{
        }
        ///Bias Current Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> ibctl{}; 
        namespace IbctlValC{
        }
        ///Differential Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> diff{}; 
        namespace DiffValC{
        }
        ///Input OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> offset{}; 
        namespace OffsetValC{
        }
    }
    namespace Adc12bEmr{    ///<Extended Mode Register
        using Addr = Register::Address<0x400a8068,0xff00fffe,0,unsigned>;
        ///Off Mode if Sleep Bit (ADC12B_MR) = 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> offmodes{}; 
        namespace OffmodesValC{
        }
        ///Startup Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> offModeStartupTime{}; 
        namespace OffmodestartuptimeValC{
        }
    }
    namespace Adc12bRpr{    ///<Receive Pointer Register
        using Addr = Register::Address<0x400a8100,0x00000000,0,unsigned>;
        ///Receive Pointer Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxptr{}; 
        namespace RxptrValC{
        }
    }
    namespace Adc12bRcr{    ///<Receive Counter Register
        using Addr = Register::Address<0x400a8104,0xffff0000,0,unsigned>;
        ///Receive Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxctr{}; 
        namespace RxctrValC{
        }
    }
    namespace Adc12bRnpr{    ///<Receive Next Pointer Register
        using Addr = Register::Address<0x400a8110,0x00000000,0,unsigned>;
        ///Receive Next Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxnptr{}; 
        namespace RxnptrValC{
        }
    }
    namespace Adc12bRncr{    ///<Receive Next Counter Register
        using Addr = Register::Address<0x400a8114,0xffff0000,0,unsigned>;
        ///Receive Next Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxnctr{}; 
        namespace RxnctrValC{
        }
    }
    namespace Adc12bPtcr{    ///<Transfer Control Register
        using Addr = Register::Address<0x400a8120,0xfffffcfc,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        namespace RxtenValC{
        }
        ///Receiver Transfer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxtdis{}; 
        namespace RxtdisValC{
        }
        ///Transmitter Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
        namespace TxtenValC{
        }
        ///Transmitter Transfer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txtdis{}; 
        namespace TxtdisValC{
        }
    }
    namespace Adc12bPtsr{    ///<Transfer Status Register
        using Addr = Register::Address<0x400a8124,0xfffffefe,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        namespace RxtenValC{
        }
        ///Transmitter Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
        namespace TxtenValC{
        }
    }
}
