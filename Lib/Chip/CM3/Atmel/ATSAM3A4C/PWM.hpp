#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Pulse Width Modulation Controller
    namespace PwmClk{    ///<PWM Clock Register
        using Addr = Register::Address<0x40094000,0xf000f000,0,unsigned>;
        ///CLKA, CLKB Divide Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> diva{}; 
        namespace DivaValC{
        }
        ///CLKA, CLKB Source Clock Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> prea{}; 
        namespace PreaValC{
        }
        ///CLKA, CLKB Divide Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> divb{}; 
        namespace DivbValC{
        }
        ///CLKA, CLKB Source Clock Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> preb{}; 
        namespace PrebValC{
        }
    }
    namespace PwmEna{    ///<PWM Enable Register
        using Addr = Register::Address<0x40094004,0xffffff00,0,unsigned>;
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chid0{}; 
        namespace Chid0ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chid1{}; 
        namespace Chid1ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chid2{}; 
        namespace Chid2ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> chid3{}; 
        namespace Chid3ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> chid4{}; 
        namespace Chid4ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> chid5{}; 
        namespace Chid5ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chid6{}; 
        namespace Chid6ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chid7{}; 
        namespace Chid7ValC{
        }
    }
    namespace PwmDis{    ///<PWM Disable Register
        using Addr = Register::Address<0x40094008,0xffffff00,0,unsigned>;
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chid0{}; 
        namespace Chid0ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chid1{}; 
        namespace Chid1ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chid2{}; 
        namespace Chid2ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> chid3{}; 
        namespace Chid3ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> chid4{}; 
        namespace Chid4ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> chid5{}; 
        namespace Chid5ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chid6{}; 
        namespace Chid6ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chid7{}; 
        namespace Chid7ValC{
        }
    }
    namespace PwmSr{    ///<PWM Status Register
        using Addr = Register::Address<0x4009400c,0xffffff00,0,unsigned>;
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chid0{}; 
        namespace Chid0ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chid1{}; 
        namespace Chid1ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chid2{}; 
        namespace Chid2ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> chid3{}; 
        namespace Chid3ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> chid4{}; 
        namespace Chid4ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> chid5{}; 
        namespace Chid5ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chid6{}; 
        namespace Chid6ValC{
        }
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chid7{}; 
        namespace Chid7ValC{
        }
    }
    namespace PwmIer1{    ///<PWM Interrupt Enable Register 1
        using Addr = Register::Address<0x40094010,0xff00ff00,0,unsigned>;
        ///Counter Event on Channel 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chid0{}; 
        namespace Chid0ValC{
        }
        ///Counter Event on Channel 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chid1{}; 
        namespace Chid1ValC{
        }
        ///Counter Event on Channel 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chid2{}; 
        namespace Chid2ValC{
        }
        ///Counter Event on Channel 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> chid3{}; 
        namespace Chid3ValC{
        }
        ///Counter Event on Channel 4 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> chid4{}; 
        namespace Chid4ValC{
        }
        ///Counter Event on Channel 5 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> chid5{}; 
        namespace Chid5ValC{
        }
        ///Counter Event on Channel 6 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chid6{}; 
        namespace Chid6ValC{
        }
        ///Counter Event on Channel 7 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chid7{}; 
        namespace Chid7ValC{
        }
        ///Fault Protection Trigger on Channel 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> fchid0{}; 
        namespace Fchid0ValC{
        }
        ///Fault Protection Trigger on Channel 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> fchid1{}; 
        namespace Fchid1ValC{
        }
        ///Fault Protection Trigger on Channel 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> fchid2{}; 
        namespace Fchid2ValC{
        }
        ///Fault Protection Trigger on Channel 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> fchid3{}; 
        namespace Fchid3ValC{
        }
        ///Fault Protection Trigger on Channel 4 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> fchid4{}; 
        namespace Fchid4ValC{
        }
        ///Fault Protection Trigger on Channel 5 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> fchid5{}; 
        namespace Fchid5ValC{
        }
        ///Fault Protection Trigger on Channel 6 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> fchid6{}; 
        namespace Fchid6ValC{
        }
        ///Fault Protection Trigger on Channel 7 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> fchid7{}; 
        namespace Fchid7ValC{
        }
    }
    namespace PwmIdr1{    ///<PWM Interrupt Disable Register 1
        using Addr = Register::Address<0x40094014,0xff00ff00,0,unsigned>;
        ///Counter Event on Channel 0 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chid0{}; 
        namespace Chid0ValC{
        }
        ///Counter Event on Channel 1 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chid1{}; 
        namespace Chid1ValC{
        }
        ///Counter Event on Channel 2 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chid2{}; 
        namespace Chid2ValC{
        }
        ///Counter Event on Channel 3 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> chid3{}; 
        namespace Chid3ValC{
        }
        ///Counter Event on Channel 4 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> chid4{}; 
        namespace Chid4ValC{
        }
        ///Counter Event on Channel 5 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> chid5{}; 
        namespace Chid5ValC{
        }
        ///Counter Event on Channel 6 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chid6{}; 
        namespace Chid6ValC{
        }
        ///Counter Event on Channel 7 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chid7{}; 
        namespace Chid7ValC{
        }
        ///Fault Protection Trigger on Channel 0 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> fchid0{}; 
        namespace Fchid0ValC{
        }
        ///Fault Protection Trigger on Channel 1 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> fchid1{}; 
        namespace Fchid1ValC{
        }
        ///Fault Protection Trigger on Channel 2 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> fchid2{}; 
        namespace Fchid2ValC{
        }
        ///Fault Protection Trigger on Channel 3 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> fchid3{}; 
        namespace Fchid3ValC{
        }
        ///Fault Protection Trigger on Channel 4 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> fchid4{}; 
        namespace Fchid4ValC{
        }
        ///Fault Protection Trigger on Channel 5 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> fchid5{}; 
        namespace Fchid5ValC{
        }
        ///Fault Protection Trigger on Channel 6 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> fchid6{}; 
        namespace Fchid6ValC{
        }
        ///Fault Protection Trigger on Channel 7 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> fchid7{}; 
        namespace Fchid7ValC{
        }
    }
    namespace PwmImr1{    ///<PWM Interrupt Mask Register 1
        using Addr = Register::Address<0x40094018,0xff00ff00,0,unsigned>;
        ///Counter Event on Channel 0 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chid0{}; 
        namespace Chid0ValC{
        }
        ///Counter Event on Channel 1 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chid1{}; 
        namespace Chid1ValC{
        }
        ///Counter Event on Channel 2 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chid2{}; 
        namespace Chid2ValC{
        }
        ///Counter Event on Channel 3 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> chid3{}; 
        namespace Chid3ValC{
        }
        ///Counter Event on Channel 4 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> chid4{}; 
        namespace Chid4ValC{
        }
        ///Counter Event on Channel 5 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> chid5{}; 
        namespace Chid5ValC{
        }
        ///Counter Event on Channel 6 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chid6{}; 
        namespace Chid6ValC{
        }
        ///Counter Event on Channel 7 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chid7{}; 
        namespace Chid7ValC{
        }
        ///Fault Protection Trigger on Channel 0 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> fchid0{}; 
        namespace Fchid0ValC{
        }
        ///Fault Protection Trigger on Channel 1 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> fchid1{}; 
        namespace Fchid1ValC{
        }
        ///Fault Protection Trigger on Channel 2 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> fchid2{}; 
        namespace Fchid2ValC{
        }
        ///Fault Protection Trigger on Channel 3 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> fchid3{}; 
        namespace Fchid3ValC{
        }
        ///Fault Protection Trigger on Channel 4 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> fchid4{}; 
        namespace Fchid4ValC{
        }
        ///Fault Protection Trigger on Channel 5 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> fchid5{}; 
        namespace Fchid5ValC{
        }
        ///Fault Protection Trigger on Channel 6 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> fchid6{}; 
        namespace Fchid6ValC{
        }
        ///Fault Protection Trigger on Channel 7 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> fchid7{}; 
        namespace Fchid7ValC{
        }
    }
    namespace PwmIsr1{    ///<PWM Interrupt Status Register 1
        using Addr = Register::Address<0x4009401c,0xff00ff00,0,unsigned>;
        ///Counter Event on Channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chid0{}; 
        namespace Chid0ValC{
        }
        ///Counter Event on Channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chid1{}; 
        namespace Chid1ValC{
        }
        ///Counter Event on Channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chid2{}; 
        namespace Chid2ValC{
        }
        ///Counter Event on Channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> chid3{}; 
        namespace Chid3ValC{
        }
        ///Counter Event on Channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> chid4{}; 
        namespace Chid4ValC{
        }
        ///Counter Event on Channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> chid5{}; 
        namespace Chid5ValC{
        }
        ///Counter Event on Channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chid6{}; 
        namespace Chid6ValC{
        }
        ///Counter Event on Channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chid7{}; 
        namespace Chid7ValC{
        }
        ///Fault Protection Trigger on Channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> fchid0{}; 
        namespace Fchid0ValC{
        }
        ///Fault Protection Trigger on Channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> fchid1{}; 
        namespace Fchid1ValC{
        }
        ///Fault Protection Trigger on Channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> fchid2{}; 
        namespace Fchid2ValC{
        }
        ///Fault Protection Trigger on Channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> fchid3{}; 
        namespace Fchid3ValC{
        }
        ///Fault Protection Trigger on Channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> fchid4{}; 
        namespace Fchid4ValC{
        }
        ///Fault Protection Trigger on Channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> fchid5{}; 
        namespace Fchid5ValC{
        }
        ///Fault Protection Trigger on Channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> fchid6{}; 
        namespace Fchid6ValC{
        }
        ///Fault Protection Trigger on Channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> fchid7{}; 
        namespace Fchid7ValC{
        }
    }
    namespace PwmScm{    ///<PWM Sync Channels Mode Register
        using Addr = Register::Address<0x40094020,0xff0cff00,0,unsigned>;
        ///Synchronous Channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sync0{}; 
        namespace Sync0ValC{
        }
        ///Synchronous Channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sync1{}; 
        namespace Sync1ValC{
        }
        ///Synchronous Channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sync2{}; 
        namespace Sync2ValC{
        }
        ///Synchronous Channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sync3{}; 
        namespace Sync3ValC{
        }
        ///Synchronous Channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sync4{}; 
        namespace Sync4ValC{
        }
        ///Synchronous Channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sync5{}; 
        namespace Sync5ValC{
        }
        ///Synchronous Channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sync6{}; 
        namespace Sync6ValC{
        }
        ///Synchronous Channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sync7{}; 
        namespace Sync7ValC{
        }
        ///Synchronous Channels Update Mode
        enum class UpdmVal {
            mode0=0x00000000,     ///<Manual write of double buffer registers and manual update of synchronous channels
            mode1=0x00000001,     ///<Manual write of double buffer registers and automatic update of synchronous channels
            mode2=0x00000002,     ///<Automatic write of duty-cycle update registers by the PDC and automatic update of synchronous channels
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,UpdmVal> updm{}; 
        namespace UpdmValC{
            constexpr Register::FieldValue<decltype(updm),UpdmVal::mode0> mode0{};
            constexpr Register::FieldValue<decltype(updm),UpdmVal::mode1> mode1{};
            constexpr Register::FieldValue<decltype(updm),UpdmVal::mode2> mode2{};
        }
        ///PDC Transfer Request Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ptrm{}; 
        namespace PtrmValC{
        }
        ///PDC Transfer Request Comparison Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> ptrcs{}; 
        namespace PtrcsValC{
        }
    }
    namespace PwmScuc{    ///<PWM Sync Channels Update Control Register
        using Addr = Register::Address<0x40094028,0xfffffffe,0,unsigned>;
        ///Synchronous Channels Update Unlock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> updulock{}; 
        namespace UpdulockValC{
        }
    }
    namespace PwmScup{    ///<PWM Sync Channels Update Period Register
        using Addr = Register::Address<0x4009402c,0xffffff00,0,unsigned>;
        ///Update Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> upr{}; 
        namespace UprValC{
        }
        ///Update Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> uprcnt{}; 
        namespace UprcntValC{
        }
    }
    namespace PwmScupupd{    ///<PWM Sync Channels Update Period Update Register
        using Addr = Register::Address<0x40094030,0xfffffff0,0,unsigned>;
        ///Update Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> uprupd{}; 
        namespace UprupdValC{
        }
    }
    namespace PwmIer2{    ///<PWM Interrupt Enable Register 2
        using Addr = Register::Address<0x40094034,0xff0000f0,0,unsigned>;
        ///Write Ready for Synchronous Channels Update Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wrdy{}; 
        namespace WrdyValC{
        }
        ///PDC End of TX Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> endtx{}; 
        namespace EndtxValC{
        }
        ///PDC TX Buffer Empty Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txbufe{}; 
        namespace TxbufeValC{
        }
        ///Synchronous Channels Update Underrun Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> unre{}; 
        namespace UnreValC{
        }
        ///Comparison 0 Match Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cmpm0{}; 
        namespace Cmpm0ValC{
        }
        ///Comparison 1 Match Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cmpm1{}; 
        namespace Cmpm1ValC{
        }
        ///Comparison 2 Match Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cmpm2{}; 
        namespace Cmpm2ValC{
        }
        ///Comparison 3 Match Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cmpm3{}; 
        namespace Cmpm3ValC{
        }
        ///Comparison 4 Match Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cmpm4{}; 
        namespace Cmpm4ValC{
        }
        ///Comparison 5 Match Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cmpm5{}; 
        namespace Cmpm5ValC{
        }
        ///Comparison 6 Match Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cmpm6{}; 
        namespace Cmpm6ValC{
        }
        ///Comparison 7 Match Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cmpm7{}; 
        namespace Cmpm7ValC{
        }
        ///Comparison 0 Update Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cmpu0{}; 
        namespace Cmpu0ValC{
        }
        ///Comparison 1 Update Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cmpu1{}; 
        namespace Cmpu1ValC{
        }
        ///Comparison 2 Update Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cmpu2{}; 
        namespace Cmpu2ValC{
        }
        ///Comparison 3 Update Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cmpu3{}; 
        namespace Cmpu3ValC{
        }
        ///Comparison 4 Update Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> cmpu4{}; 
        namespace Cmpu4ValC{
        }
        ///Comparison 5 Update Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> cmpu5{}; 
        namespace Cmpu5ValC{
        }
        ///Comparison 6 Update Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> cmpu6{}; 
        namespace Cmpu6ValC{
        }
        ///Comparison 7 Update Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cmpu7{}; 
        namespace Cmpu7ValC{
        }
    }
    namespace PwmIdr2{    ///<PWM Interrupt Disable Register 2
        using Addr = Register::Address<0x40094038,0xff0000f0,0,unsigned>;
        ///Write Ready for Synchronous Channels Update Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wrdy{}; 
        namespace WrdyValC{
        }
        ///PDC End of TX Buffer Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> endtx{}; 
        namespace EndtxValC{
        }
        ///PDC TX Buffer Empty Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txbufe{}; 
        namespace TxbufeValC{
        }
        ///Synchronous Channels Update Underrun Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> unre{}; 
        namespace UnreValC{
        }
        ///Comparison 0 Match Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cmpm0{}; 
        namespace Cmpm0ValC{
        }
        ///Comparison 1 Match Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cmpm1{}; 
        namespace Cmpm1ValC{
        }
        ///Comparison 2 Match Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cmpm2{}; 
        namespace Cmpm2ValC{
        }
        ///Comparison 3 Match Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cmpm3{}; 
        namespace Cmpm3ValC{
        }
        ///Comparison 4 Match Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cmpm4{}; 
        namespace Cmpm4ValC{
        }
        ///Comparison 5 Match Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cmpm5{}; 
        namespace Cmpm5ValC{
        }
        ///Comparison 6 Match Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cmpm6{}; 
        namespace Cmpm6ValC{
        }
        ///Comparison 7 Match Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cmpm7{}; 
        namespace Cmpm7ValC{
        }
        ///Comparison 0 Update Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cmpu0{}; 
        namespace Cmpu0ValC{
        }
        ///Comparison 1 Update Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cmpu1{}; 
        namespace Cmpu1ValC{
        }
        ///Comparison 2 Update Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cmpu2{}; 
        namespace Cmpu2ValC{
        }
        ///Comparison 3 Update Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cmpu3{}; 
        namespace Cmpu3ValC{
        }
        ///Comparison 4 Update Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> cmpu4{}; 
        namespace Cmpu4ValC{
        }
        ///Comparison 5 Update Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> cmpu5{}; 
        namespace Cmpu5ValC{
        }
        ///Comparison 6 Update Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> cmpu6{}; 
        namespace Cmpu6ValC{
        }
        ///Comparison 7 Update Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cmpu7{}; 
        namespace Cmpu7ValC{
        }
    }
    namespace PwmImr2{    ///<PWM Interrupt Mask Register 2
        using Addr = Register::Address<0x4009403c,0xff0000f0,0,unsigned>;
        ///Write Ready for Synchronous Channels Update Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wrdy{}; 
        namespace WrdyValC{
        }
        ///PDC End of TX Buffer Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> endtx{}; 
        namespace EndtxValC{
        }
        ///PDC TX Buffer Empty Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txbufe{}; 
        namespace TxbufeValC{
        }
        ///Synchronous Channels Update Underrun Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> unre{}; 
        namespace UnreValC{
        }
        ///Comparison 0 Match Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cmpm0{}; 
        namespace Cmpm0ValC{
        }
        ///Comparison 1 Match Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cmpm1{}; 
        namespace Cmpm1ValC{
        }
        ///Comparison 2 Match Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cmpm2{}; 
        namespace Cmpm2ValC{
        }
        ///Comparison 3 Match Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cmpm3{}; 
        namespace Cmpm3ValC{
        }
        ///Comparison 4 Match Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cmpm4{}; 
        namespace Cmpm4ValC{
        }
        ///Comparison 5 Match Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cmpm5{}; 
        namespace Cmpm5ValC{
        }
        ///Comparison 6 Match Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cmpm6{}; 
        namespace Cmpm6ValC{
        }
        ///Comparison 7 Match Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cmpm7{}; 
        namespace Cmpm7ValC{
        }
        ///Comparison 0 Update Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cmpu0{}; 
        namespace Cmpu0ValC{
        }
        ///Comparison 1 Update Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cmpu1{}; 
        namespace Cmpu1ValC{
        }
        ///Comparison 2 Update Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cmpu2{}; 
        namespace Cmpu2ValC{
        }
        ///Comparison 3 Update Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cmpu3{}; 
        namespace Cmpu3ValC{
        }
        ///Comparison 4 Update Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> cmpu4{}; 
        namespace Cmpu4ValC{
        }
        ///Comparison 5 Update Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> cmpu5{}; 
        namespace Cmpu5ValC{
        }
        ///Comparison 6 Update Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> cmpu6{}; 
        namespace Cmpu6ValC{
        }
        ///Comparison 7 Update Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cmpu7{}; 
        namespace Cmpu7ValC{
        }
    }
    namespace PwmIsr2{    ///<PWM Interrupt Status Register 2
        using Addr = Register::Address<0x40094040,0xff0000f0,0,unsigned>;
        ///Write Ready for Synchronous Channels Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wrdy{}; 
        namespace WrdyValC{
        }
        ///PDC End of TX Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> endtx{}; 
        namespace EndtxValC{
        }
        ///PDC TX Buffer Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txbufe{}; 
        namespace TxbufeValC{
        }
        ///Synchronous Channels Update Underrun Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> unre{}; 
        namespace UnreValC{
        }
        ///Comparison 0 Match
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cmpm0{}; 
        namespace Cmpm0ValC{
        }
        ///Comparison 1 Match
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cmpm1{}; 
        namespace Cmpm1ValC{
        }
        ///Comparison 2 Match
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cmpm2{}; 
        namespace Cmpm2ValC{
        }
        ///Comparison 3 Match
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cmpm3{}; 
        namespace Cmpm3ValC{
        }
        ///Comparison 4 Match
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cmpm4{}; 
        namespace Cmpm4ValC{
        }
        ///Comparison 5 Match
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cmpm5{}; 
        namespace Cmpm5ValC{
        }
        ///Comparison 6 Match
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cmpm6{}; 
        namespace Cmpm6ValC{
        }
        ///Comparison 7 Match
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cmpm7{}; 
        namespace Cmpm7ValC{
        }
        ///Comparison 0 Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cmpu0{}; 
        namespace Cmpu0ValC{
        }
        ///Comparison 1 Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cmpu1{}; 
        namespace Cmpu1ValC{
        }
        ///Comparison 2 Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cmpu2{}; 
        namespace Cmpu2ValC{
        }
        ///Comparison 3 Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cmpu3{}; 
        namespace Cmpu3ValC{
        }
        ///Comparison 4 Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> cmpu4{}; 
        namespace Cmpu4ValC{
        }
        ///Comparison 5 Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> cmpu5{}; 
        namespace Cmpu5ValC{
        }
        ///Comparison 6 Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> cmpu6{}; 
        namespace Cmpu6ValC{
        }
        ///Comparison 7 Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cmpu7{}; 
        namespace Cmpu7ValC{
        }
    }
    namespace PwmOov{    ///<PWM Output Override Value Register
        using Addr = Register::Address<0x40094044,0xff00ff00,0,unsigned>;
        ///Output Override Value for PWMH output of the channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> oovh0{}; 
        namespace Oovh0ValC{
        }
        ///Output Override Value for PWMH output of the channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> oovh1{}; 
        namespace Oovh1ValC{
        }
        ///Output Override Value for PWMH output of the channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oovh2{}; 
        namespace Oovh2ValC{
        }
        ///Output Override Value for PWMH output of the channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oovh3{}; 
        namespace Oovh3ValC{
        }
        ///Output Override Value for PWMH output of the channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> oovh4{}; 
        namespace Oovh4ValC{
        }
        ///Output Override Value for PWMH output of the channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> oovh5{}; 
        namespace Oovh5ValC{
        }
        ///Output Override Value for PWMH output of the channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> oovh6{}; 
        namespace Oovh6ValC{
        }
        ///Output Override Value for PWMH output of the channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> oovh7{}; 
        namespace Oovh7ValC{
        }
        ///Output Override Value for PWML output of the channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> oovl0{}; 
        namespace Oovl0ValC{
        }
        ///Output Override Value for PWML output of the channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> oovl1{}; 
        namespace Oovl1ValC{
        }
        ///Output Override Value for PWML output of the channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> oovl2{}; 
        namespace Oovl2ValC{
        }
        ///Output Override Value for PWML output of the channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> oovl3{}; 
        namespace Oovl3ValC{
        }
        ///Output Override Value for PWML output of the channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> oovl4{}; 
        namespace Oovl4ValC{
        }
        ///Output Override Value for PWML output of the channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> oovl5{}; 
        namespace Oovl5ValC{
        }
        ///Output Override Value for PWML output of the channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> oovl6{}; 
        namespace Oovl6ValC{
        }
        ///Output Override Value for PWML output of the channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> oovl7{}; 
        namespace Oovl7ValC{
        }
    }
    namespace PwmOs{    ///<PWM Output Selection Register
        using Addr = Register::Address<0x40094048,0xff00ff00,0,unsigned>;
        ///Output Selection for PWMH output of the channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> osh0{}; 
        namespace Osh0ValC{
        }
        ///Output Selection for PWMH output of the channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> osh1{}; 
        namespace Osh1ValC{
        }
        ///Output Selection for PWMH output of the channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> osh2{}; 
        namespace Osh2ValC{
        }
        ///Output Selection for PWMH output of the channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osh3{}; 
        namespace Osh3ValC{
        }
        ///Output Selection for PWMH output of the channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> osh4{}; 
        namespace Osh4ValC{
        }
        ///Output Selection for PWMH output of the channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> osh5{}; 
        namespace Osh5ValC{
        }
        ///Output Selection for PWMH output of the channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> osh6{}; 
        namespace Osh6ValC{
        }
        ///Output Selection for PWMH output of the channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> osh7{}; 
        namespace Osh7ValC{
        }
        ///Output Selection for PWML output of the channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> osl0{}; 
        namespace Osl0ValC{
        }
        ///Output Selection for PWML output of the channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> osl1{}; 
        namespace Osl1ValC{
        }
        ///Output Selection for PWML output of the channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> osl2{}; 
        namespace Osl2ValC{
        }
        ///Output Selection for PWML output of the channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> osl3{}; 
        namespace Osl3ValC{
        }
        ///Output Selection for PWML output of the channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> osl4{}; 
        namespace Osl4ValC{
        }
        ///Output Selection for PWML output of the channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> osl5{}; 
        namespace Osl5ValC{
        }
        ///Output Selection for PWML output of the channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> osl6{}; 
        namespace Osl6ValC{
        }
        ///Output Selection for PWML output of the channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> osl7{}; 
        namespace Osl7ValC{
        }
    }
    namespace PwmOss{    ///<PWM Output Selection Set Register
        using Addr = Register::Address<0x4009404c,0xff00ff00,0,unsigned>;
        ///Output Selection Set for PWMH output of the channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ossh0{}; 
        namespace Ossh0ValC{
        }
        ///Output Selection Set for PWMH output of the channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ossh1{}; 
        namespace Ossh1ValC{
        }
        ///Output Selection Set for PWMH output of the channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ossh2{}; 
        namespace Ossh2ValC{
        }
        ///Output Selection Set for PWMH output of the channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ossh3{}; 
        namespace Ossh3ValC{
        }
        ///Output Selection Set for PWMH output of the channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ossh4{}; 
        namespace Ossh4ValC{
        }
        ///Output Selection Set for PWMH output of the channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ossh5{}; 
        namespace Ossh5ValC{
        }
        ///Output Selection Set for PWMH output of the channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ossh6{}; 
        namespace Ossh6ValC{
        }
        ///Output Selection Set for PWMH output of the channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ossh7{}; 
        namespace Ossh7ValC{
        }
        ///Output Selection Set for PWML output of the channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ossl0{}; 
        namespace Ossl0ValC{
        }
        ///Output Selection Set for PWML output of the channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ossl1{}; 
        namespace Ossl1ValC{
        }
        ///Output Selection Set for PWML output of the channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ossl2{}; 
        namespace Ossl2ValC{
        }
        ///Output Selection Set for PWML output of the channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ossl3{}; 
        namespace Ossl3ValC{
        }
        ///Output Selection Set for PWML output of the channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ossl4{}; 
        namespace Ossl4ValC{
        }
        ///Output Selection Set for PWML output of the channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ossl5{}; 
        namespace Ossl5ValC{
        }
        ///Output Selection Set for PWML output of the channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ossl6{}; 
        namespace Ossl6ValC{
        }
        ///Output Selection Set for PWML output of the channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ossl7{}; 
        namespace Ossl7ValC{
        }
    }
    namespace PwmOsc{    ///<PWM Output Selection Clear Register
        using Addr = Register::Address<0x40094050,0xff00ff00,0,unsigned>;
        ///Output Selection Clear for PWMH output of the channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> osch0{}; 
        namespace Osch0ValC{
        }
        ///Output Selection Clear for PWMH output of the channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> osch1{}; 
        namespace Osch1ValC{
        }
        ///Output Selection Clear for PWMH output of the channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> osch2{}; 
        namespace Osch2ValC{
        }
        ///Output Selection Clear for PWMH output of the channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osch3{}; 
        namespace Osch3ValC{
        }
        ///Output Selection Clear for PWMH output of the channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> osch4{}; 
        namespace Osch4ValC{
        }
        ///Output Selection Clear for PWMH output of the channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> osch5{}; 
        namespace Osch5ValC{
        }
        ///Output Selection Clear for PWMH output of the channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> osch6{}; 
        namespace Osch6ValC{
        }
        ///Output Selection Clear for PWMH output of the channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> osch7{}; 
        namespace Osch7ValC{
        }
        ///Output Selection Clear for PWML output of the channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> oscl0{}; 
        namespace Oscl0ValC{
        }
        ///Output Selection Clear for PWML output of the channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> oscl1{}; 
        namespace Oscl1ValC{
        }
        ///Output Selection Clear for PWML output of the channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> oscl2{}; 
        namespace Oscl2ValC{
        }
        ///Output Selection Clear for PWML output of the channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> oscl3{}; 
        namespace Oscl3ValC{
        }
        ///Output Selection Clear for PWML output of the channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> oscl4{}; 
        namespace Oscl4ValC{
        }
        ///Output Selection Clear for PWML output of the channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> oscl5{}; 
        namespace Oscl5ValC{
        }
        ///Output Selection Clear for PWML output of the channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> oscl6{}; 
        namespace Oscl6ValC{
        }
        ///Output Selection Clear for PWML output of the channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> oscl7{}; 
        namespace Oscl7ValC{
        }
    }
    namespace PwmOssupd{    ///<PWM Output Selection Set Update Register
        using Addr = Register::Address<0x40094054,0xff00ff00,0,unsigned>;
        ///Output Selection Set for PWMH output of the channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ossuph0{}; 
        namespace Ossuph0ValC{
        }
        ///Output Selection Set for PWMH output of the channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ossuph1{}; 
        namespace Ossuph1ValC{
        }
        ///Output Selection Set for PWMH output of the channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ossuph2{}; 
        namespace Ossuph2ValC{
        }
        ///Output Selection Set for PWMH output of the channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ossuph3{}; 
        namespace Ossuph3ValC{
        }
        ///Output Selection Set for PWMH output of the channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ossuph4{}; 
        namespace Ossuph4ValC{
        }
        ///Output Selection Set for PWMH output of the channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ossuph5{}; 
        namespace Ossuph5ValC{
        }
        ///Output Selection Set for PWMH output of the channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ossuph6{}; 
        namespace Ossuph6ValC{
        }
        ///Output Selection Set for PWMH output of the channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ossuph7{}; 
        namespace Ossuph7ValC{
        }
        ///Output Selection Set for PWML output of the channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ossupl0{}; 
        namespace Ossupl0ValC{
        }
        ///Output Selection Set for PWML output of the channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ossupl1{}; 
        namespace Ossupl1ValC{
        }
        ///Output Selection Set for PWML output of the channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ossupl2{}; 
        namespace Ossupl2ValC{
        }
        ///Output Selection Set for PWML output of the channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ossupl3{}; 
        namespace Ossupl3ValC{
        }
        ///Output Selection Set for PWML output of the channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ossupl4{}; 
        namespace Ossupl4ValC{
        }
        ///Output Selection Set for PWML output of the channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ossupl5{}; 
        namespace Ossupl5ValC{
        }
        ///Output Selection Set for PWML output of the channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ossupl6{}; 
        namespace Ossupl6ValC{
        }
        ///Output Selection Set for PWML output of the channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ossupl7{}; 
        namespace Ossupl7ValC{
        }
    }
    namespace PwmOscupd{    ///<PWM Output Selection Clear Update Register
        using Addr = Register::Address<0x40094058,0xff00ff00,0,unsigned>;
        ///Output Selection Clear for PWMH output of the channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> oscuph0{}; 
        namespace Oscuph0ValC{
        }
        ///Output Selection Clear for PWMH output of the channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> oscuph1{}; 
        namespace Oscuph1ValC{
        }
        ///Output Selection Clear for PWMH output of the channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oscuph2{}; 
        namespace Oscuph2ValC{
        }
        ///Output Selection Clear for PWMH output of the channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oscuph3{}; 
        namespace Oscuph3ValC{
        }
        ///Output Selection Clear for PWMH output of the channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> oscuph4{}; 
        namespace Oscuph4ValC{
        }
        ///Output Selection Clear for PWMH output of the channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> oscuph5{}; 
        namespace Oscuph5ValC{
        }
        ///Output Selection Clear for PWMH output of the channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> oscuph6{}; 
        namespace Oscuph6ValC{
        }
        ///Output Selection Clear for PWMH output of the channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> oscuph7{}; 
        namespace Oscuph7ValC{
        }
        ///Output Selection Clear for PWML output of the channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> oscupl0{}; 
        namespace Oscupl0ValC{
        }
        ///Output Selection Clear for PWML output of the channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> oscupl1{}; 
        namespace Oscupl1ValC{
        }
        ///Output Selection Clear for PWML output of the channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> oscupl2{}; 
        namespace Oscupl2ValC{
        }
        ///Output Selection Clear for PWML output of the channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> oscupl3{}; 
        namespace Oscupl3ValC{
        }
        ///Output Selection Clear for PWML output of the channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> oscupl4{}; 
        namespace Oscupl4ValC{
        }
        ///Output Selection Clear for PWML output of the channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> oscupl5{}; 
        namespace Oscupl5ValC{
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> oscupdl6{}; 
        namespace Oscupdl6ValC{
        }
        ///Output Selection Clear for PWML output of the channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> oscupl7{}; 
        namespace Oscupl7ValC{
        }
    }
    namespace PwmFmr{    ///<PWM Fault Mode Register
        using Addr = Register::Address<0x4009405c,0xff000000,0,unsigned>;
        ///Fault Polarity (fault input bit varies from 0 to 5)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fpol{}; 
        namespace FpolValC{
        }
        ///Fault Activation Mode (fault input bit varies from 0 to 5)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> fmod{}; 
        namespace FmodValC{
        }
        ///Fault Filtering (fault input bit varies from 0 to 5)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ffil{}; 
        namespace FfilValC{
        }
    }
    namespace PwmFsr{    ///<PWM Fault Status Register
        using Addr = Register::Address<0x40094060,0xffff0000,0,unsigned>;
        ///Fault Input Value (fault input bit varies from 0 to 5)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fiv{}; 
        namespace FivValC{
        }
        ///Fault Status (fault input bit varies from 0 to 5)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> fs{}; 
        namespace FsValC{
        }
    }
    namespace PwmFcr{    ///<PWM Fault Clear Register
        using Addr = Register::Address<0x40094064,0xffffff00,0,unsigned>;
        ///Fault Clear (fault input bit varies from 0 to 5)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fclr{}; 
        namespace FclrValC{
        }
    }
    namespace PwmFpv{    ///<PWM Fault Protection Value Register
        using Addr = Register::Address<0x40094068,0xff00ff00,0,unsigned>;
        ///Fault Protection Value for PWMH output on channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fpvh0{}; 
        namespace Fpvh0ValC{
        }
        ///Fault Protection Value for PWMH output on channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fpvh1{}; 
        namespace Fpvh1ValC{
        }
        ///Fault Protection Value for PWMH output on channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fpvh2{}; 
        namespace Fpvh2ValC{
        }
        ///Fault Protection Value for PWMH output on channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fpvh3{}; 
        namespace Fpvh3ValC{
        }
        ///Fault Protection Value for PWMH output on channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fpvh4{}; 
        namespace Fpvh4ValC{
        }
        ///Fault Protection Value for PWMH output on channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fpvh5{}; 
        namespace Fpvh5ValC{
        }
        ///Fault Protection Value for PWMH output on channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fpvh6{}; 
        namespace Fpvh6ValC{
        }
        ///Fault Protection Value for PWMH output on channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fpvh7{}; 
        namespace Fpvh7ValC{
        }
        ///Fault Protection Value for PWML output on channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> fpvl0{}; 
        namespace Fpvl0ValC{
        }
        ///Fault Protection Value for PWML output on channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> fpvl1{}; 
        namespace Fpvl1ValC{
        }
        ///Fault Protection Value for PWML output on channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> fpvl2{}; 
        namespace Fpvl2ValC{
        }
        ///Fault Protection Value for PWML output on channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> fpvl3{}; 
        namespace Fpvl3ValC{
        }
        ///Fault Protection Value for PWML output on channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> fpvl4{}; 
        namespace Fpvl4ValC{
        }
        ///Fault Protection Value for PWML output on channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> fpvl5{}; 
        namespace Fpvl5ValC{
        }
        ///Fault Protection Value for PWML output on channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> fpvl6{}; 
        namespace Fpvl6ValC{
        }
        ///Fault Protection Value for PWML output on channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> fpvl7{}; 
        namespace Fpvl7ValC{
        }
    }
    namespace PwmFpe1{    ///<PWM Fault Protection Enable Register 1
        using Addr = Register::Address<0x4009406c,0x00000000,0,unsigned>;
        ///Fault Protection Enable for channel 0 (fault input bit varies from 0 to 5)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fpe0{}; 
        namespace Fpe0ValC{
        }
        ///Fault Protection Enable for channel 1 (fault input bit varies from 0 to 5)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> fpe1{}; 
        namespace Fpe1ValC{
        }
        ///Fault Protection Enable for channel 2 (fault input bit varies from 0 to 5)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> fpe2{}; 
        namespace Fpe2ValC{
        }
        ///Fault Protection Enable for channel 3 (fault input bit varies from 0 to 5)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> fpe3{}; 
        namespace Fpe3ValC{
        }
    }
    namespace PwmFpe2{    ///<PWM Fault Protection Enable Register 2
        using Addr = Register::Address<0x40094070,0x00000000,0,unsigned>;
        ///Fault Protection Enable for channel 4 (fault input bit varies from 0 to 5)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fpe4{}; 
        namespace Fpe4ValC{
        }
        ///Fault Protection Enable for channel 5 (fault input bit varies from 0 to 5)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> fpe5{}; 
        namespace Fpe5ValC{
        }
        ///Fault Protection Enable for channel 6 (fault input bit varies from 0 to 5)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> fpe6{}; 
        namespace Fpe6ValC{
        }
        ///Fault Protection Enable for channel 7 (fault input bit varies from 0 to 5)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> fpe7{}; 
        namespace Fpe7ValC{
        }
    }
    namespace PwmElmr0{    ///<PWM Event Line 0 Mode Register
        using Addr = Register::Address<0x4009407c,0xffffff00,0,unsigned>;
        ///Comparison 0 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> csel0{}; 
        namespace Csel0ValC{
        }
        ///Comparison 1 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> csel1{}; 
        namespace Csel1ValC{
        }
        ///Comparison 2 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> csel2{}; 
        namespace Csel2ValC{
        }
        ///Comparison 3 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> csel3{}; 
        namespace Csel3ValC{
        }
        ///Comparison 4 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> csel4{}; 
        namespace Csel4ValC{
        }
        ///Comparison 5 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> csel5{}; 
        namespace Csel5ValC{
        }
        ///Comparison 6 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> csel6{}; 
        namespace Csel6ValC{
        }
        ///Comparison 7 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> csel7{}; 
        namespace Csel7ValC{
        }
    }
    namespace PwmElmr1{    ///<PWM Event Line 0 Mode Register
        using Addr = Register::Address<0x40094080,0xffffff00,0,unsigned>;
        ///Comparison 0 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> csel0{}; 
        namespace Csel0ValC{
        }
        ///Comparison 1 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> csel1{}; 
        namespace Csel1ValC{
        }
        ///Comparison 2 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> csel2{}; 
        namespace Csel2ValC{
        }
        ///Comparison 3 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> csel3{}; 
        namespace Csel3ValC{
        }
        ///Comparison 4 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> csel4{}; 
        namespace Csel4ValC{
        }
        ///Comparison 5 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> csel5{}; 
        namespace Csel5ValC{
        }
        ///Comparison 6 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> csel6{}; 
        namespace Csel6ValC{
        }
        ///Comparison 7 Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> csel7{}; 
        namespace Csel7ValC{
        }
    }
    namespace PwmSmmr{    ///<PWM Stepper Motor Mode Register
        using Addr = Register::Address<0x400940b0,0xfff0fff0,0,unsigned>;
        ///Gray Count ENable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gcen0{}; 
        namespace Gcen0ValC{
        }
        ///Gray Count ENable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gcen1{}; 
        namespace Gcen1ValC{
        }
        ///Gray Count ENable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gcen2{}; 
        namespace Gcen2ValC{
        }
        ///Gray Count ENable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gcen3{}; 
        namespace Gcen3ValC{
        }
        ///DOWN Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> down0{}; 
        namespace Down0ValC{
        }
        ///DOWN Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> down1{}; 
        namespace Down1ValC{
        }
        ///DOWN Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> down2{}; 
        namespace Down2ValC{
        }
        ///DOWN Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> down3{}; 
        namespace Down3ValC{
        }
    }
    namespace PwmWpcr{    ///<PWM Write Protect Control Register
        using Addr = Register::Address<0x400940e4,0x00000000,0,unsigned>;
        ///Write Protect Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> wpcmd{}; 
        namespace WpcmdValC{
        }
        ///Write Protect Register Group 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wprg0{}; 
        namespace Wprg0ValC{
        }
        ///Write Protect Register Group 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wprg1{}; 
        namespace Wprg1ValC{
        }
        ///Write Protect Register Group 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wprg2{}; 
        namespace Wprg2ValC{
        }
        ///Write Protect Register Group 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wprg3{}; 
        namespace Wprg3ValC{
        }
        ///Write Protect Register Group 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wprg4{}; 
        namespace Wprg4ValC{
        }
        ///Write Protect Register Group 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wprg5{}; 
        namespace Wprg5ValC{
        }
        ///Write Protect Key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
        namespace WpkeyValC{
        }
    }
    namespace PwmWpsr{    ///<PWM Write Protect Status Register
        using Addr = Register::Address<0x400940e8,0x0000c040,0,unsigned>;
        ///Write Protect SW Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpsws0{}; 
        namespace Wpsws0ValC{
        }
        ///Write Protect SW Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wpsws1{}; 
        namespace Wpsws1ValC{
        }
        ///Write Protect SW Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wpsws2{}; 
        namespace Wpsws2ValC{
        }
        ///Write Protect SW Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wpsws3{}; 
        namespace Wpsws3ValC{
        }
        ///Write Protect SW Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wpsws4{}; 
        namespace Wpsws4ValC{
        }
        ///Write Protect SW Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wpsws5{}; 
        namespace Wpsws5ValC{
        }
        ///Write Protect Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wpvs{}; 
        namespace WpvsValC{
        }
        ///Write Protect HW Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wphws0{}; 
        namespace Wphws0ValC{
        }
        ///Write Protect HW Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> wphws1{}; 
        namespace Wphws1ValC{
        }
        ///Write Protect HW Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> wphws2{}; 
        namespace Wphws2ValC{
        }
        ///Write Protect HW Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wphws3{}; 
        namespace Wphws3ValC{
        }
        ///Write Protect HW Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wphws4{}; 
        namespace Wphws4ValC{
        }
        ///Write Protect HW Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> wphws5{}; 
        namespace Wphws5ValC{
        }
        ///Write Protect Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
        namespace WpvsrcValC{
        }
    }
    namespace PwmCmpv0{    ///<PWM Comparison 0 Value Register
        using Addr = Register::Address<0x40094130,0xfe000000,0,unsigned>;
        ///Comparison x Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cv{}; 
        namespace CvValC{
        }
        ///Comparison x Value Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cvm{}; 
        namespace CvmValC{
        }
    }
    namespace PwmCmpvupd0{    ///<PWM Comparison 0 Value Update Register
        using Addr = Register::Address<0x40094134,0xfe000000,0,unsigned>;
        ///Comparison x Value Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cvupd{}; 
        namespace CvupdValC{
        }
        ///Comparison x Value Mode Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cvmupd{}; 
        namespace CvmupdValC{
        }
    }
    namespace PwmCmpm0{    ///<PWM Comparison 0 Mode Register
        using Addr = Register::Address<0x40094138,0xff00000e,0,unsigned>;
        ///Comparison x Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
        namespace CenValC{
        }
        ///Comparison x Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ctr{}; 
        namespace CtrValC{
        }
        ///Comparison x Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cpr{}; 
        namespace CprValC{
        }
        ///Comparison x Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> cprcnt{}; 
        namespace CprcntValC{
        }
        ///Comparison x Update Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> cupr{}; 
        namespace CuprValC{
        }
        ///Comparison x Update Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> cuprcnt{}; 
        namespace CuprcntValC{
        }
    }
    namespace PwmCmpmupd0{    ///<PWM Comparison 0 Mode Update Register
        using Addr = Register::Address<0x4009413c,0xfff0f00e,0,unsigned>;
        ///Comparison x Enable Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cenupd{}; 
        namespace CenupdValC{
        }
        ///Comparison x Trigger Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ctrupd{}; 
        namespace CtrupdValC{
        }
        ///Comparison x Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cprupd{}; 
        namespace CprupdValC{
        }
        ///Comparison x Update Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> cuprupd{}; 
        namespace CuprupdValC{
        }
    }
    namespace PwmCmpv1{    ///<PWM Comparison 1 Value Register
        using Addr = Register::Address<0x40094140,0xfe000000,0,unsigned>;
        ///Comparison x Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cv{}; 
        namespace CvValC{
        }
        ///Comparison x Value Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cvm{}; 
        namespace CvmValC{
        }
    }
    namespace PwmCmpvupd1{    ///<PWM Comparison 1 Value Update Register
        using Addr = Register::Address<0x40094144,0xfe000000,0,unsigned>;
        ///Comparison x Value Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cvupd{}; 
        namespace CvupdValC{
        }
        ///Comparison x Value Mode Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cvmupd{}; 
        namespace CvmupdValC{
        }
    }
    namespace PwmCmpm1{    ///<PWM Comparison 1 Mode Register
        using Addr = Register::Address<0x40094148,0xff00000e,0,unsigned>;
        ///Comparison x Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
        namespace CenValC{
        }
        ///Comparison x Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ctr{}; 
        namespace CtrValC{
        }
        ///Comparison x Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cpr{}; 
        namespace CprValC{
        }
        ///Comparison x Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> cprcnt{}; 
        namespace CprcntValC{
        }
        ///Comparison x Update Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> cupr{}; 
        namespace CuprValC{
        }
        ///Comparison x Update Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> cuprcnt{}; 
        namespace CuprcntValC{
        }
    }
    namespace PwmCmpmupd1{    ///<PWM Comparison 1 Mode Update Register
        using Addr = Register::Address<0x4009414c,0xfff0f00e,0,unsigned>;
        ///Comparison x Enable Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cenupd{}; 
        namespace CenupdValC{
        }
        ///Comparison x Trigger Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ctrupd{}; 
        namespace CtrupdValC{
        }
        ///Comparison x Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cprupd{}; 
        namespace CprupdValC{
        }
        ///Comparison x Update Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> cuprupd{}; 
        namespace CuprupdValC{
        }
    }
    namespace PwmCmpv2{    ///<PWM Comparison 2 Value Register
        using Addr = Register::Address<0x40094150,0xfe000000,0,unsigned>;
        ///Comparison x Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cv{}; 
        namespace CvValC{
        }
        ///Comparison x Value Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cvm{}; 
        namespace CvmValC{
        }
    }
    namespace PwmCmpvupd2{    ///<PWM Comparison 2 Value Update Register
        using Addr = Register::Address<0x40094154,0xfe000000,0,unsigned>;
        ///Comparison x Value Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cvupd{}; 
        namespace CvupdValC{
        }
        ///Comparison x Value Mode Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cvmupd{}; 
        namespace CvmupdValC{
        }
    }
    namespace PwmCmpm2{    ///<PWM Comparison 2 Mode Register
        using Addr = Register::Address<0x40094158,0xff00000e,0,unsigned>;
        ///Comparison x Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
        namespace CenValC{
        }
        ///Comparison x Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ctr{}; 
        namespace CtrValC{
        }
        ///Comparison x Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cpr{}; 
        namespace CprValC{
        }
        ///Comparison x Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> cprcnt{}; 
        namespace CprcntValC{
        }
        ///Comparison x Update Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> cupr{}; 
        namespace CuprValC{
        }
        ///Comparison x Update Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> cuprcnt{}; 
        namespace CuprcntValC{
        }
    }
    namespace PwmCmpmupd2{    ///<PWM Comparison 2 Mode Update Register
        using Addr = Register::Address<0x4009415c,0xfff0f00e,0,unsigned>;
        ///Comparison x Enable Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cenupd{}; 
        namespace CenupdValC{
        }
        ///Comparison x Trigger Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ctrupd{}; 
        namespace CtrupdValC{
        }
        ///Comparison x Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cprupd{}; 
        namespace CprupdValC{
        }
        ///Comparison x Update Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> cuprupd{}; 
        namespace CuprupdValC{
        }
    }
    namespace PwmCmpv3{    ///<PWM Comparison 3 Value Register
        using Addr = Register::Address<0x40094160,0xfe000000,0,unsigned>;
        ///Comparison x Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cv{}; 
        namespace CvValC{
        }
        ///Comparison x Value Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cvm{}; 
        namespace CvmValC{
        }
    }
    namespace PwmCmpvupd3{    ///<PWM Comparison 3 Value Update Register
        using Addr = Register::Address<0x40094164,0xfe000000,0,unsigned>;
        ///Comparison x Value Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cvupd{}; 
        namespace CvupdValC{
        }
        ///Comparison x Value Mode Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cvmupd{}; 
        namespace CvmupdValC{
        }
    }
    namespace PwmCmpm3{    ///<PWM Comparison 3 Mode Register
        using Addr = Register::Address<0x40094168,0xff00000e,0,unsigned>;
        ///Comparison x Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
        namespace CenValC{
        }
        ///Comparison x Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ctr{}; 
        namespace CtrValC{
        }
        ///Comparison x Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cpr{}; 
        namespace CprValC{
        }
        ///Comparison x Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> cprcnt{}; 
        namespace CprcntValC{
        }
        ///Comparison x Update Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> cupr{}; 
        namespace CuprValC{
        }
        ///Comparison x Update Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> cuprcnt{}; 
        namespace CuprcntValC{
        }
    }
    namespace PwmCmpmupd3{    ///<PWM Comparison 3 Mode Update Register
        using Addr = Register::Address<0x4009416c,0xfff0f00e,0,unsigned>;
        ///Comparison x Enable Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cenupd{}; 
        namespace CenupdValC{
        }
        ///Comparison x Trigger Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ctrupd{}; 
        namespace CtrupdValC{
        }
        ///Comparison x Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cprupd{}; 
        namespace CprupdValC{
        }
        ///Comparison x Update Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> cuprupd{}; 
        namespace CuprupdValC{
        }
    }
    namespace PwmCmpv4{    ///<PWM Comparison 4 Value Register
        using Addr = Register::Address<0x40094170,0xfe000000,0,unsigned>;
        ///Comparison x Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cv{}; 
        namespace CvValC{
        }
        ///Comparison x Value Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cvm{}; 
        namespace CvmValC{
        }
    }
    namespace PwmCmpvupd4{    ///<PWM Comparison 4 Value Update Register
        using Addr = Register::Address<0x40094174,0xfe000000,0,unsigned>;
        ///Comparison x Value Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cvupd{}; 
        namespace CvupdValC{
        }
        ///Comparison x Value Mode Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cvmupd{}; 
        namespace CvmupdValC{
        }
    }
    namespace PwmCmpm4{    ///<PWM Comparison 4 Mode Register
        using Addr = Register::Address<0x40094178,0xff00000e,0,unsigned>;
        ///Comparison x Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
        namespace CenValC{
        }
        ///Comparison x Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ctr{}; 
        namespace CtrValC{
        }
        ///Comparison x Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cpr{}; 
        namespace CprValC{
        }
        ///Comparison x Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> cprcnt{}; 
        namespace CprcntValC{
        }
        ///Comparison x Update Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> cupr{}; 
        namespace CuprValC{
        }
        ///Comparison x Update Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> cuprcnt{}; 
        namespace CuprcntValC{
        }
    }
    namespace PwmCmpmupd4{    ///<PWM Comparison 4 Mode Update Register
        using Addr = Register::Address<0x4009417c,0xfff0f00e,0,unsigned>;
        ///Comparison x Enable Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cenupd{}; 
        namespace CenupdValC{
        }
        ///Comparison x Trigger Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ctrupd{}; 
        namespace CtrupdValC{
        }
        ///Comparison x Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cprupd{}; 
        namespace CprupdValC{
        }
        ///Comparison x Update Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> cuprupd{}; 
        namespace CuprupdValC{
        }
    }
    namespace PwmCmpv5{    ///<PWM Comparison 5 Value Register
        using Addr = Register::Address<0x40094180,0xfe000000,0,unsigned>;
        ///Comparison x Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cv{}; 
        namespace CvValC{
        }
        ///Comparison x Value Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cvm{}; 
        namespace CvmValC{
        }
    }
    namespace PwmCmpvupd5{    ///<PWM Comparison 5 Value Update Register
        using Addr = Register::Address<0x40094184,0xfe000000,0,unsigned>;
        ///Comparison x Value Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cvupd{}; 
        namespace CvupdValC{
        }
        ///Comparison x Value Mode Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cvmupd{}; 
        namespace CvmupdValC{
        }
    }
    namespace PwmCmpm5{    ///<PWM Comparison 5 Mode Register
        using Addr = Register::Address<0x40094188,0xff00000e,0,unsigned>;
        ///Comparison x Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
        namespace CenValC{
        }
        ///Comparison x Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ctr{}; 
        namespace CtrValC{
        }
        ///Comparison x Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cpr{}; 
        namespace CprValC{
        }
        ///Comparison x Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> cprcnt{}; 
        namespace CprcntValC{
        }
        ///Comparison x Update Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> cupr{}; 
        namespace CuprValC{
        }
        ///Comparison x Update Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> cuprcnt{}; 
        namespace CuprcntValC{
        }
    }
    namespace PwmCmpmupd5{    ///<PWM Comparison 5 Mode Update Register
        using Addr = Register::Address<0x4009418c,0xfff0f00e,0,unsigned>;
        ///Comparison x Enable Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cenupd{}; 
        namespace CenupdValC{
        }
        ///Comparison x Trigger Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ctrupd{}; 
        namespace CtrupdValC{
        }
        ///Comparison x Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cprupd{}; 
        namespace CprupdValC{
        }
        ///Comparison x Update Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> cuprupd{}; 
        namespace CuprupdValC{
        }
    }
    namespace PwmCmpv6{    ///<PWM Comparison 6 Value Register
        using Addr = Register::Address<0x40094190,0xfe000000,0,unsigned>;
        ///Comparison x Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cv{}; 
        namespace CvValC{
        }
        ///Comparison x Value Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cvm{}; 
        namespace CvmValC{
        }
    }
    namespace PwmCmpvupd6{    ///<PWM Comparison 6 Value Update Register
        using Addr = Register::Address<0x40094194,0xfe000000,0,unsigned>;
        ///Comparison x Value Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cvupd{}; 
        namespace CvupdValC{
        }
        ///Comparison x Value Mode Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cvmupd{}; 
        namespace CvmupdValC{
        }
    }
    namespace PwmCmpm6{    ///<PWM Comparison 6 Mode Register
        using Addr = Register::Address<0x40094198,0xff00000e,0,unsigned>;
        ///Comparison x Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
        namespace CenValC{
        }
        ///Comparison x Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ctr{}; 
        namespace CtrValC{
        }
        ///Comparison x Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cpr{}; 
        namespace CprValC{
        }
        ///Comparison x Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> cprcnt{}; 
        namespace CprcntValC{
        }
        ///Comparison x Update Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> cupr{}; 
        namespace CuprValC{
        }
        ///Comparison x Update Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> cuprcnt{}; 
        namespace CuprcntValC{
        }
    }
    namespace PwmCmpmupd6{    ///<PWM Comparison 6 Mode Update Register
        using Addr = Register::Address<0x4009419c,0xfff0f00e,0,unsigned>;
        ///Comparison x Enable Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cenupd{}; 
        namespace CenupdValC{
        }
        ///Comparison x Trigger Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ctrupd{}; 
        namespace CtrupdValC{
        }
        ///Comparison x Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cprupd{}; 
        namespace CprupdValC{
        }
        ///Comparison x Update Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> cuprupd{}; 
        namespace CuprupdValC{
        }
    }
    namespace PwmCmpv7{    ///<PWM Comparison 7 Value Register
        using Addr = Register::Address<0x400941a0,0xfe000000,0,unsigned>;
        ///Comparison x Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cv{}; 
        namespace CvValC{
        }
        ///Comparison x Value Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cvm{}; 
        namespace CvmValC{
        }
    }
    namespace PwmCmpvupd7{    ///<PWM Comparison 7 Value Update Register
        using Addr = Register::Address<0x400941a4,0xfe000000,0,unsigned>;
        ///Comparison x Value Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cvupd{}; 
        namespace CvupdValC{
        }
        ///Comparison x Value Mode Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cvmupd{}; 
        namespace CvmupdValC{
        }
    }
    namespace PwmCmpm7{    ///<PWM Comparison 7 Mode Register
        using Addr = Register::Address<0x400941a8,0xff00000e,0,unsigned>;
        ///Comparison x Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
        namespace CenValC{
        }
        ///Comparison x Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ctr{}; 
        namespace CtrValC{
        }
        ///Comparison x Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cpr{}; 
        namespace CprValC{
        }
        ///Comparison x Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> cprcnt{}; 
        namespace CprcntValC{
        }
        ///Comparison x Update Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> cupr{}; 
        namespace CuprValC{
        }
        ///Comparison x Update Period Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> cuprcnt{}; 
        namespace CuprcntValC{
        }
    }
    namespace PwmCmpmupd7{    ///<PWM Comparison 7 Mode Update Register
        using Addr = Register::Address<0x400941ac,0xfff0f00e,0,unsigned>;
        ///Comparison x Enable Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cenupd{}; 
        namespace CenupdValC{
        }
        ///Comparison x Trigger Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ctrupd{}; 
        namespace CtrupdValC{
        }
        ///Comparison x Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cprupd{}; 
        namespace CprupdValC{
        }
        ///Comparison x Update Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> cuprupd{}; 
        namespace CuprupdValC{
        }
    }
    namespace PwmCmr0{    ///<PWM Channel Mode Register (ch_num = 0)
        using Addr = Register::Address<0x40094200,0xfff8f8f0,0,unsigned>;
        ///Channel Pre-scaler
        enum class CpreVal {
            mck=0x00000000,     ///<Master clock
            mckDiv2=0x00000001,     ///<Master clock/2
            mckDiv4=0x00000002,     ///<Master clock/4
            mckDiv8=0x00000003,     ///<Master clock/8
            mckDiv16=0x00000004,     ///<Master clock/16
            mckDiv32=0x00000005,     ///<Master clock/32
            mckDiv64=0x00000006,     ///<Master clock/64
            mckDiv128=0x00000007,     ///<Master clock/128
            mckDiv256=0x00000008,     ///<Master clock/256
            mckDiv512=0x00000009,     ///<Master clock/512
            mckDiv1024=0x0000000a,     ///<Master clock/1024
            clka=0x0000000b,     ///<Clock A
            clkb=0x0000000c,     ///<Clock B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,CpreVal> cpre{}; 
        namespace CpreValC{
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mck> mck{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv2> mckDiv2{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv4> mckDiv4{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv8> mckDiv8{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv16> mckDiv16{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv32> mckDiv32{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv64> mckDiv64{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv128> mckDiv128{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv256> mckDiv256{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv512> mckDiv512{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv1024> mckDiv1024{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::clka> clka{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::clkb> clkb{};
        }
        ///Channel Alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> calg{}; 
        namespace CalgValC{
        }
        ///Channel Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cpol{}; 
        namespace CpolValC{
        }
        ///Counter Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ces{}; 
        namespace CesValC{
        }
        ///Dead-Time Generator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dte{}; 
        namespace DteValC{
        }
        ///Dead-Time PWMHx Output Inverted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dthi{}; 
        namespace DthiValC{
        }
        ///Dead-Time PWMLx Output Inverted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dtli{}; 
        namespace DtliValC{
        }
    }
    namespace PwmCdty0{    ///<PWM Channel Duty Cycle Register (ch_num = 0)
        using Addr = Register::Address<0x40094204,0xff000000,0,unsigned>;
        ///Channel Duty-Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cdty{}; 
        namespace CdtyValC{
        }
    }
    namespace PwmCdtyupd0{    ///<PWM Channel Duty Cycle Update Register (ch_num = 0)
        using Addr = Register::Address<0x40094208,0xff000000,0,unsigned>;
        ///Channel Duty-Cycle Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cdtyupd{}; 
        namespace CdtyupdValC{
        }
    }
    namespace PwmCprd0{    ///<PWM Channel Period Register (ch_num = 0)
        using Addr = Register::Address<0x4009420c,0xff000000,0,unsigned>;
        ///Channel Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cprd{}; 
        namespace CprdValC{
        }
    }
    namespace PwmCprdupd0{    ///<PWM Channel Period Update Register (ch_num = 0)
        using Addr = Register::Address<0x40094210,0xff000000,0,unsigned>;
        ///Channel Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cprdupd{}; 
        namespace CprdupdValC{
        }
    }
    namespace PwmCcnt0{    ///<PWM Channel Counter Register (ch_num = 0)
        using Addr = Register::Address<0x40094214,0xff000000,0,unsigned>;
        ///Channel Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace PwmDt0{    ///<PWM Channel Dead Time Register (ch_num = 0)
        using Addr = Register::Address<0x40094218,0x00000000,0,unsigned>;
        ///Dead-Time Value for PWMHx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dth{}; 
        namespace DthValC{
        }
        ///Dead-Time Value for PWMLx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> dtl{}; 
        namespace DtlValC{
        }
    }
    namespace PwmDtupd0{    ///<PWM Channel Dead Time Update Register (ch_num = 0)
        using Addr = Register::Address<0x4009421c,0x00000000,0,unsigned>;
        ///Dead-Time Value Update for PWMHx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dthupd{}; 
        namespace DthupdValC{
        }
        ///Dead-Time Value Update for PWMLx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> dtlupd{}; 
        namespace DtlupdValC{
        }
    }
    namespace PwmCmr1{    ///<PWM Channel Mode Register (ch_num = 1)
        using Addr = Register::Address<0x40094220,0xfff8f8f0,0,unsigned>;
        ///Channel Pre-scaler
        enum class CpreVal {
            mck=0x00000000,     ///<Master clock
            mckDiv2=0x00000001,     ///<Master clock/2
            mckDiv4=0x00000002,     ///<Master clock/4
            mckDiv8=0x00000003,     ///<Master clock/8
            mckDiv16=0x00000004,     ///<Master clock/16
            mckDiv32=0x00000005,     ///<Master clock/32
            mckDiv64=0x00000006,     ///<Master clock/64
            mckDiv128=0x00000007,     ///<Master clock/128
            mckDiv256=0x00000008,     ///<Master clock/256
            mckDiv512=0x00000009,     ///<Master clock/512
            mckDiv1024=0x0000000a,     ///<Master clock/1024
            clka=0x0000000b,     ///<Clock A
            clkb=0x0000000c,     ///<Clock B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,CpreVal> cpre{}; 
        namespace CpreValC{
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mck> mck{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv2> mckDiv2{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv4> mckDiv4{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv8> mckDiv8{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv16> mckDiv16{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv32> mckDiv32{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv64> mckDiv64{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv128> mckDiv128{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv256> mckDiv256{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv512> mckDiv512{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv1024> mckDiv1024{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::clka> clka{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::clkb> clkb{};
        }
        ///Channel Alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> calg{}; 
        namespace CalgValC{
        }
        ///Channel Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cpol{}; 
        namespace CpolValC{
        }
        ///Counter Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ces{}; 
        namespace CesValC{
        }
        ///Dead-Time Generator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dte{}; 
        namespace DteValC{
        }
        ///Dead-Time PWMHx Output Inverted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dthi{}; 
        namespace DthiValC{
        }
        ///Dead-Time PWMLx Output Inverted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dtli{}; 
        namespace DtliValC{
        }
    }
    namespace PwmCdty1{    ///<PWM Channel Duty Cycle Register (ch_num = 1)
        using Addr = Register::Address<0x40094224,0xff000000,0,unsigned>;
        ///Channel Duty-Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cdty{}; 
        namespace CdtyValC{
        }
    }
    namespace PwmCdtyupd1{    ///<PWM Channel Duty Cycle Update Register (ch_num = 1)
        using Addr = Register::Address<0x40094228,0xff000000,0,unsigned>;
        ///Channel Duty-Cycle Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cdtyupd{}; 
        namespace CdtyupdValC{
        }
    }
    namespace PwmCprd1{    ///<PWM Channel Period Register (ch_num = 1)
        using Addr = Register::Address<0x4009422c,0xff000000,0,unsigned>;
        ///Channel Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cprd{}; 
        namespace CprdValC{
        }
    }
    namespace PwmCprdupd1{    ///<PWM Channel Period Update Register (ch_num = 1)
        using Addr = Register::Address<0x40094230,0xff000000,0,unsigned>;
        ///Channel Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cprdupd{}; 
        namespace CprdupdValC{
        }
    }
    namespace PwmCcnt1{    ///<PWM Channel Counter Register (ch_num = 1)
        using Addr = Register::Address<0x40094234,0xff000000,0,unsigned>;
        ///Channel Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace PwmDt1{    ///<PWM Channel Dead Time Register (ch_num = 1)
        using Addr = Register::Address<0x40094238,0x00000000,0,unsigned>;
        ///Dead-Time Value for PWMHx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dth{}; 
        namespace DthValC{
        }
        ///Dead-Time Value for PWMLx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> dtl{}; 
        namespace DtlValC{
        }
    }
    namespace PwmDtupd1{    ///<PWM Channel Dead Time Update Register (ch_num = 1)
        using Addr = Register::Address<0x4009423c,0x00000000,0,unsigned>;
        ///Dead-Time Value Update for PWMHx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dthupd{}; 
        namespace DthupdValC{
        }
        ///Dead-Time Value Update for PWMLx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> dtlupd{}; 
        namespace DtlupdValC{
        }
    }
    namespace PwmCmr2{    ///<PWM Channel Mode Register (ch_num = 2)
        using Addr = Register::Address<0x40094240,0xfff8f8f0,0,unsigned>;
        ///Channel Pre-scaler
        enum class CpreVal {
            mck=0x00000000,     ///<Master clock
            mckDiv2=0x00000001,     ///<Master clock/2
            mckDiv4=0x00000002,     ///<Master clock/4
            mckDiv8=0x00000003,     ///<Master clock/8
            mckDiv16=0x00000004,     ///<Master clock/16
            mckDiv32=0x00000005,     ///<Master clock/32
            mckDiv64=0x00000006,     ///<Master clock/64
            mckDiv128=0x00000007,     ///<Master clock/128
            mckDiv256=0x00000008,     ///<Master clock/256
            mckDiv512=0x00000009,     ///<Master clock/512
            mckDiv1024=0x0000000a,     ///<Master clock/1024
            clka=0x0000000b,     ///<Clock A
            clkb=0x0000000c,     ///<Clock B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,CpreVal> cpre{}; 
        namespace CpreValC{
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mck> mck{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv2> mckDiv2{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv4> mckDiv4{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv8> mckDiv8{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv16> mckDiv16{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv32> mckDiv32{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv64> mckDiv64{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv128> mckDiv128{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv256> mckDiv256{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv512> mckDiv512{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv1024> mckDiv1024{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::clka> clka{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::clkb> clkb{};
        }
        ///Channel Alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> calg{}; 
        namespace CalgValC{
        }
        ///Channel Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cpol{}; 
        namespace CpolValC{
        }
        ///Counter Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ces{}; 
        namespace CesValC{
        }
        ///Dead-Time Generator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dte{}; 
        namespace DteValC{
        }
        ///Dead-Time PWMHx Output Inverted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dthi{}; 
        namespace DthiValC{
        }
        ///Dead-Time PWMLx Output Inverted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dtli{}; 
        namespace DtliValC{
        }
    }
    namespace PwmCdty2{    ///<PWM Channel Duty Cycle Register (ch_num = 2)
        using Addr = Register::Address<0x40094244,0xff000000,0,unsigned>;
        ///Channel Duty-Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cdty{}; 
        namespace CdtyValC{
        }
    }
    namespace PwmCdtyupd2{    ///<PWM Channel Duty Cycle Update Register (ch_num = 2)
        using Addr = Register::Address<0x40094248,0xff000000,0,unsigned>;
        ///Channel Duty-Cycle Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cdtyupd{}; 
        namespace CdtyupdValC{
        }
    }
    namespace PwmCprd2{    ///<PWM Channel Period Register (ch_num = 2)
        using Addr = Register::Address<0x4009424c,0xff000000,0,unsigned>;
        ///Channel Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cprd{}; 
        namespace CprdValC{
        }
    }
    namespace PwmCprdupd2{    ///<PWM Channel Period Update Register (ch_num = 2)
        using Addr = Register::Address<0x40094250,0xff000000,0,unsigned>;
        ///Channel Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cprdupd{}; 
        namespace CprdupdValC{
        }
    }
    namespace PwmCcnt2{    ///<PWM Channel Counter Register (ch_num = 2)
        using Addr = Register::Address<0x40094254,0xff000000,0,unsigned>;
        ///Channel Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace PwmDt2{    ///<PWM Channel Dead Time Register (ch_num = 2)
        using Addr = Register::Address<0x40094258,0x00000000,0,unsigned>;
        ///Dead-Time Value for PWMHx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dth{}; 
        namespace DthValC{
        }
        ///Dead-Time Value for PWMLx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> dtl{}; 
        namespace DtlValC{
        }
    }
    namespace PwmDtupd2{    ///<PWM Channel Dead Time Update Register (ch_num = 2)
        using Addr = Register::Address<0x4009425c,0x00000000,0,unsigned>;
        ///Dead-Time Value Update for PWMHx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dthupd{}; 
        namespace DthupdValC{
        }
        ///Dead-Time Value Update for PWMLx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> dtlupd{}; 
        namespace DtlupdValC{
        }
    }
    namespace PwmCmr3{    ///<PWM Channel Mode Register (ch_num = 3)
        using Addr = Register::Address<0x40094260,0xfff8f8f0,0,unsigned>;
        ///Channel Pre-scaler
        enum class CpreVal {
            mck=0x00000000,     ///<Master clock
            mckDiv2=0x00000001,     ///<Master clock/2
            mckDiv4=0x00000002,     ///<Master clock/4
            mckDiv8=0x00000003,     ///<Master clock/8
            mckDiv16=0x00000004,     ///<Master clock/16
            mckDiv32=0x00000005,     ///<Master clock/32
            mckDiv64=0x00000006,     ///<Master clock/64
            mckDiv128=0x00000007,     ///<Master clock/128
            mckDiv256=0x00000008,     ///<Master clock/256
            mckDiv512=0x00000009,     ///<Master clock/512
            mckDiv1024=0x0000000a,     ///<Master clock/1024
            clka=0x0000000b,     ///<Clock A
            clkb=0x0000000c,     ///<Clock B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,CpreVal> cpre{}; 
        namespace CpreValC{
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mck> mck{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv2> mckDiv2{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv4> mckDiv4{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv8> mckDiv8{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv16> mckDiv16{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv32> mckDiv32{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv64> mckDiv64{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv128> mckDiv128{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv256> mckDiv256{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv512> mckDiv512{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv1024> mckDiv1024{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::clka> clka{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::clkb> clkb{};
        }
        ///Channel Alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> calg{}; 
        namespace CalgValC{
        }
        ///Channel Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cpol{}; 
        namespace CpolValC{
        }
        ///Counter Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ces{}; 
        namespace CesValC{
        }
        ///Dead-Time Generator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dte{}; 
        namespace DteValC{
        }
        ///Dead-Time PWMHx Output Inverted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dthi{}; 
        namespace DthiValC{
        }
        ///Dead-Time PWMLx Output Inverted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dtli{}; 
        namespace DtliValC{
        }
    }
    namespace PwmCdty3{    ///<PWM Channel Duty Cycle Register (ch_num = 3)
        using Addr = Register::Address<0x40094264,0xff000000,0,unsigned>;
        ///Channel Duty-Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cdty{}; 
        namespace CdtyValC{
        }
    }
    namespace PwmCdtyupd3{    ///<PWM Channel Duty Cycle Update Register (ch_num = 3)
        using Addr = Register::Address<0x40094268,0xff000000,0,unsigned>;
        ///Channel Duty-Cycle Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cdtyupd{}; 
        namespace CdtyupdValC{
        }
    }
    namespace PwmCprd3{    ///<PWM Channel Period Register (ch_num = 3)
        using Addr = Register::Address<0x4009426c,0xff000000,0,unsigned>;
        ///Channel Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cprd{}; 
        namespace CprdValC{
        }
    }
    namespace PwmCprdupd3{    ///<PWM Channel Period Update Register (ch_num = 3)
        using Addr = Register::Address<0x40094270,0xff000000,0,unsigned>;
        ///Channel Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cprdupd{}; 
        namespace CprdupdValC{
        }
    }
    namespace PwmCcnt3{    ///<PWM Channel Counter Register (ch_num = 3)
        using Addr = Register::Address<0x40094274,0xff000000,0,unsigned>;
        ///Channel Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace PwmDt3{    ///<PWM Channel Dead Time Register (ch_num = 3)
        using Addr = Register::Address<0x40094278,0x00000000,0,unsigned>;
        ///Dead-Time Value for PWMHx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dth{}; 
        namespace DthValC{
        }
        ///Dead-Time Value for PWMLx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> dtl{}; 
        namespace DtlValC{
        }
    }
    namespace PwmDtupd3{    ///<PWM Channel Dead Time Update Register (ch_num = 3)
        using Addr = Register::Address<0x4009427c,0x00000000,0,unsigned>;
        ///Dead-Time Value Update for PWMHx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dthupd{}; 
        namespace DthupdValC{
        }
        ///Dead-Time Value Update for PWMLx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> dtlupd{}; 
        namespace DtlupdValC{
        }
    }
    namespace PwmCmr4{    ///<PWM Channel Mode Register (ch_num = 4)
        using Addr = Register::Address<0x40094280,0xfff8f8f0,0,unsigned>;
        ///Channel Pre-scaler
        enum class CpreVal {
            mck=0x00000000,     ///<Master clock
            mckDiv2=0x00000001,     ///<Master clock/2
            mckDiv4=0x00000002,     ///<Master clock/4
            mckDiv8=0x00000003,     ///<Master clock/8
            mckDiv16=0x00000004,     ///<Master clock/16
            mckDiv32=0x00000005,     ///<Master clock/32
            mckDiv64=0x00000006,     ///<Master clock/64
            mckDiv128=0x00000007,     ///<Master clock/128
            mckDiv256=0x00000008,     ///<Master clock/256
            mckDiv512=0x00000009,     ///<Master clock/512
            mckDiv1024=0x0000000a,     ///<Master clock/1024
            clka=0x0000000b,     ///<Clock A
            clkb=0x0000000c,     ///<Clock B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,CpreVal> cpre{}; 
        namespace CpreValC{
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mck> mck{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv2> mckDiv2{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv4> mckDiv4{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv8> mckDiv8{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv16> mckDiv16{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv32> mckDiv32{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv64> mckDiv64{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv128> mckDiv128{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv256> mckDiv256{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv512> mckDiv512{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv1024> mckDiv1024{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::clka> clka{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::clkb> clkb{};
        }
        ///Channel Alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> calg{}; 
        namespace CalgValC{
        }
        ///Channel Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cpol{}; 
        namespace CpolValC{
        }
        ///Counter Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ces{}; 
        namespace CesValC{
        }
        ///Dead-Time Generator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dte{}; 
        namespace DteValC{
        }
        ///Dead-Time PWMHx Output Inverted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dthi{}; 
        namespace DthiValC{
        }
        ///Dead-Time PWMLx Output Inverted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dtli{}; 
        namespace DtliValC{
        }
    }
    namespace PwmCdty4{    ///<PWM Channel Duty Cycle Register (ch_num = 4)
        using Addr = Register::Address<0x40094284,0xff000000,0,unsigned>;
        ///Channel Duty-Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cdty{}; 
        namespace CdtyValC{
        }
    }
    namespace PwmCdtyupd4{    ///<PWM Channel Duty Cycle Update Register (ch_num = 4)
        using Addr = Register::Address<0x40094288,0xff000000,0,unsigned>;
        ///Channel Duty-Cycle Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cdtyupd{}; 
        namespace CdtyupdValC{
        }
    }
    namespace PwmCprd4{    ///<PWM Channel Period Register (ch_num = 4)
        using Addr = Register::Address<0x4009428c,0xff000000,0,unsigned>;
        ///Channel Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cprd{}; 
        namespace CprdValC{
        }
    }
    namespace PwmCprdupd4{    ///<PWM Channel Period Update Register (ch_num = 4)
        using Addr = Register::Address<0x40094290,0xff000000,0,unsigned>;
        ///Channel Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cprdupd{}; 
        namespace CprdupdValC{
        }
    }
    namespace PwmCcnt4{    ///<PWM Channel Counter Register (ch_num = 4)
        using Addr = Register::Address<0x40094294,0xff000000,0,unsigned>;
        ///Channel Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace PwmDt4{    ///<PWM Channel Dead Time Register (ch_num = 4)
        using Addr = Register::Address<0x40094298,0x00000000,0,unsigned>;
        ///Dead-Time Value for PWMHx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dth{}; 
        namespace DthValC{
        }
        ///Dead-Time Value for PWMLx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> dtl{}; 
        namespace DtlValC{
        }
    }
    namespace PwmDtupd4{    ///<PWM Channel Dead Time Update Register (ch_num = 4)
        using Addr = Register::Address<0x4009429c,0x00000000,0,unsigned>;
        ///Dead-Time Value Update for PWMHx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dthupd{}; 
        namespace DthupdValC{
        }
        ///Dead-Time Value Update for PWMLx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> dtlupd{}; 
        namespace DtlupdValC{
        }
    }
    namespace PwmCmr5{    ///<PWM Channel Mode Register (ch_num = 5)
        using Addr = Register::Address<0x400942a0,0xfff8f8f0,0,unsigned>;
        ///Channel Pre-scaler
        enum class CpreVal {
            mck=0x00000000,     ///<Master clock
            mckDiv2=0x00000001,     ///<Master clock/2
            mckDiv4=0x00000002,     ///<Master clock/4
            mckDiv8=0x00000003,     ///<Master clock/8
            mckDiv16=0x00000004,     ///<Master clock/16
            mckDiv32=0x00000005,     ///<Master clock/32
            mckDiv64=0x00000006,     ///<Master clock/64
            mckDiv128=0x00000007,     ///<Master clock/128
            mckDiv256=0x00000008,     ///<Master clock/256
            mckDiv512=0x00000009,     ///<Master clock/512
            mckDiv1024=0x0000000a,     ///<Master clock/1024
            clka=0x0000000b,     ///<Clock A
            clkb=0x0000000c,     ///<Clock B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,CpreVal> cpre{}; 
        namespace CpreValC{
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mck> mck{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv2> mckDiv2{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv4> mckDiv4{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv8> mckDiv8{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv16> mckDiv16{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv32> mckDiv32{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv64> mckDiv64{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv128> mckDiv128{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv256> mckDiv256{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv512> mckDiv512{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv1024> mckDiv1024{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::clka> clka{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::clkb> clkb{};
        }
        ///Channel Alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> calg{}; 
        namespace CalgValC{
        }
        ///Channel Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cpol{}; 
        namespace CpolValC{
        }
        ///Counter Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ces{}; 
        namespace CesValC{
        }
        ///Dead-Time Generator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dte{}; 
        namespace DteValC{
        }
        ///Dead-Time PWMHx Output Inverted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dthi{}; 
        namespace DthiValC{
        }
        ///Dead-Time PWMLx Output Inverted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dtli{}; 
        namespace DtliValC{
        }
    }
    namespace PwmCdty5{    ///<PWM Channel Duty Cycle Register (ch_num = 5)
        using Addr = Register::Address<0x400942a4,0xff000000,0,unsigned>;
        ///Channel Duty-Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cdty{}; 
        namespace CdtyValC{
        }
    }
    namespace PwmCdtyupd5{    ///<PWM Channel Duty Cycle Update Register (ch_num = 5)
        using Addr = Register::Address<0x400942a8,0xff000000,0,unsigned>;
        ///Channel Duty-Cycle Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cdtyupd{}; 
        namespace CdtyupdValC{
        }
    }
    namespace PwmCprd5{    ///<PWM Channel Period Register (ch_num = 5)
        using Addr = Register::Address<0x400942ac,0xff000000,0,unsigned>;
        ///Channel Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cprd{}; 
        namespace CprdValC{
        }
    }
    namespace PwmCprdupd5{    ///<PWM Channel Period Update Register (ch_num = 5)
        using Addr = Register::Address<0x400942b0,0xff000000,0,unsigned>;
        ///Channel Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cprdupd{}; 
        namespace CprdupdValC{
        }
    }
    namespace PwmCcnt5{    ///<PWM Channel Counter Register (ch_num = 5)
        using Addr = Register::Address<0x400942b4,0xff000000,0,unsigned>;
        ///Channel Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace PwmDt5{    ///<PWM Channel Dead Time Register (ch_num = 5)
        using Addr = Register::Address<0x400942b8,0x00000000,0,unsigned>;
        ///Dead-Time Value for PWMHx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dth{}; 
        namespace DthValC{
        }
        ///Dead-Time Value for PWMLx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> dtl{}; 
        namespace DtlValC{
        }
    }
    namespace PwmDtupd5{    ///<PWM Channel Dead Time Update Register (ch_num = 5)
        using Addr = Register::Address<0x400942bc,0x00000000,0,unsigned>;
        ///Dead-Time Value Update for PWMHx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dthupd{}; 
        namespace DthupdValC{
        }
        ///Dead-Time Value Update for PWMLx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> dtlupd{}; 
        namespace DtlupdValC{
        }
    }
    namespace PwmCmr6{    ///<PWM Channel Mode Register (ch_num = 6)
        using Addr = Register::Address<0x400942c0,0xfff8f8f0,0,unsigned>;
        ///Channel Pre-scaler
        enum class CpreVal {
            mck=0x00000000,     ///<Master clock
            mckDiv2=0x00000001,     ///<Master clock/2
            mckDiv4=0x00000002,     ///<Master clock/4
            mckDiv8=0x00000003,     ///<Master clock/8
            mckDiv16=0x00000004,     ///<Master clock/16
            mckDiv32=0x00000005,     ///<Master clock/32
            mckDiv64=0x00000006,     ///<Master clock/64
            mckDiv128=0x00000007,     ///<Master clock/128
            mckDiv256=0x00000008,     ///<Master clock/256
            mckDiv512=0x00000009,     ///<Master clock/512
            mckDiv1024=0x0000000a,     ///<Master clock/1024
            clka=0x0000000b,     ///<Clock A
            clkb=0x0000000c,     ///<Clock B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,CpreVal> cpre{}; 
        namespace CpreValC{
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mck> mck{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv2> mckDiv2{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv4> mckDiv4{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv8> mckDiv8{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv16> mckDiv16{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv32> mckDiv32{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv64> mckDiv64{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv128> mckDiv128{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv256> mckDiv256{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv512> mckDiv512{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv1024> mckDiv1024{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::clka> clka{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::clkb> clkb{};
        }
        ///Channel Alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> calg{}; 
        namespace CalgValC{
        }
        ///Channel Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cpol{}; 
        namespace CpolValC{
        }
        ///Counter Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ces{}; 
        namespace CesValC{
        }
        ///Dead-Time Generator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dte{}; 
        namespace DteValC{
        }
        ///Dead-Time PWMHx Output Inverted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dthi{}; 
        namespace DthiValC{
        }
        ///Dead-Time PWMLx Output Inverted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dtli{}; 
        namespace DtliValC{
        }
    }
    namespace PwmCdty6{    ///<PWM Channel Duty Cycle Register (ch_num = 6)
        using Addr = Register::Address<0x400942c4,0xff000000,0,unsigned>;
        ///Channel Duty-Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cdty{}; 
        namespace CdtyValC{
        }
    }
    namespace PwmCdtyupd6{    ///<PWM Channel Duty Cycle Update Register (ch_num = 6)
        using Addr = Register::Address<0x400942c8,0xff000000,0,unsigned>;
        ///Channel Duty-Cycle Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cdtyupd{}; 
        namespace CdtyupdValC{
        }
    }
    namespace PwmCprd6{    ///<PWM Channel Period Register (ch_num = 6)
        using Addr = Register::Address<0x400942cc,0xff000000,0,unsigned>;
        ///Channel Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cprd{}; 
        namespace CprdValC{
        }
    }
    namespace PwmCprdupd6{    ///<PWM Channel Period Update Register (ch_num = 6)
        using Addr = Register::Address<0x400942d0,0xff000000,0,unsigned>;
        ///Channel Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cprdupd{}; 
        namespace CprdupdValC{
        }
    }
    namespace PwmCcnt6{    ///<PWM Channel Counter Register (ch_num = 6)
        using Addr = Register::Address<0x400942d4,0xff000000,0,unsigned>;
        ///Channel Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace PwmDt6{    ///<PWM Channel Dead Time Register (ch_num = 6)
        using Addr = Register::Address<0x400942d8,0x00000000,0,unsigned>;
        ///Dead-Time Value for PWMHx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dth{}; 
        namespace DthValC{
        }
        ///Dead-Time Value for PWMLx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> dtl{}; 
        namespace DtlValC{
        }
    }
    namespace PwmDtupd6{    ///<PWM Channel Dead Time Update Register (ch_num = 6)
        using Addr = Register::Address<0x400942dc,0x00000000,0,unsigned>;
        ///Dead-Time Value Update for PWMHx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dthupd{}; 
        namespace DthupdValC{
        }
        ///Dead-Time Value Update for PWMLx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> dtlupd{}; 
        namespace DtlupdValC{
        }
    }
    namespace PwmCmr7{    ///<PWM Channel Mode Register (ch_num = 7)
        using Addr = Register::Address<0x400942e0,0xfff8f8f0,0,unsigned>;
        ///Channel Pre-scaler
        enum class CpreVal {
            mck=0x00000000,     ///<Master clock
            mckDiv2=0x00000001,     ///<Master clock/2
            mckDiv4=0x00000002,     ///<Master clock/4
            mckDiv8=0x00000003,     ///<Master clock/8
            mckDiv16=0x00000004,     ///<Master clock/16
            mckDiv32=0x00000005,     ///<Master clock/32
            mckDiv64=0x00000006,     ///<Master clock/64
            mckDiv128=0x00000007,     ///<Master clock/128
            mckDiv256=0x00000008,     ///<Master clock/256
            mckDiv512=0x00000009,     ///<Master clock/512
            mckDiv1024=0x0000000a,     ///<Master clock/1024
            clka=0x0000000b,     ///<Clock A
            clkb=0x0000000c,     ///<Clock B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,CpreVal> cpre{}; 
        namespace CpreValC{
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mck> mck{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv2> mckDiv2{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv4> mckDiv4{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv8> mckDiv8{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv16> mckDiv16{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv32> mckDiv32{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv64> mckDiv64{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv128> mckDiv128{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv256> mckDiv256{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv512> mckDiv512{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::mckDiv1024> mckDiv1024{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::clka> clka{};
            constexpr Register::FieldValue<decltype(cpre),CpreVal::clkb> clkb{};
        }
        ///Channel Alignment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> calg{}; 
        namespace CalgValC{
        }
        ///Channel Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cpol{}; 
        namespace CpolValC{
        }
        ///Counter Event Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ces{}; 
        namespace CesValC{
        }
        ///Dead-Time Generator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dte{}; 
        namespace DteValC{
        }
        ///Dead-Time PWMHx Output Inverted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dthi{}; 
        namespace DthiValC{
        }
        ///Dead-Time PWMLx Output Inverted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dtli{}; 
        namespace DtliValC{
        }
    }
    namespace PwmCdty7{    ///<PWM Channel Duty Cycle Register (ch_num = 7)
        using Addr = Register::Address<0x400942e4,0xff000000,0,unsigned>;
        ///Channel Duty-Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cdty{}; 
        namespace CdtyValC{
        }
    }
    namespace PwmCdtyupd7{    ///<PWM Channel Duty Cycle Update Register (ch_num = 7)
        using Addr = Register::Address<0x400942e8,0xff000000,0,unsigned>;
        ///Channel Duty-Cycle Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cdtyupd{}; 
        namespace CdtyupdValC{
        }
    }
    namespace PwmCprd7{    ///<PWM Channel Period Register (ch_num = 7)
        using Addr = Register::Address<0x400942ec,0xff000000,0,unsigned>;
        ///Channel Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cprd{}; 
        namespace CprdValC{
        }
    }
    namespace PwmCprdupd7{    ///<PWM Channel Period Update Register (ch_num = 7)
        using Addr = Register::Address<0x400942f0,0xff000000,0,unsigned>;
        ///Channel Period Update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cprdupd{}; 
        namespace CprdupdValC{
        }
    }
    namespace PwmCcnt7{    ///<PWM Channel Counter Register (ch_num = 7)
        using Addr = Register::Address<0x400942f4,0xff000000,0,unsigned>;
        ///Channel Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace PwmDt7{    ///<PWM Channel Dead Time Register (ch_num = 7)
        using Addr = Register::Address<0x400942f8,0x00000000,0,unsigned>;
        ///Dead-Time Value for PWMHx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dth{}; 
        namespace DthValC{
        }
        ///Dead-Time Value for PWMLx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> dtl{}; 
        namespace DtlValC{
        }
    }
    namespace PwmDtupd7{    ///<PWM Channel Dead Time Update Register (ch_num = 7)
        using Addr = Register::Address<0x400942fc,0x00000000,0,unsigned>;
        ///Dead-Time Value Update for PWMHx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dthupd{}; 
        namespace DthupdValC{
        }
        ///Dead-Time Value Update for PWMLx Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> dtlupd{}; 
        namespace DtlupdValC{
        }
    }
    namespace PwmTpr{    ///<Transmit Pointer Register
        using Addr = Register::Address<0x40094108,0x00000000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txptr{}; 
        namespace TxptrValC{
        }
    }
    namespace PwmTcr{    ///<Transmit Counter Register
        using Addr = Register::Address<0x4009410c,0xffff0000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txctr{}; 
        namespace TxctrValC{
        }
    }
    namespace PwmTnpr{    ///<Transmit Next Pointer Register
        using Addr = Register::Address<0x40094118,0x00000000,0,unsigned>;
        ///Transmit Next Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txnptr{}; 
        namespace TxnptrValC{
        }
    }
    namespace PwmTncr{    ///<Transmit Next Counter Register
        using Addr = Register::Address<0x4009411c,0xffff0000,0,unsigned>;
        ///Transmit Counter Next
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txnctr{}; 
        namespace TxnctrValC{
        }
    }
    namespace PwmPtcr{    ///<Transfer Control Register
        using Addr = Register::Address<0x40094120,0xfffffcfc,0,unsigned>;
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
    namespace PwmPtsr{    ///<Transfer Status Register
        using Addr = Register::Address<0x40094124,0xfffffefe,0,unsigned>;
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
