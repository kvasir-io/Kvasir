#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//DMA controller
    namespace Nonelisr{    ///<low interrupt status register
        using Addr = Register::Address<0x40026400,0xf082f082,0,unsigned>;
        ///Stream x transfer complete interrupt
              flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> tcif3{}; 
        ///Stream x half transfer interrupt flag
              (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> htif3{}; 
        ///Stream x transfer error interrupt flag
              (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> teif3{}; 
        ///Stream x direct mode error interrupt
              flag (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dmeif3{}; 
        ///Stream x FIFO error interrupt flag
              (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> feif3{}; 
        ///Stream x transfer complete interrupt
              flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tcif2{}; 
        ///Stream x half transfer interrupt flag
              (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> htif2{}; 
        ///Stream x transfer error interrupt flag
              (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> teif2{}; 
        ///Stream x direct mode error interrupt
              flag (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dmeif2{}; 
        ///Stream x FIFO error interrupt flag
              (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> feif2{}; 
        ///Stream x transfer complete interrupt
              flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tcif1{}; 
        ///Stream x half transfer interrupt flag
              (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> htif1{}; 
        ///Stream x transfer error interrupt flag
              (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> teif1{}; 
        ///Stream x direct mode error interrupt
              flag (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dmeif1{}; 
        ///Stream x FIFO error interrupt flag
              (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> feif1{}; 
        ///Stream x transfer complete interrupt
              flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcif0{}; 
        ///Stream x half transfer interrupt flag
              (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> htif0{}; 
        ///Stream x transfer error interrupt flag
              (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teif0{}; 
        ///Stream x direct mode error interrupt
              flag (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmeif0{}; 
        ///Stream x FIFO error interrupt flag
              (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> feif0{}; 
    }
    namespace Nonehisr{    ///<high interrupt status register
        using Addr = Register::Address<0x40026404,0xf082f082,0,unsigned>;
        ///Stream x transfer complete interrupt
              flag (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> tcif7{}; 
        ///Stream x half transfer interrupt flag
              (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> htif7{}; 
        ///Stream x transfer error interrupt flag
              (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> teif7{}; 
        ///Stream x direct mode error interrupt
              flag (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dmeif7{}; 
        ///Stream x FIFO error interrupt flag
              (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> feif7{}; 
        ///Stream x transfer complete interrupt
              flag (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tcif6{}; 
        ///Stream x half transfer interrupt flag
              (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> htif6{}; 
        ///Stream x transfer error interrupt flag
              (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> teif6{}; 
        ///Stream x direct mode error interrupt
              flag (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dmeif6{}; 
        ///Stream x FIFO error interrupt flag
              (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> feif6{}; 
        ///Stream x transfer complete interrupt
              flag (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tcif5{}; 
        ///Stream x half transfer interrupt flag
              (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> htif5{}; 
        ///Stream x transfer error interrupt flag
              (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> teif5{}; 
        ///Stream x direct mode error interrupt
              flag (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dmeif5{}; 
        ///Stream x FIFO error interrupt flag
              (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> feif5{}; 
        ///Stream x transfer complete interrupt
              flag (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcif4{}; 
        ///Stream x half transfer interrupt flag
              (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> htif4{}; 
        ///Stream x transfer error interrupt flag
              (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teif4{}; 
        ///Stream x direct mode error interrupt
              flag (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmeif4{}; 
        ///Stream x FIFO error interrupt flag
              (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> feif4{}; 
    }
    namespace Nonelifcr{    ///<low interrupt flag clear
          register
        using Addr = Register::Address<0x40026408,0xf082f082,0,unsigned>;
        ///Stream x clear transfer complete
              interrupt flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ctcif3{}; 
        ///Stream x clear half transfer interrupt
              flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> chtif3{}; 
        ///Stream x clear transfer error interrupt
              flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cteif3{}; 
        ///Stream x clear direct mode error
              interrupt flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cdmeif3{}; 
        ///Stream x clear FIFO error interrupt flag
              (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> cfeif3{}; 
        ///Stream x clear transfer complete
              interrupt flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ctcif2{}; 
        ///Stream x clear half transfer interrupt
              flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> chtif2{}; 
        ///Stream x clear transfer error interrupt
              flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cteif2{}; 
        ///Stream x clear direct mode error
              interrupt flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cdmeif2{}; 
        ///Stream x clear FIFO error interrupt flag
              (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cfeif2{}; 
        ///Stream x clear transfer complete
              interrupt flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ctcif1{}; 
        ///Stream x clear half transfer interrupt
              flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> chtif1{}; 
        ///Stream x clear transfer error interrupt
              flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cteif1{}; 
        ///Stream x clear direct mode error
              interrupt flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cdmeif1{}; 
        ///Stream x clear FIFO error interrupt flag
              (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cfeif1{}; 
        ///Stream x clear transfer complete
              interrupt flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctcif0{}; 
        ///Stream x clear half transfer interrupt
              flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> chtif0{}; 
        ///Stream x clear transfer error interrupt
              flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cteif0{}; 
        ///Stream x clear direct mode error
              interrupt flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cdmeif0{}; 
        ///Stream x clear FIFO error interrupt flag
              (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cfeif0{}; 
    }
    namespace Nonehifcr{    ///<high interrupt flag clear
          register
        using Addr = Register::Address<0x4002640c,0xf082f082,0,unsigned>;
        ///Stream x clear transfer complete
              interrupt flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ctcif7{}; 
        ///Stream x clear half transfer interrupt
              flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> chtif7{}; 
        ///Stream x clear transfer error interrupt
              flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cteif7{}; 
        ///Stream x clear direct mode error
              interrupt flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cdmeif7{}; 
        ///Stream x clear FIFO error interrupt flag
              (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> cfeif7{}; 
        ///Stream x clear transfer complete
              interrupt flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ctcif6{}; 
        ///Stream x clear half transfer interrupt
              flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> chtif6{}; 
        ///Stream x clear transfer error interrupt
              flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cteif6{}; 
        ///Stream x clear direct mode error
              interrupt flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cdmeif6{}; 
        ///Stream x clear FIFO error interrupt flag
              (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cfeif6{}; 
        ///Stream x clear transfer complete
              interrupt flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ctcif5{}; 
        ///Stream x clear half transfer interrupt
              flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> chtif5{}; 
        ///Stream x clear transfer error interrupt
              flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cteif5{}; 
        ///Stream x clear direct mode error
              interrupt flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cdmeif5{}; 
        ///Stream x clear FIFO error interrupt flag
              (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cfeif5{}; 
        ///Stream x clear transfer complete
              interrupt flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctcif4{}; 
        ///Stream x clear half transfer interrupt
              flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> chtif4{}; 
        ///Stream x clear transfer error interrupt
              flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cteif4{}; 
        ///Stream x clear direct mode error
              interrupt flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cdmeif4{}; 
        ///Stream x clear FIFO error interrupt flag
              (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cfeif4{}; 
    }
    namespace Nones0cr{    ///<stream x configuration
          register
        using Addr = Register::Address<0x40026410,0xf0100000,0,unsigned>;
        ///Channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,unsigned> chsel{}; 
        ///Memory burst transfer
              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,23),Register::ReadWriteAccess,unsigned> mburst{}; 
        ///Peripheral burst transfer
              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> pburst{}; 
        ///Current target (only in double buffer
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ct{}; 
        ///Double buffer mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbm{}; 
        ///Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Peripheral increment offset
              size
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
        ///Transfer complete interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half transfer interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Direct mode error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmeie{}; 
        ///Stream enable / flag stream ready when
              read low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Nones0ndtr{    ///<stream x number of data
          register
        using Addr = Register::Address<0x40026414,0xffff0000,0,unsigned>;
        ///Number of data items to
              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Nones0par{    ///<stream x peripheral address
          register
        using Addr = Register::Address<0x40026418,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Nones0m0ar{    ///<stream x memory 0 address
          register
        using Addr = Register::Address<0x4002641c,0x00000000,0,unsigned>;
        ///Memory 0 address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m0a{}; 
    }
    namespace Nones0m1ar{    ///<stream x memory 1 address
          register
        using Addr = Register::Address<0x40026420,0x00000000,0,unsigned>;
        ///Memory 1 address (used in case of Double
              buffer mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m1a{}; 
    }
    namespace Nones0fcr{    ///<stream x FIFO control register
        using Addr = Register::Address<0x40026424,0xffffff40,0,unsigned>;
        ///FIFO error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feie{}; 
        ///FIFO status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> fs{}; 
        ///Direct mode disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmdis{}; 
        ///FIFO threshold selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fth{}; 
    }
    namespace Nones1cr{    ///<stream x configuration
          register
        using Addr = Register::Address<0x40026428,0xf0000000,0,unsigned>;
        ///Channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,unsigned> chsel{}; 
        ///Memory burst transfer
              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,23),Register::ReadWriteAccess,unsigned> mburst{}; 
        ///Peripheral burst transfer
              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> pburst{}; 
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Current target (only in double buffer
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ct{}; 
        ///Double buffer mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbm{}; 
        ///Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Peripheral increment offset
              size
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
        ///Transfer complete interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half transfer interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Direct mode error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmeie{}; 
        ///Stream enable / flag stream ready when
              read low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Nones1ndtr{    ///<stream x number of data
          register
        using Addr = Register::Address<0x4002642c,0xffff0000,0,unsigned>;
        ///Number of data items to
              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Nones1par{    ///<stream x peripheral address
          register
        using Addr = Register::Address<0x40026430,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Nones1m0ar{    ///<stream x memory 0 address
          register
        using Addr = Register::Address<0x40026434,0x00000000,0,unsigned>;
        ///Memory 0 address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m0a{}; 
    }
    namespace Nones1m1ar{    ///<stream x memory 1 address
          register
        using Addr = Register::Address<0x40026438,0x00000000,0,unsigned>;
        ///Memory 1 address (used in case of Double
              buffer mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m1a{}; 
    }
    namespace Nones1fcr{    ///<stream x FIFO control register
        using Addr = Register::Address<0x4002643c,0xffffff40,0,unsigned>;
        ///FIFO error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feie{}; 
        ///FIFO status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> fs{}; 
        ///Direct mode disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmdis{}; 
        ///FIFO threshold selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fth{}; 
    }
    namespace Nones2cr{    ///<stream x configuration
          register
        using Addr = Register::Address<0x40026440,0xf0000000,0,unsigned>;
        ///Channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,unsigned> chsel{}; 
        ///Memory burst transfer
              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,23),Register::ReadWriteAccess,unsigned> mburst{}; 
        ///Peripheral burst transfer
              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> pburst{}; 
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Current target (only in double buffer
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ct{}; 
        ///Double buffer mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbm{}; 
        ///Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Peripheral increment offset
              size
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
        ///Transfer complete interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half transfer interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Direct mode error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmeie{}; 
        ///Stream enable / flag stream ready when
              read low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Nones2ndtr{    ///<stream x number of data
          register
        using Addr = Register::Address<0x40026444,0xffff0000,0,unsigned>;
        ///Number of data items to
              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Nones2par{    ///<stream x peripheral address
          register
        using Addr = Register::Address<0x40026448,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Nones2m0ar{    ///<stream x memory 0 address
          register
        using Addr = Register::Address<0x4002644c,0x00000000,0,unsigned>;
        ///Memory 0 address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m0a{}; 
    }
    namespace Nones2m1ar{    ///<stream x memory 1 address
          register
        using Addr = Register::Address<0x40026450,0x00000000,0,unsigned>;
        ///Memory 1 address (used in case of Double
              buffer mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m1a{}; 
    }
    namespace Nones2fcr{    ///<stream x FIFO control register
        using Addr = Register::Address<0x40026454,0xffffff40,0,unsigned>;
        ///FIFO error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feie{}; 
        ///FIFO status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> fs{}; 
        ///Direct mode disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmdis{}; 
        ///FIFO threshold selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fth{}; 
    }
    namespace Nones3cr{    ///<stream x configuration
          register
        using Addr = Register::Address<0x40026458,0xf0000000,0,unsigned>;
        ///Channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,unsigned> chsel{}; 
        ///Memory burst transfer
              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,23),Register::ReadWriteAccess,unsigned> mburst{}; 
        ///Peripheral burst transfer
              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> pburst{}; 
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Current target (only in double buffer
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ct{}; 
        ///Double buffer mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbm{}; 
        ///Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Peripheral increment offset
              size
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
        ///Transfer complete interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half transfer interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Direct mode error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmeie{}; 
        ///Stream enable / flag stream ready when
              read low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Nones3ndtr{    ///<stream x number of data
          register
        using Addr = Register::Address<0x4002645c,0xffff0000,0,unsigned>;
        ///Number of data items to
              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Nones3par{    ///<stream x peripheral address
          register
        using Addr = Register::Address<0x40026460,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Nones3m0ar{    ///<stream x memory 0 address
          register
        using Addr = Register::Address<0x40026464,0x00000000,0,unsigned>;
        ///Memory 0 address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m0a{}; 
    }
    namespace Nones3m1ar{    ///<stream x memory 1 address
          register
        using Addr = Register::Address<0x40026468,0x00000000,0,unsigned>;
        ///Memory 1 address (used in case of Double
              buffer mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m1a{}; 
    }
    namespace Nones3fcr{    ///<stream x FIFO control register
        using Addr = Register::Address<0x4002646c,0xffffff40,0,unsigned>;
        ///FIFO error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feie{}; 
        ///FIFO status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> fs{}; 
        ///Direct mode disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmdis{}; 
        ///FIFO threshold selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fth{}; 
    }
    namespace Nones4cr{    ///<stream x configuration
          register
        using Addr = Register::Address<0x40026470,0xf0000000,0,unsigned>;
        ///Channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,unsigned> chsel{}; 
        ///Memory burst transfer
              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,23),Register::ReadWriteAccess,unsigned> mburst{}; 
        ///Peripheral burst transfer
              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> pburst{}; 
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Current target (only in double buffer
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ct{}; 
        ///Double buffer mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbm{}; 
        ///Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Peripheral increment offset
              size
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
        ///Transfer complete interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half transfer interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Direct mode error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmeie{}; 
        ///Stream enable / flag stream ready when
              read low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Nones4ndtr{    ///<stream x number of data
          register
        using Addr = Register::Address<0x40026474,0xffff0000,0,unsigned>;
        ///Number of data items to
              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Nones4par{    ///<stream x peripheral address
          register
        using Addr = Register::Address<0x40026478,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Nones4m0ar{    ///<stream x memory 0 address
          register
        using Addr = Register::Address<0x4002647c,0x00000000,0,unsigned>;
        ///Memory 0 address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m0a{}; 
    }
    namespace Nones4m1ar{    ///<stream x memory 1 address
          register
        using Addr = Register::Address<0x40026480,0x00000000,0,unsigned>;
        ///Memory 1 address (used in case of Double
              buffer mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m1a{}; 
    }
    namespace Nones4fcr{    ///<stream x FIFO control register
        using Addr = Register::Address<0x40026484,0xffffff40,0,unsigned>;
        ///FIFO error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feie{}; 
        ///FIFO status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> fs{}; 
        ///Direct mode disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmdis{}; 
        ///FIFO threshold selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fth{}; 
    }
    namespace Nones5cr{    ///<stream x configuration
          register
        using Addr = Register::Address<0x40026488,0xf0000000,0,unsigned>;
        ///Channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,unsigned> chsel{}; 
        ///Memory burst transfer
              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,23),Register::ReadWriteAccess,unsigned> mburst{}; 
        ///Peripheral burst transfer
              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> pburst{}; 
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Current target (only in double buffer
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ct{}; 
        ///Double buffer mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbm{}; 
        ///Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Peripheral increment offset
              size
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
        ///Transfer complete interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half transfer interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Direct mode error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmeie{}; 
        ///Stream enable / flag stream ready when
              read low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Nones5ndtr{    ///<stream x number of data
          register
        using Addr = Register::Address<0x4002648c,0xffff0000,0,unsigned>;
        ///Number of data items to
              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Nones5par{    ///<stream x peripheral address
          register
        using Addr = Register::Address<0x40026490,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Nones5m0ar{    ///<stream x memory 0 address
          register
        using Addr = Register::Address<0x40026494,0x00000000,0,unsigned>;
        ///Memory 0 address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m0a{}; 
    }
    namespace Nones5m1ar{    ///<stream x memory 1 address
          register
        using Addr = Register::Address<0x40026498,0x00000000,0,unsigned>;
        ///Memory 1 address (used in case of Double
              buffer mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m1a{}; 
    }
    namespace Nones5fcr{    ///<stream x FIFO control register
        using Addr = Register::Address<0x4002649c,0xffffff40,0,unsigned>;
        ///FIFO error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feie{}; 
        ///FIFO status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> fs{}; 
        ///Direct mode disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmdis{}; 
        ///FIFO threshold selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fth{}; 
    }
    namespace Nones6cr{    ///<stream x configuration
          register
        using Addr = Register::Address<0x400264a0,0xf0000000,0,unsigned>;
        ///Channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,unsigned> chsel{}; 
        ///Memory burst transfer
              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,23),Register::ReadWriteAccess,unsigned> mburst{}; 
        ///Peripheral burst transfer
              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> pburst{}; 
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Current target (only in double buffer
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ct{}; 
        ///Double buffer mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbm{}; 
        ///Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Peripheral increment offset
              size
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
        ///Transfer complete interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half transfer interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Direct mode error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmeie{}; 
        ///Stream enable / flag stream ready when
              read low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Nones6ndtr{    ///<stream x number of data
          register
        using Addr = Register::Address<0x400264a4,0xffff0000,0,unsigned>;
        ///Number of data items to
              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Nones6par{    ///<stream x peripheral address
          register
        using Addr = Register::Address<0x400264a8,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Nones6m0ar{    ///<stream x memory 0 address
          register
        using Addr = Register::Address<0x400264ac,0x00000000,0,unsigned>;
        ///Memory 0 address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m0a{}; 
    }
    namespace Nones6m1ar{    ///<stream x memory 1 address
          register
        using Addr = Register::Address<0x400264b0,0x00000000,0,unsigned>;
        ///Memory 1 address (used in case of Double
              buffer mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m1a{}; 
    }
    namespace Nones6fcr{    ///<stream x FIFO control register
        using Addr = Register::Address<0x400264b4,0xffffff40,0,unsigned>;
        ///FIFO error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feie{}; 
        ///FIFO status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> fs{}; 
        ///Direct mode disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmdis{}; 
        ///FIFO threshold selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fth{}; 
    }
    namespace Nones7cr{    ///<stream x configuration
          register
        using Addr = Register::Address<0x400264b8,0xf0000000,0,unsigned>;
        ///Channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,unsigned> chsel{}; 
        ///Memory burst transfer
              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,23),Register::ReadWriteAccess,unsigned> mburst{}; 
        ///Peripheral burst transfer
              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> pburst{}; 
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Current target (only in double buffer
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ct{}; 
        ///Double buffer mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbm{}; 
        ///Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Peripheral increment offset
              size
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
        ///Transfer complete interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half transfer interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Direct mode error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmeie{}; 
        ///Stream enable / flag stream ready when
              read low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Nones7ndtr{    ///<stream x number of data
          register
        using Addr = Register::Address<0x400264bc,0xffff0000,0,unsigned>;
        ///Number of data items to
              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Nones7par{    ///<stream x peripheral address
          register
        using Addr = Register::Address<0x400264c0,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Nones7m0ar{    ///<stream x memory 0 address
          register
        using Addr = Register::Address<0x400264c4,0x00000000,0,unsigned>;
        ///Memory 0 address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m0a{}; 
    }
    namespace Nones7m1ar{    ///<stream x memory 1 address
          register
        using Addr = Register::Address<0x400264c8,0x00000000,0,unsigned>;
        ///Memory 1 address (used in case of Double
              buffer mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m1a{}; 
    }
    namespace Nones7fcr{    ///<stream x FIFO control register
        using Addr = Register::Address<0x400264cc,0xffffff40,0,unsigned>;
        ///FIFO error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feie{}; 
        ///FIFO status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> fs{}; 
        ///Direct mode disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmdis{}; 
        ///FIFO threshold selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fth{}; 
    }
}
