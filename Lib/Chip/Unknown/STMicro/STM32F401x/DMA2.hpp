#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//DMA controller
    namespace Dma2Lisr{    ///<low interrupt status register
        using Addr = Register::Address<0x40026400,0xf082f082,0x00000000,unsigned>;
        ///Stream x transfer complete interrupt               flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> tcif3{}; 
        ///Stream x half transfer interrupt flag               (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> htif3{}; 
        ///Stream x transfer error interrupt flag               (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> teif3{}; 
        ///Stream x direct mode error interrupt               flag (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dmeif3{}; 
        ///Stream x FIFO error interrupt flag               (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> feif3{}; 
        ///Stream x transfer complete interrupt               flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tcif2{}; 
        ///Stream x half transfer interrupt flag               (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> htif2{}; 
        ///Stream x transfer error interrupt flag               (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> teif2{}; 
        ///Stream x direct mode error interrupt               flag (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dmeif2{}; 
        ///Stream x FIFO error interrupt flag               (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> feif2{}; 
        ///Stream x transfer complete interrupt               flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tcif1{}; 
        ///Stream x half transfer interrupt flag               (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> htif1{}; 
        ///Stream x transfer error interrupt flag               (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> teif1{}; 
        ///Stream x direct mode error interrupt               flag (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dmeif1{}; 
        ///Stream x FIFO error interrupt flag               (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> feif1{}; 
        ///Stream x transfer complete interrupt               flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcif0{}; 
        ///Stream x half transfer interrupt flag               (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> htif0{}; 
        ///Stream x transfer error interrupt flag               (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teif0{}; 
        ///Stream x direct mode error interrupt               flag (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmeif0{}; 
        ///Stream x FIFO error interrupt flag               (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> feif0{}; 
    }
    namespace Dma2Hisr{    ///<high interrupt status register
        using Addr = Register::Address<0x40026404,0xf082f082,0x00000000,unsigned>;
        ///Stream x transfer complete interrupt               flag (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> tcif7{}; 
        ///Stream x half transfer interrupt flag               (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> htif7{}; 
        ///Stream x transfer error interrupt flag               (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> teif7{}; 
        ///Stream x direct mode error interrupt               flag (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dmeif7{}; 
        ///Stream x FIFO error interrupt flag               (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> feif7{}; 
        ///Stream x transfer complete interrupt               flag (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tcif6{}; 
        ///Stream x half transfer interrupt flag               (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> htif6{}; 
        ///Stream x transfer error interrupt flag               (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> teif6{}; 
        ///Stream x direct mode error interrupt               flag (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dmeif6{}; 
        ///Stream x FIFO error interrupt flag               (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> feif6{}; 
        ///Stream x transfer complete interrupt               flag (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tcif5{}; 
        ///Stream x half transfer interrupt flag               (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> htif5{}; 
        ///Stream x transfer error interrupt flag               (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> teif5{}; 
        ///Stream x direct mode error interrupt               flag (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dmeif5{}; 
        ///Stream x FIFO error interrupt flag               (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> feif5{}; 
        ///Stream x transfer complete interrupt               flag (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcif4{}; 
        ///Stream x half transfer interrupt flag               (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> htif4{}; 
        ///Stream x transfer error interrupt flag               (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teif4{}; 
        ///Stream x direct mode error interrupt               flag (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmeif4{}; 
        ///Stream x FIFO error interrupt flag               (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> feif4{}; 
    }
    namespace Dma2Lifcr{    ///<low interrupt flag clear           register
        using Addr = Register::Address<0x40026408,0xf082f082,0x00000000,unsigned>;
        ///Stream x clear transfer complete               interrupt flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ctcif3{}; 
        ///Stream x clear half transfer interrupt               flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> chtif3{}; 
        ///Stream x clear transfer error interrupt               flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cteif3{}; 
        ///Stream x clear direct mode error               interrupt flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cdmeif3{}; 
        ///Stream x clear FIFO error interrupt flag               (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> cfeif3{}; 
        ///Stream x clear transfer complete               interrupt flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ctcif2{}; 
        ///Stream x clear half transfer interrupt               flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> chtif2{}; 
        ///Stream x clear transfer error interrupt               flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cteif2{}; 
        ///Stream x clear direct mode error               interrupt flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cdmeif2{}; 
        ///Stream x clear FIFO error interrupt flag               (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cfeif2{}; 
        ///Stream x clear transfer complete               interrupt flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ctcif1{}; 
        ///Stream x clear half transfer interrupt               flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> chtif1{}; 
        ///Stream x clear transfer error interrupt               flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cteif1{}; 
        ///Stream x clear direct mode error               interrupt flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cdmeif1{}; 
        ///Stream x clear FIFO error interrupt flag               (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cfeif1{}; 
        ///Stream x clear transfer complete               interrupt flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctcif0{}; 
        ///Stream x clear half transfer interrupt               flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> chtif0{}; 
        ///Stream x clear transfer error interrupt               flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cteif0{}; 
        ///Stream x clear direct mode error               interrupt flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cdmeif0{}; 
        ///Stream x clear FIFO error interrupt flag               (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cfeif0{}; 
    }
    namespace Dma2Hifcr{    ///<high interrupt flag clear           register
        using Addr = Register::Address<0x4002640c,0xf082f082,0x00000000,unsigned>;
        ///Stream x clear transfer complete               interrupt flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ctcif7{}; 
        ///Stream x clear half transfer interrupt               flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> chtif7{}; 
        ///Stream x clear transfer error interrupt               flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cteif7{}; 
        ///Stream x clear direct mode error               interrupt flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cdmeif7{}; 
        ///Stream x clear FIFO error interrupt flag               (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> cfeif7{}; 
        ///Stream x clear transfer complete               interrupt flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ctcif6{}; 
        ///Stream x clear half transfer interrupt               flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> chtif6{}; 
        ///Stream x clear transfer error interrupt               flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cteif6{}; 
        ///Stream x clear direct mode error               interrupt flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cdmeif6{}; 
        ///Stream x clear FIFO error interrupt flag               (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cfeif6{}; 
        ///Stream x clear transfer complete               interrupt flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ctcif5{}; 
        ///Stream x clear half transfer interrupt               flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> chtif5{}; 
        ///Stream x clear transfer error interrupt               flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cteif5{}; 
        ///Stream x clear direct mode error               interrupt flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cdmeif5{}; 
        ///Stream x clear FIFO error interrupt flag               (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cfeif5{}; 
        ///Stream x clear transfer complete               interrupt flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctcif4{}; 
        ///Stream x clear half transfer interrupt               flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> chtif4{}; 
        ///Stream x clear transfer error interrupt               flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cteif4{}; 
        ///Stream x clear direct mode error               interrupt flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cdmeif4{}; 
        ///Stream x clear FIFO error interrupt flag               (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cfeif4{}; 
    }
    namespace Dma2S0cr{    ///<stream x configuration           register
        using Addr = Register::Address<0x40026410,0xf0100000,0x00000000,unsigned>;
        ///Channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,unsigned> chsel{}; 
        ///Memory burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,23),Register::ReadWriteAccess,unsigned> mburst{}; 
        ///Peripheral burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> pburst{}; 
        ///Current target (only in double buffer               mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ct{}; 
        ///Double buffer mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbm{}; 
        ///Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Peripheral increment offset               size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pincos{}; 
        ///Memory data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Peripheral data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Peripheral flow controller
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pfctrl{}; 
        ///Transfer complete interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half transfer interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Direct mode error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmeie{}; 
        ///Stream enable / flag stream ready when               read low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Dma2S0ndtr{    ///<stream x number of data           register
        using Addr = Register::Address<0x40026414,0xffff0000,0x00000000,unsigned>;
        ///Number of data items to               transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Dma2S0par{    ///<stream x peripheral address           register
        using Addr = Register::Address<0x40026418,0x00000000,0x00000000,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Dma2S0m0ar{    ///<stream x memory 0 address           register
        using Addr = Register::Address<0x4002641c,0x00000000,0x00000000,unsigned>;
        ///Memory 0 address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m0a{}; 
    }
    namespace Dma2S0m1ar{    ///<stream x memory 1 address           register
        using Addr = Register::Address<0x40026420,0x00000000,0x00000000,unsigned>;
        ///Memory 1 address (used in case of Double               buffer mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m1a{}; 
    }
    namespace Dma2S0fcr{    ///<stream x FIFO control register
        using Addr = Register::Address<0x40026424,0xffffff40,0x00000000,unsigned>;
        ///FIFO error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feie{}; 
        ///FIFO status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fs{}; 
        ///Direct mode disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmdis{}; 
        ///FIFO threshold selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fth{}; 
    }
    namespace Dma2S1cr{    ///<stream x configuration           register
        using Addr = Register::Address<0x40026428,0xf0000000,0x00000000,unsigned>;
        ///Channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,unsigned> chsel{}; 
        ///Memory burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,23),Register::ReadWriteAccess,unsigned> mburst{}; 
        ///Peripheral burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> pburst{}; 
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Current target (only in double buffer               mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ct{}; 
        ///Double buffer mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbm{}; 
        ///Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Peripheral increment offset               size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pincos{}; 
        ///Memory data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Peripheral data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Peripheral flow controller
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pfctrl{}; 
        ///Transfer complete interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half transfer interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Direct mode error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmeie{}; 
        ///Stream enable / flag stream ready when               read low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Dma2S1ndtr{    ///<stream x number of data           register
        using Addr = Register::Address<0x4002642c,0xffff0000,0x00000000,unsigned>;
        ///Number of data items to               transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Dma2S1par{    ///<stream x peripheral address           register
        using Addr = Register::Address<0x40026430,0x00000000,0x00000000,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Dma2S1m0ar{    ///<stream x memory 0 address           register
        using Addr = Register::Address<0x40026434,0x00000000,0x00000000,unsigned>;
        ///Memory 0 address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m0a{}; 
    }
    namespace Dma2S1m1ar{    ///<stream x memory 1 address           register
        using Addr = Register::Address<0x40026438,0x00000000,0x00000000,unsigned>;
        ///Memory 1 address (used in case of Double               buffer mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m1a{}; 
    }
    namespace Dma2S1fcr{    ///<stream x FIFO control register
        using Addr = Register::Address<0x4002643c,0xffffff40,0x00000000,unsigned>;
        ///FIFO error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feie{}; 
        ///FIFO status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fs{}; 
        ///Direct mode disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmdis{}; 
        ///FIFO threshold selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fth{}; 
    }
    namespace Dma2S2cr{    ///<stream x configuration           register
        using Addr = Register::Address<0x40026440,0xf0000000,0x00000000,unsigned>;
        ///Channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,unsigned> chsel{}; 
        ///Memory burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,23),Register::ReadWriteAccess,unsigned> mburst{}; 
        ///Peripheral burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> pburst{}; 
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Current target (only in double buffer               mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ct{}; 
        ///Double buffer mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbm{}; 
        ///Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Peripheral increment offset               size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pincos{}; 
        ///Memory data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Peripheral data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Peripheral flow controller
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pfctrl{}; 
        ///Transfer complete interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half transfer interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Direct mode error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmeie{}; 
        ///Stream enable / flag stream ready when               read low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Dma2S2ndtr{    ///<stream x number of data           register
        using Addr = Register::Address<0x40026444,0xffff0000,0x00000000,unsigned>;
        ///Number of data items to               transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Dma2S2par{    ///<stream x peripheral address           register
        using Addr = Register::Address<0x40026448,0x00000000,0x00000000,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Dma2S2m0ar{    ///<stream x memory 0 address           register
        using Addr = Register::Address<0x4002644c,0x00000000,0x00000000,unsigned>;
        ///Memory 0 address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m0a{}; 
    }
    namespace Dma2S2m1ar{    ///<stream x memory 1 address           register
        using Addr = Register::Address<0x40026450,0x00000000,0x00000000,unsigned>;
        ///Memory 1 address (used in case of Double               buffer mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m1a{}; 
    }
    namespace Dma2S2fcr{    ///<stream x FIFO control register
        using Addr = Register::Address<0x40026454,0xffffff40,0x00000000,unsigned>;
        ///FIFO error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feie{}; 
        ///FIFO status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fs{}; 
        ///Direct mode disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmdis{}; 
        ///FIFO threshold selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fth{}; 
    }
    namespace Dma2S3cr{    ///<stream x configuration           register
        using Addr = Register::Address<0x40026458,0xf0000000,0x00000000,unsigned>;
        ///Channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,unsigned> chsel{}; 
        ///Memory burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,23),Register::ReadWriteAccess,unsigned> mburst{}; 
        ///Peripheral burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> pburst{}; 
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Current target (only in double buffer               mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ct{}; 
        ///Double buffer mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbm{}; 
        ///Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Peripheral increment offset               size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pincos{}; 
        ///Memory data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Peripheral data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Peripheral flow controller
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pfctrl{}; 
        ///Transfer complete interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half transfer interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Direct mode error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmeie{}; 
        ///Stream enable / flag stream ready when               read low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Dma2S3ndtr{    ///<stream x number of data           register
        using Addr = Register::Address<0x4002645c,0xffff0000,0x00000000,unsigned>;
        ///Number of data items to               transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Dma2S3par{    ///<stream x peripheral address           register
        using Addr = Register::Address<0x40026460,0x00000000,0x00000000,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Dma2S3m0ar{    ///<stream x memory 0 address           register
        using Addr = Register::Address<0x40026464,0x00000000,0x00000000,unsigned>;
        ///Memory 0 address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m0a{}; 
    }
    namespace Dma2S3m1ar{    ///<stream x memory 1 address           register
        using Addr = Register::Address<0x40026468,0x00000000,0x00000000,unsigned>;
        ///Memory 1 address (used in case of Double               buffer mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m1a{}; 
    }
    namespace Dma2S3fcr{    ///<stream x FIFO control register
        using Addr = Register::Address<0x4002646c,0xffffff40,0x00000000,unsigned>;
        ///FIFO error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feie{}; 
        ///FIFO status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fs{}; 
        ///Direct mode disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmdis{}; 
        ///FIFO threshold selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fth{}; 
    }
    namespace Dma2S4cr{    ///<stream x configuration           register
        using Addr = Register::Address<0x40026470,0xf0000000,0x00000000,unsigned>;
        ///Channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,unsigned> chsel{}; 
        ///Memory burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,23),Register::ReadWriteAccess,unsigned> mburst{}; 
        ///Peripheral burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> pburst{}; 
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Current target (only in double buffer               mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ct{}; 
        ///Double buffer mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbm{}; 
        ///Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Peripheral increment offset               size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pincos{}; 
        ///Memory data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Peripheral data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Peripheral flow controller
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pfctrl{}; 
        ///Transfer complete interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half transfer interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Direct mode error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmeie{}; 
        ///Stream enable / flag stream ready when               read low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Dma2S4ndtr{    ///<stream x number of data           register
        using Addr = Register::Address<0x40026474,0xffff0000,0x00000000,unsigned>;
        ///Number of data items to               transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Dma2S4par{    ///<stream x peripheral address           register
        using Addr = Register::Address<0x40026478,0x00000000,0x00000000,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Dma2S4m0ar{    ///<stream x memory 0 address           register
        using Addr = Register::Address<0x4002647c,0x00000000,0x00000000,unsigned>;
        ///Memory 0 address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m0a{}; 
    }
    namespace Dma2S4m1ar{    ///<stream x memory 1 address           register
        using Addr = Register::Address<0x40026480,0x00000000,0x00000000,unsigned>;
        ///Memory 1 address (used in case of Double               buffer mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m1a{}; 
    }
    namespace Dma2S4fcr{    ///<stream x FIFO control register
        using Addr = Register::Address<0x40026484,0xffffff40,0x00000000,unsigned>;
        ///FIFO error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feie{}; 
        ///FIFO status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fs{}; 
        ///Direct mode disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmdis{}; 
        ///FIFO threshold selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fth{}; 
    }
    namespace Dma2S5cr{    ///<stream x configuration           register
        using Addr = Register::Address<0x40026488,0xf0000000,0x00000000,unsigned>;
        ///Channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,unsigned> chsel{}; 
        ///Memory burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,23),Register::ReadWriteAccess,unsigned> mburst{}; 
        ///Peripheral burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> pburst{}; 
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Current target (only in double buffer               mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ct{}; 
        ///Double buffer mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbm{}; 
        ///Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Peripheral increment offset               size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pincos{}; 
        ///Memory data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Peripheral data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Peripheral flow controller
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pfctrl{}; 
        ///Transfer complete interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half transfer interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Direct mode error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmeie{}; 
        ///Stream enable / flag stream ready when               read low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Dma2S5ndtr{    ///<stream x number of data           register
        using Addr = Register::Address<0x4002648c,0xffff0000,0x00000000,unsigned>;
        ///Number of data items to               transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Dma2S5par{    ///<stream x peripheral address           register
        using Addr = Register::Address<0x40026490,0x00000000,0x00000000,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Dma2S5m0ar{    ///<stream x memory 0 address           register
        using Addr = Register::Address<0x40026494,0x00000000,0x00000000,unsigned>;
        ///Memory 0 address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m0a{}; 
    }
    namespace Dma2S5m1ar{    ///<stream x memory 1 address           register
        using Addr = Register::Address<0x40026498,0x00000000,0x00000000,unsigned>;
        ///Memory 1 address (used in case of Double               buffer mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m1a{}; 
    }
    namespace Dma2S5fcr{    ///<stream x FIFO control register
        using Addr = Register::Address<0x4002649c,0xffffff40,0x00000000,unsigned>;
        ///FIFO error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feie{}; 
        ///FIFO status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fs{}; 
        ///Direct mode disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmdis{}; 
        ///FIFO threshold selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fth{}; 
    }
    namespace Dma2S6cr{    ///<stream x configuration           register
        using Addr = Register::Address<0x400264a0,0xf0000000,0x00000000,unsigned>;
        ///Channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,unsigned> chsel{}; 
        ///Memory burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,23),Register::ReadWriteAccess,unsigned> mburst{}; 
        ///Peripheral burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> pburst{}; 
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Current target (only in double buffer               mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ct{}; 
        ///Double buffer mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbm{}; 
        ///Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Peripheral increment offset               size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pincos{}; 
        ///Memory data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Peripheral data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Peripheral flow controller
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pfctrl{}; 
        ///Transfer complete interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half transfer interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Direct mode error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmeie{}; 
        ///Stream enable / flag stream ready when               read low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Dma2S6ndtr{    ///<stream x number of data           register
        using Addr = Register::Address<0x400264a4,0xffff0000,0x00000000,unsigned>;
        ///Number of data items to               transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Dma2S6par{    ///<stream x peripheral address           register
        using Addr = Register::Address<0x400264a8,0x00000000,0x00000000,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Dma2S6m0ar{    ///<stream x memory 0 address           register
        using Addr = Register::Address<0x400264ac,0x00000000,0x00000000,unsigned>;
        ///Memory 0 address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m0a{}; 
    }
    namespace Dma2S6m1ar{    ///<stream x memory 1 address           register
        using Addr = Register::Address<0x400264b0,0x00000000,0x00000000,unsigned>;
        ///Memory 1 address (used in case of Double               buffer mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m1a{}; 
    }
    namespace Dma2S6fcr{    ///<stream x FIFO control register
        using Addr = Register::Address<0x400264b4,0xffffff40,0x00000000,unsigned>;
        ///FIFO error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feie{}; 
        ///FIFO status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fs{}; 
        ///Direct mode disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmdis{}; 
        ///FIFO threshold selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fth{}; 
    }
    namespace Dma2S7cr{    ///<stream x configuration           register
        using Addr = Register::Address<0x400264b8,0xf0000000,0x00000000,unsigned>;
        ///Channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,unsigned> chsel{}; 
        ///Memory burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,23),Register::ReadWriteAccess,unsigned> mburst{}; 
        ///Peripheral burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> pburst{}; 
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Current target (only in double buffer               mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ct{}; 
        ///Double buffer mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbm{}; 
        ///Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Peripheral increment offset               size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pincos{}; 
        ///Memory data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Peripheral data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Peripheral flow controller
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pfctrl{}; 
        ///Transfer complete interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half transfer interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Direct mode error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmeie{}; 
        ///Stream enable / flag stream ready when               read low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Dma2S7ndtr{    ///<stream x number of data           register
        using Addr = Register::Address<0x400264bc,0xffff0000,0x00000000,unsigned>;
        ///Number of data items to               transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Dma2S7par{    ///<stream x peripheral address           register
        using Addr = Register::Address<0x400264c0,0x00000000,0x00000000,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Dma2S7m0ar{    ///<stream x memory 0 address           register
        using Addr = Register::Address<0x400264c4,0x00000000,0x00000000,unsigned>;
        ///Memory 0 address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m0a{}; 
    }
    namespace Dma2S7m1ar{    ///<stream x memory 1 address           register
        using Addr = Register::Address<0x400264c8,0x00000000,0x00000000,unsigned>;
        ///Memory 1 address (used in case of Double               buffer mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m1a{}; 
    }
    namespace Dma2S7fcr{    ///<stream x FIFO control register
        using Addr = Register::Address<0x400264cc,0xffffff40,0x00000000,unsigned>;
        ///FIFO error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feie{}; 
        ///FIFO status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fs{}; 
        ///Direct mode disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmdis{}; 
        ///FIFO threshold selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fth{}; 
    }
}
