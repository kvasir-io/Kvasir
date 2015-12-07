#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Quadrature Encoder Interface (QEI)  
    namespace Nonecon{    ///<Control register
        using Addr = Register::Address<0x400bc000,0xfffffff0,0,unsigned>;
        ///Reset position counter. When set = 1, resets the position counter to all zeros. Autoclears when the position counter is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> resp{}; 
        namespace RespValC{
        }
        ///Reset position counter on index. When set = 1, resets the position counter to all zeros once only the first time an index pulse occurs. Autoclears when the position counter is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> respi{}; 
        namespace RespiValC{
        }
        ///Reset velocity. When set = 1, resets the velocity counter to all zeros, reloads the velocity timer, and presets the velocity compare register. Autoclears when the velocity counter is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> resv{}; 
        namespace ResvValC{
        }
        ///Reset index counter. When set = 1, resets the index counter to all zeros. Autoclears when the index counter is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> resi{}; 
        namespace ResiValC{
        }
    }
    namespace Noneconf{    ///<Configuration register
        using Addr = Register::Address<0x400bc008,0xfff0ffe0,0,unsigned>;
        ///Direction invert. When 1, complements the DIR bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dirinv{}; 
        namespace DirinvValC{
        }
        ///Signal Mode. When 0, PhA and PhB function as quadrature encoder inputs. When 1, PhA functions as the direction signal and PhB functions as the clock signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sigmode{}; 
        namespace SigmodeValC{
        }
        ///Capture Mode. When 0, only PhA edges are counted (2X). When 1, BOTH PhA and PhB edges are counted (4X), increasing resolution but decreasing range.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> capmode{}; 
        namespace CapmodeValC{
        }
        ///Invert Index. When 1, inverts the sense of the index input.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> invinx{}; 
        namespace InvinxValC{
        }
        ///Continuously reset the position counter on index. When 1, resets the position counter to all zeros whenever an index pulse occurs after the next position increase (recalibration).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crespi{}; 
        namespace CrespiValC{
        }
        ///Index gating configuration: When INXGATE[16] = 1, pass the index when PHA = 1 and PHB = 0, otherwise block index. When INXGATE[17] = 1, pass the index when PHA = 1 and PHB = 1, otherwise block index. When INXGATE[18] = 1, pass the index when PHA = 0 and PHB = 1, otherwise block index. When INXGATE[19] = 1, pass the index when PHA = 0 and PHB = 0, otherwise block index.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> inxgate{}; 
        namespace InxgateValC{
        }
    }
    namespace Nonestat{    ///<Status register
        using Addr = Register::Address<0x400bc004,0xfffffffe,0,unsigned>;
        ///Direction bit. In combination with DIRINV bit indicates forward or reverse direction. See Table 597.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
    }
    namespace Nonepos{    ///<Position register
        using Addr = Register::Address<0x400bc00c,0x00000000,0,unsigned>;
        ///Current position value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pos{}; 
        namespace PosValC{
        }
    }
    namespace Nonemaxpos{    ///<Maximum position register
        using Addr = Register::Address<0x400bc010,0x00000000,0,unsigned>;
        ///Current maximum position value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> maxpos{}; 
        namespace MaxposValC{
        }
    }
    namespace Nonecmpos0{    ///<Position compare register 0
        using Addr = Register::Address<0x400bc014,0x00000000,0,unsigned>;
        ///Position compare value 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pcmp0{}; 
        namespace Pcmp0ValC{
        }
    }
    namespace Nonecmpos1{    ///<Position compare register 1
        using Addr = Register::Address<0x400bc018,0x00000000,0,unsigned>;
        ///Position compare value 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pcmp1{}; 
        namespace Pcmp1ValC{
        }
    }
    namespace Nonecmpos2{    ///<Position compare register 2
        using Addr = Register::Address<0x400bc01c,0x00000000,0,unsigned>;
        ///Position compare value 2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pcmp2{}; 
        namespace Pcmp2ValC{
        }
    }
    namespace Noneinxcnt{    ///<Index count register 0
        using Addr = Register::Address<0x400bc020,0x00000000,0,unsigned>;
        ///Current index counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> encpos{}; 
        namespace EncposValC{
        }
    }
    namespace Noneinxcmp0{    ///<Index compare register 0
        using Addr = Register::Address<0x400bc024,0x00000000,0,unsigned>;
        ///Index compare value 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> icmp0{}; 
        namespace Icmp0ValC{
        }
    }
    namespace Noneload{    ///<Velocity timer reload register
        using Addr = Register::Address<0x400bc028,0x00000000,0,unsigned>;
        ///Current velocity timer load value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> velload{}; 
        namespace VelloadValC{
        }
    }
    namespace Nonetime{    ///<Velocity timer register
        using Addr = Register::Address<0x400bc02c,0x00000000,0,unsigned>;
        ///Current velocity timer value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> velval{}; 
        namespace VelvalValC{
        }
    }
    namespace Nonevel{    ///<Velocity counter register
        using Addr = Register::Address<0x400bc030,0x00000000,0,unsigned>;
        ///Current velocity pulse count.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> velpc{}; 
        namespace VelpcValC{
        }
    }
    namespace Nonecap{    ///<Velocity capture register
        using Addr = Register::Address<0x400bc034,0x00000000,0,unsigned>;
        ///Last velocity capture.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> velcap{}; 
        namespace VelcapValC{
        }
    }
    namespace Nonevelcomp{    ///<Velocity compare register
        using Addr = Register::Address<0x400bc038,0x00000000,0,unsigned>;
        ///Compare velocity pulse count.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> velpc{}; 
        namespace VelpcValC{
        }
    }
    namespace Nonefilterpha{    ///<Digital filter register on PHA
        using Addr = Register::Address<0x400bc03c,0x00000000,0,unsigned>;
        ///Digital filter sampling delay for PhA.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> filta{}; 
        namespace FiltaValC{
        }
    }
    namespace Nonefilterphb{    ///<Digital filter register on PHB
        using Addr = Register::Address<0x400bc040,0x00000000,0,unsigned>;
        ///Digital filter sampling delay for PhB.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> filtb{}; 
        namespace FiltbValC{
        }
    }
    namespace Nonefilterinx{    ///<Digital filter register on IDX
        using Addr = Register::Address<0x400bc044,0x00000000,0,unsigned>;
        ///Digital filter sampling delay for the index.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fitlinx{}; 
        namespace FitlinxValC{
        }
    }
    namespace Nonewindow{    ///<Index acceptance window register
        using Addr = Register::Address<0x400bc048,0x00000000,0,unsigned>;
        ///Index acceptance window width.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> window{}; 
        namespace WindowValC{
        }
    }
    namespace Noneinxcmp1{    ///<Index compare register 1
        using Addr = Register::Address<0x400bc04c,0x00000000,0,unsigned>;
        ///Index compare value 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> icmp1{}; 
        namespace Icmp1ValC{
        }
    }
    namespace Noneinxcmp2{    ///<Index compare register 2
        using Addr = Register::Address<0x400bc050,0x00000000,0,unsigned>;
        ///Index compare value 2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> icmp2{}; 
        namespace Icmp2ValC{
        }
    }
    namespace Noneintstat{    ///<Interrupt status register
        using Addr = Register::Address<0x400bcfe0,0xffff0000,0,unsigned>;
        ///Indicates that an index pulse was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inxInt{}; 
        namespace InxintValC{
        }
        ///Indicates that a velocity timer overflow occurred
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> timInt{}; 
        namespace TimintValC{
        }
        ///Indicates that captured velocity is less than compare velocity.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> velcInt{}; 
        namespace VelcintValC{
        }
        ///Indicates that a change of direction was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirInt{}; 
        namespace DirintValC{
        }
        ///Indicates that an encoder phase error was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> errInt{}; 
        namespace ErrintValC{
        }
        ///Indicates that and encoder clock pulse was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> enclkInt{}; 
        namespace EnclkintValC{
        }
        ///Indicates that the position 0 compare value is equal to the current position.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pos0Int{}; 
        namespace Pos0intValC{
        }
        ///Indicates that the position 1compare value is equal to the current position.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pos1Int{}; 
        namespace Pos1intValC{
        }
        ///Indicates that the position 2 compare value is equal to the current position.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pos2Int{}; 
        namespace Pos2intValC{
        }
        ///Indicates that the index compare 0 value is equal to the current index count.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rev0Int{}; 
        namespace Rev0intValC{
        }
        ///Combined position 0 and revolution count interrupt. Set when both the POS0_Int bit is set and the REV0_Int is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pos0revInt{}; 
        namespace Pos0revintValC{
        }
        ///Combined position 1 and revolution count interrupt. Set when both the POS1_Int bit is set and the REV1_Int is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pos1revInt{}; 
        namespace Pos1revintValC{
        }
        ///Combined position 2 and revolution count interrupt. Set when both the POS2_Int bit is set and the REV2_Int is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pos2revInt{}; 
        namespace Pos2revintValC{
        }
        ///Indicates that the index compare 1value is equal to the current index count.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rev1Int{}; 
        namespace Rev1intValC{
        }
        ///Indicates that the index compare 2 value is equal to the current index count.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rev2Int{}; 
        namespace Rev2intValC{
        }
        ///Indicates that the current position count goes through the MAXPOS value to zero in the forward direction, or through zero to MAXPOS in the reverse direction.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maxposInt{}; 
        namespace MaxposintValC{
        }
    }
    namespace Noneset{    ///<Interrupt status set register
        using Addr = Register::Address<0x400bcfec,0xffff0000,0,unsigned>;
        ///Writing a 1 sets the INX_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inxInt{}; 
        namespace InxintValC{
        }
        ///Writing a 1 sets the TIN_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> timInt{}; 
        namespace TimintValC{
        }
        ///Writing a 1 sets the VELC_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> velcInt{}; 
        namespace VelcintValC{
        }
        ///Writing a 1 sets the DIR_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirInt{}; 
        namespace DirintValC{
        }
        ///Writing a 1 sets the ERR_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> errInt{}; 
        namespace ErrintValC{
        }
        ///Writing a 1 sets the ENCLK_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> enclkInt{}; 
        namespace EnclkintValC{
        }
        ///Writing a 1 sets the POS0_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pos0Int{}; 
        namespace Pos0intValC{
        }
        ///Writing a 1 sets the POS1_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pos1Int{}; 
        namespace Pos1intValC{
        }
        ///Writing a 1 sets the POS2_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pos2Int{}; 
        namespace Pos2intValC{
        }
        ///Writing a 1 sets the REV0_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rev0Int{}; 
        namespace Rev0intValC{
        }
        ///Writing a 1 sets the POS0REV_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pos0revInt{}; 
        namespace Pos0revintValC{
        }
        ///Writing a 1 sets the POS1REV_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pos1revInt{}; 
        namespace Pos1revintValC{
        }
        ///Writing a 1 sets the POS2REV_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pos2revInt{}; 
        namespace Pos2revintValC{
        }
        ///Writing a 1 sets the REV1_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rev1Int{}; 
        namespace Rev1intValC{
        }
        ///Writing a 1 sets the REV2_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rev2Int{}; 
        namespace Rev2intValC{
        }
        ///Writing a 1 sets the MAXPOS_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maxposInt{}; 
        namespace MaxposintValC{
        }
    }
    namespace Noneclr{    ///<Interrupt status clear register
        using Addr = Register::Address<0x400bcfe8,0xffff0000,0,unsigned>;
        ///Writing a 1 clears the INX_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inxInt{}; 
        namespace InxintValC{
        }
        ///Writing a 1 clears the TIN_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> timInt{}; 
        namespace TimintValC{
        }
        ///Writing a 1 clears the VELC_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> velcInt{}; 
        namespace VelcintValC{
        }
        ///Writing a 1 clears the DIR_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirInt{}; 
        namespace DirintValC{
        }
        ///Writing a 1 clears the ERR_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> errInt{}; 
        namespace ErrintValC{
        }
        ///Writing a 1 clears the ENCLK_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> enclkInt{}; 
        namespace EnclkintValC{
        }
        ///Writing a 1 clears the POS0_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pos0Int{}; 
        namespace Pos0intValC{
        }
        ///Writing a 1 clears the POS1_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pos1Int{}; 
        namespace Pos1intValC{
        }
        ///Writing a 1 clears the POS2_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pos2Int{}; 
        namespace Pos2intValC{
        }
        ///Writing a 1 clears the REV0_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rev0Int{}; 
        namespace Rev0intValC{
        }
        ///Writing a 1 clears the POS0REV_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pos0revInt{}; 
        namespace Pos0revintValC{
        }
        ///Writing a 1 clears the POS1REV_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pos1revInt{}; 
        namespace Pos1revintValC{
        }
        ///Writing a 1 clears the POS2REV_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pos2revInt{}; 
        namespace Pos2revintValC{
        }
        ///Writing a 1 clears the REV1_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rev1Int{}; 
        namespace Rev1intValC{
        }
        ///Writing a 1 clears the REV2_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rev2Int{}; 
        namespace Rev2intValC{
        }
        ///Writing a 1 clears the MAXPOS_Int bit in QEIINTSTAT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maxposInt{}; 
        namespace MaxposintValC{
        }
    }
    namespace Noneie{    ///<Interrupt enable register
        using Addr = Register::Address<0x400bcfe4,0xffff0000,0,unsigned>;
        ///When 1, the INX_Int interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inxInt{}; 
        namespace InxintValC{
        }
        ///When 1, the TIN_Int interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> timInt{}; 
        namespace TimintValC{
        }
        ///When 1, the VELC_Int interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> velcInt{}; 
        namespace VelcintValC{
        }
        ///When 1, the DIR_Int interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirInt{}; 
        namespace DirintValC{
        }
        ///When 1, the ERR_Int interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> errInt{}; 
        namespace ErrintValC{
        }
        ///When 1, the ENCLK_Int interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> enclkInt{}; 
        namespace EnclkintValC{
        }
        ///When 1, the POS0_Int interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pos0Int{}; 
        namespace Pos0intValC{
        }
        ///When 1, the POS1_Int interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pos1Int{}; 
        namespace Pos1intValC{
        }
        ///When 1, the POS2_Int interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pos2Int{}; 
        namespace Pos2intValC{
        }
        ///When 1, the REV0_Int interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rev0Int{}; 
        namespace Rev0intValC{
        }
        ///When 1, the POS0REV_Int interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pos0revInt{}; 
        namespace Pos0revintValC{
        }
        ///When 1, the POS1REV_Int interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pos1revInt{}; 
        namespace Pos1revintValC{
        }
        ///When 1, the POS2REV_Int interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pos2revInt{}; 
        namespace Pos2revintValC{
        }
        ///When 1, the REV1_Int interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rev1Int{}; 
        namespace Rev1intValC{
        }
        ///When 1, the REV2_Int interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rev2Int{}; 
        namespace Rev2intValC{
        }
        ///When 1, the MAXPOS_Int interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maxposInt{}; 
        namespace MaxposintValC{
        }
    }
    namespace Noneies{    ///<Interrupt enable set register
        using Addr = Register::Address<0x400bcfdc,0xffff0000,0,unsigned>;
        ///Writing a 1 enables the INX_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inxInt{}; 
        namespace InxintValC{
        }
        ///Writing a 1 enables the TIN_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> timInt{}; 
        namespace TimintValC{
        }
        ///Writing a 1 enables the VELC_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> velcInt{}; 
        namespace VelcintValC{
        }
        ///Writing a 1 enables the DIR_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirInt{}; 
        namespace DirintValC{
        }
        ///Writing a 1 enables the ERR_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> errInt{}; 
        namespace ErrintValC{
        }
        ///Writing a 1 enables the ENCLK_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> enclkInt{}; 
        namespace EnclkintValC{
        }
        ///Writing a 1 enables the POS0_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pos0Int{}; 
        namespace Pos0intValC{
        }
        ///Writing a 1 enables the POS1_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pos1Int{}; 
        namespace Pos1intValC{
        }
        ///Writing a 1 enables the POS2_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pos2Int{}; 
        namespace Pos2intValC{
        }
        ///Writing a 1 enables the REV0_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rev0Int{}; 
        namespace Rev0intValC{
        }
        ///Writing a 1 enables the POS0REV_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pos0revInt{}; 
        namespace Pos0revintValC{
        }
        ///Writing a 1 enables the POS1REV_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pos1revInt{}; 
        namespace Pos1revintValC{
        }
        ///Writing a 1 enables the POS2REV_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pos2revInt{}; 
        namespace Pos2revintValC{
        }
        ///Writing a 1 enables the REV1_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rev1Int{}; 
        namespace Rev1intValC{
        }
        ///Writing a 1 enables the REV2_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rev2Int{}; 
        namespace Rev2intValC{
        }
        ///Writing a 1 enables the MAXPOS_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maxposInt{}; 
        namespace MaxposintValC{
        }
    }
    namespace Noneiec{    ///<Interrupt enable clear register
        using Addr = Register::Address<0x400bcfd8,0xffff0000,0,unsigned>;
        ///Writing a 1 disables the INX_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inxInt{}; 
        namespace InxintValC{
        }
        ///Writing a 1 disables the TIN_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> timInt{}; 
        namespace TimintValC{
        }
        ///Writing a 1 disables the VELC_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> velcInt{}; 
        namespace VelcintValC{
        }
        ///Writing a 1 disables the DIR_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirInt{}; 
        namespace DirintValC{
        }
        ///Writing a 1 disables the ERR_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> errInt{}; 
        namespace ErrintValC{
        }
        ///Writing a 1 disables the ENCLK_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> enclkInt{}; 
        namespace EnclkintValC{
        }
        ///Writing a 1 disables the POS0_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pos0Int{}; 
        namespace Pos0intValC{
        }
        ///Writing a 1 disables the POS1_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pos1Int{}; 
        namespace Pos1intValC{
        }
        ///Writing a 1 disables the POS2_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pos2Int{}; 
        namespace Pos2intValC{
        }
        ///Writing a 1 disables the REV0_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rev0Int{}; 
        namespace Rev0intValC{
        }
        ///Writing a 1 disables the POS0REV_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pos0revInt{}; 
        namespace Pos0revintValC{
        }
        ///Writing a 1 disables the POS1REV_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pos1revInt{}; 
        namespace Pos1revintValC{
        }
        ///Writing a 1 disables the POS2REV_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pos2revInt{}; 
        namespace Pos2revintValC{
        }
        ///Writing a 1 disables the REV1_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rev1Int{}; 
        namespace Rev1intValC{
        }
        ///Writing a 1 disables the REV2_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rev2Int{}; 
        namespace Rev2intValC{
        }
        ///Writing a 1 disables the MAXPOS_Int interrupt in the QEIIE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maxposInt{}; 
        namespace MaxposintValC{
        }
    }
}
