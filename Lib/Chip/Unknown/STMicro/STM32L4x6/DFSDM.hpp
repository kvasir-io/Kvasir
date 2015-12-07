#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Digital filter for sigma delta
      modulators
    namespace Nonechcfg0r1{    ///<channel configuration y
          register
        using Addr = Register::Address<0x40016000,0x3f000e10,0,unsigned>;
        ///DFSDMEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dfsdmen{}; 
        namespace DfsdmenValC{
        }
        ///CKOUTSRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ckoutsrc{}; 
        namespace CkoutsrcValC{
        }
        ///CKOUTDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckoutdiv{}; 
        namespace CkoutdivValC{
        }
        ///DATPACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        namespace DatpackValC{
        }
        ///DATMPX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        namespace DatmpxValC{
        }
        ///CHINSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        namespace ChinselValC{
        }
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        namespace ChenValC{
        }
        ///CKABEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        namespace CkabenValC{
        }
        ///SCDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        namespace ScdenValC{
        }
        ///SPICKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        namespace SpickselValC{
        }
        ///SITP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
        namespace SitpValC{
        }
    }
    namespace Nonechcfg0r2{    ///<channel configuration y
          register
        using Addr = Register::Address<0x40016004,0x00000007,0,unsigned>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        namespace OffsetValC{
        }
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
        namespace DtrbsValC{
        }
    }
    namespace Noneawscd0r{    ///<analog watchdog and short-circuit detector
          register
        using Addr = Register::Address<0x40016008,0xff200f00,0,unsigned>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        namespace AwfordValC{
        }
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        namespace AwfosrValC{
        }
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        namespace BkscdValC{
        }
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
        namespace ScdtValC{
        }
    }
    namespace Nonechwdat0r{    ///<channel watchdog filter data
          register
        using Addr = Register::Address<0x4001600c,0xffff0000,0,unsigned>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
        namespace WdataValC{
        }
    }
    namespace Nonechdatin0r{    ///<channel data input register
        using Addr = Register::Address<0x40016010,0x00000000,0,unsigned>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        namespace Indat1ValC{
        }
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
        namespace Indat0ValC{
        }
    }
    namespace Nonechcfg1r1{    ///<CHCFG1R1
        using Addr = Register::Address<0x40016020,0xffff0e10,0,unsigned>;
        ///DATPACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        namespace DatpackValC{
        }
        ///DATMPX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        namespace DatmpxValC{
        }
        ///CHINSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        namespace ChinselValC{
        }
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        namespace ChenValC{
        }
        ///CKABEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        namespace CkabenValC{
        }
        ///SCDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        namespace ScdenValC{
        }
        ///SPICKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        namespace SpickselValC{
        }
        ///SITP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
        namespace SitpValC{
        }
    }
    namespace Nonechcfg1r2{    ///<CHCFG1R2
        using Addr = Register::Address<0x40016024,0x00000007,0,unsigned>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        namespace OffsetValC{
        }
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
        namespace DtrbsValC{
        }
    }
    namespace Noneawscd1r{    ///<AWSCD1R
        using Addr = Register::Address<0x40016028,0xff200f00,0,unsigned>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        namespace AwfordValC{
        }
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        namespace AwfosrValC{
        }
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        namespace BkscdValC{
        }
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
        namespace ScdtValC{
        }
    }
    namespace Nonechwdat1r{    ///<CHWDAT1R
        using Addr = Register::Address<0x4001602c,0xffff0000,0,unsigned>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
        namespace WdataValC{
        }
    }
    namespace Nonechdatin1r{    ///<CHDATIN1R
        using Addr = Register::Address<0x40016030,0x00000000,0,unsigned>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        namespace Indat1ValC{
        }
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
        namespace Indat0ValC{
        }
    }
    namespace Nonechcfg2r1{    ///<CHCFG2R1
        using Addr = Register::Address<0x40016040,0xffff0e10,0,unsigned>;
        ///DATPACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        namespace DatpackValC{
        }
        ///DATMPX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        namespace DatmpxValC{
        }
        ///CHINSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        namespace ChinselValC{
        }
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        namespace ChenValC{
        }
        ///CKABEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        namespace CkabenValC{
        }
        ///SCDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        namespace ScdenValC{
        }
        ///SPICKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        namespace SpickselValC{
        }
        ///SITP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
        namespace SitpValC{
        }
    }
    namespace Nonechcfg2r2{    ///<CHCFG2R2
        using Addr = Register::Address<0x40016044,0x00000007,0,unsigned>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        namespace OffsetValC{
        }
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
        namespace DtrbsValC{
        }
    }
    namespace Noneawscd2r{    ///<AWSCD2R
        using Addr = Register::Address<0x40016048,0xff200f00,0,unsigned>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        namespace AwfordValC{
        }
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        namespace AwfosrValC{
        }
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        namespace BkscdValC{
        }
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
        namespace ScdtValC{
        }
    }
    namespace Nonechwdat2r{    ///<CHWDAT2R
        using Addr = Register::Address<0x4001604c,0xffff0000,0,unsigned>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
        namespace WdataValC{
        }
    }
    namespace Nonechdatin2r{    ///<CHDATIN2R
        using Addr = Register::Address<0x40016050,0x00000000,0,unsigned>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        namespace Indat1ValC{
        }
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
        namespace Indat0ValC{
        }
    }
    namespace Nonechcfg3r1{    ///<CHCFG3R1
        using Addr = Register::Address<0x40016060,0xffff0e10,0,unsigned>;
        ///DATPACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        namespace DatpackValC{
        }
        ///DATMPX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        namespace DatmpxValC{
        }
        ///CHINSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        namespace ChinselValC{
        }
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        namespace ChenValC{
        }
        ///CKABEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        namespace CkabenValC{
        }
        ///SCDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        namespace ScdenValC{
        }
        ///SPICKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        namespace SpickselValC{
        }
        ///SITP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
        namespace SitpValC{
        }
    }
    namespace Nonechcfg3r2{    ///<CHCFG3R2
        using Addr = Register::Address<0x40016064,0x00000007,0,unsigned>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        namespace OffsetValC{
        }
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
        namespace DtrbsValC{
        }
    }
    namespace Noneawscd3r{    ///<AWSCD3R
        using Addr = Register::Address<0x40016068,0xff200f00,0,unsigned>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        namespace AwfordValC{
        }
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        namespace AwfosrValC{
        }
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        namespace BkscdValC{
        }
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
        namespace ScdtValC{
        }
    }
    namespace Nonechwdat3r{    ///<CHWDAT3R
        using Addr = Register::Address<0x4001606c,0xffff0000,0,unsigned>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
        namespace WdataValC{
        }
    }
    namespace Nonechdatin3r{    ///<CHDATIN3R
        using Addr = Register::Address<0x40016070,0x00000000,0,unsigned>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        namespace Indat1ValC{
        }
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
        namespace Indat0ValC{
        }
    }
    namespace Nonechcfg4r1{    ///<CHCFG4R1
        using Addr = Register::Address<0x40016080,0xffff0e10,0,unsigned>;
        ///DATPACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        namespace DatpackValC{
        }
        ///DATMPX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        namespace DatmpxValC{
        }
        ///CHINSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        namespace ChinselValC{
        }
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        namespace ChenValC{
        }
        ///CKABEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        namespace CkabenValC{
        }
        ///SCDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        namespace ScdenValC{
        }
        ///SPICKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        namespace SpickselValC{
        }
        ///SITP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
        namespace SitpValC{
        }
    }
    namespace Nonechcfg4r2{    ///<CHCFG4R2
        using Addr = Register::Address<0x40016084,0x00000007,0,unsigned>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        namespace OffsetValC{
        }
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
        namespace DtrbsValC{
        }
    }
    namespace Noneawscd4r{    ///<AWSCD4R
        using Addr = Register::Address<0x40016088,0xff200f00,0,unsigned>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        namespace AwfordValC{
        }
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        namespace AwfosrValC{
        }
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        namespace BkscdValC{
        }
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
        namespace ScdtValC{
        }
    }
    namespace Nonechwdat4r{    ///<CHWDAT4R
        using Addr = Register::Address<0x4001608c,0xffff0000,0,unsigned>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
        namespace WdataValC{
        }
    }
    namespace Nonechdatin4r{    ///<CHDATIN4R
        using Addr = Register::Address<0x40016090,0x00000000,0,unsigned>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        namespace Indat1ValC{
        }
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
        namespace Indat0ValC{
        }
    }
    namespace Nonechcfg5r1{    ///<CHCFG5R1
        using Addr = Register::Address<0x400160a0,0xffff0e10,0,unsigned>;
        ///DATPACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        namespace DatpackValC{
        }
        ///DATMPX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        namespace DatmpxValC{
        }
        ///CHINSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        namespace ChinselValC{
        }
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        namespace ChenValC{
        }
        ///CKABEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        namespace CkabenValC{
        }
        ///SCDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        namespace ScdenValC{
        }
        ///SPICKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        namespace SpickselValC{
        }
        ///SITP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
        namespace SitpValC{
        }
    }
    namespace Nonechcfg5r2{    ///<CHCFG5R2
        using Addr = Register::Address<0x400160a4,0x00000007,0,unsigned>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        namespace OffsetValC{
        }
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
        namespace DtrbsValC{
        }
    }
    namespace Noneawscd5r{    ///<AWSCD5R
        using Addr = Register::Address<0x400160a8,0xff200f00,0,unsigned>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        namespace AwfordValC{
        }
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        namespace AwfosrValC{
        }
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        namespace BkscdValC{
        }
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
        namespace ScdtValC{
        }
    }
    namespace Nonechwdat5r{    ///<CHWDAT5R
        using Addr = Register::Address<0x400160ac,0xffff0000,0,unsigned>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
        namespace WdataValC{
        }
    }
    namespace Nonechdatin5r{    ///<CHDATIN5R
        using Addr = Register::Address<0x400160b0,0x00000000,0,unsigned>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        namespace Indat1ValC{
        }
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
        namespace Indat0ValC{
        }
    }
    namespace Nonechcfg6r1{    ///<CHCFG6R1
        using Addr = Register::Address<0x400160c0,0xffff0e10,0,unsigned>;
        ///DATPACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        namespace DatpackValC{
        }
        ///DATMPX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        namespace DatmpxValC{
        }
        ///CHINSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        namespace ChinselValC{
        }
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        namespace ChenValC{
        }
        ///CKABEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        namespace CkabenValC{
        }
        ///SCDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        namespace ScdenValC{
        }
        ///SPICKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        namespace SpickselValC{
        }
        ///SITP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
        namespace SitpValC{
        }
    }
    namespace Nonechcfg6r2{    ///<CHCFG6R2
        using Addr = Register::Address<0x400160c4,0x00000007,0,unsigned>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        namespace OffsetValC{
        }
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
        namespace DtrbsValC{
        }
    }
    namespace Noneawscd6r{    ///<AWSCD6R
        using Addr = Register::Address<0x400160c8,0xff200f00,0,unsigned>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        namespace AwfordValC{
        }
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        namespace AwfosrValC{
        }
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        namespace BkscdValC{
        }
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
        namespace ScdtValC{
        }
    }
    namespace Nonechwdat6r{    ///<CHWDAT6R
        using Addr = Register::Address<0x400160cc,0xffff0000,0,unsigned>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
        namespace WdataValC{
        }
    }
    namespace Nonechdatin6r{    ///<CHDATIN6R
        using Addr = Register::Address<0x400160d0,0x00000000,0,unsigned>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        namespace Indat1ValC{
        }
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
        namespace Indat0ValC{
        }
    }
    namespace Nonechcfg7r1{    ///<CHCFG7R1
        using Addr = Register::Address<0x400160e0,0xffff0e10,0,unsigned>;
        ///DATPACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        namespace DatpackValC{
        }
        ///DATMPX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        namespace DatmpxValC{
        }
        ///CHINSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        namespace ChinselValC{
        }
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        namespace ChenValC{
        }
        ///CKABEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        namespace CkabenValC{
        }
        ///SCDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        namespace ScdenValC{
        }
        ///SPICKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        namespace SpickselValC{
        }
        ///SITP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
        namespace SitpValC{
        }
    }
    namespace Nonechcfg7r2{    ///<CHCFG7R2
        using Addr = Register::Address<0x400160e4,0x00000007,0,unsigned>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        namespace OffsetValC{
        }
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
        namespace DtrbsValC{
        }
    }
    namespace Noneawscd7r{    ///<AWSCD7R
        using Addr = Register::Address<0x400160e8,0xff200f00,0,unsigned>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        namespace AwfordValC{
        }
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        namespace AwfosrValC{
        }
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        namespace BkscdValC{
        }
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
        namespace ScdtValC{
        }
    }
    namespace Nonechwdat7r{    ///<CHWDAT7R
        using Addr = Register::Address<0x400160ec,0xffff0000,0,unsigned>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
        namespace WdataValC{
        }
    }
    namespace Nonechdatin7r{    ///<CHDATIN7R
        using Addr = Register::Address<0x400160f0,0x00000000,0,unsigned>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        namespace Indat1ValC{
        }
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
        namespace Indat0ValC{
        }
    }
    namespace Nonedfsdm0Cr1{    ///<control register 1
        using Addr = Register::Address<0x40016100,0x98d198c4,0,unsigned>;
        ///Analog watchdog fast mode
              select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> awfsel{}; 
        namespace AwfselValC{
        }
        ///Fast conversion mode selection for
              regular conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> fast{}; 
        namespace FastValC{
        }
        ///Regular channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> rch{}; 
        namespace RchValC{
        }
        ///DMA channel enabled to read data for the
              regular conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rdmaen{}; 
        namespace RdmaenValC{
        }
        ///Launch regular conversion synchronously
              with DFSDM0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rsync{}; 
        namespace RsyncValC{
        }
        ///Continuous mode selection for regular
              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcont{}; 
        namespace RcontValC{
        }
        ///Software start of a conversion on the
              regular channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rswstart{}; 
        namespace RswstartValC{
        }
        ///Trigger enable and trigger edge
              selection for injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> jexten{}; 
        namespace JextenValC{
        }
        ///Trigger signal selection for launching
              injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> jextsel{}; 
        namespace JextselValC{
        }
        ///DMA channel enabled to read data for the
              injected channel group
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jdmaen{}; 
        namespace JdmaenValC{
        }
        ///Scanning conversion mode for injected
              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> jscan{}; 
        namespace JscanValC{
        }
        ///Launch an injected conversion
              synchronously with the DFSDM0 JSWSTART
              trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jsync{}; 
        namespace JsyncValC{
        }
        ///Start a conversion of the injected group
              of channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> jswstart{}; 
        namespace JswstartValC{
        }
        ///DFSDM enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dfen{}; 
        namespace DfenValC{
        }
    }
    namespace Nonedfsdm0Cr2{    ///<control register 2
        using Addr = Register::Address<0x40016104,0xff000080,0,unsigned>;
        ///Analog watchdog channel
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> awdch{}; 
        namespace AwdchValC{
        }
        ///Extremes detector channel
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> exch{}; 
        namespace ExchValC{
        }
        ///Clock absence interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckabie{}; 
        namespace CkabieValC{
        }
        ///Short-circuit detector interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scdie{}; 
        namespace ScdieValC{
        }
        ///Analog watchdog interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdie{}; 
        namespace AwdieValC{
        }
        ///Regular data overrun interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrie{}; 
        namespace RovrieValC{
        }
        ///Injected data overrun interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrie{}; 
        namespace JovrieValC{
        }
        ///Regular end of conversion interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocie{}; 
        namespace ReocieValC{
        }
        ///Injected end of conversion interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocie{}; 
        namespace JeocieValC{
        }
    }
    namespace Nonedfsdm0Isr{    ///<interrupt and status register
        using Addr = Register::Address<0x40016108,0x00009fe0,0,unsigned>;
        ///short-circuit detector
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> scdf{}; 
        namespace ScdfValC{
        }
        ///Clock absence flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckabf{}; 
        namespace CkabfValC{
        }
        ///Regular conversion in progress
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rcip{}; 
        namespace RcipValC{
        }
        ///Injected conversion in progress
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> jcip{}; 
        namespace JcipValC{
        }
        ///Analog watchdog
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdf{}; 
        namespace AwdfValC{
        }
        ///Regular conversion overrun
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrf{}; 
        namespace RovrfValC{
        }
        ///Injected conversion overrun
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrf{}; 
        namespace JovrfValC{
        }
        ///End of regular conversion
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocf{}; 
        namespace ReocfValC{
        }
        ///End of injected conversion
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocf{}; 
        namespace JeocfValC{
        }
    }
    namespace Nonedfsdm0Icr{    ///<interrupt flag clear register
        using Addr = Register::Address<0x4001610c,0x0000fff3,0,unsigned>;
        ///Clear the short-circuit detector
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> clrscdf{}; 
        namespace ClrscdfValC{
        }
        ///Clear the clock absence
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> clrckabf{}; 
        namespace ClrckabfValC{
        }
        ///Clear the regular conversion overrun
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrrovrf{}; 
        namespace ClrrovrfValC{
        }
        ///Clear the injected conversion overrun
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrjovrf{}; 
        namespace ClrjovrfValC{
        }
    }
    namespace Nonedfsdm0Jchgr{    ///<injected channel group selection
          register
        using Addr = Register::Address<0x40016110,0xffffff00,0,unsigned>;
        ///Injected channel group
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> jchg{}; 
        namespace JchgValC{
        }
    }
    namespace Nonedfsdm0Fcr{    ///<filter control register
        using Addr = Register::Address<0x40016114,0x1c00ff00,0,unsigned>;
        ///Sinc filter order
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ford{}; 
        namespace FordValC{
        }
        ///Sinc filter oversampling ratio
              (decimation rate)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> fosr{}; 
        namespace FosrValC{
        }
        ///Integrator oversampling ratio (averaging
              length)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iosr{}; 
        namespace IosrValC{
        }
    }
    namespace Nonedfsdm0Jdatar{    ///<data register for injected
          group
        using Addr = Register::Address<0x40016118,0x000000f8,0,unsigned>;
        ///Injected group conversion
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> jdata{}; 
        namespace JdataValC{
        }
        ///Injected channel most recently
              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> jdatach{}; 
        namespace JdatachValC{
        }
    }
    namespace Nonedfsdm0Rdatar{    ///<data register for the regular
          channel
        using Addr = Register::Address<0x4001611c,0x000000e8,0,unsigned>;
        ///Regular channel conversion
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> rdata{}; 
        namespace RdataValC{
        }
        ///Regular channel pending
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rpend{}; 
        namespace RpendValC{
        }
        ///Regular channel most recently
              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rdatach{}; 
        namespace RdatachValC{
        }
    }
    namespace Nonedfsdm0Awhtr{    ///<analog watchdog high threshold
          register
        using Addr = Register::Address<0x40016120,0x000000f0,0,unsigned>;
        ///Analog watchdog high
              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awht{}; 
        namespace AwhtValC{
        }
        ///Break signal assignment to analog
              watchdog high threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawh{}; 
        namespace BkawhValC{
        }
    }
    namespace Nonedfsdm0Awltr{    ///<analog watchdog low threshold
          register
        using Addr = Register::Address<0x40016124,0x000000f0,0,unsigned>;
        ///Analog watchdog low
              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awlt{}; 
        namespace AwltValC{
        }
        ///Break signal assignment to analog
              watchdog low threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawl{}; 
        namespace BkawlValC{
        }
    }
    namespace Nonedfsdm0Awsr{    ///<analog watchdog status
          register
        using Addr = Register::Address<0x40016128,0xffff0000,0,unsigned>;
        ///Analog watchdog high threshold
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> awhtf{}; 
        namespace AwhtfValC{
        }
        ///Analog watchdog low threshold
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> awltf{}; 
        namespace AwltfValC{
        }
    }
    namespace Nonedfsdm0Awcfr{    ///<analog watchdog clear flag
          register
        using Addr = Register::Address<0x4001612c,0xffff0000,0,unsigned>;
        ///Clear the analog watchdog high threshold
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clrawhtf{}; 
        namespace ClrawhtfValC{
        }
        ///Clear the analog watchdog low threshold
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clrawltf{}; 
        namespace ClrawltfValC{
        }
    }
    namespace Nonedfsdm0Exmax{    ///<Extremes detector maximum
          register
        using Addr = Register::Address<0x40016130,0x000000f8,0,unsigned>;
        ///Extremes detector maximum
              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmax{}; 
        namespace ExmaxValC{
        }
        ///Extremes detector maximum data
              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exmaxch{}; 
        namespace ExmaxchValC{
        }
    }
    namespace Nonedfsdm0Exmin{    ///<Extremes detector minimum
          register
        using Addr = Register::Address<0x40016134,0x000000f8,0,unsigned>;
        ///EXMIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmin{}; 
        namespace ExminValC{
        }
        ///Extremes detector minimum data
              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exminch{}; 
        namespace ExminchValC{
        }
    }
    namespace Nonedfsdm0Cnvtimr{    ///<conversion timer register
        using Addr = Register::Address<0x40016138,0x0000000f,0,unsigned>;
        ///28-bit timer counting conversion time t
              = CNVCNT[27:0] / fDFSDM_CKIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> cnvcnt{}; 
        namespace CnvcntValC{
        }
    }
    namespace Nonedfsdm1Cr1{    ///<control register 1
        using Addr = Register::Address<0x40016200,0x98d198c4,0,unsigned>;
        ///Analog watchdog fast mode
              select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> awfsel{}; 
        namespace AwfselValC{
        }
        ///Fast conversion mode selection for
              regular conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> fast{}; 
        namespace FastValC{
        }
        ///Regular channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> rch{}; 
        namespace RchValC{
        }
        ///DMA channel enabled to read data for the
              regular conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rdmaen{}; 
        namespace RdmaenValC{
        }
        ///Launch regular conversion synchronously
              with DFSDM0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rsync{}; 
        namespace RsyncValC{
        }
        ///Continuous mode selection for regular
              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcont{}; 
        namespace RcontValC{
        }
        ///Software start of a conversion on the
              regular channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rswstart{}; 
        namespace RswstartValC{
        }
        ///Trigger enable and trigger edge
              selection for injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> jexten{}; 
        namespace JextenValC{
        }
        ///Trigger signal selection for launching
              injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> jextsel{}; 
        namespace JextselValC{
        }
        ///DMA channel enabled to read data for the
              injected channel group
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jdmaen{}; 
        namespace JdmaenValC{
        }
        ///Scanning conversion mode for injected
              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> jscan{}; 
        namespace JscanValC{
        }
        ///Launch an injected conversion
              synchronously with the DFSDM0 JSWSTART
              trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jsync{}; 
        namespace JsyncValC{
        }
        ///Start a conversion of the injected group
              of channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> jswstart{}; 
        namespace JswstartValC{
        }
        ///DFSDM enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dfen{}; 
        namespace DfenValC{
        }
    }
    namespace Nonedfsdm1Cr2{    ///<control register 2
        using Addr = Register::Address<0x40016204,0xff000080,0,unsigned>;
        ///Analog watchdog channel
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> awdch{}; 
        namespace AwdchValC{
        }
        ///Extremes detector channel
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> exch{}; 
        namespace ExchValC{
        }
        ///Clock absence interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckabie{}; 
        namespace CkabieValC{
        }
        ///Short-circuit detector interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scdie{}; 
        namespace ScdieValC{
        }
        ///Analog watchdog interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdie{}; 
        namespace AwdieValC{
        }
        ///Regular data overrun interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrie{}; 
        namespace RovrieValC{
        }
        ///Injected data overrun interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrie{}; 
        namespace JovrieValC{
        }
        ///Regular end of conversion interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocie{}; 
        namespace ReocieValC{
        }
        ///Injected end of conversion interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocie{}; 
        namespace JeocieValC{
        }
    }
    namespace Nonedfsdm1Isr{    ///<interrupt and status register
        using Addr = Register::Address<0x40016208,0x00009fe0,0,unsigned>;
        ///short-circuit detector
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> scdf{}; 
        namespace ScdfValC{
        }
        ///Clock absence flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckabf{}; 
        namespace CkabfValC{
        }
        ///Regular conversion in progress
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rcip{}; 
        namespace RcipValC{
        }
        ///Injected conversion in progress
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> jcip{}; 
        namespace JcipValC{
        }
        ///Analog watchdog
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdf{}; 
        namespace AwdfValC{
        }
        ///Regular conversion overrun
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrf{}; 
        namespace RovrfValC{
        }
        ///Injected conversion overrun
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrf{}; 
        namespace JovrfValC{
        }
        ///End of regular conversion
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocf{}; 
        namespace ReocfValC{
        }
        ///End of injected conversion
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocf{}; 
        namespace JeocfValC{
        }
    }
    namespace Nonedfsdm1Icr{    ///<interrupt flag clear register
        using Addr = Register::Address<0x4001620c,0x0000fff3,0,unsigned>;
        ///Clear the short-circuit detector
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> clrscdf{}; 
        namespace ClrscdfValC{
        }
        ///Clear the clock absence
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> clrckabf{}; 
        namespace ClrckabfValC{
        }
        ///Clear the regular conversion overrun
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrrovrf{}; 
        namespace ClrrovrfValC{
        }
        ///Clear the injected conversion overrun
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrjovrf{}; 
        namespace ClrjovrfValC{
        }
    }
    namespace Nonedfsdm1Jchgr{    ///<injected channel group selection
          register
        using Addr = Register::Address<0x40016210,0xffffff00,0,unsigned>;
        ///Injected channel group
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> jchg{}; 
        namespace JchgValC{
        }
    }
    namespace Nonedfsdm1Fcr{    ///<filter control register
        using Addr = Register::Address<0x40016214,0x1c00ff00,0,unsigned>;
        ///Sinc filter order
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ford{}; 
        namespace FordValC{
        }
        ///Sinc filter oversampling ratio
              (decimation rate)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> fosr{}; 
        namespace FosrValC{
        }
        ///Integrator oversampling ratio (averaging
              length)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iosr{}; 
        namespace IosrValC{
        }
    }
    namespace Nonedfsdm1Jdatar{    ///<data register for injected
          group
        using Addr = Register::Address<0x40016218,0x000000f8,0,unsigned>;
        ///Injected group conversion
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> jdata{}; 
        namespace JdataValC{
        }
        ///Injected channel most recently
              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> jdatach{}; 
        namespace JdatachValC{
        }
    }
    namespace Nonedfsdm1Rdatar{    ///<data register for the regular
          channel
        using Addr = Register::Address<0x4001621c,0x000000e8,0,unsigned>;
        ///Regular channel conversion
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> rdata{}; 
        namespace RdataValC{
        }
        ///Regular channel pending
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rpend{}; 
        namespace RpendValC{
        }
        ///Regular channel most recently
              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rdatach{}; 
        namespace RdatachValC{
        }
    }
    namespace Nonedfsdm1Awhtr{    ///<analog watchdog high threshold
          register
        using Addr = Register::Address<0x40016220,0x000000f0,0,unsigned>;
        ///Analog watchdog high
              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awht{}; 
        namespace AwhtValC{
        }
        ///Break signal assignment to analog
              watchdog high threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawh{}; 
        namespace BkawhValC{
        }
    }
    namespace Nonedfsdm1Awltr{    ///<analog watchdog low threshold
          register
        using Addr = Register::Address<0x40016224,0x000000f0,0,unsigned>;
        ///Analog watchdog low
              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awlt{}; 
        namespace AwltValC{
        }
        ///Break signal assignment to analog
              watchdog low threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawl{}; 
        namespace BkawlValC{
        }
    }
    namespace Nonedfsdm1Awsr{    ///<analog watchdog status
          register
        using Addr = Register::Address<0x40016228,0xffff0000,0,unsigned>;
        ///Analog watchdog high threshold
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> awhtf{}; 
        namespace AwhtfValC{
        }
        ///Analog watchdog low threshold
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> awltf{}; 
        namespace AwltfValC{
        }
    }
    namespace Nonedfsdm1Awcfr{    ///<analog watchdog clear flag
          register
        using Addr = Register::Address<0x4001622c,0xffff0000,0,unsigned>;
        ///Clear the analog watchdog high threshold
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clrawhtf{}; 
        namespace ClrawhtfValC{
        }
        ///Clear the analog watchdog low threshold
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clrawltf{}; 
        namespace ClrawltfValC{
        }
    }
    namespace Nonedfsdm1Exmax{    ///<Extremes detector maximum
          register
        using Addr = Register::Address<0x40016230,0x000000f8,0,unsigned>;
        ///Extremes detector maximum
              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmax{}; 
        namespace ExmaxValC{
        }
        ///Extremes detector maximum data
              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exmaxch{}; 
        namespace ExmaxchValC{
        }
    }
    namespace Nonedfsdm1Exmin{    ///<Extremes detector minimum
          register
        using Addr = Register::Address<0x40016234,0x000000f8,0,unsigned>;
        ///EXMIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmin{}; 
        namespace ExminValC{
        }
        ///Extremes detector minimum data
              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exminch{}; 
        namespace ExminchValC{
        }
    }
    namespace Nonedfsdm1Cnvtimr{    ///<conversion timer register
        using Addr = Register::Address<0x40016238,0x0000000f,0,unsigned>;
        ///28-bit timer counting conversion time t
              = CNVCNT[27:0] / fDFSDM_CKIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> cnvcnt{}; 
        namespace CnvcntValC{
        }
    }
    namespace Nonedfsdm2Cr1{    ///<control register 1
        using Addr = Register::Address<0x40016300,0x98d198c4,0,unsigned>;
        ///Analog watchdog fast mode
              select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> awfsel{}; 
        namespace AwfselValC{
        }
        ///Fast conversion mode selection for
              regular conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> fast{}; 
        namespace FastValC{
        }
        ///Regular channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> rch{}; 
        namespace RchValC{
        }
        ///DMA channel enabled to read data for the
              regular conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rdmaen{}; 
        namespace RdmaenValC{
        }
        ///Launch regular conversion synchronously
              with DFSDM0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rsync{}; 
        namespace RsyncValC{
        }
        ///Continuous mode selection for regular
              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcont{}; 
        namespace RcontValC{
        }
        ///Software start of a conversion on the
              regular channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rswstart{}; 
        namespace RswstartValC{
        }
        ///Trigger enable and trigger edge
              selection for injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> jexten{}; 
        namespace JextenValC{
        }
        ///Trigger signal selection for launching
              injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> jextsel{}; 
        namespace JextselValC{
        }
        ///DMA channel enabled to read data for the
              injected channel group
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jdmaen{}; 
        namespace JdmaenValC{
        }
        ///Scanning conversion mode for injected
              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> jscan{}; 
        namespace JscanValC{
        }
        ///Launch an injected conversion
              synchronously with the DFSDM0 JSWSTART
              trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jsync{}; 
        namespace JsyncValC{
        }
        ///Start a conversion of the injected group
              of channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> jswstart{}; 
        namespace JswstartValC{
        }
        ///DFSDM enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dfen{}; 
        namespace DfenValC{
        }
    }
    namespace Nonedfsdm2Cr2{    ///<control register 2
        using Addr = Register::Address<0x40016304,0xff000080,0,unsigned>;
        ///Analog watchdog channel
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> awdch{}; 
        namespace AwdchValC{
        }
        ///Extremes detector channel
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> exch{}; 
        namespace ExchValC{
        }
        ///Clock absence interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckabie{}; 
        namespace CkabieValC{
        }
        ///Short-circuit detector interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scdie{}; 
        namespace ScdieValC{
        }
        ///Analog watchdog interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdie{}; 
        namespace AwdieValC{
        }
        ///Regular data overrun interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrie{}; 
        namespace RovrieValC{
        }
        ///Injected data overrun interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrie{}; 
        namespace JovrieValC{
        }
        ///Regular end of conversion interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocie{}; 
        namespace ReocieValC{
        }
        ///Injected end of conversion interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocie{}; 
        namespace JeocieValC{
        }
    }
    namespace Nonedfsdm2Isr{    ///<interrupt and status register
        using Addr = Register::Address<0x40016308,0x00009fe0,0,unsigned>;
        ///short-circuit detector
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> scdf{}; 
        namespace ScdfValC{
        }
        ///Clock absence flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckabf{}; 
        namespace CkabfValC{
        }
        ///Regular conversion in progress
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rcip{}; 
        namespace RcipValC{
        }
        ///Injected conversion in progress
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> jcip{}; 
        namespace JcipValC{
        }
        ///Analog watchdog
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdf{}; 
        namespace AwdfValC{
        }
        ///Regular conversion overrun
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrf{}; 
        namespace RovrfValC{
        }
        ///Injected conversion overrun
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrf{}; 
        namespace JovrfValC{
        }
        ///End of regular conversion
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocf{}; 
        namespace ReocfValC{
        }
        ///End of injected conversion
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocf{}; 
        namespace JeocfValC{
        }
    }
    namespace Nonedfsdm2Icr{    ///<interrupt flag clear register
        using Addr = Register::Address<0x4001630c,0x0000fff3,0,unsigned>;
        ///Clear the short-circuit detector
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> clrscdf{}; 
        namespace ClrscdfValC{
        }
        ///Clear the clock absence
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> clrckabf{}; 
        namespace ClrckabfValC{
        }
        ///Clear the regular conversion overrun
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrrovrf{}; 
        namespace ClrrovrfValC{
        }
        ///Clear the injected conversion overrun
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrjovrf{}; 
        namespace ClrjovrfValC{
        }
    }
    namespace Nonedfsdm2Jchgr{    ///<injected channel group selection
          register
        using Addr = Register::Address<0x40016310,0xffffff00,0,unsigned>;
        ///Injected channel group
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> jchg{}; 
        namespace JchgValC{
        }
    }
    namespace Nonedfsdm2Fcr{    ///<filter control register
        using Addr = Register::Address<0x40016314,0x1c00ff00,0,unsigned>;
        ///Sinc filter order
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ford{}; 
        namespace FordValC{
        }
        ///Sinc filter oversampling ratio
              (decimation rate)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> fosr{}; 
        namespace FosrValC{
        }
        ///Integrator oversampling ratio (averaging
              length)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iosr{}; 
        namespace IosrValC{
        }
    }
    namespace Nonedfsdm2Jdatar{    ///<data register for injected
          group
        using Addr = Register::Address<0x40016318,0x000000f8,0,unsigned>;
        ///Injected group conversion
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> jdata{}; 
        namespace JdataValC{
        }
        ///Injected channel most recently
              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> jdatach{}; 
        namespace JdatachValC{
        }
    }
    namespace Nonedfsdm2Rdatar{    ///<data register for the regular
          channel
        using Addr = Register::Address<0x4001631c,0x000000e8,0,unsigned>;
        ///Regular channel conversion
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> rdata{}; 
        namespace RdataValC{
        }
        ///Regular channel pending
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rpend{}; 
        namespace RpendValC{
        }
        ///Regular channel most recently
              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rdatach{}; 
        namespace RdatachValC{
        }
    }
    namespace Nonedfsdm2Awhtr{    ///<analog watchdog high threshold
          register
        using Addr = Register::Address<0x40016320,0x000000f0,0,unsigned>;
        ///Analog watchdog high
              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awht{}; 
        namespace AwhtValC{
        }
        ///Break signal assignment to analog
              watchdog high threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawh{}; 
        namespace BkawhValC{
        }
    }
    namespace Nonedfsdm2Awltr{    ///<analog watchdog low threshold
          register
        using Addr = Register::Address<0x40016324,0x000000f0,0,unsigned>;
        ///Analog watchdog low
              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awlt{}; 
        namespace AwltValC{
        }
        ///Break signal assignment to analog
              watchdog low threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawl{}; 
        namespace BkawlValC{
        }
    }
    namespace Nonedfsdm2Awsr{    ///<analog watchdog status
          register
        using Addr = Register::Address<0x40016328,0xffff0000,0,unsigned>;
        ///Analog watchdog high threshold
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> awhtf{}; 
        namespace AwhtfValC{
        }
        ///Analog watchdog low threshold
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> awltf{}; 
        namespace AwltfValC{
        }
    }
    namespace Nonedfsdm2Awcfr{    ///<analog watchdog clear flag
          register
        using Addr = Register::Address<0x4001632c,0xffff0000,0,unsigned>;
        ///Clear the analog watchdog high threshold
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clrawhtf{}; 
        namespace ClrawhtfValC{
        }
        ///Clear the analog watchdog low threshold
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clrawltf{}; 
        namespace ClrawltfValC{
        }
    }
    namespace Nonedfsdm2Exmax{    ///<Extremes detector maximum
          register
        using Addr = Register::Address<0x40016330,0x000000f8,0,unsigned>;
        ///Extremes detector maximum
              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmax{}; 
        namespace ExmaxValC{
        }
        ///Extremes detector maximum data
              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exmaxch{}; 
        namespace ExmaxchValC{
        }
    }
    namespace Nonedfsdm2Exmin{    ///<Extremes detector minimum
          register
        using Addr = Register::Address<0x40016334,0x000000f8,0,unsigned>;
        ///EXMIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmin{}; 
        namespace ExminValC{
        }
        ///Extremes detector minimum data
              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exminch{}; 
        namespace ExminchValC{
        }
    }
    namespace Nonedfsdm2Cnvtimr{    ///<conversion timer register
        using Addr = Register::Address<0x40016338,0x0000000f,0,unsigned>;
        ///28-bit timer counting conversion time t
              = CNVCNT[27:0] / fDFSDM_CKIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> cnvcnt{}; 
        namespace CnvcntValC{
        }
    }
    namespace Nonedfsdm3Cr1{    ///<control register 1
        using Addr = Register::Address<0x40016400,0x98d198c4,0,unsigned>;
        ///Analog watchdog fast mode
              select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> awfsel{}; 
        namespace AwfselValC{
        }
        ///Fast conversion mode selection for
              regular conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> fast{}; 
        namespace FastValC{
        }
        ///Regular channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> rch{}; 
        namespace RchValC{
        }
        ///DMA channel enabled to read data for the
              regular conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rdmaen{}; 
        namespace RdmaenValC{
        }
        ///Launch regular conversion synchronously
              with DFSDM0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rsync{}; 
        namespace RsyncValC{
        }
        ///Continuous mode selection for regular
              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcont{}; 
        namespace RcontValC{
        }
        ///Software start of a conversion on the
              regular channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rswstart{}; 
        namespace RswstartValC{
        }
        ///Trigger enable and trigger edge
              selection for injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> jexten{}; 
        namespace JextenValC{
        }
        ///Trigger signal selection for launching
              injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> jextsel{}; 
        namespace JextselValC{
        }
        ///DMA channel enabled to read data for the
              injected channel group
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jdmaen{}; 
        namespace JdmaenValC{
        }
        ///Scanning conversion mode for injected
              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> jscan{}; 
        namespace JscanValC{
        }
        ///Launch an injected conversion
              synchronously with the DFSDM0 JSWSTART
              trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jsync{}; 
        namespace JsyncValC{
        }
        ///Start a conversion of the injected group
              of channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> jswstart{}; 
        namespace JswstartValC{
        }
        ///DFSDM enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dfen{}; 
        namespace DfenValC{
        }
    }
    namespace Nonedfsdm3Cr2{    ///<control register 2
        using Addr = Register::Address<0x40016404,0xff000080,0,unsigned>;
        ///Analog watchdog channel
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> awdch{}; 
        namespace AwdchValC{
        }
        ///Extremes detector channel
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> exch{}; 
        namespace ExchValC{
        }
        ///Clock absence interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckabie{}; 
        namespace CkabieValC{
        }
        ///Short-circuit detector interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scdie{}; 
        namespace ScdieValC{
        }
        ///Analog watchdog interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdie{}; 
        namespace AwdieValC{
        }
        ///Regular data overrun interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrie{}; 
        namespace RovrieValC{
        }
        ///Injected data overrun interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrie{}; 
        namespace JovrieValC{
        }
        ///Regular end of conversion interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocie{}; 
        namespace ReocieValC{
        }
        ///Injected end of conversion interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocie{}; 
        namespace JeocieValC{
        }
    }
    namespace Nonedfsdm3Isr{    ///<interrupt and status register
        using Addr = Register::Address<0x40016408,0x00009fe0,0,unsigned>;
        ///short-circuit detector
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> scdf{}; 
        namespace ScdfValC{
        }
        ///Clock absence flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckabf{}; 
        namespace CkabfValC{
        }
        ///Regular conversion in progress
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rcip{}; 
        namespace RcipValC{
        }
        ///Injected conversion in progress
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> jcip{}; 
        namespace JcipValC{
        }
        ///Analog watchdog
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdf{}; 
        namespace AwdfValC{
        }
        ///Regular conversion overrun
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrf{}; 
        namespace RovrfValC{
        }
        ///Injected conversion overrun
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrf{}; 
        namespace JovrfValC{
        }
        ///End of regular conversion
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocf{}; 
        namespace ReocfValC{
        }
        ///End of injected conversion
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocf{}; 
        namespace JeocfValC{
        }
    }
    namespace Nonedfsdm3Icr{    ///<interrupt flag clear register
        using Addr = Register::Address<0x4001640c,0x0000fff3,0,unsigned>;
        ///Clear the short-circuit detector
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> clrscdf{}; 
        namespace ClrscdfValC{
        }
        ///Clear the clock absence
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> clrckabf{}; 
        namespace ClrckabfValC{
        }
        ///Clear the regular conversion overrun
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrrovrf{}; 
        namespace ClrrovrfValC{
        }
        ///Clear the injected conversion overrun
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrjovrf{}; 
        namespace ClrjovrfValC{
        }
    }
    namespace Nonedfsdm3Jchgr{    ///<injected channel group selection
          register
        using Addr = Register::Address<0x40016410,0xffffff00,0,unsigned>;
        ///Injected channel group
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> jchg{}; 
        namespace JchgValC{
        }
    }
    namespace Nonedfsdm3Fcr{    ///<filter control register
        using Addr = Register::Address<0x40016414,0x1c00ff00,0,unsigned>;
        ///Sinc filter order
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ford{}; 
        namespace FordValC{
        }
        ///Sinc filter oversampling ratio
              (decimation rate)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> fosr{}; 
        namespace FosrValC{
        }
        ///Integrator oversampling ratio (averaging
              length)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iosr{}; 
        namespace IosrValC{
        }
    }
    namespace Nonedfsdm3Jdatar{    ///<data register for injected
          group
        using Addr = Register::Address<0x40016418,0x000000f8,0,unsigned>;
        ///Injected group conversion
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> jdata{}; 
        namespace JdataValC{
        }
        ///Injected channel most recently
              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> jdatach{}; 
        namespace JdatachValC{
        }
    }
    namespace Nonedfsdm3Rdatar{    ///<data register for the regular
          channel
        using Addr = Register::Address<0x4001641c,0x000000e8,0,unsigned>;
        ///Regular channel conversion
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> rdata{}; 
        namespace RdataValC{
        }
        ///Regular channel pending
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rpend{}; 
        namespace RpendValC{
        }
        ///Regular channel most recently
              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rdatach{}; 
        namespace RdatachValC{
        }
    }
    namespace Nonedfsdm3Awhtr{    ///<analog watchdog high threshold
          register
        using Addr = Register::Address<0x40016420,0x000000f0,0,unsigned>;
        ///Analog watchdog high
              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awht{}; 
        namespace AwhtValC{
        }
        ///Break signal assignment to analog
              watchdog high threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawh{}; 
        namespace BkawhValC{
        }
    }
    namespace Nonedfsdm3Awltr{    ///<analog watchdog low threshold
          register
        using Addr = Register::Address<0x40016424,0x000000f0,0,unsigned>;
        ///Analog watchdog low
              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awlt{}; 
        namespace AwltValC{
        }
        ///Break signal assignment to analog
              watchdog low threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawl{}; 
        namespace BkawlValC{
        }
    }
    namespace Nonedfsdm3Awsr{    ///<analog watchdog status
          register
        using Addr = Register::Address<0x40016428,0xffff0000,0,unsigned>;
        ///Analog watchdog high threshold
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> awhtf{}; 
        namespace AwhtfValC{
        }
        ///Analog watchdog low threshold
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> awltf{}; 
        namespace AwltfValC{
        }
    }
    namespace Nonedfsdm3Awcfr{    ///<analog watchdog clear flag
          register
        using Addr = Register::Address<0x4001642c,0xffff0000,0,unsigned>;
        ///Clear the analog watchdog high threshold
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clrawhtf{}; 
        namespace ClrawhtfValC{
        }
        ///Clear the analog watchdog low threshold
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clrawltf{}; 
        namespace ClrawltfValC{
        }
    }
    namespace Nonedfsdm3Exmax{    ///<Extremes detector maximum
          register
        using Addr = Register::Address<0x40016430,0x000000f8,0,unsigned>;
        ///Extremes detector maximum
              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmax{}; 
        namespace ExmaxValC{
        }
        ///Extremes detector maximum data
              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exmaxch{}; 
        namespace ExmaxchValC{
        }
    }
    namespace Nonedfsdm3Exmin{    ///<Extremes detector minimum
          register
        using Addr = Register::Address<0x40016434,0x000000f8,0,unsigned>;
        ///EXMIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmin{}; 
        namespace ExminValC{
        }
        ///Extremes detector minimum data
              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exminch{}; 
        namespace ExminchValC{
        }
    }
    namespace Nonedfsdm3Cnvtimr{    ///<conversion timer register
        using Addr = Register::Address<0x40016438,0x0000000f,0,unsigned>;
        ///28-bit timer counting conversion time t
              = CNVCNT[27:0] / fDFSDM_CKIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> cnvcnt{}; 
        namespace CnvcntValC{
        }
    }
}
