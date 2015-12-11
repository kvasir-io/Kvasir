#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Programmable Multibit ECC Error Location
    namespace PmerrlocElcfg{    ///<Error Location Configuration Register
        using Addr = Register::Address<0xffffe600,0xffe0fffe,0,unsigned>;
        ///Sector Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sectorsz{}; 
        ///Number of Errors
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> errnum{}; 
    }
    namespace PmerrlocElprim{    ///<Error Location Primitive Register
        using Addr = Register::Address<0xffffe604,0xffff0000,0,unsigned>;
        ///Primitive Polynomial
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> primitiv{}; 
    }
    namespace PmerrlocElen{    ///<Error Location Enable Register
        using Addr = Register::Address<0xffffe608,0xffffc000,0,unsigned>;
        ///Initial Number of Bits in the Codeword
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> eninit{}; 
    }
    namespace PmerrlocEldis{    ///<Error Location Disable Register
        using Addr = Register::Address<0xffffe60c,0xfffffffe,0,unsigned>;
        ///Disable Error Location Engine
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dis{}; 
    }
    namespace PmerrlocElsr{    ///<Error Location Status Register
        using Addr = Register::Address<0xffffe610,0xfffffffe,0,unsigned>;
        ///Error Location Engine Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> busy{}; 
    }
    namespace PmerrlocElier{    ///<Error Location Interrupt Enable register
        using Addr = Register::Address<0xffffe614,0xfffffffe,0,unsigned>;
        ///Computation Terminated Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace PmerrlocElidr{    ///<Error Location Interrupt Disable Register
        using Addr = Register::Address<0xffffe618,0xfffffffe,0,unsigned>;
        ///Computation Terminated Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace PmerrlocElimr{    ///<Error Location Interrupt Mask Register
        using Addr = Register::Address<0xffffe61c,0xfffffffe,0,unsigned>;
        ///Computation Terminated Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace PmerrlocElisr{    ///<Error Location Interrupt Status Register
        using Addr = Register::Address<0xffffe620,0xffffe0fe,0,unsigned>;
        ///Computation Terminated Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> done{}; 
        ///Error Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> errCnt{}; 
    }
    namespace PmerrlocSigma0{    ///<PMECC SIGMA 0 Register
        using Addr = Register::Address<0xffffe628,0xffffc000,0,unsigned>;
        ///Coefficient of Degree x in the SIGMA Polynomial.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> sigma0{}; 
    }
    namespace PmerrlocSigma1{    ///<PMECC SIGMA 1 Register
        using Addr = Register::Address<0xffffe62c,0xffffc000,0,unsigned>;
        ///Coefficient of Degree x in the SIGMA Polynomial.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> sigma1{}; 
    }
    namespace PmerrlocSigma2{    ///<PMECC SIGMA 2 Register
        using Addr = Register::Address<0xffffe630,0xffffc000,0,unsigned>;
        ///Coefficient of Degree x in the SIGMA Polynomial.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> sigma2{}; 
    }
    namespace PmerrlocSigma3{    ///<PMECC SIGMA 3 Register
        using Addr = Register::Address<0xffffe634,0xffffc000,0,unsigned>;
        ///Coefficient of Degree x in the SIGMA Polynomial.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> sigma3{}; 
    }
    namespace PmerrlocSigma4{    ///<PMECC SIGMA 4 Register
        using Addr = Register::Address<0xffffe638,0xffffc000,0,unsigned>;
        ///Coefficient of Degree x in the SIGMA Polynomial.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> sigma4{}; 
    }
    namespace PmerrlocSigma5{    ///<PMECC SIGMA 5 Register
        using Addr = Register::Address<0xffffe63c,0xffffc000,0,unsigned>;
        ///Coefficient of Degree x in the SIGMA Polynomial.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> sigma5{}; 
    }
    namespace PmerrlocSigma6{    ///<PMECC SIGMA 6 Register
        using Addr = Register::Address<0xffffe640,0xffffc000,0,unsigned>;
        ///Coefficient of Degree x in the SIGMA Polynomial.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> sigma6{}; 
    }
    namespace PmerrlocSigma7{    ///<PMECC SIGMA 7 Register
        using Addr = Register::Address<0xffffe644,0xffffc000,0,unsigned>;
        ///Coefficient of Degree x in the SIGMA Polynomial.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> sigma7{}; 
    }
    namespace PmerrlocSigma8{    ///<PMECC SIGMA 8 Register
        using Addr = Register::Address<0xffffe648,0xffffc000,0,unsigned>;
        ///Coefficient of Degree x in the SIGMA Polynomial.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> sigma8{}; 
    }
    namespace PmerrlocSigma9{    ///<PMECC SIGMA 9 Register
        using Addr = Register::Address<0xffffe64c,0xffffc000,0,unsigned>;
        ///Coefficient of Degree x in the SIGMA Polynomial.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> sigma9{}; 
    }
    namespace PmerrlocSigma10{    ///<PMECC SIGMA 10 Register
        using Addr = Register::Address<0xffffe650,0xffffc000,0,unsigned>;
        ///Coefficient of Degree x in the SIGMA Polynomial.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> sigma10{}; 
    }
    namespace PmerrlocSigma11{    ///<PMECC SIGMA 11 Register
        using Addr = Register::Address<0xffffe654,0xffffc000,0,unsigned>;
        ///Coefficient of Degree x in the SIGMA Polynomial.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> sigma11{}; 
    }
    namespace PmerrlocSigma12{    ///<PMECC SIGMA 12 Register
        using Addr = Register::Address<0xffffe658,0xffffc000,0,unsigned>;
        ///Coefficient of Degree x in the SIGMA Polynomial.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> sigma12{}; 
    }
    namespace PmerrlocSigma13{    ///<PMECC SIGMA 13 Register
        using Addr = Register::Address<0xffffe65c,0xffffc000,0,unsigned>;
        ///Coefficient of Degree x in the SIGMA Polynomial.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> sigma13{}; 
    }
    namespace PmerrlocSigma14{    ///<PMECC SIGMA 14 Register
        using Addr = Register::Address<0xffffe660,0xffffc000,0,unsigned>;
        ///Coefficient of Degree x in the SIGMA Polynomial.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> sigma14{}; 
    }
    namespace PmerrlocSigma15{    ///<PMECC SIGMA 15 Register
        using Addr = Register::Address<0xffffe664,0xffffc000,0,unsigned>;
        ///Coefficient of Degree x in the SIGMA Polynomial.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> sigma15{}; 
    }
    namespace PmerrlocSigma16{    ///<PMECC SIGMA 16 Register
        using Addr = Register::Address<0xffffe668,0xffffc000,0,unsigned>;
        ///Coefficient of Degree x in the SIGMA Polynomial.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> sigma16{}; 
    }
    namespace PmerrlocSigma17{    ///<PMECC SIGMA 17 Register
        using Addr = Register::Address<0xffffe66c,0xffffc000,0,unsigned>;
        ///Coefficient of Degree x in the SIGMA Polynomial.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> sigma17{}; 
    }
    namespace PmerrlocSigma18{    ///<PMECC SIGMA 18 Register
        using Addr = Register::Address<0xffffe670,0xffffc000,0,unsigned>;
        ///Coefficient of Degree x in the SIGMA Polynomial.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> sigma18{}; 
    }
    namespace PmerrlocSigma19{    ///<PMECC SIGMA 19 Register
        using Addr = Register::Address<0xffffe674,0xffffc000,0,unsigned>;
        ///Coefficient of Degree x in the SIGMA Polynomial.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> sigma19{}; 
    }
    namespace PmerrlocSigma20{    ///<PMECC SIGMA 20 Register
        using Addr = Register::Address<0xffffe678,0xffffc000,0,unsigned>;
        ///Coefficient of Degree x in the SIGMA Polynomial.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> sigma20{}; 
    }
    namespace PmerrlocSigma21{    ///<PMECC SIGMA 21 Register
        using Addr = Register::Address<0xffffe67c,0xffffc000,0,unsigned>;
        ///Coefficient of Degree x in the SIGMA Polynomial.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> sigma21{}; 
    }
    namespace PmerrlocSigma22{    ///<PMECC SIGMA 22 Register
        using Addr = Register::Address<0xffffe680,0xffffc000,0,unsigned>;
        ///Coefficient of Degree x in the SIGMA Polynomial.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> sigma22{}; 
    }
    namespace PmerrlocSigma23{    ///<PMECC SIGMA 23 Register
        using Addr = Register::Address<0xffffe684,0xffffc000,0,unsigned>;
        ///Coefficient of Degree x in the SIGMA Polynomial.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> sigma23{}; 
    }
    namespace PmerrlocSigma24{    ///<PMECC SIGMA 24 Register
        using Addr = Register::Address<0xffffe688,0xffffc000,0,unsigned>;
        ///Coefficient of Degree x in the SIGMA Polynomial.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> sigma24{}; 
    }
    namespace PmerrlocEl0{    ///<PMECC Error Location 0 Register
        using Addr = Register::Address<0xffffe68c,0xffffc000,0,unsigned>;
        ///Error Position within the Set {sector area, spare area}.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> errlocn{}; 
    }
    namespace PmerrlocEl1{    ///<PMECC Error Location 0 Register
        using Addr = Register::Address<0xffffe690,0xffffc000,0,unsigned>;
        ///Error Position within the Set {sector area, spare area}.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> errlocn{}; 
    }
    namespace PmerrlocEl2{    ///<PMECC Error Location 0 Register
        using Addr = Register::Address<0xffffe694,0xffffc000,0,unsigned>;
        ///Error Position within the Set {sector area, spare area}.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> errlocn{}; 
    }
    namespace PmerrlocEl3{    ///<PMECC Error Location 0 Register
        using Addr = Register::Address<0xffffe698,0xffffc000,0,unsigned>;
        ///Error Position within the Set {sector area, spare area}.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> errlocn{}; 
    }
    namespace PmerrlocEl4{    ///<PMECC Error Location 0 Register
        using Addr = Register::Address<0xffffe69c,0xffffc000,0,unsigned>;
        ///Error Position within the Set {sector area, spare area}.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> errlocn{}; 
    }
    namespace PmerrlocEl5{    ///<PMECC Error Location 0 Register
        using Addr = Register::Address<0xffffe6a0,0xffffc000,0,unsigned>;
        ///Error Position within the Set {sector area, spare area}.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> errlocn{}; 
    }
    namespace PmerrlocEl6{    ///<PMECC Error Location 0 Register
        using Addr = Register::Address<0xffffe6a4,0xffffc000,0,unsigned>;
        ///Error Position within the Set {sector area, spare area}.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> errlocn{}; 
    }
    namespace PmerrlocEl7{    ///<PMECC Error Location 0 Register
        using Addr = Register::Address<0xffffe6a8,0xffffc000,0,unsigned>;
        ///Error Position within the Set {sector area, spare area}.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> errlocn{}; 
    }
    namespace PmerrlocEl8{    ///<PMECC Error Location 0 Register
        using Addr = Register::Address<0xffffe6ac,0xffffc000,0,unsigned>;
        ///Error Position within the Set {sector area, spare area}.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> errlocn{}; 
    }
    namespace PmerrlocEl9{    ///<PMECC Error Location 0 Register
        using Addr = Register::Address<0xffffe6b0,0xffffc000,0,unsigned>;
        ///Error Position within the Set {sector area, spare area}.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> errlocn{}; 
    }
    namespace PmerrlocEl10{    ///<PMECC Error Location 0 Register
        using Addr = Register::Address<0xffffe6b4,0xffffc000,0,unsigned>;
        ///Error Position within the Set {sector area, spare area}.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> errlocn{}; 
    }
    namespace PmerrlocEl11{    ///<PMECC Error Location 0 Register
        using Addr = Register::Address<0xffffe6b8,0xffffc000,0,unsigned>;
        ///Error Position within the Set {sector area, spare area}.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> errlocn{}; 
    }
    namespace PmerrlocEl12{    ///<PMECC Error Location 0 Register
        using Addr = Register::Address<0xffffe6bc,0xffffc000,0,unsigned>;
        ///Error Position within the Set {sector area, spare area}.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> errlocn{}; 
    }
    namespace PmerrlocEl13{    ///<PMECC Error Location 0 Register
        using Addr = Register::Address<0xffffe6c0,0xffffc000,0,unsigned>;
        ///Error Position within the Set {sector area, spare area}.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> errlocn{}; 
    }
    namespace PmerrlocEl14{    ///<PMECC Error Location 0 Register
        using Addr = Register::Address<0xffffe6c4,0xffffc000,0,unsigned>;
        ///Error Position within the Set {sector area, spare area}.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> errlocn{}; 
    }
    namespace PmerrlocEl15{    ///<PMECC Error Location 0 Register
        using Addr = Register::Address<0xffffe6c8,0xffffc000,0,unsigned>;
        ///Error Position within the Set {sector area, spare area}.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> errlocn{}; 
    }
    namespace PmerrlocEl16{    ///<PMECC Error Location 0 Register
        using Addr = Register::Address<0xffffe6cc,0xffffc000,0,unsigned>;
        ///Error Position within the Set {sector area, spare area}.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> errlocn{}; 
    }
    namespace PmerrlocEl17{    ///<PMECC Error Location 0 Register
        using Addr = Register::Address<0xffffe6d0,0xffffc000,0,unsigned>;
        ///Error Position within the Set {sector area, spare area}.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> errlocn{}; 
    }
    namespace PmerrlocEl18{    ///<PMECC Error Location 0 Register
        using Addr = Register::Address<0xffffe6d4,0xffffc000,0,unsigned>;
        ///Error Position within the Set {sector area, spare area}.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> errlocn{}; 
    }
    namespace PmerrlocEl19{    ///<PMECC Error Location 0 Register
        using Addr = Register::Address<0xffffe6d8,0xffffc000,0,unsigned>;
        ///Error Position within the Set {sector area, spare area}.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> errlocn{}; 
    }
    namespace PmerrlocEl20{    ///<PMECC Error Location 0 Register
        using Addr = Register::Address<0xffffe6dc,0xffffc000,0,unsigned>;
        ///Error Position within the Set {sector area, spare area}.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> errlocn{}; 
    }
    namespace PmerrlocEl21{    ///<PMECC Error Location 0 Register
        using Addr = Register::Address<0xffffe6e0,0xffffc000,0,unsigned>;
        ///Error Position within the Set {sector area, spare area}.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> errlocn{}; 
    }
    namespace PmerrlocEl22{    ///<PMECC Error Location 0 Register
        using Addr = Register::Address<0xffffe6e4,0xffffc000,0,unsigned>;
        ///Error Position within the Set {sector area, spare area}.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> errlocn{}; 
    }
    namespace PmerrlocEl23{    ///<PMECC Error Location 0 Register
        using Addr = Register::Address<0xffffe6e8,0xffffc000,0,unsigned>;
        ///Error Position within the Set {sector area, spare area}.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> errlocn{}; 
    }
}
