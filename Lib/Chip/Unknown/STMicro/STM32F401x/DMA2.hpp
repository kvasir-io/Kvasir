#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//DMA controller
    namespace Nonelisr{    ///<low interrupt status register
        using Addr = Register::Address<0x40026400,0xf082f082,0,unsigned>;
        ///Stream x transfer complete interrupt               flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> tcif3{}; 
        namespace Tcif3ValC{
        }
        ///Stream x half transfer interrupt flag               (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> htif3{}; 
        namespace Htif3ValC{
        }
        ///Stream x transfer error interrupt flag               (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> teif3{}; 
        namespace Teif3ValC{
        }
        ///Stream x direct mode error interrupt               flag (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dmeif3{}; 
        namespace Dmeif3ValC{
        }
        ///Stream x FIFO error interrupt flag               (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> feif3{}; 
        namespace Feif3ValC{
        }
        ///Stream x transfer complete interrupt               flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tcif2{}; 
        namespace Tcif2ValC{
        }
        ///Stream x half transfer interrupt flag               (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> htif2{}; 
        namespace Htif2ValC{
        }
        ///Stream x transfer error interrupt flag               (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> teif2{}; 
        namespace Teif2ValC{
        }
        ///Stream x direct mode error interrupt               flag (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dmeif2{}; 
        namespace Dmeif2ValC{
        }
        ///Stream x FIFO error interrupt flag               (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> feif2{}; 
        namespace Feif2ValC{
        }
        ///Stream x transfer complete interrupt               flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tcif1{}; 
        namespace Tcif1ValC{
        }
        ///Stream x half transfer interrupt flag               (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> htif1{}; 
        namespace Htif1ValC{
        }
        ///Stream x transfer error interrupt flag               (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> teif1{}; 
        namespace Teif1ValC{
        }
        ///Stream x direct mode error interrupt               flag (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dmeif1{}; 
        namespace Dmeif1ValC{
        }
        ///Stream x FIFO error interrupt flag               (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> feif1{}; 
        namespace Feif1ValC{
        }
        ///Stream x transfer complete interrupt               flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcif0{}; 
        namespace Tcif0ValC{
        }
        ///Stream x half transfer interrupt flag               (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> htif0{}; 
        namespace Htif0ValC{
        }
        ///Stream x transfer error interrupt flag               (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teif0{}; 
        namespace Teif0ValC{
        }
        ///Stream x direct mode error interrupt               flag (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmeif0{}; 
        namespace Dmeif0ValC{
        }
        ///Stream x FIFO error interrupt flag               (x=3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> feif0{}; 
        namespace Feif0ValC{
        }
    }
    namespace Nonehisr{    ///<high interrupt status register
        using Addr = Register::Address<0x40026404,0xf082f082,0,unsigned>;
        ///Stream x transfer complete interrupt               flag (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> tcif7{}; 
        namespace Tcif7ValC{
        }
        ///Stream x half transfer interrupt flag               (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> htif7{}; 
        namespace Htif7ValC{
        }
        ///Stream x transfer error interrupt flag               (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> teif7{}; 
        namespace Teif7ValC{
        }
        ///Stream x direct mode error interrupt               flag (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dmeif7{}; 
        namespace Dmeif7ValC{
        }
        ///Stream x FIFO error interrupt flag               (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> feif7{}; 
        namespace Feif7ValC{
        }
        ///Stream x transfer complete interrupt               flag (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tcif6{}; 
        namespace Tcif6ValC{
        }
        ///Stream x half transfer interrupt flag               (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> htif6{}; 
        namespace Htif6ValC{
        }
        ///Stream x transfer error interrupt flag               (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> teif6{}; 
        namespace Teif6ValC{
        }
        ///Stream x direct mode error interrupt               flag (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dmeif6{}; 
        namespace Dmeif6ValC{
        }
        ///Stream x FIFO error interrupt flag               (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> feif6{}; 
        namespace Feif6ValC{
        }
        ///Stream x transfer complete interrupt               flag (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tcif5{}; 
        namespace Tcif5ValC{
        }
        ///Stream x half transfer interrupt flag               (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> htif5{}; 
        namespace Htif5ValC{
        }
        ///Stream x transfer error interrupt flag               (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> teif5{}; 
        namespace Teif5ValC{
        }
        ///Stream x direct mode error interrupt               flag (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dmeif5{}; 
        namespace Dmeif5ValC{
        }
        ///Stream x FIFO error interrupt flag               (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> feif5{}; 
        namespace Feif5ValC{
        }
        ///Stream x transfer complete interrupt               flag (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tcif4{}; 
        namespace Tcif4ValC{
        }
        ///Stream x half transfer interrupt flag               (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> htif4{}; 
        namespace Htif4ValC{
        }
        ///Stream x transfer error interrupt flag               (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> teif4{}; 
        namespace Teif4ValC{
        }
        ///Stream x direct mode error interrupt               flag (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmeif4{}; 
        namespace Dmeif4ValC{
        }
        ///Stream x FIFO error interrupt flag               (x=7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> feif4{}; 
        namespace Feif4ValC{
        }
    }
    namespace Nonelifcr{    ///<low interrupt flag clear           register
        using Addr = Register::Address<0x40026408,0xf082f082,0,unsigned>;
        ///Stream x clear transfer complete               interrupt flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ctcif3{}; 
        namespace Ctcif3ValC{
        }
        ///Stream x clear half transfer interrupt               flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> chtif3{}; 
        namespace Chtif3ValC{
        }
        ///Stream x clear transfer error interrupt               flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cteif3{}; 
        namespace Cteif3ValC{
        }
        ///Stream x clear direct mode error               interrupt flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cdmeif3{}; 
        namespace Cdmeif3ValC{
        }
        ///Stream x clear FIFO error interrupt flag               (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> cfeif3{}; 
        namespace Cfeif3ValC{
        }
        ///Stream x clear transfer complete               interrupt flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ctcif2{}; 
        namespace Ctcif2ValC{
        }
        ///Stream x clear half transfer interrupt               flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> chtif2{}; 
        namespace Chtif2ValC{
        }
        ///Stream x clear transfer error interrupt               flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cteif2{}; 
        namespace Cteif2ValC{
        }
        ///Stream x clear direct mode error               interrupt flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cdmeif2{}; 
        namespace Cdmeif2ValC{
        }
        ///Stream x clear FIFO error interrupt flag               (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cfeif2{}; 
        namespace Cfeif2ValC{
        }
        ///Stream x clear transfer complete               interrupt flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ctcif1{}; 
        namespace Ctcif1ValC{
        }
        ///Stream x clear half transfer interrupt               flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> chtif1{}; 
        namespace Chtif1ValC{
        }
        ///Stream x clear transfer error interrupt               flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cteif1{}; 
        namespace Cteif1ValC{
        }
        ///Stream x clear direct mode error               interrupt flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cdmeif1{}; 
        namespace Cdmeif1ValC{
        }
        ///Stream x clear FIFO error interrupt flag               (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cfeif1{}; 
        namespace Cfeif1ValC{
        }
        ///Stream x clear transfer complete               interrupt flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctcif0{}; 
        namespace Ctcif0ValC{
        }
        ///Stream x clear half transfer interrupt               flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> chtif0{}; 
        namespace Chtif0ValC{
        }
        ///Stream x clear transfer error interrupt               flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cteif0{}; 
        namespace Cteif0ValC{
        }
        ///Stream x clear direct mode error               interrupt flag (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cdmeif0{}; 
        namespace Cdmeif0ValC{
        }
        ///Stream x clear FIFO error interrupt flag               (x = 3..0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cfeif0{}; 
        namespace Cfeif0ValC{
        }
    }
    namespace Nonehifcr{    ///<high interrupt flag clear           register
        using Addr = Register::Address<0x4002640c,0xf082f082,0,unsigned>;
        ///Stream x clear transfer complete               interrupt flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ctcif7{}; 
        namespace Ctcif7ValC{
        }
        ///Stream x clear half transfer interrupt               flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> chtif7{}; 
        namespace Chtif7ValC{
        }
        ///Stream x clear transfer error interrupt               flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cteif7{}; 
        namespace Cteif7ValC{
        }
        ///Stream x clear direct mode error               interrupt flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cdmeif7{}; 
        namespace Cdmeif7ValC{
        }
        ///Stream x clear FIFO error interrupt flag               (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> cfeif7{}; 
        namespace Cfeif7ValC{
        }
        ///Stream x clear transfer complete               interrupt flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ctcif6{}; 
        namespace Ctcif6ValC{
        }
        ///Stream x clear half transfer interrupt               flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> chtif6{}; 
        namespace Chtif6ValC{
        }
        ///Stream x clear transfer error interrupt               flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cteif6{}; 
        namespace Cteif6ValC{
        }
        ///Stream x clear direct mode error               interrupt flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cdmeif6{}; 
        namespace Cdmeif6ValC{
        }
        ///Stream x clear FIFO error interrupt flag               (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cfeif6{}; 
        namespace Cfeif6ValC{
        }
        ///Stream x clear transfer complete               interrupt flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ctcif5{}; 
        namespace Ctcif5ValC{
        }
        ///Stream x clear half transfer interrupt               flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> chtif5{}; 
        namespace Chtif5ValC{
        }
        ///Stream x clear transfer error interrupt               flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cteif5{}; 
        namespace Cteif5ValC{
        }
        ///Stream x clear direct mode error               interrupt flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cdmeif5{}; 
        namespace Cdmeif5ValC{
        }
        ///Stream x clear FIFO error interrupt flag               (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cfeif5{}; 
        namespace Cfeif5ValC{
        }
        ///Stream x clear transfer complete               interrupt flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctcif4{}; 
        namespace Ctcif4ValC{
        }
        ///Stream x clear half transfer interrupt               flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> chtif4{}; 
        namespace Chtif4ValC{
        }
        ///Stream x clear transfer error interrupt               flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cteif4{}; 
        namespace Cteif4ValC{
        }
        ///Stream x clear direct mode error               interrupt flag (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cdmeif4{}; 
        namespace Cdmeif4ValC{
        }
        ///Stream x clear FIFO error interrupt flag               (x = 7..4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cfeif4{}; 
        namespace Cfeif4ValC{
        }
    }
    namespace Nones0cr{    ///<stream x configuration           register
        using Addr = Register::Address<0x40026410,0xf0100000,0,unsigned>;
        ///Channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,unsigned> chsel{}; 
        namespace ChselValC{
        }
        ///Memory burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,23),Register::ReadWriteAccess,unsigned> mburst{}; 
        namespace MburstValC{
        }
        ///Peripheral burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> pburst{}; 
        namespace PburstValC{
        }
        ///Current target (only in double buffer               mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ct{}; 
        namespace CtValC{
        }
        ///Double buffer mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbm{}; 
        namespace DbmValC{
        }
        ///Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pl{}; 
        namespace PlValC{
        }
        ///Peripheral increment offset               size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pincos{}; 
        namespace PincosValC{
        }
        ///Memory data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> msize{}; 
        namespace MsizeValC{
        }
        ///Peripheral data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> psize{}; 
        namespace PsizeValC{
        }
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> minc{}; 
        namespace MincValC{
        }
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinc{}; 
        namespace PincValC{
        }
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> circ{}; 
        namespace CircValC{
        }
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///Peripheral flow controller
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pfctrl{}; 
        namespace PfctrlValC{
        }
        ///Transfer complete interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcie{}; 
        namespace TcieValC{
        }
        ///Half transfer interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> htie{}; 
        namespace HtieValC{
        }
        ///Transfer error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> teie{}; 
        namespace TeieValC{
        }
        ///Direct mode error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmeie{}; 
        namespace DmeieValC{
        }
        ///Stream enable / flag stream ready when               read low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
    }
    namespace Nones0ndtr{    ///<stream x number of data           register
        using Addr = Register::Address<0x40026414,0xffff0000,0,unsigned>;
        ///Number of data items to               transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
        namespace NdtValC{
        }
    }
    namespace Nones0par{    ///<stream x peripheral address           register
        using Addr = Register::Address<0x40026418,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
    }
    namespace Nones0m0ar{    ///<stream x memory 0 address           register
        using Addr = Register::Address<0x4002641c,0x00000000,0,unsigned>;
        ///Memory 0 address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m0a{}; 
        namespace M0aValC{
        }
    }
    namespace Nones0m1ar{    ///<stream x memory 1 address           register
        using Addr = Register::Address<0x40026420,0x00000000,0,unsigned>;
        ///Memory 1 address (used in case of Double               buffer mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m1a{}; 
        namespace M1aValC{
        }
    }
    namespace Nones0fcr{    ///<stream x FIFO control register
        using Addr = Register::Address<0x40026424,0xffffff40,0,unsigned>;
        ///FIFO error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feie{}; 
        namespace FeieValC{
        }
        ///FIFO status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> fs{}; 
        namespace FsValC{
        }
        ///Direct mode disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmdis{}; 
        namespace DmdisValC{
        }
        ///FIFO threshold selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fth{}; 
        namespace FthValC{
        }
    }
    namespace Nones1cr{    ///<stream x configuration           register
        using Addr = Register::Address<0x40026428,0xf0000000,0,unsigned>;
        ///Channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,unsigned> chsel{}; 
        namespace ChselValC{
        }
        ///Memory burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,23),Register::ReadWriteAccess,unsigned> mburst{}; 
        namespace MburstValC{
        }
        ///Peripheral burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> pburst{}; 
        namespace PburstValC{
        }
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ack{}; 
        namespace AckValC{
        }
        ///Current target (only in double buffer               mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ct{}; 
        namespace CtValC{
        }
        ///Double buffer mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbm{}; 
        namespace DbmValC{
        }
        ///Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pl{}; 
        namespace PlValC{
        }
        ///Peripheral increment offset               size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pincos{}; 
        namespace PincosValC{
        }
        ///Memory data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> msize{}; 
        namespace MsizeValC{
        }
        ///Peripheral data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> psize{}; 
        namespace PsizeValC{
        }
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> minc{}; 
        namespace MincValC{
        }
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinc{}; 
        namespace PincValC{
        }
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> circ{}; 
        namespace CircValC{
        }
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///Peripheral flow controller
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pfctrl{}; 
        namespace PfctrlValC{
        }
        ///Transfer complete interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcie{}; 
        namespace TcieValC{
        }
        ///Half transfer interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> htie{}; 
        namespace HtieValC{
        }
        ///Transfer error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> teie{}; 
        namespace TeieValC{
        }
        ///Direct mode error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmeie{}; 
        namespace DmeieValC{
        }
        ///Stream enable / flag stream ready when               read low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
    }
    namespace Nones1ndtr{    ///<stream x number of data           register
        using Addr = Register::Address<0x4002642c,0xffff0000,0,unsigned>;
        ///Number of data items to               transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
        namespace NdtValC{
        }
    }
    namespace Nones1par{    ///<stream x peripheral address           register
        using Addr = Register::Address<0x40026430,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
    }
    namespace Nones1m0ar{    ///<stream x memory 0 address           register
        using Addr = Register::Address<0x40026434,0x00000000,0,unsigned>;
        ///Memory 0 address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m0a{}; 
        namespace M0aValC{
        }
    }
    namespace Nones1m1ar{    ///<stream x memory 1 address           register
        using Addr = Register::Address<0x40026438,0x00000000,0,unsigned>;
        ///Memory 1 address (used in case of Double               buffer mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m1a{}; 
        namespace M1aValC{
        }
    }
    namespace Nones1fcr{    ///<stream x FIFO control register
        using Addr = Register::Address<0x4002643c,0xffffff40,0,unsigned>;
        ///FIFO error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feie{}; 
        namespace FeieValC{
        }
        ///FIFO status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> fs{}; 
        namespace FsValC{
        }
        ///Direct mode disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmdis{}; 
        namespace DmdisValC{
        }
        ///FIFO threshold selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fth{}; 
        namespace FthValC{
        }
    }
    namespace Nones2cr{    ///<stream x configuration           register
        using Addr = Register::Address<0x40026440,0xf0000000,0,unsigned>;
        ///Channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,unsigned> chsel{}; 
        namespace ChselValC{
        }
        ///Memory burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,23),Register::ReadWriteAccess,unsigned> mburst{}; 
        namespace MburstValC{
        }
        ///Peripheral burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> pburst{}; 
        namespace PburstValC{
        }
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ack{}; 
        namespace AckValC{
        }
        ///Current target (only in double buffer               mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ct{}; 
        namespace CtValC{
        }
        ///Double buffer mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbm{}; 
        namespace DbmValC{
        }
        ///Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pl{}; 
        namespace PlValC{
        }
        ///Peripheral increment offset               size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pincos{}; 
        namespace PincosValC{
        }
        ///Memory data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> msize{}; 
        namespace MsizeValC{
        }
        ///Peripheral data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> psize{}; 
        namespace PsizeValC{
        }
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> minc{}; 
        namespace MincValC{
        }
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinc{}; 
        namespace PincValC{
        }
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> circ{}; 
        namespace CircValC{
        }
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///Peripheral flow controller
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pfctrl{}; 
        namespace PfctrlValC{
        }
        ///Transfer complete interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcie{}; 
        namespace TcieValC{
        }
        ///Half transfer interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> htie{}; 
        namespace HtieValC{
        }
        ///Transfer error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> teie{}; 
        namespace TeieValC{
        }
        ///Direct mode error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmeie{}; 
        namespace DmeieValC{
        }
        ///Stream enable / flag stream ready when               read low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
    }
    namespace Nones2ndtr{    ///<stream x number of data           register
        using Addr = Register::Address<0x40026444,0xffff0000,0,unsigned>;
        ///Number of data items to               transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
        namespace NdtValC{
        }
    }
    namespace Nones2par{    ///<stream x peripheral address           register
        using Addr = Register::Address<0x40026448,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
    }
    namespace Nones2m0ar{    ///<stream x memory 0 address           register
        using Addr = Register::Address<0x4002644c,0x00000000,0,unsigned>;
        ///Memory 0 address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m0a{}; 
        namespace M0aValC{
        }
    }
    namespace Nones2m1ar{    ///<stream x memory 1 address           register
        using Addr = Register::Address<0x40026450,0x00000000,0,unsigned>;
        ///Memory 1 address (used in case of Double               buffer mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m1a{}; 
        namespace M1aValC{
        }
    }
    namespace Nones2fcr{    ///<stream x FIFO control register
        using Addr = Register::Address<0x40026454,0xffffff40,0,unsigned>;
        ///FIFO error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feie{}; 
        namespace FeieValC{
        }
        ///FIFO status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> fs{}; 
        namespace FsValC{
        }
        ///Direct mode disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmdis{}; 
        namespace DmdisValC{
        }
        ///FIFO threshold selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fth{}; 
        namespace FthValC{
        }
    }
    namespace Nones3cr{    ///<stream x configuration           register
        using Addr = Register::Address<0x40026458,0xf0000000,0,unsigned>;
        ///Channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,unsigned> chsel{}; 
        namespace ChselValC{
        }
        ///Memory burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,23),Register::ReadWriteAccess,unsigned> mburst{}; 
        namespace MburstValC{
        }
        ///Peripheral burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> pburst{}; 
        namespace PburstValC{
        }
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ack{}; 
        namespace AckValC{
        }
        ///Current target (only in double buffer               mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ct{}; 
        namespace CtValC{
        }
        ///Double buffer mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbm{}; 
        namespace DbmValC{
        }
        ///Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pl{}; 
        namespace PlValC{
        }
        ///Peripheral increment offset               size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pincos{}; 
        namespace PincosValC{
        }
        ///Memory data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> msize{}; 
        namespace MsizeValC{
        }
        ///Peripheral data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> psize{}; 
        namespace PsizeValC{
        }
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> minc{}; 
        namespace MincValC{
        }
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinc{}; 
        namespace PincValC{
        }
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> circ{}; 
        namespace CircValC{
        }
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///Peripheral flow controller
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pfctrl{}; 
        namespace PfctrlValC{
        }
        ///Transfer complete interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcie{}; 
        namespace TcieValC{
        }
        ///Half transfer interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> htie{}; 
        namespace HtieValC{
        }
        ///Transfer error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> teie{}; 
        namespace TeieValC{
        }
        ///Direct mode error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmeie{}; 
        namespace DmeieValC{
        }
        ///Stream enable / flag stream ready when               read low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
    }
    namespace Nones3ndtr{    ///<stream x number of data           register
        using Addr = Register::Address<0x4002645c,0xffff0000,0,unsigned>;
        ///Number of data items to               transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
        namespace NdtValC{
        }
    }
    namespace Nones3par{    ///<stream x peripheral address           register
        using Addr = Register::Address<0x40026460,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
    }
    namespace Nones3m0ar{    ///<stream x memory 0 address           register
        using Addr = Register::Address<0x40026464,0x00000000,0,unsigned>;
        ///Memory 0 address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m0a{}; 
        namespace M0aValC{
        }
    }
    namespace Nones3m1ar{    ///<stream x memory 1 address           register
        using Addr = Register::Address<0x40026468,0x00000000,0,unsigned>;
        ///Memory 1 address (used in case of Double               buffer mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m1a{}; 
        namespace M1aValC{
        }
    }
    namespace Nones3fcr{    ///<stream x FIFO control register
        using Addr = Register::Address<0x4002646c,0xffffff40,0,unsigned>;
        ///FIFO error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feie{}; 
        namespace FeieValC{
        }
        ///FIFO status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> fs{}; 
        namespace FsValC{
        }
        ///Direct mode disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmdis{}; 
        namespace DmdisValC{
        }
        ///FIFO threshold selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fth{}; 
        namespace FthValC{
        }
    }
    namespace Nones4cr{    ///<stream x configuration           register
        using Addr = Register::Address<0x40026470,0xf0000000,0,unsigned>;
        ///Channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,unsigned> chsel{}; 
        namespace ChselValC{
        }
        ///Memory burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,23),Register::ReadWriteAccess,unsigned> mburst{}; 
        namespace MburstValC{
        }
        ///Peripheral burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> pburst{}; 
        namespace PburstValC{
        }
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ack{}; 
        namespace AckValC{
        }
        ///Current target (only in double buffer               mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ct{}; 
        namespace CtValC{
        }
        ///Double buffer mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbm{}; 
        namespace DbmValC{
        }
        ///Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pl{}; 
        namespace PlValC{
        }
        ///Peripheral increment offset               size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pincos{}; 
        namespace PincosValC{
        }
        ///Memory data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> msize{}; 
        namespace MsizeValC{
        }
        ///Peripheral data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> psize{}; 
        namespace PsizeValC{
        }
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> minc{}; 
        namespace MincValC{
        }
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinc{}; 
        namespace PincValC{
        }
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> circ{}; 
        namespace CircValC{
        }
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///Peripheral flow controller
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pfctrl{}; 
        namespace PfctrlValC{
        }
        ///Transfer complete interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcie{}; 
        namespace TcieValC{
        }
        ///Half transfer interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> htie{}; 
        namespace HtieValC{
        }
        ///Transfer error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> teie{}; 
        namespace TeieValC{
        }
        ///Direct mode error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmeie{}; 
        namespace DmeieValC{
        }
        ///Stream enable / flag stream ready when               read low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
    }
    namespace Nones4ndtr{    ///<stream x number of data           register
        using Addr = Register::Address<0x40026474,0xffff0000,0,unsigned>;
        ///Number of data items to               transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
        namespace NdtValC{
        }
    }
    namespace Nones4par{    ///<stream x peripheral address           register
        using Addr = Register::Address<0x40026478,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
    }
    namespace Nones4m0ar{    ///<stream x memory 0 address           register
        using Addr = Register::Address<0x4002647c,0x00000000,0,unsigned>;
        ///Memory 0 address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m0a{}; 
        namespace M0aValC{
        }
    }
    namespace Nones4m1ar{    ///<stream x memory 1 address           register
        using Addr = Register::Address<0x40026480,0x00000000,0,unsigned>;
        ///Memory 1 address (used in case of Double               buffer mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m1a{}; 
        namespace M1aValC{
        }
    }
    namespace Nones4fcr{    ///<stream x FIFO control register
        using Addr = Register::Address<0x40026484,0xffffff40,0,unsigned>;
        ///FIFO error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feie{}; 
        namespace FeieValC{
        }
        ///FIFO status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> fs{}; 
        namespace FsValC{
        }
        ///Direct mode disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmdis{}; 
        namespace DmdisValC{
        }
        ///FIFO threshold selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fth{}; 
        namespace FthValC{
        }
    }
    namespace Nones5cr{    ///<stream x configuration           register
        using Addr = Register::Address<0x40026488,0xf0000000,0,unsigned>;
        ///Channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,unsigned> chsel{}; 
        namespace ChselValC{
        }
        ///Memory burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,23),Register::ReadWriteAccess,unsigned> mburst{}; 
        namespace MburstValC{
        }
        ///Peripheral burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> pburst{}; 
        namespace PburstValC{
        }
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ack{}; 
        namespace AckValC{
        }
        ///Current target (only in double buffer               mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ct{}; 
        namespace CtValC{
        }
        ///Double buffer mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbm{}; 
        namespace DbmValC{
        }
        ///Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pl{}; 
        namespace PlValC{
        }
        ///Peripheral increment offset               size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pincos{}; 
        namespace PincosValC{
        }
        ///Memory data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> msize{}; 
        namespace MsizeValC{
        }
        ///Peripheral data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> psize{}; 
        namespace PsizeValC{
        }
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> minc{}; 
        namespace MincValC{
        }
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinc{}; 
        namespace PincValC{
        }
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> circ{}; 
        namespace CircValC{
        }
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///Peripheral flow controller
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pfctrl{}; 
        namespace PfctrlValC{
        }
        ///Transfer complete interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcie{}; 
        namespace TcieValC{
        }
        ///Half transfer interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> htie{}; 
        namespace HtieValC{
        }
        ///Transfer error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> teie{}; 
        namespace TeieValC{
        }
        ///Direct mode error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmeie{}; 
        namespace DmeieValC{
        }
        ///Stream enable / flag stream ready when               read low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
    }
    namespace Nones5ndtr{    ///<stream x number of data           register
        using Addr = Register::Address<0x4002648c,0xffff0000,0,unsigned>;
        ///Number of data items to               transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
        namespace NdtValC{
        }
    }
    namespace Nones5par{    ///<stream x peripheral address           register
        using Addr = Register::Address<0x40026490,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
    }
    namespace Nones5m0ar{    ///<stream x memory 0 address           register
        using Addr = Register::Address<0x40026494,0x00000000,0,unsigned>;
        ///Memory 0 address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m0a{}; 
        namespace M0aValC{
        }
    }
    namespace Nones5m1ar{    ///<stream x memory 1 address           register
        using Addr = Register::Address<0x40026498,0x00000000,0,unsigned>;
        ///Memory 1 address (used in case of Double               buffer mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m1a{}; 
        namespace M1aValC{
        }
    }
    namespace Nones5fcr{    ///<stream x FIFO control register
        using Addr = Register::Address<0x4002649c,0xffffff40,0,unsigned>;
        ///FIFO error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feie{}; 
        namespace FeieValC{
        }
        ///FIFO status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> fs{}; 
        namespace FsValC{
        }
        ///Direct mode disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmdis{}; 
        namespace DmdisValC{
        }
        ///FIFO threshold selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fth{}; 
        namespace FthValC{
        }
    }
    namespace Nones6cr{    ///<stream x configuration           register
        using Addr = Register::Address<0x400264a0,0xf0000000,0,unsigned>;
        ///Channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,unsigned> chsel{}; 
        namespace ChselValC{
        }
        ///Memory burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,23),Register::ReadWriteAccess,unsigned> mburst{}; 
        namespace MburstValC{
        }
        ///Peripheral burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> pburst{}; 
        namespace PburstValC{
        }
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ack{}; 
        namespace AckValC{
        }
        ///Current target (only in double buffer               mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ct{}; 
        namespace CtValC{
        }
        ///Double buffer mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbm{}; 
        namespace DbmValC{
        }
        ///Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pl{}; 
        namespace PlValC{
        }
        ///Peripheral increment offset               size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pincos{}; 
        namespace PincosValC{
        }
        ///Memory data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> msize{}; 
        namespace MsizeValC{
        }
        ///Peripheral data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> psize{}; 
        namespace PsizeValC{
        }
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> minc{}; 
        namespace MincValC{
        }
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinc{}; 
        namespace PincValC{
        }
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> circ{}; 
        namespace CircValC{
        }
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///Peripheral flow controller
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pfctrl{}; 
        namespace PfctrlValC{
        }
        ///Transfer complete interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcie{}; 
        namespace TcieValC{
        }
        ///Half transfer interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> htie{}; 
        namespace HtieValC{
        }
        ///Transfer error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> teie{}; 
        namespace TeieValC{
        }
        ///Direct mode error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmeie{}; 
        namespace DmeieValC{
        }
        ///Stream enable / flag stream ready when               read low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
    }
    namespace Nones6ndtr{    ///<stream x number of data           register
        using Addr = Register::Address<0x400264a4,0xffff0000,0,unsigned>;
        ///Number of data items to               transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
        namespace NdtValC{
        }
    }
    namespace Nones6par{    ///<stream x peripheral address           register
        using Addr = Register::Address<0x400264a8,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
    }
    namespace Nones6m0ar{    ///<stream x memory 0 address           register
        using Addr = Register::Address<0x400264ac,0x00000000,0,unsigned>;
        ///Memory 0 address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m0a{}; 
        namespace M0aValC{
        }
    }
    namespace Nones6m1ar{    ///<stream x memory 1 address           register
        using Addr = Register::Address<0x400264b0,0x00000000,0,unsigned>;
        ///Memory 1 address (used in case of Double               buffer mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m1a{}; 
        namespace M1aValC{
        }
    }
    namespace Nones6fcr{    ///<stream x FIFO control register
        using Addr = Register::Address<0x400264b4,0xffffff40,0,unsigned>;
        ///FIFO error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feie{}; 
        namespace FeieValC{
        }
        ///FIFO status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> fs{}; 
        namespace FsValC{
        }
        ///Direct mode disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmdis{}; 
        namespace DmdisValC{
        }
        ///FIFO threshold selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fth{}; 
        namespace FthValC{
        }
    }
    namespace Nones7cr{    ///<stream x configuration           register
        using Addr = Register::Address<0x400264b8,0xf0000000,0,unsigned>;
        ///Channel selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,25),Register::ReadWriteAccess,unsigned> chsel{}; 
        namespace ChselValC{
        }
        ///Memory burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,23),Register::ReadWriteAccess,unsigned> mburst{}; 
        namespace MburstValC{
        }
        ///Peripheral burst transfer               configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,unsigned> pburst{}; 
        namespace PburstValC{
        }
        ///ACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ack{}; 
        namespace AckValC{
        }
        ///Current target (only in double buffer               mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ct{}; 
        namespace CtValC{
        }
        ///Double buffer mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dbm{}; 
        namespace DbmValC{
        }
        ///Priority level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> pl{}; 
        namespace PlValC{
        }
        ///Peripheral increment offset               size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pincos{}; 
        namespace PincosValC{
        }
        ///Memory data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> msize{}; 
        namespace MsizeValC{
        }
        ///Peripheral data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> psize{}; 
        namespace PsizeValC{
        }
        ///Memory increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> minc{}; 
        namespace MincValC{
        }
        ///Peripheral increment mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pinc{}; 
        namespace PincValC{
        }
        ///Circular mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> circ{}; 
        namespace CircValC{
        }
        ///Data transfer direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///Peripheral flow controller
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pfctrl{}; 
        namespace PfctrlValC{
        }
        ///Transfer complete interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tcie{}; 
        namespace TcieValC{
        }
        ///Half transfer interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> htie{}; 
        namespace HtieValC{
        }
        ///Transfer error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> teie{}; 
        namespace TeieValC{
        }
        ///Direct mode error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmeie{}; 
        namespace DmeieValC{
        }
        ///Stream enable / flag stream ready when               read low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
    }
    namespace Nones7ndtr{    ///<stream x number of data           register
        using Addr = Register::Address<0x400264bc,0xffff0000,0,unsigned>;
        ///Number of data items to               transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ndt{}; 
        namespace NdtValC{
        }
    }
    namespace Nones7par{    ///<stream x peripheral address           register
        using Addr = Register::Address<0x400264c0,0x00000000,0,unsigned>;
        ///Peripheral address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
    }
    namespace Nones7m0ar{    ///<stream x memory 0 address           register
        using Addr = Register::Address<0x400264c4,0x00000000,0,unsigned>;
        ///Memory 0 address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m0a{}; 
        namespace M0aValC{
        }
    }
    namespace Nones7m1ar{    ///<stream x memory 1 address           register
        using Addr = Register::Address<0x400264c8,0x00000000,0,unsigned>;
        ///Memory 1 address (used in case of Double               buffer mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> m1a{}; 
        namespace M1aValC{
        }
    }
    namespace Nones7fcr{    ///<stream x FIFO control register
        using Addr = Register::Address<0x400264cc,0xffffff40,0,unsigned>;
        ///FIFO error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feie{}; 
        namespace FeieValC{
        }
        ///FIFO status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> fs{}; 
        namespace FsValC{
        }
        ///Direct mode disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmdis{}; 
        namespace DmdisValC{
        }
        ///FIFO threshold selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fth{}; 
        namespace FthValC{
        }
    }
}
