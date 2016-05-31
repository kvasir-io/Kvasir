#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Digital filter for sigma delta      modulators
    namespace DfsdmChcfg0r1{    ///<channel configuration y          register
        using Addr = Register::Address<0x40016000,0x3f000e10,0x00000000,unsigned>;
        ///DFSDMEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dfsdmen{}; 
        ///CKOUTSRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ckoutsrc{}; 
        ///CKOUTDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckoutdiv{}; 
        ///DATPACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        ///DATMPX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        ///CHINSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        ///CKABEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        ///SCDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        ///SPICKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        ///SITP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
    }
    namespace DfsdmChcfg0r2{    ///<channel configuration y          register
        using Addr = Register::Address<0x40016004,0x00000007,0x00000000,unsigned>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
    }
    namespace DfsdmAwscd0r{    ///<analog watchdog and short-circuit detector          register
        using Addr = Register::Address<0x40016008,0xff200f00,0x00000000,unsigned>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
    }
    namespace DfsdmChwdat0r{    ///<channel watchdog filter data          register
        using Addr = Register::Address<0x4001600c,0xffff0000,0x00000000,unsigned>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace DfsdmChdatin0r{    ///<channel data input register
        using Addr = Register::Address<0x40016010,0x00000000,0x00000000,unsigned>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
    }
    namespace DfsdmChcfg1r1{    ///<CHCFG1R1
        using Addr = Register::Address<0x40016020,0xffff0e10,0x00000000,unsigned>;
        ///DATPACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        ///DATMPX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        ///CHINSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        ///CKABEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        ///SCDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        ///SPICKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        ///SITP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
    }
    namespace DfsdmChcfg1r2{    ///<CHCFG1R2
        using Addr = Register::Address<0x40016024,0x00000007,0x00000000,unsigned>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
    }
    namespace DfsdmAwscd1r{    ///<AWSCD1R
        using Addr = Register::Address<0x40016028,0xff200f00,0x00000000,unsigned>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
    }
    namespace DfsdmChwdat1r{    ///<CHWDAT1R
        using Addr = Register::Address<0x4001602c,0xffff0000,0x00000000,unsigned>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace DfsdmChdatin1r{    ///<CHDATIN1R
        using Addr = Register::Address<0x40016030,0x00000000,0x00000000,unsigned>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
    }
    namespace DfsdmChcfg2r1{    ///<CHCFG2R1
        using Addr = Register::Address<0x40016040,0xffff0e10,0x00000000,unsigned>;
        ///DATPACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        ///DATMPX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        ///CHINSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        ///CKABEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        ///SCDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        ///SPICKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        ///SITP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
    }
    namespace DfsdmChcfg2r2{    ///<CHCFG2R2
        using Addr = Register::Address<0x40016044,0x00000007,0x00000000,unsigned>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
    }
    namespace DfsdmAwscd2r{    ///<AWSCD2R
        using Addr = Register::Address<0x40016048,0xff200f00,0x00000000,unsigned>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
    }
    namespace DfsdmChwdat2r{    ///<CHWDAT2R
        using Addr = Register::Address<0x4001604c,0xffff0000,0x00000000,unsigned>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace DfsdmChdatin2r{    ///<CHDATIN2R
        using Addr = Register::Address<0x40016050,0x00000000,0x00000000,unsigned>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
    }
    namespace DfsdmChcfg3r1{    ///<CHCFG3R1
        using Addr = Register::Address<0x40016060,0xffff0e10,0x00000000,unsigned>;
        ///DATPACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        ///DATMPX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        ///CHINSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        ///CKABEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        ///SCDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        ///SPICKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        ///SITP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
    }
    namespace DfsdmChcfg3r2{    ///<CHCFG3R2
        using Addr = Register::Address<0x40016064,0x00000007,0x00000000,unsigned>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
    }
    namespace DfsdmAwscd3r{    ///<AWSCD3R
        using Addr = Register::Address<0x40016068,0xff200f00,0x00000000,unsigned>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
    }
    namespace DfsdmChwdat3r{    ///<CHWDAT3R
        using Addr = Register::Address<0x4001606c,0xffff0000,0x00000000,unsigned>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace DfsdmChdatin3r{    ///<CHDATIN3R
        using Addr = Register::Address<0x40016070,0x00000000,0x00000000,unsigned>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
    }
    namespace DfsdmChcfg4r1{    ///<CHCFG4R1
        using Addr = Register::Address<0x40016080,0xffff0e10,0x00000000,unsigned>;
        ///DATPACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        ///DATMPX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        ///CHINSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        ///CKABEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        ///SCDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        ///SPICKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        ///SITP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
    }
    namespace DfsdmChcfg4r2{    ///<CHCFG4R2
        using Addr = Register::Address<0x40016084,0x00000007,0x00000000,unsigned>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
    }
    namespace DfsdmAwscd4r{    ///<AWSCD4R
        using Addr = Register::Address<0x40016088,0xff200f00,0x00000000,unsigned>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
    }
    namespace DfsdmChwdat4r{    ///<CHWDAT4R
        using Addr = Register::Address<0x4001608c,0xffff0000,0x00000000,unsigned>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace DfsdmChdatin4r{    ///<CHDATIN4R
        using Addr = Register::Address<0x40016090,0x00000000,0x00000000,unsigned>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
    }
    namespace DfsdmChcfg5r1{    ///<CHCFG5R1
        using Addr = Register::Address<0x400160a0,0xffff0e10,0x00000000,unsigned>;
        ///DATPACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        ///DATMPX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        ///CHINSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        ///CKABEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        ///SCDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        ///SPICKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        ///SITP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
    }
    namespace DfsdmChcfg5r2{    ///<CHCFG5R2
        using Addr = Register::Address<0x400160a4,0x00000007,0x00000000,unsigned>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
    }
    namespace DfsdmAwscd5r{    ///<AWSCD5R
        using Addr = Register::Address<0x400160a8,0xff200f00,0x00000000,unsigned>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
    }
    namespace DfsdmChwdat5r{    ///<CHWDAT5R
        using Addr = Register::Address<0x400160ac,0xffff0000,0x00000000,unsigned>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace DfsdmChdatin5r{    ///<CHDATIN5R
        using Addr = Register::Address<0x400160b0,0x00000000,0x00000000,unsigned>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
    }
    namespace DfsdmChcfg6r1{    ///<CHCFG6R1
        using Addr = Register::Address<0x400160c0,0xffff0e10,0x00000000,unsigned>;
        ///DATPACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        ///DATMPX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        ///CHINSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        ///CKABEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        ///SCDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        ///SPICKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        ///SITP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
    }
    namespace DfsdmChcfg6r2{    ///<CHCFG6R2
        using Addr = Register::Address<0x400160c4,0x00000007,0x00000000,unsigned>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
    }
    namespace DfsdmAwscd6r{    ///<AWSCD6R
        using Addr = Register::Address<0x400160c8,0xff200f00,0x00000000,unsigned>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
    }
    namespace DfsdmChwdat6r{    ///<CHWDAT6R
        using Addr = Register::Address<0x400160cc,0xffff0000,0x00000000,unsigned>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace DfsdmChdatin6r{    ///<CHDATIN6R
        using Addr = Register::Address<0x400160d0,0x00000000,0x00000000,unsigned>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
    }
    namespace DfsdmChcfg7r1{    ///<CHCFG7R1
        using Addr = Register::Address<0x400160e0,0xffff0e10,0x00000000,unsigned>;
        ///DATPACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> datpack{}; 
        ///DATMPX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> datmpx{}; 
        ///CHINSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chinsel{}; 
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen{}; 
        ///CKABEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckaben{}; 
        ///SCDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scden{}; 
        ///SPICKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> spicksel{}; 
        ///SITP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sitp{}; 
    }
    namespace DfsdmChcfg7r2{    ///<CHCFG7R2
        using Addr = Register::Address<0x400160e4,0x00000007,0x00000000,unsigned>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> offset{}; 
        ///DTRBS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> dtrbs{}; 
    }
    namespace DfsdmAwscd7r{    ///<AWSCD7R
        using Addr = Register::Address<0x400160e8,0xff200f00,0x00000000,unsigned>;
        ///AWFORD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> awford{}; 
        ///AWFOSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> awfosr{}; 
        ///BKSCD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> bkscd{}; 
        ///SCDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scdt{}; 
    }
    namespace DfsdmChwdat7r{    ///<CHWDAT7R
        using Addr = Register::Address<0x400160ec,0xffff0000,0x00000000,unsigned>;
        ///WDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> wdata{}; 
    }
    namespace DfsdmChdatin7r{    ///<CHDATIN7R
        using Addr = Register::Address<0x400160f0,0x00000000,0x00000000,unsigned>;
        ///INDAT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> indat1{}; 
        ///INDAT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> indat0{}; 
    }
    namespace DfsdmDfsdm0Cr1{    ///<control register 1
        using Addr = Register::Address<0x40016100,0x98d198c4,0x00000000,unsigned>;
        ///Analog watchdog fast mode              select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> awfsel{}; 
        ///Fast conversion mode selection for              regular conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> fast{}; 
        ///Regular channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> rch{}; 
        ///DMA channel enabled to read data for the              regular conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rdmaen{}; 
        ///Launch regular conversion synchronously              with DFSDM0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rsync{}; 
        ///Continuous mode selection for regular              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcont{}; 
        ///Software start of a conversion on the              regular channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rswstart{}; 
        ///Trigger enable and trigger edge              selection for injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> jexten{}; 
        ///Trigger signal selection for launching              injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> jextsel{}; 
        ///DMA channel enabled to read data for the              injected channel group
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jdmaen{}; 
        ///Scanning conversion mode for injected              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> jscan{}; 
        ///Launch an injected conversion              synchronously with the DFSDM0 JSWSTART              trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jsync{}; 
        ///Start a conversion of the injected group              of channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> jswstart{}; 
        ///DFSDM enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dfen{}; 
    }
    namespace DfsdmDfsdm0Cr2{    ///<control register 2
        using Addr = Register::Address<0x40016104,0xff000080,0x00000000,unsigned>;
        ///Analog watchdog channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> awdch{}; 
        ///Extremes detector channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> exch{}; 
        ///Clock absence interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckabie{}; 
        ///Short-circuit detector interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scdie{}; 
        ///Analog watchdog interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdie{}; 
        ///Regular data overrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrie{}; 
        ///Injected data overrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrie{}; 
        ///Regular end of conversion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocie{}; 
        ///Injected end of conversion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocie{}; 
    }
    namespace DfsdmDfsdm0Isr{    ///<interrupt and status register
        using Addr = Register::Address<0x40016108,0x00009fe0,0x00000000,unsigned>;
        ///short-circuit detector              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> scdf{}; 
        ///Clock absence flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckabf{}; 
        ///Regular conversion in progress              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rcip{}; 
        ///Injected conversion in progress              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> jcip{}; 
        ///Analog watchdog
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdf{}; 
        ///Regular conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrf{}; 
        ///Injected conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrf{}; 
        ///End of regular conversion              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocf{}; 
        ///End of injected conversion              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocf{}; 
    }
    namespace DfsdmDfsdm0Icr{    ///<interrupt flag clear register
        using Addr = Register::Address<0x4001610c,0x0000fff3,0x00000000,unsigned>;
        ///Clear the short-circuit detector              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> clrscdf{}; 
        ///Clear the clock absence              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> clrckabf{}; 
        ///Clear the regular conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrrovrf{}; 
        ///Clear the injected conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrjovrf{}; 
    }
    namespace DfsdmDfsdm0Jchgr{    ///<injected channel group selection          register
        using Addr = Register::Address<0x40016110,0xffffff00,0x00000000,unsigned>;
        ///Injected channel group              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> jchg{}; 
    }
    namespace DfsdmDfsdm0Fcr{    ///<filter control register
        using Addr = Register::Address<0x40016114,0x1c00ff00,0x00000000,unsigned>;
        ///Sinc filter order
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ford{}; 
        ///Sinc filter oversampling ratio              (decimation rate)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> fosr{}; 
        ///Integrator oversampling ratio (averaging              length)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iosr{}; 
    }
    namespace DfsdmDfsdm0Jdatar{    ///<data register for injected          group
        using Addr = Register::Address<0x40016118,0x000000f8,0x00000000,unsigned>;
        ///Injected group conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> jdata{}; 
        ///Injected channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> jdatach{}; 
    }
    namespace DfsdmDfsdm0Rdatar{    ///<data register for the regular          channel
        using Addr = Register::Address<0x4001611c,0x000000e8,0x00000000,unsigned>;
        ///Regular channel conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> rdata{}; 
        ///Regular channel pending              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rpend{}; 
        ///Regular channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rdatach{}; 
    }
    namespace DfsdmDfsdm0Awhtr{    ///<analog watchdog high threshold          register
        using Addr = Register::Address<0x40016120,0x000000f0,0x00000000,unsigned>;
        ///Analog watchdog high              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awht{}; 
        ///Break signal assignment to analog              watchdog high threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawh{}; 
    }
    namespace DfsdmDfsdm0Awltr{    ///<analog watchdog low threshold          register
        using Addr = Register::Address<0x40016124,0x000000f0,0x00000000,unsigned>;
        ///Analog watchdog low              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awlt{}; 
        ///Break signal assignment to analog              watchdog low threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawl{}; 
    }
    namespace DfsdmDfsdm0Awsr{    ///<analog watchdog status          register
        using Addr = Register::Address<0x40016128,0xffff0000,0x00000000,unsigned>;
        ///Analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> awhtf{}; 
        ///Analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> awltf{}; 
    }
    namespace DfsdmDfsdm0Awcfr{    ///<analog watchdog clear flag          register
        using Addr = Register::Address<0x4001612c,0xffff0000,0x00000000,unsigned>;
        ///Clear the analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clrawhtf{}; 
        ///Clear the analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clrawltf{}; 
    }
    namespace DfsdmDfsdm0Exmax{    ///<Extremes detector maximum          register
        using Addr = Register::Address<0x40016130,0x000000f8,0x00000000,unsigned>;
        ///Extremes detector maximum              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmax{}; 
        ///Extremes detector maximum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exmaxch{}; 
    }
    namespace DfsdmDfsdm0Exmin{    ///<Extremes detector minimum          register
        using Addr = Register::Address<0x40016134,0x000000f8,0x00000000,unsigned>;
        ///EXMIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmin{}; 
        ///Extremes detector minimum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exminch{}; 
    }
    namespace DfsdmDfsdm0Cnvtimr{    ///<conversion timer register
        using Addr = Register::Address<0x40016138,0x0000000f,0x00000000,unsigned>;
        ///28-bit timer counting conversion time t              = CNVCNT[27:0] / fDFSDM_CKIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> cnvcnt{}; 
    }
    namespace DfsdmDfsdm1Cr1{    ///<control register 1
        using Addr = Register::Address<0x40016200,0x98d198c4,0x00000000,unsigned>;
        ///Analog watchdog fast mode              select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> awfsel{}; 
        ///Fast conversion mode selection for              regular conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> fast{}; 
        ///Regular channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> rch{}; 
        ///DMA channel enabled to read data for the              regular conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rdmaen{}; 
        ///Launch regular conversion synchronously              with DFSDM0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rsync{}; 
        ///Continuous mode selection for regular              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcont{}; 
        ///Software start of a conversion on the              regular channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rswstart{}; 
        ///Trigger enable and trigger edge              selection for injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> jexten{}; 
        ///Trigger signal selection for launching              injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> jextsel{}; 
        ///DMA channel enabled to read data for the              injected channel group
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jdmaen{}; 
        ///Scanning conversion mode for injected              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> jscan{}; 
        ///Launch an injected conversion              synchronously with the DFSDM0 JSWSTART              trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jsync{}; 
        ///Start a conversion of the injected group              of channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> jswstart{}; 
        ///DFSDM enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dfen{}; 
    }
    namespace DfsdmDfsdm1Cr2{    ///<control register 2
        using Addr = Register::Address<0x40016204,0xff000080,0x00000000,unsigned>;
        ///Analog watchdog channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> awdch{}; 
        ///Extremes detector channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> exch{}; 
        ///Clock absence interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckabie{}; 
        ///Short-circuit detector interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scdie{}; 
        ///Analog watchdog interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdie{}; 
        ///Regular data overrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrie{}; 
        ///Injected data overrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrie{}; 
        ///Regular end of conversion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocie{}; 
        ///Injected end of conversion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocie{}; 
    }
    namespace DfsdmDfsdm1Isr{    ///<interrupt and status register
        using Addr = Register::Address<0x40016208,0x00009fe0,0x00000000,unsigned>;
        ///short-circuit detector              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> scdf{}; 
        ///Clock absence flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckabf{}; 
        ///Regular conversion in progress              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rcip{}; 
        ///Injected conversion in progress              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> jcip{}; 
        ///Analog watchdog
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdf{}; 
        ///Regular conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrf{}; 
        ///Injected conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrf{}; 
        ///End of regular conversion              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocf{}; 
        ///End of injected conversion              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocf{}; 
    }
    namespace DfsdmDfsdm1Icr{    ///<interrupt flag clear register
        using Addr = Register::Address<0x4001620c,0x0000fff3,0x00000000,unsigned>;
        ///Clear the short-circuit detector              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> clrscdf{}; 
        ///Clear the clock absence              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> clrckabf{}; 
        ///Clear the regular conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrrovrf{}; 
        ///Clear the injected conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrjovrf{}; 
    }
    namespace DfsdmDfsdm1Jchgr{    ///<injected channel group selection          register
        using Addr = Register::Address<0x40016210,0xffffff00,0x00000000,unsigned>;
        ///Injected channel group              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> jchg{}; 
    }
    namespace DfsdmDfsdm1Fcr{    ///<filter control register
        using Addr = Register::Address<0x40016214,0x1c00ff00,0x00000000,unsigned>;
        ///Sinc filter order
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ford{}; 
        ///Sinc filter oversampling ratio              (decimation rate)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> fosr{}; 
        ///Integrator oversampling ratio (averaging              length)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iosr{}; 
    }
    namespace DfsdmDfsdm1Jdatar{    ///<data register for injected          group
        using Addr = Register::Address<0x40016218,0x000000f8,0x00000000,unsigned>;
        ///Injected group conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> jdata{}; 
        ///Injected channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> jdatach{}; 
    }
    namespace DfsdmDfsdm1Rdatar{    ///<data register for the regular          channel
        using Addr = Register::Address<0x4001621c,0x000000e8,0x00000000,unsigned>;
        ///Regular channel conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> rdata{}; 
        ///Regular channel pending              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rpend{}; 
        ///Regular channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rdatach{}; 
    }
    namespace DfsdmDfsdm1Awhtr{    ///<analog watchdog high threshold          register
        using Addr = Register::Address<0x40016220,0x000000f0,0x00000000,unsigned>;
        ///Analog watchdog high              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awht{}; 
        ///Break signal assignment to analog              watchdog high threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawh{}; 
    }
    namespace DfsdmDfsdm1Awltr{    ///<analog watchdog low threshold          register
        using Addr = Register::Address<0x40016224,0x000000f0,0x00000000,unsigned>;
        ///Analog watchdog low              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awlt{}; 
        ///Break signal assignment to analog              watchdog low threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawl{}; 
    }
    namespace DfsdmDfsdm1Awsr{    ///<analog watchdog status          register
        using Addr = Register::Address<0x40016228,0xffff0000,0x00000000,unsigned>;
        ///Analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> awhtf{}; 
        ///Analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> awltf{}; 
    }
    namespace DfsdmDfsdm1Awcfr{    ///<analog watchdog clear flag          register
        using Addr = Register::Address<0x4001622c,0xffff0000,0x00000000,unsigned>;
        ///Clear the analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clrawhtf{}; 
        ///Clear the analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clrawltf{}; 
    }
    namespace DfsdmDfsdm1Exmax{    ///<Extremes detector maximum          register
        using Addr = Register::Address<0x40016230,0x000000f8,0x00000000,unsigned>;
        ///Extremes detector maximum              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmax{}; 
        ///Extremes detector maximum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exmaxch{}; 
    }
    namespace DfsdmDfsdm1Exmin{    ///<Extremes detector minimum          register
        using Addr = Register::Address<0x40016234,0x000000f8,0x00000000,unsigned>;
        ///EXMIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmin{}; 
        ///Extremes detector minimum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exminch{}; 
    }
    namespace DfsdmDfsdm1Cnvtimr{    ///<conversion timer register
        using Addr = Register::Address<0x40016238,0x0000000f,0x00000000,unsigned>;
        ///28-bit timer counting conversion time t              = CNVCNT[27:0] / fDFSDM_CKIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> cnvcnt{}; 
    }
    namespace DfsdmDfsdm2Cr1{    ///<control register 1
        using Addr = Register::Address<0x40016300,0x98d198c4,0x00000000,unsigned>;
        ///Analog watchdog fast mode              select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> awfsel{}; 
        ///Fast conversion mode selection for              regular conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> fast{}; 
        ///Regular channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> rch{}; 
        ///DMA channel enabled to read data for the              regular conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rdmaen{}; 
        ///Launch regular conversion synchronously              with DFSDM0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rsync{}; 
        ///Continuous mode selection for regular              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcont{}; 
        ///Software start of a conversion on the              regular channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rswstart{}; 
        ///Trigger enable and trigger edge              selection for injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> jexten{}; 
        ///Trigger signal selection for launching              injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> jextsel{}; 
        ///DMA channel enabled to read data for the              injected channel group
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jdmaen{}; 
        ///Scanning conversion mode for injected              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> jscan{}; 
        ///Launch an injected conversion              synchronously with the DFSDM0 JSWSTART              trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jsync{}; 
        ///Start a conversion of the injected group              of channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> jswstart{}; 
        ///DFSDM enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dfen{}; 
    }
    namespace DfsdmDfsdm2Cr2{    ///<control register 2
        using Addr = Register::Address<0x40016304,0xff000080,0x00000000,unsigned>;
        ///Analog watchdog channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> awdch{}; 
        ///Extremes detector channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> exch{}; 
        ///Clock absence interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckabie{}; 
        ///Short-circuit detector interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scdie{}; 
        ///Analog watchdog interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdie{}; 
        ///Regular data overrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrie{}; 
        ///Injected data overrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrie{}; 
        ///Regular end of conversion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocie{}; 
        ///Injected end of conversion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocie{}; 
    }
    namespace DfsdmDfsdm2Isr{    ///<interrupt and status register
        using Addr = Register::Address<0x40016308,0x00009fe0,0x00000000,unsigned>;
        ///short-circuit detector              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> scdf{}; 
        ///Clock absence flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckabf{}; 
        ///Regular conversion in progress              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rcip{}; 
        ///Injected conversion in progress              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> jcip{}; 
        ///Analog watchdog
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdf{}; 
        ///Regular conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrf{}; 
        ///Injected conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrf{}; 
        ///End of regular conversion              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocf{}; 
        ///End of injected conversion              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocf{}; 
    }
    namespace DfsdmDfsdm2Icr{    ///<interrupt flag clear register
        using Addr = Register::Address<0x4001630c,0x0000fff3,0x00000000,unsigned>;
        ///Clear the short-circuit detector              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> clrscdf{}; 
        ///Clear the clock absence              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> clrckabf{}; 
        ///Clear the regular conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrrovrf{}; 
        ///Clear the injected conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrjovrf{}; 
    }
    namespace DfsdmDfsdm2Jchgr{    ///<injected channel group selection          register
        using Addr = Register::Address<0x40016310,0xffffff00,0x00000000,unsigned>;
        ///Injected channel group              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> jchg{}; 
    }
    namespace DfsdmDfsdm2Fcr{    ///<filter control register
        using Addr = Register::Address<0x40016314,0x1c00ff00,0x00000000,unsigned>;
        ///Sinc filter order
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ford{}; 
        ///Sinc filter oversampling ratio              (decimation rate)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> fosr{}; 
        ///Integrator oversampling ratio (averaging              length)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iosr{}; 
    }
    namespace DfsdmDfsdm2Jdatar{    ///<data register for injected          group
        using Addr = Register::Address<0x40016318,0x000000f8,0x00000000,unsigned>;
        ///Injected group conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> jdata{}; 
        ///Injected channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> jdatach{}; 
    }
    namespace DfsdmDfsdm2Rdatar{    ///<data register for the regular          channel
        using Addr = Register::Address<0x4001631c,0x000000e8,0x00000000,unsigned>;
        ///Regular channel conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> rdata{}; 
        ///Regular channel pending              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rpend{}; 
        ///Regular channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rdatach{}; 
    }
    namespace DfsdmDfsdm2Awhtr{    ///<analog watchdog high threshold          register
        using Addr = Register::Address<0x40016320,0x000000f0,0x00000000,unsigned>;
        ///Analog watchdog high              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awht{}; 
        ///Break signal assignment to analog              watchdog high threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawh{}; 
    }
    namespace DfsdmDfsdm2Awltr{    ///<analog watchdog low threshold          register
        using Addr = Register::Address<0x40016324,0x000000f0,0x00000000,unsigned>;
        ///Analog watchdog low              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awlt{}; 
        ///Break signal assignment to analog              watchdog low threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawl{}; 
    }
    namespace DfsdmDfsdm2Awsr{    ///<analog watchdog status          register
        using Addr = Register::Address<0x40016328,0xffff0000,0x00000000,unsigned>;
        ///Analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> awhtf{}; 
        ///Analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> awltf{}; 
    }
    namespace DfsdmDfsdm2Awcfr{    ///<analog watchdog clear flag          register
        using Addr = Register::Address<0x4001632c,0xffff0000,0x00000000,unsigned>;
        ///Clear the analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clrawhtf{}; 
        ///Clear the analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clrawltf{}; 
    }
    namespace DfsdmDfsdm2Exmax{    ///<Extremes detector maximum          register
        using Addr = Register::Address<0x40016330,0x000000f8,0x00000000,unsigned>;
        ///Extremes detector maximum              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmax{}; 
        ///Extremes detector maximum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exmaxch{}; 
    }
    namespace DfsdmDfsdm2Exmin{    ///<Extremes detector minimum          register
        using Addr = Register::Address<0x40016334,0x000000f8,0x00000000,unsigned>;
        ///EXMIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmin{}; 
        ///Extremes detector minimum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exminch{}; 
    }
    namespace DfsdmDfsdm2Cnvtimr{    ///<conversion timer register
        using Addr = Register::Address<0x40016338,0x0000000f,0x00000000,unsigned>;
        ///28-bit timer counting conversion time t              = CNVCNT[27:0] / fDFSDM_CKIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> cnvcnt{}; 
    }
    namespace DfsdmDfsdm3Cr1{    ///<control register 1
        using Addr = Register::Address<0x40016400,0x98d198c4,0x00000000,unsigned>;
        ///Analog watchdog fast mode              select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> awfsel{}; 
        ///Fast conversion mode selection for              regular conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> fast{}; 
        ///Regular channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> rch{}; 
        ///DMA channel enabled to read data for the              regular conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rdmaen{}; 
        ///Launch regular conversion synchronously              with DFSDM0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rsync{}; 
        ///Continuous mode selection for regular              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcont{}; 
        ///Software start of a conversion on the              regular channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rswstart{}; 
        ///Trigger enable and trigger edge              selection for injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> jexten{}; 
        ///Trigger signal selection for launching              injected conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> jextsel{}; 
        ///DMA channel enabled to read data for the              injected channel group
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jdmaen{}; 
        ///Scanning conversion mode for injected              conversions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> jscan{}; 
        ///Launch an injected conversion              synchronously with the DFSDM0 JSWSTART              trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jsync{}; 
        ///Start a conversion of the injected group              of channels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> jswstart{}; 
        ///DFSDM enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dfen{}; 
    }
    namespace DfsdmDfsdm3Cr2{    ///<control register 2
        using Addr = Register::Address<0x40016404,0xff000080,0x00000000,unsigned>;
        ///Analog watchdog channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> awdch{}; 
        ///Extremes detector channel              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> exch{}; 
        ///Clock absence interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ckabie{}; 
        ///Short-circuit detector interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scdie{}; 
        ///Analog watchdog interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdie{}; 
        ///Regular data overrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrie{}; 
        ///Injected data overrun interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrie{}; 
        ///Regular end of conversion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocie{}; 
        ///Injected end of conversion interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocie{}; 
    }
    namespace DfsdmDfsdm3Isr{    ///<interrupt and status register
        using Addr = Register::Address<0x40016408,0x00009fe0,0x00000000,unsigned>;
        ///short-circuit detector              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> scdf{}; 
        ///Clock absence flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ckabf{}; 
        ///Regular conversion in progress              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rcip{}; 
        ///Injected conversion in progress              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> jcip{}; 
        ///Analog watchdog
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awdf{}; 
        ///Regular conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rovrf{}; 
        ///Injected conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> jovrf{}; 
        ///End of regular conversion              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> reocf{}; 
        ///End of injected conversion              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> jeocf{}; 
    }
    namespace DfsdmDfsdm3Icr{    ///<interrupt flag clear register
        using Addr = Register::Address<0x4001640c,0x0000fff3,0x00000000,unsigned>;
        ///Clear the short-circuit detector              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> clrscdf{}; 
        ///Clear the clock absence              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> clrckabf{}; 
        ///Clear the regular conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrrovrf{}; 
        ///Clear the injected conversion overrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrjovrf{}; 
    }
    namespace DfsdmDfsdm3Jchgr{    ///<injected channel group selection          register
        using Addr = Register::Address<0x40016410,0xffffff00,0x00000000,unsigned>;
        ///Injected channel group              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> jchg{}; 
    }
    namespace DfsdmDfsdm3Fcr{    ///<filter control register
        using Addr = Register::Address<0x40016414,0x1c00ff00,0x00000000,unsigned>;
        ///Sinc filter order
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ford{}; 
        ///Sinc filter oversampling ratio              (decimation rate)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> fosr{}; 
        ///Integrator oversampling ratio (averaging              length)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> iosr{}; 
    }
    namespace DfsdmDfsdm3Jdatar{    ///<data register for injected          group
        using Addr = Register::Address<0x40016418,0x000000f8,0x00000000,unsigned>;
        ///Injected group conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> jdata{}; 
        ///Injected channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> jdatach{}; 
    }
    namespace DfsdmDfsdm3Rdatar{    ///<data register for the regular          channel
        using Addr = Register::Address<0x4001641c,0x000000e8,0x00000000,unsigned>;
        ///Regular channel conversion              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> rdata{}; 
        ///Regular channel pending              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rpend{}; 
        ///Regular channel most recently              converted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rdatach{}; 
    }
    namespace DfsdmDfsdm3Awhtr{    ///<analog watchdog high threshold          register
        using Addr = Register::Address<0x40016420,0x000000f0,0x00000000,unsigned>;
        ///Analog watchdog high              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awht{}; 
        ///Break signal assignment to analog              watchdog high threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawh{}; 
    }
    namespace DfsdmDfsdm3Awltr{    ///<analog watchdog low threshold          register
        using Addr = Register::Address<0x40016424,0x000000f0,0x00000000,unsigned>;
        ///Analog watchdog low              threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> awlt{}; 
        ///Break signal assignment to analog              watchdog low threshold event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> bkawl{}; 
    }
    namespace DfsdmDfsdm3Awsr{    ///<analog watchdog status          register
        using Addr = Register::Address<0x40016428,0xffff0000,0x00000000,unsigned>;
        ///Analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> awhtf{}; 
        ///Analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> awltf{}; 
    }
    namespace DfsdmDfsdm3Awcfr{    ///<analog watchdog clear flag          register
        using Addr = Register::Address<0x4001642c,0xffff0000,0x00000000,unsigned>;
        ///Clear the analog watchdog high threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clrawhtf{}; 
        ///Clear the analog watchdog low threshold              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clrawltf{}; 
    }
    namespace DfsdmDfsdm3Exmax{    ///<Extremes detector maximum          register
        using Addr = Register::Address<0x40016430,0x000000f8,0x00000000,unsigned>;
        ///Extremes detector maximum              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmax{}; 
        ///Extremes detector maximum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exmaxch{}; 
    }
    namespace DfsdmDfsdm3Exmin{    ///<Extremes detector minimum          register
        using Addr = Register::Address<0x40016434,0x000000f8,0x00000000,unsigned>;
        ///EXMIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> exmin{}; 
        ///Extremes detector minimum data              channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> exminch{}; 
    }
    namespace DfsdmDfsdm3Cnvtimr{    ///<conversion timer register
        using Addr = Register::Address<0x40016438,0x0000000f,0x00000000,unsigned>;
        ///28-bit timer counting conversion time t              = CNVCNT[27:0] / fDFSDM_CKIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> cnvcnt{}; 
    }
}
