#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral CLK_GATING 
    namespace Nonecken0{    ///< register CKEN0 
        using Addr = Register::Address<0x4003c100,0xeaf00000,0,unsigned>;
        /// bitfield GIOCK 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> giock{}; 
        /// bitfield EXBCK 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> exbck{}; 
        /// bitfield DMACK 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dmack{}; 
        /// bitfield ADCCK3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> adcck3{}; 
        /// bitfield ADCCK2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> adcck2{}; 
        /// bitfield ADCCK1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adcck1{}; 
        /// bitfield ADCCK0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adcck0{}; 
        /// bitfield MFSCK15 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mfsck15{}; 
        /// bitfield MFSCK14 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mfsck14{}; 
        /// bitfield MFSCK13 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mfsck13{}; 
        /// bitfield MFSCK12 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mfsck12{}; 
        /// bitfield MFSCK11 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mfsck11{}; 
        /// bitfield MFSCK10 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mfsck10{}; 
        /// bitfield MFSCK9 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mfsck9{}; 
        /// bitfield MFSCK8 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mfsck8{}; 
        /// bitfield MFSCK7 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mfsck7{}; 
        /// bitfield MFSCK6 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mfsck6{}; 
        /// bitfield MFSCK5 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mfsck5{}; 
        /// bitfield MFSCK4 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mfsck4{}; 
        /// bitfield MFSCK3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsck3{}; 
        /// bitfield MFSCK2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsck2{}; 
        /// bitfield MFSCK1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsck1{}; 
        /// bitfield MFSCK0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsck0{}; 
    }
    namespace Nonemrst0{    ///< register MRST0 
        using Addr = Register::Address<0x4003c104,0xfaf00000,0,unsigned>;
        /// bitfield EXBRST 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> exbrst{}; 
        /// bitfield DMARST 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dmarst{}; 
        /// bitfield ADCRST3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> adcrst3{}; 
        /// bitfield ADCRST2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> adcrst2{}; 
        /// bitfield ADCRST1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adcrst1{}; 
        /// bitfield ADCRST0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adcrst0{}; 
        /// bitfield MFSRST15 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mfsrst15{}; 
        /// bitfield MFSRST14 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mfsrst14{}; 
        /// bitfield MFSRST13 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mfsrst13{}; 
        /// bitfield MFSRST12 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mfsrst12{}; 
        /// bitfield MFSRST11 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mfsrst11{}; 
        /// bitfield MFSRST10 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mfsrst10{}; 
        /// bitfield MFSRST9 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mfsrst9{}; 
        /// bitfield MFSRST8 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mfsrst8{}; 
        /// bitfield MFSRST7 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mfsrst7{}; 
        /// bitfield MFSRST6 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mfsrst6{}; 
        /// bitfield MFSRST5 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mfsrst5{}; 
        /// bitfield MFSRST4 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mfsrst4{}; 
        /// bitfield MFSRST3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsrst3{}; 
        /// bitfield MFSRST2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsrst2{}; 
        /// bitfield MFSRST1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsrst1{}; 
        /// bitfield MFSRST0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrst0{}; 
    }
    namespace Nonecken1{    ///< register CKEN1 
        using Addr = Register::Address<0x4003c110,0xfff0f0f0,0,unsigned>;
        /// bitfield QDUCK3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> qduck3{}; 
        /// bitfield QDUCK2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> qduck2{}; 
        /// bitfield QDUCK1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> qduck1{}; 
        /// bitfield QDUCK0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> qduck0{}; 
        /// bitfield MFTCK3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mftck3{}; 
        /// bitfield MFTCK2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mftck2{}; 
        /// bitfield MFTCK1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mftck1{}; 
        /// bitfield MFTCK0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mftck0{}; 
        /// bitfield BTMCK3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btmck3{}; 
        /// bitfield BTMCK2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btmck2{}; 
        /// bitfield BTMCK1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btmck1{}; 
        /// bitfield BTMCK0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btmck0{}; 
    }
    namespace Nonemrst1{    ///< register MRST1 
        using Addr = Register::Address<0x4003c114,0xfff0f0f0,0,unsigned>;
        /// bitfield QDURST3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> qdurst3{}; 
        /// bitfield QDURST2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> qdurst2{}; 
        /// bitfield QDURST1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> qdurst1{}; 
        /// bitfield QDURST0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> qdurst0{}; 
        /// bitfield MFTRST3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mftrst3{}; 
        /// bitfield MFTRST2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mftrst2{}; 
        /// bitfield MFTRST1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mftrst1{}; 
        /// bitfield MFTRST0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mftrst0{}; 
        /// bitfield BTMRST3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btmrst3{}; 
        /// bitfield BTMRST2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btmrst2{}; 
        /// bitfield BTMRST1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btmrst1{}; 
        /// bitfield BTMRST0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btmrst0{}; 
    }
    namespace Nonecken2{    ///< register CKEN2 
        using Addr = Register::Address<0x4003c120,0xfffffecc,0,unsigned>;
        /// bitfield SDCCK 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sdcck{}; 
        /// bitfield CANCK1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> canck1{}; 
        /// bitfield CANCK0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> canck0{}; 
        /// bitfield USBCK1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usbck1{}; 
        /// bitfield USBCK0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbck0{}; 
    }
    namespace Nonemrst2{    ///< register MRST2 
        using Addr = Register::Address<0x4003c124,0xfffffecc,0,unsigned>;
        /// bitfield SDCRST 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sdcrst{}; 
        /// bitfield CANRST1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> canrst1{}; 
        /// bitfield CANRST0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> canrst0{}; 
        /// bitfield USBRST1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usbrst1{}; 
        /// bitfield USBRST0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbrst0{}; 
    }
}
