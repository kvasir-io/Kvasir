#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Touch Screen ADC Controller
    namespace TsadccCr{    ///<Control Register
        using Addr = Register::Address<0xfffb0000,0xfffffffc,0,unsigned>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Start Conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> start{}; 
    }
    namespace TsadccMr{    ///<Mode Register
        using Addr = Register::Address<0xfffb0004,0x00800004,0,unsigned>;
        ///Touch Screen ADC Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> tsamod{}; 
        ///PDC transfer in Touchscreen/Interleaved mode or Manual mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pdcen{}; 
        ///Resolution Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lowres{}; 
        ///Sleep Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sleep{}; 
        ///Pen Detect Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pendet{}; 
        ///Pressure Measurement Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pres{}; 
        ///Prescaler Rate Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> prescal{}; 
        ///Start Up Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> startup{}; 
        ///Sample & Hold Time for ADC Channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> shtim{}; 
        ///Pen Detect debouncing period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> pendbc{}; 
    }
    namespace TsadccTrgr{    ///<Trigger Register
        using Addr = Register::Address<0xfffb0008,0x0000fff8,0,unsigned>;
        ///Trigger Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> trgmod{}; 
        ///Trigger Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> trgper{}; 
    }
    namespace TsadccTsr{    ///<Touch Screen Register
        using Addr = Register::Address<0xfffb000c,0xf0fffff0,0,unsigned>;
        ///Touch Screen Frequency in Interleaved Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tsfreq{}; 
        ///Sample & Hold Time for Touch Screen Channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> tsshtim{}; 
    }
    namespace TsadccCher{    ///<Channel Enable Register
        using Addr = Register::Address<0xfffb0010,0xffffff00,0,unsigned>;
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
    namespace TsadccChdr{    ///<Channel Disable Register
        using Addr = Register::Address<0xfffb0014,0xffffff00,0,unsigned>;
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
    namespace TsadccChsr{    ///<Channel Status Register
        using Addr = Register::Address<0xfffb0018,0xffffff00,0,unsigned>;
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
    namespace TsadccSr{    ///<Status Register
        using Addr = Register::Address<0xfffb001c,0x88c00000,0,unsigned>;
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
        ///Pen Contact
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pencnt{}; 
        ///No Contact
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> nocnt{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eocxp{}; 
        ///End of Conversion Z1 Measure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eocz1{}; 
        ///End of Conversion Z2 Measure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eocz2{}; 
        ///Overrun Error on X Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ovrexp{}; 
        ///Overrun Error on Z1 Measure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ovrez1{}; 
        ///Overrun Error on Z2 Measure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ovrez2{}; 
    }
    namespace TsadccLcdr{    ///<Last Converted Data Register
        using Addr = Register::Address<0xfffb0020,0xfffffc00,0,unsigned>;
        ///Last Data Converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> ldata{}; 
    }
    namespace TsadccIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xfffb0024,0x88c00000,0,unsigned>;
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
        ///Pen Contact
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pencnt{}; 
        ///No Contact
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> nocnt{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eocxp{}; 
        ///End of Conversion Z1 Measure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eocz1{}; 
        ///End of Conversion Z2 Measure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eocz2{}; 
        ///Overrun Error Interrupt Enable X Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ovrexp{}; 
        ///Overrun Error Interrupt Enable Z1 Measure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ovrez1{}; 
        ///Overrun Error Interrupt Enable Z2 Measure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ovrez2{}; 
    }
    namespace TsadccIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xfffb0028,0x88c00000,0,unsigned>;
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
        ///Pen Contact
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pencnt{}; 
        ///No Contact
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> nocnt{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eocxp{}; 
        ///End of Conversion Z1 Measure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eocz1{}; 
        ///End of Conversion Z2 Measure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eocz2{}; 
        ///Overrun Error Interrupt Disable X Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ovrexp{}; 
        ///Overrun Error Interrupt Disable Z1 Measure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ovrez1{}; 
        ///Overrun Error Interrupt Disable Z2 Measure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ovrez2{}; 
    }
    namespace TsadccImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xfffb002c,0x88c00000,0,unsigned>;
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
        ///Pen Contact
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pencnt{}; 
        ///No Contact
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> nocnt{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eocxp{}; 
        ///End of Conversion Z1 Measure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eocz1{}; 
        ///End of Conversion Z2 Measure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eocz2{}; 
        ///Overrun Error Interrupt Mask X Position
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ovrexp{}; 
        ///Overrun Error Interrupt Mask Z1 Measure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ovrez1{}; 
        ///Overrun Error Interrupt Mask Z2 Measure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ovrez2{}; 
    }
    namespace TsadccCdr0{    ///<Channel Data Register
        using Addr = Register::Address<0xfffb0030,0xfffffc00,0,unsigned>;
        ///Channel Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace TsadccCdr1{    ///<Channel Data Register
        using Addr = Register::Address<0xfffb0034,0xfffffc00,0,unsigned>;
        ///Channel Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace TsadccCdr2{    ///<Channel Data Register
        using Addr = Register::Address<0xfffb0038,0xfffffc00,0,unsigned>;
        ///Channel Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace TsadccCdr3{    ///<Channel Data Register
        using Addr = Register::Address<0xfffb003c,0xfffffc00,0,unsigned>;
        ///Channel Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace TsadccCdr4{    ///<Channel Data Register
        using Addr = Register::Address<0xfffb0040,0xfffffc00,0,unsigned>;
        ///Channel Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace TsadccCdr5{    ///<Channel Data Register
        using Addr = Register::Address<0xfffb0044,0xfffffc00,0,unsigned>;
        ///Channel Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace TsadccCdr6{    ///<Channel Data Register
        using Addr = Register::Address<0xfffb0048,0xfffffc00,0,unsigned>;
        ///Channel Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace TsadccCdr7{    ///<Channel Data Register
        using Addr = Register::Address<0xfffb004c,0xfffffc00,0,unsigned>;
        ///Channel Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace TsadccXpdr{    ///<X Position Data Register
        using Addr = Register::Address<0xfffb0050,0xfffffc00,0,unsigned>;
        ///X Position Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace TsadccZ1dr{    ///<Z1 Data Register
        using Addr = Register::Address<0xfffb0054,0xfffffc00,0,unsigned>;
        ///Z1 Measurement Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace TsadccZ2dr{    ///<Z2 Data Register
        using Addr = Register::Address<0xfffb0058,0xfffffc00,0,unsigned>;
        ///Z2 Measurement Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> z2{}; 
    }
    namespace TsadccMscr{    ///<Manual Switch Command Register
        using Addr = Register::Address<0xfffb0060,0xfffffff0,0,unsigned>;
        ///Switch Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xp{}; 
        ///Switch Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> xm{}; 
        ///Switch Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> yp{}; 
        ///Switch Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ym{}; 
    }
    namespace TsadccWpmr{    ///<Write Protection Mode Register
        using Addr = Register::Address<0xfffb00e4,0x000000fe,0,unsigned>;
        ///Write Protection of TSADCC_MR, TSADCC_TRGR and TSADCC_TSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace TsadccWpsr{    ///<Write Protection Status Register
        using Addr = Register::Address<0xfffb00e8,0x000000fe,0,unsigned>;
        ///Write Protection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wps{}; 
        ///Offset error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offsetErr{}; 
    }
    namespace TsadccRpr{    ///<Receive Pointer Register
        using Addr = Register::Address<0xfffb0100,0x00000000,0,unsigned>;
        ///Receive Pointer Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxptr{}; 
    }
    namespace TsadccRcr{    ///<Receive Counter Register
        using Addr = Register::Address<0xfffb0104,0xffff0000,0,unsigned>;
        ///Receive Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxctr{}; 
    }
    namespace TsadccRnpr{    ///<Receive Next Pointer Register
        using Addr = Register::Address<0xfffb0110,0x00000000,0,unsigned>;
        ///Receive Next Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxnptr{}; 
    }
    namespace TsadccRncr{    ///<Receive Next Counter Register
        using Addr = Register::Address<0xfffb0114,0xffff0000,0,unsigned>;
        ///Receive Next Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxnctr{}; 
    }
    namespace TsadccPtcr{    ///<Transfer Control Register
        using Addr = Register::Address<0xfffb0120,0xfffffcfc,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Receiver Transfer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxtdis{}; 
        ///Transmitter Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
        ///Transmitter Transfer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txtdis{}; 
    }
    namespace TsadccPtsr{    ///<Transfer Status Register
        using Addr = Register::Address<0xfffb0124,0xfffffefe,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Transmitter Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
    }
}
