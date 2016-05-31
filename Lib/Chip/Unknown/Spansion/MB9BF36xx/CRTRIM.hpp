#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral CRTRIM 
    namespace CrtrimMcrPsr{    ///< register MCR_PSR 
        using Addr = Register::Address<0x4002e000,0xfffffff8,0x00000000,unsigned char>;
        /// bitfield CSR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> csr{}; 
    }
    namespace CrtrimMcrFtrm{    ///< register MCR_FTRM 
        using Addr = Register::Address<0x4002e004,0xfffffc00,0x00000000,unsigned>;
        /// bitfield TRD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> trd{}; 
    }
    namespace CrtrimMcrTtrm{    ///< register MCR_TTRM 
        using Addr = Register::Address<0x4002e008,0xffffffe0,0x00000000,unsigned char>;
        /// bitfield TRT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> trt{}; 
    }
    namespace CrtrimMcrRlr{    ///< register MCR_RLR 
        using Addr = Register::Address<0x4002e00c,0x00000000,0x00000000,unsigned>;
        /// bitfield TRMLCK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> trmlck{}; 
    }
}
