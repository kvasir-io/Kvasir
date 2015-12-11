#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog-to-Digital Converter
    namespace AdcCr{    ///<Control Register
        using Addr = Register::Address<0x400ac000,0xfffffffc,0,unsigned>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Start Conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> start{}; 
    }
    namespace AdcMr{    ///<Mode Register
        using Addr = Register::Address<0x400ac004,0xf08000c0,0,unsigned>;
        ///Trigger Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> trgen{}; 
        ///Trigger Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> trgsel{}; 
        ///Resolution
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lowres{}; 
        ///Sleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sleep{}; 
        ///Prescaler Rate Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> prescal{}; 
        ///Start Up Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> startup{}; 
        ///Sample & Hold Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> shtim{}; 
    }
    namespace AdcCher{    ///<Channel Enable Register
        using Addr = Register::Address<0x400ac010,0xffffff00,0,unsigned>;
        ///Channel 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0{}; 
        ///Channel 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1{}; 
        ///Channel 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2{}; 
        ///Channel 3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3{}; 
        ///Channel 4 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch4{}; 
        ///Channel 5 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch5{}; 
        ///Channel 6 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch6{}; 
        ///Channel 7 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ch7{}; 
    }
    namespace AdcChdr{    ///<Channel Disable Register
        using Addr = Register::Address<0x400ac014,0xffffff00,0,unsigned>;
        ///Channel 0 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0{}; 
        ///Channel 1 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1{}; 
        ///Channel 2 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2{}; 
        ///Channel 3 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3{}; 
        ///Channel 4 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch4{}; 
        ///Channel 5 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch5{}; 
        ///Channel 6 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch6{}; 
        ///Channel 7 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ch7{}; 
    }
    namespace AdcChsr{    ///<Channel Status Register
        using Addr = Register::Address<0x400ac018,0xffffff00,0,unsigned>;
        ///Channel 0 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0{}; 
        ///Channel 1 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1{}; 
        ///Channel 2 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2{}; 
        ///Channel 3 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3{}; 
        ///Channel 4 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch4{}; 
        ///Channel 5 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ch5{}; 
        ///Channel 6 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch6{}; 
        ///Channel 7 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ch7{}; 
    }
    namespace AdcSr{    ///<Status Register
        using Addr = Register::Address<0x400ac01c,0xfff00000,0,unsigned>;
        ///End of Conversion 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoc0{}; 
        ///End of Conversion 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        ///End of Conversion 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc2{}; 
        ///End of Conversion 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eoc3{}; 
        ///End of Conversion 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eoc4{}; 
        ///End of Conversion 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eoc5{}; 
        ///End of Conversion 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eoc6{}; 
        ///End of Conversion 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eoc7{}; 
        ///Overrun Error 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ovre0{}; 
        ///Overrun Error 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ovre1{}; 
        ///Overrun Error 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ovre2{}; 
        ///Overrun Error 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ovre3{}; 
        ///Overrun Error 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ovre4{}; 
        ///Overrun Error 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ovre5{}; 
        ///Overrun Error 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ovre6{}; 
        ///Overrun Error 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ovre7{}; 
        ///Data Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> drdy{}; 
        ///General Overrun Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> govre{}; 
        ///End of RX Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///RX Buffer Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rxbuff{}; 
    }
    namespace AdcLcdr{    ///<Last Converted Data Register
        using Addr = Register::Address<0x400ac020,0xfffffc00,0,unsigned>;
        ///Last Data Converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> ldata{}; 
    }
    namespace AdcIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x400ac024,0xfff00000,0,unsigned>;
        ///End of Conversion Interrupt Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoc0{}; 
        ///End of Conversion Interrupt Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        ///End of Conversion Interrupt Enable 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc2{}; 
        ///End of Conversion Interrupt Enable 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eoc3{}; 
        ///End of Conversion Interrupt Enable 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eoc4{}; 
        ///End of Conversion Interrupt Enable 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eoc5{}; 
        ///End of Conversion Interrupt Enable 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eoc6{}; 
        ///End of Conversion Interrupt Enable 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eoc7{}; 
        ///Overrun Error Interrupt Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ovre0{}; 
        ///Overrun Error Interrupt Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ovre1{}; 
        ///Overrun Error Interrupt Enable 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ovre2{}; 
        ///Overrun Error Interrupt Enable 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ovre3{}; 
        ///Overrun Error Interrupt Enable 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ovre4{}; 
        ///Overrun Error Interrupt Enable 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ovre5{}; 
        ///Overrun Error Interrupt Enable 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ovre6{}; 
        ///Overrun Error Interrupt Enable 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ovre7{}; 
        ///Data Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> drdy{}; 
        ///General Overrun Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> govre{}; 
        ///End of Receive Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///Receive Buffer Full Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rxbuff{}; 
    }
    namespace AdcIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x400ac028,0xfff00000,0,unsigned>;
        ///End of Conversion Interrupt Disable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoc0{}; 
        ///End of Conversion Interrupt Disable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        ///End of Conversion Interrupt Disable 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc2{}; 
        ///End of Conversion Interrupt Disable 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eoc3{}; 
        ///End of Conversion Interrupt Disable 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eoc4{}; 
        ///End of Conversion Interrupt Disable 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eoc5{}; 
        ///End of Conversion Interrupt Disable 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eoc6{}; 
        ///End of Conversion Interrupt Disable 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eoc7{}; 
        ///Overrun Error Interrupt Disable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ovre0{}; 
        ///Overrun Error Interrupt Disable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ovre1{}; 
        ///Overrun Error Interrupt Disable 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ovre2{}; 
        ///Overrun Error Interrupt Disable 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ovre3{}; 
        ///Overrun Error Interrupt Disable 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ovre4{}; 
        ///Overrun Error Interrupt Disable 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ovre5{}; 
        ///Overrun Error Interrupt Disable 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ovre6{}; 
        ///Overrun Error Interrupt Disable 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ovre7{}; 
        ///Data Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> drdy{}; 
        ///General Overrun Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> govre{}; 
        ///End of Receive Buffer Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///Receive Buffer Full Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rxbuff{}; 
    }
    namespace AdcImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x400ac02c,0xfff00000,0,unsigned>;
        ///End of Conversion Interrupt Mask 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoc0{}; 
        ///End of Conversion Interrupt Mask 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eoc1{}; 
        ///End of Conversion Interrupt Mask 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc2{}; 
        ///End of Conversion Interrupt Mask 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eoc3{}; 
        ///End of Conversion Interrupt Mask 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eoc4{}; 
        ///End of Conversion Interrupt Mask 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> eoc5{}; 
        ///End of Conversion Interrupt Mask 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eoc6{}; 
        ///End of Conversion Interrupt Mask 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eoc7{}; 
        ///Overrun Error Interrupt Mask 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ovre0{}; 
        ///Overrun Error Interrupt Mask 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ovre1{}; 
        ///Overrun Error Interrupt Mask 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ovre2{}; 
        ///Overrun Error Interrupt Mask 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ovre3{}; 
        ///Overrun Error Interrupt Mask 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ovre4{}; 
        ///Overrun Error Interrupt Mask 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ovre5{}; 
        ///Overrun Error Interrupt Mask 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ovre6{}; 
        ///Overrun Error Interrupt Mask 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ovre7{}; 
        ///Data Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> drdy{}; 
        ///General Overrun Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> govre{}; 
        ///End of Receive Buffer Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///Receive Buffer Full Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rxbuff{}; 
    }
    namespace AdcCdr0{    ///<Channel Data Register
        using Addr = Register::Address<0x400ac030,0xfffffc00,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr1{    ///<Channel Data Register
        using Addr = Register::Address<0x400ac034,0xfffffc00,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr2{    ///<Channel Data Register
        using Addr = Register::Address<0x400ac038,0xfffffc00,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr3{    ///<Channel Data Register
        using Addr = Register::Address<0x400ac03c,0xfffffc00,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr4{    ///<Channel Data Register
        using Addr = Register::Address<0x400ac040,0xfffffc00,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr5{    ///<Channel Data Register
        using Addr = Register::Address<0x400ac044,0xfffffc00,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr6{    ///<Channel Data Register
        using Addr = Register::Address<0x400ac048,0xfffffc00,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcCdr7{    ///<Channel Data Register
        using Addr = Register::Address<0x400ac04c,0xfffffc00,0,unsigned>;
        ///Converted Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace AdcRpr{    ///<Receive Pointer Register
        using Addr = Register::Address<0x400ac100,0x00000000,0,unsigned>;
        ///Receive Pointer Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxptr{}; 
    }
    namespace AdcRcr{    ///<Receive Counter Register
        using Addr = Register::Address<0x400ac104,0xffff0000,0,unsigned>;
        ///Receive Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxctr{}; 
    }
    namespace AdcRnpr{    ///<Receive Next Pointer Register
        using Addr = Register::Address<0x400ac110,0x00000000,0,unsigned>;
        ///Receive Next Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxnptr{}; 
    }
    namespace AdcRncr{    ///<Receive Next Counter Register
        using Addr = Register::Address<0x400ac114,0xffff0000,0,unsigned>;
        ///Receive Next Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxnctr{}; 
    }
    namespace AdcPtcr{    ///<Transfer Control Register
        using Addr = Register::Address<0x400ac120,0xfffffcfc,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Receiver Transfer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxtdis{}; 
        ///Transmitter Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
        ///Transmitter Transfer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txtdis{}; 
    }
    namespace AdcPtsr{    ///<Transfer Status Register
        using Addr = Register::Address<0x400ac124,0xfffffefe,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Transmitter Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
    }
}
