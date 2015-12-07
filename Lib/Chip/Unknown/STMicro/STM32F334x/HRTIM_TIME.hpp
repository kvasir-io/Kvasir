#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//High Resolution Timer: TIME
    namespace Nonetimecr{    ///<Timerx Control Register
        using Addr = Register::Address<0x40017680,0x00090380,0,unsigned>;
        ///Update Gating
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> updgat{}; 
        namespace UpdgatValC{
        }
        ///Preload enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> preen{}; 
        namespace PreenValC{
        }
        ///AC Synchronization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,25),Register::ReadWriteAccess,unsigned> dacsync{}; 
        namespace DacsyncValC{
        }
        ///Master Timer update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mstu{}; 
        namespace MstuValC{
        }
        ///TEU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> teu{}; 
        namespace TeuValC{
        }
        ///TDU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> tdu{}; 
        namespace TduValC{
        }
        ///TCU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tcu{}; 
        namespace TcuValC{
        }
        ///TBU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tbu{}; 
        namespace TbuValC{
        }
        ///Timerx reset update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> txrstu{}; 
        namespace TxrstuValC{
        }
        ///Timer x Repetition update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txrepu{}; 
        namespace TxrepuValC{
        }
        ///Delayed CMP4 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> delcmp4{}; 
        namespace Delcmp4ValC{
        }
        ///Delayed CMP2 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> delcmp2{}; 
        namespace Delcmp2ValC{
        }
        ///Synchronization Starts Timer
              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> syncstrtx{}; 
        namespace SyncstrtxValC{
        }
        ///Synchronization Resets Timer
              x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> syncrstx{}; 
        namespace SyncrstxValC{
        }
        ///Push-Pull mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pshpll{}; 
        namespace PshpllValC{
        }
        ///Half mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> half{}; 
        namespace HalfValC{
        }
        ///Re-triggerable mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> retrig{}; 
        namespace RetrigValC{
        }
        ///Continuous mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cont{}; 
        namespace ContValC{
        }
        ///HRTIM Timer x Clock
              prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ckPscx{}; 
        namespace CkpscxValC{
        }
    }
    namespace Nonetimeisr{    ///<Timerx Interrupt Status
          Register
        using Addr = Register::Address<0x40017684,0xfff08020,0,unsigned>;
        ///Output 2 State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> o2stat{}; 
        namespace O2statValC{
        }
        ///Output 1 State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> o1stat{}; 
        namespace O1statValC{
        }
        ///Idle Push Pull Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ippstat{}; 
        namespace IppstatValC{
        }
        ///Current Push Pull Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cppstat{}; 
        namespace CppstatValC{
        }
        ///Delayed Protection Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dlyprt{}; 
        namespace DlyprtValC{
        }
        ///Reset Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rst{}; 
        namespace RstValC{
        }
        ///Output 2 Reset Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rstx2{}; 
        namespace Rstx2ValC{
        }
        ///Output 2 Set Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setx2{}; 
        namespace Setx2ValC{
        }
        ///Output 1 Reset Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rstx1{}; 
        namespace Rstx1ValC{
        }
        ///Output 1 Set Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setx1{}; 
        namespace Setx1ValC{
        }
        ///Capture2 Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cpt2{}; 
        namespace Cpt2ValC{
        }
        ///Capture1 Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cpt1{}; 
        namespace Cpt1ValC{
        }
        ///Update Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> upd{}; 
        namespace UpdValC{
        }
        ///Repetition Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rep{}; 
        namespace RepValC{
        }
        ///Compare 4 Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmp4{}; 
        namespace Cmp4ValC{
        }
        ///Compare 3 Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cmp3{}; 
        namespace Cmp3ValC{
        }
        ///Compare 2 Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmp2{}; 
        namespace Cmp2ValC{
        }
        ///Compare 1 Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmp1{}; 
        namespace Cmp1ValC{
        }
    }
    namespace Nonetimeicr{    ///<Timerx Interrupt Clear
          Register
        using Addr = Register::Address<0x40017688,0xffff8020,0,unsigned>;
        ///Delayed Protection Flag
              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dlyprtc{}; 
        namespace DlyprtcValC{
        }
        ///Reset Interrupt flag Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rstc{}; 
        namespace RstcValC{
        }
        ///Output 2 Reset flag Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rstx2c{}; 
        namespace Rstx2cValC{
        }
        ///Output 2 Set flag Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> set2xc{}; 
        namespace Set2xcValC{
        }
        ///Output 1 Reset flag Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rstx1c{}; 
        namespace Rstx1cValC{
        }
        ///Output 1 Set flag Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> set1xc{}; 
        namespace Set1xcValC{
        }
        ///Capture2 Interrupt flag
              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cpt2c{}; 
        namespace Cpt2cValC{
        }
        ///Capture1 Interrupt flag
              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cpt1c{}; 
        namespace Cpt1cValC{
        }
        ///Update Interrupt flag
              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> updc{}; 
        namespace UpdcValC{
        }
        ///Repetition Interrupt flag
              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> repc{}; 
        namespace RepcValC{
        }
        ///Compare 4 Interrupt flag
              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmp4c{}; 
        namespace Cmp4cValC{
        }
        ///Compare 3 Interrupt flag
              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cmp3c{}; 
        namespace Cmp3cValC{
        }
        ///Compare 2 Interrupt flag
              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmp2c{}; 
        namespace Cmp2cValC{
        }
        ///Compare 1 Interrupt flag
              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmp1c{}; 
        namespace Cmp1cValC{
        }
    }
    namespace Nonetimedier5{    ///<TIMxDIER5
        using Addr = Register::Address<0x4001768c,0x80208020,0,unsigned>;
        ///DLYPRTDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dlyprtde{}; 
        namespace DlyprtdeValC{
        }
        ///RSTDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> rstde{}; 
        namespace RstdeValC{
        }
        ///RSTx2DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> rstx2de{}; 
        namespace Rstx2deValC{
        }
        ///SETx2DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> setx2de{}; 
        namespace Setx2deValC{
        }
        ///RSTx1DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> rstx1de{}; 
        namespace Rstx1deValC{
        }
        ///SET1xDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> set1xde{}; 
        namespace Set1xdeValC{
        }
        ///CPT2DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cpt2de{}; 
        namespace Cpt2deValC{
        }
        ///CPT1DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cpt1de{}; 
        namespace Cpt1deValC{
        }
        ///UPDDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> updde{}; 
        namespace UpddeValC{
        }
        ///REPDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> repde{}; 
        namespace RepdeValC{
        }
        ///CMP4DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cmp4de{}; 
        namespace Cmp4deValC{
        }
        ///CMP3DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cmp3de{}; 
        namespace Cmp3deValC{
        }
        ///CMP2DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cmp2de{}; 
        namespace Cmp2deValC{
        }
        ///CMP1DE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cmp1de{}; 
        namespace Cmp1deValC{
        }
        ///DLYPRTIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dlyprtie{}; 
        namespace DlyprtieValC{
        }
        ///RSTIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rstie{}; 
        namespace RstieValC{
        }
        ///RSTx2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rstx2ie{}; 
        namespace Rstx2ieValC{
        }
        ///SETx2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setx2ie{}; 
        namespace Setx2ieValC{
        }
        ///RSTx1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rstx1ie{}; 
        namespace Rstx1ieValC{
        }
        ///SET1xIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> set1xie{}; 
        namespace Set1xieValC{
        }
        ///CPT2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cpt2ie{}; 
        namespace Cpt2ieValC{
        }
        ///CPT1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cpt1ie{}; 
        namespace Cpt1ieValC{
        }
        ///UPDIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> updie{}; 
        namespace UpdieValC{
        }
        ///REPIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> repie{}; 
        namespace RepieValC{
        }
        ///CMP4IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmp4ie{}; 
        namespace Cmp4ieValC{
        }
        ///CMP3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cmp3ie{}; 
        namespace Cmp3ieValC{
        }
        ///CMP2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmp2ie{}; 
        namespace Cmp2ieValC{
        }
        ///CMP1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmp1ie{}; 
        namespace Cmp1ieValC{
        }
    }
    namespace Nonecnter{    ///<Timerx Counter Register
        using Addr = Register::Address<0x40017690,0xffff0000,0,unsigned>;
        ///Timerx Counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cntx{}; 
        namespace CntxValC{
        }
    }
    namespace Noneperer{    ///<Timerx Period Register
        using Addr = Register::Address<0x40017694,0xffff0000,0,unsigned>;
        ///Timerx Period value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> perx{}; 
        namespace PerxValC{
        }
    }
    namespace Nonereper{    ///<Timerx Repetition Register
        using Addr = Register::Address<0x40017698,0xffffff00,0,unsigned>;
        ///Timerx Repetition counter
              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> repx{}; 
        namespace RepxValC{
        }
    }
    namespace Nonecmp1er{    ///<Timerx Compare 1 Register
        using Addr = Register::Address<0x4001769c,0xffff0000,0,unsigned>;
        ///Timerx Compare 1 value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmp1x{}; 
        namespace Cmp1xValC{
        }
    }
    namespace Nonecmp1cer{    ///<Timerx Compare 1 Compound
          Register
        using Addr = Register::Address<0x400176a0,0xff000000,0,unsigned>;
        ///Timerx Repetition value (aliased from
              HRTIM_REPx register)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> repx{}; 
        namespace RepxValC{
        }
        ///Timerx Compare 1 value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmp1x{}; 
        namespace Cmp1xValC{
        }
    }
    namespace Nonecmp2er{    ///<Timerx Compare 2 Register
        using Addr = Register::Address<0x400176a4,0xffff0000,0,unsigned>;
        ///Timerx Compare 2 value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmp2x{}; 
        namespace Cmp2xValC{
        }
    }
    namespace Nonecmp3er{    ///<Timerx Compare 3 Register
        using Addr = Register::Address<0x400176a8,0xffff0000,0,unsigned>;
        ///Timerx Compare 3 value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmp3x{}; 
        namespace Cmp3xValC{
        }
    }
    namespace Nonecmp4er{    ///<Timerx Compare 4 Register
        using Addr = Register::Address<0x400176ac,0xffff0000,0,unsigned>;
        ///Timerx Compare 4 value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmp4x{}; 
        namespace Cmp4xValC{
        }
    }
    namespace Nonecpt1er{    ///<Timerx Capture 1 Register
        using Addr = Register::Address<0x400176b0,0xffff0000,0,unsigned>;
        ///Timerx Capture 1 value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cpt1x{}; 
        namespace Cpt1xValC{
        }
    }
    namespace Nonecpt2er{    ///<Timerx Capture 2 Register
        using Addr = Register::Address<0x400176b4,0xffff0000,0,unsigned>;
        ///Timerx Capture 2 value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cpt2x{}; 
        namespace Cpt2xValC{
        }
    }
    namespace Nonedter{    ///<Timerx Deadtime Register
        using Addr = Register::Address<0x400176b8,0x3c002000,0,unsigned>;
        ///Deadtime Falling Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dtflkx{}; 
        namespace DtflkxValC{
        }
        ///Deadtime Falling Sign Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dtfslkx{}; 
        namespace DtfslkxValC{
        }
        ///Sign Deadtime Falling
              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> sdtfx{}; 
        namespace SdtfxValC{
        }
        ///Deadtime Falling value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,16),Register::ReadWriteAccess,unsigned> dtfx{}; 
        namespace DtfxValC{
        }
        ///Deadtime Rising Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dtrlkx{}; 
        namespace DtrlkxValC{
        }
        ///Deadtime Rising Sign Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtrslkx{}; 
        namespace DtrslkxValC{
        }
        ///Deadtime Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,unsigned> dtprsc{}; 
        namespace DtprscValC{
        }
        ///Sign Deadtime Rising value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sdtrx{}; 
        namespace SdtrxValC{
        }
        ///Deadtime Rising value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> dtrx{}; 
        namespace DtrxValC{
        }
    }
    namespace Nonesete1r{    ///<Timerx Output1 Set Register
        using Addr = Register::Address<0x400176bc,0x00000000,0,unsigned>;
        ///Registers update (transfer preload to
              active)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> update{}; 
        namespace UpdateValC{
        }
        ///External Event 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> extevnt10{}; 
        namespace Extevnt10ValC{
        }
        ///External Event 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> extevnt9{}; 
        namespace Extevnt9ValC{
        }
        ///External Event 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> extevnt8{}; 
        namespace Extevnt8ValC{
        }
        ///External Event 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> extevnt7{}; 
        namespace Extevnt7ValC{
        }
        ///External Event 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> extevnt6{}; 
        namespace Extevnt6ValC{
        }
        ///External Event 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> extevnt5{}; 
        namespace Extevnt5ValC{
        }
        ///External Event 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> extevnt4{}; 
        namespace Extevnt4ValC{
        }
        ///External Event 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> extevnt3{}; 
        namespace Extevnt3ValC{
        }
        ///External Event 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> extevnt2{}; 
        namespace Extevnt2ValC{
        }
        ///External Event 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> extevnt1{}; 
        namespace Extevnt1ValC{
        }
        ///Timer Event 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> timevnt9{}; 
        namespace Timevnt9ValC{
        }
        ///Timer Event 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> timevnt8{}; 
        namespace Timevnt8ValC{
        }
        ///Timer Event 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> timevnt7{}; 
        namespace Timevnt7ValC{
        }
        ///Timer Event 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> timevnt6{}; 
        namespace Timevnt6ValC{
        }
        ///Timer Event 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> timevnt5{}; 
        namespace Timevnt5ValC{
        }
        ///Timer Event 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> timevnt4{}; 
        namespace Timevnt4ValC{
        }
        ///Timer Event 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> timevnt3{}; 
        namespace Timevnt3ValC{
        }
        ///Timer Event 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> timevnt2{}; 
        namespace Timevnt2ValC{
        }
        ///Timer Event 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> timevnt1{}; 
        namespace Timevnt1ValC{
        }
        ///Master Compare 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mstcmp4{}; 
        namespace Mstcmp4ValC{
        }
        ///Master Compare 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mstcmp3{}; 
        namespace Mstcmp3ValC{
        }
        ///Master Compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mstcmp2{}; 
        namespace Mstcmp2ValC{
        }
        ///Master Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mstcmp1{}; 
        namespace Mstcmp1ValC{
        }
        ///Master Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mstper{}; 
        namespace MstperValC{
        }
        ///Timer A compare 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmp4{}; 
        namespace Cmp4ValC{
        }
        ///Timer A compare 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmp3{}; 
        namespace Cmp3ValC{
        }
        ///Timer A compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cmp2{}; 
        namespace Cmp2ValC{
        }
        ///Timer A compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmp1{}; 
        namespace Cmp1ValC{
        }
        ///Timer A Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> per{}; 
        namespace PerValC{
        }
        ///Timer A resynchronizaton
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> resync{}; 
        namespace ResyncValC{
        }
        ///Software Set trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sst{}; 
        namespace SstValC{
        }
    }
    namespace Nonerste1r{    ///<Timerx Output1 Reset Register
        using Addr = Register::Address<0x400176c0,0x00000000,0,unsigned>;
        ///UPDATE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> update{}; 
        namespace UpdateValC{
        }
        ///EXTEVNT10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> extevnt10{}; 
        namespace Extevnt10ValC{
        }
        ///EXTEVNT9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> extevnt9{}; 
        namespace Extevnt9ValC{
        }
        ///EXTEVNT8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> extevnt8{}; 
        namespace Extevnt8ValC{
        }
        ///EXTEVNT7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> extevnt7{}; 
        namespace Extevnt7ValC{
        }
        ///EXTEVNT6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> extevnt6{}; 
        namespace Extevnt6ValC{
        }
        ///EXTEVNT5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> extevnt5{}; 
        namespace Extevnt5ValC{
        }
        ///EXTEVNT4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> extevnt4{}; 
        namespace Extevnt4ValC{
        }
        ///EXTEVNT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> extevnt3{}; 
        namespace Extevnt3ValC{
        }
        ///EXTEVNT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> extevnt2{}; 
        namespace Extevnt2ValC{
        }
        ///EXTEVNT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> extevnt1{}; 
        namespace Extevnt1ValC{
        }
        ///TIMEVNT9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> timevnt9{}; 
        namespace Timevnt9ValC{
        }
        ///TIMEVNT8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> timevnt8{}; 
        namespace Timevnt8ValC{
        }
        ///TIMEVNT7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> timevnt7{}; 
        namespace Timevnt7ValC{
        }
        ///TIMEVNT6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> timevnt6{}; 
        namespace Timevnt6ValC{
        }
        ///TIMEVNT5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> timevnt5{}; 
        namespace Timevnt5ValC{
        }
        ///TIMEVNT4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> timevnt4{}; 
        namespace Timevnt4ValC{
        }
        ///TIMEVNT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> timevnt3{}; 
        namespace Timevnt3ValC{
        }
        ///TIMEVNT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> timevnt2{}; 
        namespace Timevnt2ValC{
        }
        ///TIMEVNT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> timevnt1{}; 
        namespace Timevnt1ValC{
        }
        ///MSTCMP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mstcmp4{}; 
        namespace Mstcmp4ValC{
        }
        ///MSTCMP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mstcmp3{}; 
        namespace Mstcmp3ValC{
        }
        ///MSTCMP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mstcmp2{}; 
        namespace Mstcmp2ValC{
        }
        ///MSTCMP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mstcmp1{}; 
        namespace Mstcmp1ValC{
        }
        ///MSTPER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mstper{}; 
        namespace MstperValC{
        }
        ///CMP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmp4{}; 
        namespace Cmp4ValC{
        }
        ///CMP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmp3{}; 
        namespace Cmp3ValC{
        }
        ///CMP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cmp2{}; 
        namespace Cmp2ValC{
        }
        ///CMP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmp1{}; 
        namespace Cmp1ValC{
        }
        ///PER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> per{}; 
        namespace PerValC{
        }
        ///RESYNC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> resync{}; 
        namespace ResyncValC{
        }
        ///SRT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> srt{}; 
        namespace SrtValC{
        }
    }
    namespace Nonesete2r{    ///<Timerx Output2 Set Register
        using Addr = Register::Address<0x400176c4,0x00000000,0,unsigned>;
        ///UPDATE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> update{}; 
        namespace UpdateValC{
        }
        ///EXTEVNT10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> extevnt10{}; 
        namespace Extevnt10ValC{
        }
        ///EXTEVNT9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> extevnt9{}; 
        namespace Extevnt9ValC{
        }
        ///EXTEVNT8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> extevnt8{}; 
        namespace Extevnt8ValC{
        }
        ///EXTEVNT7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> extevnt7{}; 
        namespace Extevnt7ValC{
        }
        ///EXTEVNT6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> extevnt6{}; 
        namespace Extevnt6ValC{
        }
        ///EXTEVNT5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> extevnt5{}; 
        namespace Extevnt5ValC{
        }
        ///EXTEVNT4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> extevnt4{}; 
        namespace Extevnt4ValC{
        }
        ///EXTEVNT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> extevnt3{}; 
        namespace Extevnt3ValC{
        }
        ///EXTEVNT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> extevnt2{}; 
        namespace Extevnt2ValC{
        }
        ///EXTEVNT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> extevnt1{}; 
        namespace Extevnt1ValC{
        }
        ///TIMEVNT9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> timevnt9{}; 
        namespace Timevnt9ValC{
        }
        ///TIMEVNT8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> timevnt8{}; 
        namespace Timevnt8ValC{
        }
        ///TIMEVNT7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> timevnt7{}; 
        namespace Timevnt7ValC{
        }
        ///TIMEVNT6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> timevnt6{}; 
        namespace Timevnt6ValC{
        }
        ///TIMEVNT5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> timevnt5{}; 
        namespace Timevnt5ValC{
        }
        ///TIMEVNT4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> timevnt4{}; 
        namespace Timevnt4ValC{
        }
        ///TIMEVNT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> timevnt3{}; 
        namespace Timevnt3ValC{
        }
        ///TIMEVNT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> timevnt2{}; 
        namespace Timevnt2ValC{
        }
        ///TIMEVNT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> timevnt1{}; 
        namespace Timevnt1ValC{
        }
        ///MSTCMP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mstcmp4{}; 
        namespace Mstcmp4ValC{
        }
        ///MSTCMP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mstcmp3{}; 
        namespace Mstcmp3ValC{
        }
        ///MSTCMP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mstcmp2{}; 
        namespace Mstcmp2ValC{
        }
        ///MSTCMP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mstcmp1{}; 
        namespace Mstcmp1ValC{
        }
        ///MSTPER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mstper{}; 
        namespace MstperValC{
        }
        ///CMP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmp4{}; 
        namespace Cmp4ValC{
        }
        ///CMP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmp3{}; 
        namespace Cmp3ValC{
        }
        ///CMP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cmp2{}; 
        namespace Cmp2ValC{
        }
        ///CMP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmp1{}; 
        namespace Cmp1ValC{
        }
        ///PER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> per{}; 
        namespace PerValC{
        }
        ///RESYNC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> resync{}; 
        namespace ResyncValC{
        }
        ///SST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sst{}; 
        namespace SstValC{
        }
    }
    namespace Nonerste2r{    ///<Timerx Output2 Reset Register
        using Addr = Register::Address<0x400176c8,0x00000000,0,unsigned>;
        ///UPDATE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> update{}; 
        namespace UpdateValC{
        }
        ///EXTEVNT10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> extevnt10{}; 
        namespace Extevnt10ValC{
        }
        ///EXTEVNT9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> extevnt9{}; 
        namespace Extevnt9ValC{
        }
        ///EXTEVNT8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> extevnt8{}; 
        namespace Extevnt8ValC{
        }
        ///EXTEVNT7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> extevnt7{}; 
        namespace Extevnt7ValC{
        }
        ///EXTEVNT6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> extevnt6{}; 
        namespace Extevnt6ValC{
        }
        ///EXTEVNT5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> extevnt5{}; 
        namespace Extevnt5ValC{
        }
        ///EXTEVNT4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> extevnt4{}; 
        namespace Extevnt4ValC{
        }
        ///EXTEVNT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> extevnt3{}; 
        namespace Extevnt3ValC{
        }
        ///EXTEVNT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> extevnt2{}; 
        namespace Extevnt2ValC{
        }
        ///EXTEVNT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> extevnt1{}; 
        namespace Extevnt1ValC{
        }
        ///TIMEVNT9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> timevnt9{}; 
        namespace Timevnt9ValC{
        }
        ///TIMEVNT8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> timevnt8{}; 
        namespace Timevnt8ValC{
        }
        ///TIMEVNT7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> timevnt7{}; 
        namespace Timevnt7ValC{
        }
        ///TIMEVNT6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> timevnt6{}; 
        namespace Timevnt6ValC{
        }
        ///TIMEVNT5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> timevnt5{}; 
        namespace Timevnt5ValC{
        }
        ///TIMEVNT4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> timevnt4{}; 
        namespace Timevnt4ValC{
        }
        ///TIMEVNT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> timevnt3{}; 
        namespace Timevnt3ValC{
        }
        ///TIMEVNT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> timevnt2{}; 
        namespace Timevnt2ValC{
        }
        ///TIMEVNT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> timevnt1{}; 
        namespace Timevnt1ValC{
        }
        ///MSTCMP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mstcmp4{}; 
        namespace Mstcmp4ValC{
        }
        ///MSTCMP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mstcmp3{}; 
        namespace Mstcmp3ValC{
        }
        ///MSTCMP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mstcmp2{}; 
        namespace Mstcmp2ValC{
        }
        ///MSTCMP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mstcmp1{}; 
        namespace Mstcmp1ValC{
        }
        ///MSTPER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mstper{}; 
        namespace MstperValC{
        }
        ///CMP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmp4{}; 
        namespace Cmp4ValC{
        }
        ///CMP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmp3{}; 
        namespace Cmp3ValC{
        }
        ///CMP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cmp2{}; 
        namespace Cmp2ValC{
        }
        ///CMP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmp1{}; 
        namespace Cmp1ValC{
        }
        ///PER
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> per{}; 
        namespace PerValC{
        }
        ///RESYNC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> resync{}; 
        namespace ResyncValC{
        }
        ///SRT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> srt{}; 
        namespace SrtValC{
        }
    }
    namespace Noneeefer1{    ///<Timerx External Event Filtering Register
          1
        using Addr = Register::Address<0x400176cc,0xe0820820,0,unsigned>;
        ///External Event 5 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,25),Register::ReadWriteAccess,unsigned> ee5fltr{}; 
        namespace Ee5fltrValC{
        }
        ///External Event 5 latch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ee5ltch{}; 
        namespace Ee5ltchValC{
        }
        ///External Event 4 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,19),Register::ReadWriteAccess,unsigned> ee4fltr{}; 
        namespace Ee4fltrValC{
        }
        ///External Event 4 latch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ee4ltch{}; 
        namespace Ee4ltchValC{
        }
        ///External Event 3 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,13),Register::ReadWriteAccess,unsigned> ee3fltr{}; 
        namespace Ee3fltrValC{
        }
        ///External Event 3 latch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ee3ltch{}; 
        namespace Ee3ltchValC{
        }
        ///External Event 2 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,7),Register::ReadWriteAccess,unsigned> ee2fltr{}; 
        namespace Ee2fltrValC{
        }
        ///External Event 2 latch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ee2ltch{}; 
        namespace Ee2ltchValC{
        }
        ///External Event 1 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> ee1fltr{}; 
        namespace Ee1fltrValC{
        }
        ///External Event 1 latch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ee1ltch{}; 
        namespace Ee1ltchValC{
        }
    }
    namespace Noneeefer2{    ///<Timerx External Event Filtering Register
          2
        using Addr = Register::Address<0x400176d0,0xe0820820,0,unsigned>;
        ///External Event 10 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,25),Register::ReadWriteAccess,unsigned> ee10fltr{}; 
        namespace Ee10fltrValC{
        }
        ///External Event 10 latch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ee10ltch{}; 
        namespace Ee10ltchValC{
        }
        ///External Event 9 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,19),Register::ReadWriteAccess,unsigned> ee9fltr{}; 
        namespace Ee9fltrValC{
        }
        ///External Event 9 latch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ee9ltch{}; 
        namespace Ee9ltchValC{
        }
        ///External Event 8 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,13),Register::ReadWriteAccess,unsigned> ee8fltr{}; 
        namespace Ee8fltrValC{
        }
        ///External Event 8 latch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ee8ltch{}; 
        namespace Ee8ltchValC{
        }
        ///External Event 7 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,7),Register::ReadWriteAccess,unsigned> ee7fltr{}; 
        namespace Ee7fltrValC{
        }
        ///External Event 7 latch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ee7ltch{}; 
        namespace Ee7ltchValC{
        }
        ///External Event 6 filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> ee6fltr{}; 
        namespace Ee6fltrValC{
        }
        ///External Event 6 latch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ee6ltch{}; 
        namespace Ee6ltchValC{
        }
    }
    namespace Nonerster{    ///<TimerA Reset Register
        using Addr = Register::Address<0x400176d4,0x80000001,0,unsigned>;
        ///Timer D Compare 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> timdcmp4{}; 
        namespace Timdcmp4ValC{
        }
        ///Timer D Compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> timdcmp2{}; 
        namespace Timdcmp2ValC{
        }
        ///Timer D Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> timdcmp1{}; 
        namespace Timdcmp1ValC{
        }
        ///Timer C Compare 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> timccmp4{}; 
        namespace Timccmp4ValC{
        }
        ///Timer C Compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> timccmp2{}; 
        namespace Timccmp2ValC{
        }
        ///Timer C Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> timccmp1{}; 
        namespace Timccmp1ValC{
        }
        ///Timer B Compare 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> timbcmp4{}; 
        namespace Timbcmp4ValC{
        }
        ///Timer B Compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> timbcmp2{}; 
        namespace Timbcmp2ValC{
        }
        ///Timer B Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> timbcmp1{}; 
        namespace Timbcmp1ValC{
        }
        ///Timer A Compare 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> timacmp4{}; 
        namespace Timacmp4ValC{
        }
        ///Timer A Compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> timacmp2{}; 
        namespace Timacmp2ValC{
        }
        ///Timer A Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> timacmp1{}; 
        namespace Timacmp1ValC{
        }
        ///External Event 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> extevnt10{}; 
        namespace Extevnt10ValC{
        }
        ///External Event 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> extevnt9{}; 
        namespace Extevnt9ValC{
        }
        ///External Event 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> extevnt8{}; 
        namespace Extevnt8ValC{
        }
        ///External Event 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> extevnt7{}; 
        namespace Extevnt7ValC{
        }
        ///External Event 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extevnt6{}; 
        namespace Extevnt6ValC{
        }
        ///External Event 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> extevnt5{}; 
        namespace Extevnt5ValC{
        }
        ///External Event 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> extevnt4{}; 
        namespace Extevnt4ValC{
        }
        ///External Event 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> extevnt3{}; 
        namespace Extevnt3ValC{
        }
        ///External Event 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> extevnt2{}; 
        namespace Extevnt2ValC{
        }
        ///External Event 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> extevnt1{}; 
        namespace Extevnt1ValC{
        }
        ///Master compare 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mstcmp4{}; 
        namespace Mstcmp4ValC{
        }
        ///Master compare 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mstcmp3{}; 
        namespace Mstcmp3ValC{
        }
        ///Master compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mstcmp2{}; 
        namespace Mstcmp2ValC{
        }
        ///Master compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mstcmp1{}; 
        namespace Mstcmp1ValC{
        }
        ///Master timer Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mstper{}; 
        namespace MstperValC{
        }
        ///Timer A compare 4 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmp4{}; 
        namespace Cmp4ValC{
        }
        ///Timer A compare 2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cmp2{}; 
        namespace Cmp2ValC{
        }
        ///Timer A Update reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> updt{}; 
        namespace UpdtValC{
        }
    }
    namespace Nonechper{    ///<Timerx Chopper Register
        using Addr = Register::Address<0x400176d8,0xfffff800,0,unsigned>;
        ///STRTPW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,7),Register::ReadWriteAccess,unsigned> strtpw{}; 
        namespace StrtpwValC{
        }
        ///Timerx chopper duty cycle
              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> chpdty{}; 
        namespace ChpdtyValC{
        }
        ///Timerx carrier frequency
              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chpfrq{}; 
        namespace ChpfrqValC{
        }
    }
    namespace Nonecpt1ecr{    ///<Timerx Capture 2 Control
          Register
        using Addr = Register::Address<0x400176dc,0xf0000000,0,unsigned>;
        ///Timer D Compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> tdcmp2{}; 
        namespace Tdcmp2ValC{
        }
        ///Timer D Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> tdcmp1{}; 
        namespace Tdcmp1ValC{
        }
        ///Timer D output 1 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> td1rst{}; 
        namespace Td1rstValC{
        }
        ///Timer D output 1 Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> td1set{}; 
        namespace Td1setValC{
        }
        ///Timer C Compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tccmp2{}; 
        namespace Tccmp2ValC{
        }
        ///Timer C Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> tccmp1{}; 
        namespace Tccmp1ValC{
        }
        ///Timer C output 1 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tc1rst{}; 
        namespace Tc1rstValC{
        }
        ///Timer C output 1 Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tc1set{}; 
        namespace Tc1setValC{
        }
        ///Timer B Compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tbcmp2{}; 
        namespace Tbcmp2ValC{
        }
        ///Timer B Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tbcmp1{}; 
        namespace Tbcmp1ValC{
        }
        ///Timer B output 1 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tb1rst{}; 
        namespace Tb1rstValC{
        }
        ///Timer B output 1 Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tb1set{}; 
        namespace Tb1setValC{
        }
        ///Timer A Compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tacmp2{}; 
        namespace Tacmp2ValC{
        }
        ///Timer A Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tacmp1{}; 
        namespace Tacmp1ValC{
        }
        ///Timer A output 1 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ta1rst{}; 
        namespace Ta1rstValC{
        }
        ///Timer A output 1 Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ta1set{}; 
        namespace Ta1setValC{
        }
        ///External Event 10 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> exev10cpt{}; 
        namespace Exev10cptValC{
        }
        ///External Event 9 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> exev9cpt{}; 
        namespace Exev9cptValC{
        }
        ///External Event 8 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> exev8cpt{}; 
        namespace Exev8cptValC{
        }
        ///External Event 7 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> exev7cpt{}; 
        namespace Exev7cptValC{
        }
        ///External Event 6 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> exev6cpt{}; 
        namespace Exev6cptValC{
        }
        ///External Event 5 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> exev5cpt{}; 
        namespace Exev5cptValC{
        }
        ///External Event 4 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> exev4cpt{}; 
        namespace Exev4cptValC{
        }
        ///External Event 3 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> exev3cpt{}; 
        namespace Exev3cptValC{
        }
        ///External Event 2 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> exev2cpt{}; 
        namespace Exev2cptValC{
        }
        ///External Event 1 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> exev1cpt{}; 
        namespace Exev1cptValC{
        }
        ///Update Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> udpcpt{}; 
        namespace UdpcptValC{
        }
        ///Software Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swcpt{}; 
        namespace SwcptValC{
        }
    }
    namespace Nonecpt2ecr{    ///<CPT2xCR
        using Addr = Register::Address<0x400176e0,0xf0000000,0,unsigned>;
        ///Timer D Compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> tdcmp2{}; 
        namespace Tdcmp2ValC{
        }
        ///Timer D Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> tdcmp1{}; 
        namespace Tdcmp1ValC{
        }
        ///Timer D output 1 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> td1rst{}; 
        namespace Td1rstValC{
        }
        ///Timer D output 1 Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> td1set{}; 
        namespace Td1setValC{
        }
        ///Timer C Compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tccmp2{}; 
        namespace Tccmp2ValC{
        }
        ///Timer C Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> tccmp1{}; 
        namespace Tccmp1ValC{
        }
        ///Timer C output 1 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tc1rst{}; 
        namespace Tc1rstValC{
        }
        ///Timer C output 1 Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tc1set{}; 
        namespace Tc1setValC{
        }
        ///Timer B Compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tbcmp2{}; 
        namespace Tbcmp2ValC{
        }
        ///Timer B Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tbcmp1{}; 
        namespace Tbcmp1ValC{
        }
        ///Timer B output 1 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tb1rst{}; 
        namespace Tb1rstValC{
        }
        ///Timer B output 1 Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tb1set{}; 
        namespace Tb1setValC{
        }
        ///Timer A Compare 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tacmp2{}; 
        namespace Tacmp2ValC{
        }
        ///Timer A Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tacmp1{}; 
        namespace Tacmp1ValC{
        }
        ///Timer A output 1 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ta1rst{}; 
        namespace Ta1rstValC{
        }
        ///Timer A output 1 Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ta1set{}; 
        namespace Ta1setValC{
        }
        ///External Event 10 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> exev10cpt{}; 
        namespace Exev10cptValC{
        }
        ///External Event 9 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> exev9cpt{}; 
        namespace Exev9cptValC{
        }
        ///External Event 8 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> exev8cpt{}; 
        namespace Exev8cptValC{
        }
        ///External Event 7 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> exev7cpt{}; 
        namespace Exev7cptValC{
        }
        ///External Event 6 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> exev6cpt{}; 
        namespace Exev6cptValC{
        }
        ///External Event 5 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> exev5cpt{}; 
        namespace Exev5cptValC{
        }
        ///External Event 4 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> exev4cpt{}; 
        namespace Exev4cptValC{
        }
        ///External Event 3 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> exev3cpt{}; 
        namespace Exev3cptValC{
        }
        ///External Event 2 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> exev2cpt{}; 
        namespace Exev2cptValC{
        }
        ///External Event 1 Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> exev1cpt{}; 
        namespace Exev1cptValC{
        }
        ///Update Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> udpcpt{}; 
        namespace UdpcptValC{
        }
        ///Software Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swcpt{}; 
        namespace SwcptValC{
        }
    }
    namespace Noneouter{    ///<Timerx Output Register
        using Addr = Register::Address<0x400176e4,0xff01e001,0,unsigned>;
        ///Output 2 Deadtime upon burst mode Idle
              entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> didl2{}; 
        namespace Didl2ValC{
        }
        ///Output 2 Chopper enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> chp2{}; 
        namespace Chp2ValC{
        }
        ///Output 2 Fault state
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> fault2{}; 
        namespace Fault2ValC{
        }
        ///Output 2 Idle State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> idles2{}; 
        namespace Idles2ValC{
        }
        ///Output 2 Idle mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> idlem2{}; 
        namespace Idlem2ValC{
        }
        ///Output 2 polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pol2{}; 
        namespace Pol2ValC{
        }
        ///Delayed Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,unsigned> dlyprt{}; 
        namespace DlyprtValC{
        }
        ///Delayed Protection Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dlyprten{}; 
        namespace DlyprtenValC{
        }
        ///Deadtime enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dten{}; 
        namespace DtenValC{
        }
        ///Output 1 Deadtime upon burst mode Idle
              entry
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> didl1{}; 
        namespace Didl1ValC{
        }
        ///Output 1 Chopper enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chp1{}; 
        namespace Chp1ValC{
        }
        ///Output 1 Fault state
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> fault1{}; 
        namespace Fault1ValC{
        }
        ///Output 1 Idle State
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> idles1{}; 
        namespace Idles1ValC{
        }
        ///Output 1 Idle mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> idlem1{}; 
        namespace Idlem1ValC{
        }
        ///Output 1 polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pol1{}; 
        namespace Pol1ValC{
        }
    }
    namespace Noneflter{    ///<Timerx Fault Register
        using Addr = Register::Address<0x400176e8,0x7fffffe0,0,unsigned>;
        ///Fault sources Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> fltlck{}; 
        namespace FltlckValC{
        }
        ///Fault 5 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flt5en{}; 
        namespace Flt5enValC{
        }
        ///Fault 4 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> flt4en{}; 
        namespace Flt4enValC{
        }
        ///Fault 3 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> flt3en{}; 
        namespace Flt3enValC{
        }
        ///Fault 2 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> flt2en{}; 
        namespace Flt2enValC{
        }
        ///Fault 1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> flt1en{}; 
        namespace Flt1enValC{
        }
    }
}
