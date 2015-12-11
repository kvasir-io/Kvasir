#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// Quadrature Encoder Interface (QEI) 
    namespace Nonecon{    ///<Control register
        using Addr = Register::Address<0x40058000,0xfffffff0,0,unsigned>;
        ///Reset position counter. When set = 1, resets the position counter to all zeros. Autoclears when the position counter is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> resp{}; 
        ///Reset position counter on index. When set = 1, resets the position counter to all zeros when an index pulse occurs. Autoclears when the position counter is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> respi{}; 
        ///Reset velocity. When set = 1, resets the velocity counter to all zeros and reloads the velocity timer. Autoclears when the velocity counter is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> resv{}; 
        ///Reset index counter. When set = 1, resets the index counter to all zeros. Autoclears when the index counter is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> resi{}; 
    }
    namespace Nonestat{    ///<Encoder status register
        using Addr = Register::Address<0x40058004,0xfffffffe,0,unsigned>;
        ///Direction bit. In combination with DIRINV bit indicates forward or reverse direction. See Table 284.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dir{}; 
    }
    namespace Noneconf{    ///<Configuration register
        using Addr = Register::Address<0x40058008,0xfff0ffe0,0,unsigned>;
        ///Direction invert. When = 1, complements the DIR bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dirinv{}; 
        ///Signal Mode. When = 0, PhA and PhB function as quadrature encoder inputs. When = 1, PhA functions as the direction signal and PhB functions as the clock signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sigmode{}; 
        ///Capture Mode. When = 0, only PhA edges are counted (2X). When = 1, BOTH PhA and PhB edges are counted (4X), increasing resolution but decreasing range.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> capmode{}; 
        ///Invert Index. When set, inverts the sense of the index input.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> invinx{}; 
        ///Continuously reset position counter on index. When set = 1, resets the position counter to all zeros when an index pulse occurs at the next position increase (recalibration). Auto-clears when the position counter is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crespi{}; 
        ///Index gating configuration: when INXGATE(19)=1, pass the index when Pha=0 and Phb=0, else block. when INXGATE(18)=1, pass the index when Pha=0 and Phb=1, else block. when INXGATE(17)=1, pass the index when Pha=1 and Phb=1, else block. when INXGATE(16)=1, pass the index when Pha=1 and Phb=0, else block.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> inxgate{}; 
    }
    namespace Nonepos{    ///<Position register
        using Addr = Register::Address<0x4005800c,0x00000000,0,unsigned>;
        ///Current position value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pos{}; 
    }
    namespace Nonemaxpos{    ///<Maximum position register
        using Addr = Register::Address<0x40058010,0x00000000,0,unsigned>;
        ///Maximum position value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> maxpos{}; 
    }
    namespace Nonecmpos0{    ///<position compare register 0
        using Addr = Register::Address<0x40058014,0x00000000,0,unsigned>;
        ///Position compare value 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pcmp0{}; 
    }
    namespace Nonecmpos1{    ///<position compare register 1
        using Addr = Register::Address<0x40058018,0x00000000,0,unsigned>;
        ///Position compare value 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pcmp1{}; 
    }
    namespace Nonecmpos2{    ///<position compare register 2
        using Addr = Register::Address<0x4005801c,0x00000000,0,unsigned>;
        ///Position compare value 2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pcmp2{}; 
    }
    namespace Noneinxcnt{    ///<Index count register
        using Addr = Register::Address<0x40058020,0x00000000,0,unsigned>;
        ///Current encoder position value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> encpos{}; 
    }
    namespace Noneinxcmp0{    ///<Index compare register 0
        using Addr = Register::Address<0x40058024,0x00000000,0,unsigned>;
        ///Index compare value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> icmp0{}; 
    }
    namespace Noneload{    ///<Velocity timer reload register
        using Addr = Register::Address<0x40058028,0x00000000,0,unsigned>;
        ///Current velocity timer pre-load value.The velocity timer counts down from this value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> velload{}; 
    }
    namespace Nonetime{    ///<Velocity timer register
        using Addr = Register::Address<0x4005802c,0x00000000,0,unsigned>;
        ///Current velocity timer value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> velval{}; 
    }
    namespace Nonevel{    ///<Velocity counter register
        using Addr = Register::Address<0x40058030,0x00000000,0,unsigned>;
        ///Current velocity pulse count.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> velpc{}; 
    }
    namespace Nonecap{    ///<Velocity capture register
        using Addr = Register::Address<0x40058034,0x00000000,0,unsigned>;
        ///Velocity capture value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> velcap{}; 
    }
    namespace Nonevelcomp{    ///<Velocity compare register
        using Addr = Register::Address<0x40058038,0x00000000,0,unsigned>;
        ///Velocity compare value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> velcmp{}; 
    }
    namespace Nonefilterpha{    ///<Digital filter register on input phase A (QEI_A)
        using Addr = Register::Address<0x4005803c,0x00000000,0,unsigned>;
        ///Digital filter sampling delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> filta{}; 
    }
    namespace Nonefilterphb{    ///<Digital filter register on input phase B (QEI_B)
        using Addr = Register::Address<0x40058040,0x00000000,0,unsigned>;
        ///Digital filter sampling delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> filtb{}; 
    }
    namespace Nonefilterinx{    ///<Digital filter register on input index (QEI_IDX)
        using Addr = Register::Address<0x40058044,0x00000000,0,unsigned>;
        ///Digital filter sampling delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fitlinx{}; 
    }
    namespace Nonewindow{    ///<Index acceptance window register
        using Addr = Register::Address<0x40058048,0x00000000,0,unsigned>;
        ///Index acceptance window width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> window{}; 
    }
    namespace Noneinxcmp1{    ///<Index compare register 1
        using Addr = Register::Address<0x4005804c,0x00000000,0,unsigned>;
        ///Index compare value 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> icmp1{}; 
    }
    namespace Noneinxcmp2{    ///<Index compare register 2
        using Addr = Register::Address<0x40058050,0x00000000,0,unsigned>;
        ///Index compare value 2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> icmp2{}; 
    }
    namespace Noneiec{    ///<Interrupt enable clear register
        using Addr = Register::Address<0x40058fd8,0xffff0000,0,unsigned>;
        ///Indicates that an index pulse was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inxEn{}; 
        ///Indicates that a velocity timer overflow occurred
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> timEn{}; 
        ///Indicates that captured velocity is less than compare velocity.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> velcEn{}; 
        ///Indicates that a change of direction was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirEn{}; 
        ///Indicates that an encoder phase error was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> errEn{}; 
        ///Indicates that and encoder clock pulse was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> enclkEn{}; 
        ///Indicates that the position 0 compare value is equal to the current position.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pos0Int{}; 
        ///Indicates that the position 1compare value is equal to the current position.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pos1Int{}; 
        ///Indicates that the position 2 compare value is equal to the current position.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pos2Int{}; 
        ///Indicates that the index 0 compare value is equal to the current index count.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rev0Int{}; 
        ///Combined position 0 and revolution count interrupt. Set when both the POS0_INT bit is set and the REV0_Int is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pos0revInt{}; 
        ///Combined position 1 and revolution count interrupt. Set when both the POS1_INT bit is set and the REV1_INT is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pos1revInt{}; 
        ///Combined position 2 and revolution count interrupt. Set when both the POS2_INT bit is set and the REV2_INT is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pos2revInt{}; 
        ///Indicates that the index 1 compare value is equal to the current index count.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rev1Int{}; 
        ///Indicates that the index 2 compare value is equal to the current index count.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rev2Int{}; 
        ///Indicates that the current position count goes through the MAXPOS value to zero in forward direction, or through zero to MAXPOS in backward direction.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maxposInt{}; 
    }
    namespace Noneies{    ///<Interrupt enable set register
        using Addr = Register::Address<0x40058fdc,0xffff0000,0,unsigned>;
        ///Indicates that an index pulse was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inxEn{}; 
        ///Indicates that a velocity timer overflow occurred
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> timEn{}; 
        ///Indicates that captured velocity is less than compare velocity.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> velcEn{}; 
        ///Indicates that a change of direction was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirEn{}; 
        ///Indicates that an encoder phase error was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> errEn{}; 
        ///Indicates that and encoder clock pulse was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> enclkEn{}; 
        ///Indicates that the position 0 compare value is equal to the current position.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pos0Int{}; 
        ///Indicates that the position 1 compare value is equal to the current position.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pos1Int{}; 
        ///Indicates that the position 2 compare value is equal to the current position.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pos2Int{}; 
        ///Indicates that the index compare value is equal to the current index count.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rev0Int{}; 
        ///Combined position 0 and revolution count interrupt. Set when both the POS0_INT bit is set and the REV0_INT is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pos0revInt{}; 
        ///Combined position 1 and revolution count interrupt. Set when both the POS1_INT bit is set and the REV1_INT is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pos1revInt{}; 
        ///Combined position 2 and revolution count interrupt. Set when both the POS2_INT bit is set and the REV2_INT is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pos2revInt{}; 
        ///Indicates that the index 1 compare value is equal to the current index count.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rev1Int{}; 
        ///Indicates that the index 2 compare value is equal to the current index count.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rev2Int{}; 
        ///Indicates that the current position count goes through the MAXPOS value to zero in forward direction, or through zero to MAXPOS in backward direction.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maxposInt{}; 
    }
    namespace Noneintstat{    ///<Interrupt status register
        using Addr = Register::Address<0x40058fe0,0xffff0000,0,unsigned>;
        ///Indicates that an index pulse was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inxInt{}; 
        ///Indicates that a velocity timer overflow occurred
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> timInt{}; 
        ///Indicates that captured velocity is less than compare velocity.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> velcInt{}; 
        ///Indicates that a change of direction was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirInt{}; 
        ///Indicates that an encoder phase error was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> errInt{}; 
        ///Indicates that and encoder clock pulse was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> enclkInt{}; 
        ///Indicates that the position 0 compare value is equal to the current position.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pos0Int{}; 
        ///Indicates that the position 1compare value is equal to the current position.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pos1Int{}; 
        ///Indicates that the position 2 compare value is equal to the current position.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pos2Int{}; 
        ///Indicates that the index compare value is equal to the current index count.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rev0Int{}; 
        ///Combined position 0 and revolution count interrupt. Set when both the POS0_INT bit is set and the REV0_INT is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pos0revInt{}; 
        ///Combined position 1 and revolution count interrupt. Set when both the POS1_INT bit is set and the REV1_INT is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pos1revInt{}; 
        ///Combined position 2 and revolution count interrupt. Set when both the POS2_INT bit is set and the REV2_INT is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pos2revInt{}; 
        ///Indicates that the index 1 compare value is equal to the current index count.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rev1Int{}; 
        ///Indicates that the index 2 compare value is equal to the current index count.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rev2Int{}; 
        ///Indicates that the current position count goes through the MAXPOS value to zero in forward direction, or through zero to MAXPOS in backward direction.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maxposInt{}; 
    }
    namespace Noneie{    ///<Interrupt enable clear register
        using Addr = Register::Address<0x40058fe4,0xffff0000,0,unsigned>;
        ///Indicates that an index pulse was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inxInt{}; 
        ///Indicates that a velocity timer overflow occurred
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> timInt{}; 
        ///Indicates that captured velocity is less than compare velocity.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> velcInt{}; 
        ///Indicates that a change of direction was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirInt{}; 
        ///Indicates that an encoder phase error was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> errInt{}; 
        ///Indicates that and encoder clock pulse was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> enclkInt{}; 
        ///Indicates that the position 0 compare value is equal to the current position.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pos0Int{}; 
        ///Indicates that the position 1compare value is equal to the current position.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pos1Int{}; 
        ///Indicates that the position 2 compare value is equal to the current position.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pos2Int{}; 
        ///Indicates that the index compare value is equal to the current index count.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rev0Int{}; 
        ///Combined position 0 and revolution count interrupt. Set when both the POS0_INT bit is set and the REV0_INT is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pos0revInt{}; 
        ///Combined position 1 and revolution count interrupt. Set when both the POS1_INT bit is set and the REV1_INT is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pos1revInt{}; 
        ///Combined position 2 and revolution count interrupt. Set when both the POS2_INT bit is set and the REV2_INT is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pos2revInt{}; 
        ///Indicates that the index 1 compare value is equal to the current index count.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rev1Int{}; 
        ///Indicates that the index 2 compare value is equal to the current index count.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rev2Int{}; 
        ///Indicates that the current position count goes through the MAXPOS value to zero in forward direction, or through zero to MAXPOS in backward direction.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maxposInt{}; 
    }
    namespace Noneclr{    ///<Interrupt status clear register
        using Addr = Register::Address<0x40058fe8,0xffff0000,0,unsigned>;
        ///Indicates that an index pulse was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inxInt{}; 
        ///Indicates that a velocity timer overflow occurred
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> timInt{}; 
        ///Indicates that captured velocity is less than compare velocity.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> velcInt{}; 
        ///Indicates that a change of direction was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirInt{}; 
        ///Indicates that an encoder phase error was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> errInt{}; 
        ///Indicates that and encoder clock pulse was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> enclkInt{}; 
        ///Indicates that the position 0 compare value is equal to the current position.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pos0Int{}; 
        ///Indicates that the position 1compare value is equal to the current position.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pos1Int{}; 
        ///Indicates that the position 2 compare value is equal to the current position.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pos2Int{}; 
        ///Indicates that the index compare value is equal to the current index count.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rev0Int{}; 
        ///Combined position 0 and revolution count interrupt. Set when both the POS0_INT bit is set and the REV0_INT is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pos0revInt{}; 
        ///Combined position 1 and revolution count interrupt. Set when both the POS1_INT bit is set and the REV1_INT is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pos1revInt{}; 
        ///Combined position 2 and revolution count interrupt. Set when both the POS2_INT bit is set and the REV2_INT is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pos2revInt{}; 
        ///Indicates that the index 1 compare value is equal to the current index count.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rev1Int{}; 
        ///Indicates that the index 2 compare value is equal to the current index count.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rev2Int{}; 
        ///Indicates that the current position count goes through the MAXPOS value to zero in forward direction, or through zero to MAXPOS in backward direction.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maxposInt{}; 
    }
    namespace Noneset{    ///<Interrupt status set register
        using Addr = Register::Address<0x40058fec,0xffff0000,0,unsigned>;
        ///Indicates that an index pulse was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inxInt{}; 
        ///Indicates that a velocity timer overflow occurred
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> timInt{}; 
        ///Indicates that captured velocity is less than compare velocity.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> velcInt{}; 
        ///Indicates that a change of direction was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dirInt{}; 
        ///Indicates that an encoder phase error was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> errInt{}; 
        ///Indicates that and encoder clock pulse was detected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> enclkInt{}; 
        ///Indicates that the position 0 compare value is equal to the current position.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pos0Int{}; 
        ///Indicates that the position 1compare value is equal to the current position.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pos1Int{}; 
        ///Indicates that the position 2 compare value is equal to the current position.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pos2Int{}; 
        ///Indicates that the index compare value is equal to the current index count.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rev0Int{}; 
        ///Combined position 0 and revolution count interrupt. Set when both the POS0_INT bit is set and the REV0_INT is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pos0revInt{}; 
        ///Combined position 1 and revolution count interrupt. Set when both the POS1_INT bit is set and the REV1_INT is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pos1revInt{}; 
        ///Combined position 2 and revolution count interrupt. Set when both the POS2_INT bit is set and the REV2_INT is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pos2revInt{}; 
        ///Indicates that the index 1 compare value is equal to the current index count.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rev1Int{}; 
        ///Indicates that the index 2 compare value is equal to the current index count.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rev2Int{}; 
        ///Indicates that the current position count goes through the MAXPOS value to zero in forward direction, or through zero to MAXPOS in backward direction.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maxposInt{}; 
    }
}
