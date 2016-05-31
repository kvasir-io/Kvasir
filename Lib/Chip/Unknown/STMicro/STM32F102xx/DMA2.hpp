#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//DMA controller
    namespace Dma2Isr{    ///<DMA interrupt status register          (DMA_ISR)
        using Addr = Register::Address<0x40020400,0xf0000000,0x00000000,unsigned>;
        ///Channel 1 Global interrupt              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gif1{}; 
        ///Channel 1 Transfer Complete              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcif1{}; 
        ///Channel 1 Half Transfer Complete              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htif1{}; 
        ///Channel 1 Transfer Error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teif1{}; 
        ///Channel 2 Global interrupt              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gif2{}; 
        ///Channel 2 Transfer Complete              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcif2{}; 
        ///Channel 2 Half Transfer Complete              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> htif2{}; 
        ///Channel 2 Transfer Error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> teif2{}; 
        ///Channel 3 Global interrupt              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gif3{}; 
        ///Channel 3 Transfer Complete              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tcif3{}; 
        ///Channel 3 Half Transfer Complete              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> htif3{}; 
        ///Channel 3 Transfer Error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> teif3{}; 
        ///Channel 4 Global interrupt              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> gif4{}; 
        ///Channel 4 Transfer Complete              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tcif4{}; 
        ///Channel 4 Half Transfer Complete              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> htif4{}; 
        ///Channel 4 Transfer Error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> teif4{}; 
        ///Channel 5 Global interrupt              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> gif5{}; 
        ///Channel 5 Transfer Complete              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tcif5{}; 
        ///Channel 5 Half Transfer Complete              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> htif5{}; 
        ///Channel 5 Transfer Error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> teif5{}; 
        ///Channel 6 Global interrupt              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> gif6{}; 
        ///Channel 6 Transfer Complete              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tcif6{}; 
        ///Channel 6 Half Transfer Complete              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> htif6{}; 
        ///Channel 6 Transfer Error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> teif6{}; 
        ///Channel 7 Global interrupt              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> gif7{}; 
        ///Channel 7 Transfer Complete              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> tcif7{}; 
        ///Channel 7 Half Transfer Complete              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> htif7{}; 
        ///Channel 7 Transfer Error              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> teif7{}; 
    }
    namespace Dma2Ifcr{    ///<DMA interrupt flag clear register          (DMA_IFCR)
        using Addr = Register::Address<0x40020404,0xf0000000,0x00000000,unsigned>;
        ///Channel 1 Global interrupt              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cgif1{}; 
        ///Channel 2 Global interrupt              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cgif2{}; 
        ///Channel 3 Global interrupt              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cgif3{}; 
        ///Channel 4 Global interrupt              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cgif4{}; 
        ///Channel 5 Global interrupt              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cgif5{}; 
        ///Channel 6 Global interrupt              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> cgif6{}; 
        ///Channel 7 Global interrupt              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cgif7{}; 
        ///Channel 1 Transfer Complete              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctcif1{}; 
        ///Channel 2 Transfer Complete              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctcif2{}; 
        ///Channel 3 Transfer Complete              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctcif3{}; 
        ///Channel 4 Transfer Complete              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ctcif4{}; 
        ///Channel 5 Transfer Complete              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ctcif5{}; 
        ///Channel 6 Transfer Complete              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ctcif6{}; 
        ///Channel 7 Transfer Complete              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ctcif7{}; 
        ///Channel 1 Half Transfer              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chtif1{}; 
        ///Channel 2 Half Transfer              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chtif2{}; 
        ///Channel 3 Half Transfer              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> chtif3{}; 
        ///Channel 4 Half Transfer              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> chtif4{}; 
        ///Channel 5 Half Transfer              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> chtif5{}; 
        ///Channel 6 Half Transfer              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> chtif6{}; 
        ///Channel 7 Half Transfer              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> chtif7{}; 
        ///Channel 1 Transfer Error              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cteif1{}; 
        ///Channel 2 Transfer Error              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cteif2{}; 
        ///Channel 3 Transfer Error              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cteif3{}; 
        ///Channel 4 Transfer Error              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cteif4{}; 
        ///Channel 5 Transfer Error              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cteif5{}; 
        ///Channel 6 Transfer Error              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cteif6{}; 
        ///Channel 7 Transfer Error              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> cteif7{}; 
    }
    namespace Dma2Ccr1{    ///<DMA channel configuration register          (DMA_CCR)
        using Addr = Register::Address<0x40020408,0xffff8000,0x00000000,unsigned>;
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer complete interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half Transfer interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Channel Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Memory to memory mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
    }
    namespace Dma2Cndtr1{    ///<DMA channel 1 number of data          register
        using Addr = Register::Address<0x4002040c,0xffff0000,0x00000000,unsigned>;
        ///Number of data to transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Dma2Cpar1{    ///<DMA channel 1 peripheral address          register
        using Addr = Register::Address<0x40020410,0x00000000,0x00000000,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Dma2Cmar1{    ///<DMA channel 1 memory address          register
        using Addr = Register::Address<0x40020414,0x00000000,0x00000000,unsigned>;
        ///Memory address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Dma2Ccr2{    ///<DMA channel configuration register          (DMA_CCR)
        using Addr = Register::Address<0x4002041c,0xffff8000,0x00000000,unsigned>;
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer complete interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half Transfer interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Channel Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Memory to memory mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
    }
    namespace Dma2Cndtr2{    ///<DMA channel 2 number of data          register
        using Addr = Register::Address<0x40020420,0xffff0000,0x00000000,unsigned>;
        ///Number of data to transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Dma2Cpar2{    ///<DMA channel 2 peripheral address          register
        using Addr = Register::Address<0x40020424,0x00000000,0x00000000,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Dma2Cmar2{    ///<DMA channel 2 memory address          register
        using Addr = Register::Address<0x40020428,0x00000000,0x00000000,unsigned>;
        ///Memory address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Dma2Ccr3{    ///<DMA channel configuration register          (DMA_CCR)
        using Addr = Register::Address<0x40020430,0xffff8000,0x00000000,unsigned>;
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer complete interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half Transfer interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Channel Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Memory to memory mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
    }
    namespace Dma2Cndtr3{    ///<DMA channel 3 number of data          register
        using Addr = Register::Address<0x40020434,0xffff0000,0x00000000,unsigned>;
        ///Number of data to transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Dma2Cpar3{    ///<DMA channel 3 peripheral address          register
        using Addr = Register::Address<0x40020438,0x00000000,0x00000000,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Dma2Cmar3{    ///<DMA channel 3 memory address          register
        using Addr = Register::Address<0x4002043c,0x00000000,0x00000000,unsigned>;
        ///Memory address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Dma2Ccr4{    ///<DMA channel configuration register          (DMA_CCR)
        using Addr = Register::Address<0x40020444,0xffff8000,0x00000000,unsigned>;
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer complete interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half Transfer interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Channel Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Memory to memory mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
    }
    namespace Dma2Cndtr4{    ///<DMA channel 4 number of data          register
        using Addr = Register::Address<0x40020448,0xffff0000,0x00000000,unsigned>;
        ///Number of data to transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Dma2Cpar4{    ///<DMA channel 4 peripheral address          register
        using Addr = Register::Address<0x4002044c,0x00000000,0x00000000,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Dma2Cmar4{    ///<DMA channel 4 memory address          register
        using Addr = Register::Address<0x40020450,0x00000000,0x00000000,unsigned>;
        ///Memory address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Dma2Ccr5{    ///<DMA channel configuration register          (DMA_CCR)
        using Addr = Register::Address<0x40020458,0xffff8000,0x00000000,unsigned>;
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer complete interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half Transfer interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Channel Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Memory to memory mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
    }
    namespace Dma2Cndtr5{    ///<DMA channel 5 number of data          register
        using Addr = Register::Address<0x4002045c,0xffff0000,0x00000000,unsigned>;
        ///Number of data to transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Dma2Cpar5{    ///<DMA channel 5 peripheral address          register
        using Addr = Register::Address<0x40020460,0x00000000,0x00000000,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Dma2Cmar5{    ///<DMA channel 5 memory address          register
        using Addr = Register::Address<0x40020464,0x00000000,0x00000000,unsigned>;
        ///Memory address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Dma2Ccr6{    ///<DMA channel configuration register          (DMA_CCR)
        using Addr = Register::Address<0x4002046c,0xffff8000,0x00000000,unsigned>;
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer complete interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half Transfer interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Channel Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Memory to memory mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
    }
    namespace Dma2Cndtr6{    ///<DMA channel 6 number of data          register
        using Addr = Register::Address<0x40020470,0xffff0000,0x00000000,unsigned>;
        ///Number of data to transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Dma2Cpar6{    ///<DMA channel 6 peripheral address          register
        using Addr = Register::Address<0x40020474,0x00000000,0x00000000,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Dma2Cmar6{    ///<DMA channel 6 memory address          register
        using Addr = Register::Address<0x40020478,0x00000000,0x00000000,unsigned>;
        ///Memory address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
    namespace Dma2Ccr7{    ///<DMA channel configuration register          (DMA_CCR)
        using Addr = Register::Address<0x40020480,0xffff8000,0x00000000,unsigned>;
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Transfer complete interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Half Transfer interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        ///Transfer error interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        ///Peripheral size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        ///Memory size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        ///Channel Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        ///Memory to memory mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
    }
    namespace Dma2Cndtr7{    ///<DMA channel 7 number of data          register
        using Addr = Register::Address<0x40020484,0xffff0000,0x00000000,unsigned>;
        ///Number of data to transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace Dma2Cpar7{    ///<DMA channel 7 peripheral address          register
        using Addr = Register::Address<0x40020488,0x00000000,0x00000000,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace Dma2Cmar7{    ///<DMA channel 7 memory address          register
        using Addr = Register::Address<0x4002048c,0x00000000,0x00000000,unsigned>;
        ///Memory address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
    }
}
