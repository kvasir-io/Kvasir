#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Direct memory access controller
    namespace Noneisr{    ///<interrupt status register
        using Addr = Register::Address<0x40020000,0xf0000000,0,unsigned>;
        ///Channel x transfer error flag (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> teif7{}; 
        ///Channel x half transfer flag (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> htif7{}; 
        ///Channel x transfer complete flag (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> tcif7{}; 
        ///Channel x global interrupt flag (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> gif7{}; 
        ///Channel x transfer error flag (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> teif6{}; 
        ///Channel x half transfer flag (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> htif6{}; 
        ///Channel x transfer complete flag (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tcif6{}; 
        ///Channel x global interrupt flag (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> gif6{}; 
        ///Channel x transfer error flag (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> teif5{}; 
        ///Channel x half transfer flag (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> htif5{}; 
        ///Channel x transfer complete flag (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tcif5{}; 
        ///Channel x global interrupt flag (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> gif5{}; 
        ///Channel x transfer error flag (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> teif4{}; 
        ///Channel x half transfer flag (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> htif4{}; 
        ///Channel x transfer complete flag (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tcif4{}; 
        ///Channel x global interrupt flag (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> gif4{}; 
        ///Channel x transfer error flag (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> teif3{}; 
        ///Channel x half transfer flag (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> htif3{}; 
        ///Channel x transfer complete flag (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tcif3{}; 
        ///Channel x global interrupt flag (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gif3{}; 
        ///Channel x transfer error flag (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> teif2{}; 
        ///Channel x half transfer flag (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> htif2{}; 
        ///Channel x transfer complete flag (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcif2{}; 
        ///Channel x global interrupt flag (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gif2{}; 
        ///Channel x transfer error flag (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teif1{}; 
        ///Channel x half transfer flag (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htif1{}; 
        ///Channel x transfer complete flag (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcif1{}; 
        ///Channel x global interrupt flag (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gif1{}; 
    }
    namespace Noneifcr{    ///<interrupt flag clear register
        using Addr = Register::Address<0x40020004,0xf0000000,0,unsigned>;
        ///Channel x transfer error clear (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> cteif7{}; 
        ///Channel x half transfer clear (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> chtif7{}; 
        ///Channel x transfer complete clear (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ctcif7{}; 
        ///Channel x global interrupt clear (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cgif7{}; 
        ///Channel x transfer error clear (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cteif6{}; 
        ///Channel x half transfer clear (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> chtif6{}; 
        ///Channel x transfer complete clear (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ctcif6{}; 
        ///Channel x global interrupt clear (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> cgif6{}; 
        ///Channel x transfer error clear (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cteif5{}; 
        ///Channel x half transfer clear (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> chtif5{}; 
        ///Channel x transfer complete clear (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ctcif5{}; 
        ///Channel x global interrupt clear (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cgif5{}; 
        ///Channel x transfer error clear (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cteif4{}; 
        ///Channel x half transfer clear (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> chtif4{}; 
        ///Channel x transfer complete clear (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ctcif4{}; 
        ///Channel x global interrupt clear (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cgif4{}; 
        ///Channel x transfer error clear (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cteif3{}; 
        ///Channel x half transfer clear (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> chtif3{}; 
        ///Channel x transfer complete clear (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctcif3{}; 
        ///Channel x global interrupt clear (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cgif3{}; 
        ///Channel x transfer error clear (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cteif2{}; 
        ///Channel x half transfer clear (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chtif2{}; 
        ///Channel x transfer complete clear (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctcif2{}; 
        ///Channel x global interrupt clear (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cgif2{}; 
        ///Channel x transfer error clear (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cteif1{}; 
        ///Channel x half transfer clear (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chtif1{}; 
        ///Channel x transfer complete clear (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctcif1{}; 
        ///Channel x global interrupt clear (x = 1
              ..7)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cgif1{}; 
    }
    namespace Noneccr1{    ///<channel x configuration
          register
        using Addr = Register::Address<0x40020008,0xffff8000,0,unsigned>;
        ///Memory to memory mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
        ///Channel priority level
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Memory size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Peripheral size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory increment mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral increment mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Circular mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Data transfer direction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Transfer error interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Half transfer interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer complete interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Channel enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Nonecndtr1{    ///<channel x number of data
          register
        using Addr = Register::Address<0x4002000c,0xffff0000,0,unsigned>;
        ///Number of data to transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Nonecpar1{    ///<channel x peripheral address
          register
        using Addr = Register::Address<0x40020010,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Nonecmar1{    ///<channel x memory address
          register
        using Addr = Register::Address<0x40020014,0x00000000,0,unsigned>;
        ///Memory address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Noneccr2{    ///<channel x configuration
          register
        using Addr = Register::Address<0x4002001c,0xffff8000,0,unsigned>;
        ///Memory to memory mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
        ///Channel priority level
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Memory size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Peripheral size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory increment mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral increment mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Circular mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Data transfer direction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Transfer error interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Half transfer interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer complete interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Channel enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Nonecndtr2{    ///<channel x number of data
          register
        using Addr = Register::Address<0x40020020,0xffff0000,0,unsigned>;
        ///Number of data to transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Nonecpar2{    ///<channel x peripheral address
          register
        using Addr = Register::Address<0x40020024,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Nonecmar2{    ///<channel x memory address
          register
        using Addr = Register::Address<0x40020028,0x00000000,0,unsigned>;
        ///Memory address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Noneccr3{    ///<channel x configuration
          register
        using Addr = Register::Address<0x40020030,0xffff8000,0,unsigned>;
        ///Memory to memory mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
        ///Channel priority level
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Memory size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Peripheral size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory increment mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral increment mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Circular mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Data transfer direction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Transfer error interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Half transfer interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer complete interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Channel enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Nonecndtr3{    ///<channel x number of data
          register
        using Addr = Register::Address<0x40020034,0xffff0000,0,unsigned>;
        ///Number of data to transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Nonecpar3{    ///<channel x peripheral address
          register
        using Addr = Register::Address<0x40020038,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Nonecmar3{    ///<channel x memory address
          register
        using Addr = Register::Address<0x4002003c,0x00000000,0,unsigned>;
        ///Memory address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Noneccr4{    ///<channel x configuration
          register
        using Addr = Register::Address<0x40020044,0xffff8000,0,unsigned>;
        ///Memory to memory mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
        ///Channel priority level
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Memory size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Peripheral size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory increment mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral increment mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Circular mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Data transfer direction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Transfer error interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Half transfer interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer complete interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Channel enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Nonecndtr4{    ///<channel x number of data
          register
        using Addr = Register::Address<0x40020048,0xffff0000,0,unsigned>;
        ///Number of data to transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Nonecpar4{    ///<channel x peripheral address
          register
        using Addr = Register::Address<0x4002004c,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Nonecmar4{    ///<channel x memory address
          register
        using Addr = Register::Address<0x40020050,0x00000000,0,unsigned>;
        ///Memory address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Noneccr5{    ///<channel x configuration
          register
        using Addr = Register::Address<0x40020058,0xffff8000,0,unsigned>;
        ///Memory to memory mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
        ///Channel priority level
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Memory size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Peripheral size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory increment mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral increment mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Circular mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Data transfer direction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Transfer error interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Half transfer interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer complete interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Channel enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Nonecndtr5{    ///<channel x number of data
          register
        using Addr = Register::Address<0x4002005c,0xffff0000,0,unsigned>;
        ///Number of data to transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Nonecpar5{    ///<channel x peripheral address
          register
        using Addr = Register::Address<0x40020060,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Nonecmar5{    ///<channel x memory address
          register
        using Addr = Register::Address<0x40020064,0x00000000,0,unsigned>;
        ///Memory address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Noneccr6{    ///<channel x configuration
          register
        using Addr = Register::Address<0x4002006c,0xffff8000,0,unsigned>;
        ///Memory to memory mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
        ///Channel priority level
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Memory size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Peripheral size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory increment mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral increment mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Circular mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Data transfer direction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Transfer error interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Half transfer interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer complete interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Channel enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Nonecndtr6{    ///<channel x number of data
          register
        using Addr = Register::Address<0x40020070,0xffff0000,0,unsigned>;
        ///Number of data to transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Nonecpar6{    ///<channel x peripheral address
          register
        using Addr = Register::Address<0x40020074,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Nonecmar6{    ///<channel x memory address
          register
        using Addr = Register::Address<0x40020078,0x00000000,0,unsigned>;
        ///Memory address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Noneccr7{    ///<channel x configuration
          register
        using Addr = Register::Address<0x40020080,0xffff8000,0,unsigned>;
        ///Memory to memory mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
        ///Channel priority level
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Memory size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Peripheral size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory increment mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral increment mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Circular mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Data transfer direction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Transfer error interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Half transfer interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer complete interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Channel enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Nonecndtr7{    ///<channel x number of data
          register
        using Addr = Register::Address<0x40020084,0xffff0000,0,unsigned>;
        ///Number of data to transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Nonecpar7{    ///<channel x peripheral address
          register
        using Addr = Register::Address<0x40020088,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Nonecmar7{    ///<channel x memory address
          register
        using Addr = Register::Address<0x4002008c,0x00000000,0,unsigned>;
        ///Memory address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Nonecselr{    ///<channel selection register
        using Addr = Register::Address<0x400200a8,0xf0000000,0,unsigned>;
        ///DMA channel 7 selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> c7s{}; 
        ///DMA channel 6 selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> c6s{}; 
        ///DMA channel 5 selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> c5s{}; 
        ///DMA channel 4 selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> c4s{}; 
        ///DMA channel 3 selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> c3s{}; 
        ///DMA channel 2 selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> c2s{}; 
        ///DMA channel 1 selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> c1s{}; 
    }
}
