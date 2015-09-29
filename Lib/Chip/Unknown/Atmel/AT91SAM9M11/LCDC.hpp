#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//LCD Controller
    namespace Nonedmabaddr1{    ///<DMA Base Address Register 1
        using Addr = Register::Address<0x00500000,0x00000003,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> baddrU{}; 
    }
    namespace Nonedmabaddr2{    ///<DMA Base Address Register 2
        using Addr = Register::Address<0x00500004,0x00000000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> baddrL{}; 
    }
    namespace Nonedmafrmpt1{    ///<DMA Frame Pointer Register 1
        using Addr = Register::Address<0x00500008,0xff800000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> frmptU{}; 
    }
    namespace Nonedmafrmpt2{    ///<DMA Frame Pointer Register 2
        using Addr = Register::Address<0x0050000c,0xff800000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> frmptL{}; 
    }
    namespace Nonedmafrmadd1{    ///<DMA Frame Address Register 1
        using Addr = Register::Address<0x00500010,0x00000000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> frmaddU{}; 
    }
    namespace Nonedmafrmadd2{    ///<DMA Frame Address Register 2
        using Addr = Register::Address<0x00500014,0x00000000,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> frmaddL{}; 
    }
    namespace Nonedmafrmcfg{    ///<DMA Frame Configuration Register
        using Addr = Register::Address<0x00500018,0x80800000,0,unsigned>;
        ///Frame Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> frmsize{}; 
        ///Burst Length in Words
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> brstln{}; 
    }
    namespace Nonedmacon{    ///<DMA Control Register
        using Addr = Register::Address<0x0050001c,0xffffffe0,0,unsigned>;
        ///DMA Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///DMA Reset (Write-only)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmarst{}; 
        ///DMA Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmabusy{}; 
        ///DMA Configuration Update
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dmaupdt{}; 
        ///DMA 2D Addressing Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dma2den{}; 
    }
    namespace Nonedma2dcfg{    ///<DMA Control Register
        using Addr = Register::Address<0x00500020,0xe0ff0000,0,unsigned>;
        ///DMA 2D Addressing Address increment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> addrinc{}; 
        ///DAM2D Addressing Pixel offset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> pixeloff{}; 
    }
    namespace Nonelcdcon1{    ///<LCD Control Register 1
        using Addr = Register::Address<0x00500800,0x00000ffe,0,unsigned>;
        ///Bypass LCDDOTCK Divider
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bypass{}; 
        ///Clock Divider
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,12),Register::ReadWriteAccess,unsigned> clkval{}; 
        ///Line Counter (Read-only)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,21),Register::ReadWriteAccess,unsigned> linecnt{}; 
    }
    namespace Nonelcdcon2{    ///<LCD Control Register 2
        using Addr = Register::Address<0x00500804,0x3fff6000,0,unsigned>;
        ///Display Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> distype{}; 
        ///Scan Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> scanmod{}; 
        ///Interface width (STN)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> ifwidth{}; 
        ///Bits per pixel
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> pixelsize{}; 
        ///LCDD polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> invvd{}; 
        ///LCDVSYNC polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> invframe{}; 
        ///LCDHSYNC polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> invline{}; 
        ///LCDDOTCK polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> invclk{}; 
        ///LCDDEN polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> invdval{}; 
        ///LCDDOTCK mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clkmod{}; 
        ///Memory Ordering Format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> memor{}; 
    }
    namespace Nonelcdtim1{    ///<LCD Timing Register 1
        using Addr = Register::Address<0x00500808,0x70c00000,0,unsigned>;
        ///Vertical Front Porch
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> vfp{}; 
        ///Vertical Back Porch
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> vbp{}; 
        ///Vertical Synchronization pulse width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> vpw{}; 
        ///Vertical to horizontal delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> vhdly{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> stuckto1{}; 
    }
    namespace Nonelcdtim2{    ///<LCD Timing Register 2
        using Addr = Register::Address<0x0050080c,0x001fc000,0,unsigned>;
        ///Horizontal Back Porch
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> hbp{}; 
        ///Horizontal synchronization pulse width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> hpw{}; 
        ///Horizontal Front Porch
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,21),Register::ReadWriteAccess,unsigned> hfp{}; 
    }
    namespace Nonelcdfrmcfg{    ///<LCD Frame Configuration Register
        using Addr = Register::Address<0x00500810,0x001ff800,0,unsigned>;
        ///Vertical size of LCD module
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> lineval{}; 
        ///Horizontal size of LCD module, in pixels, minus 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,21),Register::ReadWriteAccess,unsigned> linesize{}; 
    }
    namespace Nonelcdfifo{    ///<LCD FIFO Register
        using Addr = Register::Address<0x00500814,0xffff0000,0,unsigned>;
        ///FIFO Threshold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> fifoth{}; 
    }
    namespace Nonedp12{    ///<Dithering Pattern DP1_2
        using Addr = Register::Address<0x0050081c,0xffffff00,0,unsigned>;
        ///Pattern value for half duty cycle
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dp12{}; 
    }
    namespace Nonedp47{    ///<Dithering Pattern DP4_7
        using Addr = Register::Address<0x00500820,0xf0000000,0,unsigned>;
        ///Pattern value for 4/7 duty cycle
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dp47{}; 
    }
    namespace Nonedp35{    ///<Dithering Pattern DP3_5
        using Addr = Register::Address<0x00500824,0xfff00000,0,unsigned>;
        ///Pattern value for 3/5 duty cycle
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,0),Register::ReadWriteAccess,unsigned> dp35{}; 
    }
    namespace Nonedp23{    ///<Dithering Pattern DP2_3
        using Addr = Register::Address<0x00500828,0xfffff000,0,unsigned>;
        ///Pattern value for 2/3 duty cycle
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dp23{}; 
    }
    namespace Nonedp57{    ///<Dithering Pattern DP5_7
        using Addr = Register::Address<0x0050082c,0xf0000000,0,unsigned>;
        ///Pattern value for 5/7 duty cycle
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dp57{}; 
    }
    namespace Nonedp34{    ///<Dithering Pattern DP3_4
        using Addr = Register::Address<0x00500830,0xffff0000,0,unsigned>;
        ///Pattern value for 3/4 duty cycle
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dp34{}; 
    }
    namespace Nonedp45{    ///<Dithering Pattern DP4_5
        using Addr = Register::Address<0x00500834,0xfff00000,0,unsigned>;
        ///Pattern value for 4/5 duty cycle
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,0),Register::ReadWriteAccess,unsigned> dp45{}; 
    }
    namespace Nonedp67{    ///<Dithering Pattern DP6_7
        using Addr = Register::Address<0x00500838,0xf0000000,0,unsigned>;
        ///Pattern value for 6/7 duty cycle
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dp67{}; 
    }
    namespace Nonepwrcon{    ///<Power Control Register
        using Addr = Register::Address<0x0050083c,0x7fffff00,0,unsigned>;
        ///LCD module power control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lcdPwr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> guardTime{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lcdBusy{}; 
    }
    namespace NonecontrastCtr{    ///<Contrast Control Register
        using Addr = Register::Address<0x00500840,0xfffffff0,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ps{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pol{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena{}; 
    }
    namespace NonecontrastVal{    ///<Contrast Value Register
        using Addr = Register::Address<0x00500844,0xffffffff,0,unsigned>;
    }
    namespace NonelcdIer{    ///<LCD Interrupt Enable Register
        using Addr = Register::Address<0x00500848,0xffffff88,0,unsigned>;
        ///Line interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lnie{}; 
        ///Last line interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lstlnie{}; 
        ///DMA End of frame interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eofie{}; 
        ///FIFO underflow interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uflwie{}; 
        ///FIFO overwrite interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> owrie{}; 
        ///DMA memory error interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> merie{}; 
    }
    namespace NonelcdIdr{    ///<LCD Interrupt Disable Register
        using Addr = Register::Address<0x0050084c,0xffffff88,0,unsigned>;
        ///Line interrupt disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lnid{}; 
        ///Last line interrupt disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lstlnid{}; 
        ///DMA End of frame interrupt disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eofid{}; 
        ///FIFO underflow interrupt disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uflwid{}; 
        ///FIFO overwrite interrupt disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> owrid{}; 
        ///DMA Memory error interrupt disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> merid{}; 
    }
    namespace NonelcdImr{    ///<LCD Interrupt Mask Register
        using Addr = Register::Address<0x00500850,0xffffff88,0,unsigned>;
        ///Line interrupt mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lnim{}; 
        ///Last line interrupt mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lstlnim{}; 
        ///DMA End of frame interrupt mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eofim{}; 
        ///FIFO underflow interrupt mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uflwim{}; 
        ///FIFO overwrite interrupt mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> owrim{}; 
        ///DMA Memory error interrupt mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> merim{}; 
    }
    namespace NonelcdIsr{    ///<LCD Interrupt Status Register
        using Addr = Register::Address<0x00500854,0xffffff88,0,unsigned>;
        ///Line interrupt status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lnis{}; 
        ///Last line interrupt status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lstlnis{}; 
        ///DMA End of frame interrupt status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eofis{}; 
        ///FIFO underflow interrupt status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uflwis{}; 
        ///FIFO overwrite interrupt status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> owris{}; 
        ///DMA Memory error interrupt status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> meris{}; 
    }
    namespace NonelcdIcr{    ///<LCD Interrupt Clear Register
        using Addr = Register::Address<0x00500858,0xffffff88,0,unsigned>;
        ///Line interrupt clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lnic{}; 
        ///Last line interrupt clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lstlnic{}; 
        ///DMA End of frame interrupt clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eofic{}; 
        ///FIFO underflow interrupt clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uflwic{}; 
        ///FIFO overwrite interrupt clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> owric{}; 
        ///DMA Memory error interrupt clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> meric{}; 
    }
    namespace NonelcdItr{    ///<LCD Interrupt Test Register
        using Addr = Register::Address<0x00500860,0xffffff88,0,unsigned>;
        ///Line interrupt test
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lnit{}; 
        ///Last line interrupt test
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lstlnit{}; 
        ///DMA End of frame interrupt test
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eofit{}; 
        ///FIFO underflow interrupt test
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uflwit{}; 
        ///FIFO overwrite interrupt test
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> owrit{}; 
        ///DMA Memory error interrupt test
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> merit{}; 
    }
    namespace NonelcdIrr{    ///<LCD Interrupt Raw Status Register
        using Addr = Register::Address<0x00500864,0xffffff88,0,unsigned>;
        ///Line interrupt raw status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lnir{}; 
        ///Last line interrupt raw status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lstlnir{}; 
        ///DMA End of frame interrupt raw status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eofir{}; 
        ///FIFO underflow interrupt raw status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> uflwir{}; 
        ///FIFO overwrite interrupt raw status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> owrir{}; 
        ///DMA Memory error interrupt raw status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> merir{}; 
    }
    namespace NonelcdWpcr{    ///<Write Protection Control Register
        using Addr = Register::Address<0x005008e4,0xffffffff,0,unsigned>;
    }
    namespace NonelcdWpsr{    ///<Write Protection Status Register
        using Addr = Register::Address<0x005008e8,0xff0000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        ///Write Protect Violation Source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
    }
    namespace Nonelutentry0{    ///<Palette entry
        using Addr = Register::Address<0x00500c00,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry1{    ///<Palette entry
        using Addr = Register::Address<0x00500c04,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry2{    ///<Palette entry
        using Addr = Register::Address<0x00500c08,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry3{    ///<Palette entry
        using Addr = Register::Address<0x00500c0c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry4{    ///<Palette entry
        using Addr = Register::Address<0x00500c10,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry5{    ///<Palette entry
        using Addr = Register::Address<0x00500c14,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry6{    ///<Palette entry
        using Addr = Register::Address<0x00500c18,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry7{    ///<Palette entry
        using Addr = Register::Address<0x00500c1c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry8{    ///<Palette entry
        using Addr = Register::Address<0x00500c20,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry9{    ///<Palette entry
        using Addr = Register::Address<0x00500c24,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry10{    ///<Palette entry
        using Addr = Register::Address<0x00500c28,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry11{    ///<Palette entry
        using Addr = Register::Address<0x00500c2c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry12{    ///<Palette entry
        using Addr = Register::Address<0x00500c30,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry13{    ///<Palette entry
        using Addr = Register::Address<0x00500c34,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry14{    ///<Palette entry
        using Addr = Register::Address<0x00500c38,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry15{    ///<Palette entry
        using Addr = Register::Address<0x00500c3c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry16{    ///<Palette entry
        using Addr = Register::Address<0x00500c40,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry17{    ///<Palette entry
        using Addr = Register::Address<0x00500c44,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry18{    ///<Palette entry
        using Addr = Register::Address<0x00500c48,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry19{    ///<Palette entry
        using Addr = Register::Address<0x00500c4c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry20{    ///<Palette entry
        using Addr = Register::Address<0x00500c50,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry21{    ///<Palette entry
        using Addr = Register::Address<0x00500c54,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry22{    ///<Palette entry
        using Addr = Register::Address<0x00500c58,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry23{    ///<Palette entry
        using Addr = Register::Address<0x00500c5c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry24{    ///<Palette entry
        using Addr = Register::Address<0x00500c60,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry25{    ///<Palette entry
        using Addr = Register::Address<0x00500c64,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry26{    ///<Palette entry
        using Addr = Register::Address<0x00500c68,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry27{    ///<Palette entry
        using Addr = Register::Address<0x00500c6c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry28{    ///<Palette entry
        using Addr = Register::Address<0x00500c70,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry29{    ///<Palette entry
        using Addr = Register::Address<0x00500c74,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry30{    ///<Palette entry
        using Addr = Register::Address<0x00500c78,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry31{    ///<Palette entry
        using Addr = Register::Address<0x00500c7c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry32{    ///<Palette entry
        using Addr = Register::Address<0x00500c80,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry33{    ///<Palette entry
        using Addr = Register::Address<0x00500c84,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry34{    ///<Palette entry
        using Addr = Register::Address<0x00500c88,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry35{    ///<Palette entry
        using Addr = Register::Address<0x00500c8c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry36{    ///<Palette entry
        using Addr = Register::Address<0x00500c90,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry37{    ///<Palette entry
        using Addr = Register::Address<0x00500c94,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry38{    ///<Palette entry
        using Addr = Register::Address<0x00500c98,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry39{    ///<Palette entry
        using Addr = Register::Address<0x00500c9c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry40{    ///<Palette entry
        using Addr = Register::Address<0x00500ca0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry41{    ///<Palette entry
        using Addr = Register::Address<0x00500ca4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry42{    ///<Palette entry
        using Addr = Register::Address<0x00500ca8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry43{    ///<Palette entry
        using Addr = Register::Address<0x00500cac,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry44{    ///<Palette entry
        using Addr = Register::Address<0x00500cb0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry45{    ///<Palette entry
        using Addr = Register::Address<0x00500cb4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry46{    ///<Palette entry
        using Addr = Register::Address<0x00500cb8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry47{    ///<Palette entry
        using Addr = Register::Address<0x00500cbc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry48{    ///<Palette entry
        using Addr = Register::Address<0x00500cc0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry49{    ///<Palette entry
        using Addr = Register::Address<0x00500cc4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry50{    ///<Palette entry
        using Addr = Register::Address<0x00500cc8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry51{    ///<Palette entry
        using Addr = Register::Address<0x00500ccc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry52{    ///<Palette entry
        using Addr = Register::Address<0x00500cd0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry53{    ///<Palette entry
        using Addr = Register::Address<0x00500cd4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry54{    ///<Palette entry
        using Addr = Register::Address<0x00500cd8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry55{    ///<Palette entry
        using Addr = Register::Address<0x00500cdc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry56{    ///<Palette entry
        using Addr = Register::Address<0x00500ce0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry57{    ///<Palette entry
        using Addr = Register::Address<0x00500ce4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry58{    ///<Palette entry
        using Addr = Register::Address<0x00500ce8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry59{    ///<Palette entry
        using Addr = Register::Address<0x00500cec,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry60{    ///<Palette entry
        using Addr = Register::Address<0x00500cf0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry61{    ///<Palette entry
        using Addr = Register::Address<0x00500cf4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry62{    ///<Palette entry
        using Addr = Register::Address<0x00500cf8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry63{    ///<Palette entry
        using Addr = Register::Address<0x00500cfc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry64{    ///<Palette entry
        using Addr = Register::Address<0x00500d00,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry65{    ///<Palette entry
        using Addr = Register::Address<0x00500d04,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry66{    ///<Palette entry
        using Addr = Register::Address<0x00500d08,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry67{    ///<Palette entry
        using Addr = Register::Address<0x00500d0c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry68{    ///<Palette entry
        using Addr = Register::Address<0x00500d10,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry69{    ///<Palette entry
        using Addr = Register::Address<0x00500d14,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry70{    ///<Palette entry
        using Addr = Register::Address<0x00500d18,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry71{    ///<Palette entry
        using Addr = Register::Address<0x00500d1c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry72{    ///<Palette entry
        using Addr = Register::Address<0x00500d20,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry73{    ///<Palette entry
        using Addr = Register::Address<0x00500d24,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry74{    ///<Palette entry
        using Addr = Register::Address<0x00500d28,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry75{    ///<Palette entry
        using Addr = Register::Address<0x00500d2c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry76{    ///<Palette entry
        using Addr = Register::Address<0x00500d30,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry77{    ///<Palette entry
        using Addr = Register::Address<0x00500d34,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry78{    ///<Palette entry
        using Addr = Register::Address<0x00500d38,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry79{    ///<Palette entry
        using Addr = Register::Address<0x00500d3c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry80{    ///<Palette entry
        using Addr = Register::Address<0x00500d40,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry81{    ///<Palette entry
        using Addr = Register::Address<0x00500d44,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry82{    ///<Palette entry
        using Addr = Register::Address<0x00500d48,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry83{    ///<Palette entry
        using Addr = Register::Address<0x00500d4c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry84{    ///<Palette entry
        using Addr = Register::Address<0x00500d50,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry85{    ///<Palette entry
        using Addr = Register::Address<0x00500d54,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry86{    ///<Palette entry
        using Addr = Register::Address<0x00500d58,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry87{    ///<Palette entry
        using Addr = Register::Address<0x00500d5c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry88{    ///<Palette entry
        using Addr = Register::Address<0x00500d60,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry89{    ///<Palette entry
        using Addr = Register::Address<0x00500d64,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry90{    ///<Palette entry
        using Addr = Register::Address<0x00500d68,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry91{    ///<Palette entry
        using Addr = Register::Address<0x00500d6c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry92{    ///<Palette entry
        using Addr = Register::Address<0x00500d70,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry93{    ///<Palette entry
        using Addr = Register::Address<0x00500d74,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry94{    ///<Palette entry
        using Addr = Register::Address<0x00500d78,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry95{    ///<Palette entry
        using Addr = Register::Address<0x00500d7c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry96{    ///<Palette entry
        using Addr = Register::Address<0x00500d80,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry97{    ///<Palette entry
        using Addr = Register::Address<0x00500d84,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry98{    ///<Palette entry
        using Addr = Register::Address<0x00500d88,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry99{    ///<Palette entry
        using Addr = Register::Address<0x00500d8c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry100{    ///<Palette entry
        using Addr = Register::Address<0x00500d90,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry101{    ///<Palette entry
        using Addr = Register::Address<0x00500d94,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry102{    ///<Palette entry
        using Addr = Register::Address<0x00500d98,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry103{    ///<Palette entry
        using Addr = Register::Address<0x00500d9c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry104{    ///<Palette entry
        using Addr = Register::Address<0x00500da0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry105{    ///<Palette entry
        using Addr = Register::Address<0x00500da4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry106{    ///<Palette entry
        using Addr = Register::Address<0x00500da8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry107{    ///<Palette entry
        using Addr = Register::Address<0x00500dac,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry108{    ///<Palette entry
        using Addr = Register::Address<0x00500db0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry109{    ///<Palette entry
        using Addr = Register::Address<0x00500db4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry110{    ///<Palette entry
        using Addr = Register::Address<0x00500db8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry111{    ///<Palette entry
        using Addr = Register::Address<0x00500dbc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry112{    ///<Palette entry
        using Addr = Register::Address<0x00500dc0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry113{    ///<Palette entry
        using Addr = Register::Address<0x00500dc4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry114{    ///<Palette entry
        using Addr = Register::Address<0x00500dc8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry115{    ///<Palette entry
        using Addr = Register::Address<0x00500dcc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry116{    ///<Palette entry
        using Addr = Register::Address<0x00500dd0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry117{    ///<Palette entry
        using Addr = Register::Address<0x00500dd4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry118{    ///<Palette entry
        using Addr = Register::Address<0x00500dd8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry119{    ///<Palette entry
        using Addr = Register::Address<0x00500ddc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry120{    ///<Palette entry
        using Addr = Register::Address<0x00500de0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry121{    ///<Palette entry
        using Addr = Register::Address<0x00500de4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry122{    ///<Palette entry
        using Addr = Register::Address<0x00500de8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry123{    ///<Palette entry
        using Addr = Register::Address<0x00500dec,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry124{    ///<Palette entry
        using Addr = Register::Address<0x00500df0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry125{    ///<Palette entry
        using Addr = Register::Address<0x00500df4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry126{    ///<Palette entry
        using Addr = Register::Address<0x00500df8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry127{    ///<Palette entry
        using Addr = Register::Address<0x00500dfc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry128{    ///<Palette entry
        using Addr = Register::Address<0x00500e00,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry129{    ///<Palette entry
        using Addr = Register::Address<0x00500e04,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry130{    ///<Palette entry
        using Addr = Register::Address<0x00500e08,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry131{    ///<Palette entry
        using Addr = Register::Address<0x00500e0c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry132{    ///<Palette entry
        using Addr = Register::Address<0x00500e10,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry133{    ///<Palette entry
        using Addr = Register::Address<0x00500e14,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry134{    ///<Palette entry
        using Addr = Register::Address<0x00500e18,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry135{    ///<Palette entry
        using Addr = Register::Address<0x00500e1c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry136{    ///<Palette entry
        using Addr = Register::Address<0x00500e20,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry137{    ///<Palette entry
        using Addr = Register::Address<0x00500e24,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry138{    ///<Palette entry
        using Addr = Register::Address<0x00500e28,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry139{    ///<Palette entry
        using Addr = Register::Address<0x00500e2c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry140{    ///<Palette entry
        using Addr = Register::Address<0x00500e30,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry141{    ///<Palette entry
        using Addr = Register::Address<0x00500e34,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry142{    ///<Palette entry
        using Addr = Register::Address<0x00500e38,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry143{    ///<Palette entry
        using Addr = Register::Address<0x00500e3c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry144{    ///<Palette entry
        using Addr = Register::Address<0x00500e40,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry145{    ///<Palette entry
        using Addr = Register::Address<0x00500e44,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry146{    ///<Palette entry
        using Addr = Register::Address<0x00500e48,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry147{    ///<Palette entry
        using Addr = Register::Address<0x00500e4c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry148{    ///<Palette entry
        using Addr = Register::Address<0x00500e50,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry149{    ///<Palette entry
        using Addr = Register::Address<0x00500e54,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry150{    ///<Palette entry
        using Addr = Register::Address<0x00500e58,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry151{    ///<Palette entry
        using Addr = Register::Address<0x00500e5c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry152{    ///<Palette entry
        using Addr = Register::Address<0x00500e60,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry153{    ///<Palette entry
        using Addr = Register::Address<0x00500e64,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry154{    ///<Palette entry
        using Addr = Register::Address<0x00500e68,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry155{    ///<Palette entry
        using Addr = Register::Address<0x00500e6c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry156{    ///<Palette entry
        using Addr = Register::Address<0x00500e70,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry157{    ///<Palette entry
        using Addr = Register::Address<0x00500e74,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry158{    ///<Palette entry
        using Addr = Register::Address<0x00500e78,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry159{    ///<Palette entry
        using Addr = Register::Address<0x00500e7c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry160{    ///<Palette entry
        using Addr = Register::Address<0x00500e80,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry161{    ///<Palette entry
        using Addr = Register::Address<0x00500e84,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry162{    ///<Palette entry
        using Addr = Register::Address<0x00500e88,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry163{    ///<Palette entry
        using Addr = Register::Address<0x00500e8c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry164{    ///<Palette entry
        using Addr = Register::Address<0x00500e90,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry165{    ///<Palette entry
        using Addr = Register::Address<0x00500e94,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry166{    ///<Palette entry
        using Addr = Register::Address<0x00500e98,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry167{    ///<Palette entry
        using Addr = Register::Address<0x00500e9c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry168{    ///<Palette entry
        using Addr = Register::Address<0x00500ea0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry169{    ///<Palette entry
        using Addr = Register::Address<0x00500ea4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry170{    ///<Palette entry
        using Addr = Register::Address<0x00500ea8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry171{    ///<Palette entry
        using Addr = Register::Address<0x00500eac,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry172{    ///<Palette entry
        using Addr = Register::Address<0x00500eb0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry173{    ///<Palette entry
        using Addr = Register::Address<0x00500eb4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry174{    ///<Palette entry
        using Addr = Register::Address<0x00500eb8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry175{    ///<Palette entry
        using Addr = Register::Address<0x00500ebc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry176{    ///<Palette entry
        using Addr = Register::Address<0x00500ec0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry177{    ///<Palette entry
        using Addr = Register::Address<0x00500ec4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry178{    ///<Palette entry
        using Addr = Register::Address<0x00500ec8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry179{    ///<Palette entry
        using Addr = Register::Address<0x00500ecc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry180{    ///<Palette entry
        using Addr = Register::Address<0x00500ed0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry181{    ///<Palette entry
        using Addr = Register::Address<0x00500ed4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry182{    ///<Palette entry
        using Addr = Register::Address<0x00500ed8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry183{    ///<Palette entry
        using Addr = Register::Address<0x00500edc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry184{    ///<Palette entry
        using Addr = Register::Address<0x00500ee0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry185{    ///<Palette entry
        using Addr = Register::Address<0x00500ee4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry186{    ///<Palette entry
        using Addr = Register::Address<0x00500ee8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry187{    ///<Palette entry
        using Addr = Register::Address<0x00500eec,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry188{    ///<Palette entry
        using Addr = Register::Address<0x00500ef0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry189{    ///<Palette entry
        using Addr = Register::Address<0x00500ef4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry190{    ///<Palette entry
        using Addr = Register::Address<0x00500ef8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry191{    ///<Palette entry
        using Addr = Register::Address<0x00500efc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry192{    ///<Palette entry
        using Addr = Register::Address<0x00500f00,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry193{    ///<Palette entry
        using Addr = Register::Address<0x00500f04,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry194{    ///<Palette entry
        using Addr = Register::Address<0x00500f08,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry195{    ///<Palette entry
        using Addr = Register::Address<0x00500f0c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry196{    ///<Palette entry
        using Addr = Register::Address<0x00500f10,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry197{    ///<Palette entry
        using Addr = Register::Address<0x00500f14,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry198{    ///<Palette entry
        using Addr = Register::Address<0x00500f18,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry199{    ///<Palette entry
        using Addr = Register::Address<0x00500f1c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry200{    ///<Palette entry
        using Addr = Register::Address<0x00500f20,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry201{    ///<Palette entry
        using Addr = Register::Address<0x00500f24,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry202{    ///<Palette entry
        using Addr = Register::Address<0x00500f28,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry203{    ///<Palette entry
        using Addr = Register::Address<0x00500f2c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry204{    ///<Palette entry
        using Addr = Register::Address<0x00500f30,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry205{    ///<Palette entry
        using Addr = Register::Address<0x00500f34,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry206{    ///<Palette entry
        using Addr = Register::Address<0x00500f38,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry207{    ///<Palette entry
        using Addr = Register::Address<0x00500f3c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry208{    ///<Palette entry
        using Addr = Register::Address<0x00500f40,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry209{    ///<Palette entry
        using Addr = Register::Address<0x00500f44,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry210{    ///<Palette entry
        using Addr = Register::Address<0x00500f48,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry211{    ///<Palette entry
        using Addr = Register::Address<0x00500f4c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry212{    ///<Palette entry
        using Addr = Register::Address<0x00500f50,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry213{    ///<Palette entry
        using Addr = Register::Address<0x00500f54,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry214{    ///<Palette entry
        using Addr = Register::Address<0x00500f58,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry215{    ///<Palette entry
        using Addr = Register::Address<0x00500f5c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry216{    ///<Palette entry
        using Addr = Register::Address<0x00500f60,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry217{    ///<Palette entry
        using Addr = Register::Address<0x00500f64,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry218{    ///<Palette entry
        using Addr = Register::Address<0x00500f68,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry219{    ///<Palette entry
        using Addr = Register::Address<0x00500f6c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry220{    ///<Palette entry
        using Addr = Register::Address<0x00500f70,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry221{    ///<Palette entry
        using Addr = Register::Address<0x00500f74,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry222{    ///<Palette entry
        using Addr = Register::Address<0x00500f78,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry223{    ///<Palette entry
        using Addr = Register::Address<0x00500f7c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry224{    ///<Palette entry
        using Addr = Register::Address<0x00500f80,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry225{    ///<Palette entry
        using Addr = Register::Address<0x00500f84,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry226{    ///<Palette entry
        using Addr = Register::Address<0x00500f88,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry227{    ///<Palette entry
        using Addr = Register::Address<0x00500f8c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry228{    ///<Palette entry
        using Addr = Register::Address<0x00500f90,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry229{    ///<Palette entry
        using Addr = Register::Address<0x00500f94,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry230{    ///<Palette entry
        using Addr = Register::Address<0x00500f98,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry231{    ///<Palette entry
        using Addr = Register::Address<0x00500f9c,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry232{    ///<Palette entry
        using Addr = Register::Address<0x00500fa0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry233{    ///<Palette entry
        using Addr = Register::Address<0x00500fa4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry234{    ///<Palette entry
        using Addr = Register::Address<0x00500fa8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry235{    ///<Palette entry
        using Addr = Register::Address<0x00500fac,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry236{    ///<Palette entry
        using Addr = Register::Address<0x00500fb0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry237{    ///<Palette entry
        using Addr = Register::Address<0x00500fb4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry238{    ///<Palette entry
        using Addr = Register::Address<0x00500fb8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry239{    ///<Palette entry
        using Addr = Register::Address<0x00500fbc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry240{    ///<Palette entry
        using Addr = Register::Address<0x00500fc0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry241{    ///<Palette entry
        using Addr = Register::Address<0x00500fc4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry242{    ///<Palette entry
        using Addr = Register::Address<0x00500fc8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry243{    ///<Palette entry
        using Addr = Register::Address<0x00500fcc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry244{    ///<Palette entry
        using Addr = Register::Address<0x00500fd0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry245{    ///<Palette entry
        using Addr = Register::Address<0x00500fd4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry246{    ///<Palette entry
        using Addr = Register::Address<0x00500fd8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry247{    ///<Palette entry
        using Addr = Register::Address<0x00500fdc,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry248{    ///<Palette entry
        using Addr = Register::Address<0x00500fe0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry249{    ///<Palette entry
        using Addr = Register::Address<0x00500fe4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry250{    ///<Palette entry
        using Addr = Register::Address<0x00500fe8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry251{    ///<Palette entry
        using Addr = Register::Address<0x00500fec,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry252{    ///<Palette entry
        using Addr = Register::Address<0x00500ff0,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry253{    ///<Palette entry
        using Addr = Register::Address<0x00500ff4,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry254{    ///<Palette entry
        using Addr = Register::Address<0x00500ff8,0xffffffff,0,unsigned>;
    }
    namespace Nonelutentry255{    ///<Palette entry
        using Addr = Register::Address<0x00500ffc,0xffffffff,0,unsigned>;
    }
}
