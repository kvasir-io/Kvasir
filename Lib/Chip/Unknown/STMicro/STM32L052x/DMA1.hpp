#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Direct memory access controller
    namespace Noneisr{    ///<interrupt status register
        using Addr = Register::Address<0x40020000,0xf0000000,0,unsigned>;
        ///Channel x transfer error flag (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> teif7{}; 
        namespace Teif7ValC{
        }
        ///Channel x half transfer flag (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> htif7{}; 
        namespace Htif7ValC{
        }
        ///Channel x transfer complete flag (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> tcif7{}; 
        namespace Tcif7ValC{
        }
        ///Channel x global interrupt flag (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> gif7{}; 
        namespace Gif7ValC{
        }
        ///Channel x transfer error flag (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> teif6{}; 
        namespace Teif6ValC{
        }
        ///Channel x half transfer flag (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> htif6{}; 
        namespace Htif6ValC{
        }
        ///Channel x transfer complete flag (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tcif6{}; 
        namespace Tcif6ValC{
        }
        ///Channel x global interrupt flag (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> gif6{}; 
        namespace Gif6ValC{
        }
        ///Channel x transfer error flag (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> teif5{}; 
        namespace Teif5ValC{
        }
        ///Channel x half transfer flag (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> htif5{}; 
        namespace Htif5ValC{
        }
        ///Channel x transfer complete flag (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tcif5{}; 
        namespace Tcif5ValC{
        }
        ///Channel x global interrupt flag (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> gif5{}; 
        namespace Gif5ValC{
        }
        ///Channel x transfer error flag (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> teif4{}; 
        namespace Teif4ValC{
        }
        ///Channel x half transfer flag (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> htif4{}; 
        namespace Htif4ValC{
        }
        ///Channel x transfer complete flag (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tcif4{}; 
        namespace Tcif4ValC{
        }
        ///Channel x global interrupt flag (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> gif4{}; 
        namespace Gif4ValC{
        }
        ///Channel x transfer error flag (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> teif3{}; 
        namespace Teif3ValC{
        }
        ///Channel x half transfer flag (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> htif3{}; 
        namespace Htif3ValC{
        }
        ///Channel x transfer complete flag (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tcif3{}; 
        namespace Tcif3ValC{
        }
        ///Channel x global interrupt flag (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gif3{}; 
        namespace Gif3ValC{
        }
        ///Channel x transfer error flag (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> teif2{}; 
        namespace Teif2ValC{
        }
        ///Channel x half transfer flag (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> htif2{}; 
        namespace Htif2ValC{
        }
        ///Channel x transfer complete flag (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcif2{}; 
        namespace Tcif2ValC{
        }
        ///Channel x global interrupt flag (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gif2{}; 
        namespace Gif2ValC{
        }
        ///Channel x transfer error flag (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teif1{}; 
        namespace Teif1ValC{
        }
        ///Channel x half transfer flag (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htif1{}; 
        namespace Htif1ValC{
        }
        ///Channel x transfer complete flag (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcif1{}; 
        namespace Tcif1ValC{
        }
        ///Channel x global interrupt flag (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gif1{}; 
        namespace Gif1ValC{
        }
    }
    namespace Noneifcr{    ///<interrupt flag clear register
        using Addr = Register::Address<0x40020004,0xf0000000,0,unsigned>;
        ///Channel x transfer error clear (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> cteif7{}; 
        namespace Cteif7ValC{
        }
        ///Channel x half transfer clear (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> chtif7{}; 
        namespace Chtif7ValC{
        }
        ///Channel x transfer complete clear (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ctcif7{}; 
        namespace Ctcif7ValC{
        }
        ///Channel x global interrupt clear (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cgif7{}; 
        namespace Cgif7ValC{
        }
        ///Channel x transfer error clear (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cteif6{}; 
        namespace Cteif6ValC{
        }
        ///Channel x half transfer clear (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> chtif6{}; 
        namespace Chtif6ValC{
        }
        ///Channel x transfer complete clear (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ctcif6{}; 
        namespace Ctcif6ValC{
        }
        ///Channel x global interrupt clear (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> cgif6{}; 
        namespace Cgif6ValC{
        }
        ///Channel x transfer error clear (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cteif5{}; 
        namespace Cteif5ValC{
        }
        ///Channel x half transfer clear (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> chtif5{}; 
        namespace Chtif5ValC{
        }
        ///Channel x transfer complete clear (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ctcif5{}; 
        namespace Ctcif5ValC{
        }
        ///Channel x global interrupt clear (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cgif5{}; 
        namespace Cgif5ValC{
        }
        ///Channel x transfer error clear (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cteif4{}; 
        namespace Cteif4ValC{
        }
        ///Channel x half transfer clear (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> chtif4{}; 
        namespace Chtif4ValC{
        }
        ///Channel x transfer complete clear (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ctcif4{}; 
        namespace Ctcif4ValC{
        }
        ///Channel x global interrupt clear (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cgif4{}; 
        namespace Cgif4ValC{
        }
        ///Channel x transfer error clear (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cteif3{}; 
        namespace Cteif3ValC{
        }
        ///Channel x half transfer clear (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> chtif3{}; 
        namespace Chtif3ValC{
        }
        ///Channel x transfer complete clear (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctcif3{}; 
        namespace Ctcif3ValC{
        }
        ///Channel x global interrupt clear (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cgif3{}; 
        namespace Cgif3ValC{
        }
        ///Channel x transfer error clear (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cteif2{}; 
        namespace Cteif2ValC{
        }
        ///Channel x half transfer clear (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chtif2{}; 
        namespace Chtif2ValC{
        }
        ///Channel x transfer complete clear (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctcif2{}; 
        namespace Ctcif2ValC{
        }
        ///Channel x global interrupt clear (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cgif2{}; 
        namespace Cgif2ValC{
        }
        ///Channel x transfer error clear (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cteif1{}; 
        namespace Cteif1ValC{
        }
        ///Channel x half transfer clear (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chtif1{}; 
        namespace Chtif1ValC{
        }
        ///Channel x transfer complete clear (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctcif1{}; 
        namespace Ctcif1ValC{
        }
        ///Channel x global interrupt clear (x = 1
              ..7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cgif1{}; 
        namespace Cgif1ValC{
        }
    }
    namespace Noneccr1{    ///<channel x configuration
          register
        using Addr = Register::Address<0x40020008,0xffff8000,0,unsigned>;
        ///Memory to memory mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
        namespace Mem2memValC{
        }
        ///Channel priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        namespace PlValC{
        }
        ///Memory size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        namespace MsizeValC{
        }
        ///Peripheral size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        namespace PsizeValC{
        }
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        namespace MincValC{
        }
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        namespace PincValC{
        }
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        namespace CircValC{
        }
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///Transfer error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        namespace TeieValC{
        }
        ///Half transfer interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        namespace HtieValC{
        }
        ///Transfer complete interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        namespace TcieValC{
        }
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
    }
    namespace Nonecndtr1{    ///<channel x number of data
          register
        using Addr = Register::Address<0x4002000c,0xffff0000,0,unsigned>;
        ///Number of data to transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
        namespace NdtValC{
        }
    }
    namespace Nonecpar1{    ///<channel x peripheral address
          register
        using Addr = Register::Address<0x40020010,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
    }
    namespace Nonecmar1{    ///<channel x memory address
          register
        using Addr = Register::Address<0x40020014,0x00000000,0,unsigned>;
        ///Memory address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
        namespace MaValC{
        }
    }
    namespace Noneccr2{    ///<channel x configuration
          register
        using Addr = Register::Address<0x4002001c,0xffff8000,0,unsigned>;
        ///Memory to memory mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
        namespace Mem2memValC{
        }
        ///Channel priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        namespace PlValC{
        }
        ///Memory size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        namespace MsizeValC{
        }
        ///Peripheral size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        namespace PsizeValC{
        }
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        namespace MincValC{
        }
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        namespace PincValC{
        }
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        namespace CircValC{
        }
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///Transfer error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        namespace TeieValC{
        }
        ///Half transfer interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        namespace HtieValC{
        }
        ///Transfer complete interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        namespace TcieValC{
        }
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
    }
    namespace Nonecndtr2{    ///<channel x number of data
          register
        using Addr = Register::Address<0x40020020,0xffff0000,0,unsigned>;
        ///Number of data to transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
        namespace NdtValC{
        }
    }
    namespace Nonecpar2{    ///<channel x peripheral address
          register
        using Addr = Register::Address<0x40020024,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
    }
    namespace Nonecmar2{    ///<channel x memory address
          register
        using Addr = Register::Address<0x40020028,0x00000000,0,unsigned>;
        ///Memory address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
        namespace MaValC{
        }
    }
    namespace Noneccr3{    ///<channel x configuration
          register
        using Addr = Register::Address<0x40020030,0xffff8000,0,unsigned>;
        ///Memory to memory mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
        namespace Mem2memValC{
        }
        ///Channel priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        namespace PlValC{
        }
        ///Memory size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        namespace MsizeValC{
        }
        ///Peripheral size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        namespace PsizeValC{
        }
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        namespace MincValC{
        }
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        namespace PincValC{
        }
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        namespace CircValC{
        }
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///Transfer error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        namespace TeieValC{
        }
        ///Half transfer interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        namespace HtieValC{
        }
        ///Transfer complete interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        namespace TcieValC{
        }
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
    }
    namespace Nonecndtr3{    ///<channel x number of data
          register
        using Addr = Register::Address<0x40020034,0xffff0000,0,unsigned>;
        ///Number of data to transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
        namespace NdtValC{
        }
    }
    namespace Nonecpar3{    ///<channel x peripheral address
          register
        using Addr = Register::Address<0x40020038,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
    }
    namespace Nonecmar3{    ///<channel x memory address
          register
        using Addr = Register::Address<0x4002003c,0x00000000,0,unsigned>;
        ///Memory address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
        namespace MaValC{
        }
    }
    namespace Noneccr4{    ///<channel x configuration
          register
        using Addr = Register::Address<0x40020044,0xffff8000,0,unsigned>;
        ///Memory to memory mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
        namespace Mem2memValC{
        }
        ///Channel priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        namespace PlValC{
        }
        ///Memory size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        namespace MsizeValC{
        }
        ///Peripheral size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        namespace PsizeValC{
        }
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        namespace MincValC{
        }
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        namespace PincValC{
        }
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        namespace CircValC{
        }
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///Transfer error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        namespace TeieValC{
        }
        ///Half transfer interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        namespace HtieValC{
        }
        ///Transfer complete interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        namespace TcieValC{
        }
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
    }
    namespace Nonecndtr4{    ///<channel x number of data
          register
        using Addr = Register::Address<0x40020048,0xffff0000,0,unsigned>;
        ///Number of data to transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
        namespace NdtValC{
        }
    }
    namespace Nonecpar4{    ///<channel x peripheral address
          register
        using Addr = Register::Address<0x4002004c,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
    }
    namespace Nonecmar4{    ///<channel x memory address
          register
        using Addr = Register::Address<0x40020050,0x00000000,0,unsigned>;
        ///Memory address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
        namespace MaValC{
        }
    }
    namespace Noneccr5{    ///<channel x configuration
          register
        using Addr = Register::Address<0x40020058,0xffff8000,0,unsigned>;
        ///Memory to memory mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
        namespace Mem2memValC{
        }
        ///Channel priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        namespace PlValC{
        }
        ///Memory size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        namespace MsizeValC{
        }
        ///Peripheral size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        namespace PsizeValC{
        }
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        namespace MincValC{
        }
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        namespace PincValC{
        }
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        namespace CircValC{
        }
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///Transfer error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        namespace TeieValC{
        }
        ///Half transfer interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        namespace HtieValC{
        }
        ///Transfer complete interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        namespace TcieValC{
        }
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
    }
    namespace Nonecndtr5{    ///<channel x number of data
          register
        using Addr = Register::Address<0x4002005c,0xffff0000,0,unsigned>;
        ///Number of data to transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
        namespace NdtValC{
        }
    }
    namespace Nonecpar5{    ///<channel x peripheral address
          register
        using Addr = Register::Address<0x40020060,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
    }
    namespace Nonecmar5{    ///<channel x memory address
          register
        using Addr = Register::Address<0x40020064,0x00000000,0,unsigned>;
        ///Memory address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
        namespace MaValC{
        }
    }
    namespace Noneccr6{    ///<channel x configuration
          register
        using Addr = Register::Address<0x4002006c,0xffff8000,0,unsigned>;
        ///Memory to memory mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
        namespace Mem2memValC{
        }
        ///Channel priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        namespace PlValC{
        }
        ///Memory size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        namespace MsizeValC{
        }
        ///Peripheral size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        namespace PsizeValC{
        }
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        namespace MincValC{
        }
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        namespace PincValC{
        }
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        namespace CircValC{
        }
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///Transfer error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        namespace TeieValC{
        }
        ///Half transfer interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        namespace HtieValC{
        }
        ///Transfer complete interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        namespace TcieValC{
        }
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
    }
    namespace Nonecndtr6{    ///<channel x number of data
          register
        using Addr = Register::Address<0x40020070,0xffff0000,0,unsigned>;
        ///Number of data to transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
        namespace NdtValC{
        }
    }
    namespace Nonecpar6{    ///<channel x peripheral address
          register
        using Addr = Register::Address<0x40020074,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
    }
    namespace Nonecmar6{    ///<channel x memory address
          register
        using Addr = Register::Address<0x40020078,0x00000000,0,unsigned>;
        ///Memory address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
        namespace MaValC{
        }
    }
    namespace Noneccr7{    ///<channel x configuration
          register
        using Addr = Register::Address<0x40020080,0xffff8000,0,unsigned>;
        ///Memory to memory mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mem2mem{}; 
        namespace Mem2memValC{
        }
        ///Channel priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> pl{}; 
        namespace PlValC{
        }
        ///Memory size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> msize{}; 
        namespace MsizeValC{
        }
        ///Peripheral size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> psize{}; 
        namespace PsizeValC{
        }
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> minc{}; 
        namespace MincValC{
        }
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pinc{}; 
        namespace PincValC{
        }
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> circ{}; 
        namespace CircValC{
        }
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///Transfer error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teie{}; 
        namespace TeieValC{
        }
        ///Half transfer interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie{}; 
        namespace HtieValC{
        }
        ///Transfer complete interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcie{}; 
        namespace TcieValC{
        }
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
    }
    namespace Nonecndtr7{    ///<channel x number of data
          register
        using Addr = Register::Address<0x40020084,0xffff0000,0,unsigned>;
        ///Number of data to transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
        namespace NdtValC{
        }
    }
    namespace Nonecpar7{    ///<channel x peripheral address
          register
        using Addr = Register::Address<0x40020088,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
    }
    namespace Nonecmar7{    ///<channel x memory address
          register
        using Addr = Register::Address<0x4002008c,0x00000000,0,unsigned>;
        ///Memory address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ma{}; 
        namespace MaValC{
        }
    }
    namespace Nonecselr{    ///<channel selection register
        using Addr = Register::Address<0x400200a8,0xf0000000,0,unsigned>;
        ///DMA channel 7 selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> c7s{}; 
        namespace C7sValC{
        }
        ///DMA channel 6 selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> c6s{}; 
        namespace C6sValC{
        }
        ///DMA channel 5 selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> c5s{}; 
        namespace C5sValC{
        }
        ///DMA channel 4 selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> c4s{}; 
        namespace C4sValC{
        }
        ///DMA channel 3 selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> c3s{}; 
        namespace C3sValC{
        }
        ///DMA channel 2 selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> c2s{}; 
        namespace C2sValC{
        }
        ///DMA channel 1 selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> c1s{}; 
        namespace C1sValC{
        }
    }
}
