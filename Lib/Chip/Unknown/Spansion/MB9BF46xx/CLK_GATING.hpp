#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral CLK_GATING 
    namespace Nonecken0{    ///< register CKEN0 
        using Addr = Register::Address<0x4003c100,0xeaf00000,0,unsigned>;
        /// bitfield GIOCK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> giock{}; 
        namespace GiockValC{
        }
        /// bitfield EXBCK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> exbck{}; 
        namespace ExbckValC{
        }
        /// bitfield DMACK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dmack{}; 
        namespace DmackValC{
        }
        /// bitfield ADCCK3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> adcck3{}; 
        namespace Adcck3ValC{
        }
        /// bitfield ADCCK2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> adcck2{}; 
        namespace Adcck2ValC{
        }
        /// bitfield ADCCK1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adcck1{}; 
        namespace Adcck1ValC{
        }
        /// bitfield ADCCK0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adcck0{}; 
        namespace Adcck0ValC{
        }
        /// bitfield MFSCK15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mfsck15{}; 
        namespace Mfsck15ValC{
        }
        /// bitfield MFSCK14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mfsck14{}; 
        namespace Mfsck14ValC{
        }
        /// bitfield MFSCK13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mfsck13{}; 
        namespace Mfsck13ValC{
        }
        /// bitfield MFSCK12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mfsck12{}; 
        namespace Mfsck12ValC{
        }
        /// bitfield MFSCK11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mfsck11{}; 
        namespace Mfsck11ValC{
        }
        /// bitfield MFSCK10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mfsck10{}; 
        namespace Mfsck10ValC{
        }
        /// bitfield MFSCK9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mfsck9{}; 
        namespace Mfsck9ValC{
        }
        /// bitfield MFSCK8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mfsck8{}; 
        namespace Mfsck8ValC{
        }
        /// bitfield MFSCK7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mfsck7{}; 
        namespace Mfsck7ValC{
        }
        /// bitfield MFSCK6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mfsck6{}; 
        namespace Mfsck6ValC{
        }
        /// bitfield MFSCK5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mfsck5{}; 
        namespace Mfsck5ValC{
        }
        /// bitfield MFSCK4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mfsck4{}; 
        namespace Mfsck4ValC{
        }
        /// bitfield MFSCK3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsck3{}; 
        namespace Mfsck3ValC{
        }
        /// bitfield MFSCK2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsck2{}; 
        namespace Mfsck2ValC{
        }
        /// bitfield MFSCK1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsck1{}; 
        namespace Mfsck1ValC{
        }
        /// bitfield MFSCK0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsck0{}; 
        namespace Mfsck0ValC{
        }
    }
    namespace Nonemrst0{    ///< register MRST0 
        using Addr = Register::Address<0x4003c104,0xfaf00000,0,unsigned>;
        /// bitfield EXBRST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> exbrst{}; 
        namespace ExbrstValC{
        }
        /// bitfield DMARST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dmarst{}; 
        namespace DmarstValC{
        }
        /// bitfield ADCRST3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> adcrst3{}; 
        namespace Adcrst3ValC{
        }
        /// bitfield ADCRST2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> adcrst2{}; 
        namespace Adcrst2ValC{
        }
        /// bitfield ADCRST1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adcrst1{}; 
        namespace Adcrst1ValC{
        }
        /// bitfield ADCRST0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adcrst0{}; 
        namespace Adcrst0ValC{
        }
        /// bitfield MFSRST15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mfsrst15{}; 
        namespace Mfsrst15ValC{
        }
        /// bitfield MFSRST14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mfsrst14{}; 
        namespace Mfsrst14ValC{
        }
        /// bitfield MFSRST13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mfsrst13{}; 
        namespace Mfsrst13ValC{
        }
        /// bitfield MFSRST12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mfsrst12{}; 
        namespace Mfsrst12ValC{
        }
        /// bitfield MFSRST11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mfsrst11{}; 
        namespace Mfsrst11ValC{
        }
        /// bitfield MFSRST10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mfsrst10{}; 
        namespace Mfsrst10ValC{
        }
        /// bitfield MFSRST9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mfsrst9{}; 
        namespace Mfsrst9ValC{
        }
        /// bitfield MFSRST8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mfsrst8{}; 
        namespace Mfsrst8ValC{
        }
        /// bitfield MFSRST7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mfsrst7{}; 
        namespace Mfsrst7ValC{
        }
        /// bitfield MFSRST6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mfsrst6{}; 
        namespace Mfsrst6ValC{
        }
        /// bitfield MFSRST5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mfsrst5{}; 
        namespace Mfsrst5ValC{
        }
        /// bitfield MFSRST4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mfsrst4{}; 
        namespace Mfsrst4ValC{
        }
        /// bitfield MFSRST3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsrst3{}; 
        namespace Mfsrst3ValC{
        }
        /// bitfield MFSRST2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsrst2{}; 
        namespace Mfsrst2ValC{
        }
        /// bitfield MFSRST1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsrst1{}; 
        namespace Mfsrst1ValC{
        }
        /// bitfield MFSRST0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrst0{}; 
        namespace Mfsrst0ValC{
        }
    }
    namespace Nonecken1{    ///< register CKEN1 
        using Addr = Register::Address<0x4003c110,0xfff0f0f0,0,unsigned>;
        /// bitfield QDUCK3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> qduck3{}; 
        namespace Qduck3ValC{
        }
        /// bitfield QDUCK2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> qduck2{}; 
        namespace Qduck2ValC{
        }
        /// bitfield QDUCK1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> qduck1{}; 
        namespace Qduck1ValC{
        }
        /// bitfield QDUCK0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> qduck0{}; 
        namespace Qduck0ValC{
        }
        /// bitfield MFTCK3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mftck3{}; 
        namespace Mftck3ValC{
        }
        /// bitfield MFTCK2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mftck2{}; 
        namespace Mftck2ValC{
        }
        /// bitfield MFTCK1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mftck1{}; 
        namespace Mftck1ValC{
        }
        /// bitfield MFTCK0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mftck0{}; 
        namespace Mftck0ValC{
        }
        /// bitfield BTMCK3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btmck3{}; 
        namespace Btmck3ValC{
        }
        /// bitfield BTMCK2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btmck2{}; 
        namespace Btmck2ValC{
        }
        /// bitfield BTMCK1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btmck1{}; 
        namespace Btmck1ValC{
        }
        /// bitfield BTMCK0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btmck0{}; 
        namespace Btmck0ValC{
        }
    }
    namespace Nonemrst1{    ///< register MRST1 
        using Addr = Register::Address<0x4003c114,0xfff0f0f0,0,unsigned>;
        /// bitfield QDURST3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> qdurst3{}; 
        namespace Qdurst3ValC{
        }
        /// bitfield QDURST2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> qdurst2{}; 
        namespace Qdurst2ValC{
        }
        /// bitfield QDURST1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> qdurst1{}; 
        namespace Qdurst1ValC{
        }
        /// bitfield QDURST0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> qdurst0{}; 
        namespace Qdurst0ValC{
        }
        /// bitfield MFTRST3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mftrst3{}; 
        namespace Mftrst3ValC{
        }
        /// bitfield MFTRST2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mftrst2{}; 
        namespace Mftrst2ValC{
        }
        /// bitfield MFTRST1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mftrst1{}; 
        namespace Mftrst1ValC{
        }
        /// bitfield MFTRST0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mftrst0{}; 
        namespace Mftrst0ValC{
        }
        /// bitfield BTMRST3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btmrst3{}; 
        namespace Btmrst3ValC{
        }
        /// bitfield BTMRST2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btmrst2{}; 
        namespace Btmrst2ValC{
        }
        /// bitfield BTMRST1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btmrst1{}; 
        namespace Btmrst1ValC{
        }
        /// bitfield BTMRST0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btmrst0{}; 
        namespace Btmrst0ValC{
        }
    }
    namespace Nonecken2{    ///< register CKEN2 
        using Addr = Register::Address<0x4003c120,0xfffffecc,0,unsigned>;
        /// bitfield SDCCK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sdcck{}; 
        namespace SdcckValC{
        }
        /// bitfield CANCK1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> canck1{}; 
        namespace Canck1ValC{
        }
        /// bitfield CANCK0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> canck0{}; 
        namespace Canck0ValC{
        }
        /// bitfield USBCK1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usbck1{}; 
        namespace Usbck1ValC{
        }
        /// bitfield USBCK0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbck0{}; 
        namespace Usbck0ValC{
        }
    }
    namespace Nonemrst2{    ///< register MRST2 
        using Addr = Register::Address<0x4003c124,0xfffffecc,0,unsigned>;
        /// bitfield SDCRST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sdcrst{}; 
        namespace SdcrstValC{
        }
        /// bitfield CANRST1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> canrst1{}; 
        namespace Canrst1ValC{
        }
        /// bitfield CANRST0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> canrst0{}; 
        namespace Canrst0ValC{
        }
        /// bitfield USBRST1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usbrst1{}; 
        namespace Usbrst1ValC{
        }
        /// bitfield USBRST0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbrst0{}; 
        namespace Usbrst0ValC{
        }
    }
}
